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
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self);
static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sType* use_any_type(struct sType* type);
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypephp_replace(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
struct sType* remove_any_type(struct sType* type);
struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self);
static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2);
static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self);
static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self);
static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2);
static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self);
struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct map$2charphsFunph* map$2charphsFunphp_remove(struct map$2charphsFunph* self, char* key);
struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info);
_Bool sMethodCallNode_terminated(struct sMethodCallNode* self);
char* sMethodCallNode_kind(struct sMethodCallNode* self);
_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void sMethodCallNode_finalize(struct sMethodCallNode* self);
static int list$1charphp_length(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self);
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
    result_132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3779, "struct buffer*", (void*)0, (void*)0))));
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
    result_133=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3786, "struct buffer*", (void*)0, (void*)0))));
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
    result_135=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3795, "struct buffer*", (void*)0, (void*)0))));
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
    result_136=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3802, "struct buffer*", (void*)0, (void*)0))));
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
    result_137=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3809, "struct buffer*", (void*)0, (void*)0))));
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
    result_138=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3816, "struct buffer*", (void*)0, (void*)0))));
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
    result_139=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3823, "struct buffer*", (void*)0, (void*)0))));
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
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4151, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result74__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4156, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result76__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4161, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result78__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4166, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4171, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self)))));
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
    buf_145=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4204, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_145,(char*)self,sizeof(char)*len);
    __result81__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4206, "struct smart_pointer$1char*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_145))));
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
    buf_146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4211, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_146,(char*)self,sizeof(char*)*len);
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charpp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4213, "struct smart_pointer$1charp*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_146))));
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
    buf_147=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4218, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_147,(char*)self,sizeof(short)*len);
    __result84__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1shortp_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4220, "struct smart_pointer$1short*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_147))));
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
    buf_148=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4225, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_148,(char*)self,sizeof(int)*len);
    __result85__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1intp_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4227, "struct smart_pointer$1int*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_148))));
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
    buf_149=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4232, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_149,(char*)self,sizeof(long)*len);
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1longp_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4234, "struct smart_pointer$1long*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_149))));
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
    buf_150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4239, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_150,(char*)self,sizeof(float)*len);
    __result88__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1floatp_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4241, "struct smart_pointer$1float*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_150))));
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
    buf_151=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4246, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(buf_151,(char*)self,sizeof(double)*len);
    __result90__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1doublep_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4248, "struct smart_pointer$1double*", (void*)0, (void*)0)),(struct buffer*)come_increment_ref_count(buf_151))));
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
    __result93__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1charp_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4253, "struct list$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result93__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result96__;
    __result96__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charpp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4258, "struct list$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result96__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result99__;
    __result99__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1shortp_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4263, "struct list$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result99__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1intp_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4268, "struct list$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result105__;
    __result105__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1longp_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4273, "struct list$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result105__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1floatp_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4278, "struct list$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result111__;
    __result111__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1doublep_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4283, "struct list$1double*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result111__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result113__;
    __result113__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1charp_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4288, "struct vector$1char*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result113__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result115__;
    __result115__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charpp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4293, "struct vector$1charp*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result115__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result117__;
    __result117__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1shortp_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4298, "struct vector$1short*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result117__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result119__;
    __result119__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1intp_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4303, "struct vector$1int*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result119__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result121__;
    __result121__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1longp_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4308, "struct vector$1long*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result121__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result123__;
    __result123__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1floatp_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4313, "struct vector$1float*", (void*)0, (void*)0)),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result123__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result125__;
    __result125__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1doublep_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4318, "struct vector$1double*", (void*)0, (void*)0)),len,self)));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2082, "char*", (void*)0, (void*)0)));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2082, "char**", (void*)0, (void*)0)));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2082, "short*", (void*)0, (void*)0)));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2082, "int*", (void*)0, (void*)0)));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2082, "long*", (void*)0, (void*)0)));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2082, "float*", (void*)0, (void*)0)));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2082, "double*", (void*)0, (void*)0)));
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
    __result164__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

struct sCurrentNode* sCurrentNode_initialize(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
struct sCurrentNode* __result220__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

int sCurrentNode_sline(struct sCurrentNode* self, struct sInfo* info){
    return self->sline;
}

char* sCurrentNode_sname(struct sCurrentNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
char* __result221__;
    __result221__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value250=__builtin_string(self->sname)));
    __right_value250 = come_decrement_ref_count2(__right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

char* sCurrentNode_kind(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result222__;
    __result222__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sCurrentNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result222__;
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
void* __right_value293 = (void*)0;
struct sType* type2_314;
void* __right_value294 = (void*)0;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct tuple2$2charphsTypeph* item_332;
void* __right_value300 = (void*)0;
struct sType* type3_334;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct tuple2$2charphsTypeph* item2_337;
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct map$2charphsVarph* o2_saved_388;
char* it_389;
char* key_390;
void* __right_value314 = (void*)0;
struct sVar* value_391;
void* __right_value315 = (void*)0;
struct sType* type2_392;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple2$2charphsTypeph* item_393;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_394;
void* __right_value320 = (void*)0;
char* __dec_obj99;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
struct sType* __dec_obj100;
_Bool __result275__;
    info->current_stack_num++;
    class_name_290=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    current_stack_291=(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "common.h", 462, "struct sClass*", (void*)0, (void*)0)),class_name_290,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info));
    vtable_292=info->lv_table;
    while(vtable_292) {
        for(        o2_saved_293=(struct map$2charphsVarph*)come_increment_ref_count((vtable_292->mVars)),it_296=map$2charphsVarphp_begin((o2_saved_293));        !map$2charphsVarphp_end((o2_saved_293));        it_296=map$2charphsVarphp_next((o2_saved_293))        ){
            key_299=it_296;
            value_300=((struct sVar*)(__right_value255=map$2charphsVarphp_operator_load_element(vtable_292->mVars,key_299)));
            come_call_finalizer3(__right_value255,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_314=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_300->mType));
            type2_314->mPointerNum++;
            item_332=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 475, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(__builtin_string(value_300->mCValueName)),(struct sType*)come_increment_ref_count(type2_314)));
            if(            value_300->mCValueName!=((void*)0)) {
                if(                strcmp(value_300->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_300->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_300->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_300->mType->mClass->mName,"va_list")||string_operator_equals(value_300->mType->mClass->mName,"__builtin_va_list")) {
                }
                else if(                list$1sNodephp_length(type2_314->mArrayNum)==1) {
                    type3_334=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_314));
                    list$1sNodephp_reset(type3_334->mArrayNum);
                    type3_334->mPointerNum=1;
                    type3_334->mOriginIsArray=(_Bool)1;
                    item2_337=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 495, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(__builtin_string(value_300->mCValueName)),(struct sType*)come_increment_ref_count(type3_334)));
                    list$1voidphp_push_back(current_stack_291->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item2_337)));
                    value_300->mType->mOriginIsArray=(_Bool)1;
                    come_call_finalizer3(type3_334,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(item2_337,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    list$1voidphp_push_back(current_stack_291->mFields,(struct tuple2$2charphsTypeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsTypeph_clone, item_332)));
                }
            }
            come_call_finalizer3(type2_314,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_332,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_293,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_292=vtable_292->mParent;
    }
    output_struct(current_stack_291,info);
    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(class_name_290),(struct sClass*)come_increment_ref_count(current_stack_291));
    add_come_code_at_function_head(info,"struct %s __current_stack%d__;\n",class_name_290,info->current_stack_num);
    add_come_code_at_function_head2(info,"memset(&__current_stack%d__, 0, sizeof(struct %s));\n",info->current_stack_num,class_name_290);
    vtable_292=info->lv_table;
    while(vtable_292) {
        for(        o2_saved_388=(struct map$2charphsVarph*)come_increment_ref_count((vtable_292->mVars)),it_389=map$2charphsVarphp_begin((o2_saved_388));        !map$2charphsVarphp_end((o2_saved_388));        it_389=map$2charphsVarphp_next((o2_saved_388))        ){
            key_390=it_389;
            value_391=((struct sVar*)(__right_value314=map$2charphsVarphp_operator_load_element(vtable_292->mVars,key_390)));
            come_call_finalizer3(__right_value314,sVar_finalize, 0, 1, 0, 0, (void*)0);
            type2_392=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, value_391->mType));
            item_393=(struct tuple2$2charphsTypeph*)come_increment_ref_count(tuple2$2charphsTypeph_initialize((struct tuple2$2charphsTypeph**)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "common.h", 524, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone)),(char*)come_increment_ref_count(value_391->mCValueName),(struct sType*)come_increment_ref_count(type2_392)));
            if(            value_391->mCValueName!=((void*)0)) {
                if(                strcmp(value_391->mCValueName,"__list_values")==0) {
                }
                else if(                strcmp(value_391->mCValueName,"__map_keys")==0) {
                }
                else if(                strcmp(value_391->mCValueName,"__map_element")==0) {
                }
                else if(                string_operator_equals(value_391->mType->mClass->mName,"va_list")||string_operator_equals(value_391->mType->mClass->mName,"__builtin_va_list")) {
                }
                else {
                    if(                    string_operator_equals(type2_392->mClass->mName,"lambda")) {
                        add_come_code(info,"__current_stack%d__.%s = %s;\n",info->current_stack_num,value_391->mCValueName,value_391->mCValueName);
                    }
                    else {
                        add_come_code(info,"__current_stack%d__.%s = &%s;\n",info->current_stack_num,value_391->mCValueName,value_391->mCValueName);
                    }
                }
            }
            come_call_finalizer3(type2_392,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(item_393,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_388,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
        vtable_292=vtable_292->mParent;
    }
    come_value_394=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "common.h", 553, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj99=come_value_394->c_value;
    come_value_394->c_value=(char*)come_increment_ref_count(xsprintf("&__current_stack%d__",info->current_stack_num));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=come_value_394->type;
    come_value_394->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "common.h", 556, "struct sType*", (void*)0, (void*)0)),class_name_290,(_Bool)0,info));
    come_call_finalizer3(__dec_obj100,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_394->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_394->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_394));
    __result275__ = (_Bool)1;
    class_name_290 = come_decrement_ref_count2(class_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(current_stack_291,sClass_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_394,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
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

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_294;
char* __result223__;
char* __result224__;
char* result_295;
char* __result225__;
result_294 = (void*)0;
result_295 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_294,0,sizeof(char*));
        __result223__ = gComeFunResultObject = __result_obj__ = result_294;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result224__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    memset(&result_295,0,sizeof(char*));
    __result225__ = gComeFunResultObject = __result_obj__ = result_295;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_297;
char* __result226__;
char* __result227__;
char* result_298;
char* __result228__;
result_297 = (void*)0;
result_298 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_297,0,sizeof(char*));
        __result226__ = gComeFunResultObject = __result_obj__ = result_297;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result227__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    memset(&result_298,0,sizeof(char*));
    __result228__ = gComeFunResultObject = __result_obj__ = result_298;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_301;
unsigned int hash_302;
unsigned int it_303;
struct sVar* __result229__;
struct sVar* __result230__;
struct sVar* __result231__;
struct sVar* __result232__;
default_value_301 = (void*)0;
    memset(&default_value_301,0,sizeof(struct sVar*));
    hash_302=charp_get_hash_key(((char*)key))%self->size;
    it_303=hash_302;
    while((_Bool)1) {
        if(        self->item_existance[it_303]) {
            if(            charp_equals(self->keys[it_303],key)) {
                __result229__ = gComeFunResultObject = __result_obj__ = self->items[it_303];
                come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
            it_303++;
            if(            it_303>=self->size) {
                it_303=0;
            }
            else if(            it_303==hash_302) {
                __result230__ = gComeFunResultObject = __result_obj__ = default_value_301;
                come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
        }
        else {
            __result231__ = gComeFunResultObject = __result_obj__ = default_value_301;
            come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result231__;
        }
    }
    __result232__ = gComeFunResultObject = __result_obj__ = default_value_301;
    come_call_finalizer3(default_value_301,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj33;
char* __dec_obj34;
struct sType* __dec_obj35;
char* __dec_obj55;
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
            __dec_obj55=self->mFunName;
            __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj36;
struct sType* __dec_obj37;
struct sType* __dec_obj38;
char* __dec_obj39;
char* __dec_obj40;
struct list$1sTypeph* __dec_obj41;
struct list$1sNodeph* __dec_obj43;
struct list$1sTypeph* __dec_obj45;
struct list$1charph* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
struct sType* __dec_obj49;
struct sNode* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
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
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj39=self->mInterfaceName;
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj40=self->mGenericsName;
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj41=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj41,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj43=self->mArrayNum;
            come_call_finalizer3(__dec_obj43,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj45=self->mParamTypes;
            come_call_finalizer3(__dec_obj45,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj46=self->mParamNames;
            come_call_finalizer3(__dec_obj46,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj47=self->mResultType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj48=self->mAlignas;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj49=self->mChannelType;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj50=self->mSizeNum;
            if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj51=self->mOriginalTypeName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj52=self->mAsmName;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj53=self->mTupleName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj54=self->mAttribute;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct sType* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sNode* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, ((struct sNode*)__dec_obj44)->finalize, ((struct sNode*)__dec_obj44)->_protocol_obj, 0,0,0, (void*)0); };
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
struct sType* __result233__;
void* __right_value256 = (void*)0;
struct sType* result_315;
void* __right_value257 = (void*)0;
struct sType* __dec_obj56;
void* __right_value258 = (void*)0;
struct sType* __dec_obj57;
void* __right_value259 = (void*)0;
struct sType* __dec_obj58;
void* __right_value260 = (void*)0;
char* __dec_obj59;
void* __right_value261 = (void*)0;
char* __dec_obj60;
void* __right_value268 = (void*)0;
struct list$1sTypeph* __dec_obj64;
void* __right_value276 = (void*)0;
struct list$1sNodeph* __dec_obj68;
void* __right_value277 = (void*)0;
struct list$1sTypeph* __dec_obj69;
void* __right_value284 = (void*)0;
struct list$1charph* __dec_obj73;
void* __right_value285 = (void*)0;
struct sType* __dec_obj74;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj75;
void* __right_value287 = (void*)0;
struct sType* __dec_obj76;
void* __right_value288 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
void* __right_value290 = (void*)0;
char* __dec_obj79;
void* __right_value291 = (void*)0;
char* __dec_obj80;
void* __right_value292 = (void*)0;
char* __dec_obj81;
struct sType* __result247__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_315=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        result_315->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj56=result_315->mNoSolvedGenericsType;
        result_315->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj56,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj57=result_315->mOriginalLoadVarType;
        result_315->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj58=result_315->mAnyOriginalType;
        result_315->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj59=result_315->mInterfaceName;
        result_315->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj60=result_315->mGenericsName;
        result_315->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj64=result_315->mGenericsTypes;
        result_315->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj64,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj68=result_315->mArrayNum;
        result_315->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj68,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj69=result_315->mParamTypes;
        result_315->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj69,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj73=result_315->mParamNames;
        result_315->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj73,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj74=result_315->mResultType;
        result_315->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj75=result_315->mAlignas;
        result_315->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj76=result_315->mChannelType;
        result_315->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
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
        __dec_obj77=result_315->mSizeNum;
        result_315->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_315->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj78=result_315->mOriginalTypeName;
        result_315->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj79=result_315->mAsmName;
        result_315->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        __dec_obj80=result_315->mTupleName;
        result_315->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj81=result_315->mAttribute;
        result_315->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_315->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_315->mGenerate=self->mGenerate;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_315;
    come_call_finalizer3(result_315,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result234__;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
struct list$1sTypeph* result_316;
struct list_item$1sTypeph* it_317;
void* __right_value267 = (void*)0;
struct list$1sTypeph* __result237__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_316=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_317=self->head;
    while(it_317!=((void*)0)) {
        list$1sTypephp_add(result_316,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_317->item)));
        it_317=it_317->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_316;
    come_call_finalizer3(result_316,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value264 = (void*)0;
struct list_item$1sTypeph* litem_318;
struct sType* __dec_obj61;
void* __right_value265 = (void*)0;
struct list_item$1sTypeph* litem_319;
struct sType* __dec_obj62;
void* __right_value266 = (void*)0;
struct list_item$1sTypeph* litem_320;
struct sType* __dec_obj63;
struct list$1sTypeph* __result236__;
    if(    self->len==0) {
        litem_318=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value264=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_318->prev=((void*)0);
        litem_318->next=((void*)0);
        __dec_obj61=litem_318->item;
        litem_318->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_318;
        self->head=litem_318;
    }
    else if(    self->len==1) {
        litem_319=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value265=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_319->prev=self->head;
        litem_319->next=((void*)0);
        __dec_obj62=litem_319->item;
        litem_319->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_319;
        self->head->next=litem_319;
    }
    else {
        litem_320=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value266=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_320->prev=self->tail;
        litem_320->next=((void*)0);
        __dec_obj63=litem_320->item;
        litem_320->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_320;
        self->tail=litem_320;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sNodeph* result_321;
struct list_item$1sNodeph* it_322;
void* __right_value275 = (void*)0;
struct list$1sNodeph* __result243__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_321=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_322=self->head;
    while(it_322!=((void*)0)) {
        list$1sNodephp_add(result_321,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_322->item)));
        it_322=it_322->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_321;
    come_call_finalizer3(result_321,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result239__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_323;
struct sNode* __dec_obj65;
void* __right_value272 = (void*)0;
struct list_item$1sNodeph* litem_324;
struct sNode* __dec_obj66;
void* __right_value273 = (void*)0;
struct list_item$1sNodeph* litem_325;
struct sNode* __dec_obj67;
struct list$1sNodeph* __result240__;
    if(    self->len==0) {
        litem_323=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_323->prev=((void*)0);
        litem_323->next=((void*)0);
        __dec_obj65=litem_323->item;
        litem_323->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_323;
        self->head=litem_323;
    }
    else if(    self->len==1) {
        litem_324=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value272=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_324->prev=self->head;
        litem_324->next=((void*)0);
        __dec_obj66=litem_324->item;
        litem_324->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_324;
        self->head->next=litem_324;
    }
    else {
        litem_325=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value273=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_325->prev=self->tail;
        litem_325->next=((void*)0);
        __dec_obj67=litem_325->item;
        litem_325->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_325;
        self->tail=litem_325;
    }
    self->len++;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result241__;
void* __right_value274 = (void*)0;
struct sNode* result_326;
struct sNode* __result242__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_326=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_326->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_326->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_326->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_326->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_326->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_326->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_326->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_326->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_326->kind=self->kind;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_326;
    come_call_finalizer2((void*)0, result_326, result_326 ? ((struct sNode*)result_326)->finalize:(void*)0, result_326 ? ((struct sNode*)result_326)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result244__;
void* __right_value278 = (void*)0;
void* __right_value279 = (void*)0;
struct list$1charph* result_327;
struct list_item$1charph* it_328;
void* __right_value283 = (void*)0;
struct list$1charph* __result246__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_327=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_328=self->head;
    while(it_328!=((void*)0)) {
        list$1charphp_add(result_327,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_328->item)));
        it_328=it_328->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_327;
    come_call_finalizer3(result_327,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_329;
char* __dec_obj70;
void* __right_value281 = (void*)0;
struct list_item$1charph* litem_330;
char* __dec_obj71;
void* __right_value282 = (void*)0;
struct list_item$1charph* litem_331;
char* __dec_obj72;
struct list$1charph* __result245__;
    if(    self->len==0) {
        litem_329=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_329->prev=((void*)0);
        litem_329->next=((void*)0);
        __dec_obj70=litem_329->item;
        litem_329->item=(char*)come_increment_ref_count(item);
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_329;
        self->head=litem_329;
    }
    else if(    self->len==1) {
        litem_330=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value281=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_330->prev=self->head;
        litem_330->next=((void*)0);
        __dec_obj71=litem_330->item;
        litem_330->item=(char*)come_increment_ref_count(item);
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_330;
        self->head->next=litem_330;
    }
    else {
        litem_331=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value282=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_331->prev=self->tail;
        litem_331->next=((void*)0);
        __dec_obj72=litem_331->item;
        litem_331->item=(char*)come_increment_ref_count(item);
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_331;
        self->tail=litem_331;
    }
    self->len++;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static void tuple2$2charphsTypeph_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj82;
struct sType* __dec_obj83;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj82=self->v1;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj83=self->v2;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_clone(struct tuple2$2charphsTypeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* __result248__;
void* __right_value295 = (void*)0;
struct tuple2$2charphsTypeph* result_333;
void* __right_value296 = (void*)0;
char* __dec_obj84;
void* __right_value297 = (void*)0;
struct sType* __dec_obj85;
struct tuple2$2charphsTypeph* __result249__;
    if(    self==(void*)0) {
        __result248__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_333=(struct tuple2$2charphsTypeph*)come_increment_ref_count((struct tuple2$2charphsTypeph*)come_calloc(1, sizeof(struct tuple2$2charphsTypeph)*(1), "tuple2$2charphsTypeph_clone", 3, "struct tuple2$2charphsTypeph", tuple2$2charphsTypeph_finalize, tuple2$2charphsTypeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_333->v1;
        result_333->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj85=result_333->v2;
        result_333->v2=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v2));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(result_333,tuple2$2charphsTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct tuple2$2charphsTypeph* tuple2$2charphsTypeph_initialize(struct tuple2$2charphsTypeph* self, char* v1, struct sType* v2){
void* __result_obj__=(void*)0;
char* __dec_obj86;
struct sType* __dec_obj87;
struct tuple2$2charphsTypeph* __result250__;
    __dec_obj86=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj87=self->v2;
    self->v2=(struct sType*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj88;
struct sType* __dec_obj89;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj88=self->v1;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj89=self->v2;
            come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_335;
struct list_item$1sNodeph* prev_it_336;
struct list$1sNodeph* __result251__;
    it_335=self->head;
    while(it_335!=((void*)0)) {
        prev_it_336=it_335;
        it_335=it_335->next;
        come_call_finalizer3(prev_it_336,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
struct list_item$1voidph* litem_338;
void* __dec_obj90;
void* __right_value305 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj91;
void* __right_value306 = (void*)0;
struct list_item$1voidph* litem_340;
void* __dec_obj92;
struct list$1voidph* __result252__;
    if(    self->len==0) {
        litem_338=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value304=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1290, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_338->prev=((void*)0);
        litem_338->next=((void*)0);
        __dec_obj90=litem_338->item;
        litem_338->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_338;
        self->head=litem_338;
    }
    else if(    self->len==1) {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value305=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1300, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_339->prev=self->head;
        litem_339->next=((void*)0);
        __dec_obj91=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head->next=litem_339;
    }
    else {
        litem_340=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value306=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1310, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_340->prev=self->tail;
        litem_340->next=((void*)0);
        __dec_obj92=litem_340->item;
        litem_340->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_340;
        self->tail=litem_340;
    }
    self->len++;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_341;
int i_342;
    for(    i_341=0;    i_341<self->size;    i_341++    ){
        if(        self->item_existance[i_341]) {
            if(            1) {
                come_call_finalizer3(self->items[i_341],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_342=0;    i_342<self->size;    i_342++    ){
        if(        self->item_existance[i_342]) {
            if(            1) {
                self->keys[i_342] = come_decrement_ref_count2(self->keys[i_342], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_364;
unsigned int it_365;
_Bool same_key_exist_382;
char* it2_385;
struct map$2charphsClassph* __result273__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_364=charp_get_hash_key(key)%self->size;
    it_365=hash_364;
    while((_Bool)1) {
        if(        self->item_existance[it_365]) {
            if(            charp_equals(self->keys[it_365],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_365]);
                    self->keys[it_365] = come_decrement_ref_count2(self->keys[it_365], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_365]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_365]);
                    self->keys[it_365]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_365],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_365]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_365]=item;
                }
                break;
            }
            it_365++;
            if(            it_365>=self->size) {
                it_365=0;
            }
            else if(            it_365==hash_364) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_365]=(_Bool)1;
            if(            1) {
                self->keys[it_365]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_365]=key;
            }
            if(            1) {
                self->items[it_365]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_365]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_382=(_Bool)0;
    for(    it2_385=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_385=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_385,key)) {
            same_key_exist_382=(_Bool)1;
        }
    }
    if(    !same_key_exist_382) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_343;
void* __right_value309 = (void*)0;
char** keys_344;
void* __right_value310 = (void*)0;
struct sClass** items_345;
void* __right_value311 = (void*)0;
_Bool* item_existance_346;
int len_347;
char* it_350;
struct sClass* default_value_353;
void* __right_value312 = (void*)0;
struct sClass* it2_354;
unsigned int hash_361;
int n_362;
struct sClass* default_value_363;
void* __right_value313 = (void*)0;
default_value_353 = (void*)0;
default_value_363 = (void*)0;
    size_343=self->size*10;
    keys_344=(char**)come_increment_ref_count(((char**)(__right_value309=(char**)come_calloc(1, sizeof(char*)*(1*(size_343)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_345=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value310=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_343)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_346=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value311=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_343)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_347=0;
    for(    it_350=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_350=map$2charphsClassphp_next(self)    ){
        memset(&default_value_353,0,sizeof(struct sClass*));
        it2_354=((struct sClass*)(__right_value312=map$2charphsClassphp_at(self,it_350,default_value_353)));
        come_call_finalizer3(__right_value312,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_361=charp_get_hash_key(it_350)%size_343;
        n_362=hash_361;
        while((_Bool)1) {
            if(            item_existance_346[n_362]) {
                n_362++;
                if(                n_362>=size_343) {
                    n_362=0;
                }
                else if(                n_362==hash_361) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_346[n_362]=(_Bool)1;
                keys_344[n_362]=it_350;
                items_345[n_362]=((struct sClass*)(__right_value313=map$2charphsClassphp_at(self,it_350,default_value_363)));
                come_call_finalizer3(__right_value313,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_347++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_344;
    self->items=items_345;
    self->item_existance=item_existance_346;
    self->size=size_343;
    self->len=len_347;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_348;
char* __result253__;
char* __result254__;
char* result_349;
char* __result255__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_348,0,sizeof(char*));
        __result253__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result254__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    memset(&result_349,0,sizeof(char*));
    __result255__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_351;
char* __result256__;
char* __result257__;
char* result_352;
char* __result258__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_351,0,sizeof(char*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_352,0,sizeof(char*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_355;
unsigned int it_356;
struct sClass* __result259__;
struct sClass* __result260__;
struct sClass* __result261__;
struct sClass* __result262__;
    hash_355=charp_get_hash_key(((char*)key))%self->size;
    it_356=hash_355;
    while((_Bool)1) {
        if(        self->item_existance[it_356]) {
            if(            charp_equals(self->keys[it_356],key)) {
                __result259__ = gComeFunResultObject = __result_obj__ = self->items[it_356];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result259__;
            }
            it_356++;
            if(            it_356>=self->size) {
                it_356=0;
            }
            else if(            it_356==hash_355) {
                __result260__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result260__;
            }
        }
        else {
            __result261__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result261__;
        }
    }
    __result262__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj93;
struct list$1voidph* __dec_obj94;
char* __dec_obj96;
char* __dec_obj97;
char* __dec_obj98;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj93=self->mName;
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj94=self->mFields;
            come_call_finalizer3(__dec_obj94,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj96=self->mDeclareSName;
            __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj97=self->mParentClassName;
            __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj98=self->mAttribute;
            __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_357;
struct list_item$1voidph* prev_it_358;
    it_357=self->head;
    while(it_357!=((void*)0)) {
        prev_it_358=it_357;
        it_357=it_357->next;
        come_call_finalizer3(prev_it_358,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj95;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj95=self->item;
            come_call_finalizer3(__dec_obj95,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_359;
struct list_item$1voidph* prev_it_360;
    it_359=self->head;
    while(it_359!=((void*)0)) {
        prev_it_360=it_359;
        it_359=it_359->next;
        come_call_finalizer3(prev_it_360,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_366;
struct list_item$1charp* it_367;
struct list$1charp* __result266__;
    it2_366=0;
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        charp_equals(it_367->item,item)) {
            list$1charpp_delete(self,it2_366,it2_366+1);
            break;
        }
        it2_366++;
        it_367=it_367->next;
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_368;
struct list$1charp* __result263__;
struct list_item$1charp* it_371;
int i_372;
struct list_item$1charp* prev_it_373;
struct list_item$1charp* it_374;
int i_375;
struct list_item$1charp* prev_it_376;
struct list_item$1charp* it_377;
struct list_item$1charp* head_prev_it_378;
struct list_item$1charp* tail_it_379;
int i_380;
struct list_item$1charp* prev_it_381;
struct list$1charp* __result265__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_368=tail;
        tail=head;
        head=tmp_368;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result263__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_371=self->head;
        i_372=0;
        while(it_371!=((void*)0)) {
            if(            i_372<tail) {
                prev_it_373=it_371;
                it_371=it_371->next;
                i_372++;
                come_call_finalizer3(prev_it_373,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_372==tail) {
                self->head=it_371;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_371=it_371->next;
                i_372++;
            }
        }
    }
    else if(    tail==self->len) {
        it_374=self->head;
        i_375=0;
        while(it_374!=((void*)0)) {
            if(            i_375==head) {
                self->tail=it_374->prev;
                self->tail->next=((void*)0);
            }
            if(            i_375>=head) {
                prev_it_376=it_374;
                it_374=it_374->next;
                i_375++;
                come_call_finalizer3(prev_it_376,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_374=it_374->next;
                i_375++;
            }
        }
    }
    else {
        it_377=self->head;
        head_prev_it_378=((void*)0);
        tail_it_379=((void*)0);
        i_380=0;
        while(it_377!=((void*)0)) {
            if(            i_380==head) {
                head_prev_it_378=it_377->prev;
            }
            if(            i_380==tail) {
                tail_it_379=it_377;
            }
            if(            i_380>=head&&i_380<tail) {
                prev_it_381=it_377;
                it_377=it_377->next;
                i_380++;
                come_call_finalizer3(prev_it_381,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_377=it_377->next;
                i_380++;
            }
        }
        if(        head_prev_it_378!=((void*)0)) {
            head_prev_it_378->next=tail_it_379;
        }
        if(        tail_it_379!=((void*)0)) {
            tail_it_379->prev=head_prev_it_378;
        }
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_369;
struct list_item$1charp* prev_it_370;
struct list$1charp* __result264__;
    it_369=self->head;
    while(it_369!=((void*)0)) {
        prev_it_370=it_369;
        it_369=it_369->next;
        come_call_finalizer3(prev_it_370,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_383;
char* __result267__;
char* __result268__;
char* result_384;
char* __result269__;
result_383 = (void*)0;
result_384 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_383,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_383;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->it=self->head;
    if(    self->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_384,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_384;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_386;
char* __result270__;
char* __result271__;
char* result_387;
char* __result272__;
result_386 = (void*)0;
result_387 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_386,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_386;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_387,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_387;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
struct list_item$1CVALUEph* litem_395;
struct CVALUE* __dec_obj101;
void* __right_value324 = (void*)0;
struct list_item$1CVALUEph* litem_396;
struct CVALUE* __dec_obj106;
void* __right_value325 = (void*)0;
struct list_item$1CVALUEph* litem_397;
struct CVALUE* __dec_obj107;
struct list$1CVALUEph* __result274__;
    if(    self->len==0) {
        litem_395=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value323=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_395->prev=((void*)0);
        litem_395->next=((void*)0);
        __dec_obj101=litem_395->item;
        litem_395->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_395;
        self->head=litem_395;
    }
    else if(    self->len==1) {
        litem_396=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value324=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_396->prev=self->head;
        litem_396->next=((void*)0);
        __dec_obj106=litem_396->item;
        litem_396->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_396;
        self->head->next=litem_396;
    }
    else {
        litem_397=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value325=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_397->prev=self->tail;
        litem_397->next=((void*)0);
        __dec_obj107=litem_397->item;
        litem_397->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj107,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_397;
        self->tail=litem_397;
    }
    self->len++;
    __result274__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj102;
struct sType* __dec_obj103;
char* __dec_obj104;
char* __dec_obj105;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj102=self->c_value;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj103=self->type;
            come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj104=self->c_value_without_right_value_objects;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj105=self->c_value_without_cast_object_value;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* use_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj108;
int i_398;
struct list$1sTypeph* o2_saved_399;
struct sType* it_402;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct sType* __result285__;
    if(    type->mAnyOriginalType) {
        __dec_obj108=type;
        type=(struct sType*)come_increment_ref_count(type->mAnyOriginalType);
        come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_398=0;
    for(    o2_saved_399=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_402=list$1sTypephp_begin((o2_saved_399));    !list$1sTypephp_end((o2_saved_399));    it_402=list$1sTypephp_next((o2_saved_399))    ){
        list$1sTypephp_operator_store_element(type->mGenericsTypes,i_398,(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_402)))));
        i_398++;
    }
    come_call_finalizer3(o2_saved_399,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __result285__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_400;
struct sType* __result276__;
struct sType* __result277__;
struct sType* result_401;
struct sType* __result278__;
result_400 = (void*)0;
result_401 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_400,0,sizeof(struct sType*));
        __result276__ = gComeFunResultObject = __result_obj__ = result_400;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    self->it=self->head;
    if(    self->it) {
        __result277__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    memset(&result_401,0,sizeof(struct sType*));
    __result278__ = gComeFunResultObject = __result_obj__ = result_401;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_403;
struct sType* __result279__;
struct sType* __result280__;
struct sType* result_404;
struct sType* __result281__;
result_403 = (void*)0;
result_404 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_403,0,sizeof(struct sType*));
        __result279__ = gComeFunResultObject = __result_obj__ = result_403;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result280__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    memset(&result_404,0,sizeof(struct sType*));
    __result281__ = gComeFunResultObject = __result_obj__ = result_404;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypephp_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_405;
int i_406;
struct sType* default_value_407;
struct list$1sTypeph* __result283__;
struct list_item$1sTypeph* it_411;
int i_412;
struct sType* __dec_obj112;
struct list$1sTypeph* __result284__;
default_value_407 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_405=self->len;
        for(        i_406=0;        i_406<position-len_405;        i_406++        ){
            memset(&default_value_407,0,sizeof(struct sType*));
            list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(default_value_407));
            come_call_finalizer3(default_value_407,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result283__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    it_411=self->head;
    i_412=0;
    while(it_411!=((void*)0)) {
        if(        position==i_412) {
            __dec_obj112=it_411->item;
            it_411->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_411=it_411->next;
        i_412++;
    }
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
struct list_item$1sTypeph* litem_408;
struct sType* __dec_obj109;
void* __right_value327 = (void*)0;
struct list_item$1sTypeph* litem_409;
struct sType* __dec_obj110;
void* __right_value328 = (void*)0;
struct list_item$1sTypeph* litem_410;
struct sType* __dec_obj111;
struct list$1sTypeph* __result282__;
    if(    self->len==0) {
        litem_408=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value326=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_408->prev=((void*)0);
        litem_408->next=((void*)0);
        __dec_obj109=litem_408->item;
        litem_408->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_408;
        self->head=litem_408;
    }
    else if(    self->len==1) {
        litem_409=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value327=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_409->prev=self->head;
        litem_409->next=((void*)0);
        __dec_obj110=litem_409->item;
        litem_409->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_409;
        self->head->next=litem_409;
    }
    else {
        litem_410=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value328=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_410->prev=self->tail;
        litem_410->next=((void*)0);
        __dec_obj111=litem_410->item;
        litem_410->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_410;
        self->tail=litem_410;
    }
    self->len++;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

struct sType* remove_any_type(struct sType* type){
void* __result_obj__=(void*)0;
struct sType* __dec_obj113;
struct sType* __dec_obj114;
int i_413;
struct list$1sTypeph* o2_saved_414;
struct sType* it_415;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sType* __result286__;
    if(    type->mAnyOriginalType) {
        __dec_obj113=type->mAnyOriginalType;
        type->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType) {
        __dec_obj114=type->mNoSolvedGenericsType->mAnyOriginalType;
        type->mNoSolvedGenericsType->mAnyOriginalType=((void*)0);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_413=0;
    for(    o2_saved_414=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_415=list$1sTypephp_begin((o2_saved_414));    !list$1sTypephp_end((o2_saved_414));    it_415=list$1sTypephp_next((o2_saved_414))    ){
        list$1sTypephp_operator_store_element(type->mGenericsTypes,i_413,(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_415)))));
        i_413++;
    }
    come_call_finalizer3(o2_saved_414,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __result286__ = gComeFunResultObject = __result_obj__ = type;
    come_call_finalizer3(type,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

struct tuple2$2charphsGenericsFunp* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer){
void* __result_obj__=(void*)0;
void* __right_value333 = (void*)0;
char* none_generics_name_416;
void* __right_value334 = (void*)0;
char* fun_name2_417;
void* __right_value335 = (void*)0;
char* fun_name3_418;
void* __right_value336 = (void*)0;
struct sGenericsFun* generics_fun_419;
_Bool generics_any_child_422;
void* __right_value337 = (void*)0;
struct sType* no_solved_type_423;
struct sType* __dec_obj125;
struct list$1sTypeph* o2_saved_424;
struct sType* it_425;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* type2_426;
void* __right_value340 = (void*)0;
struct sType* type_before_427;
void* __right_value341 = (void*)0;
char* __dec_obj126;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_428=0;
_Bool err_429=0;
void* __right_value344 = (void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result294__;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sType* type2_431;
void* __right_value351 = (void*)0;
struct sType* type_before_432;
void* __right_value352 = (void*)0;
char* __dec_obj132;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var2 = (void*)0;
char* name_433=0;
_Bool err_434=0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result295__;
void* __right_value358 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result299__;
    none_generics_name_416=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
    fun_name2_417=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,array_equal_pointer));
    fun_name3_418=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_416,fun_name));
    generics_fun_419=((struct sGenericsFun*)(__right_value336=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_418,((void*)0))));
    come_call_finalizer3(__right_value336,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    generics_any_child_422=(_Bool)0;
    no_solved_type_423=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        __dec_obj125=no_solved_type_423;
        no_solved_type_423=(struct sType*)come_increment_ref_count(type->mNoSolvedGenericsType);
        come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
        for(        o2_saved_424=(struct list$1sTypeph*)come_increment_ref_count((no_solved_type_423->mGenericsTypes)),it_425=list$1sTypephp_begin((o2_saved_424));        !list$1sTypephp_end((o2_saved_424));        it_425=list$1sTypephp_next((o2_saved_424))        ){
            if(            it_425->mAnyOriginalType) {
                generics_any_child_422=(_Bool)1;
            }
        }
        come_call_finalizer3(o2_saved_424,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    generics_fun_419) {
        if(        generics_fun_419->mResultType->mGenerate&&(type->mAnyOriginalType||generics_any_child_422)) {
            type2_426=(struct sType*)come_increment_ref_count(use_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_423))));
            type_before_427=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj126=fun_name2_417;
            fun_name2_417=(char*)come_increment_ref_count(create_method_name(type2_426,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value343=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_417)),generics_fun_419,type2_426,info)));
            name_428=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            err_429=multiple_assign_var1->v2;
            come_call_finalizer3(__right_value343,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_429) {
                err_msg(info,"%s not found",fun_name3_418);
                __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value348=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 74, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                come_call_finalizer3(type2_426,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_427,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_428 = come_decrement_ref_count2(name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_416 = come_decrement_ref_count2(none_generics_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_417 = come_decrement_ref_count2(fun_name2_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_418 = come_decrement_ref_count2(fun_name3_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value348,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result294__;
            }
            type=type_before_427;
            come_call_finalizer3(type2_426,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_427,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_428 = come_decrement_ref_count2(name_428, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            type2_431=(struct sType*)come_increment_ref_count(remove_any_type((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, no_solved_type_423))));
            type_before_432=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            __dec_obj132=fun_name2_417;
            fun_name2_417=(char*)come_increment_ref_count(create_method_name(type2_431,(_Bool)0,fun_name,info,array_equal_pointer));
            __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            multiple_assign_var2=((struct tuple2$2charphbool*)(__right_value354=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_417)),generics_fun_419,type2_431,info)));
            name_433=(char*)come_increment_ref_count(multiple_assign_var2->v1);
            err_434=multiple_assign_var2->v2;
            come_call_finalizer3(__right_value354,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_434) {
                err_msg(info,"%s not found",fun_name3_418);
                __result295__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value357=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 90, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
                come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_before_432,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_433 = come_decrement_ref_count2(name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_416 = come_decrement_ref_count2(none_generics_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_417 = come_decrement_ref_count2(fun_name2_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_418 = come_decrement_ref_count2(fun_name3_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(no_solved_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value357,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result295__;
            }
            type=type_before_432;
            come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_before_432,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_433 = come_decrement_ref_count2(name_433, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value362=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 97, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name2_417)),generics_fun_419)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    none_generics_name_416 = come_decrement_ref_count2(none_generics_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_417 = come_decrement_ref_count2(fun_name2_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name3_418 = come_decrement_ref_count2(fun_name3_418, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(no_solved_type_423,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value362,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_420;
unsigned int it_421;
struct sGenericsFun* __result287__;
struct sGenericsFun* __result288__;
struct sGenericsFun* __result289__;
struct sGenericsFun* __result290__;
    hash_420=charp_get_hash_key(((char*)key))%self->size;
    it_421=hash_420;
    while((_Bool)1) {
        if(        self->item_existance[it_421]) {
            if(            charp_equals(self->keys[it_421],key)) {
                __result287__ = gComeFunResultObject = __result_obj__ = self->items[it_421];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result287__;
            }
            it_421++;
            if(            it_421>=self->size) {
                it_421=0;
            }
            else if(            it_421==hash_420) {
                __result288__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result288__;
            }
        }
        else {
            __result289__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
    }
    __result290__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj115;
struct list$1charph* __dec_obj116;
struct list$1charph* __dec_obj117;
char* __dec_obj118;
struct sType* __dec_obj119;
struct list$1sTypeph* __dec_obj120;
struct list$1charph* __dec_obj121;
struct list$1charph* __dec_obj122;
char* __dec_obj123;
char* __dec_obj124;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj115=self->mImplType;
            come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj116=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj116,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj117=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj117,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj118=self->mName;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj119=self->mResultType;
            come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj120=self->mParamTypes;
            come_call_finalizer3(__dec_obj120,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj121=self->mParamNames;
            come_call_finalizer3(__dec_obj121,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj122=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj122,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj123=self->mBlock;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj124=self->mGenericsSName;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj127;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj127=self->v1;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphvoidp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj128;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj128=self->v1;
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_clone(struct tuple2$2charphvoidp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphvoidp* __result291__;
void* __right_value345 = (void*)0;
struct tuple2$2charphvoidp* result_430;
void* __right_value346 = (void*)0;
char* __dec_obj129;
struct tuple2$2charphvoidp* __result292__;
    if(    self==(void*)0) {
        __result291__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result291__;
    }
    result_430=(struct tuple2$2charphvoidp*)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "tuple2$2charphvoidp_clone", 3, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj129=result_430->v1;
        result_430->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_430->v2=self->v2;
    }
    __result292__ = gComeFunResultObject = __result_obj__ = result_430;
    come_call_finalizer3(result_430,tuple2$2charphvoidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static struct tuple2$2charphvoidp* tuple2$2charphvoidp_initialize(struct tuple2$2charphvoidp* self, char* v1, void* v2){
void* __result_obj__=(void*)0;
char* __dec_obj130;
struct tuple2$2charphvoidp* __result293__;
    __dec_obj130=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphvoidpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static void tuple2$2charphvoidpp_finalize(struct tuple2$2charphvoidp* self){
char* __dec_obj131;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj131=self->v1;
            __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsGenericsFunp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj133=self->v1;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_clone(struct tuple2$2charphsGenericsFunp* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsGenericsFunp* __result296__;
void* __right_value359 = (void*)0;
struct tuple2$2charphsGenericsFunp* result_435;
void* __right_value360 = (void*)0;
char* __dec_obj134;
struct tuple2$2charphsGenericsFunp* __result297__;
    if(    self==(void*)0) {
        __result296__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result296__;
    }
    result_435=(struct tuple2$2charphsGenericsFunp*)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "tuple2$2charphsGenericsFunp_clone", 3, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj134=result_435->v1;
        result_435->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_435->v2=self->v2;
    }
    __result297__ = gComeFunResultObject = __result_obj__ = result_435;
    come_call_finalizer3(result_435,tuple2$2charphsGenericsFunp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static struct tuple2$2charphsGenericsFunp* tuple2$2charphsGenericsFunp_initialize(struct tuple2$2charphsGenericsFunp* self, char* v1, struct sGenericsFun* v2){
void* __result_obj__=(void*)0;
char* __dec_obj135;
struct tuple2$2charphsGenericsFunp* __result298__;
    __dec_obj135=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsGenericsFunpp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static void tuple2$2charphsGenericsFunpp_finalize(struct tuple2$2charphsGenericsFunp* self){
char* __dec_obj136;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj136=self->v1;
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphsGenericsFunp* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* fun_name3_437;
struct list$1sTypeph* method_generics_types_before_438;
struct list$1sTypeph* __dec_obj137;
void* __right_value364 = (void*)0;
struct sGenericsFun* generics_fun_439;
void* __right_value365 = (void*)0;
_Bool _if_conditional1;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result300__;
struct list$1sTypeph* __dec_obj138;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct tuple2$2charphsGenericsFunp* __result301__;
    static int num_method_generics_436=0;
    fun_name3_437=(char*)come_increment_ref_count(xsprintf("%s_method_generics%d",fun_name,num_method_generics_436++));
    method_generics_types_before_438=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    __dec_obj137=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types);
    come_call_finalizer3(__dec_obj137,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    generics_fun_439=((struct sGenericsFun*)(__right_value364=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name,((void*)0))));
    come_call_finalizer3(__right_value364,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
    if(    generics_fun_439) {
        if(        (_if_conditional1=(!create_method_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name3_437)),generics_fun_439,info))),        _if_conditional1) {
            err_msg(info,"%s not found",fun_name3_437);
            __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphvoidp*)(__right_value368=tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 113, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(__builtin_string("")),((void*)0))));
            fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_438,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value368,tuple2$2charphvoidpp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result300__;
        }
    }
    __dec_obj138=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_438);
    come_call_finalizer3(__dec_obj138,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphsGenericsFunp*)(__right_value371=tuple2$2charphsGenericsFunp_initialize((struct tuple2$2charphsGenericsFunp**)come_increment_ref_count((struct tuple2$2charphsGenericsFunp*)come_calloc(1, sizeof(struct tuple2$2charphsGenericsFunp)*(1), "20method.c", 119, "struct tuple2$2charphsGenericsFunp", tuple2$2charphsGenericsFunp_finalize, tuple2$2charphsGenericsFunp_clone)),(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name3_437)),generics_fun_439)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    fun_name3_437 = come_decrement_ref_count2(fun_name3_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_438,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value371,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUEph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack){
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
struct sNode* _inf_value1;
struct sCurrentNode* _inf_obj_value1;
void* __right_value376 = (void*)0;
struct sNode* current_stack_frame_node_440;
_Bool Value_442;
_Bool __result304__;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_445;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct buffer* method_block2_446;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
struct sType* method_block_type_447;
void* __right_value382 = (void*)0;
char* class_name_451;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct sClass* current_stack_frame_struct_455;
void* __right_value385 = (void*)0;
_Bool __result311__;
void* __right_value386 = (void*)0;
struct sType* result_type_456;
struct list$1sTypeph* param_types_457;
struct list$1charph* param_names_458;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
struct buffer* all_alhabet_sname_459;
char* p_460;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
int i_461;
struct list$1sTypeph* o2_saved_462;
struct sType* it_463;
struct sType* param_type_464;
void* __right_value391 = (void*)0;
char* param_name_465;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
char* param_name_466;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* param_name_467;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct buffer* source3_468;
char* p_469;
char* head_470;
int sline_471;
struct buffer* __dec_obj141;
void* __right_value398 = (void*)0;
struct sNode* node_472;
_Bool Value_473;
_Bool __result312__;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
char* method_block_name_474;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct CVALUE* come_value2_475;
void* __right_value403 = (void*)0;
struct sFun* fun2_476;
_Bool __result317__;
struct sType* method_block_type2_479;
void* __right_value404 = (void*)0;
char* __dec_obj159;
void* __right_value405 = (void*)0;
struct sType* __dec_obj160;
struct buffer* __dec_obj161;
void* __right_value406 = (void*)0;
struct sType* __dec_obj162;
_Bool contained_method_generics_method_block_480;
struct list$1sTypeph* o2_saved_481;
struct sType* it_482;
_Bool __result319__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 124, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value1=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value373=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 124, "struct sCurrentNode*", (void*)0, (void*)0)),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sCurrentNode_finalize;
    _inf_value1->clone=(void*)sCurrentNode_clone;
    _inf_value1->compile=(void*)sCurrentNode_compile;
    _inf_value1->sline=(void*)sCurrentNode_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sCurrentNode_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sCurrentNode_kind;
    current_stack_frame_node_440=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value373,sCurrentNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_442=node_compile(current_stack_frame_node_440,info);
    if(    !Value_442) {
        __result304__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result304__;
    }
    else {
    }
    come_value_445=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value_445));
    dec_stack_ptr(1,info);
    method_block2_446=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 134, "struct buffer*", (void*)0, (void*)0))));
    method_block_type_447=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value380=list$1sTypephp_operator_load_element(fun->mParamTypes,-1)))));
    come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0);
    class_name_451=(char*)come_increment_ref_count(xsprintf("__current_stack%d__",info->current_stack_num));
    ((struct sType*)(__right_value383=list$1sTypephp_operator_load_element(method_block_type_447->mParamTypes,0)))->mClass=((struct sClass*)(__right_value384=map$2charphsClassphp_operator_load_element(info->classes,class_name_451)));
    come_call_finalizer3(__right_value383,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__right_value384,sClass_finalize, 0, 1, 0, 0, (void*)0);
    current_stack_frame_struct_455=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((struct sClass*)(__right_value385=map$2charphsClassphp_operator_load_element(info->classes,class_name_451)));
    come_call_finalizer3(__right_value385,sClass_finalize, 0, 1, 0, 0, (void*)0);
    info->num_method_block++;
    if(    string_operator_not_equals(method_block_type_447->mClass->mName,"lambda")) {
        err_msg(info,"This function does not have method block(%s)",fun_name);
        __result311__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_446,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_451 = come_decrement_ref_count2(class_name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result311__;
    }
    result_type_456=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type_447->mResultType));
    result_type_456->mStatic=(_Bool)0;
    param_types_457=method_block_type_447->mParamTypes;
    param_names_458=method_block_type_447->mParamNames;
    all_alhabet_sname_459=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 155, "struct buffer*", (void*)0, (void*)0))));
    {
        p_460=info->sname;
        while(*p_460) {
            if(            xisalnum(*p_460)) {
                buffer_append_char(all_alhabet_sname_459,*p_460++);
            }
            else {
                p_460++;
            }
        }
    }
    buffer_append_format(method_block2_446,"%s method_block%d_%s(",((char*)(__right_value389=make_type_name_string(result_type_456,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),info->num_method_block,((char*)(__right_value390=buffer_to_string(all_alhabet_sname_459))));
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    i_461=0;
    for(    o2_saved_462=(param_types_457),it_463=list$1sTypephp_begin((o2_saved_462));    !list$1sTypephp_end((o2_saved_462));    it_463=list$1sTypephp_next((o2_saved_462))    ){
        param_type_464=it_463;
        if(        i_461==0) {
            param_name_465=(char*)come_increment_ref_count(xsprintf("parent"));
            buffer_append_format(method_block2_446,"%s",((char*)(__right_value392=make_define_var(param_type_464,param_name_465,(_Bool)0,info))));
            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_465 = come_decrement_ref_count2(param_name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else if(        i_461==1) {
            param_name_466=(char*)come_increment_ref_count(xsprintf("it"));
            buffer_append_format(method_block2_446,"%s",((char*)(__right_value394=make_define_var_no_solved(param_type_464,param_name_466,(_Bool)0,(_Bool)0,info))));
            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_466 = come_decrement_ref_count2(param_name_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            param_name_467=(char*)come_increment_ref_count(xsprintf("it%d",i_461));
            buffer_append_format(method_block2_446,"%s",((char*)(__right_value396=make_define_var_no_solved(param_type_464,param_name_467,(_Bool)0,(_Bool)0,info))));
            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            param_name_467 = come_decrement_ref_count2(param_name_467, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        i_461!=list$1sTypephp_length(param_types_457)-1) {
            buffer_append_str(method_block2_446,",");
        }
        i_461++;
    }
    buffer_append_str(method_block2_446,")\n");
    buffer_append_str(method_block2_446,((char*)(__right_value397=buffer_to_string(method_block))));
    __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source3_468=(struct buffer*)come_increment_ref_count(info->source);
    p_469=info->p;
    head_470=info->head;
    sline_471=info->sline;
    __dec_obj141=info->source;
    info->source=(struct buffer*)come_increment_ref_count(method_block2_446);
    come_call_finalizer3(__dec_obj141,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=method_block_sline;
    node_472=(struct sNode*)come_increment_ref_count(parse_function(info));
    Value_473=node_compile(node_472,info);
    if(    !Value_473) {
        __result312__ = (_Bool)0;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_446,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_451 = come_decrement_ref_count2(class_name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result312__;
    }
    else {
    }
    method_block_name_474=(char*)come_increment_ref_count(xsprintf("method_block%d_%s",info->num_method_block,((char*)(__right_value399=buffer_to_string(all_alhabet_sname_459)))));
    __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_475=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 220, "struct CVALUE*", (void*)0, (void*)0))));
    fun2_476=((struct sFun*)(__right_value403=map$2charphsFunphp_at(info->funcs,method_block_name_474,((void*)0))));
    come_call_finalizer3(__right_value403,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    fun2_476==((void*)0)) {
        err_msg(info,"method block function not found(%s)",method_block_name_474);
        __result317__ = (_Bool)1;
        come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block2_446,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_block_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
        class_name_451 = come_decrement_ref_count2(class_name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(all_alhabet_sname_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
        method_block_name_474 = come_decrement_ref_count2(method_block_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result317__;
    }
    method_block_type2_479=fun2_476->mLambdaType;
    __dec_obj159=come_value2_475->c_value;
    come_value2_475->c_value=(char*)come_increment_ref_count(xsprintf("(void*)%s",method_block_name_474));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj160=come_value2_475->type;
    come_value2_475->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_type2_479));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_475->var=((void*)0);
    list$1CVALUEphp_push_back(come_params,(struct CVALUE*)come_increment_ref_count(come_value2_475));
    __dec_obj161=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source3_468);
    come_call_finalizer3(__dec_obj161,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_469;
    info->head=head_470;
    info->sline=sline_471;
    info->current_stack_frame_struct=current_stack_frame_struct_455;
    __dec_obj162=info->come_method_block_function_result_type;
    info->come_method_block_function_result_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type));
    come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    contained_method_generics_method_block_480=(_Bool)0;
    for(    o2_saved_481=(param_types_457),it_482=list$1sTypephp_begin((o2_saved_481));    !list$1sTypephp_end((o2_saved_481));    it_482=list$1sTypephp_next((o2_saved_481))    ){
        if(        is_contained_method_generics_types(it_482,info)) {
            contained_method_generics_method_block_480=(_Bool)1;
        }
    }
    if(    is_contained_method_generics_types(result_type_456,info)) {
        contained_method_generics_method_block_480=(_Bool)1;
    }
    if(    contained_method_generics_method_block_480) {
        map$2charphsFunphp_remove(info->funcs,method_block_name_474);
    }
    __result319__ = (_Bool)1;
    come_call_finalizer3(come_params,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    if(current_stack_frame_node_440) { current_stack_frame_node_440 = come_decrement_ref_count2(current_stack_frame_node_440, ((struct sNode*)current_stack_frame_node_440)->finalize, ((struct sNode*)current_stack_frame_node_440)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_445,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block2_446,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_type_447,sType_finalize, 0, 0, 0, 0, (void*)0);
    class_name_451 = come_decrement_ref_count2(class_name_451, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_456,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(all_alhabet_sname_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source3_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_472) { node_472 = come_decrement_ref_count2(node_472, ((struct sNode*)node_472)->finalize, ((struct sNode*)node_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    method_block_name_474 = come_decrement_ref_count2(method_block_name_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

static struct sCurrentNode* sCurrentNode_clone(struct sCurrentNode* self){
void* __result_obj__=(void*)0;
struct sCurrentNode* __result302__;
void* __right_value374 = (void*)0;
struct sCurrentNode* result_441;
void* __right_value375 = (void*)0;
char* __dec_obj139;
struct sCurrentNode* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_441=(struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "sCurrentNode_clone", 3, "struct sCurrentNode", sCurrentNode_finalize, sCurrentNode_clone));
    if(    self!=((void*)0)) {
        result_441->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj139=result_441->sname;
        result_441->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_441->sline_real=self->sline_real;
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_441;
    come_call_finalizer3(result_441,sCurrentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_443;
struct list_item$1CVALUEph* prev_it_444;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        prev_it_444=it_443;
        it_443=it_443->next;
        come_call_finalizer3(prev_it_444,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj140;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj140=self->item;
            come_call_finalizer3(__dec_obj140,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_448;
int i_449;
struct sType* __result305__;
struct sType* default_value_450;
struct sType* __result306__;
default_value_450 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_448=self->head;
    i_449=0;
    while(it_448!=((void*)0)) {
        if(        position==i_449) {
            __result305__ = gComeFunResultObject = __result_obj__ = it_448->item;
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
        it_448=it_448->next;
        i_449++;
    }
    memset(&default_value_450,0,sizeof(struct sType*));
    __result306__ = gComeFunResultObject = __result_obj__ = default_value_450;
    come_call_finalizer3(default_value_450,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_452;
unsigned int hash_453;
unsigned int it_454;
struct sClass* __result307__;
struct sClass* __result308__;
struct sClass* __result309__;
struct sClass* __result310__;
default_value_452 = (void*)0;
    memset(&default_value_452,0,sizeof(struct sClass*));
    hash_453=charp_get_hash_key(((char*)key))%self->size;
    it_454=hash_453;
    while((_Bool)1) {
        if(        self->item_existance[it_454]) {
            if(            charp_equals(self->keys[it_454],key)) {
                __result307__ = gComeFunResultObject = __result_obj__ = self->items[it_454];
                come_call_finalizer3(default_value_452,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result307__;
            }
            it_454++;
            if(            it_454>=self->size) {
                it_454=0;
            }
            else if(            it_454==hash_453) {
                __result308__ = gComeFunResultObject = __result_obj__ = default_value_452;
                come_call_finalizer3(default_value_452,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result308__;
            }
        }
        else {
            __result309__ = gComeFunResultObject = __result_obj__ = default_value_452;
            come_call_finalizer3(default_value_452,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result309__;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = default_value_452;
    come_call_finalizer3(default_value_452,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_477;
unsigned int it_478;
struct sFun* __result313__;
struct sFun* __result314__;
struct sFun* __result315__;
struct sFun* __result316__;
    hash_477=charp_get_hash_key(((char*)key))%self->size;
    it_478=hash_477;
    while((_Bool)1) {
        if(        self->item_existance[it_478]) {
            if(            charp_equals(self->keys[it_478],key)) {
                __result313__ = gComeFunResultObject = __result_obj__ = self->items[it_478];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result313__;
            }
            it_478++;
            if(            it_478>=self->size) {
                it_478=0;
            }
            else if(            it_478==hash_477) {
                __result314__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result314__;
            }
        }
        else {
            __result315__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
    }
    __result316__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj142;
struct sType* __dec_obj143;
struct list$1sTypeph* __dec_obj144;
struct list$1charph* __dec_obj145;
struct list$1charph* __dec_obj146;
struct sType* __dec_obj147;
struct sBlock* __dec_obj148;
struct buffer* __dec_obj151;
struct buffer* __dec_obj152;
struct buffer* __dec_obj153;
struct buffer* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
char* __dec_obj157;
char* __dec_obj158;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj142=self->mName;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj143=self->mResultType;
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj144=self->mParamTypes;
            come_call_finalizer3(__dec_obj144,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj145=self->mParamNames;
            come_call_finalizer3(__dec_obj145,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj146=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj146,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj147=self->mLambdaType;
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj148=self->mBlock;
            come_call_finalizer3(__dec_obj148,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj151=self->mSource;
            come_call_finalizer3(__dec_obj151,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj152=self->mSourceHead;
            come_call_finalizer3(__dec_obj152,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj153=self->mSourceHead2;
            come_call_finalizer3(__dec_obj153,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj154=self->mSourceDefer;
            come_call_finalizer3(__dec_obj154,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj155=self->mComeHeader;
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj156=self->mDeclareSName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj157=self->mAttribute;
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj158=self->mFunAttribute;
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj149;
struct sVarTable* __dec_obj150;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj149=self->mNodes;
            come_call_finalizer3(__dec_obj149,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj150=self->mVarTable;
            come_call_finalizer3(__dec_obj150,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsFunph* map$2charphsFunphp_remove(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
unsigned int hash_483;
unsigned int it_484;
struct map$2charphsFunph* __result318__;
    hash_483=charp_get_hash_key(((char*)key))%self->size;
    it_484=hash_483;
    while((_Bool)1) {
        if(        self->item_existance[it_484]) {
            if(            charp_equals(self->keys[it_484],key)) {
                list$1charpp_remove(self->key_list,self->keys[it_484]);
                self->item_existance[it_484]=(_Bool)0;
                if(                1) {
                    self->keys[it_484] = come_decrement_ref_count2(self->keys[it_484], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                self->keys[it_484]=((void*)0);
                if(                1) {
                    come_call_finalizer3(self->items[it_484],sFun_finalize, 0, 0, 0, 0, (void*)0);
                }
                self->items[it_484]=((void*)0);
                self->len--;
                break;
            }
            it_484++;
            if(            it_484>=self->size) {
                it_484=0;
            }
            else if(            it_484==hash_483) {
                break;
            }
        }
        else {
            break;
        }
    }
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result318__;
}

struct sMethodCallNode* sMethodCallNode_initialize(struct sMethodCallNode* self, char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, _Bool no_infference_method_generics, _Bool recursive, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct sNode* __dec_obj163;
void* __right_value409 = (void*)0;
char* __dec_obj164;
void* __right_value419 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj175;
void* __right_value420 = (void*)0;
struct buffer* __dec_obj176;
void* __right_value421 = (void*)0;
struct list$1sTypeph* __dec_obj177;
struct sMethodCallNode* __result326__;
    ((struct sNodeBase*)(__right_value407=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value407,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->obj;
    self->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj));
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj164=self->fun_name;
    self->fun_name=(char*)come_increment_ref_count(__builtin_string(fun_name));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=self->params;
    self->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, params));
    come_call_finalizer3(__dec_obj175,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj176=self->method_block;
    self->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, method_block));
    come_call_finalizer3(__dec_obj176,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->method_block_sline=method_block_sline;
    __dec_obj177=self->method_generics_types;
    self->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, method_generics_types));
    come_call_finalizer3(__dec_obj177,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->no_infference_method_generics=no_infference_method_generics;
    self->recursive=recursive;
    self->fun=((void*)0);
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
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
void* __right_value422 = (void*)0;
char* __result327__;
    __result327__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value422=__builtin_string("sMethodCallNode")));
    __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

_Bool sMethodCallNode_compile(struct sMethodCallNode* self, struct sInfo* info){
char* fun_name_495;
struct list$1tuple2$2charphsNodephph* params_496;
struct sNode* obj_497;
struct buffer* method_block_498;
int method_block_sline_499;
_Bool no_infference_method_generics_500;
struct list$1sTypeph* method_generics_types_501;
_Bool recursive_502;
struct list$1sTypeph* method_generics_types_before_503;
struct list$1sTypeph* __dec_obj184;
void* __right_value423 = (void*)0;
struct list$1sTypeph* __dec_obj185;
_Bool Value_504;
_Bool __result328__;
void* __right_value424 = (void*)0;
struct CVALUE* obj_value_505;
void* __right_value425 = (void*)0;
struct sType* obj_type_506;
_Bool no_output_come_code_507;
struct sType* type_508;
void* __right_value426 = (void*)0;
char* none_generics_name_509;
void* __right_value427 = (void*)0;
char* fun_name2_510;
void* __right_value428 = (void*)0;
char* fun_name3_511;
void* __right_value429 = (void*)0;
struct sGenericsFun* generics_fun_512;
_Bool method_generics_513;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var3 = (void*)0;
char* name_514=0;
struct sGenericsFun* gfun_515=0;
char* generics_fun_name_516;
void* __right_value432 = (void*)0;
struct sFun* fun_517;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct list$1CVALUEph* come_params_518;
_Bool no_output_come_code_519;
_Bool __result330__;
void* __right_value435 = (void*)0;
struct CVALUE* method_block_node_520;
void* __right_value436 = (void*)0;
struct sType* method_block_lambda_type_524;
void* __right_value437 = (void*)0;
struct sType* method_block_result_type_525;
void* __right_value438 = (void*)0;
struct sType* generics_fun_method_block_lambda_type_526;
struct sType* generics_fun_method_block_result_type_527;
int method_generics_num_528;
void* __right_value439 = (void*)0;
int n_529;
struct list$1sTypeph* o2_saved_530;
struct sType* it_531;
int method_generics_num_532;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct list$1CVALUEph* come_params_533;
int i_534;
struct list$1tuple2$2charphsNodephph* o2_saved_535;
struct tuple2$2charphsNodeph* it_538;
struct tuple2$2charphsNodeph* multiple_assign_var4 = (void*)0;
char* label_541=0;
struct sNode* node_542=0;
_Bool Value_543;
_Bool __result339__;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_544;
int method_generics_num_545;
void* __right_value445 = (void*)0;
struct list$1sTypeph* o2_saved_546;
struct sType* it_547;
int method_generics_num_548;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1CVALUEph* come_params_549;
int i_550;
struct list$1tuple2$2charphsNodephph* o2_saved_551;
struct tuple2$2charphsNodeph* it_552;
struct tuple2$2charphsNodeph* multiple_assign_var5 = (void*)0;
char* label_553=0;
struct sNode* node_554=0;
_Bool Value_555;
_Bool __result340__;
void* __right_value450 = (void*)0;
struct CVALUE* come_value_556;
int method_generics_num_557;
void* __right_value451 = (void*)0;
int n_558;
struct list$1sTypeph* o2_saved_559;
struct sType* it_560;
int method_generics_num_561;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sClass* klass_562;
_Bool calling_dynamic_method_563;
struct sType* lambda_type_564;
struct list$1voidph* o2_saved_565;
struct tuple2$2charphsTypeph* it_568;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* field_name_571=0;
struct sType* field_type_572=0;
void* __right_value454 = (void*)0;
struct sType* result_type_573;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1CVALUEph* come_params_574;
int i_575;
struct list$1tuple2$2charphsNodephph* o2_saved_576;
struct tuple2$2charphsNodeph* it_577;
struct tuple2$2charphsNodeph* multiple_assign_var7 = (void*)0;
char* label_578=0;
struct sNode* node_579=0;
_Bool Value_580;
_Bool __result347__;
void* __right_value457 = (void*)0;
struct CVALUE* come_value_581;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
_Bool _if_conditional2;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct buffer* buf_582;
int j_583;
struct list$1CVALUEph* o2_saved_584;
struct CVALUE* it_587;
void* __right_value466 = (void*)0;
char* __dec_obj186;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct CVALUE* come_value2_590;
void* __right_value469 = (void*)0;
char* __dec_obj187;
void* __right_value470 = (void*)0;
struct sType* result_type2_591;
void* __right_value471 = (void*)0;
struct sType* __dec_obj188;
struct list$1sTypeph* __dec_obj189;
struct sGenericsFun* generics_fun_592;
char* generics_fun_name_593;
struct sFun* fun_594;
void* __right_value472 = (void*)0;
char* __dec_obj190;
struct sClass* klass_595;
void* __right_value473 = (void*)0;
_Bool _while_condtional1;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
char* __dec_obj191;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var8 = (void*)0;
char* name_596=0;
struct sGenericsFun* gfun_597=0;
char* __dec_obj192;
void* __right_value479 = (void*)0;
char* none_generics_name_598;
void* __right_value480 = (void*)0;
char* fun_name3_599;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var9 = (void*)0;
char* name_600=0;
struct sGenericsFun* gfun_601=0;
char* __dec_obj193;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct tuple2$2charphsGenericsFunp* multiple_assign_var10 = (void*)0;
char* name_602=0;
struct sGenericsFun* gfun_603=0;
char* __dec_obj194;
int i_604;
void* __right_value485 = (void*)0;
char* new_fun_name_605;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
char* __dec_obj195;
struct sType* obj_array_type_609;
void* __right_value488 = (void*)0;
char* array_method_name_610;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
char* __dec_obj196;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
char* __dec_obj197;
void* __right_value494 = (void*)0;
_Bool __result358__;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
char* __dec_obj198;
void* __right_value498 = (void*)0;
struct sClass* klass_611;
void* __right_value499 = (void*)0;
_Bool _while_condtional2;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __dec_obj199;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var11 = (void*)0;
struct sFun* fun2_612=0;
char* real_fun_name_613=0;
char* __dec_obj201;
void* __right_value504 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var12 = (void*)0;
struct sFun* fun2_614=0;
char* real_fun_name_615=0;
char* __dec_obj202;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
char* original_obj_type_fun_name_616;
void* __right_value507 = (void*)0;
char* __dec_obj203;
_Bool __result359__;
_Bool __result360__;
_Bool __result361__;
void* __right_value508 = (void*)0;
struct sType* result_type_617;
void* __right_value509 = (void*)0;
struct sType* result_type2_618;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1sTypeph* param_types_619;
struct list$1sTypeph* o2_saved_620;
struct sType* it_621;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* it2_622;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct list$1CVALUEph* come_params_623;
int i_624;
_Bool first_param_628;
struct list$1tuple2$2charphsNodephph* o2_saved_629;
struct tuple2$2charphsNodeph* it_630;
struct tuple2$2charphsNodeph* multiple_assign_var13 = (void*)0;
char* label_631=0;
struct sNode* node_632=0;
int n_633;
struct list$1charph* o2_saved_634;
char* it_637;
_Bool Value_640;
_Bool __result369__;
void* __right_value520 = (void*)0;
struct CVALUE* come_value_641;
void* __right_value521 = (void*)0;
_Bool _if_conditional3;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
_Bool _if_conditional4;
void* __right_value528 = (void*)0;
int i_647;
struct list$1tuple2$2charphsNodephph* o2_saved_648;
struct tuple2$2charphsNodeph* it_649;
struct tuple2$2charphsNodeph* multiple_assign_var14 = (void*)0;
char* label_650=0;
struct sNode* node_651=0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
_Bool _if_conditional5;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
_Bool _elif_conditional1;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
_Bool _if_conditional6;
_Bool Value_655;
_Bool __result374__;
void* __right_value538 = (void*)0;
struct CVALUE* come_value_656;
void* __right_value539 = (void*)0;
_Bool _if_conditional7;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
_Bool _if_conditional8;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
_Bool _if_conditional9;
struct sType* obj_array_type_657;
void* __right_value548 = (void*)0;
char* array_method_name_658;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct buffer* buf_659;
int i_660;
struct list$1sNodeph* o2_saved_661;
struct sNode* it_664;
_Bool Value_667;
void* __right_value551 = (void*)0;
struct CVALUE* come_value_668;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct CVALUE* come_value_669;
void* __right_value554 = (void*)0;
char* __dec_obj208;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj209;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct buffer* buf_673;
int i_674;
struct list$1sNodeph* o2_saved_675;
struct sNode* it_676;
_Bool Value_677;
void* __right_value565 = (void*)0;
struct CVALUE* come_value_678;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct CVALUE* come_value_679;
void* __right_value568 = (void*)0;
char* __dec_obj213;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sType* __dec_obj214;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct buffer* buf_680;
int i_681;
struct list$1sNodeph* o2_saved_682;
struct sNode* it_683;
_Bool Value_684;
void* __right_value576 = (void*)0;
struct CVALUE* come_value_685;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct CVALUE* come_value_686;
void* __right_value579 = (void*)0;
char* __dec_obj215;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* __dec_obj216;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct buffer* buf_687;
int i_688;
struct list$1sNodeph* o2_saved_689;
struct sNode* it_690;
_Bool Value_691;
void* __right_value587 = (void*)0;
struct CVALUE* come_value_692;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct CVALUE* come_value_693;
void* __right_value590 = (void*)0;
char* __dec_obj217;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sType* __dec_obj218;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct buffer* buf_694;
int i_695;
struct list$1sNodeph* o2_saved_696;
struct sNode* it_697;
_Bool Value_698;
void* __right_value598 = (void*)0;
struct CVALUE* come_value_699;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct CVALUE* come_value_700;
void* __right_value601 = (void*)0;
char* __dec_obj219;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sType* __dec_obj220;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
char* default_param_701;
void* __right_value609 = (void*)0;
char* param_name_702;
void* __right_value610 = (void*)0;
_Bool _if_conditional10;
struct buffer* source_703;
char* p_704;
char* head_705;
int sline_706;
void* __right_value611 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value612 = (void*)0;
struct sNode* node_707;
_Bool Value_708;
_Bool __result382__;
struct buffer* __dec_obj222;
void* __right_value613 = (void*)0;
struct CVALUE* come_value_709;
void* __right_value614 = (void*)0;
_Bool _if_conditional11;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
_Bool _if_conditional12;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
_Bool _if_conditional13;
_Bool __result383__;
_Bool __result384__;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct buffer* buf_710;
int j_711;
struct list$1CVALUEph* o2_saved_712;
struct CVALUE* it_713;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct CVALUE* come_value2_714;
void* __right_value627 = (void*)0;
char* __dec_obj223;
_Bool generics_any_child_715;
struct sType* obj_type2_716;
struct sType* __dec_obj224;
struct list$1sTypeph* o2_saved_717;
struct sType* it_718;
struct sType* obj_type2_719;
void* __right_value628 = (void*)0;
struct sType* __dec_obj225;
void* __right_value629 = (void*)0;
struct sType* __dec_obj226;
void* __right_value630 = (void*)0;
struct sType* __dec_obj227;
void* __right_value631 = (void*)0;
struct sType* __dec_obj228;
void* __right_value632 = (void*)0;
struct sType* __dec_obj229;
void* __right_value633 = (void*)0;
char* __dec_obj230;
void* __right_value634 = (void*)0;
struct CVALUE* __dec_obj231;
struct list$1sTypeph* __dec_obj232;
_Bool __result385__;
    fun_name_495=(char*)come_increment_ref_count(self->fun_name);
    params_496=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->params);
    obj_497=(struct sNode*)come_increment_ref_count(self->obj);
    method_block_498=(struct buffer*)come_increment_ref_count(self->method_block);
    method_block_sline_499=self->method_block_sline;
    no_infference_method_generics_500=self->no_infference_method_generics;
    method_generics_types_501=(struct list$1sTypeph*)come_increment_ref_count(self->method_generics_types);
    recursive_502=self->recursive;
    method_generics_types_before_503=((void*)0);
    __dec_obj184=method_generics_types_before_503;
    method_generics_types_before_503=(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types);
    come_call_finalizer3(__dec_obj184,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj185=info->method_generics_types;
    info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
    come_call_finalizer3(__dec_obj185,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    Value_504=node_compile(obj_497,info);
    if(    !Value_504) {
        __result328__ = (_Bool)0;
        fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        return __result328__;
    }
    else {
    }
    obj_value_505=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    obj_type_506=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, obj_value_505->type));
    if(    !no_infference_method_generics_500) {
        no_output_come_code_507=info->no_output_come_code;
        info->no_output_come_code=(_Bool)1;
        type_508=(struct sType*)come_increment_ref_count(obj_type_506);
        none_generics_name_509=(char*)come_increment_ref_count(get_none_generics_name(type_508->mClass->mName));
        fun_name2_510=(char*)come_increment_ref_count(create_method_name(type_508,(_Bool)0,fun_name_495,info,(_Bool)1));
        fun_name3_511=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_509,fun_name_495));
        generics_fun_512=((struct sGenericsFun*)(__right_value429=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_511,((void*)0))));
        come_call_finalizer3(__right_value429,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_512) {
            method_generics_513=list$1charphp_length(generics_fun_512->mMethodGenericsTypeNames)>0;
            if(            method_generics_513&&list$1sTypephp_length(info->method_generics_types)==0) {
                multiple_assign_var3=((struct tuple2$2charphsGenericsFunp*)(__right_value431=make_generics_function(obj_type_506,(char*)come_increment_ref_count(__builtin_string(fun_name_495)),info,(_Bool)1)));
                name_514=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                gfun_515=multiple_assign_var3->v2;
                come_call_finalizer3(__right_value431,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                generics_fun_name_516=(char*)come_increment_ref_count(name_514);
                fun_517=((struct sFun*)(__right_value432=map$2charphsFunphp_at(info->funcs,generics_fun_name_516,((void*)0))));
                come_call_finalizer3(__right_value432,sFun_finalize, 0, 1, 0, 0, (void*)0);
                come_params_518=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 354, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                if(                method_block_498) {
                    no_output_come_code_519=info->no_output_come_code;
                    info->no_output_come_code=(_Bool)1;
                    if(                    !compile_method_block(method_block_498,(struct list$1CVALUEph*)come_increment_ref_count(come_params_518),fun_517,fun_name3_511,method_block_sline_499,info,(_Bool)1)) {
                        __result330__ = (_Bool)0;
                        name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_516 = come_decrement_ref_count2(generics_fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                        none_generics_name_509 = come_decrement_ref_count2(none_generics_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name2_510 = come_decrement_ref_count2(fun_name2_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name3_511 = come_decrement_ref_count2(fun_name3_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result330__;
                    }
                    info->no_output_come_code=no_output_come_code_519;
                    method_block_node_520=((struct CVALUE*)(__right_value435=list$1CVALUEphp_operator_load_element(come_params_518,-1)));
                    come_call_finalizer3(__right_value435,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                    method_block_lambda_type_524=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_node_520->type));
                    method_block_result_type_525=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->come_method_block_function_result_type));
                    generics_fun_method_block_lambda_type_526=((struct sType*)(__right_value438=list$1sTypephp_operator_load_element(generics_fun_512->mParamTypes,-1)));
                    come_call_finalizer3(__right_value438,sType_finalize, 0, 1, 0, 0, (void*)0);
                    generics_fun_method_block_result_type_527=generics_fun_method_block_lambda_type_526->mResultType;
                    if(                    generics_fun_method_block_result_type_527->mClass->mMethodGenerics) {
                        method_generics_num_528=generics_fun_method_block_result_type_527->mClass->mMethodGenericsNum;
                        list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_528,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, method_block_result_type_525)));
                    }
                    n_529=0;
                    for(                    o2_saved_530=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_method_block_lambda_type_526->mParamTypes)),it_531=list$1sTypephp_begin((o2_saved_530));                    !list$1sTypephp_end((o2_saved_530));                    it_531=list$1sTypephp_next((o2_saved_530))                    ){
                        if(                        it_531->mClass->mMethodGenerics) {
                            method_generics_num_532=it_531->mClass->mMethodGenericsNum;
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_532,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value440=list$1sTypephp_operator_load_element(method_block_lambda_type_524->mParamTypes,n_529))))));
                            come_call_finalizer3(__right_value440,sType_finalize, 0, 1, 0, 0, (void*)0);
                        }
                        n_529++;
                    }
                    come_call_finalizer3(o2_saved_530,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_params_533=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 383, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_534=0;
                    for(                    o2_saved_535=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_496)),it_538=list$1tuple2$2charphsNodephphp_begin((o2_saved_535));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_535));                    it_538=list$1tuple2$2charphsNodephphp_next((o2_saved_535))                    ){
                        multiple_assign_var4=it_538;
                        label_541=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                        node_542=(struct sNode*)come_increment_ref_count(multiple_assign_var4->v2);
                        if(                        i_534==0) {
                            list$1CVALUEphp_push_back(come_params_533,(struct CVALUE*)come_increment_ref_count(obj_value_505));
                            i_534++;
                        }
                        else {
                            Value_543=node_compile(node_542,info);
                            if(                            !Value_543) {
                                __result339__ = (_Bool)0;
                                label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_542) { node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_535,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_lambda_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_block_result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_533,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_516 = come_decrement_ref_count2(generics_fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_509 = come_decrement_ref_count2(none_generics_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_510 = come_decrement_ref_count2(fun_name2_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_511 = come_decrement_ref_count2(fun_name3_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result339__;
                            }
                            else {
                            }
                            come_value_544=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_533,(struct CVALUE*)come_increment_ref_count(come_value_544));
                            come_call_finalizer3(come_value_544,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_541 = come_decrement_ref_count2(label_541, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_542) { node_542 = come_decrement_ref_count2(node_542, ((struct sNode*)node_542)->finalize, ((struct sNode*)node_542)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_535,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_512->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_545=generics_fun_512->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_545,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_529=0;
                    for(                    o2_saved_546=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_512->mParamTypes)),it_547=list$1sTypephp_begin((o2_saved_546));                    !list$1sTypephp_end((o2_saved_546));                    it_547=list$1sTypephp_next((o2_saved_546))                    ){
                        if(                        it_547->mClass->mMethodGenerics) {
                            method_generics_num_548=it_547->mClass->mMethodGenericsNum;
                            if(                            n_529<list$1CVALUEphp_length(come_params_533)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_548,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value446=list$1CVALUEphp_operator_load_element(come_params_533,n_529)))->type)));
                                come_call_finalizer3(__right_value446,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_529++;
                    }
                    come_call_finalizer3(o2_saved_546,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_lambda_type_524,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_block_result_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_533,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    come_params_549=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 422, "struct list$1CVALUEph*", (void*)0, (void*)0))));
                    i_550=0;
                    for(                    o2_saved_551=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_496)),it_552=list$1tuple2$2charphsNodephphp_begin((o2_saved_551));                    !list$1tuple2$2charphsNodephphp_end((o2_saved_551));                    it_552=list$1tuple2$2charphsNodephphp_next((o2_saved_551))                    ){
                        multiple_assign_var5=it_552;
                        label_553=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                        node_554=(struct sNode*)come_increment_ref_count(multiple_assign_var5->v2);
                        if(                        i_550==0) {
                            list$1CVALUEphp_push_back(come_params_549,(struct CVALUE*)come_increment_ref_count(obj_value_505));
                            i_550++;
                        }
                        else {
                            Value_555=node_compile(node_554,info);
                            if(                            !Value_555) {
                                __result340__ = (_Bool)0;
                                label_553 = come_decrement_ref_count2(label_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                if(node_554) { node_554 = come_decrement_ref_count2(node_554, ((struct sNode*)node_554)->finalize, ((struct sNode*)node_554)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(o2_saved_551,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_549,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_516 = come_decrement_ref_count2(generics_fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(come_params_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                                none_generics_name_509 = come_decrement_ref_count2(none_generics_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name2_510 = come_decrement_ref_count2(fun_name2_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name3_511 = come_decrement_ref_count2(fun_name3_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result340__;
                            }
                            else {
                            }
                            come_value_556=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                            dec_stack_ptr(1,info);
                            list$1CVALUEphp_push_back(come_params_549,(struct CVALUE*)come_increment_ref_count(come_value_556));
                            come_call_finalizer3(come_value_556,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        label_553 = come_decrement_ref_count2(label_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(node_554) { node_554 = come_decrement_ref_count2(node_554, ((struct sNode*)node_554)->finalize, ((struct sNode*)node_554)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    come_call_finalizer3(o2_saved_551,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(                    generics_fun_512->mResultType->mClass->mMethodGenerics) {
                        method_generics_num_557=generics_fun_512->mResultType->mClass->mMethodGenericsNum;
                        if(                        info->function_result_type) {
                            list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_557,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->function_result_type)));
                        }
                    }
                    n_558=0;
                    for(                    o2_saved_559=(struct list$1sTypeph*)come_increment_ref_count((generics_fun_512->mParamTypes)),it_560=list$1sTypephp_begin((o2_saved_559));                    !list$1sTypephp_end((o2_saved_559));                    it_560=list$1sTypephp_next((o2_saved_559))                    ){
                        if(                        it_560->mClass->mMethodGenerics) {
                            method_generics_num_561=it_560->mClass->mMethodGenericsNum;
                            if(                            n_558<list$1CVALUEphp_length(come_params_549)) {
                                list$1sTypephp_operator_store_element(info->method_generics_types,method_generics_num_561,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct CVALUE*)(__right_value452=list$1CVALUEphp_operator_load_element(come_params_549,n_558)))->type)));
                                come_call_finalizer3(__right_value452,CVALUE_finalize, 0, 1, 0, 0, (void*)0);
                            }
                        }
                        n_558++;
                    }
                    come_call_finalizer3(o2_saved_559,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_549,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                }
                map$2charphsFunphp_remove(info->funcs,generics_fun_name_516);
                name_514 = come_decrement_ref_count2(name_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_516 = come_decrement_ref_count2(generics_fun_name_516, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_518,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        info->no_output_come_code=no_output_come_code_507;
        come_call_finalizer3(type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
        none_generics_name_509 = come_decrement_ref_count2(none_generics_name_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name2_510 = come_decrement_ref_count2(fun_name2_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name3_511 = come_decrement_ref_count2(fun_name3_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    klass_562=obj_type_506->mClass;
    calling_dynamic_method_563=(_Bool)0;
    lambda_type_564=((void*)0);
    for(    o2_saved_565=(struct list$1voidph*)come_increment_ref_count((klass_562->mFields)),it_568=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_565)));    !list$1voidphp_end((o2_saved_565));    it_568=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_565)))    ){
        multiple_assign_var6=it_568;
        field_name_571=(char*)come_increment_ref_count(multiple_assign_var6->v1);
        field_type_572=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
        if(        string_operator_equals(field_name_571,fun_name_495)&&string_operator_equals(field_type_572->mClass->mName,"lambda")) {
            calling_dynamic_method_563=(_Bool)1;
            lambda_type_564=field_type_572;
            field_name_571 = come_decrement_ref_count2(field_name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        field_name_571 = come_decrement_ref_count2(field_name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(field_type_572,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_565,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    calling_dynamic_method_563) {
        result_type_573=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, lambda_type_564->mResultType));
        result_type_573->mStatic=(_Bool)0;
        come_params_574=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 485, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        i_575=0;
        for(        o2_saved_576=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_496)),it_577=list$1tuple2$2charphsNodephphp_begin((o2_saved_576));        !list$1tuple2$2charphsNodephphp_end((o2_saved_576));        it_577=list$1tuple2$2charphsNodephphp_next((o2_saved_576))        ){
            multiple_assign_var7=it_577;
            label_578=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            node_579=(struct sNode*)come_increment_ref_count(multiple_assign_var7->v2);
            if(            i_575==0) {
                list$1CVALUEphp_push_back(come_params_574,(struct CVALUE*)come_increment_ref_count(obj_value_505));
                i_575++;
            }
            else {
                Value_580=node_compile(node_579,info);
                if(                !Value_580) {
                    __result347__ = (_Bool)0;
                    label_578 = come_decrement_ref_count2(label_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_579) { node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_576,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_574,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result347__;
                }
                else {
                }
                come_value_581=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                check_assign_type(((char*)(__right_value460=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value458=string_to_string(fun_name_495))),((char*)(__right_value459=int_to_string(i_575)))))),((struct sType*)(__right_value461=list$1sTypephp_operator_load_element(lambda_type_564->mParamTypes,i_575-1))),come_value_581->type,come_value_581,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value461,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional2=(((struct sType*)(__right_value462=list$1sTypephp_operator_load_element(lambda_type_564->mParamTypes,i_575-1)))->mHeap&&come_value_581->type->mHeap)),                come_call_finalizer3(__right_value462,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional2) {
                    std_move(((struct sType*)(__right_value463=list$1sTypephp_operator_load_element(lambda_type_564->mParamTypes,i_575-1))),come_value_581->type,come_value_581,info,(_Bool)1);
                    come_call_finalizer3(__right_value463,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_push_back(come_params_574,(struct CVALUE*)come_increment_ref_count(come_value_581));
                i_575++;
                dec_stack_ptr(1,info);
                come_call_finalizer3(come_value_581,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_578 = come_decrement_ref_count2(label_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_579) { node_579 = come_decrement_ref_count2(node_579, ((struct sNode*)node_579)->finalize, ((struct sNode*)node_579)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_576,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buf_582=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 515, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_format(buf_582,"%s->%s",obj_value_505->c_value,fun_name_495);
        buffer_append_str(buf_582,"(");
        j_583=0;
        for(        o2_saved_584=(struct list$1CVALUEph*)come_increment_ref_count((come_params_574)),it_587=list$1CVALUEphp_begin((o2_saved_584));        !list$1CVALUEphp_end((o2_saved_584));        it_587=list$1CVALUEphp_next((o2_saved_584))        ){
            if(            j_583==0) {
                __dec_obj186=it_587->c_value;
                it_587->c_value=(char*)come_increment_ref_count(xsprintf("%s->_protocol_obj",it_587->c_value));
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            buffer_append_str(buf_582,it_587->c_value);
            if(            j_583!=list$1CVALUEphp_length(come_params_574)-1) {
                buffer_append_str(buf_582,",");
            }
            j_583++;
        }
        come_call_finalizer3(o2_saved_584,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_582,")");
        come_value2_590=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 535, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj187=come_value2_590->c_value;
        come_value2_590->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_582));
        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        result_type2_591=(struct sType*)come_increment_ref_count(solve_generics(result_type_573,info->generics_type,info));
        __dec_obj188=come_value2_590->type;
        come_value2_590->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_591));
        come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_590->type->mStatic=(_Bool)0;
        come_value2_590->var=((void*)0);
        if(        result_type2_591->mHeap) {
            append_object_to_right_values2(come_value2_590,(struct sType*)come_increment_ref_count(result_type2_591),info,(_Bool)0);
        }
        add_come_last_code(info,"%s",come_value2_590->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_590));
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj189=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_503);
        come_call_finalizer3(__dec_obj189,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=((void*)0);
        come_call_finalizer3(result_type_573,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_574,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_582,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_590,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_591,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        generics_fun_592=((void*)0);
        generics_fun_name_593=((void*)0);
        fun_594=((void*)0);
        if(        string_operator_equals(fun_name_495,"super")) {
            __dec_obj190=fun_name_495;
            fun_name_495=(char*)come_increment_ref_count(create_non_method_name(obj_type_506,(_Bool)0,info->come_fun->mName,info,(_Bool)1));
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
            klass_595=obj_type_506->mClass;
            while((_while_condtional1=(((struct sClass*)(__right_value473=map$2charphsClassphp_operator_load_element(info->classes,klass_595->mParentClassName))))),            come_call_finalizer3(__right_value473,sClass_finalize, 0, 1, 0, 0, (void*)0),
            _while_condtional1) {
                klass_595=((struct sClass*)(__right_value474=map$2charphsClassphp_operator_load_element(info->classes,klass_595->mParentClassName)));
                come_call_finalizer3(__right_value474,sClass_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj191=generics_fun_name_593;
                generics_fun_name_593=(char*)come_increment_ref_count(create_method_name_using_class(klass_595,(_Bool)0,fun_name_495,info,(_Bool)1));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_594=((struct sFun*)(__right_value476=map$2charphsFunphp_at(info->funcs,generics_fun_name_593,((void*)0))));
                come_call_finalizer3(__right_value476,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_594) {
                    break;
                }
            }
        }
        else {
            if(            obj_type_506&&obj_type_506->mNoSolvedGenericsType&&list$1sTypephp_length(obj_type_506->mNoSolvedGenericsType->mGenericsTypes)>0) {
                multiple_assign_var8=((struct tuple2$2charphsGenericsFunp*)(__right_value478=make_generics_function(obj_type_506,(char*)come_increment_ref_count(__builtin_string(fun_name_495)),info,(_Bool)1)));
                name_596=(char*)come_increment_ref_count(multiple_assign_var8->v1);
                gfun_597=multiple_assign_var8->v2;
                come_call_finalizer3(__right_value478,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj192=generics_fun_name_593;
                generics_fun_name_593=(char*)come_increment_ref_count(name_596);
                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_592=gfun_597;
                name_596 = come_decrement_ref_count2(name_596, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            list$1sTypephp_length(info->method_generics_types)>0) {
                none_generics_name_598=(char*)come_increment_ref_count(get_none_generics_name(obj_type_506->mClass->mName));
                fun_name3_599=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_598,fun_name_495));
                multiple_assign_var9=((struct tuple2$2charphsGenericsFunp*)(__right_value482=make_method_generics_function((char*)come_increment_ref_count(__builtin_string(fun_name3_599)),(struct list$1sTypeph*)come_increment_ref_count(info->method_generics_types),info)));
                name_600=(char*)come_increment_ref_count(multiple_assign_var9->v1);
                gfun_601=multiple_assign_var9->v2;
                come_call_finalizer3(__right_value482,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj193=generics_fun_name_593;
                generics_fun_name_593=(char*)come_increment_ref_count(name_600);
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_592=gfun_601;
                none_generics_name_598 = come_decrement_ref_count2(none_generics_name_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name3_599 = come_decrement_ref_count2(fun_name3_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                name_600 = come_decrement_ref_count2(name_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                multiple_assign_var10=((struct tuple2$2charphsGenericsFunp*)(__right_value484=make_generics_function(obj_type_506,(char*)come_increment_ref_count(__builtin_string(fun_name_495)),info,(_Bool)1)));
                name_602=(char*)come_increment_ref_count(multiple_assign_var10->v1);
                gfun_603=multiple_assign_var10->v2;
                come_call_finalizer3(__right_value484,tuple2$2charphsGenericsFunpp_finalize, 0, 1, 0, 0, (void*)0);
                __dec_obj194=generics_fun_name_593;
                generics_fun_name_593=(char*)come_increment_ref_count(name_602);
                __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                generics_fun_592=gfun_603;
                name_602 = come_decrement_ref_count2(name_602, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            for(            i_604=128;            i_604>=1;            i_604--            ){
                new_fun_name_605=(char*)come_increment_ref_count(xsprintf("%s_v%d",generics_fun_name_593,i_604));
                fun_594=((struct sFun*)(__right_value486=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_605)));
                come_call_finalizer3(__right_value486,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                fun_594!=((void*)0)) {
                    __dec_obj195=generics_fun_name_593;
                    generics_fun_name_593=(char*)come_increment_ref_count(__builtin_string(new_fun_name_605));
                    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_605 = come_decrement_ref_count2(new_fun_name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_605 = come_decrement_ref_count2(new_fun_name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            fun_594==((void*)0)) {
                obj_array_type_609=obj_type_506->mOriginalLoadVarType;
                if(                obj_array_type_609&&list$1sNodephp_length(obj_array_type_609->mArrayNum)>0) {
                    array_method_name_610=(char*)come_increment_ref_count(create_method_name(obj_array_type_609,(_Bool)0,fun_name_495,info,(_Bool)0));
                    fun_594=((struct sFun*)(__right_value489=map$2charphsFunphp_at(info->funcs,array_method_name_610,((void*)0))));
                    come_call_finalizer3(__right_value489,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_594) {
                        __dec_obj196=generics_fun_name_593;
                        generics_fun_name_593=(char*)come_increment_ref_count(__builtin_string(array_method_name_610));
                        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                    else {
                        fun_594=((struct sFun*)(__right_value491=map$2charphsFunphp_at(info->funcs,generics_fun_name_593,((void*)0))));
                        come_call_finalizer3(__right_value491,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_594==((void*)0)) {
                            __dec_obj197=generics_fun_name_593;
                            generics_fun_name_593=(char*)come_increment_ref_count(create_method_name(obj_type_506,(_Bool)0,((char*)(__right_value492=__builtin_string(fun_name_495))),info,(_Bool)1));
                            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                            __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_594=((struct sFun*)(__right_value494=map$2charphsFunphp_at(info->funcs,generics_fun_name_593,((void*)0))));
                            come_call_finalizer3(__right_value494,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_594==((void*)0)) {
                                err_msg(info,"function not found(%s) at method(%s)(Z1)\n",generics_fun_name_593,info->come_fun->mName);
                                __result358__ = (_Bool)1;
                                array_method_name_610 = come_decrement_ref_count2(array_method_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                                if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                                return __result358__;
                            }
                        }
                    }
                    array_method_name_610 = come_decrement_ref_count2(array_method_name_610, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    fun_594=((struct sFun*)(__right_value495=map$2charphsFunphp_at(info->funcs,generics_fun_name_593,((void*)0))));
                    come_call_finalizer3(__right_value495,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    fun_594==((void*)0)) {
                        __dec_obj198=generics_fun_name_593;
                        generics_fun_name_593=(char*)come_increment_ref_count(create_method_name(obj_type_506,(_Bool)0,((char*)(__right_value496=__builtin_string(fun_name_495))),info,(_Bool)1));
                        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                        __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        fun_594=((struct sFun*)(__right_value498=map$2charphsFunphp_at(info->funcs,generics_fun_name_593,((void*)0))));
                        come_call_finalizer3(__right_value498,sFun_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        fun_594==((void*)0)) {
                            klass_611=obj_type_506->mClass;
                            while((_while_condtional2=(((struct sClass*)(__right_value499=map$2charphsClassphp_operator_load_element(info->classes,klass_611->mParentClassName))))),                            come_call_finalizer3(__right_value499,sClass_finalize, 0, 1, 0, 0, (void*)0),
                            _while_condtional2) {
                                klass_611=((struct sClass*)(__right_value500=map$2charphsClassphp_operator_load_element(info->classes,klass_611->mParentClassName)));
                                come_call_finalizer3(__right_value500,sClass_finalize, 0, 1, 0, 0, (void*)0);
                                __dec_obj199=generics_fun_name_593;
                                generics_fun_name_593=(char*)come_increment_ref_count(create_method_name_using_class(klass_611,(_Bool)0,fun_name_495,info,(_Bool)1));
                                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                fun_594=((struct sFun*)(__right_value502=map$2charphsFunphp_at(info->funcs,generics_fun_name_593,((void*)0))));
                                come_call_finalizer3(__right_value502,sFun_finalize, 0, 1, 0, 0, (void*)0);
                                if(                                fun_594) {
                                    break;
                                }
                            }
                        }
                        if(                        fun_594==((void*)0)&&string_operator_equals(fun_name_495,"to_string")) {
                            multiple_assign_var11=((struct tuple2$2sFunpcharph*)(__right_value503=create_to_string_automatically(obj_type_506,fun_name_495,info)));
                            fun2_612=multiple_assign_var11->v1;
                            real_fun_name_613=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                            come_call_finalizer3(__right_value503,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_594=fun2_612;
                            __dec_obj201=generics_fun_name_593;
                            generics_fun_name_593=(char*)come_increment_ref_count(real_fun_name_613);
                            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_613 = come_decrement_ref_count2(real_fun_name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_594==((void*)0)&&string_operator_equals(fun_name_495,"equals")) {
                            multiple_assign_var12=((struct tuple2$2sFunpcharph*)(__right_value504=create_equals_automatically(obj_type_506,fun_name_495,info)));
                            fun2_614=multiple_assign_var12->v1;
                            real_fun_name_615=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                            come_call_finalizer3(__right_value504,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                            fun_594=fun2_614;
                            __dec_obj202=generics_fun_name_593;
                            generics_fun_name_593=(char*)come_increment_ref_count(real_fun_name_615);
                            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
                            real_fun_name_615 = come_decrement_ref_count2(real_fun_name_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_594==((void*)0)) {
                            original_obj_type_fun_name_616=(char*)come_increment_ref_count(create_method_name_original_obj_type(obj_type_506,(_Bool)0,((char*)(__right_value505=__builtin_string(fun_name_495))),info,(_Bool)1));
                            __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            fun_594=((struct sFun*)(__right_value507=map$2charphsFunphp_at(info->funcs,original_obj_type_fun_name_616,((void*)0))));
                            come_call_finalizer3(__right_value507,sFun_finalize, 0, 1, 0, 0, (void*)0);
                            if(                            fun_594) {
                                __dec_obj203=generics_fun_name_593;
                                generics_fun_name_593=(char*)come_increment_ref_count(original_obj_type_fun_name_616);
                                __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            original_obj_type_fun_name_616 = come_decrement_ref_count2(original_obj_type_fun_name_616, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
                        if(                        fun_594==((void*)0)) {
                            err_msg(info,"function not found(%s) at method(%s)(Z2n)\n",generics_fun_name_593,info->come_fun->mName);
                            __result359__ = (_Bool)1;
                            generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                            if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                            come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                            return __result359__;
                        }
                    }
                }
            }
        }
        if(        fun_594==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(ZY)\n",generics_fun_name_593,info->come_fun->mName);
            __result360__ = (_Bool)1;
            generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result360__;
        }
        if(        list$1sTypephp_length(fun_594->mParamTypes)==0) {
            err_msg(info,"Method require function parametor");
            __result361__ = (_Bool)1;
            generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result361__;
        }
        result_type_617=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, fun_594->mResultType));
        result_type_617->mStatic=(_Bool)0;
        result_type2_618=(struct sType*)come_increment_ref_count(solve_generics(result_type_617,info->generics_type,info));
        param_types_619=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 700, "struct list$1sTypeph*", (void*)0, (void*)0))));
        for(        o2_saved_620=(struct list$1sTypeph*)come_increment_ref_count((fun_594->mParamTypes)),it_621=list$1sTypephp_begin((o2_saved_620));        !list$1sTypephp_end((o2_saved_620));        it_621=list$1sTypephp_next((o2_saved_620))        ){
            if(            it_621==((void*)0)) {
                list$1sTypephp_push_back(param_types_619,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_621)));
            }
            else {
                it2_622=(struct sType*)come_increment_ref_count(solve_generics(it_621,info->generics_type,info));
                list$1sTypephp_push_back(param_types_619,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it2_622)));
                come_call_finalizer3(it2_622,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(o2_saved_620,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_params_623=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEphp_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "20method.c", 712, "struct list$1CVALUEph*", (void*)0, (void*)0))));
        for(        i_624=0;        i_624<list$1sTypephp_length(fun_594->mParamTypes)-(((method_block_498)?(2):(0)));        i_624++        ){
            list$1CVALUEphp_add(come_params_623,((void*)0));
        }
        first_param_628=(_Bool)1;
        for(        o2_saved_629=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_496)),it_630=list$1tuple2$2charphsNodephphp_begin((o2_saved_629));        !list$1tuple2$2charphsNodephphp_end((o2_saved_629));        it_630=list$1tuple2$2charphsNodephphp_next((o2_saved_629))        ){
            multiple_assign_var13=it_630;
            label_631=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            node_632=(struct sNode*)come_increment_ref_count(multiple_assign_var13->v2);
            if(            first_param_628) {
                first_param_628=(_Bool)0;
            }
            else if(            label_631) {
                n_633=0;
                for(                o2_saved_634=(struct list$1charph*)come_increment_ref_count((fun_594->mParamNames)),it_637=list$1charphp_begin((o2_saved_634));                !list$1charphp_end((o2_saved_634));                it_637=list$1charphp_next((o2_saved_634))                ){
                    if(                    string_operator_equals(label_631,it_637)) {
                        break;
                    }
                    n_633++;
                }
                come_call_finalizer3(o2_saved_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                Value_640=node_compile(node_632,info);
                if(                !Value_640) {
                    __result369__ = (_Bool)0;
                    label_631 = come_decrement_ref_count2(label_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_629,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result369__;
                }
                else {
                }
                come_value_641=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional3=(((struct sType*)(__right_value521=list$1sTypephp_operator_load_element(param_types_619,n_633))))),                come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional3) {
                    check_assign_type(((char*)(__right_value524=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value522=string_to_string(fun_name_495))),((char*)(__right_value523=int_to_string(n_633)))))),((struct sType*)(__right_value525=list$1sTypephp_operator_load_element(param_types_619,n_633))),come_value_641->type,come_value_641,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value524 = come_decrement_ref_count2(__right_value524, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value525,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional4=(((struct sType*)(__right_value526=list$1sTypephp_operator_load_element(param_types_619,n_633)))&&((struct sType*)(__right_value527=list$1sTypephp_operator_load_element(param_types_619,n_633)))->mHeap&&come_value_641->type->mHeap)),                come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value527,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional4) {
                    std_move(((struct sType*)(__right_value528=list$1sTypephp_operator_load_element(param_types_619,n_633))),come_value_641->type,come_value_641,info,(_Bool)1);
                    come_call_finalizer3(__right_value528,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_623,n_633,(struct CVALUE*)come_increment_ref_count(come_value_641));
                come_call_finalizer3(come_value_641,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_631 = come_decrement_ref_count2(label_631, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_632) { node_632 = come_decrement_ref_count2(node_632, ((struct sNode*)node_632)->finalize, ((struct sNode*)node_632)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_629,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        i_647=0;
        for(        o2_saved_648=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((params_496)),it_649=list$1tuple2$2charphsNodephphp_begin((o2_saved_648));        !list$1tuple2$2charphsNodephphp_end((o2_saved_648));        it_649=list$1tuple2$2charphsNodephphp_next((o2_saved_648))        ){
            multiple_assign_var14=it_649;
            label_650=(char*)come_increment_ref_count(multiple_assign_var14->v1);
            node_651=(struct sNode*)come_increment_ref_count(multiple_assign_var14->v2);
            if(            i_647==0) {
                check_assign_type(((char*)(__right_value531=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value529=string_to_string(fun_name_495))),((char*)(__right_value530=int_to_string(i_647)))))),((struct sType*)(__right_value532=list$1sTypephp_operator_load_element(param_types_619,i_647))),obj_value_505->type,obj_value_505,(_Bool)0,(_Bool)1,(_Bool)0,info);
                __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value530 = come_decrement_ref_count2(__right_value530, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value532,sType_finalize, 0, 1, 0, 0, (void*)0);
                if(                (_if_conditional5=(((struct sType*)(__right_value533=list$1sTypephp_operator_load_element(param_types_619,i_647)))->mHeap&&obj_value_505->type->mHeap)),                come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional5) {
                    std_move(((struct sType*)(__right_value534=list$1sTypephp_operator_load_element(param_types_619,i_647))),obj_value_505->type,obj_value_505,info,(_Bool)1);
                    come_call_finalizer3(__right_value534,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                else if(                (_elif_conditional1=(((struct sType*)(__right_value535=list$1sTypephp_operator_load_element(param_types_619,i_647)))->mHeap&&!obj_value_505->type->mHeap&&!gComeGC)),                come_call_finalizer3(__right_value535,sType_finalize, 0, 1, 0, 0, (void*)0),
                _elif_conditional1) {
                    err_msg(info,"require heap parametor(%s)",((char*)(__right_value536=list$1charphp_operator_load_element(fun_594->mParamNames,i_647))));
                    __right_value536 = come_decrement_ref_count2(__right_value536, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    exit(2);
                }
                list$1CVALUEphp_replace(come_params_623,i_647,(struct CVALUE*)come_increment_ref_count(obj_value_505));
                i_647++;
            }
            else if(            label_650) {
            }
            else {
                while((_Bool)1) {
                    if(                    (_if_conditional6=(((struct CVALUE*)(__right_value537=list$1CVALUEphp_operator_load_element(come_params_623,i_647)))==((void*)0))),                    come_call_finalizer3(__right_value537,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional6) {
                        break;
                    }
                    else {
                        i_647++;
                    }
                }
                Value_655=node_compile(node_651,info);
                if(                !Value_655) {
                    __result374__ = (_Bool)0;
                    label_650 = come_decrement_ref_count2(label_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_651) { node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(o2_saved_648,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result374__;
                }
                else {
                }
                come_value_656=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                if(                (_if_conditional7=(((struct sType*)(__right_value539=list$1sTypephp_operator_load_element(param_types_619,i_647))))),                come_call_finalizer3(__right_value539,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional7) {
                    check_assign_type(((char*)(__right_value542=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value540=string_to_string(fun_name_495))),((char*)(__right_value541=int_to_string(i_647)))))),((struct sType*)(__right_value543=list$1sTypephp_operator_load_element(param_types_619,i_647))),come_value_656->type,come_value_656,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value543,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                if(                (_if_conditional8=(((struct sType*)(__right_value544=list$1sTypephp_operator_load_element(param_types_619,i_647)))&&((struct sType*)(__right_value545=list$1sTypephp_operator_load_element(param_types_619,i_647)))->mHeap&&come_value_656->type->mHeap)),                come_call_finalizer3(__right_value544,sType_finalize, 0, 1, 0, 0, (void*)0),
                come_call_finalizer3(__right_value545,sType_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional8) {
                    std_move(((struct sType*)(__right_value546=list$1sTypephp_operator_load_element(param_types_619,i_647))),come_value_656->type,come_value_656,info,(_Bool)1);
                    come_call_finalizer3(__right_value546,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                list$1CVALUEphp_replace(come_params_623,i_647,(struct CVALUE*)come_increment_ref_count(come_value_656));
                i_647++;
                come_call_finalizer3(come_value_656,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            label_650 = come_decrement_ref_count2(label_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_651) { node_651 = come_decrement_ref_count2(node_651, ((struct sNode*)node_651)->finalize, ((struct sNode*)node_651)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        come_call_finalizer3(o2_saved_648,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        while((_Bool)1) {
            if(            (_if_conditional9=(((struct CVALUE*)(__right_value547=list$1CVALUEphp_operator_load_element(come_params_623,i_647)))==((void*)0))),            come_call_finalizer3(__right_value547,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional9) {
                break;
            }
            else {
                i_647++;
            }
        }
        obj_array_type_657=obj_type_506->mOriginalLoadVarType;
        if(        obj_array_type_657&&list$1sNodephp_length(obj_array_type_657->mArrayNum)>0) {
            array_method_name_658=(char*)come_increment_ref_count(create_method_name(obj_array_type_657,(_Bool)0,fun_name_495,info,(_Bool)0));
            if(            string_operator_equals(generics_fun_name_593,array_method_name_658)) {
                if(                string_operator_equals(fun_name_495,"to_pointer")) {
                    buf_659=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 815, "struct buffer*", (void*)0, (void*)0))));
                    i_660=0;
                    for(                    o2_saved_661=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_657->mArrayNum)),it_664=list$1sNodephp_begin((o2_saved_661));                    !list$1sNodephp_end((o2_saved_661));                    it_664=list$1sNodephp_next((o2_saved_661))                    ){
                        Value_667=node_compile(it_664,info);
                        if(                        !Value_667) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_668=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_659,"%s",come_value_668->c_value);
                        if(                        i_660!=list$1sNodephp_length(obj_array_type_657->mArrayNum)-1) {
                            buffer_append_str(buf_659,"*");
                        }
                        i_660++;
                        come_call_finalizer3(come_value_668,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_661,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_669=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 835, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj208=come_value_669->c_value;
                    come_value_669->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_659));
                    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_669->var=((void*)0);
                    __dec_obj209=come_value_669->type;
                    come_value_669->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 839, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_623,1,(struct CVALUE*)come_increment_ref_count(come_value_669));
                    list$1tuple2$2charphsNodephphp_push_back(params_496,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 842, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_659,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_669,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_495,"length")) {
                    buf_673=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 845, "struct buffer*", (void*)0, (void*)0))));
                    i_674=0;
                    for(                    o2_saved_675=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_657->mArrayNum)),it_676=list$1sNodephp_begin((o2_saved_675));                    !list$1sNodephp_end((o2_saved_675));                    it_676=list$1sNodephp_next((o2_saved_675))                    ){
                        Value_677=node_compile(it_676,info);
                        if(                        !Value_677) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_678=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_673,"%s",come_value_678->c_value);
                        if(                        i_674!=list$1sNodephp_length(obj_array_type_657->mArrayNum)-1) {
                            buffer_append_str(buf_673,"*");
                        }
                        i_674++;
                        come_call_finalizer3(come_value_678,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_675,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_679=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 864, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj213=come_value_679->c_value;
                    come_value_679->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_673));
                    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_679->var=((void*)0);
                    __dec_obj214=come_value_679->type;
                    come_value_679->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 868, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_623,1,(struct CVALUE*)come_increment_ref_count(come_value_679));
                    list$1tuple2$2charphsNodephphp_push_back(params_496,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 871, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_673,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_679,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_495,"to_buffer")) {
                    buf_680=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 874, "struct buffer*", (void*)0, (void*)0))));
                    i_681=0;
                    for(                    o2_saved_682=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_657->mArrayNum)),it_683=list$1sNodephp_begin((o2_saved_682));                    !list$1sNodephp_end((o2_saved_682));                    it_683=list$1sNodephp_next((o2_saved_682))                    ){
                        Value_684=node_compile(it_683,info);
                        if(                        !Value_684) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_685=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_680,"%s",come_value_685->c_value);
                        if(                        i_681!=list$1sNodephp_length(obj_array_type_657->mArrayNum)-1) {
                            buffer_append_str(buf_680,"*");
                        }
                        i_681++;
                        come_call_finalizer3(come_value_685,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_682,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_686=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 893, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj215=come_value_686->c_value;
                    come_value_686->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_680));
                    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_686->var=((void*)0);
                    __dec_obj216=come_value_686->type;
                    come_value_686->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 897, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj216,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_623,1,(struct CVALUE*)come_increment_ref_count(come_value_686));
                    list$1tuple2$2charphsNodephphp_push_back(params_496,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 900, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_680,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_686,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_495,"to_list")) {
                    buf_687=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 903, "struct buffer*", (void*)0, (void*)0))));
                    i_688=0;
                    for(                    o2_saved_689=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_657->mArrayNum)),it_690=list$1sNodephp_begin((o2_saved_689));                    !list$1sNodephp_end((o2_saved_689));                    it_690=list$1sNodephp_next((o2_saved_689))                    ){
                        Value_691=node_compile(it_690,info);
                        if(                        !Value_691) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_692=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_687,"%s",come_value_692->c_value);
                        if(                        i_688!=list$1sNodephp_length(obj_array_type_657->mArrayNum)-1) {
                            buffer_append_str(buf_687,"*");
                        }
                        i_688++;
                        come_call_finalizer3(come_value_692,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_689,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_693=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 922, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj217=come_value_693->c_value;
                    come_value_693->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_687));
                    __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_693->var=((void*)0);
                    __dec_obj218=come_value_693->type;
                    come_value_693->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 926, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_623,1,(struct CVALUE*)come_increment_ref_count(come_value_693));
                    list$1tuple2$2charphsNodephphp_push_back(params_496,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 929, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_687,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_693,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else if(                string_operator_equals(fun_name_495,"to_vector")) {
                    buf_694=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 932, "struct buffer*", (void*)0, (void*)0))));
                    i_695=0;
                    for(                    o2_saved_696=(struct list$1sNodeph*)come_increment_ref_count((obj_array_type_657->mArrayNum)),it_697=list$1sNodephp_begin((o2_saved_696));                    !list$1sNodephp_end((o2_saved_696));                    it_697=list$1sNodephp_next((o2_saved_696))                    ){
                        Value_698=node_compile(it_697,info);
                        if(                        !Value_698) {
                            err_msg(info,"invalid array num");
                            exit(1);
                        }
                        else {
                        }
                        come_value_699=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                        dec_stack_ptr(1,info);
                        buffer_append_format(buf_694,"%s",come_value_699->c_value);
                        if(                        i_695!=list$1sNodephp_length(obj_array_type_657->mArrayNum)-1) {
                            buffer_append_str(buf_694,"*");
                        }
                        i_695++;
                        come_call_finalizer3(come_value_699,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(o2_saved_696,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                    come_value_700=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 951, "struct CVALUE*", (void*)0, (void*)0))));
                    __dec_obj219=come_value_700->c_value;
                    come_value_700->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_694));
                    __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                    come_value_700->var=((void*)0);
                    __dec_obj220=come_value_700->type;
                    come_value_700->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "20method.c", 955, "struct sType*", (void*)0, (void*)0)),"long",(_Bool)0,info));
                    come_call_finalizer3(__dec_obj220,sType_finalize, 0, 0, 0, 0, (void*)0);
                    list$1CVALUEphp_replace(come_params_623,1,(struct CVALUE*)come_increment_ref_count(come_value_700));
                    list$1tuple2$2charphsNodephphp_push_back(params_496,(struct tuple2$2charphvoidp*)come_increment_ref_count(tuple2$2charphvoidp_initialize((struct tuple2$2charphvoidp**)come_increment_ref_count((struct tuple2$2charphvoidp*)come_calloc(1, sizeof(struct tuple2$2charphvoidp)*(1), "20method.c", 958, "struct tuple2$2charphvoidp", tuple2$2charphvoidp_finalize, tuple2$2charphvoidp_clone)),(char*)come_increment_ref_count(xsprintf("len")),((void*)0))));
                    come_call_finalizer3(buf_694,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(come_value_700,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            array_method_name_658 = come_decrement_ref_count2(array_method_name_658, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1tuple2$2charphsNodephphp_length(params_496)<list$1sTypephp_length(fun_594->mParamTypes)+(((method_block_498)?(-2):(0)))) {
            for(            ;            i_647<list$1sTypephp_length(fun_594->mParamTypes)+(((method_block_498)?(-2):(0)));            i_647++            ){
                default_param_701=(char*)come_increment_ref_count(come_call_cloner(string_clone, ((char*)(__right_value607=list$1charphp_operator_load_element(fun_594->mParamDefaultParametors,i_647)))));
                __right_value607 = come_decrement_ref_count2(__right_value607, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                param_name_702=((char*)(__right_value609=list$1charphp_operator_load_element(fun_594->mParamNames,i_647)));
                __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                if(                (_if_conditional10=(default_param_701&&string_operator_not_equals(default_param_701,"")&&((struct CVALUE*)(__right_value610=list$1CVALUEphp_operator_load_element(come_params_623,i_647)))==((void*)0))),                come_call_finalizer3(__right_value610,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional10) {
                    source_703=(struct buffer*)come_increment_ref_count(info->source);
                    p_704=info->p;
                    head_705=info->head;
                    sline_706=info->sline;
                    __dec_obj221=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(default_param_701));
                    come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=info->source->buf;
                    info->head=info->source->buf;
                    node_707=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    Value_708=node_compile(node_707,info);
                    if(                    !Value_708) {
                        __result382__ = (_Bool)0;
                        come_call_finalizer3(source_703,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result382__;
                    }
                    else {
                    }
                    __dec_obj222=info->source;
                    info->source=(struct buffer*)come_increment_ref_count(source_703);
                    come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    info->p=p_704;
                    info->head=head_705;
                    info->sline=sline_706;
                    come_value_709=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    if(                    (_if_conditional11=(((struct sType*)(__right_value614=list$1sTypephp_operator_load_element(param_types_619,i_647))))),                    come_call_finalizer3(__right_value614,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional11) {
                        check_assign_type(((char*)(__right_value617=xsprintf("\%s param num \%s is assinged to",((char*)(__right_value615=string_to_string(fun_name_495))),((char*)(__right_value616=int_to_string(i_647)))))),((struct sType*)(__right_value618=list$1sTypephp_operator_load_element(param_types_619,i_647))),come_value_709->type,come_value_709,(_Bool)0,(_Bool)1,(_Bool)0,info);
                        __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    if(                    (_if_conditional12=(((struct sType*)(__right_value619=list$1sTypephp_operator_load_element(param_types_619,i_647)))&&((struct sType*)(__right_value620=list$1sTypephp_operator_load_element(param_types_619,i_647)))->mHeap&&come_value_709->type->mHeap)),                    come_call_finalizer3(__right_value619,sType_finalize, 0, 1, 0, 0, (void*)0),
                    come_call_finalizer3(__right_value620,sType_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional12) {
                        std_move(((struct sType*)(__right_value621=list$1sTypephp_operator_load_element(param_types_619,i_647))),come_value_709->type,come_value_709,info,(_Bool)1);
                        come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
                    }
                    list$1CVALUEphp_replace(come_params_623,i_647,(struct CVALUE*)come_increment_ref_count(come_value_709));
                    dec_stack_ptr(1,info);
                    come_call_finalizer3(source_703,buffer_finalize, 0, 0, 0, 0, (void*)0);
                    if(node_707) { node_707 = come_decrement_ref_count2(node_707, ((struct sNode*)node_707)->finalize, ((struct sNode*)node_707)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(come_value_709,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    if(                    (_if_conditional13=(((struct CVALUE*)(__right_value622=list$1CVALUEphp_operator_load_element(come_params_623,i_647)))==((void*)0))),                    come_call_finalizer3(__right_value622,CVALUE_finalize, 0, 1, 0, 0, (void*)0),
                    _if_conditional13) {
                        err_msg(info,"require parametor(%s) %d",fun_594->mName,i_647);
                        __result383__ = (_Bool)0;
                        default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(param_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                        fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                        if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                        return __result383__;
                    }
                }
                default_param_701 = come_decrement_ref_count2(default_param_701, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        if(        method_block_498) {
            if(            !compile_method_block(method_block_498,(struct list$1CVALUEph*)come_increment_ref_count(come_params_623),fun_594,fun_name_495,method_block_sline_499,info,(_Bool)0)) {
                __result384__ = (_Bool)0;
                generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result384__;
            }
        }
        buf_710=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1015, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(buf_710,generics_fun_name_593);
        buffer_append_str(buf_710,"(");
        j_711=0;
        for(        o2_saved_712=(struct list$1CVALUEph*)come_increment_ref_count((come_params_623)),it_713=list$1CVALUEphp_begin((o2_saved_712));        !list$1CVALUEphp_end((o2_saved_712));        it_713=list$1CVALUEphp_next((o2_saved_712))        ){
            buffer_append_str(buf_710,it_713->c_value);
            if(            j_711!=list$1CVALUEphp_length(come_params_623)-1) {
                buffer_append_str(buf_710,",");
            }
            j_711++;
        }
        come_call_finalizer3(o2_saved_712,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_710,")");
        come_value2_714=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "20method.c", 1034, "struct CVALUE*", (void*)0, (void*)0))));
        __dec_obj223=come_value2_714->c_value;
        come_value2_714->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_710));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_value2_714->var=((void*)0);
        generics_any_child_715=(_Bool)0;
        obj_type2_716=(struct sType*)come_increment_ref_count(obj_type_506);
        if(        obj_type2_716->mNoSolvedGenericsType) {
            __dec_obj224=obj_type2_716;
            obj_type2_716=(struct sType*)come_increment_ref_count(obj_type2_716->mNoSolvedGenericsType);
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
            for(            o2_saved_717=(struct list$1sTypeph*)come_increment_ref_count((obj_type2_716->mGenericsTypes)),it_718=list$1sTypephp_begin((o2_saved_717));            !list$1sTypephp_end((o2_saved_717));            it_718=list$1sTypephp_next((o2_saved_717))            ){
                if(                it_718->mAnyOriginalType) {
                    generics_any_child_715=(_Bool)1;
                }
            }
            come_call_finalizer3(o2_saved_717,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        result_type2_618->mAnyOriginalType&&generics_fun_592&&obj_type_506->mNoSolvedGenericsType) {
            obj_type2_719=(struct sType*)come_increment_ref_count(obj_type_506->mNoSolvedGenericsType);
            __dec_obj225=result_type2_618;
            result_type2_618=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_592->mResultType,obj_type2_719,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj226=come_value2_714->type;
            come_value2_714->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_618));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_714->type->mStatic=(_Bool)0;
            if(            result_type2_618->mHeap) {
                append_object_to_right_values2(come_value2_714,(struct sType*)come_increment_ref_count(result_type2_618),info,(_Bool)0);
            }
            come_call_finalizer3(obj_type2_719,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        else if(        generics_fun_592&&generics_any_child_715) {
            __dec_obj227=result_type2_618;
            result_type2_618=(struct sType*)come_increment_ref_count(solve_generics(generics_fun_592->mResultType,obj_type2_716,info));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj228=come_value2_714->type;
            come_value2_714->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_618));
            come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_714->type->mStatic=(_Bool)0;
            if(            result_type2_618->mHeap) {
                append_object_to_right_values2(come_value2_714,(struct sType*)come_increment_ref_count(result_type2_618),info,(_Bool)0);
            }
        }
        else {
            __dec_obj229=come_value2_714->type;
            come_value2_714->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type2_618));
            come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value2_714->type->mStatic=(_Bool)0;
            if(            result_type2_618->mHeap) {
                append_object_to_right_values2(come_value2_714,(struct sType*)come_increment_ref_count(result_type2_618),info,(_Bool)0);
            }
        }
        __dec_obj230=come_value2_714->c_value;
        come_value2_714->c_value=(char*)come_increment_ref_count(append_stackframe(come_value2_714->c_value,come_value2_714->type,info));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=come_value2_714;
        come_value2_714=(struct CVALUE*)come_increment_ref_count(get_value_from_object((struct CVALUE*)come_increment_ref_count(come_value2_714),info));
        come_call_finalizer3(__dec_obj231,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        add_come_last_code(info,"%s",come_value2_714->c_value);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_714));
        if(        is_contained_method_generics_types(obj_type_506,info)&&generics_fun_name_593) {
            map$2charphsFunphp_remove(info->funcs,generics_fun_name_593);
        }
        come_call_finalizer3(info->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj232=info->method_generics_types;
        info->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(method_generics_types_before_503);
        come_call_finalizer3(__dec_obj232,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        info->calling_fun=fun_594;
        generics_fun_name_593 = come_decrement_ref_count2(generics_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_617,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_params_623,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(buf_710,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(come_value2_714,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type2_716,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result385__ = (_Bool)1;
    fun_name_495 = come_decrement_ref_count2(fun_name_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_496,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(obj_497) { obj_497 = come_decrement_ref_count2(obj_497, ((struct sNode*)obj_497)->finalize, ((struct sNode*)obj_497)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(method_block_498,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_501,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_before_503,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_value_505,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(obj_type_506,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result385__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result320__;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_487;
struct list_item$1tuple2$2charphsNodephph* it_488;
void* __right_value418 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result325__;
    if(    self==((void*)0)) {
        __result320__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_487=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1206, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    it_488=self->head;
    while(it_488!=((void*)0)) {
        list$1tuple2$2charphsNodephphp_add(result_487,(struct tuple2$2charphsNodeph*)come_increment_ref_count(come_call_cloner(tuple2$2charphsNodeph_clone, it_488->item)));
        it_488=it_488->next;
    }
    __result325__ = gComeFunResultObject = __result_obj__ = result_487;
    come_call_finalizer3(result_487,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result321__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_485;
struct list_item$1tuple2$2charphsNodephph* prev_it_486;
    it_485=self->head;
    while(it_485!=((void*)0)) {
        prev_it_486=it_485;
        it_485=it_485->next;
        come_call_finalizer3(prev_it_486,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj165;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj165=self->item;
            come_call_finalizer3(__dec_obj165,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj166;
struct sNode* __dec_obj167;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj166=self->v1;
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj167=self->v2;
            if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value412 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_489;
struct tuple2$2charphsNodeph* __dec_obj168;
void* __right_value413 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_490;
struct tuple2$2charphsNodeph* __dec_obj169;
void* __right_value414 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_491;
struct tuple2$2charphsNodeph* __dec_obj170;
struct list$1tuple2$2charphsNodephph* __result322__;
    if(    self->len==0) {
        litem_489=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value412=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1220, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_489->prev=((void*)0);
        litem_489->next=((void*)0);
        __dec_obj168=litem_489->item;
        litem_489->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj168,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_489;
        self->head=litem_489;
    }
    else if(    self->len==1) {
        litem_490=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value413=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1230, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_490->prev=self->head;
        litem_490->next=((void*)0);
        __dec_obj169=litem_490->item;
        litem_490->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_490;
        self->head->next=litem_490;
    }
    else {
        litem_491=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value414=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1240, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_491->prev=self->tail;
        litem_491->next=((void*)0);
        __dec_obj170=litem_491->item;
        litem_491->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_491;
        self->tail=litem_491;
    }
    self->len++;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result323__;
void* __right_value415 = (void*)0;
struct tuple2$2charphsNodeph* result_492;
void* __right_value416 = (void*)0;
char* __dec_obj173;
void* __right_value417 = (void*)0;
struct sNode* __dec_obj174;
struct tuple2$2charphsNodeph* __result324__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_492=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodeph_clone", 3, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj173=result_492->v1;
        result_492->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj174=result_492->v2;
        result_492->v2=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->v2));
        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_492;
    come_call_finalizer3(result_492,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj171;
struct sNode* __dec_obj172;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj171=self->v1;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj172=self->v2;
            if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_493;
struct list_item$1tuple2$2charphsNodephph* prev_it_494;
    it_493=self->head;
    while(it_493!=((void*)0)) {
        prev_it_494=it_493;
        it_493=it_493->next;
        come_call_finalizer3(prev_it_494,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sMethodCallNode_finalize(struct sMethodCallNode* self){
char* __dec_obj178;
struct sNode* __dec_obj179;
char* __dec_obj180;
struct list$1tuple2$2charphsNodephph* __dec_obj181;
struct buffer* __dec_obj182;
struct list$1sTypeph* __dec_obj183;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj178=self->sname;
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        if(        self->obj==gComeFunResultObject) {
            __dec_obj179=self->obj;
            if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj) { self->obj = come_decrement_ref_count2(self->obj, ((struct sNode*)self->obj)->finalize, ((struct sNode*)self->obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        if(        self->fun_name==gComeFunResultObject) {
            __dec_obj180=self->fun_name;
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->fun_name = come_decrement_ref_count2(self->fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        if(        self->params==gComeFunResultObject) {
            __dec_obj181=self->params;
            come_call_finalizer3(__dec_obj181,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        if(        self->method_block==gComeFunResultObject) {
            __dec_obj182=self->method_block;
            come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_block,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        if(        self->method_generics_types==gComeFunResultObject) {
            __dec_obj183=self->method_generics_types;
            come_call_finalizer3(__dec_obj183,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->method_generics_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1CVALUEph* list$1CVALUEphp_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result329__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_521;
int i_522;
struct CVALUE* __result331__;
struct CVALUE* default_value_523;
struct CVALUE* __result332__;
default_value_523 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_521=self->head;
    i_522=0;
    while(it_521!=((void*)0)) {
        if(        position==i_522) {
            __result331__ = gComeFunResultObject = __result_obj__ = it_521->item;
            gComeFunResultObject = (void*)0;
            return __result331__;
        }
        it_521=it_521->next;
        i_522++;
    }
    memset(&default_value_523,0,sizeof(struct CVALUE*));
    __result332__ = gComeFunResultObject = __result_obj__ = default_value_523;
    come_call_finalizer3(default_value_523,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_536;
struct tuple2$2charphsNodeph* __result333__;
struct tuple2$2charphsNodeph* __result334__;
struct tuple2$2charphsNodeph* result_537;
struct tuple2$2charphsNodeph* __result335__;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_536,0,sizeof(struct tuple2$2charphsNodeph*));
        __result333__ = gComeFunResultObject = __result_obj__ = result_536;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    self->it=self->head;
    if(    self->it) {
        __result334__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    memset(&result_537,0,sizeof(struct tuple2$2charphsNodeph*));
    __result335__ = gComeFunResultObject = __result_obj__ = result_537;
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static _Bool list$1tuple2$2charphsNodephphp_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephphp_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_539;
struct tuple2$2charphsNodeph* __result336__;
struct tuple2$2charphsNodeph* __result337__;
struct tuple2$2charphsNodeph* result_540;
struct tuple2$2charphsNodeph* __result338__;
result_539 = (void*)0;
result_540 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_539,0,sizeof(struct tuple2$2charphsNodeph*));
        __result336__ = gComeFunResultObject = __result_obj__ = result_539;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result337__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result337__;
    }
    memset(&result_540,0,sizeof(struct tuple2$2charphsNodeph*));
    __result338__ = gComeFunResultObject = __result_obj__ = result_540;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_566;
void* __result341__;
void* __result342__;
void* result_567;
void* __result343__;
result_566 = (void*)0;
result_567 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_566,0,sizeof(void*));
        __result341__ = gComeFunResultObject = __result_obj__ = result_566;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    self->it=self->head;
    if(    self->it) {
        __result342__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    memset(&result_567,0,sizeof(void*));
    __result343__ = gComeFunResultObject = __result_obj__ = result_567;
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_569;
void* __result344__;
void* __result345__;
void* result_570;
void* __result346__;
result_569 = (void*)0;
result_570 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_569,0,sizeof(void*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_569;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_570,0,sizeof(void*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_570;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct CVALUE* list$1CVALUEphp_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_585;
struct CVALUE* __result348__;
struct CVALUE* __result349__;
struct CVALUE* result_586;
struct CVALUE* __result350__;
result_585 = (void*)0;
result_586 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_585,0,sizeof(struct CVALUE*));
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
    memset(&result_586,0,sizeof(struct CVALUE*));
    __result350__ = gComeFunResultObject = __result_obj__ = result_586;
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static _Bool list$1CVALUEphp_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEphp_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_588;
struct CVALUE* __result351__;
struct CVALUE* __result352__;
struct CVALUE* result_589;
struct CVALUE* __result353__;
result_588 = (void*)0;
result_589 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_588,0,sizeof(struct CVALUE*));
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
    memset(&result_589,0,sizeof(struct CVALUE*));
    __result353__ = gComeFunResultObject = __result_obj__ = result_589;
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_606;
unsigned int hash_607;
unsigned int it_608;
struct sFun* __result354__;
struct sFun* __result355__;
struct sFun* __result356__;
struct sFun* __result357__;
default_value_606 = (void*)0;
    memset(&default_value_606,0,sizeof(struct sFun*));
    hash_607=charp_get_hash_key(((char*)key))%self->size;
    it_608=hash_607;
    while((_Bool)1) {
        if(        self->item_existance[it_608]) {
            if(            charp_equals(self->keys[it_608],key)) {
                __result354__ = gComeFunResultObject = __result_obj__ = self->items[it_608];
                come_call_finalizer3(default_value_606,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result354__;
            }
            it_608++;
            if(            it_608>=self->size) {
                it_608=0;
            }
            else if(            it_608==hash_607) {
                __result355__ = gComeFunResultObject = __result_obj__ = default_value_606;
                come_call_finalizer3(default_value_606,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result355__;
            }
        }
        else {
            __result356__ = gComeFunResultObject = __result_obj__ = default_value_606;
            come_call_finalizer3(default_value_606,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result356__;
        }
    }
    __result357__ = gComeFunResultObject = __result_obj__ = default_value_606;
    come_call_finalizer3(default_value_606,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj200;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj200=self->v2;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEphp_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value517 = (void*)0;
struct list_item$1CVALUEph* litem_625;
struct CVALUE* __dec_obj204;
void* __right_value518 = (void*)0;
struct list_item$1CVALUEph* litem_626;
struct CVALUE* __dec_obj205;
void* __right_value519 = (void*)0;
struct list_item$1CVALUEph* litem_627;
struct CVALUE* __dec_obj206;
struct list$1CVALUEph* __result362__;
    if(    self->len==0) {
        litem_625=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value517=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1220, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_625->prev=((void*)0);
        litem_625->next=((void*)0);
        __dec_obj204=litem_625->item;
        litem_625->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj204,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_625;
        self->head=litem_625;
    }
    else if(    self->len==1) {
        litem_626=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value518=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1230, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_626->prev=self->head;
        litem_626->next=((void*)0);
        __dec_obj205=litem_626->item;
        litem_626->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_626;
        self->head->next=litem_626;
    }
    else {
        litem_627=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value519=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1240, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_627->prev=self->tail;
        litem_627->next=((void*)0);
        __dec_obj206=litem_627->item;
        litem_627->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj206,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_627;
        self->tail=litem_627;
    }
    self->len++;
    __result362__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result362__;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_635;
char* __result363__;
char* __result364__;
char* result_636;
char* __result365__;
result_635 = (void*)0;
result_636 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_635,0,sizeof(char*));
        __result363__ = gComeFunResultObject = __result_obj__ = result_635;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    self->it=self->head;
    if(    self->it) {
        __result364__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result364__;
    }
    memset(&result_636,0,sizeof(char*));
    __result365__ = gComeFunResultObject = __result_obj__ = result_636;
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_638;
char* __result366__;
char* __result367__;
char* result_639;
char* __result368__;
result_638 = (void*)0;
result_639 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_638,0,sizeof(char*));
        __result366__ = gComeFunResultObject = __result_obj__ = result_638;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result367__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    memset(&result_639,0,sizeof(char*));
    __result368__ = gComeFunResultObject = __result_obj__ = result_639;
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct list$1CVALUEph* list$1CVALUEphp_replace(struct list$1CVALUEph* self, int position, struct CVALUE* item){
void* __result_obj__=(void*)0;
int len_642;
int i_643;
struct CVALUE* default_value_644;
struct list$1CVALUEph* __result370__;
struct list_item$1CVALUEph* it_645;
int i_646;
struct CVALUE* __dec_obj207;
struct list$1CVALUEph* __result371__;
default_value_644 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_642=self->len;
        for(        i_643=0;        i_643<position-len_642;        i_643++        ){
            memset(&default_value_644,0,sizeof(struct CVALUE*));
            list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(default_value_644));
            come_call_finalizer3(default_value_644,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1CVALUEphp_push_back(self,(struct CVALUE*)come_increment_ref_count(item));
        __result370__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    it_645=self->head;
    i_646=0;
    while(it_645!=((void*)0)) {
        if(        position==i_646) {
            __dec_obj207=it_645->item;
            it_645->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj207,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_645=it_645->next;
        i_646++;
    }
    __result371__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_652;
int i_653;
char* __result372__;
char* default_value_654;
char* __result373__;
default_value_654 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_652=self->head;
    i_653=0;
    while(it_652!=((void*)0)) {
        if(        position==i_653) {
            __result372__ = gComeFunResultObject = __result_obj__ = it_652->item;
            gComeFunResultObject = (void*)0;
            return __result372__;
        }
        it_652=it_652->next;
        i_653++;
    }
    memset(&default_value_654,0,sizeof(char*));
    __result373__ = gComeFunResultObject = __result_obj__ = default_value_654;
    default_value_654 = come_decrement_ref_count2(default_value_654, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_662;
struct sNode* __result375__;
struct sNode* __result376__;
struct sNode* result_663;
struct sNode* __result377__;
result_662 = (void*)0;
result_663 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_662,0,sizeof(struct sNode*));
        __result375__ = gComeFunResultObject = __result_obj__ = result_662;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    self->it=self->head;
    if(    self->it) {
        __result376__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result376__;
    }
    memset(&result_663,0,sizeof(struct sNode*));
    __result377__ = gComeFunResultObject = __result_obj__ = result_663;
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_665;
struct sNode* __result378__;
struct sNode* __result379__;
struct sNode* result_666;
struct sNode* __result380__;
result_665 = (void*)0;
result_666 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_665,0,sizeof(struct sNode*));
        __result378__ = gComeFunResultObject = __result_obj__ = result_665;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result379__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    memset(&result_666,0,sizeof(struct sNode*));
    __result380__ = gComeFunResultObject = __result_obj__ = result_666;
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value557 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_670;
struct tuple2$2charphsNodeph* __dec_obj210;
void* __right_value558 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_671;
struct tuple2$2charphsNodeph* __dec_obj211;
void* __right_value559 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_672;
struct tuple2$2charphsNodeph* __dec_obj212;
struct list$1tuple2$2charphsNodephph* __result381__;
    if(    self->len==0) {
        litem_670=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value557=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1290, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_670->prev=((void*)0);
        litem_670->next=((void*)0);
        __dec_obj210=litem_670->item;
        litem_670->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj210,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_670;
        self->head=litem_670;
    }
    else if(    self->len==1) {
        litem_671=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value558=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1300, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_671->prev=self->head;
        litem_671->next=((void*)0);
        __dec_obj211=litem_671->item;
        litem_671->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj211,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_671;
        self->head->next=litem_671;
    }
    else {
        litem_672=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value559=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1310, "struct list_item$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
        litem_672->prev=self->tail;
        litem_672->next=((void*)0);
        __dec_obj212=litem_672->item;
        litem_672->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj212,tuple2$2charphsNodeph_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_672;
        self->tail=litem_672;
    }
    self->len++;
    __result381__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static int list$1tuple2$2charphsNodephphp_length(struct list$1tuple2$2charphsNodephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2charphsNodephph* params, struct buffer* method_block, int method_block_sline, struct list$1sTypeph* method_generics_types, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
struct sNode* _inf_value2;
struct sMethodCallNode* _inf_obj_value2;
void* __right_value644 = (void*)0;
struct sNode* node_720;
void* __right_value645 = (void*)0;
struct sNode* __dec_obj239;
struct sNode* __result388__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1105, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value2=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value636=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1105, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(obj),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params),method_block,method_block_sline,method_generics_types,(_Bool)1,(_Bool)0,info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sMethodCallNode_finalize;
    _inf_value2->clone=(void*)sMethodCallNode_clone;
    _inf_value2->compile=(void*)sMethodCallNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sMethodCallNode_terminated;
    _inf_value2->kind=(void*)sMethodCallNode_kind;
    node_720=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value636,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj239=node_720;
    node_720=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_720),info));
    if(__dec_obj239) { __dec_obj239 = come_decrement_ref_count2(__dec_obj239, ((struct sNode*)__dec_obj239)->finalize, ((struct sNode*)__dec_obj239)->_protocol_obj, 0,0,0, (void*)0); };
    __result388__ = gComeFunResultObject = __result_obj__ = node_720;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(params,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static struct sMethodCallNode* sMethodCallNode_clone(struct sMethodCallNode* self){
void* __result_obj__=(void*)0;
struct sMethodCallNode* __result386__;
void* __right_value637 = (void*)0;
struct sMethodCallNode* result_721;
void* __right_value638 = (void*)0;
char* __dec_obj233;
void* __right_value639 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value640 = (void*)0;
char* __dec_obj235;
void* __right_value641 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj236;
void* __right_value642 = (void*)0;
struct buffer* __dec_obj237;
void* __right_value643 = (void*)0;
struct list$1sTypeph* __dec_obj238;
struct sMethodCallNode* __result387__;
    if(    self==(void*)0) {
        __result386__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    result_721=(struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "sMethodCallNode_clone", 3, "struct sMethodCallNode", sMethodCallNode_finalize, sMethodCallNode_clone));
    if(    self!=((void*)0)) {
        result_721->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_721->sname;
        result_721->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_721->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->obj!=((void*)0)) {
        __dec_obj234=result_721->obj;
        result_721->obj=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->obj));
        if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->fun_name!=((void*)0)) {
        __dec_obj235=result_721->fun_name;
        result_721->fun_name=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->fun_name));
        __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->params!=((void*)0)) {
        __dec_obj236=result_721->params;
        result_721->params=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(come_call_cloner(list$1tuple2$2charphsNodephphp_clone, self->params));
        come_call_finalizer3(__dec_obj236,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->method_block!=((void*)0)) {
        __dec_obj237=result_721->method_block;
        result_721->method_block=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->method_block));
        come_call_finalizer3(__dec_obj237,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_721->method_block_sline=self->method_block_sline;
    }
    if(    self!=((void*)0)&&self->method_generics_types!=((void*)0)) {
        __dec_obj238=result_721->method_generics_types;
        result_721->method_generics_types=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->method_generics_types));
        come_call_finalizer3(__dec_obj238,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_721->no_infference_method_generics=self->no_infference_method_generics;
    }
    if(    self!=((void*)0)) {
        result_721->recursive=self->recursive;
    }
    if(    self!=((void*)0)) {
        result_721->fun=self->fun;
    }
    __result387__ = gComeFunResultObject = __result_obj__ = result_721;
    come_call_finalizer3(result_721,sMethodCallNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result387__;
}

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_722;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
_Bool parse_method_generics_type_723;
char* p_724;
int sline_725;
void* __right_value651 = (void*)0;
char* word_726;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1sTypeph* method_generics_types_727;
void* __right_value654 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var15 = (void*)0;
struct sType* type_728=0;
char* name_729=0;
_Bool err_730=0;
void* __right_value655 = (void*)0;
char* p_731;
int sline_732;
_Bool err_flag_733;
void* __right_value656 = (void*)0;
char* label_734;
void* __right_value657 = (void*)0;
char* __dec_obj244;
char* __dec_obj245;
_Bool no_comma_735;
_Bool in_fun_param_736;
void* __right_value658 = (void*)0;
struct sNode* node_737;
void* __right_value659 = (void*)0;
struct sNode* __dec_obj246;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
struct buffer* method_block_738;
int method_block_sline_739;
char* head_740;
void* __right_value662 = (void*)0;
char* tail_741;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct buffer* __dec_obj247;
int len_742;
void* __right_value665 = (void*)0;
char* mem_743;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sNode* _inf_value3;
struct sMethodCallNode* _inf_obj_value3;
void* __right_value669 = (void*)0;
struct sNode* node_744;
void* __right_value670 = (void*)0;
struct sNode* __dec_obj248;
struct sNode* __result390__;
    params_722=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "20method.c", 1114, "struct list$1tuple2$2charphsNodephph*", (void*)0, (void*)0))));
    list$1tuple2$2charphsNodephphp_push_back(params_722,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1115, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count((char*)((void*)0)),(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)))));
    if(    *info->p==45&&*(info->p+1)==62) {
        info->p+=2;
        skip_spaces_and_lf(info);
    }
    parse_method_generics_type_723=(_Bool)0;
    {
        p_724=info->p;
        sline_725=info->sline;
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_726=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_726,info)) {
                    parse_method_generics_type_723=(_Bool)1;
                }
                word_726 = come_decrement_ref_count2(word_726, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_724;
        info->sline=sline_725;
    }
    method_generics_types_727=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "20method.c", 1145, "struct list$1sTypeph*", (void*)0, (void*)0))));
    if(    parse_method_generics_type_723&&*info->p==60) {
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
                multiple_assign_var15=((struct tuple3$3sTypephcharphbool*)(__right_value654=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type_728=(struct sType*)come_increment_ref_count(multiple_assign_var15->v1);
                name_729=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                err_730=multiple_assign_var15->v3;
                come_call_finalizer3(__right_value654,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_730) {
                    err_msg(info,"invalid method generics paramtor type");
                    exit(2);
                }
                list$1sTypephp_push_back(method_generics_types_727,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_728)));
                come_call_finalizer3(type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_729 = come_decrement_ref_count2(name_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            p_731=info->p;
            sline_732=info->sline;
            err_flag_733=(_Bool)0;
            label_734=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj244=label_734;
                label_734=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                err_flag_733=(_Bool)1;
            }
            if(            err_flag_733==(_Bool)1&&*info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                __dec_obj245=label_734;
                label_734=((void*)0);
                __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->p=p_731;
                info->sline=sline_732;
            }
            no_comma_735=info->no_comma;
            info->no_comma=(_Bool)1;
            in_fun_param_736=info->in_fun_param;
            info->in_fun_param=(_Bool)1;
            node_737=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj246=node_737;
            node_737=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_737),info));
            if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
            info->in_fun_param=in_fun_param_736;
            info->no_comma=no_comma_735;
            list$1tuple2$2charphsNodephphp_push_back(params_722,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph**)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "20method.c", 1221, "struct tuple2$2charphsNodeph", tuple2$2charphsNodeph_finalize, tuple2$2charphsNodeph_clone)),(char*)come_increment_ref_count(label_734),(struct sNode*)come_increment_ref_count(node_737))));
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                label_734 = come_decrement_ref_count2(label_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
                break;
            }
            label_734 = come_decrement_ref_count2(label_734, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_737) { node_737 = come_decrement_ref_count2(node_737, ((struct sNode*)node_737)->finalize, ((struct sNode*)node_737)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    method_block_738=((void*)0);
    method_block_sline_739=0;
    if(    *info->p==123) {
        head_740=info->p;
        method_block_sline_739=info->sline;
        ((char*)(__right_value662=skip_block(info)));
        __right_value662 = come_decrement_ref_count2(__right_value662, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        tail_741=info->p;
        __dec_obj247=method_block_738;
        method_block_738=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "20method.c", 1245, "struct buffer*", (void*)0, (void*)0))));
        come_call_finalizer3(__dec_obj247,buffer_finalize, 0, 0, 0, 0, (void*)0);
        len_742=tail_741-head_740;
        mem_743=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_742+1)), "20method.c", 1248, "char*", (void*)0, (void*)0));
        memcpy(mem_743,head_740,len_742);
        mem_743[len_742]=0;
        buffer_append_str(method_block_738,mem_743);
        buffer_append_str(method_block_738,"\n");
        mem_743 = come_decrement_ref_count2(mem_743, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    parse_sharp_v5(info);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1260, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sMethodCallNode*)come_increment_ref_count(((struct sMethodCallNode*)(__right_value668=sMethodCallNode_initialize((struct sMethodCallNode*)come_increment_ref_count((struct sMethodCallNode*)come_calloc(1, sizeof(struct sMethodCallNode)*(1), "20method.c", 1260, "struct sMethodCallNode*", (void*)0, (void*)0)),fun_name,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, obj)),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_722),method_block_738,method_block_sline_739,method_generics_types_727,(_Bool)0,(_Bool)1,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sMethodCallNode_finalize;
    _inf_value3->clone=(void*)sMethodCallNode_clone;
    _inf_value3->compile=(void*)sMethodCallNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sMethodCallNode_terminated;
    _inf_value3->kind=(void*)sMethodCallNode_kind;
    node_744=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value668,sMethodCallNode_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj248=node_744;
    node_744=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_744),info));
    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
    __result390__ = gComeFunResultObject = __result_obj__ = node_744;
    if(obj) { obj = come_decrement_ref_count2(obj, ((struct sNode*)obj)->finalize, ((struct sNode*)obj)->_protocol_obj, 0, 0, 0, (void*)0); } 
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(params_722,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_types_727,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_block_738,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(node_744) { node_744 = come_decrement_ref_count2(node_744, ((struct sNode*)node_744)->finalize, ((struct sNode*)node_744)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj240;
struct sNode* __dec_obj241;
struct tuple2$2charphsNodeph* __result389__;
    __dec_obj240=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); };
    __result389__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result389__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj242;
char* __dec_obj243;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj242=self->v1;
            come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj243=self->v2;
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value4;
struct sCurrentNode* _inf_obj_value4;
void* __right_value673 = (void*)0;
struct sNode* __result391__;
void* __right_value674 = (void*)0;
struct sNode* __result392__;
    if(    charp_operator_equals(buf,"__current__")) {
        _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "20method.c", 1270, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value4=(struct sCurrentNode*)come_increment_ref_count(((struct sCurrentNode*)(__right_value672=sCurrentNode_initialize((struct sCurrentNode*)come_increment_ref_count((struct sCurrentNode*)come_calloc(1, sizeof(struct sCurrentNode)*(1), "20method.c", 1270, "struct sCurrentNode*", (void*)0, (void*)0)),info))));
        _inf_value4->_protocol_obj=_inf_obj_value4;
        _inf_value4->finalize=(void*)sCurrentNode_finalize;
        _inf_value4->clone=(void*)sCurrentNode_clone;
        _inf_value4->compile=(void*)sCurrentNode_compile;
        _inf_value4->sline=(void*)sCurrentNode_sline;
        _inf_value4->sline_real=(void*)sNodeBase_sline_real;
        _inf_value4->sname=(void*)sCurrentNode_sname;
        _inf_value4->terminated=(void*)sNodeBase_terminated;
        _inf_value4->kind=(void*)sCurrentNode_kind;
        __result391__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value673=_inf_value4));
        come_call_finalizer3(__right_value672,sCurrentNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value673) { __right_value673 = come_decrement_ref_count2(__right_value673, ((struct sNode*)__right_value673)->finalize, ((struct sNode*)__right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    __result392__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value674=string_node_v17(buf,head,head_sline,info)));
    if(__right_value674) { __right_value674 = come_decrement_ref_count2(__right_value674, ((struct sNode*)__right_value674)->finalize, ((struct sNode*)__right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result392__;
}

