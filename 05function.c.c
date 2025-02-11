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
    struct sType* mNoSolvedGenericsType;
    struct sType* mOriginalLoadVarType;
    struct sType* mAnyOriginalType;
    _Bool mAnyClass;
    char* mInterfaceName;
    char* mGenericsName;
    struct list$1sTypeph* mGenericsTypes;
    struct list$1sNodeph* mArrayNum;
    _Bool mOmitArrayNum;
    struct list$1sTypeph* mParamTypes;
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
    struct list$1sTypeph* mParamTypes;
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

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value);
static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self);
static struct smart_pointer$1short* smart_pointer$1shortp_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value);
static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self);
static struct smart_pointer$1int* smart_pointer$1intp_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value);
static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self);
static struct smart_pointer$1long* smart_pointer$1longp_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value);
static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self);
static struct smart_pointer$1charp* smart_pointer$1charpp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value);
static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self);
static struct smart_pointer$1float* smart_pointer$1floatp_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value);
static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self);
static struct smart_pointer$1double* smart_pointer$1doublep_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value);
static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self);
static struct list$1char* list$1charp_initialize_with_values(struct list$1char* self, int num_value, char* values);
static struct list$1char* list$1charp_push_back(struct list$1char* self, char item);
static void list$1charp_finalize(struct list$1char* self);
static void list_item$1charp_finalize(struct list_item$1char* self);
static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values);
static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item);
static void list$1charpp_finalize(struct list$1charp* self);
static void list_item$1charpp_finalize(struct list_item$1charp* self);
static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values);
static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item);
static void list$1shortp_finalize(struct list$1short* self);
static void list_item$1shortp_finalize(struct list_item$1short* self);
static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values);
static struct list$1int* list$1intp_push_back(struct list$1int* self, int item);
static void list$1intp_finalize(struct list$1int* self);
static void list_item$1intp_finalize(struct list_item$1int* self);
static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values);
static struct list$1long* list$1longp_push_back(struct list$1long* self, long item);
static void list$1longp_finalize(struct list$1long* self);
static void list_item$1longp_finalize(struct list_item$1long* self);
static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values);
static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item);
static void list$1floatp_finalize(struct list$1float* self);
static void list_item$1floatp_finalize(struct list_item$1float* self);
static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values);
static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item);
static void list$1doublep_finalize(struct list$1double* self);
static void list_item$1doublep_finalize(struct list_item$1double* self);
static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values);
static void vector$1charp_finalize(struct vector$1char* self);
static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values);
static void vector$1charpp_finalize(struct vector$1charp* self);
static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values);
static void vector$1shortp_finalize(struct vector$1short* self);
static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values);
static void vector$1intp_finalize(struct vector$1int* self);
static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values);
static void vector$1longp_finalize(struct vector$1long* self);
static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values);
static void vector$1floatp_finalize(struct vector$1float* self);
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
static struct list$1charph* list$1charphp_initialize(struct list$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info);
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
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2charphcharph_finalize(struct map$2charphcharph* self);
static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1charphp_length(struct list$1charph* self);
static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self);
static struct list$1charp* list$1charpp_initialize(struct list$1charp* self);
static void map$2charphcharphp_finalize(struct map$2charphcharph* self);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item);
static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item);
static void map$2charphcharphp_rehash(struct map$2charphcharph* self);
static char* map$2charphcharphp_begin(struct map$2charphcharph* self);
static _Bool map$2charphcharphp_end(struct map$2charphcharph* self);
static char* map$2charphcharphp_next(struct map$2charphcharph* self);
static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypephp_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sTypephp_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool list$1tuple2$2charphsTypephphp_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sTypephp_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1sNodephp_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list$1charphp_operator_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_reset(struct list$1sRightValueObjectph* self);
static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self);
static _Bool list$1sVarphp_end(struct list$1sVarph* self);
static struct sVar* list$1sVarphp_next(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info);
static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1sTypephp_length(struct list$1sTypeph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self);
struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
unsigned char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_132;
struct buffer* __result64__;
    result_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3781, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_132,self,sizeof(char)*len);
    __result64__ = gComeFunResultObject = __result_obj__ = result_132;
    come_call_finalizer3(result_132,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_133;
int i_134;
struct buffer* __result65__;
    result_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3788, "struct buffer*", (void*)0, (void*)0))));
    for(    i_134=0;    i_134<len;    i_134++    ){
        buffer_append(result_133,self[i_134],strlen(self[i_134]));
    }
    __result65__ = gComeFunResultObject = __result_obj__ = result_133;
    come_call_finalizer3(result_133,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_135;
struct buffer* __result66__;
    result_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3797, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_135,(char*)self,sizeof(short)*len);
    __result66__ = gComeFunResultObject = __result_obj__ = result_135;
    come_call_finalizer3(result_135,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_136;
struct buffer* __result67__;
    result_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3804, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_136,(char*)self,sizeof(int)*len);
    __result67__ = gComeFunResultObject = __result_obj__ = result_136;
    come_call_finalizer3(result_136,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_137;
struct buffer* __result68__;
    result_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3811, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_137,(char*)self,sizeof(long)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = result_137;
    come_call_finalizer3(result_137,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_138;
struct buffer* __result69__;
    result_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3818, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_138,(char*)self,sizeof(float)*len);
    __result69__ = gComeFunResultObject = __result_obj__ = result_138;
    come_call_finalizer3(result_138,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_139;
struct buffer* __result70__;
    result_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3825, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(result_139,(char*)self,sizeof(double)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = result_139;
    come_call_finalizer3(result_139,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result73__;
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4153, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result74__;
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4158, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result74__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result76__;
    __result76__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4163, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result76__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result78__;
    __result78__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4168, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result78__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4173, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_145;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result81__;
    buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4206, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_145,(char*)self,sizeof(char)*len);
    __result81__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4208, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_145))));
    come_call_finalizer3(buf_145,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result81__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_146;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result83__;
    buf_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4213, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_146,(char*)self,sizeof(char*)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charpp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4215, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_146))));
    come_call_finalizer3(buf_146,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_147;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result84__;
    buf_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4220, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_147,(char*)self,sizeof(short)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4222, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_147))));
    come_call_finalizer3(buf_147,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_148;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result85__;
    buf_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4227, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_148,(char*)self,sizeof(int)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4229, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_148))));
    come_call_finalizer3(buf_148,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result85__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_149;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result86__;
    buf_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4234, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_149,(char*)self,sizeof(long)*len);
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4236, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_149))));
    come_call_finalizer3(buf_149,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_150;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result88__;
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4241, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_150,(char*)self,sizeof(float)*len);
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1floatp_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4243, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_150))));
    come_call_finalizer3(buf_150,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result88__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_151;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result90__;
    buf_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4248, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_151,(char*)self,sizeof(double)*len);
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1doublep_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4250, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_151))));
    come_call_finalizer3(buf_151,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result90__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result93__;
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1charp_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4255, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result96__;
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charpp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4260, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1shortp_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4265, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1intp_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4270, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1longp_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4275, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1floatp_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4280, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1doublep_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4285, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1charp_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4290, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charpp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4295, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1shortp_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4300, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1intp_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4305, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result121__;
    __result121__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1longp_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4310, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1floatp_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4315, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1doublep_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4320, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result125__;
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
char* __result166__;
    __result166__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result166__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result167__;
    __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result72__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result72__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result72__;
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
struct smart_pointer$1short* __result75__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result75__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result75__;
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
struct smart_pointer$1int* __result77__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result77__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
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
struct smart_pointer$1long* __result79__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
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
struct smart_pointer$1charp* __result82__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
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
struct smart_pointer$1float* __result87__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
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
struct smart_pointer$1double* __result89__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result89__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result89__;
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
int i_152;
struct list$1char* __result92__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1charp_push_back(self,values[i_152]);
    }
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_153;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_154;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_155;
struct list$1char* __result91__;
    if(    self->len==0) {
        litem_153=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1292, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1302, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1312, "struct list_item$1char*", (void*)0, (void*)0))));
        litem_155->prev=self->tail;
        litem_155->next=((void*)0);
        litem_155->item=item;
        self->tail->next=litem_155;
        self->tail=litem_155;
    }
    self->len++;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result91__;
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

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1charp* __result95__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1charpp_push_back(self,values[i_158]);
    }
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_159;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_160;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_161;
struct list$1charp* __result94__;
    if(    self->len==0) {
        litem_159=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1292, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1302, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1312, "struct list_item$1charp*", (void*)0, (void*)0))));
        litem_161->prev=self->tail;
        litem_161->next=((void*)0);
        litem_161->item=item;
        self->tail->next=litem_161;
        self->tail=litem_161;
    }
    self->len++;
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result94__;
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

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1short* __result98__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1shortp_push_back(self,values[i_164]);
    }
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_165;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_166;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_167;
struct list$1short* __result97__;
    if(    self->len==0) {
        litem_165=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1292, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1302, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1312, "struct list_item$1short*", (void*)0, (void*)0))));
        litem_167->prev=self->tail;
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail->next=litem_167;
        self->tail=litem_167;
    }
    self->len++;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result97__;
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

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_170;
struct list$1int* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_170=0;    i_170<num_value;    i_170++    ){
        list$1intp_push_back(self,values[i_170]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_171;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_172;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_173;
struct list$1int* __result100__;
    if(    self->len==0) {
        litem_171=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1292, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_171->prev=((void*)0);
        litem_171->next=((void*)0);
        litem_171->item=item;
        self->tail=litem_171;
        self->head=litem_171;
    }
    else if(    self->len==1) {
        litem_172=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1302, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_172->prev=self->head;
        litem_172->next=((void*)0);
        litem_172->item=item;
        self->tail=litem_172;
        self->head->next=litem_172;
    }
    else {
        litem_173=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1312, "struct list_item$1int*", (void*)0, (void*)0))));
        litem_173->prev=self->tail;
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail->next=litem_173;
        self->tail=litem_173;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
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

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_176;
struct list$1long* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_176=0;    i_176<num_value;    i_176++    ){
        list$1longp_push_back(self,values[i_176]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_177;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_178;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_179;
struct list$1long* __result103__;
    if(    self->len==0) {
        litem_177=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1292, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_177->prev=((void*)0);
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head=litem_177;
    }
    else if(    self->len==1) {
        litem_178=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1302, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_178->prev=self->head;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail=litem_178;
        self->head->next=litem_178;
    }
    else {
        litem_179=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1312, "struct list_item$1long*", (void*)0, (void*)0))));
        litem_179->prev=self->tail;
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail->next=litem_179;
        self->tail=litem_179;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
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

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_182;
struct list$1float* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_182=0;    i_182<num_value;    i_182++    ){
        list$1floatp_push_back(self,values[i_182]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_183;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_184;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_185;
struct list$1float* __result106__;
    if(    self->len==0) {
        litem_183=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1292, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_183->prev=((void*)0);
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head=litem_183;
    }
    else if(    self->len==1) {
        litem_184=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1302, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_184->prev=self->head;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail=litem_184;
        self->head->next=litem_184;
    }
    else {
        litem_185=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1312, "struct list_item$1float*", (void*)0, (void*)0))));
        litem_185->prev=self->tail;
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail->next=litem_185;
        self->tail=litem_185;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
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

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_188;
struct list$1double* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_188=0;    i_188<num_value;    i_188++    ){
        list$1doublep_push_back(self,values[i_188]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_189;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_190;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_191;
struct list$1double* __result109__;
    if(    self->len==0) {
        litem_189=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1292, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_189->prev=((void*)0);
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head=litem_189;
    }
    else if(    self->len==1) {
        litem_190=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1302, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_190->prev=self->head;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail=litem_190;
        self->head->next=litem_190;
    }
    else {
        litem_191=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1312, "struct list_item$1double*", (void*)0, (void*)0))));
        litem_191->prev=self->tail;
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail->next=litem_191;
        self->tail=litem_191;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
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

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result112__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2084, "char*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
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

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result114__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2084, "char**", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result114__;
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

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result116__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2084, "short*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
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

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result118__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2084, "int*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
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

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result120__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2084, "long*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
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

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2084, "float*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
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

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result124__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2084, "double*", (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
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

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result162__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result162__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result162__;
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

static struct list$1charph* list$1charphp_push_back(struct list$1charph* self, char* item){
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
struct list$1charph* __result164__;
    if(    self->len==0) {
        litem_237=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1292, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_237->prev=((void*)0);
        litem_237->next=((void*)0);
        __dec_obj28=litem_237->item;
        litem_237->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_237;
        self->head=litem_237;
    }
    else if(    self->len==1) {
        litem_238=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1302, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_238->prev=self->head;
        litem_238->next=((void*)0);
        __dec_obj29=litem_238->item;
        litem_238->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_238;
        self->head->next=litem_238;
    }
    else {
        litem_239=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1312, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_239->prev=self->tail;
        litem_239->next=((void*)0);
        __dec_obj30=litem_239->item;
        litem_239->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_239;
        self->tail=litem_239;
    }
    self->len++;
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sSemicolonNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string("sSemicolonNode")));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
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

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
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

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct sLambdaNode* __result222__;
    ((struct sNodeBase*)(__right_value251=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value251,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
char* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value252=__builtin_string("sLambdaNode")));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_290;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct sType* result_type_291;
void* __right_value255 = (void*)0;
int block_level_292;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
struct CVALUE* come_value_293;
void* __right_value258 = (void*)0;
char* __dec_obj34;
void* __right_value296 = (void*)0;
struct sType* __dec_obj80;
_Bool __result240__;
    come_fun_290=info->come_fun;
    info->come_fun=self->mFun;
    result_type_291=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value255=make_define_var(result_type_291,"__result_obj__",(_Bool)0,info))));
        __right_value255 = come_decrement_ref_count2(__right_value255, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_292=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_292;
    come_value_293=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj34=come_value_293->c_value;
    come_value_293->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_293->type;
    come_value_293->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_293->var=((void*)0);
    add_come_last_code(info,"%s",come_value_293->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_293));
    info->come_fun=come_fun_290;
    __result240__ = (_Bool)1;
    come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_293,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result240__;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
char* __dec_obj33;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj33=self->sname;
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result224__;
void* __right_value259 = (void*)0;
void* result_304;
void* __right_value260 = (void*)0;
struct sType* __dec_obj54;
void* __right_value261 = (void*)0;
struct sType* __dec_obj55;
void* __right_value262 = (void*)0;
struct sType* __dec_obj56;
void* __right_value263 = (void*)0;
char* __dec_obj57;
void* __right_value264 = (void*)0;
char* __dec_obj58;
void* __right_value271 = (void*)0;
struct list$1sTypeph* __dec_obj62;
void* __right_value279 = (void*)0;
struct list$1sNodeph* __dec_obj66;
void* __right_value280 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value287 = (void*)0;
struct list$1charph* __dec_obj71;
void* __right_value288 = (void*)0;
struct sType* __dec_obj72;
void* __right_value289 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value290 = (void*)0;
struct sType* __dec_obj74;
void* __right_value291 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value292 = (void*)0;
char* __dec_obj76;
void* __right_value293 = (void*)0;
char* __dec_obj77;
void* __right_value294 = (void*)0;
char* __dec_obj78;
void* __right_value295 = (void*)0;
char* __dec_obj79;
struct sType* __result238__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_304=(void*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=((struct sType*)result_304)->mNoSolvedGenericsType;
        ((struct sType*)result_304)->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=((struct sType*)result_304)->mOriginalLoadVarType;
        ((struct sType*)result_304)->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj56=((struct sType*)result_304)->mAnyOriginalType;
        ((struct sType*)result_304)->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj57=((struct sType*)result_304)->mInterfaceName;
        ((struct sType*)result_304)->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj58=((struct sType*)result_304)->mGenericsName;
        ((struct sType*)result_304)->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj62=((struct sType*)result_304)->mGenericsTypes;
        ((struct sType*)result_304)->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj62,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj66=((struct sType*)result_304)->mArrayNum;
        ((struct sType*)result_304)->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj67=((struct sType*)result_304)->mParamTypes;
        ((struct sType*)result_304)->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj71=((struct sType*)result_304)->mParamNames;
        ((struct sType*)result_304)->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj71,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj72=((struct sType*)result_304)->mResultType;
        ((struct sType*)result_304)->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj73=((struct sType*)result_304)->mAlignas;
        ((struct sType*)result_304)->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj74=((struct sType*)result_304)->mChannelType;
        ((struct sType*)result_304)->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj75=((struct sType*)result_304)->mSizeNum;
        ((struct sType*)result_304)->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj76=((struct sType*)result_304)->mOriginalTypeName;
        ((struct sType*)result_304)->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj77=((struct sType*)result_304)->mAsmName;
        ((struct sType*)result_304)->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj78=((struct sType*)result_304)->mTupleName;
        ((struct sType*)result_304)->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj79=((struct sType*)result_304)->mAttribute;
        ((struct sType*)result_304)->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        ((struct sType*)result_304)->mGenerate=self->mGenerate;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = ((struct sType*)result_304);
    come_call_finalizer3(result_304, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj35;
struct sType* __dec_obj36;
struct sType* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj35=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj36=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result225__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sTypeph* result_305;
struct list_item$1sTypeph* it_306;
void* __right_value270 = (void*)0;
struct list$1sTypeph* __result228__;
    if(    self==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_305=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1208, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_306=self->head;
    while(it_306!=((void*)0)) {
        list$1sTypephp_add(result_305,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_306->item)));
        it_306=it_306->next;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_305;
    come_call_finalizer3(result_305,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result226__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sTypeph* litem_307;
struct sType* __dec_obj59;
void* __right_value268 = (void*)0;
struct list_item$1sTypeph* litem_308;
struct sType* __dec_obj60;
void* __right_value269 = (void*)0;
struct list_item$1sTypeph* litem_309;
struct sType* __dec_obj61;
struct list$1sTypeph* __result227__;
    if(    self->len==0) {
        litem_307=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value267=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1222, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        __dec_obj59=litem_307->item;
        litem_307->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1) {
        litem_308=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value268=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1232, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        __dec_obj60=litem_308->item;
        litem_308->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value269=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1242, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        __dec_obj61=litem_309->item;
        litem_309->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result229__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1sNodeph* result_310;
struct list_item$1sNodeph* it_311;
void* __right_value278 = (void*)0;
struct list$1sNodeph* __result234__;
    if(    self==((void*)0)) {
        __result229__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_310=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1208, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_311=self->head;
    while(it_311!=((void*)0)) {
        list$1sNodephp_add(result_310,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_311->item)));
        it_311=it_311->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_310;
    come_call_finalizer3(result_310,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result230__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1sNodeph* litem_312;
struct sNode* __dec_obj63;
void* __right_value275 = (void*)0;
struct list_item$1sNodeph* litem_313;
struct sNode* __dec_obj64;
void* __right_value276 = (void*)0;
struct list_item$1sNodeph* litem_314;
struct sNode* __dec_obj65;
struct list$1sNodeph* __result231__;
    if(    self->len==0) {
        litem_312=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value274=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1222, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_312->prev=((void*)0);
        litem_312->next=((void*)0);
        __dec_obj63=litem_312->item;
        litem_312->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_312;
        self->head=litem_312;
    }
    else if(    self->len==1) {
        litem_313=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value275=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1232, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_313->prev=self->head;
        litem_313->next=((void*)0);
        __dec_obj64=litem_313->item;
        litem_313->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_313;
        self->head->next=litem_313;
    }
    else {
        litem_314=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value276=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1242, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_314->prev=self->tail;
        litem_314->next=((void*)0);
        __dec_obj65=litem_314->item;
        litem_314->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_314;
        self->tail=litem_314;
    }
    self->len++;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result232__;
void* __right_value277 = (void*)0;
struct sNode* result_315;
struct sNode* __result233__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_315=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_315->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_315->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_315->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_315->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_315->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_315->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_315->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_315->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_315->kind=self->kind;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer2((void*)0, result_315, result_315 ? ((struct sNode*)result_315)->finalize:(void*)0, result_315 ? ((struct sNode*)result_315)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result235__;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1charph* result_316;
struct list_item$1charph* it_317;
void* __right_value286 = (void*)0;
struct list$1charph* __result237__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_316=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1208, "struct list$1charph*", (void*)0, (void*)0))));
    it_317=self->head;
    while(it_317!=((void*)0)) {
        list$1charphp_add(result_316,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_317->item)));
        it_317=it_317->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_316;
    come_call_finalizer3(result_316,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value283 = (void*)0;
struct list_item$1charph* litem_318;
char* __dec_obj68;
void* __right_value284 = (void*)0;
struct list_item$1charph* litem_319;
char* __dec_obj69;
void* __right_value285 = (void*)0;
struct list_item$1charph* litem_320;
char* __dec_obj70;
struct list$1charph* __result236__;
    if(    self->len==0) {
        litem_318=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value283=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1222, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_318->prev=((void*)0);
        litem_318->next=((void*)0);
        __dec_obj68=litem_318->item;
        litem_318->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_318;
        self->head=litem_318;
    }
    else if(    self->len==1) {
        litem_319=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value284=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1232, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_319->prev=self->head;
        litem_319->next=((void*)0);
        __dec_obj69=litem_319->item;
        litem_319->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_319;
        self->head->next=litem_319;
    }
    else {
        litem_320=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value285=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1242, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_320->prev=self->tail;
        litem_320->next=((void*)0);
        __dec_obj70=litem_320->item;
        litem_320->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_320;
        self->tail=litem_320;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value297 = (void*)0;
struct list_item$1CVALUEph* litem_321;
struct CVALUE* __dec_obj81;
void* __right_value298 = (void*)0;
struct list_item$1CVALUEph* litem_322;
struct CVALUE* __dec_obj86;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_323;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result239__;
    if(    self->len==0) {
        litem_321=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1292, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_321->prev=((void*)0);
        litem_321->next=((void*)0);
        __dec_obj81=litem_321->item;
        litem_321->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head=litem_321;
    }
    else if(    self->len==1) {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1302, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_322->prev=self->head;
        litem_322->next=((void*)0);
        __dec_obj86=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head->next=litem_322;
    }
    else {
        litem_323=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1312, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_323->prev=self->tail;
        litem_323->next=((void*)0);
        __dec_obj87=litem_323->item;
        litem_323->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_323;
        self->tail=litem_323;
    }
    self->len++;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj82;
struct sType* __dec_obj83;
char* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj82=self->c_value;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj83=self->type;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj84=self->c_value_without_right_value_objects;
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj85=self->c_value_without_cast_object_value;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value300 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result241__;
    ((struct sNodeBase*)(__right_value300=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value300,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value301=__builtin_string("sFunNode")));
    __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_324;
char* come_fun_name_325;
void* __right_value302 = (void*)0;
char* __dec_obj108;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* result_type_326;
void* __right_value305 = (void*)0;
int block_level_327;
void* __right_value306 = (void*)0;
char* __dec_obj109;
_Bool __result243__;
    come_fun_324=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_325=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj108=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_326=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value305=make_define_var(result_type_326,"__result_obj__",(_Bool)0,info))));
            __right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_327=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_327;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value306=xsprintf("come_heap_final();\n"))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_326,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_324;
    __dec_obj109=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_325);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result243__ = (_Bool)1;
    come_fun_name_325 = come_decrement_ref_count2(come_fun_name_325, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result243__;
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
char* __dec_obj104;
char* __dec_obj105;
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
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj104=self->mAttribute;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj105=self->mFunAttribute;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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

static void sFunNode_finalize(struct sFunNode* self){
char* __dec_obj106;
struct sFun* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj106=self->sname;
            __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        if(        self->mFun==gComeFunResultObject) {
            __dec_obj107=self->mFun;
            come_call_finalizer3(__dec_obj107,sFun_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct list$1sNodeph* __dec_obj110;
struct sBlock* __result244__;
    __dec_obj110=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj111;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj112;
void* __right_value311 = (void*)0;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
struct sType* __dec_obj115;
struct list$1sTypeph* __dec_obj116;
struct list$1charph* __dec_obj117;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
void* __right_value312 = (void*)0;
char* __dec_obj120;
struct sGenericsFun* __result245__;
    __dec_obj111=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj112=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_type_names));
    come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj113=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj113,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj114=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj115=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj116=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj116,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj117=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj118=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj118,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj119=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj120=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj121;
struct list$1charph* __dec_obj122;
struct list$1charph* __dec_obj123;
char* __dec_obj124;
struct sType* __dec_obj125;
struct list$1sTypeph* __dec_obj126;
struct list$1charph* __dec_obj127;
struct list$1charph* __dec_obj128;
char* __dec_obj129;
char* __dec_obj130;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj121=self->mImplType;
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj122=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj122,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj123=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj123,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj124=self->mName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj125=self->mResultType;
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj126=self->mParamTypes;
            come_call_finalizer3(__dec_obj126,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj127=self->mParamNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj128=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj129=self->mBlock;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj130=self->mGenericsSName;
            __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sBlock* result_328;
int sline_top_329;
int block_level_330;
char* p_saved_331;
int sline_saved_332;
char* sname_saved_333;
void* __right_value315 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
struct map$2charphcharph* __dec_obj133;
char* p_336;
int sline_337;
void* __right_value316 = (void*)0;
char* sname_338;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
char* module_name_339;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
struct list$1charph* params_340;
void* __right_value321 = (void*)0;
char* word_341;
void* __right_value322 = (void*)0;
char* __dec_obj134;
void* __right_value323 = (void*)0;
char* __dec_obj135;
void* __right_value324 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result250__;
void* __right_value325 = (void*)0;
struct sClassModule* module_345;
void* __right_value326 = (void*)0;
void* __right_value332 = (void*)0;
struct map$2charphcharph* __dec_obj141;
int i_349;
struct list$1charph* o2_saved_350;
char* it_353;
void* __right_value333 = (void*)0;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __dec_obj142;
void* __right_value342 = (void*)0;
struct sNode* node_400;
void* __right_value343 = (void*)0;
char* __dec_obj143;
_Bool omit_semicolon_404;
void* __right_value347 = (void*)0;
char* __dec_obj147;
char* head_419;
void* __right_value348 = (void*)0;
struct sNode* value_420;
char* tail_421;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sNode* node_423;
void* __right_value352 = (void*)0;
char* __dec_obj149;
struct sNode* node_424;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value357 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj152;
_Bool omit_semicolon_426;
char* p_427;
char* head_428;
void* __right_value359 = (void*)0;
char* source_429;
void* __right_value360 = (void*)0;
struct sNode* node_430;
struct sBlock* __result288__;
node_424 = (void*)0;
    result_328=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0)),info));
    sline_top_329=info->sline_top;
    info->sline_top=info->sline;
    block_level_330=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_331=((void*)0);
        sline_saved_332=0;
        sname_saved_333=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_331) {
                if(                *info->p==0) {
                    info->p=p_saved_331;
                    info->sline=sline_saved_332;
                    __dec_obj131=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_333));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_331=((void*)0);
                    sline_saved_332=0;
                    __dec_obj132=sname_saved_333;
                    sname_saved_333=((void*)0);
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj133=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj133,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_336=info->p;
            sline_337=info->sline;
            sname_338=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_337;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value317=parse_word(info)));
                __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_339=(char*)come_increment_ref_count(parse_word(info));
                params_340=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 223, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_341=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_340,(char*)come_increment_ref_count(word_341));
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
                            word_341 = come_decrement_ref_count2(word_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_341 = come_decrement_ref_count2(word_341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_331=info->p;
                sline_saved_332=info->sline;
                __dec_obj134=sname_saved_333;
                sname_saved_333=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj135=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_339));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value324=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_339)))==((void*)0))),                come_call_finalizer3(__right_value324,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_339 = come_decrement_ref_count2(module_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_338 = come_decrement_ref_count2(sname_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_333 = come_decrement_ref_count2(sname_saved_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_328,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result250__;
                }
                module_345=((struct sClassModule*)(__right_value325=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_339)));
                come_call_finalizer3(__right_value325,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_345->mParams)!=list$1charphp_length(params_340)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj141=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 277, "struct map$2charphcharph*", (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj141,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_349=0;
                for(                o2_saved_350=(struct list$1charph*)come_increment_ref_count((module_345->mParams)),it_353=list$1charphp_begin((o2_saved_350));                !list$1charphp_end((o2_saved_350));                it_353=list$1charphp_next((o2_saved_350))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_353)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value339=list$1charphp_operator_load_element(params_340,i_349))))));
                    __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_349++;
                }
                come_call_finalizer3(o2_saved_350,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_345->mText;
                info->sline=module_345->mSLine;
                __dec_obj142=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_345->mSName));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_339 = come_decrement_ref_count2(module_name_339, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_400=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj143=info->sname;
            info->sname=(char*)come_increment_ref_count(node_400->sname(node_400->_protocol_obj));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_400->sline(node_400->_protocol_obj);
            if(            node_400==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_328->mNodes,(struct sNode*)come_increment_ref_count(node_400));
            parse_sharp_v5(info);
            if(            node_400->terminated(node_400->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_404=(_Bool)1;
            if(            node_400->terminated(node_400->_protocol_obj)) {
                omit_semicolon_404=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_404=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_328->mOmitSemicolon=omit_semicolon_404;
                if(                omit_semicolon_404&&in_function) {
                    list$1sNodephp_delete(result_328->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_336;
                    info->sline=sline_337;
                    __dec_obj147=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_338));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_419=info->p;
                    value_420=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_421=info->p;
                    __dec_obj148=value_420;
                    value_420=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_420),info));
                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_422[tail_421-head_419+1];
                    memset(&buf_422, 0, sizeof(char)                    *(tail_421-head_419+1)                    );
                    memcpy(buf_422,head_419,tail_421-head_419);
                    buf_422[tail_421-head_419]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_423=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_420),(char*)come_increment_ref_count(__builtin_string(buf_422)),info));
                    list$1sNodephp_push_back(result_328->mNodes,(struct sNode*)come_increment_ref_count(node_423));
                    if(value_420) { value_420 = come_decrement_ref_count2(value_420, ((struct sNode*)value_420)->finalize, ((struct sNode*)value_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_338 = come_decrement_ref_count2(sname_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_420) { value_420 = come_decrement_ref_count2(value_420, ((struct sNode*)value_420)->finalize, ((struct sNode*)value_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_423) { node_423 = come_decrement_ref_count2(node_423, ((struct sNode*)node_423)->finalize, ((struct sNode*)node_423)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_338 = come_decrement_ref_count2(sname_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_338 = come_decrement_ref_count2(sname_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_400) { node_400 = come_decrement_ref_count2(node_400, ((struct sNode*)node_400)->finalize, ((struct sNode*)node_400)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_331) {
            if(            info->p==0) {
                info->p=p_saved_331;
                info->sline=sline_saved_332;
                __dec_obj149=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_333));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_331=((void*)0);
                sline_saved_332=0;
            }
        }
        sname_saved_333 = come_decrement_ref_count2(sname_saved_333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value354=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj151=node_424;
            node_424=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value354,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_328->mNodes,(struct sNode*)come_increment_ref_count(node_424));
        }
        else {
            __dec_obj152=node_424;
            node_424=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_424==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_424->terminated(node_424->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_426=(_Bool)1;
            if(            node_424->terminated(node_424->_protocol_obj)) {
                omit_semicolon_426=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_426=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_328->mOmitSemicolon=omit_semicolon_426;
            list$1sNodephp_push_back(result_328->mNodes,(struct sNode*)come_increment_ref_count(node_424));
        }
        if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_427=info->p;
        head_428=info->head;
        source_429=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_429;
        info->head=source_429;
        node_430=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_430==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodephp_push_back(result_328->mNodes,(struct sNode*)come_increment_ref_count(node_430));
        info->p=p_427;
        info->head=head_428;
        source_429 = come_decrement_ref_count2(source_429, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_330;
    __result288__ = gComeFunResultObject = __result_obj__ = result_328;
    come_call_finalizer3(result_328,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_334;
int i_335;
    for(    i_334=0;    i_334<self->size;    i_334++    ){
        if(        self->item_existance[i_334]) {
            if(            1) {
                self->items[i_334] = come_decrement_ref_count2(self->items[i_334], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_335=0;    i_335<self->size;    i_335++    ){
        if(        self->item_existance[i_335]) {
            if(            1) {
                self->keys[i_335] = come_decrement_ref_count2(self->keys[i_335], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_342;
unsigned int hash_343;
unsigned int it_344;
struct sClassModule* __result246__;
struct sClassModule* __result247__;
struct sClassModule* __result248__;
struct sClassModule* __result249__;
default_value_342 = (void*)0;
    memset(&default_value_342,0,sizeof(struct sClassModule*));
    hash_343=charp_get_hash_key(((char*)key))%self->size;
    it_344=hash_343;
    while((_Bool)1) {
        if(        self->item_existance[it_344]) {
            if(            charp_equals(self->keys[it_344],key)) {
                __result246__ = gComeFunResultObject = __result_obj__ = self->items[it_344];
                come_call_finalizer3(default_value_342,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result246__;
            }
            it_344++;
            if(            it_344>=self->size) {
                it_344=0;
            }
            else if(            it_344==hash_343) {
                __result247__ = gComeFunResultObject = __result_obj__ = default_value_342;
                come_call_finalizer3(default_value_342,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result247__;
            }
        }
        else {
            __result248__ = gComeFunResultObject = __result_obj__ = default_value_342;
            come_call_finalizer3(default_value_342,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result248__;
        }
    }
    __result249__ = gComeFunResultObject = __result_obj__ = default_value_342;
    come_call_finalizer3(default_value_342,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj136;
char* __dec_obj137;
struct list$1charph* __dec_obj138;
char* __dec_obj139;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj136=self->mName;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj137=self->mText;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj138=self->mParams;
            come_call_finalizer3(__dec_obj138,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj139=self->mSName;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2charphcharph* map$2charphcharphp_initialize(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
int i_346;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct list$1charp* __dec_obj140;
struct map$2charphcharph* __result252__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value327=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2467, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2468, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value329=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2469, "_Bool*", (void*)0, (void*)0))));
    for(    i_346=0;    i_346<128;    i_346++    ){
        self->item_existance[i_346]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj140=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2479, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj140,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_347;
int i_348;
    for(    i_347=0;    i_347<self->size;    i_347++    ){
        if(        self->item_existance[i_347]) {
            if(            1) {
                self->items[i_347] = come_decrement_ref_count2(self->items[i_347], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_348=0;    i_348<self->size;    i_348++    ){
        if(        self->item_existance[i_348]) {
            if(            1) {
                self->keys[i_348] = come_decrement_ref_count2(self->keys[i_348], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_351;
char* __result253__;
char* __result254__;
char* result_352;
char* __result255__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_351,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->it=self->head;
    if(    self->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_352,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_354;
char* __result256__;
char* __result257__;
char* result_355;
char* __result258__;
result_354 = (void*)0;
result_355 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_354,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_354;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_355,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_355;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharphp_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_373;
unsigned int it_374;
_Bool same_key_exist_391;
char* it2_394;
struct map$2charphcharph* __result279__;
    if(    self->len*10>=self->size) {
        map$2charphcharphp_rehash(self);
    }
    hash_373=charp_get_hash_key(key)%self->size;
    it_374=hash_373;
    while((_Bool)1) {
        if(        self->item_existance[it_374]) {
            if(            charp_equals(self->keys[it_374],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_374]);
                    self->keys[it_374] = come_decrement_ref_count2(self->keys[it_374], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_374]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_374]);
                    self->keys[it_374]=key;
                }
                if(                1) {
                    self->items[it_374] = come_decrement_ref_count2(self->items[it_374], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_374]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_374]=item;
                }
                break;
            }
            it_374++;
            if(            it_374>=self->size) {
                it_374=0;
            }
            else if(            it_374==hash_373) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_374]=(_Bool)1;
            if(            1) {
                self->keys[it_374]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_374]=key;
            }
            if(            1) {
                self->items[it_374]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_374]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_391=(_Bool)0;
    for(    it2_394=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_394=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_394,key)) {
            same_key_exist_391=(_Bool)1;
        }
    }
    if(    !same_key_exist_391) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void map$2charphcharphp_rehash(struct map$2charphcharph* self){
int size_356;
void* __right_value334 = (void*)0;
char** keys_357;
void* __right_value335 = (void*)0;
char** items_358;
void* __right_value336 = (void*)0;
_Bool* item_existance_359;
int len_360;
char* it_363;
char* default_value_366;
void* __right_value337 = (void*)0;
char* it2_367;
unsigned int hash_370;
int n_371;
char* default_value_372;
void* __right_value338 = (void*)0;
default_value_366 = (void*)0;
default_value_372 = (void*)0;
    size_356=self->size*10;
    keys_357=(char**)come_increment_ref_count(((char**)(__right_value334=(char**)come_calloc(1, sizeof(char*)*(1*(size_356)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_358=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_356)), "./comelang.h", 2696, "char**", (void*)0, (void*)0))));
    item_existance_359=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value336=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_356)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_360=0;
    for(    it_363=map$2charphcharphp_begin(self);    !map$2charphcharphp_end(self);    it_363=map$2charphcharphp_next(self)    ){
        memset(&default_value_366,0,sizeof(char*));
        it2_367=((char*)(__right_value337=map$2charphcharphp_at(self,it_363,default_value_366)));
        __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_370=charp_get_hash_key(it_363)%size_356;
        n_371=hash_370;
        while((_Bool)1) {
            if(            item_existance_359[n_371]) {
                n_371++;
                if(                n_371>=size_356) {
                    n_371=0;
                }
                else if(                n_371==hash_370) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_359[n_371]=(_Bool)1;
                keys_357[n_371]=it_363;
                items_358[n_371]=((char*)(__right_value338=map$2charphcharphp_at(self,it_363,default_value_372)));
                __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_360++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_357;
    self->items=items_358;
    self->item_existance=item_existance_359;
    self->size=size_356;
    self->len=len_360;
}

static char* map$2charphcharphp_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_361;
char* __result259__;
char* __result260__;
char* result_362;
char* __result261__;
result_361 = (void*)0;
result_362 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_361,0,sizeof(char*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_361;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_362,0,sizeof(char*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_362;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static _Bool map$2charphcharphp_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharphp_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_364;
char* __result262__;
char* __result263__;
char* result_365;
char* __result264__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_364,0,sizeof(char*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_365,0,sizeof(char*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_368;
unsigned int it_369;
char* __result265__;
char* __result266__;
char* __result267__;
char* __result268__;
    hash_368=charp_get_hash_key(((char*)key))%self->size;
    it_369=hash_368;
    while((_Bool)1) {
        if(        self->item_existance[it_369]) {
            if(            charp_equals(self->keys[it_369],key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_369];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_369++;
            if(            it_369>=self->size) {
                it_369=0;
            }
            else if(            it_369==hash_368) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_375;
struct list_item$1charp* it_376;
struct list$1charp* __result272__;
    it2_375=0;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        if(        charp_equals(it_376->item,item)) {
            list$1charpp_delete(self,it2_375,it2_375+1);
            break;
        }
        it2_375++;
        it_376=it_376->next;
    }
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_377;
struct list$1charp* __result269__;
struct list_item$1charp* it_380;
int i_381;
struct list_item$1charp* prev_it_382;
struct list_item$1charp* it_383;
int i_384;
struct list_item$1charp* prev_it_385;
struct list_item$1charp* it_386;
struct list_item$1charp* head_prev_it_387;
struct list_item$1charp* tail_it_388;
int i_389;
struct list_item$1charp* prev_it_390;
struct list$1charp* __result271__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_377=tail;
        tail=head;
        head=tmp_377;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result269__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_380=self->head;
        i_381=0;
        while(it_380!=((void*)0)) {
            if(            i_381<tail) {
                prev_it_382=it_380;
                it_380=it_380->next;
                i_381++;
                come_call_finalizer3(prev_it_382,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_381==tail) {
                self->head=it_380;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_380=it_380->next;
                i_381++;
            }
        }
    }
    else if(    tail==self->len) {
        it_383=self->head;
        i_384=0;
        while(it_383!=((void*)0)) {
            if(            i_384==head) {
                self->tail=it_383->prev;
                self->tail->next=((void*)0);
            }
            if(            i_384>=head) {
                prev_it_385=it_383;
                it_383=it_383->next;
                i_384++;
                come_call_finalizer3(prev_it_385,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_383=it_383->next;
                i_384++;
            }
        }
    }
    else {
        it_386=self->head;
        head_prev_it_387=((void*)0);
        tail_it_388=((void*)0);
        i_389=0;
        while(it_386!=((void*)0)) {
            if(            i_389==head) {
                head_prev_it_387=it_386->prev;
            }
            if(            i_389==tail) {
                tail_it_388=it_386;
            }
            if(            i_389>=head&&i_389<tail) {
                prev_it_390=it_386;
                it_386=it_386->next;
                i_389++;
                come_call_finalizer3(prev_it_390,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_386=it_386->next;
                i_389++;
            }
        }
        if(        head_prev_it_387!=((void*)0)) {
            head_prev_it_387->next=tail_it_388;
        }
        if(        tail_it_388!=((void*)0)) {
            tail_it_388->prev=head_prev_it_387;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_378;
struct list_item$1charp* prev_it_379;
struct list$1charp* __result270__;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result270__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_392;
char* __result273__;
char* __result274__;
char* result_393;
char* __result275__;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_392,0,sizeof(char*));
        __result273__ = gComeFunResultObject = __result_obj__ = result_392;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    self->it=self->head;
    if(    self->it) {
        __result274__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    memset(&result_393,0,sizeof(char*));
    __result275__ = gComeFunResultObject = __result_obj__ = result_393;
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_395;
char* __result276__;
char* __result277__;
char* result_396;
char* __result278__;
result_395 = (void*)0;
result_396 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_395,0,sizeof(char*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_395;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_396,0,sizeof(char*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_396;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_397;
int i_398;
char* __result280__;
char* default_value_399;
char* __result281__;
default_value_399 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_397=self->head;
    i_398=0;
    while(it_397!=((void*)0)) {
        if(        position==i_398) {
            __result280__ = gComeFunResultObject = __result_obj__ = it_397->item;
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
        it_397=it_397->next;
        i_398++;
    }
    memset(&default_value_399,0,sizeof(char*));
    __result281__ = gComeFunResultObject = __result_obj__ = default_value_399;
    default_value_399 = come_decrement_ref_count2(default_value_399, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value344 = (void*)0;
struct list_item$1sNodeph* litem_401;
struct sNode* __dec_obj144;
void* __right_value345 = (void*)0;
struct list_item$1sNodeph* litem_402;
struct sNode* __dec_obj145;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_403;
struct sNode* __dec_obj146;
struct list$1sNodeph* __result282__;
    if(    self->len==0) {
        litem_401=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value344=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1292, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_401->prev=((void*)0);
        litem_401->next=((void*)0);
        __dec_obj144=litem_401->item;
        litem_401->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_401;
        self->head=litem_401;
    }
    else if(    self->len==1) {
        litem_402=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1302, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_402->prev=self->head;
        litem_402->next=((void*)0);
        __dec_obj145=litem_402->item;
        litem_402->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_402;
        self->head->next=litem_402;
    }
    else {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1312, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_403->prev=self->tail;
        litem_403->next=((void*)0);
        __dec_obj146=litem_403->item;
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_403;
        self->tail=litem_403;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_405;
struct list$1sNodeph* __result283__;
struct list_item$1sNodeph* it_408;
int i_409;
struct list_item$1sNodeph* prev_it_410;
struct list_item$1sNodeph* it_411;
int i_412;
struct list_item$1sNodeph* prev_it_413;
struct list_item$1sNodeph* it_414;
struct list_item$1sNodeph* head_prev_it_415;
struct list_item$1sNodeph* tail_it_416;
int i_417;
struct list_item$1sNodeph* prev_it_418;
struct list$1sNodeph* __result285__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_405=tail;
        tail=head;
        head=tmp_405;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result283__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_408=self->head;
        i_409=0;
        while(it_408!=((void*)0)) {
            if(            i_409<tail) {
                prev_it_410=it_408;
                it_408=it_408->next;
                i_409++;
                come_call_finalizer3(prev_it_410,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_409==tail) {
                self->head=it_408;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_408=it_408->next;
                i_409++;
            }
        }
    }
    else if(    tail==self->len) {
        it_411=self->head;
        i_412=0;
        while(it_411!=((void*)0)) {
            if(            i_412==head) {
                self->tail=it_411->prev;
                self->tail->next=((void*)0);
            }
            if(            i_412>=head) {
                prev_it_413=it_411;
                it_411=it_411->next;
                i_412++;
                come_call_finalizer3(prev_it_413,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_411=it_411->next;
                i_412++;
            }
        }
    }
    else {
        it_414=self->head;
        head_prev_it_415=((void*)0);
        tail_it_416=((void*)0);
        i_417=0;
        while(it_414!=((void*)0)) {
            if(            i_417==head) {
                head_prev_it_415=it_414->prev;
            }
            if(            i_417==tail) {
                tail_it_416=it_414;
            }
            if(            i_417>=head&&i_417<tail) {
                prev_it_418=it_414;
                it_414=it_414->next;
                i_417++;
                come_call_finalizer3(prev_it_418,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_414=it_414->next;
                i_417++;
            }
        }
        if(        head_prev_it_415!=((void*)0)) {
            head_prev_it_415->next=tail_it_416;
        }
        if(        tail_it_416!=((void*)0)) {
            tail_it_416->prev=head_prev_it_415;
        }
    }
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_406;
struct list_item$1sNodeph* prev_it_407;
struct list$1sNodeph* __result284__;
    it_406=self->head;
    while(it_406!=((void*)0)) {
        prev_it_407=it_406;
        it_406=it_406->next;
        come_call_finalizer3(prev_it_407,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result286__;
void* __right_value355 = (void*)0;
void* result_425;
void* __right_value356 = (void*)0;
char* __dec_obj150;
struct sSemicolonNode* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_425=(void*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode", sSemicolonNode_finalize, sSemicolonNode_clone));
    if(    self!=((void*)0)) {
        ((struct sSemicolonNode*)result_425)->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=((struct sSemicolonNode*)result_425)->sname;
        ((struct sSemicolonNode*)result_425)->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sSemicolonNode*)result_425)->sline_real=self->sline_real;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = ((struct sSemicolonNode*)result_425);
    come_call_finalizer3(result_425, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

int transpile_block(struct sBlock* block, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_431;
struct sVarTable* old_table_432;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sVarTable* __dec_obj153;
struct sVarTable* current_loop_vtable_433;
struct list$1sTypeph* param_types__434;
struct list$1charph* param_names__435;
int i_436;
struct list$1charph* o2_saved_437;
char* name_438;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sType* type_439;
void* __right_value365 = (void*)0;
int block_level_443;
int i_444;
struct list$1sNodeph* o2_saved_445;
struct sNode* node_448;
struct list$1sRightValueObjectph* right_value_objects_451;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
int stack_num_before_456;
int sline_457;
void* __right_value368 = (void*)0;
char* sname_458;
void* __right_value369 = (void*)0;
char* __dec_obj161;
_Bool Value_459;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_460;
void* __right_value376 = (void*)0;
struct CVALUE* come_value2_461;
void* __right_value377 = (void*)0;
char* __dec_obj166;
void* __right_value378 = (void*)0;
struct CVALUE* come_value2_463;
struct sVar* var__464;
void* __right_value379 = (void*)0;
struct CVALUE* come_value3_465;
void* __right_value380 = (void*)0;
_Bool _if_conditional2;
void* __right_value381 = (void*)0;
struct sType* __dec_obj167;
void* __right_value382 = (void*)0;
char* c_value_490;
void* __right_value383 = (void*)0;
char* __dec_obj168;
void* __right_value384 = (void*)0;
char* __dec_obj169;
void* __right_value385 = (void*)0;
char* __dec_obj170;
_Bool Value_491;
void* __right_value386 = (void*)0;
char* __dec_obj171;
struct list$1sRightValueObjectph* __dec_obj172;
void* __if_result__0_494 = (void*)0;
struct list$1sVarph* o2_saved_495;
struct sVar* it_498;
struct list$1sVarph* __dec_obj178;
memset(&i_436, 0, sizeof(int));
memset(&i_444, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_431=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_432=info->lv_table;
    if(    !no_var_table) {
        __dec_obj153=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable*", (void*)0, (void*)0)),(_Bool)0,old_table_432));
        come_call_finalizer3(__dec_obj153,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_433=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__434=info->param_types;
    param_names__435=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_437=(param_names),name_438=list$1charphp_begin((o2_saved_437));        !list$1charphp_end((o2_saved_437));        name_438=list$1charphp_next((o2_saved_437))        ){
            type_439=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value363=list$1sTypephp_operator_load_element(param_types,i_436)))));
            come_call_finalizer3(__right_value363,sType_finalize, 0, 1, 0, 0, (void*)0);
            type_439->mFunctionParam=(_Bool)1;
            type_439->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_438,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_439)),info);
            i_436++;
            come_call_finalizer3(type_439,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_443=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_445=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_448=list$1sNodephp_begin((o2_saved_445));        !list$1sNodephp_end((o2_saved_445));        node_448=list$1sNodephp_next((o2_saved_445))        ){
            right_value_objects_451=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj158=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectphp_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "05function.c", 492, "struct list$1sRightValueObjectph*", (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj158,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj159=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj160=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_456=list$1CVALUEphp_length(info->stack);
            sline_457=info->sline;
            sname_458=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_448->sline(node_448->_protocol_obj);
            __dec_obj161=info->sname;
            info->sname=(char*)come_increment_ref_count(node_448->sname(node_448->_protocol_obj));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_444==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_459=node_compile(node_448,info);
                if(                !Value_459) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_456+1) {
                    come_value_460=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_460->type->mClass->mName,"void")&&come_value_460->type->mPointerNum==0) {
                        come_value2_461=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_460));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_461));
                        __dec_obj166=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_461->c_value));
                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_463=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_460));
                        var__464=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__464) {
                            come_value3_465=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0));
                            if(                            var__464->mType->mClass=="void"&&var__464->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__464->mType,((struct sType*)(__right_value380=come_call_cloner(sType_clone, come_value_460->type))),come_value3_465,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj167=var__464->mType;
                            var__464->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_460->type));
                            come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_460->type->mHeap) {
                                c_value_490=(char*)come_increment_ref_count(increment_ref_count_object(come_value_460->type,come_value_460->c_value,info));
                                __dec_obj168=come_value2_463->c_value;
                                come_value2_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__464->mCValueName,c_value_490));
                                __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_490 = come_decrement_ref_count2(c_value_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj169=come_value2_463->c_value;
                                come_value2_463->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__464->mCValueName,come_value_460->c_value));
                                __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_463));
                        __dec_obj170=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_463->c_value));
                        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_460,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_491=node_compile(node_448,info);
                if(                !Value_491) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_457;
            __dec_obj171=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_458));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_456);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObjectphp_reset(info->right_value_objects);
            }
            __dec_obj172=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_451);
            come_call_finalizer3(__dec_obj172,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
            i_444++;
            come_call_finalizer3(right_value_objects_451,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_458 = come_decrement_ref_count2(sname_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_445,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_443==0) {
            for(            o2_saved_495=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_498=list$1sVarphp_begin((o2_saved_495));            !list$1sVarphp_end((o2_saved_495));            it_498=list$1sVarphp_next((o2_saved_495))            ){
                free_object(it_498->mType,it_498->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_495,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj178=info->match_it_var;
            __if_result__0_494=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj178,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_494,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_432;
    info->block_level=block_level_443;
    info->param_types=param_types__434;
    info->param_names=param_names__435;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_433;
    info->inhibits_output_code=inhibits_output_code_431;
    return 0;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_440;
int i_441;
struct sType* __result289__;
struct sType* default_value_442;
struct sType* __result290__;
default_value_442 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_440=self->head;
    i_441=0;
    while(it_440!=((void*)0)) {
        if(        position==i_441) {
            __result289__ = gComeFunResultObject = __result_obj__ = it_440->item;
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
        it_440=it_440->next;
        i_441++;
    }
    memset(&default_value_442,0,sizeof(struct sType*));
    __result290__ = gComeFunResultObject = __result_obj__ = default_value_442;
    come_call_finalizer3(default_value_442,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_446;
struct sNode* __result291__;
struct sNode* __result292__;
struct sNode* result_447;
struct sNode* __result293__;
result_446 = (void*)0;
result_447 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_446,0,sizeof(struct sNode*));
        __result291__ = gComeFunResultObject = __result_obj__ = result_446;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    self->it=self->head;
    if(    self->it) {
        __result292__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    memset(&result_447,0,sizeof(struct sNode*));
    __result293__ = gComeFunResultObject = __result_obj__ = result_447;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_449;
struct sNode* __result294__;
struct sNode* __result295__;
struct sNode* result_450;
struct sNode* __result296__;
result_449 = (void*)0;
result_450 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_449,0,sizeof(struct sNode*));
        __result294__ = gComeFunResultObject = __result_obj__ = result_449;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result295__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    memset(&result_450,0,sizeof(struct sNode*));
    __result296__ = gComeFunResultObject = __result_obj__ = result_450;
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result297__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_452;
struct list_item$1sRightValueObjectph* prev_it_453;
    it_452=self->head;
    while(it_452!=((void*)0)) {
        prev_it_453=it_452;
        it_452=it_452->next;
        come_call_finalizer3(prev_it_453,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj154;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj154=self->item;
            come_call_finalizer3(__dec_obj154,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj155;
char* __dec_obj156;
char* __dec_obj157;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj155=self->mType;
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj156=self->mVarName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj157=self->mFunName;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_454;
struct list_item$1sRightValueObjectph* prev_it_455;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer3(prev_it_455,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result298__;
void* __right_value371 = (void*)0;
void* result_462;
void* __right_value372 = (void*)0;
char* __dec_obj162;
void* __right_value373 = (void*)0;
struct sType* __dec_obj163;
void* __right_value374 = (void*)0;
char* __dec_obj164;
void* __right_value375 = (void*)0;
char* __dec_obj165;
struct CVALUE* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_462=(void*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj162=((struct CVALUE*)result_462)->c_value;
        ((struct CVALUE*)result_462)->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj163=((struct CVALUE*)result_462)->type;
        ((struct CVALUE*)result_462)->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct CVALUE*)result_462)->var=self->var;
    }
    if(    self!=((void*)0)) {
        ((struct CVALUE*)result_462)->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj164=((struct CVALUE*)result_462)->c_value_without_right_value_objects;
        ((struct CVALUE*)result_462)->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj165=((struct CVALUE*)result_462)->c_value_without_cast_object_value;
        ((struct CVALUE*)result_462)->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct CVALUE*)result_462);
    come_call_finalizer3(result_462, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
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
    if(    !charp_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    !list$1tuple2$2charphsTypephphp_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_466;
struct list_item$1tuple2$2charphsTypephph* it2_467;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_466=left->head;
    it2_467=right->head;
    while(it_466!=((void*)0)) {
        if(        !tuple2$2charphsTypephp_equals(it_466->item,it2_467->item)) {
            return (_Bool)0;
        }
        it_466=it_466->next;
        it2_467=it2_467->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypephp_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !charp_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
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
    if(    !charp_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    !list$1sTypephp_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sTypephp_equals(left->mParamTypes,right->mParamTypes)) {
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
    if(    !charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
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
    if(    !charp_equals(left->mAsmName,right->mAsmName)) {
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
    if(    !charp_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !charp_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sTypephp_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_468;
struct list_item$1sTypeph* it2_469;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_468=left->head;
    it2_469=right->head;
    while(it_468!=((void*)0)) {
        if(        !sType_equals(it_468->item,it2_469->item)) {
            return (_Bool)0;
        }
        it_468=it_468->next;
        it2_469=it2_469->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_470;
struct list_item$1sNodeph* it2_471;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_470=left->head;
    it2_471=right->head;
    while(it_470!=((void*)0)) {
        if(        !sNode_equals(it_470->item,it2_471->item)) {
            return (_Bool)0;
        }
        it_470=it_470->next;
        it2_471=it2_471->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_472;
struct list_item$1charph* it2_473;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_472=left->head;
    it2_473=right->head;
    while(it_472!=((void*)0)) {
        if(        !charp_equals(it_472->item,it2_473->item)) {
            return (_Bool)0;
        }
        it_472=it_472->next;
        it2_473=it2_473->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2charphsTypephphp_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed,right->mOutputed)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOutputed2,right->mOutputed2)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNobodyStruct,right->mNobodyStruct)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2charphsTypephphp_operator_not_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
    return !list$1tuple2$2charphsTypephphp_operator_equals(left,right);
}

static _Bool list$1tuple2$2charphsTypephphp_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_474;
struct list_item$1tuple2$2charphsTypephph* it2_475;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_474=left->head;
    it2_475=right->head;
    while(it_474!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_474->item,it2_475->item))) {
            return (_Bool)0;
        }
        it_474=it_474->next;
        it2_475=it2_475->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2charphsTypeph_operator_equals(struct tuple2$2charphsTypeph* self, struct tuple2$2charphsTypeph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mInterfaceName,right->mInterfaceName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mGenericsName,right->mGenericsName)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    list$1sNodeph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOmitArrayNum,right->mOmitArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sTypeph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1charph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenericsStruct,right->mGenericsStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&charp_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2charphsTypephphp_equals(left->mFields,right->mFields)&&bool_equals(left->mOutputed,right->mOutputed)&&bool_equals(left->mOutputed2,right->mOutputed2)&&charp_equals(left->mDeclareSName,right->mDeclareSName)&&bool_equals(left->mNobodyStruct,right->mNobodyStruct)&&charp_equals(left->mParentClassName,right->mParentClassName)&&charp_equals(left->mAttribute,right->mAttribute));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2charphsTypephph_operator_equals(left->mFields,right->mFields))&&(bool_operator_equals(left->mOutputed,right->mOutputed))&&(bool_operator_equals(left->mOutputed2,right->mOutputed2))&&(string_operator_equals(left->mDeclareSName,right->mDeclareSName))&&(bool_operator_equals(left->mNobodyStruct,right->mNobodyStruct))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))));
}

static _Bool list$1tuple2$2charphsTypephph_operator_equals(struct list$1tuple2$2charphsTypephph* left, struct list$1tuple2$2charphsTypephph* right){
struct list_item$1tuple2$2charphsTypephph* it_476;
struct list_item$1tuple2$2charphsTypephph* it2_477;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_476=left->head;
    it2_477=right->head;
    while(it_476!=((void*)0)) {
        if(        !(tuple2$2charphsTypeph_operator_equals(it_476->item,it2_477->item))) {
            return (_Bool)0;
        }
        it_476=it_476->next;
        it2_477=it2_477->next;
    }
    return (_Bool)1;
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&charp_equals(left->mInterfaceName,right->mInterfaceName)&&charp_equals(left->mGenericsName,right->mGenericsName)&&list$1sTypephp_equals(left->mGenericsTypes,right->mGenericsTypes)&&list$1sNodephp_equals(left->mArrayNum,right->mArrayNum)&&bool_equals(left->mOmitArrayNum,right->mOmitArrayNum)&&list$1sTypephp_equals(left->mParamTypes,right->mParamTypes)&&list$1charphp_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs)&&sNode_equals(left->mAlignas,right->mAlignas)&&sType_equals(left->mChannelType,right->mChannelType)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&charp_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mFunctionParam,right->mFunctionParam)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mGenericsStruct,right->mGenericsStruct)&&bool_equals(left->mSolvedGenericsName,right->mSolvedGenericsName)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&charp_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&charp_equals(left->mTupleName,right->mTupleName)&&charp_equals(left->mAttribute,right->mAttribute)&&int_equals(left->mGenericsNumBefore,right->mGenericsNumBefore)&&bool_equals(left->mGenerate,right->mGenerate));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(string_operator_equals(left->mInterfaceName,right->mInterfaceName))&&(string_operator_equals(left->mGenericsName,right->mGenericsName))&&(list$1sTypeph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(list$1sNodeph_operator_equals(left->mArrayNum,right->mArrayNum))&&(bool_operator_equals(left->mOmitArrayNum,right->mOmitArrayNum))&&(list$1sTypeph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1charph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mNoArrayPointerNum,right->mNoArrayPointerNum))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mFunctionParam,right->mFunctionParam))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mGenericsStruct,right->mGenericsStruct))&&(bool_operator_equals(left->mSolvedGenericsName,right->mSolvedGenericsName))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(int_operator_equals(left->mGenericsNumBefore,right->mGenericsNumBefore))&&(bool_operator_equals(left->mGenerate,right->mGenerate))));
}

static _Bool list$1sTypeph_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_478;
struct list_item$1sTypeph* it2_479;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_478=left->head;
    it2_479=right->head;
    while(it_478!=((void*)0)) {
        if(        !(sType_operator_equals(it_478->item,it2_479->item))) {
            return (_Bool)0;
        }
        it_478=it_478->next;
        it2_479=it2_479->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_480;
struct list_item$1sNodeph* it2_481;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_480=left->head;
    it2_481=right->head;
    while(it_480!=((void*)0)) {
        if(        !(sNode_operator_equals(it_480->item,it2_481->item))) {
            return (_Bool)0;
        }
        it_480=it_480->next;
        it2_481=it2_481->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charph_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_482;
struct list_item$1charph* it2_483;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_482=left->head;
    it2_483=right->head;
    while(it_482!=((void*)0)) {
        if(        !(string_operator_equals(it_482->item,it2_483->item))) {
            return (_Bool)0;
        }
        it_482=it_482->next;
        it2_483=it2_483->next;
    }
    return (_Bool)1;
}

static _Bool list$1sTypeph_operator_not_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    return !list$1sTypephp_operator_equals(left,right);
}

static _Bool list$1sTypephp_operator_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
struct list_item$1sTypeph* it_484;
struct list_item$1sTypeph* it2_485;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_484=left->head;
    it2_485=right->head;
    while(it_484!=((void*)0)) {
        if(        !(sType_operator_equals(it_484->item,it2_485->item))) {
            return (_Bool)0;
        }
        it_484=it_484->next;
        it2_485=it2_485->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodeph_operator_not_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    return !list$1sNodephp_operator_equals(left,right);
}

static _Bool list$1sNodephp_operator_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_486;
struct list_item$1sNodeph* it2_487;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_486=left->head;
    it2_487=right->head;
    while(it_486!=((void*)0)) {
        if(        !(sNode_operator_equals(it_486->item,it2_487->item))) {
            return (_Bool)0;
        }
        it_486=it_486->next;
        it2_487=it2_487->next;
    }
    return (_Bool)1;
}

static _Bool list$1charph_operator_not_equals(struct list$1charph* left, struct list$1charph* right){
    return !list$1charphp_operator_equals(left,right);
}

static _Bool list$1charphp_operator_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_488;
struct list_item$1charph* it2_489;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_488=left->head;
    it2_489=right->head;
    while(it_488!=((void*)0)) {
        if(        !(string_operator_equals(it_488->item,it2_489->item))) {
            return (_Bool)0;
        }
        it_488=it_488->next;
        it2_489=it2_489->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectphp_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_492;
struct list_item$1sRightValueObjectph* prev_it_493;
struct list$1sRightValueObjectph* __result300__;
    it_492=self->head;
    while(it_492!=((void*)0)) {
        prev_it_493=it_492;
        it_492=it_492->next;
        come_call_finalizer3(prev_it_493,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_496;
struct sVar* __result301__;
struct sVar* __result302__;
struct sVar* result_497;
struct sVar* __result303__;
result_496 = (void*)0;
result_497 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_496,0,sizeof(struct sVar*));
        __result301__ = gComeFunResultObject = __result_obj__ = result_496;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    self->it=self->head;
    if(    self->it) {
        __result302__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    memset(&result_497,0,sizeof(struct sVar*));
    __result303__ = gComeFunResultObject = __result_obj__ = result_497;
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static _Bool list$1sVarphp_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarphp_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_499;
struct sVar* __result304__;
struct sVar* __result305__;
struct sVar* result_500;
struct sVar* __result306__;
result_499 = (void*)0;
result_500 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_499,0,sizeof(struct sVar*));
        __result304__ = gComeFunResultObject = __result_obj__ = result_499;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result305__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    memset(&result_500,0,sizeof(struct sVar*));
    __result306__ = gComeFunResultObject = __result_obj__ = result_500;
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_501;
struct list_item$1sVarph* prev_it_502;
    it_501=self->head;
    while(it_501!=((void*)0)) {
        prev_it_502=it_501;
        it_501=it_501->next;
        come_call_finalizer3(prev_it_502,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj173;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj173=self->item;
            come_call_finalizer3(__dec_obj173,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj174;
char* __dec_obj175;
struct sType* __dec_obj176;
char* __dec_obj177;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj174=self->mName;
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj175=self->mCValueName;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj176=self->mType;
            come_call_finalizer3(__dec_obj176,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj177=self->mFunName;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_503;
struct list_item$1sVarph* prev_it_504;
    it_503=self->head;
    while(it_503!=((void*)0)) {
        prev_it_504=it_503;
        it_503=it_503->next;
        come_call_finalizer3(prev_it_504,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUEphp_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUEphp_length(info->stack)-top,info);
    }
    if(    list$1CVALUEphp_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUEphp_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line);
            exit(2);
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
void* __result_obj__=(void*)0;
char* head_505;
_Bool dquort_506;
_Bool squort_507;
int sline_508;
int nest_509;
char* tail_510;
void* __right_value387 = (void*)0;
char* buf_511;
void* __right_value388 = (void*)0;
char* __result307__;
    head_505=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_506=(_Bool)0;
        squort_507=(_Bool)0;
        sline_508=0;
        nest_509=0;
        while(1) {
            if(            dquort_506) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_508);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_506=!dquort_506;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_508);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_508);
                        exit(2);
                    }
                }
            }
            else if(            squort_507) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_508);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_507=!squort_507;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_508);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_508);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_508=info->sline;
                info->p++;
                squort_507=!squort_507;
            }
            else if(            *info->p==34) {
                sline_508=info->sline;
                info->p++;
                dquort_506=!dquort_506;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_509++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_509==0) {
                    break;
                }
                nest_509--;
            }
            else if(            *info->p==0) {
                err_msg(info,"The block requires } character for closing block");
                exit(2);
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        err_msg(info,"Require block. This is %c",*info->p);
    }
    tail_510=info->p;
    buf_511=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_510-head_505+1)), "05function.c", 765, "char*", (void*)0, (void*)0));
    memcpy(buf_511,head_505,tail_510-head_505);
    buf_511[tail_510-head_505]=0;
    skip_spaces_and_lf(info);
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string(buf_511)));
    buf_511 = come_decrement_ref_count2(buf_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_512;
char* p3_513;
int i_514;
    terminated_512=(_Bool)0;
    p3_513=p;
    for(    i_514=0;    i_514<strlen(p2);    i_514++    ){
        if(        *p3_513==0) {
            terminated_512=(_Bool)1;
            break;
        }
        p3_513++;
    }
    return !terminated_512&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* asm_fun_name_515;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* result_516;
char* head_517;
int brace_num_518;
char* tail_519;
char* head_520;
int brace_num_521;
char* tail_522;
char* head_523;
char* tail_524;
char* head_525;
char* tail_526;
int len_527;
_Bool in_dquort_528;
int brace_num_529;
char* head_530;
char* tail_531;
char* head_532;
char* tail_533;
char* head_534;
char* tail_535;
char* head_536;
int nest_537;
char* tail_538;
char* head_539;
int nest_540;
char* tail_541;
char* head_542;
int nest_543;
char* tail_544;
char* head_545;
int nest_546;
char* tail_547;
char* head_548;
int nest_549;
char* tail_550;
char* head_551;
char* tail_552;
char* head_553;
char* tail_554;
char* head_555;
char* tail_556;
char* head_557;
char* tail_558;
char* head_559;
char* tail_560;
char* head_561;
int brace_num_562;
char* tail_563;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
struct tuple2$2charphcharph* __result309__;
    asm_fun_name_515=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer*", (void*)0, (void*)0))));
    result_516=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer*", (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_517=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_518=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_518++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_518--;
                        if(                        brace_num_518==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_519=info->p;
            buffer_append(result_516,head_517,tail_519-head_517);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_520=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_521=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_521++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_521--;
                        if(                        brace_num_521==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_522=info->p;
            buffer_append(result_516,head_520,tail_522-head_520);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_523=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_524=info->p;
            buffer_append(result_516,head_523,tail_524-head_523);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_525=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_526=info->p;
            buffer_append(result_516,head_525,tail_526-head_525);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_527=0;
            if(            *info->p==40) {
                in_dquort_528=(_Bool)0;
                brace_num_529=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_528=!in_dquort_528;
                    }
                    else if(                    in_dquort_528) {
                        buffer_append_char(asm_fun_name_515,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_529++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_529--;
                        if(                        brace_num_529==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_530=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_531=info->p;
            buffer_append(result_516,head_530,tail_531-head_530);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_532=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_533=info->p;
            buffer_append(result_516,head_532,tail_533-head_532);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_534=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_535=info->p;
            buffer_append(result_516,head_534,tail_535-head_534);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_536=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_537=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_537++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_537--;
                        if(                        nest_537==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_538=info->p;
            buffer_append(result_516,head_536,tail_538-head_536);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_539=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_540=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_540++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_540--;
                        if(                        nest_540==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_541=info->p;
            buffer_append(result_516,head_539,tail_541-head_539);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_542=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_543=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_543++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_543--;
                        if(                        nest_543==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_544=info->p;
            buffer_append(result_516,head_542,tail_544-head_542);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_545=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_546=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_546++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_546--;
                        if(                        nest_546==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_547=info->p;
            buffer_append(result_516,head_545,tail_547-head_545);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_548=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_549=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_549--;
                        if(                        nest_549==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_550=info->p;
            buffer_append(result_516,head_548,tail_550-head_548);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_551=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_552=info->p;
            buffer_append(result_516,head_551,tail_552-head_551);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_553=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_554=info->p;
            buffer_append(result_516,head_553,tail_554-head_553);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_555=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_556=info->p;
            buffer_append(result_516,head_555,tail_556-head_555);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_557=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_558=info->p;
            buffer_append(result_516,head_557,tail_558-head_557);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_559=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_560=info->p;
            buffer_append(result_516,head_559,tail_560-head_559);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_561=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_562=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_562++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_562--;
                        if(                        brace_num_562==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_563=info->p;
            buffer_append(result_516,head_561,tail_563-head_561);
        }
        else {
            break;
        }
    }
    __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value396=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_515)),(char*)come_increment_ref_count(buffer_to_string(result_516)))));
    come_call_finalizer3(asm_fun_name_515,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_516,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value396,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj179;
char* __dec_obj180;
struct tuple2$2charphcharph* __result308__;
    __dec_obj179=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj180=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj181;
char* __dec_obj182;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj181=self->v1;
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj182=self->v2;
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct buffer* asm_fun_name_564;
void* __right_value399 = (void*)0;
char* attribute_565;
int nest_566;
int nest_567;
int nest_568;
int nest_569;
int nest_570;
void* __right_value400 = (void*)0;
char* __dec_obj183;
int len_571;
_Bool in_dquort_572;
int brace_num_573;
int brace_num_574;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2charphcharph* __result310__;
    asm_fun_name_564=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer*", (void*)0, (void*)0))));
    attribute_565=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_566=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_566++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_566--;
                        if(                        nest_566==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_567=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_567++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_567--;
                        if(                        nest_567==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_568=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_568++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_568--;
                        if(                        nest_568==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_569=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_569++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_569--;
                        if(                        nest_569==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_570=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_570++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_570--;
                        if(                        nest_570==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj183=attribute_565;
            attribute_565=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_571=0;
            if(            *info->p==40) {
                in_dquort_572=(_Bool)0;
                brace_num_573=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_572=!in_dquort_572;
                    }
                    else if(                    in_dquort_572) {
                        buffer_append_char(asm_fun_name_564,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_573++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_573--;
                        if(                        brace_num_573==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_574=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_574++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_574--;
                        if(                        brace_num_574==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value403=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", (void*)0, (void*)0)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_564)),(char*)come_increment_ref_count(attribute_565))));
    come_call_finalizer3(asm_fun_name_564,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_565 = come_decrement_ref_count2(attribute_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value403,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value404 = (void*)0;
char* __dec_obj184;
char* head_575;
int head_sline_576;
void* __right_value405 = (void*)0;
char* buf_577;
void* __right_value406 = (void*)0;
struct sNode* node_578;
_Bool Value_579;
    while(*info->p) {
        __dec_obj184=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_575=info->p;
        head_sline_576=info->sline;
        buf_577=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_577 = come_decrement_ref_count2(buf_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_578=(struct sNode*)come_increment_ref_count(top_level_v99(buf_577,head_575,head_sline_576,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_578!=((void*)0)) {
            Value_579=node_compile(node_578,info);
            if(            !Value_579) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_577 = come_decrement_ref_count2(buf_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_578) { node_578 = come_decrement_ref_count2(node_578, ((struct sNode*)node_578)->finalize, ((struct sNode*)node_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_577 = come_decrement_ref_count2(buf_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_578) { node_578 = come_decrement_ref_count2(node_578, ((struct sNode*)node_578)->finalize, ((struct sNode*)node_578)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value407 = (void*)0;
char* name_580;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sType* result_type_581;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sType* __list_values1___582[7];
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct list$1sTypeph* param_types_587;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
char* __list_values2___588[7];
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1charph* param_names_590;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct list$1charph* param_default_parametors_591;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
struct sFun* main_fun_592;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
char* name_614;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sType* result_type_615;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct sType* __list_values3___616[1];
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct list$1sTypeph* param_types_617;
void* __right_value462 = (void*)0;
char* __list_values4___618[1];
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct list$1charph* param_names_619;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1charph* param_default_parametors_620;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sFun* main_fun_621;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
char* name_622;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sType* result_type_623;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sType* __list_values5___624[7];
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct list$1sTypeph* param_types_625;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
char* __list_values6___626[7];
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct list$1charph* param_names_627;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1charph* param_default_parametors_628;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct sFun* main_fun_629;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
char* name_630;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* result_type_631;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* __list_values7___632[5];
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct list$1sTypeph* param_types_633;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
char* __list_values8___634[5];
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct list$1charph* param_names_635;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct list$1charph* param_default_parametors_636;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sFun* main_fun_637;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* name_638;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* result_type_639;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __list_values9___640[1];
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct list$1sTypeph* param_types_641;
void* __right_value549 = (void*)0;
char* __list_values10___642[1];
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1charph* param_names_643;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1charph* param_default_parametors_644;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct sFun* main_fun_645;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
char* name_646;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* result_type_647;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sType* __list_values11___648[4];
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct list$1sTypeph* param_types_649;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* __list_values12___650[4];
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct list$1charph* param_names_651;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct list$1charph* param_default_parametors_652;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
struct sFun* main_fun_653;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
char* name_654;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* result_type_655;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sType* __list_values13___656[3];
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct list$1sTypeph* param_types_657;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
char* __list_values14___658[3];
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct list$1charph* param_names_659;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct list$1charph* param_default_parametors_660;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sFun* main_fun_661;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
char* name_662;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sType* result_type_663;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct sType* __list_values15___664[1];
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
struct list$1sTypeph* param_types_665;
void* __right_value624 = (void*)0;
char* __list_values16___666[1];
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1charph* param_names_667;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1charph* param_default_parametors_668;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
void* __right_value634 = (void*)0;
struct sFun* main_fun_669;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
char* name_670;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct sType* result_type_671;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* __list_values17___672[3];
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct list$1sTypeph* param_types_673;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
char* __list_values18___674[3];
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1charph* param_names_675;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1charph* param_default_parametors_676;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
struct sFun* main_fun_677;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
char* name_678;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sType* result_type_679;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1sTypeph* param_types_680;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1charph* param_names_681;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct list$1charph* param_default_parametors_682;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sFun* main_fun_683;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
char* name_684;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* result_type_685;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sType* __list_values19___686[4];
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
struct list$1sTypeph* param_types_687;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
char* __list_values20___688[4];
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct list$1charph* param_names_689;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct list$1charph* param_default_parametors_690;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sFun* main_fun_691;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
char* name_692;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sType* result_type_693;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1sTypeph* param_types_694;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1charph* param_names_695;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1charph* param_default_parametors_696;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sFun* fun_697;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
char* name_698;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct sType* result_type_699;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1sTypeph* param_types_700;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct list$1charph* param_names_701;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct list$1charph* param_default_parametors_702;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sFun* fun_703;
void* __right_value736 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_580=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_581=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_587=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___582[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value411=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___582[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value413=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___582[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value415=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___582[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value417=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values1___582[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value419=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values1___582[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value421=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values1___582[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value423=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values1___582)));
        come_call_finalizer3(__right_value411,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value413,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value415,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value417,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value421,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_590=(struct list$1charph*)come_increment_ref_count((__list_values2___588[0]=(char*)come_increment_ref_count(((char*)(__right_value429=__builtin_string("count")))),
__list_values2___588[1]=(char*)come_increment_ref_count(((char*)(__right_value430=__builtin_string("size")))),
__list_values2___588[2]=(char*)come_increment_ref_count(((char*)(__right_value431=__builtin_string("sname")))),
__list_values2___588[3]=(char*)come_increment_ref_count(((char*)(__right_value432=__builtin_string("sline")))),
__list_values2___588[4]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("class_name")))),
__list_values2___588[5]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("finalizer_fun")))),
__list_values2___588[6]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("cloner_fun")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", (void*)0, (void*)0)),7,__list_values2___588)));
        __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_591=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_591,((void*)0));
        list$1charphp_push_back(param_default_parametors_591,((void*)0));
        list$1charphp_push_back(param_default_parametors_591,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_591,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_591,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_592=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_580),(struct sType*)come_increment_ref_count(result_type_581),(struct list$1sTypeph*)come_increment_ref_count(param_types_587),(struct list$1charph*)come_increment_ref_count(param_names_590),(struct list$1charph*)come_increment_ref_count(param_default_parametors_591),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_580)),(struct sFun*)come_increment_ref_count(main_fun_592));
        name_580 = come_decrement_ref_count2(name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_587,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_590,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_591,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_592,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_614=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_615=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_617=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___616[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value459=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values3___616)));
        come_call_finalizer3(__right_value459,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_619=(struct list$1charph*)come_increment_ref_count((__list_values4___618[0]=(char*)come_increment_ref_count(((char*)(__right_value462=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", (void*)0, (void*)0)),1,__list_values4___618)));
        __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_620=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_621=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_614),(struct sType*)come_increment_ref_count(result_type_615),(struct list$1sTypeph*)come_increment_ref_count(param_types_617),(struct list$1charph*)come_increment_ref_count(param_names_619),(struct list$1charph*)come_increment_ref_count(param_default_parametors_620),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_614)),(struct sFun*)come_increment_ref_count(main_fun_621));
        name_614 = come_decrement_ref_count2(name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_615,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_617,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_619,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_620,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_621,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_622=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_623=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_625=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___624[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value478=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___624[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value480=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___624[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value482=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___624[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values5___624[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value486=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___624[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value488=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values5___624[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", (void*)0, (void*)0)),7,__list_values5___624)));
        come_call_finalizer3(__right_value478,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value480,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value482,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value486,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value488,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_627=(struct list$1charph*)come_increment_ref_count((__list_values6___626[0]=(char*)come_increment_ref_count(((char*)(__right_value493=__builtin_string("fun")))),
__list_values6___626[1]=(char*)come_increment_ref_count(((char*)(__right_value494=__builtin_string("mem")))),
__list_values6___626[2]=(char*)come_increment_ref_count(((char*)(__right_value495=__builtin_string("protocol_fun")))),
__list_values6___626[3]=(char*)come_increment_ref_count(((char*)(__right_value496=__builtin_string("protocol_obj")))),
__list_values6___626[4]=(char*)come_increment_ref_count(((char*)(__right_value497=__builtin_string("call_finalizer_only")))),
__list_values6___626[5]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("no_decrement")))),
__list_values6___626[6]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", (void*)0, (void*)0)),7,__list_values6___626)));
        __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_628=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_629=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_622),(struct sType*)come_increment_ref_count(result_type_623),(struct list$1sTypeph*)come_increment_ref_count(param_types_625),(struct list$1charph*)come_increment_ref_count(param_names_627),(struct list$1charph*)come_increment_ref_count(param_default_parametors_628),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_622)),(struct sFun*)come_increment_ref_count(main_fun_629));
        name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_623,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_625,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_629,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_630=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_631=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_633=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___632[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value515=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___632[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value517=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___632[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value519=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values7___632[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value521=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
__list_values7___632[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value523=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", (void*)0, (void*)0)),5,__list_values7___632)));
        come_call_finalizer3(__right_value515,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value517,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value519,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value523,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_635=(struct list$1charph*)come_increment_ref_count((__list_values8___634[0]=(char*)come_increment_ref_count(((char*)(__right_value526=__builtin_string("mem")))),
__list_values8___634[1]=(char*)come_increment_ref_count(((char*)(__right_value527=__builtin_string("protocol_fun")))),
__list_values8___634[2]=(char*)come_increment_ref_count(((char*)(__right_value528=__builtin_string("protocol_obj")))),
__list_values8___634[3]=(char*)come_increment_ref_count(((char*)(__right_value529=__builtin_string("no_decrement")))),
__list_values8___634[4]=(char*)come_increment_ref_count(((char*)(__right_value530=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", (void*)0, (void*)0)),5,__list_values8___634)));
        __right_value526 = come_decrement_ref_count2(__right_value526, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value528 = come_decrement_ref_count2(__right_value528, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_636=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_637=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_630),(struct sType*)come_increment_ref_count(result_type_631),(struct list$1sTypeph*)come_increment_ref_count(param_types_633),(struct list$1charph*)come_increment_ref_count(param_names_635),(struct list$1charph*)come_increment_ref_count(param_default_parametors_636),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_630)),(struct sFun*)come_increment_ref_count(main_fun_637));
        name_630 = come_decrement_ref_count2(name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_631,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_633,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_637,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_638=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_639=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_641=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___640[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value546=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values9___640)));
        come_call_finalizer3(__right_value546,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_643=(struct list$1charph*)come_increment_ref_count((__list_values10___642[0]=(char*)come_increment_ref_count(((char*)(__right_value549=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", (void*)0, (void*)0)),1,__list_values10___642)));
        __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_644=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_645=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_638),(struct sType*)come_increment_ref_count(result_type_639),(struct list$1sTypeph*)come_increment_ref_count(param_types_641),(struct list$1charph*)come_increment_ref_count(param_names_643),(struct list$1charph*)come_increment_ref_count(param_default_parametors_644),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_638)),(struct sFun*)come_increment_ref_count(main_fun_645));
        name_638 = come_decrement_ref_count2(name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_641,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_644,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_645,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_646=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_647=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_649=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___648[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value565=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values11___648[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value567=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values11___648[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value569=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values11___648[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value571=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values11___648)));
        come_call_finalizer3(__right_value565,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value567,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value569,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_651=(struct list$1charph*)come_increment_ref_count((__list_values12___650[0]=(char*)come_increment_ref_count(((char*)(__right_value574=__builtin_string("block")))),
__list_values12___650[1]=(char*)come_increment_ref_count(((char*)(__right_value575=__builtin_string("sname")))),
__list_values12___650[2]=(char*)come_increment_ref_count(((char*)(__right_value576=__builtin_string("sline")))),
__list_values12___650[3]=(char*)come_increment_ref_count(((char*)(__right_value577=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", (void*)0, (void*)0)),4,__list_values12___650)));
        __right_value574 = come_decrement_ref_count2(__right_value574, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_652=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_652,((void*)0));
        list$1charphp_push_back(param_default_parametors_652,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_652,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_652,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_653=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_646),(struct sType*)come_increment_ref_count(result_type_647),(struct list$1sTypeph*)come_increment_ref_count(param_types_649),(struct list$1charph*)come_increment_ref_count(param_names_651),(struct list$1charph*)come_increment_ref_count(param_default_parametors_652),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_646)),(struct sFun*)come_increment_ref_count(main_fun_653));
        name_646 = come_decrement_ref_count2(name_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_653,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_654=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_655=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_657=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___656[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value596=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values13___656[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value598=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values13___656[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value600=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values13___656)));
        come_call_finalizer3(__right_value596,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value598,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value600,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_659=(struct list$1charph*)come_increment_ref_count((__list_values14___658[0]=(char*)come_increment_ref_count(((char*)(__right_value603=__builtin_string("b")))),
__list_values14___658[1]=(char*)come_increment_ref_count(((char*)(__right_value604=__builtin_string("c")))),
__list_values14___658[2]=(char*)come_increment_ref_count(((char*)(__right_value605=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", (void*)0, (void*)0)),3,__list_values14___658)));
        __right_value603 = come_decrement_ref_count2(__right_value603, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value604 = come_decrement_ref_count2(__right_value604, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value605 = come_decrement_ref_count2(__right_value605, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_660=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_661=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_654),(struct sType*)come_increment_ref_count(result_type_655),(struct list$1sTypeph*)come_increment_ref_count(param_types_657),(struct list$1charph*)come_increment_ref_count(param_names_659),(struct list$1charph*)come_increment_ref_count(param_default_parametors_660),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_654)),(struct sFun*)come_increment_ref_count(main_fun_661));
        name_654 = come_decrement_ref_count2(name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_657,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_660,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_661,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_662=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_663=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        param_types_665=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___664[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value621=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values15___664)));
        come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_667=(struct list$1charph*)come_increment_ref_count((__list_values16___666[0]=(char*)come_increment_ref_count(((char*)(__right_value624=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", (void*)0, (void*)0)),1,__list_values16___666)));
        __right_value624 = come_decrement_ref_count2(__right_value624, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_668=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_669=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_662),(struct sType*)come_increment_ref_count(result_type_663),(struct list$1sTypeph*)come_increment_ref_count(param_types_665),(struct list$1charph*)come_increment_ref_count(param_names_667),(struct list$1charph*)come_increment_ref_count(param_default_parametors_668),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_662)),(struct sFun*)come_increment_ref_count(main_fun_669));
        name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_663,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_665,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_667,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_668,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_669,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_670=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_671=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_673=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___672[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value640=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___672[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value642=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values17___672[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value644=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", (void*)0, (void*)0)),3,__list_values17___672)));
        come_call_finalizer3(__right_value640,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value642,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value644,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_675=(struct list$1charph*)come_increment_ref_count((__list_values18___674[0]=(char*)come_increment_ref_count(((char*)(__right_value647=xsprintf("come_malloc")))),
__list_values18___674[1]=(char*)come_increment_ref_count(((char*)(__right_value648=xsprintf("come_debug")))),
__list_values18___674[2]=(char*)come_increment_ref_count(((char*)(__right_value649=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", (void*)0, (void*)0)),3,__list_values18___674)));
        __right_value647 = come_decrement_ref_count2(__right_value647, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value648 = come_decrement_ref_count2(__right_value648, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value649 = come_decrement_ref_count2(__right_value649, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_676=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_676,((void*)0));
        main_fun_677=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_670),(struct sType*)come_increment_ref_count(result_type_671),(struct list$1sTypeph*)come_increment_ref_count(param_types_673),(struct list$1charph*)come_increment_ref_count(param_names_675),(struct list$1charph*)come_increment_ref_count(param_default_parametors_676),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_670)),(struct sFun*)come_increment_ref_count(main_fun_677));
        name_670 = come_decrement_ref_count2(name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_673,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_675,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_677,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_678=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_679=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_680=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1728, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_681=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_682=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_683=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_678),(struct sType*)come_increment_ref_count(result_type_679),(struct list$1sTypeph*)come_increment_ref_count(param_types_680),(struct list$1charph*)come_increment_ref_count(param_names_681),(struct list$1charph*)come_increment_ref_count(param_default_parametors_682),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_678)),(struct sFun*)come_increment_ref_count(main_fun_683));
        name_678 = come_decrement_ref_count2(name_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_679,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_680,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_681,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_682,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_683,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_684=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_685=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info));
        param_types_687=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___686[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value681=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"void*",(_Bool)0,info)))),
__list_values19___686[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value683=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)))),
__list_values19___686[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value685=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
__list_values19___686[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value687=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", (void*)0, (void*)0)),4,__list_values19___686)));
        come_call_finalizer3(__right_value681,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value683,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value685,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value687,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_689=(struct list$1charph*)come_increment_ref_count((__list_values20___688[0]=(char*)come_increment_ref_count(((char*)(__right_value690=__builtin_string("mem")))),
__list_values20___688[1]=(char*)come_increment_ref_count(((char*)(__right_value691=__builtin_string("sname")))),
__list_values20___688[2]=(char*)come_increment_ref_count(((char*)(__right_value692=__builtin_string("sline")))),
__list_values20___688[3]=(char*)come_increment_ref_count(((char*)(__right_value693=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", (void*)0, (void*)0)),4,__list_values20___688)));
        __right_value690 = come_decrement_ref_count2(__right_value690, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value692 = come_decrement_ref_count2(__right_value692, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value693 = come_decrement_ref_count2(__right_value693, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_690=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_691=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_684),(struct sType*)come_increment_ref_count(result_type_685),(struct list$1sTypeph*)come_increment_ref_count(param_types_687),(struct list$1charph*)come_increment_ref_count(param_names_689),(struct list$1charph*)come_increment_ref_count(param_default_parametors_690),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_684)),(struct sFun*)come_increment_ref_count(main_fun_691));
        name_684 = come_decrement_ref_count2(name_684, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_685,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_687,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_691,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_692=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_693=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_694=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1758, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_695=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_696=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0))));
        fun_697=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_692),(struct sType*)come_increment_ref_count(result_type_693),(struct list$1sTypeph*)come_increment_ref_count(param_types_694),(struct list$1charph*)come_increment_ref_count(param_names_695),(struct list$1charph*)come_increment_ref_count(param_default_parametors_696),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_692)),(struct sFun*)come_increment_ref_count(fun_697));
        name_692 = come_decrement_ref_count2(name_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_693,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_694,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_695,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_696,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_697,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_698=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_699=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        param_types_700=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1790, "struct list$1sTypeph*", (void*)0, (void*)0))));
        param_names_701=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_702=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0))));
        fun_703=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_698),(struct sType*)come_increment_ref_count(result_type_699),(struct list$1sTypeph*)come_increment_ref_count(param_types_700),(struct list$1charph*)come_increment_ref_count(param_names_701),(struct list$1charph*)come_increment_ref_count(param_default_parametors_702),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_698)),(struct sFun*)come_increment_ref_count(fun_703));
        name_698 = come_decrement_ref_count2(name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_699,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_700,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_701,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_702,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_703,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_583;
struct list$1sTypeph* __result312__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_583=0;    i_583<num_value;    i_583++    ){
        list$1sTypephp_push_back(self,values[i_583]);
    }
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value424 = (void*)0;
struct list_item$1sTypeph* litem_584;
struct sType* __dec_obj185;
void* __right_value425 = (void*)0;
struct list_item$1sTypeph* litem_585;
struct sType* __dec_obj186;
void* __right_value426 = (void*)0;
struct list_item$1sTypeph* litem_586;
struct sType* __dec_obj187;
struct list$1sTypeph* __result311__;
    if(    self->len==0) {
        litem_584=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value424=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1292, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_584->prev=((void*)0);
        litem_584->next=((void*)0);
        __dec_obj185=litem_584->item;
        litem_584->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_584;
        self->head=litem_584;
    }
    else if(    self->len==1) {
        litem_585=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value425=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1302, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_585->prev=self->head;
        litem_585->next=((void*)0);
        __dec_obj186=litem_585->item;
        litem_585->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_585;
        self->head->next=litem_585;
    }
    else {
        litem_586=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value426=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1312, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_586->prev=self->tail;
        litem_586->next=((void*)0);
        __dec_obj187=litem_586->item;
        litem_586->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_586;
        self->tail=litem_586;
    }
    self->len++;
    __result311__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_589;
struct list$1charph* __result313__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_589=0;    i_589<num_value;    i_589++    ){
        list$1charphp_push_back(self,values[i_589]);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_610;
unsigned int it_611;
_Bool same_key_exist_612;
char* it2_613;
struct map$2charphsFunph* __result324__;
    if(    self->len*10>=self->size) {
        map$2charphsFunphp_rehash(self);
    }
    hash_610=charp_get_hash_key(key)%self->size;
    it_611=hash_610;
    while((_Bool)1) {
        if(        self->item_existance[it_611]) {
            if(            charp_equals(self->keys[it_611],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_611]);
                    self->keys[it_611] = come_decrement_ref_count2(self->keys[it_611], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_611]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_611]);
                    self->keys[it_611]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_611],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_611]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_611]=item;
                }
                break;
            }
            it_611++;
            if(            it_611>=self->size) {
                it_611=0;
            }
            else if(            it_611==hash_610) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_611]=(_Bool)1;
            if(            1) {
                self->keys[it_611]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_611]=key;
            }
            if(            1) {
                self->items[it_611]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_611]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_612=(_Bool)0;
    for(    it2_613=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_613=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_613,key)) {
            same_key_exist_612=(_Bool)1;
        }
    }
    if(    !same_key_exist_612) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result324__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_593;
void* __right_value449 = (void*)0;
char** keys_594;
void* __right_value450 = (void*)0;
struct sFun** items_595;
void* __right_value451 = (void*)0;
_Bool* item_existance_596;
int len_597;
char* it_600;
struct sFun* default_value_603;
void* __right_value452 = (void*)0;
struct sFun* it2_604;
unsigned int hash_607;
int n_608;
struct sFun* default_value_609;
void* __right_value453 = (void*)0;
default_value_603 = (void*)0;
default_value_609 = (void*)0;
    size_593=self->size*10;
    keys_594=(char**)come_increment_ref_count(((char**)(__right_value449=(char**)come_calloc(1, sizeof(char*)*(1*(size_593)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_595=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value450=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_593)), "./comelang.h", 2696, "struct sFun**", (void*)0, (void*)0))));
    item_existance_596=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value451=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_593)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_597=0;
    for(    it_600=map$2charphsFunphp_begin(self);    !map$2charphsFunphp_end(self);    it_600=map$2charphsFunphp_next(self)    ){
        memset(&default_value_603,0,sizeof(struct sFun*));
        it2_604=((struct sFun*)(__right_value452=map$2charphsFunphp_at(self,it_600,default_value_603)));
        come_call_finalizer3(__right_value452,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_607=charp_get_hash_key(it_600)%size_593;
        n_608=hash_607;
        while((_Bool)1) {
            if(            item_existance_596[n_608]) {
                n_608++;
                if(                n_608>=size_593) {
                    n_608=0;
                }
                else if(                n_608==hash_607) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_596[n_608]=(_Bool)1;
                keys_594[n_608]=it_600;
                items_595[n_608]=((struct sFun*)(__right_value453=map$2charphsFunphp_at(self,it_600,default_value_609)));
                come_call_finalizer3(__right_value453,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_597++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_594;
    self->items=items_595;
    self->item_existance=item_existance_596;
    self->size=size_593;
    self->len=len_597;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_598;
char* __result314__;
char* __result315__;
char* result_599;
char* __result316__;
result_598 = (void*)0;
result_599 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_598,0,sizeof(char*));
        __result314__ = gComeFunResultObject = __result_obj__ = result_598;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result315__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    memset(&result_599,0,sizeof(char*));
    __result316__ = gComeFunResultObject = __result_obj__ = result_599;
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_601;
char* __result317__;
char* __result318__;
char* result_602;
char* __result319__;
result_601 = (void*)0;
result_602 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_601,0,sizeof(char*));
        __result317__ = gComeFunResultObject = __result_obj__ = result_601;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result318__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    memset(&result_602,0,sizeof(char*));
    __result319__ = gComeFunResultObject = __result_obj__ = result_602;
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_605;
unsigned int it_606;
struct sFun* __result320__;
struct sFun* __result321__;
struct sFun* __result322__;
struct sFun* __result323__;
    hash_605=charp_get_hash_key(((char*)key))%self->size;
    it_606=hash_605;
    while((_Bool)1) {
        if(        self->item_existance[it_606]) {
            if(            charp_equals(self->keys[it_606],key)) {
                __result320__ = gComeFunResultObject = __result_obj__ = self->items[it_606];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result320__;
            }
            it_606++;
            if(            it_606>=self->size) {
                it_606=0;
            }
            else if(            it_606==hash_605) {
                __result321__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result321__;
            }
        }
        else {
            __result322__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result322__;
        }
    }
    __result323__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_704;
_Bool is_type_name_flag_705;
int sline_706;
_Bool define_struct_nobody_707;
char* p_708;
int sline_709;
void* __right_value737 = (void*)0;
char* word_710;
_Bool define_function_pointer_result_function_711;
_Bool define_variable_between_brace_712;
char* p_713;
void* __right_value738 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_714=0;
char* fun_name_715=0;
_Bool err_716=0;
void* __right_value739 = (void*)0;
char* word_717;
_Bool define_function_flag_718;
char* p_719;
void* __right_value740 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_720=0;
char* fun_name_721=0;
_Bool err_722=0;
char* word_723;
void* __right_value741 = (void*)0;
char* __dec_obj190;
void* __right_value742 = (void*)0;
char* __dec_obj191;
char* __dec_obj192;
void* __right_value743 = (void*)0;
char* __dec_obj193;
_Bool define_variable_724;
char* p_725;
void* __right_value744 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_726=0;
char* fun_name_727=0;
_Bool err_728=0;
void* __right_value745 = (void*)0;
char* word_729;
void* __right_value746 = (void*)0;
char* word_730;
char* p_731;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
char* word_732;
void* __right_value750 = (void*)0;
char* __dec_obj194;
void* __right_value751 = (void*)0;
char* word_733;
void* __right_value752 = (void*)0;
char* word_736;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct sNode* node_737;
struct sNode* __result326__;
void* __right_value755 = (void*)0;
struct sNode* __result327__;
char* header_head_738;
void* __right_value756 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_739=0;
char* fun_name_740=0;
_Bool err_741=0;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct list$1sTypeph* param_types_742;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
struct list$1charph* param_names_743;
void* __right_value761 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_744=0;
char* param_name_745=0;
_Bool err_746=0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1sTypeph* param_types2_748;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
struct list$1charph* param_names2_749;
void* __right_value768 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_750=0;
char* param_name_751=0;
_Bool err_752=0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
char* header_tail_754;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct sType* result_type2_755;
struct sType* __dec_obj195;
void* __right_value773 = (void*)0;
struct list$1sTypeph* __dec_obj196;
void* __right_value774 = (void*)0;
struct list$1charph* __dec_obj197;
_Bool var_args_756;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct buffer* header_buf_757;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct list$1charph* param_default_parametors_758;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sFun* fun_759;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sFun* fun2_763;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value836 = (void*)0;
struct sNode* __result356__;
void* __right_value837 = (void*)0;
struct sNode* node_799;
struct sNode* __result357__;
void* __right_value838 = (void*)0;
struct sNode* node_800;
struct sNode* __result358__;
void* __right_value839 = (void*)0;
struct sNode* node_801;
char* source_tail_802;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct buffer* header_803;
struct sNode* __result359__;
void* __right_value842 = (void*)0;
char* buf2_804;
void* __right_value843 = (void*)0;
struct sNode* __result360__;
    info->in_top_level=(_Bool)1;
    source_head_704=info->p;
    is_type_name_flag_705=is_type_name(buf,info);
    sline_706=info->sline;
    define_struct_nobody_707=(_Bool)0;
    {
        p_708=info->p;
        sline_709=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_710=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_707=(_Bool)1;
                }
                word_710 = come_decrement_ref_count2(word_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_709;
    }
    define_function_pointer_result_function_711=(_Bool)0;
    define_variable_between_brace_712=(_Bool)0;
    if(    is_type_name_flag_705) {
        p_713=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value738=backtrace_parse_type((_Bool)0,info)));
            result_type_714=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_715=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_716=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value738,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_711=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_717=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_717,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_712=(_Bool)1;
                            }
                        }
                        word_717 = come_decrement_ref_count2(word_717, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_714,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_715 = come_decrement_ref_count2(fun_name_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_706;
    }
    define_function_flag_718=(_Bool)0;
    if(    is_type_name_flag_705&&!define_function_pointer_result_function_711&&charp_operator_not_equals(buf,"__typeof__")) {
        p_719=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value740=backtrace_parse_type((_Bool)0,info)));
            result_type_720=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_721=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_722=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value740,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_721 = come_decrement_ref_count2(fun_name_721, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_723=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj190=word_723;
                word_723=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_723,"extern")) {
                    __dec_obj191=word_723;
                    word_723=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj192=word_723;
                word_723=((void*)0);
                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_723) {
                if(                is_type_name(word_723,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj193=word_723;
                        word_723=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_723)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_705) {
                        define_function_flag_718=(_Bool)1;
                    }
                }
            }
            word_723 = come_decrement_ref_count2(word_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_719;
        info->sline=sline_706;
    }
    define_variable_724=(_Bool)1;
    if(    is_type_name_flag_705&&!define_function_pointer_result_function_711) {
        p_725=info->p;
        info->p=head;
        if(        !is_type_name_flag_705) {
            define_variable_724=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value744=backtrace_parse_type((_Bool)0,info)));
            result_type_726=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_727=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_728=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value744,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_729=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_724=(_Bool)1;
                            }
                        }
                        word_729 = come_decrement_ref_count2(word_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_730=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_730,info)&&*info->p!=40) {
                            define_variable_724=(_Bool)1;
                        }
                    }
                    word_730 = come_decrement_ref_count2(word_730, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_726,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_727 = come_decrement_ref_count2(fun_name_727, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_724=(_Bool)0;
        }
        else if(        define_variable_724) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_724=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_724=(_Bool)0;
            }
        }
        info->p=p_725;
        info->sline=sline_706;
    }
    else {
        define_variable_724=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_711) {
        p_731=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value747=parse_struct_attribute(info)));
            __right_value747 = come_decrement_ref_count2(__right_value747, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value748=parse_word(info)));
                __right_value748 = come_decrement_ref_count2(__right_value748, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_732=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj194=word_732;
                        word_732=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_732,"extends")) {
                            define_variable_724=(_Bool)0;
                        }
                    }
                    word_732 = come_decrement_ref_count2(word_732, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_724=(_Bool)0;
        }
        else if(        define_variable_724) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_724=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_724=(_Bool)0;
            }
        }
        info->p=p_731;
        info->sline=sline_706;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_733=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1charphp_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    err_msg(info,"unexpected source end");
                    exit(2);
                }
                else {
                    word_736=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_736)));
                    word_736 = come_decrement_ref_count2(word_736, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_737=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result326__ = gComeFunResultObject = __result_obj__ = node_737;
            if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_733 = come_decrement_ref_count2(word_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result326__;
            if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_733 = come_decrement_ref_count2(word_733, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_707) {
    }
    else if(    define_variable_between_brace_712) {
        info->p=head;
        info->sline=sline_706;
        __result327__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value755=parse_global_variable(info)));
        if(__right_value755) { __right_value755 = come_decrement_ref_count2(__right_value755, ((struct sNode*)__right_value755)->finalize, ((struct sNode*)__right_value755)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    else if(    define_function_pointer_result_function_711) {
        header_head_738=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value756=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_739=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_740=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_741=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value756,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_742=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2119, "struct list$1sTypeph*", (void*)0, (void*)0))));
            param_names_743=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value761=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_744=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_745=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_746=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value761,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_746) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1sTypephp_push_back(param_types_742,(struct sType*)come_increment_ref_count(param_type_744));
                    static int num_function_pointer_result_var_name_a_747=0;
                    list$1charphp_push_back(param_names_743,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_747)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value763=parse_word(info)));
                        __right_value763 = come_decrement_ref_count2(__right_value763, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_745 = come_decrement_ref_count2(param_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_745 = come_decrement_ref_count2(param_name_745, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_748=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2166, "struct list$1sTypeph*", (void*)0, (void*)0))));
                param_names2_749=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value768=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_750=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_751=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_752=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value768,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_752) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1sTypephp_push_back(param_types2_748,(struct sType*)come_increment_ref_count(param_type_750));
                        static int num_function_pointer_result_var_name_b_753=0;
                        list$1charphp_push_back(param_names2_749,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_753)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value770=parse_word(info)));
                            __right_value770 = come_decrement_ref_count2(__right_value770, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_751 = come_decrement_ref_count2(param_name_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_750,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_751 = come_decrement_ref_count2(param_name_751, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_754=info->p;
                result_type2_755=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
                __dec_obj195=result_type2_755->mResultType;
                result_type2_755->mResultType=(struct sType*)come_increment_ref_count(result_type_739);
                come_call_finalizer3(__dec_obj195,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj196=result_type2_755->mParamTypes;
                result_type2_755->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types2_748));
                come_call_finalizer3(__dec_obj196,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj197=result_type2_755->mParamNames;
                result_type2_755->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_749));
                come_call_finalizer3(__dec_obj197,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_755->mVarArgs=(_Bool)0;
                result_type2_755->mStatic=(_Bool)0;
                var_args_756=(_Bool)0;
                header_buf_757=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(header_buf_757,header_head_738,header_tail_754-header_head_738);
                buffer_append_char(header_buf_757,0);
                param_default_parametors_758=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0))));
                fun_759=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_740)),(struct sType*)come_increment_ref_count(result_type2_755),(struct list$1sTypeph*)come_increment_ref_count(param_types_742),(struct list$1charph*)come_increment_ref_count(param_names_743),(struct list$1charph*)come_increment_ref_count(param_default_parametors_758),(_Bool)1,var_args_756,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_757)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_763=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value786=__builtin_string(fun_name_740)))));
                __right_value786 = come_decrement_ref_count2(__right_value786, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_763==((void*)0)||fun2_763->mExternal) {
                    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_740)),(struct sFun*)come_increment_ref_count(fun_759));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value790=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_759),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value836=_inf_value2));
                come_call_finalizer3(param_types2_748,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_749,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_755,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_757,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_758,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_759,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_763,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_742,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_743,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_739,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_740 = come_decrement_ref_count2(fun_name_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value790,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value836) { __right_value836 = come_decrement_ref_count2(__right_value836, ((struct sNode*)__right_value836)->finalize, ((struct sNode*)__right_value836)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result356__;
                come_call_finalizer3(param_types2_748,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_749,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_755,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_757,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_758,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_759,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_763,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_742,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_743,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_739,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_740 = come_decrement_ref_count2(fun_name_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_706;
        node_799=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result357__ = gComeFunResultObject = __result_obj__ = node_799;
        if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result357__;
        if(node_799) { node_799 = come_decrement_ref_count2(node_799, ((struct sNode*)node_799)->finalize, ((struct sNode*)node_799)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_718) {
        info->p=head;
        info->sline=sline_706;
        node_800=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result358__ = gComeFunResultObject = __result_obj__ = node_800;
        if(node_800) { node_800 = come_decrement_ref_count2(node_800, ((struct sNode*)node_800)->finalize, ((struct sNode*)node_800)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result358__;
        if(node_800) { node_800 = come_decrement_ref_count2(node_800, ((struct sNode*)node_800)->finalize, ((struct sNode*)node_800)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_724) {
        info->p=head;
        info->sline=sline_706;
        node_801=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_802=info->p;
        header_803=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(header_803,source_head_704,source_tail_802-source_head_704);
        __result359__ = gComeFunResultObject = __result_obj__ = node_801;
        if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result359__;
        if(node_801) { node_801 = come_decrement_ref_count2(node_801, ((struct sNode*)node_801)->finalize, ((struct sNode*)node_801)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_803,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_706;
    buf2_804=(char*)come_increment_ref_count(parse_word(info));
    __result360__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value843=top_level_v98(buf2_804,head,head_sline,info)));
    buf2_804 = come_decrement_ref_count2(buf2_804, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value843) { __right_value843 = come_decrement_ref_count2(__right_value843, ((struct sNode*)__right_value843)->finalize, ((struct sNode*)__right_value843)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj188;
char* __dec_obj189;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj188=self->v1;
            come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj189=self->v2;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_734;
struct list_item$1charph* prev_it_735;
struct list$1charph* __result325__;
    it_734=self->head;
    while(it_734!=((void*)0)) {
        prev_it_735=it_734;
        it_734=it_734->next;
        come_call_finalizer3(prev_it_735,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_760;
unsigned int hash_761;
unsigned int it_762;
struct sFun* __result328__;
struct sFun* __result329__;
struct sFun* __result330__;
struct sFun* __result331__;
default_value_760 = (void*)0;
    memset(&default_value_760,0,sizeof(struct sFun*));
    hash_761=charp_get_hash_key(((char*)key))%self->size;
    it_762=hash_761;
    while((_Bool)1) {
        if(        self->item_existance[it_762]) {
            if(            charp_equals(self->keys[it_762],key)) {
                __result328__ = gComeFunResultObject = __result_obj__ = self->items[it_762];
                come_call_finalizer3(default_value_760,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result328__;
            }
            it_762++;
            if(            it_762>=self->size) {
                it_762=0;
            }
            else if(            it_762==hash_761) {
                __result329__ = gComeFunResultObject = __result_obj__ = default_value_760;
                come_call_finalizer3(default_value_760,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result329__;
            }
        }
        else {
            __result330__ = gComeFunResultObject = __result_obj__ = default_value_760;
            come_call_finalizer3(default_value_760,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result330__;
        }
    }
    __result331__ = gComeFunResultObject = __result_obj__ = default_value_760;
    come_call_finalizer3(default_value_760,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result332__;
void* __right_value791 = (void*)0;
void* result_764;
void* __right_value792 = (void*)0;
char* __dec_obj198;
void* __right_value835 = (void*)0;
struct sFun* __dec_obj223;
struct sFunNode* __result355__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_764=(void*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode", sFunNode_finalize, sFunNode_clone));
    if(    self!=((void*)0)) {
        ((struct sFunNode*)result_764)->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj198=((struct sFunNode*)result_764)->sname;
        ((struct sFunNode*)result_764)->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFunNode*)result_764)->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj223=((struct sFunNode*)result_764)->mFun;
        ((struct sFunNode*)result_764)->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj223,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result355__ = gComeFunResultObject = __result_obj__ = ((struct sFunNode*)result_764);
    come_call_finalizer3(result_764, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result333__;
void* __right_value793 = (void*)0;
void* result_765;
void* __right_value794 = (void*)0;
char* __dec_obj199;
void* __right_value795 = (void*)0;
struct sType* __dec_obj200;
void* __right_value796 = (void*)0;
struct list$1sTypeph* __dec_obj201;
void* __right_value797 = (void*)0;
struct list$1charph* __dec_obj202;
void* __right_value798 = (void*)0;
struct list$1charph* __dec_obj203;
void* __right_value799 = (void*)0;
struct sType* __dec_obj204;
void* __right_value826 = (void*)0;
struct sBlock* __dec_obj214;
void* __right_value827 = (void*)0;
struct buffer* __dec_obj215;
void* __right_value828 = (void*)0;
struct buffer* __dec_obj216;
void* __right_value829 = (void*)0;
struct buffer* __dec_obj217;
void* __right_value830 = (void*)0;
struct buffer* __dec_obj218;
void* __right_value831 = (void*)0;
char* __dec_obj219;
void* __right_value832 = (void*)0;
char* __dec_obj220;
void* __right_value833 = (void*)0;
char* __dec_obj221;
void* __right_value834 = (void*)0;
char* __dec_obj222;
struct sFun* __result354__;
    if(    self==(void*)0) {
        __result333__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    result_765=(void*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj199=((struct sFun*)result_765)->mName;
        ((struct sFun*)result_765)->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj200=((struct sFun*)result_765)->mResultType;
        ((struct sFun*)result_765)->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj200,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj201=((struct sFun*)result_765)->mParamTypes;
        ((struct sFun*)result_765)->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj201,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj202=((struct sFun*)result_765)->mParamNames;
        ((struct sFun*)result_765)->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj202,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj203=((struct sFun*)result_765)->mParamDefaultParametors;
        ((struct sFun*)result_765)->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj203,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj204=((struct sFun*)result_765)->mLambdaType;
        ((struct sFun*)result_765)->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj214=((struct sFun*)result_765)->mBlock;
        ((struct sFun*)result_765)->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj214,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj215=((struct sFun*)result_765)->mSource;
        ((struct sFun*)result_765)->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj215,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj216=((struct sFun*)result_765)->mSourceHead;
        ((struct sFun*)result_765)->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj216,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj217=((struct sFun*)result_765)->mSourceHead2;
        ((struct sFun*)result_765)->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj217,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj218=((struct sFun*)result_765)->mSourceDefer;
        ((struct sFun*)result_765)->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj219=((struct sFun*)result_765)->mComeHeader;
        ((struct sFun*)result_765)->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj220=((struct sFun*)result_765)->mDeclareSName;
        ((struct sFun*)result_765)->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        ((struct sFun*)result_765)->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj221=((struct sFun*)result_765)->mAttribute;
        ((struct sFun*)result_765)->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj222=((struct sFun*)result_765)->mFunAttribute;
        ((struct sFun*)result_765)->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result354__ = gComeFunResultObject = __result_obj__ = ((struct sFun*)result_765);
    come_call_finalizer3(result_765, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result334__;
void* __right_value800 = (void*)0;
void* result_766;
void* __right_value801 = (void*)0;
struct list$1sNodeph* __dec_obj205;
void* __right_value825 = (void*)0;
struct sVarTable* __dec_obj213;
struct sBlock* __result353__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_766=(void*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj205=((struct sBlock*)result_766)->mNodes;
        ((struct sBlock*)result_766)->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj205,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj213=((struct sBlock*)result_766)->mVarTable;
        ((struct sBlock*)result_766)->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj213,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sBlock*)result_766)->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result353__ = gComeFunResultObject = __result_obj__ = ((struct sBlock*)result_766);
    come_call_finalizer3(result_766, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result335__;
void* __right_value802 = (void*)0;
void* result_767;
void* __right_value824 = (void*)0;
struct map$2charphsVarph* __dec_obj212;
struct sVarTable* __result352__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_767=(void*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj212=((struct sVarTable*)result_767)->mVars;
        ((struct sVarTable*)result_767)->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj212,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sVarTable*)result_767)->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        ((struct sVarTable*)result_767)->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        ((struct sVarTable*)result_767)->mID=self->mID;
    }
    __result352__ = gComeFunResultObject = __result_obj__ = ((struct sVarTable*)result_767);
    come_call_finalizer3(result_767, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result336__;
void* __right_value803 = (void*)0;
void* __right_value809 = (void*)0;
struct map$2charphsVarph* result_771;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct list$1charp* __dec_obj207;
char* it_774;
struct sVar* default_value_777;
void* __right_value812 = (void*)0;
struct sVar* it2_780;
void* __right_value823 = (void*)0;
struct map$2charphsVarph* __result351__;
default_value_777 = (void*)0;
    if(    self==((void*)0)) {
        __result336__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_771=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2538, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj207=result_771->key_list;
    result_771->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2540, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj207,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_774=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_774=map$2charphsVarphp_next(self)    ){
        memset(&default_value_777,0,sizeof(struct sVar*));
        it2_780=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_774,default_value_777));
        map$2charphsVarphp_put(result_771,it_774,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_780)));
        come_call_finalizer3(it2_780,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_771;
    come_call_finalizer3(result_771,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
int i_768;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
struct list$1charp* __dec_obj206;
struct map$2charphsVarph* __result337__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value804=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2467, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value805=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2468, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value806=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2469, "_Bool*", (void*)0, (void*)0))));
    for(    i_768=0;    i_768<128;    i_768++    ){
        self->item_existance[i_768]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj206=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2479, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj206,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_769;
int i_770;
    for(    i_769=0;    i_769<self->size;    i_769++    ){
        if(        self->item_existance[i_769]) {
            if(            1) {
                come_call_finalizer3(self->items[i_769],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_770=0;    i_770<self->size;    i_770++    ){
        if(        self->item_existance[i_770]) {
            if(            1) {
                self->keys[i_770] = come_decrement_ref_count2(self->keys[i_770], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_772;
char* __result338__;
char* __result339__;
char* result_773;
char* __result340__;
result_772 = (void*)0;
result_773 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_772,0,sizeof(char*));
        __result338__ = gComeFunResultObject = __result_obj__ = result_772;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result339__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    memset(&result_773,0,sizeof(char*));
    __result340__ = gComeFunResultObject = __result_obj__ = result_773;
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_775;
char* __result341__;
char* __result342__;
char* result_776;
char* __result343__;
result_775 = (void*)0;
result_776 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_775,0,sizeof(char*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_775;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_776,0,sizeof(char*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_776;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_778;
unsigned int it_779;
struct sVar* __result344__;
struct sVar* __result345__;
struct sVar* __result346__;
struct sVar* __result347__;
    hash_778=charp_get_hash_key(((char*)key))%self->size;
    it_779=hash_778;
    while((_Bool)1) {
        if(        self->item_existance[it_779]) {
            if(            charp_equals(self->keys[it_779],key)) {
                __result344__ = gComeFunResultObject = __result_obj__ = self->items[it_779];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result344__;
            }
            it_779++;
            if(            it_779>=self->size) {
                it_779=0;
            }
            else if(            it_779==hash_778) {
                __result345__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result345__;
            }
        }
        else {
            __result346__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result346__;
        }
    }
    __result347__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result347__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_792;
int it_793;
_Bool same_key_exist_794;
char* it2_795;
struct map$2charphsVarph* __result348__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_792=charp_get_hash_key(key)%self->size;
    it_793=hash_792;
    while((_Bool)1) {
        if(        self->item_existance[it_793]) {
            if(            charp_equals(self->keys[it_793],key)) {
                if(                1) {
                    self->keys[it_793] = come_decrement_ref_count2(self->keys[it_793], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_793]);
                    self->keys[it_793]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_793]);
                    self->keys[it_793]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_793],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_793]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_793]=item;
                }
                break;
            }
            it_793++;
            if(            it_793>=self->size) {
                it_793=0;
            }
            else if(            it_793==hash_792) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_793]=(_Bool)1;
            if(            1) {
                self->keys[it_793]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_793]=key;
            }
            if(            1) {
                self->items[it_793]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_793]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_794=(_Bool)0;
    for(    it2_795=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_795=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_795,key)) {
            same_key_exist_794=(_Bool)1;
        }
    }
    if(    !same_key_exist_794) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_781;
void* __right_value813 = (void*)0;
char** keys_782;
void* __right_value814 = (void*)0;
struct sVar** items_783;
void* __right_value815 = (void*)0;
_Bool* item_existance_784;
int len_785;
char* it_786;
struct sVar* default_value_787;
void* __right_value816 = (void*)0;
struct sVar* it2_788;
unsigned int hash_789;
int n_790;
struct sVar* default_value_791;
void* __right_value817 = (void*)0;
default_value_787 = (void*)0;
default_value_791 = (void*)0;
    size_781=self->size*10;
    keys_782=(char**)come_increment_ref_count(((char**)(__right_value813=(char**)come_calloc(1, sizeof(char*)*(1*(size_781)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_783=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value814=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_781)), "./comelang.h", 2696, "struct sVar**", (void*)0, (void*)0))));
    item_existance_784=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value815=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_781)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_785=0;
    for(    it_786=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_786=map$2charphsVarphp_next(self)    ){
        memset(&default_value_787,0,sizeof(struct sVar*));
        it2_788=((struct sVar*)(__right_value816=map$2charphsVarphp_at(self,it_786,default_value_787)));
        come_call_finalizer3(__right_value816,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_789=charp_get_hash_key(it_786)%size_781;
        n_790=hash_789;
        while((_Bool)1) {
            if(            item_existance_784[n_790]) {
                n_790++;
                if(                n_790>=size_781) {
                    n_790=0;
                }
                else if(                n_790==hash_789) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_784[n_790]=(_Bool)1;
                keys_782[n_790]=it_786;
                items_783[n_790]=((struct sVar*)(__right_value817=map$2charphsVarphp_at(self,it_786,default_value_791)));
                come_call_finalizer3(__right_value817,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_785++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_782;
    self->items=items_783;
    self->item_existance=item_existance_784;
    self->size=size_781;
    self->len=len_785;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result349__;
void* __right_value818 = (void*)0;
void* result_796;
void* __right_value819 = (void*)0;
char* __dec_obj208;
void* __right_value820 = (void*)0;
char* __dec_obj209;
void* __right_value821 = (void*)0;
struct sType* __dec_obj210;
void* __right_value822 = (void*)0;
char* __dec_obj211;
struct sVar* __result350__;
    if(    self==(void*)0) {
        __result349__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    result_796=(void*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj208=((struct sVar*)result_796)->mName;
        ((struct sVar*)result_796)->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj209=((struct sVar*)result_796)->mCValueName;
        ((struct sVar*)result_796)->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj210=((struct sVar*)result_796)->mType;
        ((struct sVar*)result_796)->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_796)->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_796)->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_796)->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_796)->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        ((struct sVar*)result_796)->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj211=((struct sVar*)result_796)->mFunName;
        ((struct sVar*)result_796)->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result350__ = gComeFunResultObject = __result_obj__ = ((struct sVar*)result_796);
    come_call_finalizer3(result_796, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_797;
int i_798;
    for(    i_797=0;    i_797<self->size;    i_797++    ){
        if(        self->item_existance[i_797]) {
            if(            1) {
                come_call_finalizer3(self->items[i_797],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_798=0;    i_798<self->size;    i_798++    ){
        if(        self->item_existance[i_798]) {
            if(            1) {
                self->keys[i_798] = come_decrement_ref_count2(self->keys[i_798], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_805;
int caller_line_806;
char* caller_sname_807;
_Bool comma_instead_of_semicolon_808;
char* last_code_809;
char* __dec_obj224;
char* last_code2_810;
char* __dec_obj225;
void* __right_value844 = (void*)0;
char* sname_top_811;
int sline_top_812;
void* __right_value845 = (void*)0;
struct sFun* funX_813;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct tuple2$2charphbool* __result362__;
void* __right_value848 = (void*)0;
struct sType* result_type_814;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct list$1sTypeph* param_types_815;
struct list$1sTypeph* o2_saved_816;
struct sType* it_819;
void* __right_value851 = (void*)0;
void* __right_value852 = (void*)0;
struct sType* param_type_822;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1charph* param_names_823;
void* __right_value855 = (void*)0;
struct list$1charph* param_default_parametors_824;
char* p_825;
int sline_826;
char* sname_827;
char* head_828;
struct buffer* source_829;
void* __right_value856 = (void*)0;
struct buffer* __dec_obj228;
struct sType* generics_type_saved_830;
void* __right_value857 = (void*)0;
struct sType* __dec_obj229;
struct list$1charph* method_generics_type_names_831;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
struct list$1charph* __dec_obj230;
struct list$1charph* o2_saved_832;
char* it_833;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct list$1charph* __dec_obj231;
char* __dec_obj232;
void* __right_value862 = (void*)0;
struct sBlock* block_834;
struct buffer* __dec_obj233;
char* __dec_obj234;
_Bool var_args_835;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct sFun* fun_836;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value872 = (void*)0;
struct sNode* node_837;
_Bool in_generics_fun_838;
_Bool Value_839;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
struct tuple2$2charphbool* __result369__;
struct sType* __dec_obj235;
struct list$1charph* __dec_obj236;
void* __right_value876 = (void*)0;
char* __dec_obj237;
char* __dec_obj238;
char* __dec_obj239;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
struct tuple2$2charphbool* __result370__;
    caller_fun_805=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_806=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_807=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_808=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_809=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj224=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_810=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj225=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_811=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_812=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_813=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_813) {
        __result362__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value847=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_809 = come_decrement_ref_count2(last_code_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_810 = come_decrement_ref_count2(last_code2_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_811 = come_decrement_ref_count2(sname_top_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_813,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value847,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    result_type_814=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_815=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2316, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_816=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_819=list$1sTypephp_begin((o2_saved_816));    !list$1sTypephp_end((o2_saved_816));    it_819=list$1sTypephp_next((o2_saved_816))    ){
        param_type_822=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value851=come_call_cloner(sType_clone, it_819))),generics_type,info));
        come_call_finalizer3(__right_value851,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_822->mFunctionParam=(_Bool)1;
        list$1sTypephp_add(param_types_815,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_822)));
        come_call_finalizer3(param_type_822,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_816,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_823=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_824=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_825=info->p;
    sline_826=info->sline;
    sname_827=(char*)come_increment_ref_count(info->sname);
    head_828=info->head;
    source_829=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj228=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj228,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_830=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj229=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_831=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj230=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2346, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_832=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_833=list$1charphp_begin((o2_saved_832));    !list$1charphp_end((o2_saved_832));    it_833=list$1charphp_next((o2_saved_832))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_833)));
    }
    come_call_finalizer3(o2_saved_832,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj231=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj232=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_834=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_828;
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_829);
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_825;
    info->sline=sline_826;
    __dec_obj234=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_827);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_814->mInline=(_Bool)0;
    result_type_814->mStatic=(_Bool)0;
    result_type_814->mUniq=(_Bool)0;
    var_args_835=generics_fun->mVarArgs;
    fun_836=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2370, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_814),(struct list$1sTypeph*)come_increment_ref_count(param_types_815),(struct list$1charph*)come_increment_ref_count(param_names_823),(struct list$1charph*)come_increment_ref_count(param_default_parametors_824),(_Bool)0,var_args_835,(struct sBlock*)come_increment_ref_count(block_834),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_836));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2377, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value871=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2377, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_836),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_837=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value871,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_838=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_839=node_compile(node_837,info);
    if(    !Value_839) {
        __result369__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value875=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2382, "struct tuple2$2charphbool", (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_809 = come_decrement_ref_count2(last_code_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_810 = come_decrement_ref_count2(last_code2_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_811 = come_decrement_ref_count2(sname_top_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_813,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_823,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_824,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_827 = come_decrement_ref_count2(sname_827, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_830,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_831,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_834,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_836,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_837) { node_837 = come_decrement_ref_count2(node_837, ((struct sNode*)node_837)->finalize, ((struct sNode*)node_837)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value875,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_838;
    __dec_obj235=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_830);
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj236=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_831);
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_811));
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_812;
    __dec_obj238=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_809);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_810);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_805;
    info->caller_line=caller_line_806;
    info->caller_sname=caller_sname_807;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_808;
    __result370__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value879=tuple2$2charphbool_initialize((struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2402, "struct tuple2$2charphbool", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_809 = come_decrement_ref_count2(last_code_809, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_810 = come_decrement_ref_count2(last_code2_810, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_811 = come_decrement_ref_count2(sname_top_811, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_813,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_814,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_815,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_823,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_824,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_827 = come_decrement_ref_count2(sname_827, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_830,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_831,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_834,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_836,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_837) { node_837 = come_decrement_ref_count2(node_837, ((struct sNode*)node_837)->finalize, ((struct sNode*)node_837)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value879,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__=(void*)0;
char* __dec_obj226;
struct tuple2$2charphbool* __result361__;
    __dec_obj226=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result361__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj227;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj227=self->v1;
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_817;
struct sType* __result363__;
struct sType* __result364__;
struct sType* result_818;
struct sType* __result365__;
result_817 = (void*)0;
result_818 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_817,0,sizeof(struct sType*));
        __result363__ = gComeFunResultObject = __result_obj__ = result_817;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    self->it=self->head;
    if(    self->it) {
        __result364__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    memset(&result_818,0,sizeof(struct sType*));
    __result365__ = gComeFunResultObject = __result_obj__ = result_818;
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_820;
struct sType* __result366__;
struct sType* __result367__;
struct sType* result_821;
struct sType* __result368__;
result_820 = (void*)0;
result_821 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_820,0,sizeof(struct sType*));
        __result366__ = gComeFunResultObject = __result_obj__ = result_820;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result367__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    memset(&result_821,0,sizeof(struct sType*));
    __result368__ = gComeFunResultObject = __result_obj__ = result_821;
    gComeFunResultObject = (void*)0;
    return __result368__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_840;
int caller_line_841;
char* caller_sname_842;
_Bool comma_instead_of_semicolon_843;
char* last_code_844;
char* __dec_obj240;
char* last_code2_845;
char* __dec_obj241;
void* __right_value880 = (void*)0;
char* sname_top_846;
int sline_top_847;
void* __right_value881 = (void*)0;
struct sFun* funX_848;
_Bool __result371__;
void* __right_value882 = (void*)0;
struct sType* result_type_849;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct list$1sTypeph* param_types_850;
struct list$1sTypeph* o2_saved_851;
struct sType* it_852;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
struct sType* param_type_853;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct list$1charph* param_names_854;
void* __right_value889 = (void*)0;
struct list$1charph* param_default_parametors_855;
char* p_856;
int sline_857;
char* sname_858;
char* head_859;
struct buffer* source_860;
void* __right_value890 = (void*)0;
struct buffer* __dec_obj242;
struct list$1charph* method_generics_type_names_861;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
struct list$1charph* __dec_obj243;
struct list$1charph* o2_saved_862;
char* it_863;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct list$1charph* __dec_obj244;
char* __dec_obj245;
void* __right_value895 = (void*)0;
struct sBlock* block_864;
struct buffer* __dec_obj246;
char* __dec_obj247;
_Bool generate__865;
_Bool var_args_866;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
void* __right_value899 = (void*)0;
void* __right_value900 = (void*)0;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct sFun* fun_867;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value906 = (void*)0;
struct sNode* node_868;
_Bool Value_869;
void* __if_result__1_870 = (void*)0;
_Bool __result372__;
struct list$1charph* __dec_obj248;
void* __right_value907 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
char* __dec_obj251;
_Bool __result373__;
    caller_fun_840=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_841=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_842=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_843=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_844=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj240=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_845=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj241=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_846=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_847=info->sline;
    funX_848=((struct sFun*)(__right_value881=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value881,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_848) {
        __result371__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_844 = come_decrement_ref_count2(last_code_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_845 = come_decrement_ref_count2(last_code2_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_846 = come_decrement_ref_count2(sname_top_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result371__;
    }
    result_type_849=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_850=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 2431, "struct list$1sTypeph*", (void*)0, (void*)0))));
    for(    o2_saved_851=(struct list$1sTypeph*)come_increment_ref_count((generics_fun->mParamTypes)),it_852=list$1sTypephp_begin((o2_saved_851));    !list$1sTypephp_end((o2_saved_851));    it_852=list$1sTypephp_next((o2_saved_851))    ){
        param_type_853=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value885=come_call_cloner(sType_clone, it_852))),info));
        come_call_finalizer3(__right_value885,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_853->mFunctionParam=(_Bool)1;
        list$1sTypephp_add(param_types_850,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_853)));
        come_call_finalizer3(param_type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_851,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_854=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_855=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_856=info->p;
    sline_857=info->sline;
    sname_858=(char*)come_increment_ref_count(info->sname);
    head_859=info->head;
    source_860=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj242=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj242,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_861=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj243=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2455, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj243,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_862=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_863=list$1charphp_begin((o2_saved_862));    !list$1charphp_end((o2_saved_862));    it_863=list$1charphp_next((o2_saved_862))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_863)));
    }
    come_call_finalizer3(o2_saved_862,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj244=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj244,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj245=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_864=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_859;
    __dec_obj246=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_860);
    come_call_finalizer3(__dec_obj246,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_856;
    info->sline=sline_857;
    __dec_obj247=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_858);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_849->mInline=(_Bool)0;
    result_type_849->mStatic=(_Bool)0;
    result_type_849->mUniq=(_Bool)0;
    generate__865=(_Bool)0;
    if(    result_type_849->mGenerate) {
        result_type_849->mGenerate=(_Bool)0;
        generate__865=(_Bool)1;
    }
    var_args_866=generics_fun->mVarArgs;
    fun_867=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_849),(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, param_types_850)),(struct list$1charph*)come_increment_ref_count(param_names_854),(struct list$1charph*)come_increment_ref_count(param_default_parametors_855),(_Bool)0,var_args_866,(struct sBlock*)come_increment_ref_count(block_864),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__865,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_867));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2492, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value905=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2492, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_867),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_868=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value905,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_869=node_compile(node_868,info);
    if(    !Value_869) {
        __result372__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_844 = come_decrement_ref_count2(last_code_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_845 = come_decrement_ref_count2(last_code2_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_846 = come_decrement_ref_count2(sname_top_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_850,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_854,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_858 = come_decrement_ref_count2(sname_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_860,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_861,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_864,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_867,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_868) { node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result372__;
    }
    else {
        __if_result__1_870=(void*)(Value_869);
;
    }
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_861);
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj249=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_846));
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_847;
    __dec_obj250=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_844);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_845);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_840;
    info->caller_line=caller_line_841;
    info->caller_sname=caller_sname_842;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_843;
    __result373__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_844 = come_decrement_ref_count2(last_code_844, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_845 = come_decrement_ref_count2(last_code2_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_846 = come_decrement_ref_count2(sname_top_846, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_849,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_850,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_854,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_858 = come_decrement_ref_count2(sname_858, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_860,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_861,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_864,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_867,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_868) { node_868 = come_decrement_ref_count2(node_868, ((struct sNode*)node_868)->finalize, ((struct sNode*)node_868)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result373__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_871;
char* source_head_872;
void* __right_value908 = (void*)0;
char* attribute_873;
struct sType* result_type_874;
char* var_name_875;
_Bool constructor__876;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sType* __dec_obj252;
void* __right_value911 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_877=0;
char* var_name2_878=0;
_Bool err_879=0;
struct sType* __dec_obj253;
char* __dec_obj254;
_Bool method_definition_880;
char* p_881;
int sline_882;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct buffer* buf2_883;
char* fun_name_884;
char* base_fun_name_885;
void* __right_value914 = (void*)0;
char* __dec_obj255;
void* __right_value915 = (void*)0;
char* __dec_obj256;
void* __right_value916 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_886=0;
char* name_887=0;
_Bool err_888=0;
void* __right_value917 = (void*)0;
char* __dec_obj257;
void* __right_value918 = (void*)0;
char* __dec_obj258;
void* __right_value919 = (void*)0;
char* __dec_obj259;
void* __right_value920 = (void*)0;
char* __dec_obj260;
void* __right_value921 = (void*)0;
char* __dec_obj261;
void* __right_value922 = (void*)0;
char* __dec_obj262;
void* __right_value923 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1sTypeph* param_types_889=0;
struct list$1charph* param_names_890=0;
struct list$1charph* param_default_parametors_891=0;
_Bool var_args_892=0;
char* header_tail_893;
void* __right_value924 = (void*)0;
void* __right_value925 = (void*)0;
struct buffer* header_buf_894;
int version_895;
int n_896;
_Bool in_top_level_897;
void* __right_value926 = (void*)0;
struct sBlock* block_898;
void* __right_value927 = (void*)0;
char* fun_name_900;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
struct sFun* fun_901;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sFun* fun2_902;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value942 = (void*)0;
struct sNode* __result376__;
void* __right_value943 = (void*)0;
char* none_generics_name_904;
void* __right_value944 = (void*)0;
char* generics_sname_905;
int generics_sline_906;
void* __right_value945 = (void*)0;
char* block_907;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
struct sGenericsFun* fun_908;
void* __right_value952 = (void*)0;
char* fun_name3_909;
void* __right_value958 = (void*)0;
struct sNode* __result388__;
void* __right_value959 = (void*)0;
char* generics_sname_931;
int generics_sline_932;
void* __right_value960 = (void*)0;
char* block_933;
void* __right_value961 = (void*)0;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sGenericsFun* fun_934;
void* __right_value967 = (void*)0;
char* fun_name3_935;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sNode* __result389__;
char* source_tail_936;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
struct buffer* header_937;
void* __right_value972 = (void*)0;
char* name_938;
void* __right_value973 = (void*)0;
char* name_939;
int i_940;
void* __right_value974 = (void*)0;
struct sType* param_type_941;
void* __right_value975 = (void*)0;
char* param_name_942;
void* __right_value976 = (void*)0;
char* default_parametor_943;
void* __right_value977 = (void*)0;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
char* impl_name_944;
void* __right_value980 = (void*)0;
char* result_type_name_945;
void* __right_value981 = (void*)0;
char* impl_name_946;
void* __right_value982 = (void*)0;
char* result_type_name_947;
int i_948;
void* __right_value983 = (void*)0;
struct sType* param_type_949;
void* __right_value984 = (void*)0;
char* param_name_950;
void* __right_value985 = (void*)0;
char* default_parametor_951;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
struct sBlock* block_952;
_Bool static_fun_953;
_Bool inline_fun_954;
_Bool uniq_fun_955;
_Bool generate_fun_956;
void* __right_value990 = (void*)0;
void* __right_value991 = (void*)0;
char* new_fun_name_957;
void* __right_value992 = (void*)0;
char* __dec_obj267;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sFun* fun_958;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sFun* fun2_959;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1006 = (void*)0;
struct sNode* __result390__;
void* __right_value1007 = (void*)0;
char* new_fun_name_960;
void* __right_value1008 = (void*)0;
char* __dec_obj268;
char* source_tail_961;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
struct buffer* header_962;
_Bool result_type_static_963;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
struct sFun* fun_964;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sFun* fun2_965;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1023 = (void*)0;
struct sNode* __result391__;
void* __right_value1024 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_966=0;
char* fun_attribute_967=0;
void* __right_value1025 = (void*)0;
char* __dec_obj269;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
struct buffer* header_968;
char* source_tail_969;
_Bool result_type_static_970;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sFun* fun_971;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
struct sFun* fun2_972;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1039 = (void*)0;
struct sNode* __result392__;
struct sNode* __result393__;
fun_name_884 = (void*)0;
    header_head_871=info->p;
    source_head_872=info->p;
    attribute_873=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_874=((void*)0);
    var_name_875=((void*)0);
    constructor__876=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value909=parse_word(info)));
        __right_value909 = come_decrement_ref_count2(__right_value909, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj252=result_type_874;
        result_type_874=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_874->mHeap=(_Bool)1;
        constructor__876=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value911=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_877=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_878=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_879=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value911,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj253=result_type_874;
        result_type_874=(struct sType*)come_increment_ref_count(result_type2_877);
        come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj254=var_name_875;
        var_name_875=(char*)come_increment_ref_count(var_name2_878);
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_879) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_877,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_878 = come_decrement_ref_count2(var_name2_878, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_880=(_Bool)0;
    {
        p_881=info->p;
        sline_882=info->sline;
        buf2_883=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2558, "struct buffer*", (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_883,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_883)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_880=(_Bool)1;
        }
        info->p=p_881;
        info->sline=sline_882;
        come_call_finalizer3(buf2_883,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_885=((void*)0);
    if(    constructor__876) {
        __dec_obj255=base_fun_name_885;
        base_fun_name_885=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj256=fun_name_884;
        fun_name_884=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_885,info,(_Bool)1));
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_880) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value916=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_886=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_887=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_888=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value916,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_888) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj257=base_fun_name_885;
        base_fun_name_885=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj258=fun_name_884;
        fun_name_884=(char*)come_increment_ref_count(create_method_name(obj_type_886,(_Bool)0,base_fun_name_885,info,(_Bool)1));
        __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_886,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_887 = come_decrement_ref_count2(name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj259=base_fun_name_885;
        base_fun_name_885=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj260=fun_name_884;
        fun_name_884=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_885,info,(_Bool)1));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj261=fun_name_884;
        fun_name_884=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj262=base_fun_name_885;
        base_fun_name_885=(char*)come_increment_ref_count(__builtin_string(fun_name_884));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_885,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value923=parse_params(info,constructor__876)));
    param_types_889=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_890=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_891=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_892=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value923,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_893=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_885,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_894=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2625, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(header_buf_894,header_head_871,header_tail_893-header_head_871);
    buffer_append_char(header_buf_894,0);
    version_895=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_896=0;
        while(xisdigit(*info->p)) {
            n_896=n_896*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_895=n_896;
    }
    in_top_level_897=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_885,"lambda")) {
        block_898=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_899=0;
        lambda_num_899++;
        fun_name_900=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_899));
        result_type_874->mInline=(_Bool)0;
        result_type_874->mStatic=(_Bool)0;
        result_type_874->mUniq=(_Bool)0;
        result_type_874->mGenerate=(_Bool)0;
        fun_901=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2661, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_900)),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1sTypeph*)come_increment_ref_count(param_types_889),(struct list$1charph*)come_increment_ref_count(param_names_890),(struct list$1charph*)come_increment_ref_count(param_default_parametors_891),(_Bool)0,var_args_892,(struct sBlock*)come_increment_ref_count(block_898),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_894)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_902=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value935=__builtin_string(fun_name_900)))));
        __right_value935 = come_decrement_ref_count2(__right_value935, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_902==((void*)0)||fun2_902->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_900)),(struct sFun*)come_increment_ref_count(fun_901));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value939=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2671, "struct sLambdaNode*", (void*)0, (void*)0)),fun_901,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result376__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value942=_inf_value5));
        come_call_finalizer3(block_898,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_900 = come_decrement_ref_count2(fun_name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_901,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value939,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value942) { __right_value942 = come_decrement_ref_count2(__right_value942, ((struct sNode*)__right_value942)->finalize, ((struct sNode*)__right_value942)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result376__;
        come_call_finalizer3(block_898,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_900 = come_decrement_ref_count2(fun_name_900, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_901,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_902,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_904=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_905=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_906=info->sline;
        block_907=(char*)come_increment_ref_count(skip_block(info));
        fun_908=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2681, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value947=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value948=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_884)),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1sTypeph*)come_increment_ref_count(param_types_889),(struct list$1charph*)come_increment_ref_count(param_names_890),(struct list$1charph*)come_increment_ref_count(param_default_parametors_891),var_args_892,(char*)come_increment_ref_count(block_907),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_905)),generics_sline_906));
        come_call_finalizer3(__right_value947,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value948,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_909=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_904,base_fun_name_885));
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_909)),(struct sGenericsFun*)come_increment_ref_count(fun_908));
        __result388__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_904 = come_decrement_ref_count2(none_generics_name_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_905 = come_decrement_ref_count2(generics_sname_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_907 = come_decrement_ref_count2(block_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_908,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_909 = come_decrement_ref_count2(fun_name3_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result388__;
        none_generics_name_904 = come_decrement_ref_count2(none_generics_name_904, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_905 = come_decrement_ref_count2(generics_sname_905, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_907 = come_decrement_ref_count2(block_907, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_908,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_909 = come_decrement_ref_count2(fun_name3_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_931=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_932=info->sline;
        block_933=(char*)come_increment_ref_count(skip_block(info));
        fun_934=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2695, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value962=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value963=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_884)),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1sTypeph*)come_increment_ref_count(param_types_889),(struct list$1charph*)come_increment_ref_count(param_names_890),(struct list$1charph*)come_increment_ref_count(param_default_parametors_891),var_args_892,(char*)come_increment_ref_count(block_933),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_931)),generics_sline_932));
        come_call_finalizer3(__right_value962,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value963,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_935=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_885));
        if(        method_definition_880) {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_884)),(struct sGenericsFun*)come_increment_ref_count(fun_934));
        }
        else {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_935)),(struct sGenericsFun*)come_increment_ref_count(fun_934));
        }
        __result389__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_931 = come_decrement_ref_count2(generics_sname_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_933 = come_decrement_ref_count2(block_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_934,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_935 = come_decrement_ref_count2(fun_name3_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result389__;
        generics_sname_931 = come_decrement_ref_count2(generics_sname_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_933 = come_decrement_ref_count2(block_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_934,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_935 = come_decrement_ref_count2(fun_name3_935, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_936=info->p-1;
        header_937=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2711, "struct buffer*", (void*)0, (void*)0))));
        if(        constructor__876) {
            if(            list$1sTypephp_length(param_types_889)==1) {
                name_938=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_937,"extern %s*%% %s*::initialize(%s*%% self);\n",name_938,name_938,name_938);
                name_938 = come_decrement_ref_count2(name_938, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_939=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_937,"extern %s*%% %s*::initialize(%s*%% self, ",name_939,name_939,name_939);
                for(                i_940=1;                i_940<list$1sTypephp_length(param_types_889);                i_940++                ){
                    param_type_941=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_889,i_940));
                    param_name_942=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_890,i_940));
                    default_parametor_943=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_891,i_940));
                    if(                    default_parametor_943) {
                        buffer_append_format(header_937,"extern %s %s=%s",((char*)(__right_value977=make_come_type_name_string_no_solved(param_type_941,(_Bool)0,info))),param_name_942,default_parametor_943);
                        __right_value977 = come_decrement_ref_count2(__right_value977, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_937,"extern %s %s",((char*)(__right_value978=make_come_type_name_string_no_solved(param_type_941,(_Bool)0,info))),param_name_942);
                        __right_value978 = come_decrement_ref_count2(__right_value978, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_940!=list$1sTypephp_length(param_types_889)-1) {
                        buffer_append_str(header_937,",");
                    }
                    come_call_finalizer3(param_type_941,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_942 = come_decrement_ref_count2(param_name_942, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_943 = come_decrement_ref_count2(default_parametor_943, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_937,");\n");
                name_939 = come_decrement_ref_count2(name_939, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sTypephp_length(param_types_889)==1) {
                impl_name_944=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_945=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_874,(_Bool)0,info));
                buffer_append_format(header_937,"extern %s %s*::%s(%s* self);\n",result_type_name_945,impl_name_944,base_fun_name_885,impl_name_944);
                impl_name_944 = come_decrement_ref_count2(impl_name_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_945 = come_decrement_ref_count2(result_type_name_945, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_946=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_947=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_874,(_Bool)0,info));
                buffer_append_format(header_937,"extern %s %s*::%s(%s* self, ",result_type_name_947,impl_name_946,base_fun_name_885,impl_name_946);
                for(                i_948=1;                i_948<list$1sTypephp_length(param_types_889);                i_948++                ){
                    param_type_949=(struct sType*)come_increment_ref_count(list$1sTypephp_operator_load_element(param_types_889,i_948));
                    param_name_950=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_890,i_948));
                    default_parametor_951=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_891,i_948));
                    if(                    default_parametor_951) {
                        buffer_append_format(header_937,"extern %s %s=%s",((char*)(__right_value986=make_come_type_name_string_no_solved(param_type_949,(_Bool)0,info))),param_name_950,default_parametor_951);
                        __right_value986 = come_decrement_ref_count2(__right_value986, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_937,"extern %s %s",((char*)(__right_value987=make_come_type_name_string_no_solved(param_type_949,(_Bool)0,info))),param_name_950);
                        __right_value987 = come_decrement_ref_count2(__right_value987, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_948!=list$1sTypephp_length(param_types_889)-1) {
                        buffer_append_str(header_937,",");
                    }
                    come_call_finalizer3(param_type_949,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_950 = come_decrement_ref_count2(param_name_950, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_951 = come_decrement_ref_count2(default_parametor_951, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_937,");\n");
                impl_name_946 = come_decrement_ref_count2(impl_name_946, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_947 = come_decrement_ref_count2(result_type_name_947, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_937,source_head_872,source_tail_936-source_head_872);
            buffer_append_str(header_937,";\n");
        }
        if(        !result_type_874->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value988=buffer_to_string(header_937))));
                __right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_952=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__876,(_Bool)1));
        static_fun_953=(_Bool)0;
        if(        result_type_874->mStatic) {
            result_type_874->mStatic=(_Bool)0;
            result_type_874->mUniq=(_Bool)0;
            static_fun_953=(_Bool)1;
        }
        inline_fun_954=(_Bool)0;
        if(        result_type_874->mInline) {
            result_type_874->mInline=(_Bool)0;
            result_type_874->mUniq=(_Bool)0;
            inline_fun_954=(_Bool)1;
        }
        uniq_fun_955=(_Bool)0;
        if(        result_type_874->mUniq) {
            result_type_874->mUniq=(_Bool)0;
            result_type_874->mInline=(_Bool)0;
            result_type_874->mStatic=(_Bool)0;
            uniq_fun_955=(_Bool)1;
        }
        generate_fun_956=(_Bool)0;
        if(        result_type_874->mUniq) {
            result_type_874->mUniq=(_Bool)0;
            result_type_874->mInline=(_Bool)0;
            result_type_874->mStatic=(_Bool)0;
            generate_fun_956=(_Bool)1;
        }
        if(        version_895>0) {
            new_fun_name_957=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value990=__builtin_string(fun_name_884))),version_895));
            __right_value990 = come_decrement_ref_count2(__right_value990, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj267=fun_name_884;
            fun_name_884=(char*)come_increment_ref_count(__builtin_string(new_fun_name_957));
            __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_957 = come_decrement_ref_count2(new_fun_name_957, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_958=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2820, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_884)),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1sTypeph*)come_increment_ref_count(param_types_889),(struct list$1charph*)come_increment_ref_count(param_names_890),(struct list$1charph*)come_increment_ref_count(param_default_parametors_891),(_Bool)0,var_args_892,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_952)),static_fun_953,(char*)come_increment_ref_count(buffer_to_string(header_buf_894)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_954,uniq_fun_955,generate_fun_956,(char*)come_increment_ref_count(attribute_873),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_884)),(struct sFun*)come_increment_ref_count(fun_958));
        }
        else {
            fun2_959=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1001=__builtin_string(fun_name_884)))));
            __right_value1001 = come_decrement_ref_count2(__right_value1001, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_959==((void*)0)||fun2_959->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_884)),(struct sFun*)come_increment_ref_count(fun_958));
            }
            come_call_finalizer3(fun2_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2840, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1005=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2840, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_958),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result390__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1006=_inf_value6));
        come_call_finalizer3(header_937,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_952,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1005,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1006) { __right_value1006 = come_decrement_ref_count2(__right_value1006, ((struct sNode*)__right_value1006)->finalize, ((struct sNode*)__right_value1006)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result390__;
        come_call_finalizer3(header_937,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_952,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_895>0) {
            new_fun_name_960=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_884,version_895));
            __dec_obj268=fun_name_884;
            fun_name_884=(char*)come_increment_ref_count(__builtin_string(new_fun_name_960));
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_960 = come_decrement_ref_count2(new_fun_name_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_961=info->p;
            header_962=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2853, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_962,source_head_872,source_tail_961-source_head_872);
            skip_spaces_and_lf(info);
            result_type_static_963=result_type_874->mStatic;
            result_type_874->mStatic=(_Bool)0;
            result_type_874->mUniq=(_Bool)0;
            result_type_874->mInline=(_Bool)0;
            result_type_874->mGenerate=(_Bool)0;
            fun_964=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2864, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_884)),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1sTypeph*)come_increment_ref_count(param_types_889),(struct list$1charph*)come_increment_ref_count(param_names_890),(struct list$1charph*)come_increment_ref_count(param_default_parametors_891),(_Bool)1,var_args_892,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_894)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_873),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_965=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1017=__builtin_string(fun_name_884)))));
            __right_value1017 = come_decrement_ref_count2(__right_value1017, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_965==((void*)0)||fun2_965->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_884)),(struct sFun*)come_increment_ref_count(fun_964));
            }
            if(            !result_type_static_963) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1020=buffer_to_string(header_962))));
                    __right_value1020 = come_decrement_ref_count2(__right_value1020, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1022=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2883, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_964),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1023=_inf_value7));
            come_call_finalizer3(header_962,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_964,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_965,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1022,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1023) { __right_value1023 = come_decrement_ref_count2(__right_value1023, ((struct sNode*)__right_value1023)->finalize, ((struct sNode*)__right_value1023)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result391__;
            come_call_finalizer3(header_962,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_964,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_965,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1024=parse_function_attribute(info)));
            asm_fun_966=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_967=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1024,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_966,"")) {
                __dec_obj269=fun_name_884;
                fun_name_884=(char*)come_increment_ref_count(__builtin_string(asm_fun_966));
                __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_968=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2892, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_969=info->p;
                buffer_append(header_968,source_head_872,source_tail_969-source_head_872);
                skip_spaces_and_lf(info);
            }
            result_type_static_970=result_type_874->mStatic;
            result_type_874->mStatic=(_Bool)0;
            result_type_874->mUniq=(_Bool)0;
            result_type_874->mInline=(_Bool)0;
            result_type_874->mGenerate=(_Bool)0;
            fun_971=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2906, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_884)),(struct sType*)come_increment_ref_count(result_type_874),(struct list$1sTypeph*)come_increment_ref_count(param_types_889),(struct list$1charph*)come_increment_ref_count(param_names_890),(struct list$1charph*)come_increment_ref_count(param_default_parametors_891),(_Bool)1,var_args_892,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_894)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_873),(char*)come_increment_ref_count(fun_attribute_967)));
            fun2_972=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1033=__builtin_string(fun_name_884)))));
            __right_value1033 = come_decrement_ref_count2(__right_value1033, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_972==((void*)0)||fun2_972->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_884)),(struct sFun*)come_increment_ref_count(fun_971));
            }
            if(            !result_type_static_970) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1036=buffer_to_string(header_968))));
                    __right_value1036 = come_decrement_ref_count2(__right_value1036, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2926, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1038=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2926, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_971),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1039=_inf_value8));
            asm_fun_966 = come_decrement_ref_count2(asm_fun_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_967 = come_decrement_ref_count2(fun_attribute_967, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_968,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_971,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_972,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1038,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1039) { __right_value1039 = come_decrement_ref_count2(__right_value1039, ((struct sNode*)__right_value1039)->finalize, ((struct sNode*)__right_value1039)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result392__;
            asm_fun_966 = come_decrement_ref_count2(asm_fun_966, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_967 = come_decrement_ref_count2(fun_attribute_967, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_968,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_971,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_972,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_897;
    __result393__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_873 = come_decrement_ref_count2(attribute_873, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_874,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_875 = come_decrement_ref_count2(var_name_875, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_884 = come_decrement_ref_count2(fun_name_884, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_885 = come_decrement_ref_count2(base_fun_name_885, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_889,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_890,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_891,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_894,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result393__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj263;
struct list$1charph* __dec_obj264;
struct list$1charph* __dec_obj265;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj263=self->v1;
            come_call_finalizer3(__dec_obj263,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj264=self->v2;
            come_call_finalizer3(__dec_obj264,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj265=self->v3;
            come_call_finalizer3(__dec_obj265,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result374__;
void* __right_value940 = (void*)0;
void* result_903;
void* __right_value941 = (void*)0;
char* __dec_obj266;
struct sLambdaNode* __result375__;
    if(    self==(void*)0) {
        __result374__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    result_903=(void*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode", sLambdaNode_finalize, sLambdaNode_clone));
    if(    self!=((void*)0)) {
        ((struct sLambdaNode*)result_903)->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj266=((struct sLambdaNode*)result_903)->sname;
        ((struct sLambdaNode*)result_903)->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        ((struct sLambdaNode*)result_903)->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        ((struct sLambdaNode*)result_903)->mFun=self->mFun;
    }
    __result375__ = gComeFunResultObject = __result_obj__ = ((struct sLambdaNode*)result_903);
    come_call_finalizer3(result_903, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_927;
unsigned int it_928;
_Bool same_key_exist_929;
char* it2_930;
struct map$2charphsGenericsFunph* __result387__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunphp_rehash(self);
    }
    hash_927=charp_get_hash_key(key)%self->size;
    it_928=hash_927;
    while((_Bool)1) {
        if(        self->item_existance[it_928]) {
            if(            charp_equals(self->keys[it_928],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_928]);
                    self->keys[it_928] = come_decrement_ref_count2(self->keys[it_928], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_928]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_928]);
                    self->keys[it_928]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_928],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_928]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_928]=item;
                }
                break;
            }
            it_928++;
            if(            it_928>=self->size) {
                it_928=0;
            }
            else if(            it_928==hash_927) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_928]=(_Bool)1;
            if(            1) {
                self->keys[it_928]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_928]=key;
            }
            if(            1) {
                self->items[it_928]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_928]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_929=(_Bool)0;
    for(    it2_930=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_930=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_930,key)) {
            same_key_exist_929=(_Bool)1;
        }
    }
    if(    !same_key_exist_929) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result387__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_910;
void* __right_value953 = (void*)0;
char** keys_911;
void* __right_value954 = (void*)0;
struct sGenericsFun** items_912;
void* __right_value955 = (void*)0;
_Bool* item_existance_913;
int len_914;
char* it_917;
struct sGenericsFun* default_value_920;
void* __right_value956 = (void*)0;
struct sGenericsFun* it2_921;
unsigned int hash_924;
int n_925;
struct sGenericsFun* default_value_926;
void* __right_value957 = (void*)0;
default_value_920 = (void*)0;
default_value_926 = (void*)0;
    size_910=self->size*10;
    keys_911=(char**)come_increment_ref_count(((char**)(__right_value953=(char**)come_calloc(1, sizeof(char*)*(1*(size_910)), "./comelang.h", 2695, "char**", (void*)0, (void*)0))));
    items_912=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value954=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_910)), "./comelang.h", 2696, "struct sGenericsFun**", (void*)0, (void*)0))));
    item_existance_913=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value955=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_910)), "./comelang.h", 2697, "_Bool*", (void*)0, (void*)0))));
    len_914=0;
    for(    it_917=map$2charphsGenericsFunphp_begin(self);    !map$2charphsGenericsFunphp_end(self);    it_917=map$2charphsGenericsFunphp_next(self)    ){
        memset(&default_value_920,0,sizeof(struct sGenericsFun*));
        it2_921=((struct sGenericsFun*)(__right_value956=map$2charphsGenericsFunphp_at(self,it_917,default_value_920)));
        come_call_finalizer3(__right_value956,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_924=charp_get_hash_key(it_917)%size_910;
        n_925=hash_924;
        while((_Bool)1) {
            if(            item_existance_913[n_925]) {
                n_925++;
                if(                n_925>=size_910) {
                    n_925=0;
                }
                else if(                n_925==hash_924) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_913[n_925]=(_Bool)1;
                keys_911[n_925]=it_917;
                items_912[n_925]=((struct sGenericsFun*)(__right_value957=map$2charphsGenericsFunphp_at(self,it_917,default_value_926)));
                come_call_finalizer3(__right_value957,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_914++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_911;
    self->items=items_912;
    self->item_existance=item_existance_913;
    self->size=size_910;
    self->len=len_914;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_915;
char* __result377__;
char* __result378__;
char* result_916;
char* __result379__;
result_915 = (void*)0;
result_916 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_915,0,sizeof(char*));
        __result377__ = gComeFunResultObject = __result_obj__ = result_915;
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result378__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    memset(&result_916,0,sizeof(char*));
    __result379__ = gComeFunResultObject = __result_obj__ = result_916;
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_918;
char* __result380__;
char* __result381__;
char* result_919;
char* __result382__;
result_918 = (void*)0;
result_919 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_918,0,sizeof(char*));
        __result380__ = gComeFunResultObject = __result_obj__ = result_918;
        gComeFunResultObject = (void*)0;
        return __result380__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result381__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    memset(&result_919,0,sizeof(char*));
    __result382__ = gComeFunResultObject = __result_obj__ = result_919;
    gComeFunResultObject = (void*)0;
    return __result382__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_922;
unsigned int it_923;
struct sGenericsFun* __result383__;
struct sGenericsFun* __result384__;
struct sGenericsFun* __result385__;
struct sGenericsFun* __result386__;
    hash_922=charp_get_hash_key(((char*)key))%self->size;
    it_923=hash_922;
    while((_Bool)1) {
        if(        self->item_existance[it_923]) {
            if(            charp_equals(self->keys[it_923],key)) {
                __result383__ = gComeFunResultObject = __result_obj__ = self->items[it_923];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result383__;
            }
            it_923++;
            if(            it_923>=self->size) {
                it_923=0;
            }
            else if(            it_923==hash_922) {
                __result384__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result384__;
            }
        }
        else {
            __result385__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result385__;
        }
    }
    __result386__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result386__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_973;
char* __dec_obj270;
char* last_code2_974;
char* __dec_obj271;
_Bool comma_instead_of_semicolon_975;
struct sClass* current_stack_frame_struct_976;
char* real_fun_name_977;
struct sFun* finalizer_978;
void* __right_value1040 = (void*)0;
struct sType* type_before_979;
void* __right_value1041 = (void*)0;
struct sType* type2_980;
void* __right_value1042 = (void*)0;
char* fun_name2_981;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
char* none_generics_name_982;
void* __right_value1045 = (void*)0;
char* generics_fun_name_983;
void* __right_value1046 = (void*)0;
struct sGenericsFun* generics_fun_984;
void* __right_value1047 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_988=0;
_Bool err_989=0;
void* __right_value1048 = (void*)0;
char* __dec_obj272;
int i_990;
void* __right_value1049 = (void*)0;
char* new_fun_name_991;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
char* __dec_obj273;
void* __right_value1052 = (void*)0;
char* __dec_obj274;
void* __right_value1053 = (void*)0;
char* __dec_obj275;
void* __right_value1054 = (void*)0;
char* user_real_fun_name_992;
void* __right_value1055 = (void*)0;
struct sFun* user_finalizer_993;
void* __right_value1056 = (void*)0;
struct sType* type2_994;
struct sClass* klass_995;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
struct buffer* source_996;
void* __right_value1059 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1005;
struct tuple2$2charphsTypeph* it_1008;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1011=0;
struct sType* field_type_1012=0;
char* p_1015;
int sline_1016;
char* sname_1017;
char* head_1018;
struct buffer* source3_1019;
struct buffer* __dec_obj284;
void* __right_value1060 = (void*)0;
char* __dec_obj285;
void* __right_value1061 = (void*)0;
struct sBlock* block_1020;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
struct sType* result_type_1021;
void* __right_value1064 = (void*)0;
char* name_1022;
void* __right_value1065 = (void*)0;
struct sType* self_type_1023;
struct sType* __list_values21___1025[1];
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
struct list$1sTypeph* param_types_1024;
void* __right_value1068 = (void*)0;
char* __list_values22___1026[1];
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct list$1charph* param_names_1027;
void* __right_value1071 = (void*)0;
void* __right_value1072 = (void*)0;
struct list$1charph* param_default_parametors_1028;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
struct buffer* header_buf_1029;
void* __right_value1075 = (void*)0;
int i_1030;
void* __right_value1076 = (void*)0;
struct sType* param_type_1031;
void* __right_value1077 = (void*)0;
char* param_name_1032;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct sFun* fun2_1033;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct sFun* fun_1034;
void* __right_value1087 = (void*)0;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1090 = (void*)0;
struct sNode* node_1035;
_Bool Value_1036;
struct buffer* __dec_obj286;
char* __dec_obj287;
char* __dec_obj288;
char* __dec_obj289;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
struct tuple2$2sFunpcharph* __result409__;
memset(&i_990, 0, sizeof(int));
    last_code_973=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj270=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_974=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj271=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_975=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_976=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_977=((void*)0);
    finalizer_978=((void*)0);
    type_before_979=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_980=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_980->mHeap=(_Bool)0;
    fun_name2_981=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sTypephp_length(type->mGenericsTypes)>0) {
        finalizer_978=((struct sFun*)(__right_value1043=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_981)));
        come_call_finalizer3(__right_value1043,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_978==((void*)0)) {
            none_generics_name_982=(char*)come_increment_ref_count(get_none_generics_name(type2_980->mClass->mName));
            generics_fun_name_983=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_982,fun_name));
            generics_fun_984=((struct sGenericsFun*)(__right_value1046=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_983)));
            come_call_finalizer3(__right_value1046,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_984) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1047=create_generics_fun((char*)come_increment_ref_count(fun_name2_981),generics_fun_984,type,info)));
                name_988=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_989=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1047,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_989) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_978=((struct sFun*)(__right_value1048=map$2charphsFunphp_operator_load_element(info->funcs,name_988)));
                come_call_finalizer3(__right_value1048,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_988 = come_decrement_ref_count2(name_988, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_982 = come_decrement_ref_count2(none_generics_name_982, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_983 = come_decrement_ref_count2(generics_fun_name_983, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj272=real_fun_name_977;
        real_fun_name_977=(char*)come_increment_ref_count(fun_name2_981);
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_990=128-1;        i_990>=1;        i_990--        ){
            new_fun_name_991=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_981,i_990));
            finalizer_978=((struct sFun*)(__right_value1050=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_991)));
            come_call_finalizer3(__right_value1050,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_978) {
                __dec_obj273=fun_name2_981;
                fun_name2_981=(char*)come_increment_ref_count(__builtin_string(new_fun_name_991));
                __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_991 = come_decrement_ref_count2(new_fun_name_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_991 = come_decrement_ref_count2(new_fun_name_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_978==((void*)0)) {
            finalizer_978=((struct sFun*)(__right_value1052=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_981)));
            come_call_finalizer3(__right_value1052,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj274=real_fun_name_977;
        real_fun_name_977=(char*)come_increment_ref_count(fun_name2_981);
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_978==((void*)0)) {
        type=type_before_979;
        __dec_obj275=real_fun_name_977;
        real_fun_name_977=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_992=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_993=((struct sFun*)(__right_value1055=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_992)));
        come_call_finalizer3(__right_value1055,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        type2_994=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_994;
        klass_995=type->mClass;
        if(        type->mPointerNum>0&&klass_995->mStruct||type->mAllocaValue) {
            source_996=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3026, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_char(source_996,123);
            if(            user_finalizer_993) {
                char source2_997[1024];
                memset(&source2_997, 0, sizeof(char)                *(1024)                );
                snprintf(source2_997,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_992);
                buffer_append_str(source_996,source2_997);
            }
            klass_995=((struct sClass*)(__right_value1059=map$2charphsClassphp_operator_load_element(info->classes,klass_995->mName)));
            come_call_finalizer3(__right_value1059,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1005=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_995->mFields)),it_1008=list$1tuple2$2charphsTypephphp_begin((o2_saved_1005));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1005));            it_1008=list$1tuple2$2charphsTypephphp_next((o2_saved_1005))            ){
                multiple_assign_var12=it_1008;
                name_1011=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1012=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_1012->mHeap) {
                    char source2_1013[1024];
                    memset(&source2_1013, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1013,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_1011,name_1011,name_1011,name_1011);
                    buffer_append_str(source_996,source2_1013);
                }
                else if(                field_type_1012->mChannel) {
                    char source2_1014[1024];
                    memset(&source2_1014, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1014,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1011,name_1011);
                    buffer_append_str(source_996,source2_1014);
                    snprintf(source2_1014,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1011,name_1011);
                    buffer_append_str(source_996,source2_1014);
                }
                name_1011 = come_decrement_ref_count2(name_1011, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1012,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1005,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_996,125);
            p_1015=info->p;
            sline_1016=info->sline;
            sname_1017=(char*)come_increment_ref_count(info->sname);
            head_1018=info->head;
            source3_1019=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj284=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_996);
            come_call_finalizer3(__dec_obj284,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_996->buf;
            info->head=source_996->buf;
            __dec_obj285=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_977));
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1020=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1021=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3075, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
            name_1022=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_977));
            self_type_1023=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1023->mHeap=(_Bool)0;
            if(            self_type_1023->mPointerNum==0) {
                self_type_1023->mPointerNum=1;
            }
            if(            self_type_1023->mPointerNum>1) {
                self_type_1023->mPointerNum=1;
            }
            param_types_1024=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1025[0]=(struct sType*)come_increment_ref_count(self_type_1023),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3085, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values21___1025)));
            param_names_1027=(struct list$1charph*)come_increment_ref_count((__list_values22___1026[0]=(char*)come_increment_ref_count(((char*)(__right_value1068=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3086, "struct list$1charph", (void*)0, (void*)0)),1,__list_values22___1026)));
            __right_value1068 = come_decrement_ref_count2(__right_value1068, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_1028=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3087, "struct list$1charph*", (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_1028,((void*)0));
            header_buf_1029=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3090, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(header_buf_1029,((char*)(__right_value1075=make_come_type_name_string(result_type_1021,info))));
            __right_value1075 = come_decrement_ref_count2(__right_value1075, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1029," ");
            buffer_append_str(header_buf_1029,real_fun_name_977);
            buffer_append_str(header_buf_1029,"(");
            for(            i_1030=0;            i_1030<list$1sTypephp_length(param_types_1024);            i_1030++            ){
                param_type_1031=((struct sType*)(__right_value1076=list$1sTypephp_operator_load_element(param_types_1024,i_1030)));
                come_call_finalizer3(__right_value1076,sType_finalize, 0, 1, 0, 0, __result_obj__);
                param_name_1032=((char*)(__right_value1077=list$1charphp_operator_load_element(param_names_1027,i_1030)));
                __right_value1077 = come_decrement_ref_count2(__right_value1077, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1029,((char*)(__right_value1078=make_come_type_name_string(param_type_1031,info))));
                __right_value1078 = come_decrement_ref_count2(__right_value1078, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1029," ");
                buffer_append_str(header_buf_1029,param_name_1032);
                if(                i_1030!=list$1sTypephp_length(param_types_1024)-1) {
                    buffer_append_str(header_buf_1029,",");
                }
            }
            buffer_append_str(header_buf_1029,")");
            result_type_1021->mStatic=(_Bool)0;
            result_type_1021->mUniq=(_Bool)0;
            result_type_1021->mInline=(_Bool)0;
            result_type_1021->mGenerate=(_Bool)0;
            fun2_1033=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1079=__builtin_string(name_1022)))));
            __right_value1079 = come_decrement_ref_count2(__right_value1079, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_1033==((void*)0)||fun2_1033->mExternal) {
                fun_1034=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3118, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1022),(struct sType*)come_increment_ref_count(result_type_1021),(struct list$1sTypeph*)come_increment_ref_count(param_types_1024),(struct list$1charph*)come_increment_ref_count(param_names_1027),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1028),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1020),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1029)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1022)),(struct sFun*)come_increment_ref_count(fun_1034));
                finalizer_978=fun_1034;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3130, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1089=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3130, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1034),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1035=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1089,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1036=node_compile(node_1035,info);
                if(                !Value_1036) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1034,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_1035) { node_1035 = come_decrement_ref_count2(node_1035, ((struct sNode*)node_1035)->finalize, ((struct sNode*)node_1035)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_978=fun2_1033;
            }
            __dec_obj286=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1019);
            come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_1015;
            info->head=head_1018;
            info->sline=sline_1016;
            __dec_obj287=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1017);
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_996,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_1017 = come_decrement_ref_count2(sname_1017, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_1019,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1020,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1021,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_1022 = come_decrement_ref_count2(name_1022, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_1023,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1024,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1027,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1028,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_1029,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1033,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_992 = come_decrement_ref_count2(user_real_fun_name_992, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_994,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_976;
    __dec_obj288=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_973);
    __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj289=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_974);
    __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_975;
    __result409__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1092=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),finalizer_978,(char*)come_increment_ref_count(real_fun_name_977))));
    last_code_973 = come_decrement_ref_count2(last_code_973, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_974 = come_decrement_ref_count2(last_code2_974, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_977 = come_decrement_ref_count2(real_fun_name_977, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_979,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_980,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_981 = come_decrement_ref_count2(fun_name2_981, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1092,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_985;
unsigned int hash_986;
unsigned int it_987;
struct sGenericsFun* __result394__;
struct sGenericsFun* __result395__;
struct sGenericsFun* __result396__;
struct sGenericsFun* __result397__;
default_value_985 = (void*)0;
    memset(&default_value_985,0,sizeof(struct sGenericsFun*));
    hash_986=charp_get_hash_key(((char*)key))%self->size;
    it_987=hash_986;
    while((_Bool)1) {
        if(        self->item_existance[it_987]) {
            if(            charp_equals(self->keys[it_987],key)) {
                __result394__ = gComeFunResultObject = __result_obj__ = self->items[it_987];
                come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result394__;
            }
            it_987++;
            if(            it_987>=self->size) {
                it_987=0;
            }
            else if(            it_987==hash_986) {
                __result395__ = gComeFunResultObject = __result_obj__ = default_value_985;
                come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result395__;
            }
        }
        else {
            __result396__ = gComeFunResultObject = __result_obj__ = default_value_985;
            come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result396__;
        }
    }
    __result397__ = gComeFunResultObject = __result_obj__ = default_value_985;
    come_call_finalizer3(default_value_985,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result397__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_998;
unsigned int hash_999;
unsigned int it_1000;
struct sClass* __result398__;
struct sClass* __result399__;
struct sClass* __result400__;
struct sClass* __result401__;
default_value_998 = (void*)0;
    memset(&default_value_998,0,sizeof(struct sClass*));
    hash_999=charp_get_hash_key(((char*)key))%self->size;
    it_1000=hash_999;
    while((_Bool)1) {
        if(        self->item_existance[it_1000]) {
            if(            charp_equals(self->keys[it_1000],key)) {
                __result398__ = gComeFunResultObject = __result_obj__ = self->items[it_1000];
                come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result398__;
            }
            it_1000++;
            if(            it_1000>=self->size) {
                it_1000=0;
            }
            else if(            it_1000==hash_999) {
                __result399__ = gComeFunResultObject = __result_obj__ = default_value_998;
                come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result399__;
            }
        }
        else {
            __result400__ = gComeFunResultObject = __result_obj__ = default_value_998;
            come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result400__;
        }
    }
    __result401__ = gComeFunResultObject = __result_obj__ = default_value_998;
    come_call_finalizer3(default_value_998,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj276;
struct list$1tuple2$2charphsTypephph* __dec_obj277;
char* __dec_obj281;
char* __dec_obj282;
char* __dec_obj283;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj276=self->mName;
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj277=self->mFields;
            come_call_finalizer3(__dec_obj277,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj281=self->mDeclareSName;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj282=self->mParentClassName;
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj283=self->mAttribute;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_1001;
struct list_item$1tuple2$2charphsTypephph* prev_it_1002;
    it_1001=self->head;
    while(it_1001!=((void*)0)) {
        prev_it_1002=it_1001;
        it_1001=it_1001->next;
        come_call_finalizer3(prev_it_1002,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj278;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj278=self->item;
            come_call_finalizer3(__dec_obj278,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj279;
struct sType* __dec_obj280;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj279=self->v1;
            __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj280=self->v2;
            come_call_finalizer3(__dec_obj280,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_1003;
struct list_item$1tuple2$2charphsTypephph* prev_it_1004;
    it_1003=self->head;
    while(it_1003!=((void*)0)) {
        prev_it_1004=it_1003;
        it_1003=it_1003->next;
        come_call_finalizer3(prev_it_1004,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_1006;
struct tuple2$2charphsTypeph* __result402__;
struct tuple2$2charphsTypeph* __result403__;
struct tuple2$2charphsTypeph* result_1007;
struct tuple2$2charphsTypeph* __result404__;
result_1006 = (void*)0;
result_1007 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1006,0,sizeof(struct tuple2$2charphsTypeph*));
        __result402__ = gComeFunResultObject = __result_obj__ = result_1006;
        gComeFunResultObject = (void*)0;
        return __result402__;
    }
    self->it=self->head;
    if(    self->it) {
        __result403__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result403__;
    }
    memset(&result_1007,0,sizeof(struct tuple2$2charphsTypeph*));
    __result404__ = gComeFunResultObject = __result_obj__ = result_1007;
    gComeFunResultObject = (void*)0;
    return __result404__;
}

static _Bool list$1tuple2$2charphsTypephphp_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_1009;
struct tuple2$2charphsTypeph* __result405__;
struct tuple2$2charphsTypeph* __result406__;
struct tuple2$2charphsTypeph* result_1010;
struct tuple2$2charphsTypeph* __result407__;
result_1009 = (void*)0;
result_1010 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_1009,0,sizeof(struct tuple2$2charphsTypeph*));
        __result405__ = gComeFunResultObject = __result_obj__ = result_1009;
        gComeFunResultObject = (void*)0;
        return __result405__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result406__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result406__;
    }
    memset(&result_1010,0,sizeof(struct tuple2$2charphsTypeph*));
    __result407__ = gComeFunResultObject = __result_obj__ = result_1010;
    gComeFunResultObject = (void*)0;
    return __result407__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj290;
struct tuple2$2sFunpcharph* __result408__;
    self->v1=v1;
    __dec_obj290=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result408__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result408__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj291;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj291=self->v2;
            __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1037;
char* __dec_obj292;
char* last_code2_1038;
char* __dec_obj293;
_Bool comma_instead_of_semicolon_1039;
struct sClass* current_stack_frame_struct_1040;
struct sFun* equaler_1041;
void* __right_value1093 = (void*)0;
char* real_fun_name_1042;
void* __right_value1094 = (void*)0;
struct sType* type2_1043;
struct sClass* klass_1044;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct buffer* source_1045;
char* name_1046;
void* __right_value1097 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1048;
struct tuple2$2charphsTypeph* it_1049;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1050=0;
struct sType* field_type_1051=0;
char* p_1053;
int sline_1054;
char* sname_1055;
char* head_1056;
struct buffer* source3_1057;
struct buffer* __dec_obj294;
void* __right_value1098 = (void*)0;
char* __dec_obj295;
void* __right_value1099 = (void*)0;
struct sBlock* block_1058;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct sType* result_type_1059;
void* __right_value1102 = (void*)0;
char* name_1060;
void* __right_value1103 = (void*)0;
struct sType* left_type_1061;
void* __right_value1104 = (void*)0;
struct sType* right_type_1062;
struct sType* __list_values23___1064[2];
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct list$1sTypeph* param_types_1063;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
char* __list_values24___1065[2];
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
struct list$1charph* param_names_1066;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
struct list$1charph* param_default_parametors_1067;
void* __right_value1113 = (void*)0;
void* __right_value1114 = (void*)0;
struct buffer* header_buf_1068;
void* __right_value1115 = (void*)0;
int i_1069;
void* __right_value1116 = (void*)0;
struct sType* param_type_1070;
void* __right_value1117 = (void*)0;
char* param_name_1071;
void* __right_value1118 = (void*)0;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
struct sFun* fun2_1072;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
struct sFun* fun_1073;
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1130 = (void*)0;
struct sNode* node_1074;
_Bool Value_1075;
struct buffer* __dec_obj296;
char* __dec_obj297;
char* __dec_obj298;
char* __dec_obj299;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct tuple2$2sFunpcharph* __result410__;
    last_code_1037=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj292=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1038=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj293=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1039=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1040=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1041=((void*)0);
    real_fun_name_1042=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1043=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1043;
    klass_1044=type->mClass;
    if(    type->mPointerNum>0&&!klass_1044->mNumber) {
        source_1045=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3181, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1045,123);
        if(        klass_1044->mProtocol) {
            name_1046="_protocol_obj";
            char source2_1047[1024];
            memset(&source2_1047, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1047,1024,"return left.%s.equals(right.%s);\n",name_1046,name_1046);
            buffer_append_str(source_1045,source2_1047);
        }
        else {
            klass_1044=((struct sClass*)(__right_value1097=map$2charphsClassphp_operator_load_element(info->classes,klass_1044->mName)));
            come_call_finalizer3(__right_value1097,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1048=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1044->mFields)),it_1049=list$1tuple2$2charphsTypephphp_begin((o2_saved_1048));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1048));            it_1049=list$1tuple2$2charphsTypephphp_next((o2_saved_1048))            ){
                multiple_assign_var13=it_1049;
                name_1050=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1051=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1052[1024];
                memset(&source2_1052, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1052,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1050,name_1050,name_1050);
                buffer_append_str(source_1045,source2_1052);
                name_1050 = come_decrement_ref_count2(name_1050, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1048,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1045,"return true;");
        buffer_append_char(source_1045,125);
        p_1053=info->p;
        sline_1054=info->sline;
        sname_1055=(char*)come_increment_ref_count(info->sname);
        head_1056=info->head;
        source3_1057=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj294=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1045);
        come_call_finalizer3(__dec_obj294,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1045->buf;
        info->head=source_1045->buf;
        __dec_obj295=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1042));
        __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1058=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1059=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3221, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1060=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1042));
        left_type_1061=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1061->mHeap=(_Bool)0;
        right_type_1062=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1062->mHeap=(_Bool)0;
        param_types_1063=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1064[0]=(struct sType*)come_increment_ref_count(left_type_1061),
__list_values23___1064[1]=(struct sType*)come_increment_ref_count(right_type_1062),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3227, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values23___1064)));
        param_names_1066=(struct list$1charph*)come_increment_ref_count((__list_values24___1065[0]=(char*)come_increment_ref_count(((char*)(__right_value1107=__builtin_string("left")))),
__list_values24___1065[1]=(char*)come_increment_ref_count(((char*)(__right_value1108=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3228, "struct list$1charph", (void*)0, (void*)0)),2,__list_values24___1065)));
        __right_value1107 = come_decrement_ref_count2(__right_value1107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1108 = come_decrement_ref_count2(__right_value1108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1067=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3229, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1067,((void*)0));
        list$1charphp_push_back(param_default_parametors_1067,((void*)0));
        header_buf_1068=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3233, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1068,((char*)(__right_value1115=make_come_type_name_string(result_type_1059,info))));
        __right_value1115 = come_decrement_ref_count2(__right_value1115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1068," ");
        buffer_append_str(header_buf_1068,real_fun_name_1042);
        buffer_append_str(header_buf_1068,"(");
        for(        i_1069=0;        i_1069<list$1sTypephp_length(param_types_1063);        i_1069++        ){
            param_type_1070=((struct sType*)(__right_value1116=list$1sTypephp_operator_load_element(param_types_1063,i_1069)));
            come_call_finalizer3(__right_value1116,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1071=((char*)(__right_value1117=list$1charphp_operator_load_element(param_names_1066,i_1069)));
            __right_value1117 = come_decrement_ref_count2(__right_value1117, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1068,((char*)(__right_value1118=make_come_type_name_string(param_type_1070,info))));
            __right_value1118 = come_decrement_ref_count2(__right_value1118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1068," ");
            buffer_append_str(header_buf_1068,param_name_1071);
            if(            i_1069!=list$1sTypephp_length(param_types_1063)-1) {
                buffer_append_str(header_buf_1068,",");
            }
        }
        buffer_append_str(header_buf_1068,")");
        result_type_1059->mStatic=(_Bool)0;
        result_type_1059->mUniq=(_Bool)0;
        result_type_1059->mInline=(_Bool)0;
        result_type_1059->mGenerate=(_Bool)0;
        fun2_1072=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1119=__builtin_string(name_1060)))));
        __right_value1119 = come_decrement_ref_count2(__right_value1119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1072==((void*)0)||fun2_1072->mExternal) {
            fun_1073=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1060),(struct sType*)come_increment_ref_count(result_type_1059),(struct list$1sTypeph*)come_increment_ref_count(param_types_1063),(struct list$1charph*)come_increment_ref_count(param_names_1066),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1067),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1058),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1068)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1060)),(struct sFun*)come_increment_ref_count(fun_1073));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3271, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1129=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3271, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1073),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1074=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1129,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1075=node_compile(node_1074,info);
            if(            !Value_1075) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1041=fun_1073;
            come_call_finalizer3(fun_1073,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1074) { node_1074 = come_decrement_ref_count2(node_1074, ((struct sNode*)node_1074)->finalize, ((struct sNode*)node_1074)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1041=fun2_1072;
        }
        __dec_obj296=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1057);
        come_call_finalizer3(__dec_obj296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1053;
        info->head=head_1056;
        info->sline=sline_1054;
        __dec_obj297=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1055);
        __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1045,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1055 = come_decrement_ref_count2(sname_1055, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1057,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1058,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1059,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1060 = come_decrement_ref_count2(name_1060, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1061,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1062,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1063,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1066,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1067,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1068,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1072,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1040;
    __dec_obj298=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1037);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj299=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1038);
    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1039;
    __result410__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1132=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1041,(char*)come_increment_ref_count(real_fun_name_1042))));
    last_code_1037 = come_decrement_ref_count2(last_code_1037, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1038 = come_decrement_ref_count2(last_code2_1038, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1042 = come_decrement_ref_count2(real_fun_name_1042, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1043,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1132,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1076;
char* __dec_obj300;
char* last_code2_1077;
char* __dec_obj301;
_Bool comma_instead_of_semicolon_1078;
struct sClass* current_stack_frame_struct_1079;
struct sFun* equaler_1080;
void* __right_value1133 = (void*)0;
char* real_fun_name_1081;
void* __right_value1134 = (void*)0;
struct sType* type2_1082;
struct sClass* klass_1083;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
struct buffer* source_1084;
char* name_1085;
int i_1088;
void* __right_value1137 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1089;
struct tuple2$2charphsTypeph* it_1090;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1091=0;
struct sType* field_type_1092=0;
char* p_1096;
int sline_1097;
char* sname_1098;
char* head_1099;
struct buffer* source3_1100;
struct buffer* __dec_obj302;
void* __right_value1138 = (void*)0;
char* __dec_obj303;
void* __right_value1139 = (void*)0;
struct sBlock* block_1101;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
struct sType* result_type_1102;
void* __right_value1142 = (void*)0;
char* name_1103;
void* __right_value1143 = (void*)0;
struct sType* left_type_1104;
void* __right_value1144 = (void*)0;
struct sType* right_type_1105;
struct sType* __list_values25___1107[2];
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct list$1sTypeph* param_types_1106;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
char* __list_values26___1108[2];
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct list$1charph* param_names_1109;
void* __right_value1151 = (void*)0;
void* __right_value1152 = (void*)0;
struct list$1charph* param_default_parametors_1110;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
struct buffer* header_buf_1111;
void* __right_value1155 = (void*)0;
int i_1112;
void* __right_value1156 = (void*)0;
struct sType* param_type_1113;
void* __right_value1157 = (void*)0;
char* param_name_1114;
void* __right_value1158 = (void*)0;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
struct sFun* fun2_1115;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
struct sFun* fun_1116;
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1170 = (void*)0;
struct sNode* node_1117;
_Bool Value_1118;
struct buffer* __dec_obj304;
char* __dec_obj305;
char* __dec_obj306;
char* __dec_obj307;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct tuple2$2sFunpcharph* __result411__;
    last_code_1076=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj300=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1077=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj301=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1078=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1079=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1080=((void*)0);
    real_fun_name_1081=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1082=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1082;
    klass_1083=type->mClass;
    if(    type->mPointerNum>0&&!klass_1083->mNumber) {
        source_1084=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1084,123);
        if(        klass_1083->mProtocol) {
            name_1085="_protocol_obj";
            char source2_1086[1024];
            memset(&source2_1086, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1086,1024,"return left.%s !== right.%s;\n",name_1085,name_1085);
            buffer_append_str(source_1084,source2_1086);
        }
        else {
            char source2_1087[1024];
            memset(&source2_1087, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1087,1024,"return !(");
            buffer_append_str(source_1084,source2_1087);
            snprintf(source2_1087,1024,"( ");
            buffer_append_str(source_1084,source2_1087);
            i_1088=0;
            klass_1083=((struct sClass*)(__right_value1137=map$2charphsClassphp_operator_load_element(info->classes,klass_1083->mName)));
            come_call_finalizer3(__right_value1137,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1089=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1083->mFields)),it_1090=list$1tuple2$2charphsTypephphp_begin((o2_saved_1089));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1089));            it_1090=list$1tuple2$2charphsTypephphp_next((o2_saved_1089))            ){
                multiple_assign_var14=it_1090;
                name_1091=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1092=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1093[1024];
                memset(&source2_1093, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1093,1024,"(left.%s === right.%s)",name_1091,name_1091,name_1091);
                buffer_append_str(source_1084,source2_1093);
                if(                i_1088==list$1tuple2$2charphsTypephphp_length(klass_1083->mFields)-1) {
                    char source2_1094[1024];
                    memset(&source2_1094, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1094,1024,"));");
                    buffer_append_str(source_1084,source2_1094);
                }
                else {
                    char source2_1095[1024];
                    memset(&source2_1095, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1095,1024," && ");
                    buffer_append_str(source_1084,source2_1095);
                }
                i_1088++;
                name_1091 = come_decrement_ref_count2(name_1091, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1092,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1089,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1084,125);
        p_1096=info->p;
        sline_1097=info->sline;
        sname_1098=(char*)come_increment_ref_count(info->sname);
        head_1099=info->head;
        source3_1100=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj302=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1084);
        come_call_finalizer3(__dec_obj302,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1084->buf;
        info->head=source_1084->buf;
        __dec_obj303=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1081));
        __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1101=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1102=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3382, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1103=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1081));
        left_type_1104=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1104->mHeap=(_Bool)0;
        right_type_1105=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1105->mHeap=(_Bool)0;
        param_types_1106=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1107[0]=(struct sType*)come_increment_ref_count(left_type_1104),
__list_values25___1107[1]=(struct sType*)come_increment_ref_count(right_type_1105),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3388, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values25___1107)));
        param_names_1109=(struct list$1charph*)come_increment_ref_count((__list_values26___1108[0]=(char*)come_increment_ref_count(((char*)(__right_value1147=__builtin_string("left")))),
__list_values26___1108[1]=(char*)come_increment_ref_count(((char*)(__right_value1148=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3389, "struct list$1charph", (void*)0, (void*)0)),2,__list_values26___1108)));
        __right_value1147 = come_decrement_ref_count2(__right_value1147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1148 = come_decrement_ref_count2(__right_value1148, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1110=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3390, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1110,((void*)0));
        list$1charphp_push_back(param_default_parametors_1110,((void*)0));
        header_buf_1111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3394, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1111,((char*)(__right_value1155=make_come_type_name_string(result_type_1102,info))));
        __right_value1155 = come_decrement_ref_count2(__right_value1155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1111," ");
        buffer_append_str(header_buf_1111,real_fun_name_1081);
        buffer_append_str(header_buf_1111,"(");
        for(        i_1112=0;        i_1112<list$1sTypephp_length(param_types_1106);        i_1112++        ){
            param_type_1113=((struct sType*)(__right_value1156=list$1sTypephp_operator_load_element(param_types_1106,i_1112)));
            come_call_finalizer3(__right_value1156,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1114=((char*)(__right_value1157=list$1charphp_operator_load_element(param_names_1109,i_1112)));
            __right_value1157 = come_decrement_ref_count2(__right_value1157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1111,((char*)(__right_value1158=make_come_type_name_string(param_type_1113,info))));
            __right_value1158 = come_decrement_ref_count2(__right_value1158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1111," ");
            buffer_append_str(header_buf_1111,param_name_1114);
            if(            i_1112!=list$1sTypephp_length(param_types_1106)-1) {
                buffer_append_str(header_buf_1111,",");
            }
        }
        buffer_append_str(header_buf_1111,")");
        result_type_1102->mStatic=(_Bool)0;
        result_type_1102->mUniq=(_Bool)0;
        result_type_1102->mInline=(_Bool)0;
        result_type_1102->mGenerate=(_Bool)0;
        fun2_1115=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1159=__builtin_string(name_1103)))));
        __right_value1159 = come_decrement_ref_count2(__right_value1159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1115==((void*)0)||fun2_1115->mExternal) {
            fun_1116=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1103),(struct sType*)come_increment_ref_count(result_type_1102),(struct list$1sTypeph*)come_increment_ref_count(param_types_1106),(struct list$1charph*)come_increment_ref_count(param_names_1109),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1110),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1101),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1111)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1103)),(struct sFun*)come_increment_ref_count(fun_1116));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3432, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1169=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3432, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1116),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1117=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1169,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1118=node_compile(node_1117,info);
            if(            !Value_1118) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1080=fun_1116;
            come_call_finalizer3(fun_1116,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1117) { node_1117 = come_decrement_ref_count2(node_1117, ((struct sNode*)node_1117)->finalize, ((struct sNode*)node_1117)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1080=fun2_1115;
        }
        __dec_obj304=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1100);
        come_call_finalizer3(__dec_obj304,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1096;
        info->head=head_1099;
        info->sline=sline_1097;
        __dec_obj305=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1098);
        __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1084,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1098 = come_decrement_ref_count2(sname_1098, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1100,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1101,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1102,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1103 = come_decrement_ref_count2(name_1103, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1104,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1105,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1106,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1109,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1110,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1111,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1115,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1079;
    __dec_obj306=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1076);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj307=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1077);
    __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1078;
    __result411__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1172=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3458, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1080,(char*)come_increment_ref_count(real_fun_name_1081))));
    last_code_1076 = come_decrement_ref_count2(last_code_1076, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1077 = come_decrement_ref_count2(last_code2_1077, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1081 = come_decrement_ref_count2(real_fun_name_1081, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1082,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1172,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static int list$1tuple2$2charphsTypephphp_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1119;
char* __dec_obj308;
char* last_code2_1120;
char* __dec_obj309;
_Bool comma_instead_of_semicolon_1121;
struct sClass* current_stack_frame_struct_1122;
struct sFun* equaler_1123;
void* __right_value1173 = (void*)0;
char* real_fun_name_1124;
void* __right_value1174 = (void*)0;
struct sType* type2_1125;
struct sClass* klass_1126;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct buffer* source_1127;
char* name_1128;
int i_1131;
void* __right_value1177 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1132;
struct tuple2$2charphsTypeph* it_1133;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1134=0;
struct sType* field_type_1135=0;
char* p_1139;
int sline_1140;
char* sname_1141;
char* head_1142;
struct buffer* source3_1143;
struct buffer* __dec_obj310;
void* __right_value1178 = (void*)0;
char* __dec_obj311;
void* __right_value1179 = (void*)0;
struct sBlock* block_1144;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sType* result_type_1145;
void* __right_value1182 = (void*)0;
char* name_1146;
void* __right_value1183 = (void*)0;
struct sType* left_type_1147;
void* __right_value1184 = (void*)0;
struct sType* right_type_1148;
struct sType* __list_values27___1150[2];
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct list$1sTypeph* param_types_1149;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
char* __list_values28___1151[2];
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct list$1charph* param_names_1152;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
struct list$1charph* param_default_parametors_1153;
void* __right_value1193 = (void*)0;
void* __right_value1194 = (void*)0;
struct buffer* header_buf_1154;
void* __right_value1195 = (void*)0;
int i_1155;
void* __right_value1196 = (void*)0;
struct sType* param_type_1156;
void* __right_value1197 = (void*)0;
char* param_name_1157;
void* __right_value1198 = (void*)0;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
struct sFun* fun2_1158;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct sFun* fun_1159;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1210 = (void*)0;
struct sNode* node_1160;
_Bool Value_1161;
struct buffer* __dec_obj312;
char* __dec_obj313;
char* __dec_obj314;
char* __dec_obj315;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct tuple2$2sFunpcharph* __result412__;
    last_code_1119=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj308=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1120=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj309=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1121=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1122=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1123=((void*)0);
    real_fun_name_1124=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1125=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1125;
    klass_1126=type->mClass;
    if(    type->mPointerNum>0&&!klass_1126->mNumber) {
        source_1127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1127,123);
        if(        klass_1126->mProtocol) {
            name_1128="_protocol_obj";
            char source2_1129[1024];
            memset(&source2_1129, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1129,1024,"return !left.%s.equals(right.%s);\n",name_1128,name_1128);
            buffer_append_str(source_1127,source2_1129);
        }
        else {
            char source2_1130[1024];
            memset(&source2_1130, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1130,1024,"return !(");
            buffer_append_str(source_1127,source2_1130);
            i_1131=0;
            klass_1126=((struct sClass*)(__right_value1177=map$2charphsClassphp_operator_load_element(info->classes,klass_1126->mName)));
            come_call_finalizer3(__right_value1177,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1132=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1126->mFields)),it_1133=list$1tuple2$2charphsTypephphp_begin((o2_saved_1132));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1132));            it_1133=list$1tuple2$2charphsTypephphp_next((o2_saved_1132))            ){
                multiple_assign_var15=it_1133;
                name_1134=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1135=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1136[1024];
                memset(&source2_1136, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1136,1024,"left.%s.equals(right.%s)",name_1134,name_1134);
                buffer_append_str(source_1127,source2_1136);
                if(                i_1131==list$1tuple2$2charphsTypephphp_length(klass_1126->mFields)-1) {
                    char source2_1137[1024];
                    memset(&source2_1137, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1137,1024,");");
                    buffer_append_str(source_1127,source2_1137);
                }
                else {
                    char source2_1138[1024];
                    memset(&source2_1138, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1138,1024," && ");
                    buffer_append_str(source_1127,source2_1138);
                }
                i_1131++;
                name_1134 = come_decrement_ref_count2(name_1134, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1135,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1132,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1127,125);
        p_1139=info->p;
        sline_1140=info->sline;
        sname_1141=(char*)come_increment_ref_count(info->sname);
        head_1142=info->head;
        source3_1143=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj310=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1127);
        come_call_finalizer3(__dec_obj310,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1127->buf;
        info->head=source_1127->buf;
        __dec_obj311=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1124));
        __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1144=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1145=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1146=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1124));
        left_type_1147=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1147->mHeap=(_Bool)0;
        right_type_1148=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1148->mHeap=(_Bool)0;
        param_types_1149=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1150[0]=(struct sType*)come_increment_ref_count(left_type_1147),
__list_values27___1150[1]=(struct sType*)come_increment_ref_count(right_type_1148),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3546, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values27___1150)));
        param_names_1152=(struct list$1charph*)come_increment_ref_count((__list_values28___1151[0]=(char*)come_increment_ref_count(((char*)(__right_value1187=__builtin_string("left")))),
__list_values28___1151[1]=(char*)come_increment_ref_count(((char*)(__right_value1188=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3547, "struct list$1charph", (void*)0, (void*)0)),2,__list_values28___1151)));
        __right_value1187 = come_decrement_ref_count2(__right_value1187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1188 = come_decrement_ref_count2(__right_value1188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1153=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3548, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1153,((void*)0));
        list$1charphp_push_back(param_default_parametors_1153,((void*)0));
        header_buf_1154=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3552, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1154,((char*)(__right_value1195=make_come_type_name_string(result_type_1145,info))));
        __right_value1195 = come_decrement_ref_count2(__right_value1195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1154," ");
        buffer_append_str(header_buf_1154,real_fun_name_1124);
        buffer_append_str(header_buf_1154,"(");
        for(        i_1155=0;        i_1155<list$1sTypephp_length(param_types_1149);        i_1155++        ){
            param_type_1156=((struct sType*)(__right_value1196=list$1sTypephp_operator_load_element(param_types_1149,i_1155)));
            come_call_finalizer3(__right_value1196,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1157=((char*)(__right_value1197=list$1charphp_operator_load_element(param_names_1152,i_1155)));
            __right_value1197 = come_decrement_ref_count2(__right_value1197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1154,((char*)(__right_value1198=make_come_type_name_string(param_type_1156,info))));
            __right_value1198 = come_decrement_ref_count2(__right_value1198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1154," ");
            buffer_append_str(header_buf_1154,param_name_1157);
            if(            i_1155!=list$1sTypephp_length(param_types_1149)-1) {
                buffer_append_str(header_buf_1154,",");
            }
        }
        buffer_append_str(header_buf_1154,")");
        result_type_1145->mStatic=(_Bool)0;
        result_type_1145->mUniq=(_Bool)0;
        result_type_1145->mInline=(_Bool)0;
        result_type_1145->mGenerate=(_Bool)0;
        fun2_1158=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1199=__builtin_string(name_1146)))));
        __right_value1199 = come_decrement_ref_count2(__right_value1199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1158==((void*)0)||fun2_1158->mExternal) {
            fun_1159=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3580, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1146),(struct sType*)come_increment_ref_count(result_type_1145),(struct list$1sTypeph*)come_increment_ref_count(param_types_1149),(struct list$1charph*)come_increment_ref_count(param_names_1152),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1153),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1144),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1154)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1146)),(struct sFun*)come_increment_ref_count(fun_1159));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3590, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1209=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3590, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1159),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1160=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1209,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1161=node_compile(node_1160,info);
            if(            !Value_1161) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1123=fun_1159;
            come_call_finalizer3(fun_1159,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1160) { node_1160 = come_decrement_ref_count2(node_1160, ((struct sNode*)node_1160)->finalize, ((struct sNode*)node_1160)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1123=fun2_1158;
        }
        __dec_obj312=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1143);
        come_call_finalizer3(__dec_obj312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1139;
        info->head=head_1142;
        info->sline=sline_1140;
        __dec_obj313=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1141);
        __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1127,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1141 = come_decrement_ref_count2(sname_1141, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1143,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1144,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1145,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1146 = come_decrement_ref_count2(name_1146, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1147,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1149,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1152,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1153,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1154,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1158,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1122;
    __dec_obj314=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1119);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj315=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1120);
    __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1121;
    __result412__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1212=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3616, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1123,(char*)come_increment_ref_count(real_fun_name_1124))));
    last_code_1119 = come_decrement_ref_count2(last_code_1119, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1120 = come_decrement_ref_count2(last_code2_1120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1124 = come_decrement_ref_count2(real_fun_name_1124, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1125,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1212,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1162;
char* __dec_obj316;
char* last_code2_1163;
char* __dec_obj317;
_Bool comma_instead_of_semicolon_1164;
struct sClass* current_stack_frame_struct_1165;
struct sFun* equaler_1166;
void* __right_value1213 = (void*)0;
char* real_fun_name_1167;
void* __right_value1214 = (void*)0;
struct sType* type2_1168;
struct sClass* klass_1169;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct buffer* source_1170;
char* name_1171;
void* __right_value1217 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1174;
struct tuple2$2charphsTypeph* it_1175;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1176=0;
struct sType* field_type_1177=0;
char* p_1179;
int sline_1180;
char* sname_1181;
char* head_1182;
struct buffer* source3_1183;
struct buffer* __dec_obj318;
void* __right_value1218 = (void*)0;
char* __dec_obj319;
void* __right_value1219 = (void*)0;
struct sBlock* block_1184;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct sType* result_type_1185;
void* __right_value1222 = (void*)0;
char* name_1186;
void* __right_value1223 = (void*)0;
struct sType* left_type_1187;
void* __right_value1224 = (void*)0;
struct sType* right_type_1188;
struct sType* __list_values29___1190[2];
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
struct list$1sTypeph* param_types_1189;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
char* __list_values30___1191[2];
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct list$1charph* param_names_1192;
void* __right_value1231 = (void*)0;
void* __right_value1232 = (void*)0;
struct list$1charph* param_default_parametors_1193;
void* __right_value1233 = (void*)0;
void* __right_value1234 = (void*)0;
struct buffer* header_buf_1194;
void* __right_value1235 = (void*)0;
int i_1195;
void* __right_value1236 = (void*)0;
struct sType* param_type_1196;
void* __right_value1237 = (void*)0;
char* param_name_1197;
void* __right_value1238 = (void*)0;
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
struct sFun* fun2_1198;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
struct sFun* fun_1199;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1250 = (void*)0;
struct sNode* node_1200;
_Bool Value_1201;
struct buffer* __dec_obj320;
char* __dec_obj321;
char* __dec_obj322;
char* __dec_obj323;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct tuple2$2sFunpcharph* __result413__;
    last_code_1162=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj316=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1163=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj317=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1164=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1165=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1166=((void*)0);
    real_fun_name_1167=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1168=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1168;
    klass_1169=type->mClass;
    if(    type->mPointerNum>0&&!klass_1169->mNumber) {
        source_1170=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1170,123);
        if(        klass_1169->mProtocol) {
            name_1171="_protocol_obj";
            char source2_1172[1024];
            memset(&source2_1172, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1172,1024,"return left.%s === right.%s;\n",name_1171,name_1171);
            buffer_append_str(source_1170,source2_1172);
        }
        else {
            char source2_1173[1024];
            memset(&source2_1173, 0, sizeof(char)            *(1024)            );
            klass_1169=((struct sClass*)(__right_value1217=map$2charphsClassphp_operator_load_element(info->classes,klass_1169->mName)));
            come_call_finalizer3(__right_value1217,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1174=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1169->mFields)),it_1175=list$1tuple2$2charphsTypephphp_begin((o2_saved_1174));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1174));            it_1175=list$1tuple2$2charphsTypephphp_next((o2_saved_1174))            ){
                multiple_assign_var16=it_1175;
                name_1176=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1177=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1178[1024];
                memset(&source2_1178, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1178,1024,"if(left.%s !== right.%s) { return false; }\n",name_1176,name_1176,name_1176);
                buffer_append_str(source_1170,source2_1178);
                name_1176 = come_decrement_ref_count2(name_1176, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1174,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1170,"return true;\n");
        buffer_append_char(source_1170,125);
        p_1179=info->p;
        sline_1180=info->sline;
        sname_1181=(char*)come_increment_ref_count(info->sname);
        head_1182=info->head;
        source3_1183=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj318=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1170);
        come_call_finalizer3(__dec_obj318,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1170->buf;
        info->head=source_1170->buf;
        __dec_obj319=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1167));
        __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1184=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1185=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3683, "struct sType*", (void*)0, (void*)0)),"bool",(_Bool)0,info));
        name_1186=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1167));
        left_type_1187=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1187->mHeap=(_Bool)0;
        right_type_1188=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1188->mHeap=(_Bool)0;
        param_types_1189=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1190[0]=(struct sType*)come_increment_ref_count(left_type_1187),
__list_values29___1190[1]=(struct sType*)come_increment_ref_count(right_type_1188),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3689, "struct list$1sTypeph", (void*)0, (void*)0)),2,__list_values29___1190)));
        param_names_1192=(struct list$1charph*)come_increment_ref_count((__list_values30___1191[0]=(char*)come_increment_ref_count(((char*)(__right_value1227=__builtin_string("left")))),
__list_values30___1191[1]=(char*)come_increment_ref_count(((char*)(__right_value1228=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3690, "struct list$1charph", (void*)0, (void*)0)),2,__list_values30___1191)));
        __right_value1227 = come_decrement_ref_count2(__right_value1227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1228 = come_decrement_ref_count2(__right_value1228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1193=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3691, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1193,((void*)0));
        list$1charphp_push_back(param_default_parametors_1193,((void*)0));
        header_buf_1194=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3695, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1194,((char*)(__right_value1235=make_come_type_name_string(result_type_1185,info))));
        __right_value1235 = come_decrement_ref_count2(__right_value1235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1194," ");
        buffer_append_str(header_buf_1194,real_fun_name_1167);
        buffer_append_str(header_buf_1194,"(");
        for(        i_1195=0;        i_1195<list$1sTypephp_length(param_types_1189);        i_1195++        ){
            param_type_1196=((struct sType*)(__right_value1236=list$1sTypephp_operator_load_element(param_types_1189,i_1195)));
            come_call_finalizer3(__right_value1236,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1197=((char*)(__right_value1237=list$1charphp_operator_load_element(param_names_1192,i_1195)));
            __right_value1237 = come_decrement_ref_count2(__right_value1237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1194,((char*)(__right_value1238=make_come_type_name_string(param_type_1196,info))));
            __right_value1238 = come_decrement_ref_count2(__right_value1238, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1194," ");
            buffer_append_str(header_buf_1194,param_name_1197);
            if(            i_1195!=list$1sTypephp_length(param_types_1189)-1) {
                buffer_append_str(header_buf_1194,",");
            }
        }
        buffer_append_str(header_buf_1194,")");
        result_type_1185->mStatic=(_Bool)0;
        result_type_1185->mUniq=(_Bool)0;
        result_type_1185->mInline=(_Bool)0;
        result_type_1185->mGenerate=(_Bool)0;
        fun2_1198=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1239=__builtin_string(name_1186)))));
        __right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1198==((void*)0)||fun2_1198->mExternal) {
            fun_1199=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1186),(struct sType*)come_increment_ref_count(result_type_1185),(struct list$1sTypeph*)come_increment_ref_count(param_types_1189),(struct list$1charph*)come_increment_ref_count(param_names_1192),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1193),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1184),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1194)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1186)),(struct sFun*)come_increment_ref_count(fun_1199));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3733, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1249=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3733, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1199),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1200=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1249,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1201=node_compile(node_1200,info);
            if(            !Value_1201) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1166=fun_1199;
            come_call_finalizer3(fun_1199,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1200) { node_1200 = come_decrement_ref_count2(node_1200, ((struct sNode*)node_1200)->finalize, ((struct sNode*)node_1200)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1166=fun2_1198;
        }
        __dec_obj320=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1183);
        come_call_finalizer3(__dec_obj320,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1179;
        info->head=head_1182;
        info->sline=sline_1180;
        __dec_obj321=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1181);
        __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1170,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1181 = come_decrement_ref_count2(sname_1181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1183,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1184,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1185,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1186 = come_decrement_ref_count2(name_1186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1189,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1192,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1193,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1194,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1198,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1165;
    __dec_obj322=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1162);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj323=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1163);
    __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1164;
    __result413__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1252=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),equaler_1166,(char*)come_increment_ref_count(real_fun_name_1167))));
    last_code_1162 = come_decrement_ref_count2(last_code_1162, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1163 = come_decrement_ref_count2(last_code2_1163, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1167 = come_decrement_ref_count2(real_fun_name_1167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1168,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1252,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
struct tuple2$2sFunpcharph* __result414__;
char* last_code_1202;
char* __dec_obj324;
char* last_code2_1203;
char* __dec_obj325;
_Bool comma_instead_of_semicolon_1204;
struct sClass* current_stack_frame_struct_1205;
struct sFun* cloner_1206;
void* __right_value1255 = (void*)0;
char* real_fun_name_1207;
void* __right_value1256 = (void*)0;
struct sType* type2_1208;
struct sClass* klass_1209;
char* fun_name2_1210;
void* __right_value1257 = (void*)0;
char* none_generics_name_1211;
void* __right_value1258 = (void*)0;
struct sType* obj_type_1212;
void* __right_value1259 = (void*)0;
char* __dec_obj326;
void* __right_value1260 = (void*)0;
char* fun_name3_1213;
void* __right_value1261 = (void*)0;
struct sGenericsFun* generics_fun_1214;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1215=0;
_Bool err_1216=0;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
char* __dec_obj327;
void* __right_value1268 = (void*)0;
char* __dec_obj328;
int i_1217;
void* __right_value1269 = (void*)0;
char* new_fun_name_1218;
void* __right_value1270 = (void*)0;
void* __right_value1271 = (void*)0;
char* __dec_obj329;
void* __right_value1272 = (void*)0;
char* __dec_obj330;
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
struct buffer* source_1219;
void* __right_value1275 = (void*)0;
char* name_1220;
void* __right_value1276 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1222;
struct tuple2$2charphsTypeph* it_1223;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1224=0;
struct sType* field_type_1225=0;
void* __right_value1277 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1228;
struct tuple2$2charphsTypeph* it_1229;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1230=0;
struct sType* field_type_1231=0;
char* p_1235;
int sline_1236;
char* sname_1237;
struct buffer* source3_1238;
char* head_1239;
struct buffer* __dec_obj331;
void* __right_value1278 = (void*)0;
char* __dec_obj332;
void* __right_value1279 = (void*)0;
struct sBlock* block_1240;
void* __right_value1280 = (void*)0;
struct sType* result_type_1241;
void* __right_value1281 = (void*)0;
char* name_1242;
void* __right_value1282 = (void*)0;
struct sType* self_type_1243;
struct sType* __list_values31___1245[1];
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
struct list$1sTypeph* param_types_1244;
void* __right_value1285 = (void*)0;
char* __list_values32___1246[1];
void* __right_value1286 = (void*)0;
void* __right_value1287 = (void*)0;
struct list$1charph* param_names_1247;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct list$1charph* param_default_parametors_1248;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct buffer* header_buf_1249;
void* __right_value1292 = (void*)0;
int i_1250;
void* __right_value1293 = (void*)0;
struct sType* param_type_1251;
void* __right_value1294 = (void*)0;
char* param_name_1252;
void* __right_value1295 = (void*)0;
void* __right_value1296 = (void*)0;
void* __right_value1297 = (void*)0;
struct sFun* fun2_1253;
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
struct sFun* fun_1254;
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
void* __right_value1306 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1307 = (void*)0;
struct sNode* node_1255;
_Bool Value_1256;
char* __dec_obj333;
struct buffer* __dec_obj334;
char* __dec_obj335;
char* __dec_obj336;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
struct tuple2$2sFunpcharph* __result416__;
fun_name2_1210 = (void*)0;
memset(&i_1217, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result414__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1254=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3765, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1254,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result414__;
    }
    last_code_1202=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj324=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1203=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj325=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1204=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1205=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1206=((void*)0);
    real_fun_name_1207=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1208=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1208;
    klass_1209=type->mClass;
    if(    list$1sTypephp_length(type->mGenericsTypes)>0) {
        none_generics_name_1211=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1212=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj326=fun_name2_1210;
        fun_name2_1210=(char*)come_increment_ref_count(create_method_name(obj_type_1212,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1213=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1211,fun_name));
        generics_fun_1214=((struct sGenericsFun*)(__right_value1261=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_1213,((void*)0))));
        come_call_finalizer3(__right_value1261,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1214) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1263=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1210)),generics_fun_1214,obj_type_1212,info)));
            name_1215=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1216=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1263,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1216) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1265=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3805, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1215 = come_decrement_ref_count2(name_1215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1211 = come_decrement_ref_count2(none_generics_name_1211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1212,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1213 = come_decrement_ref_count2(fun_name3_1213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1202 = come_decrement_ref_count2(last_code_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1203 = come_decrement_ref_count2(last_code2_1203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1207 = come_decrement_ref_count2(real_fun_name_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1208,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1210 = come_decrement_ref_count2(fun_name2_1210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1265,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result415__;
                }
            }
            cloner_1206=((struct sFun*)(__right_value1266=map$2charphsFunphp_operator_load_element(info->funcs,name_1215)));
            come_call_finalizer3(__right_value1266,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            name_1215 = come_decrement_ref_count2(name_1215, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1206=((struct sFun*)(__right_value1267=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1210)));
            come_call_finalizer3(__right_value1267,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj327=real_fun_name_1207;
        real_fun_name_1207=(char*)come_increment_ref_count(fun_name2_1210);
        __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1211 = come_decrement_ref_count2(none_generics_name_1211, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1212,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1213 = come_decrement_ref_count2(fun_name3_1213, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj328=fun_name2_1210;
        fun_name2_1210=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1217=128-1;        i_1217>=1;        i_1217--        ){
            new_fun_name_1218=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1210,i_1217));
            cloner_1206=((struct sFun*)(__right_value1270=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1218)));
            come_call_finalizer3(__right_value1270,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1206) {
                __dec_obj329=fun_name2_1210;
                fun_name2_1210=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1218));
                __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1218 = come_decrement_ref_count2(new_fun_name_1218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1218 = come_decrement_ref_count2(new_fun_name_1218, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1206==((void*)0)) {
            cloner_1206=((struct sFun*)(__right_value1272=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1210)));
            come_call_finalizer3(__right_value1272,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj330=real_fun_name_1207;
        real_fun_name_1207=(char*)come_increment_ref_count(fun_name2_1210);
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1206==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1219=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3840, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1219,"{\n");
        buffer_append_str(source_1219,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1219,"var result = new %s~;\n",((char*)(__right_value1275=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1275 = come_decrement_ref_count2(__right_value1275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1209->mProtocol) {
            name_1220="_protocol_obj";
            char source2_1221[1024];
            memset(&source2_1221, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1221,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1219,source2_1221);
            klass_1209=((struct sClass*)(__right_value1276=map$2charphsClassphp_operator_load_element(info->classes,klass_1209->mName)));
            come_call_finalizer3(__right_value1276,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1222=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1209->mFields)),it_1223=list$1tuple2$2charphsTypephphp_begin((o2_saved_1222));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1222));            it_1223=list$1tuple2$2charphsTypephphp_next((o2_saved_1222))            ){
                multiple_assign_var18=it_1223;
                name_1224=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1225=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1224,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1225->mArrayNum)>0) {
                    char source2_1226[1024];
                    memset(&source2_1226, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1226,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1224,name_1224,name_1224);
                    buffer_append_str(source_1219,source2_1226);
                }
                else {
                    char source2_1227[1024];
                    memset(&source2_1227, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1227,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1224,name_1224);
                    buffer_append_str(source_1219,source2_1227);
                }
                name_1224 = come_decrement_ref_count2(name_1224, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1225,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1222,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1209=((struct sClass*)(__right_value1277=map$2charphsClassphp_operator_load_element(info->classes,klass_1209->mName)));
            come_call_finalizer3(__right_value1277,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1228=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1209->mFields)),it_1229=list$1tuple2$2charphsTypephphp_begin((o2_saved_1228));            !list$1tuple2$2charphsTypephphp_end((o2_saved_1228));            it_1229=list$1tuple2$2charphsTypephphp_next((o2_saved_1228))            ){
                multiple_assign_var19=it_1229;
                name_1230=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1231=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1231->mHeap) {
                    char source2_1232[1024];
                    memset(&source2_1232, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1232,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1230,name_1230,name_1230);
                    buffer_append_str(source_1219,source2_1232);
                }
                else if(                list$1sNodephp_length(field_type_1231->mArrayNum)>0) {
                    char source2_1233[1024];
                    memset(&source2_1233, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1233,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1230,name_1230,name_1230);
                    buffer_append_str(source_1219,source2_1233);
                }
                else {
                    char source2_1234[1024];
                    memset(&source2_1234, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1234,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1230,name_1230);
                    buffer_append_str(source_1219,source2_1234);
                }
                name_1230 = come_decrement_ref_count2(name_1230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1231,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1228,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1219,"return result;");
        buffer_append_char(source_1219,125);
        p_1235=info->p;
        sline_1236=info->sline;
        sname_1237=(char*)come_increment_ref_count(info->sname);
        source3_1238=(struct buffer*)come_increment_ref_count(info->source);
        head_1239=info->head;
        __dec_obj331=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1219);
        come_call_finalizer3(__dec_obj331,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj332=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1207));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1240=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1241=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1242=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1207));
        self_type_1243=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1243->mHeap=(_Bool)0;
        param_types_1244=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1245[0]=(struct sType*)come_increment_ref_count(self_type_1243),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3921, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values31___1245)));
        param_names_1247=(struct list$1charph*)come_increment_ref_count((__list_values32___1246[0]=(char*)come_increment_ref_count(((char*)(__right_value1285=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3922, "struct list$1charph", (void*)0, (void*)0)),1,__list_values32___1246)));
        __right_value1285 = come_decrement_ref_count2(__right_value1285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1248=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3923, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1248,((void*)0));
        header_buf_1249=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3926, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1249,((char*)(__right_value1292=make_come_type_name_string(result_type_1241,info))));
        __right_value1292 = come_decrement_ref_count2(__right_value1292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1249," ");
        buffer_append_str(header_buf_1249,real_fun_name_1207);
        buffer_append_str(header_buf_1249,"(");
        for(        i_1250=0;        i_1250<list$1sTypephp_length(param_types_1244);        i_1250++        ){
            param_type_1251=((struct sType*)(__right_value1293=list$1sTypephp_operator_load_element(param_types_1244,i_1250)));
            come_call_finalizer3(__right_value1293,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1252=((char*)(__right_value1294=list$1charphp_operator_load_element(param_names_1247,i_1250)));
            __right_value1294 = come_decrement_ref_count2(__right_value1294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1249,((char*)(__right_value1295=make_come_type_name_string(param_type_1251,info))));
            __right_value1295 = come_decrement_ref_count2(__right_value1295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1249," ");
            buffer_append_str(header_buf_1249,param_name_1252);
            if(            i_1250!=list$1sTypephp_length(param_types_1244)-1) {
                buffer_append_str(header_buf_1249,",");
            }
        }
        buffer_append_str(header_buf_1249,")");
        result_type_1241->mStatic=(_Bool)0;
        result_type_1241->mUniq=(_Bool)0;
        result_type_1241->mInline=(_Bool)0;
        result_type_1241->mGenerate=(_Bool)0;
        fun2_1253=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1296=__builtin_string(name_1242)))));
        __right_value1296 = come_decrement_ref_count2(__right_value1296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1253==((void*)0)||fun2_1253->mExternal) {
            fun_1254=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3955, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1242),(struct sType*)come_increment_ref_count(result_type_1241),(struct list$1sTypeph*)come_increment_ref_count(param_types_1244),(struct list$1charph*)come_increment_ref_count(param_names_1247),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1248),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1240),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1249)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1254->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1242)),(struct sFun*)come_increment_ref_count(fun_1254));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3967, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1306=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3967, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1254),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1255=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1306,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1256=node_compile(node_1255,info);
            if(            !Value_1256) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1206=fun_1254;
            come_call_finalizer3(fun_1254,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1255) { node_1255 = come_decrement_ref_count2(node_1255, ((struct sNode*)node_1255)->finalize, ((struct sNode*)node_1255)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1206=fun2_1253;
        }
        __dec_obj333=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1237);
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1236;
        __dec_obj334=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1238);
        come_call_finalizer3(__dec_obj334,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1235;
        info->head=head_1239;
        info->sline=sline_1236;
        come_call_finalizer3(source_1219,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1237 = come_decrement_ref_count2(sname_1237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1238,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1240,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1241,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1242 = come_decrement_ref_count2(name_1242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1243,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1244,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1247,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1248,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1249,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1253,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1205;
    __dec_obj335=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1202);
    __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj336=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1203);
    __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1204;
    __result416__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1309=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3995, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1206,(char*)come_increment_ref_count(real_fun_name_1207))));
    last_code_1202 = come_decrement_ref_count2(last_code_1202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1203 = come_decrement_ref_count2(last_code2_1203, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1207 = come_decrement_ref_count2(real_fun_name_1207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1208,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1210 = come_decrement_ref_count2(fun_name2_1210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1309,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1257;
char* __dec_obj337;
char* last_code2_1258;
char* __dec_obj338;
_Bool comma_instead_of_semicolon_1259;
struct sClass* current_stack_frame_struct_1260;
struct sFun* cloner_1261;
void* __right_value1310 = (void*)0;
char* real_fun_name_1262;
void* __right_value1311 = (void*)0;
struct sType* type2_1263;
struct sClass* klass_1264;
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
struct buffer* source_1265;
int i_1266;
void* __right_value1314 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1267;
struct tuple2$2charphsTypeph* it_1268;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1269=0;
struct sType* field_type_1270=0;
char* p_1273;
int sline_1274;
char* sname_1275;
struct buffer* source3_1276;
char* head_1277;
struct buffer* __dec_obj339;
void* __right_value1315 = (void*)0;
char* __dec_obj340;
void* __right_value1316 = (void*)0;
struct sBlock* block_1278;
void* __right_value1317 = (void*)0;
void* __right_value1318 = (void*)0;
struct sType* result_type_1279;
void* __right_value1319 = (void*)0;
char* name_1280;
void* __right_value1320 = (void*)0;
struct sType* self_type_1281;
struct sType* __list_values33___1283[1];
void* __right_value1321 = (void*)0;
void* __right_value1322 = (void*)0;
struct list$1sTypeph* param_types_1282;
void* __right_value1323 = (void*)0;
char* __list_values34___1284[1];
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
struct list$1charph* param_names_1285;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
struct list$1charph* param_default_parametors_1286;
void* __right_value1328 = (void*)0;
void* __right_value1329 = (void*)0;
struct buffer* header_buf_1287;
void* __right_value1330 = (void*)0;
int i_1288;
void* __right_value1331 = (void*)0;
struct sType* param_type_1289;
void* __right_value1332 = (void*)0;
char* param_name_1290;
void* __right_value1333 = (void*)0;
void* __right_value1334 = (void*)0;
void* __right_value1335 = (void*)0;
struct sFun* fun2_1291;
void* __right_value1336 = (void*)0;
void* __right_value1337 = (void*)0;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
void* __right_value1340 = (void*)0;
void* __right_value1341 = (void*)0;
struct sFun* fun_1292;
void* __right_value1342 = (void*)0;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1345 = (void*)0;
struct sNode* node_1293;
_Bool Value_1294;
char* __dec_obj341;
struct buffer* __dec_obj342;
char* __dec_obj343;
char* __dec_obj344;
void* __right_value1346 = (void*)0;
void* __right_value1347 = (void*)0;
struct tuple2$2sFunpcharph* __result417__;
    last_code_1257=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj337=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1258=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj338=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1259=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1260=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1261=((void*)0);
    real_fun_name_1262=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1263=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1263;
    klass_1264=type->mClass;
    if(    type->mPointerNum>0&&!klass_1264->mNumber) {
        source_1265=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4020, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1265,"{\n");
        buffer_append_str(source_1265,"var result = new buffer();\n");
        buffer_append_format(source_1265,"result.append_str(\"%s {\");\n",klass_1264->mName);
        i_1266=0;
        klass_1264=((struct sClass*)(__right_value1314=map$2charphsClassphp_operator_load_element(info->classes,klass_1264->mName)));
        come_call_finalizer3(__right_value1314,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1267=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1264->mFields)),it_1268=list$1tuple2$2charphsTypephphp_begin((o2_saved_1267));        !list$1tuple2$2charphsTypephphp_end((o2_saved_1267));        it_1268=list$1tuple2$2charphsTypephphp_next((o2_saved_1267))        ){
            multiple_assign_var20=it_1268;
            name_1269=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1270=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1266==list$1tuple2$2charphsTypephphp_length(klass_1264->mFields)-1) {
                char source2_1271[1024];
                memset(&source2_1271, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1271,1024,"result.append_str(\"%s:\");\n",name_1269);
                buffer_append_str(source_1265,source2_1271);
                snprintf(source2_1271,1024,"result.append_str(self.%s.to_string());\n",name_1269);
                buffer_append_str(source_1265,source2_1271);
            }
            else {
                char source2_1272[1024];
                memset(&source2_1272, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1272,1024,"result.append_str(\"%s:\");\n",name_1269);
                buffer_append_str(source_1265,source2_1272);
                snprintf(source2_1272,1024,"result.append_str(self.%s.to_string());\n",name_1269);
                buffer_append_str(source_1265,source2_1272);
                snprintf(source2_1272,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1265,source2_1272);
            }
            i_1266++;
            name_1269 = come_decrement_ref_count2(name_1269, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1270,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1267,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1265,"result.append_str(\"}\");\n");
        buffer_append_format(source_1265,"return result.to_string();\n");
        buffer_append_char(source_1265,125);
        p_1273=info->p;
        sline_1274=info->sline;
        sname_1275=(char*)come_increment_ref_count(info->sname);
        source3_1276=(struct buffer*)come_increment_ref_count(info->source);
        head_1277=info->head;
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1265);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj340=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1262));
        __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1278=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1279=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4081, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info));
        result_type_1279->mHeap=(_Bool)1;
        name_1280=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1262));
        self_type_1281=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1281->mHeap=(_Bool)0;
        param_types_1282=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1283[0]=(struct sType*)come_increment_ref_count(self_type_1281),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4086, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values33___1283)));
        param_names_1285=(struct list$1charph*)come_increment_ref_count((__list_values34___1284[0]=(char*)come_increment_ref_count(((char*)(__right_value1323=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4087, "struct list$1charph", (void*)0, (void*)0)),1,__list_values34___1284)));
        __right_value1323 = come_decrement_ref_count2(__right_value1323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1286=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4088, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1286,((void*)0));
        header_buf_1287=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4091, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1287,((char*)(__right_value1330=make_come_type_name_string(result_type_1279,info))));
        __right_value1330 = come_decrement_ref_count2(__right_value1330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1287," ");
        buffer_append_str(header_buf_1287,real_fun_name_1262);
        buffer_append_str(header_buf_1287,"(");
        for(        i_1288=0;        i_1288<list$1sTypephp_length(param_types_1282);        i_1288++        ){
            param_type_1289=((struct sType*)(__right_value1331=list$1sTypephp_operator_load_element(param_types_1282,i_1288)));
            come_call_finalizer3(__right_value1331,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1290=((char*)(__right_value1332=list$1charphp_operator_load_element(param_names_1285,i_1288)));
            __right_value1332 = come_decrement_ref_count2(__right_value1332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1287,((char*)(__right_value1333=make_come_type_name_string(param_type_1289,info))));
            __right_value1333 = come_decrement_ref_count2(__right_value1333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1287," ");
            buffer_append_str(header_buf_1287,param_name_1290);
            if(            i_1288!=list$1sTypephp_length(param_types_1282)-1) {
                buffer_append_str(header_buf_1287,",");
            }
        }
        buffer_append_str(header_buf_1287,")");
        result_type_1279->mStatic=(_Bool)0;
        result_type_1279->mUniq=(_Bool)0;
        result_type_1279->mInline=(_Bool)0;
        result_type_1279->mGenerate=(_Bool)0;
        fun2_1291=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1334=__builtin_string(name_1280)))));
        __right_value1334 = come_decrement_ref_count2(__right_value1334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1291==((void*)0)||fun2_1291->mExternal) {
            fun_1292=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4119, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1280),(struct sType*)come_increment_ref_count(result_type_1279),(struct list$1sTypeph*)come_increment_ref_count(param_types_1282),(struct list$1charph*)come_increment_ref_count(param_names_1285),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1286),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1278),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1287)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1292->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1280)),(struct sFun*)come_increment_ref_count(fun_1292));
            cloner_1261=fun_1292;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4133, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1344=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4133, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1292),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1293=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1344,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1294=node_compile(node_1293,info);
            if(            !Value_1294) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1292,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1293) { node_1293 = come_decrement_ref_count2(node_1293, ((struct sNode*)node_1293)->finalize, ((struct sNode*)node_1293)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1261=fun2_1291;
        }
        __dec_obj341=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1275);
        __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1274;
        __dec_obj342=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1276);
        come_call_finalizer3(__dec_obj342,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1273;
        info->head=head_1277;
        info->sline=sline_1274;
        come_call_finalizer3(source_1265,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1275 = come_decrement_ref_count2(sname_1275, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1276,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1278,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1279,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1280 = come_decrement_ref_count2(name_1280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1281,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1282,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1285,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1286,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1287,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1291,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1260;
    __dec_obj343=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1257);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj344=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1258);
    __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1259;
    __result417__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1347=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4159, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),cloner_1261,(char*)come_increment_ref_count(real_fun_name_1262))));
    last_code_1257 = come_decrement_ref_count2(last_code_1257, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1258 = come_decrement_ref_count2(last_code2_1258, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1262 = come_decrement_ref_count2(real_fun_name_1262, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1263,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1347,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1342;
char* __dec_obj355;
char* last_code2_1343;
char* __dec_obj356;
_Bool comma_instead_of_semicolon_1344;
struct sClass* current_stack_frame_struct_1345;
struct sFun* get_hash_key_fun_1346;
void* __right_value1398 = (void*)0;
char* real_fun_name_1347;
void* __right_value1399 = (void*)0;
struct sType* type2_1348;
struct sClass* klass_1349;
void* __right_value1400 = (void*)0;
void* __right_value1401 = (void*)0;
char* none_generics_name_1350;
void* __right_value1402 = (void*)0;
char* generics_fun_name_1351;
void* __right_value1403 = (void*)0;
struct sGenericsFun* generics_fun_1352;
void* __right_value1404 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1353=0;
_Bool err_1354=0;
void* __right_value1405 = (void*)0;
int i_1355;
void* __right_value1406 = (void*)0;
char* new_fun_name_1356;
void* __right_value1407 = (void*)0;
void* __right_value1408 = (void*)0;
char* __dec_obj357;
void* __right_value1409 = (void*)0;
void* __right_value1410 = (void*)0;
void* __right_value1411 = (void*)0;
struct buffer* source_1357;
int i_1358;
void* __right_value1412 = (void*)0;
struct list$1tuple2$2charphsTypephph* o2_saved_1359;
struct tuple2$2charphsTypeph* it_1360;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1361=0;
struct sType* field_type_1362=0;
char* p_1364;
int sline_1365;
char* sname_1366;
struct buffer* source3_1367;
char* head_1368;
struct buffer* __dec_obj358;
void* __right_value1413 = (void*)0;
char* __dec_obj359;
void* __right_value1414 = (void*)0;
struct sBlock* block_1369;
void* __right_value1415 = (void*)0;
void* __right_value1416 = (void*)0;
struct sType* result_type_1370;
void* __right_value1417 = (void*)0;
char* name_1371;
void* __right_value1418 = (void*)0;
struct sType* self_type_1372;
struct sType* __list_values37___1374[1];
void* __right_value1419 = (void*)0;
void* __right_value1420 = (void*)0;
struct list$1sTypeph* param_types_1373;
void* __right_value1421 = (void*)0;
char* __list_values38___1375[1];
void* __right_value1422 = (void*)0;
void* __right_value1423 = (void*)0;
struct list$1charph* param_names_1376;
void* __right_value1424 = (void*)0;
void* __right_value1425 = (void*)0;
struct list$1charph* param_default_parametors_1377;
void* __right_value1426 = (void*)0;
void* __right_value1427 = (void*)0;
struct buffer* header_buf_1378;
void* __right_value1428 = (void*)0;
int i_1379;
void* __right_value1429 = (void*)0;
struct sType* param_type_1380;
void* __right_value1430 = (void*)0;
char* param_name_1381;
void* __right_value1431 = (void*)0;
void* __right_value1432 = (void*)0;
void* __right_value1433 = (void*)0;
struct sFun* fun2_1382;
void* __right_value1434 = (void*)0;
void* __right_value1435 = (void*)0;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
void* __right_value1438 = (void*)0;
void* __right_value1439 = (void*)0;
struct sFun* fun_1383;
void* __right_value1440 = (void*)0;
void* __right_value1441 = (void*)0;
void* __right_value1442 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1443 = (void*)0;
struct sNode* node_1384;
_Bool Value_1385;
char* __dec_obj360;
struct buffer* __dec_obj361;
char* __dec_obj362;
char* __dec_obj363;
void* __right_value1444 = (void*)0;
void* __right_value1445 = (void*)0;
struct tuple2$2sFunpcharph* __result419__;
memset(&i_1355, 0, sizeof(int));
    last_code_1342=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj355=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj355 = come_decrement_ref_count2(__dec_obj355, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1343=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj356=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1344=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1345=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1346=((void*)0);
    real_fun_name_1347=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1348=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1348;
    klass_1349=type->mClass;
    if(    list$1sTypephp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1346=((struct sFun*)(__right_value1400=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1347)));
        come_call_finalizer3(__right_value1400,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1346==((void*)0)) {
            none_generics_name_1350=(char*)come_increment_ref_count(get_none_generics_name(type2_1348->mClass->mName));
            generics_fun_name_1351=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1350,fun_name));
            generics_fun_1352=((struct sGenericsFun*)(__right_value1403=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_1351)));
            come_call_finalizer3(__right_value1403,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1352) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1404=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1347),generics_fun_1352,type,info)));
                name_1353=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1354=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1404,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1354) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1346=((struct sFun*)(__right_value1405=map$2charphsFunphp_operator_load_element(info->funcs,name_1353)));
                come_call_finalizer3(__right_value1405,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_1353 = come_decrement_ref_count2(name_1353, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1350 = come_decrement_ref_count2(none_generics_name_1350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1351 = come_decrement_ref_count2(generics_fun_name_1351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1355=128-1;        i_1355>=1;        i_1355--        ){
            new_fun_name_1356=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1347,i_1355));
            get_hash_key_fun_1346=((struct sFun*)(__right_value1407=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1356)));
            come_call_finalizer3(__right_value1407,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1346) {
                __dec_obj357=real_fun_name_1347;
                real_fun_name_1347=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1356));
                __dec_obj357 = come_decrement_ref_count2(__dec_obj357, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1356 = come_decrement_ref_count2(new_fun_name_1356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1356 = come_decrement_ref_count2(new_fun_name_1356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1346==((void*)0)) {
            get_hash_key_fun_1346=((struct sFun*)(__right_value1409=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1347)));
            come_call_finalizer3(__right_value1409,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1346==((void*)0)&&type->mPointerNum>0&&!klass_1349->mNumber&&!klass_1349->mProtocol) {
        source_1357=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4447, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1357,"{\n");
        buffer_append_str(source_1357,"unsigned int result = 0;\n");
        i_1358=0;
        klass_1349=((struct sClass*)(__right_value1412=map$2charphsClassphp_operator_load_element(info->classes,klass_1349->mName)));
        come_call_finalizer3(__right_value1412,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1359=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_1349->mFields)),it_1360=list$1tuple2$2charphsTypephphp_begin((o2_saved_1359));        !list$1tuple2$2charphsTypephphp_end((o2_saved_1359));        it_1360=list$1tuple2$2charphsTypephphp_next((o2_saved_1359))        ){
            multiple_assign_var24=it_1360;
            name_1361=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1362=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1363[1024];
            memset(&source2_1363, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1363,1024,"result += self.%s.get_hash_key();\n",name_1361);
            buffer_append_str(source_1357,source2_1363);
            i_1358++;
            name_1361 = come_decrement_ref_count2(name_1361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1362,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1359,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1357,"return result;\n");
        buffer_append_char(source_1357,125);
        p_1364=info->p;
        sline_1365=info->sline;
        sname_1366=(char*)come_increment_ref_count(info->sname);
        source3_1367=(struct buffer*)come_increment_ref_count(info->source);
        head_1368=info->head;
        __dec_obj358=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1357);
        come_call_finalizer3(__dec_obj358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj359=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1347));
        __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1369=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1370=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4484, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        result_type_1370->mUnsigned=(_Bool)1;
        name_1371=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1347));
        self_type_1372=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1372->mHeap=(_Bool)0;
        param_types_1373=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1374[0]=(struct sType*)come_increment_ref_count(self_type_1372),
list$1sTypeph_initialize_with_values((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4489, "struct list$1sTypeph", (void*)0, (void*)0)),1,__list_values37___1374)));
        param_names_1376=(struct list$1charph*)come_increment_ref_count((__list_values38___1375[0]=(char*)come_increment_ref_count(((char*)(__right_value1421=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4490, "struct list$1charph", (void*)0, (void*)0)),1,__list_values38___1375)));
        __right_value1421 = come_decrement_ref_count2(__right_value1421, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1377=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4491, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1377,((void*)0));
        header_buf_1378=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4494, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1378,((char*)(__right_value1428=make_come_type_name_string(result_type_1370,info))));
        __right_value1428 = come_decrement_ref_count2(__right_value1428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1378," ");
        buffer_append_str(header_buf_1378,real_fun_name_1347);
        buffer_append_str(header_buf_1378,"(");
        for(        i_1379=0;        i_1379<list$1sTypephp_length(param_types_1373);        i_1379++        ){
            param_type_1380=((struct sType*)(__right_value1429=list$1sTypephp_operator_load_element(param_types_1373,i_1379)));
            come_call_finalizer3(__right_value1429,sType_finalize, 0, 1, 0, 0, __result_obj__);
            param_name_1381=((char*)(__right_value1430=list$1charphp_operator_load_element(param_names_1376,i_1379)));
            __right_value1430 = come_decrement_ref_count2(__right_value1430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1378,((char*)(__right_value1431=make_come_type_name_string(param_type_1380,info))));
            __right_value1431 = come_decrement_ref_count2(__right_value1431, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1378," ");
            buffer_append_str(header_buf_1378,param_name_1381);
            if(            i_1379!=list$1sTypephp_length(param_types_1373)-1) {
                buffer_append_str(header_buf_1378,",");
            }
        }
        buffer_append_str(header_buf_1378,")");
        result_type_1370->mStatic=(_Bool)0;
        result_type_1370->mUniq=(_Bool)0;
        result_type_1370->mInline=(_Bool)0;
        result_type_1370->mGenerate=(_Bool)0;
        fun2_1382=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1432=__builtin_string(name_1371)))));
        __right_value1432 = come_decrement_ref_count2(__right_value1432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1382==((void*)0)||fun2_1382->mExternal) {
            fun_1383=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4522, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1371),(struct sType*)come_increment_ref_count(result_type_1370),(struct list$1sTypeph*)come_increment_ref_count(param_types_1373),(struct list$1charph*)come_increment_ref_count(param_names_1376),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1377),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1369),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1378)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1383->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1371)),(struct sFun*)come_increment_ref_count(fun_1383));
            get_hash_key_fun_1346=fun_1383;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4536, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1442=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4536, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1383),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1384=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1442,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1385=node_compile(node_1384,info);
            if(            !Value_1385) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1383,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1384) { node_1384 = come_decrement_ref_count2(node_1384, ((struct sNode*)node_1384)->finalize, ((struct sNode*)node_1384)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1346=fun2_1382;
        }
        __dec_obj360=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1366);
        __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1365;
        __dec_obj361=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1367);
        come_call_finalizer3(__dec_obj361,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1364;
        info->head=head_1368;
        info->sline=sline_1365;
        come_call_finalizer3(source_1357,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1366 = come_decrement_ref_count2(sname_1366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1367,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1369,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1370,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1371 = come_decrement_ref_count2(name_1371, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1372,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1373,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1377,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1378,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1382,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1345;
    __dec_obj362=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1342);
    __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj363=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1343);
    __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1344;
    __result419__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1445=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4562, "struct tuple2$2sFunpcharph", (void*)0, (void*)0)),get_hash_key_fun_1346,(char*)come_increment_ref_count(real_fun_name_1347))));
    last_code_1342 = come_decrement_ref_count2(last_code_1342, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1343 = come_decrement_ref_count2(last_code2_1343, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1347 = come_decrement_ref_count2(real_fun_name_1347, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1348,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1445,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result419__;
}

