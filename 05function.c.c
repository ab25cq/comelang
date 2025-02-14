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
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
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
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static struct sType* sType_clone(struct sType* self);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
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
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
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
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
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
static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self);
static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self);
static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item);
static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self);
static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self);
static char* map$2charphsFunphp_next(struct map$2charphsFunph* self);
static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1charph* list$1charphp_reset(struct list$1charph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
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
static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self);
static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self);
static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item);
static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self);
static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self);
static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static int list$1voidphp_length(struct list$1voidph* self);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self);
static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct sType* result_type_291;
void* __right_value292 = (void*)0;
int block_level_319;
void* __right_value293 = (void*)0;
void* __right_value294 = (void*)0;
struct CVALUE* come_value_320;
void* __right_value295 = (void*)0;
char* __dec_obj79;
void* __right_value296 = (void*)0;
struct sType* __dec_obj80;
_Bool __result240__;
    come_fun_290=info->come_fun;
    info->come_fun=self->mFun;
    result_type_291=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value292=make_define_var(result_type_291,"__result_obj__",(_Bool)0,info))));
        __right_value292 = come_decrement_ref_count2(__right_value292, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_319=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_319;
    come_value_320=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0))));
    __dec_obj79=come_value_320->c_value;
    come_value_320->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_320->type;
    come_value_320->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_320->var=((void*)0);
    add_come_last_code(info,"%s",come_value_320->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_320));
    info->come_fun=come_fun_290;
    __result240__ = (_Bool)1;
    come_call_finalizer3(result_type_291,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_320,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
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

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1voidph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1voidph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct sType* __dec_obj45;
struct sNode* __dec_obj46;
struct sType* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj34=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj36,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj37=self->mInterfaceName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj38=self->mGenericsName;
            __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj39=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj39,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj41=self->mArrayNum;
            come_call_finalizer3(__dec_obj41,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj43=self->mParamTypes;
            come_call_finalizer3(__dec_obj43,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj44=self->mParamNames;
            come_call_finalizer3(__dec_obj44,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj45=self->mResultType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj48=self->mSizeNum;
            if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj49=self->mOriginalTypeName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj50=self->mAsmName;
            __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj51=self->mTupleName;
            __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj52=self->mAttribute;
            __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_292;
struct list_item$1voidph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_294;
struct list_item$1voidph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct sNode* __dec_obj42;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj42=self->item;
            if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count2(__dec_obj42, ((struct sNode*)__dec_obj42)->finalize, ((struct sNode*)__dec_obj42)->_protocol_obj, 0,0,0, (void*)0); };
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

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result224__;
void* __right_value253 = (void*)0;
struct sType* result_302;
void* __right_value254 = (void*)0;
struct sType* __dec_obj53;
void* __right_value255 = (void*)0;
struct sType* __dec_obj54;
void* __right_value256 = (void*)0;
struct sType* __dec_obj55;
void* __right_value257 = (void*)0;
char* __dec_obj56;
void* __right_value258 = (void*)0;
char* __dec_obj57;
void* __right_value265 = (void*)0;
struct list$1voidph* __dec_obj61;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value274 = (void*)0;
struct list$1voidph* __dec_obj66;
void* __right_value281 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value282 = (void*)0;
struct sType* __dec_obj71;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value284 = (void*)0;
struct sType* __dec_obj73;
void* __right_value285 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value286 = (void*)0;
char* __dec_obj75;
void* __right_value287 = (void*)0;
char* __dec_obj76;
void* __right_value288 = (void*)0;
char* __dec_obj77;
void* __right_value289 = (void*)0;
char* __dec_obj78;
struct sType* __result238__;
    if(    self==(void*)0) {
        __result224__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    result_302=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        result_302->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_302->mNoSolvedGenericsType;
        result_302->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_302->mOriginalLoadVarType;
        result_302->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_302->mAnyOriginalType;
        result_302->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj56=result_302->mInterfaceName;
        result_302->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj57=result_302->mGenericsName;
        result_302->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj61=result_302->mGenericsTypes;
        result_302->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_302->mArrayNum;
        result_302->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_302->mParamTypes;
        result_302->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_302->mParamNames;
        result_302->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_302->mResultType;
        result_302->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_302->mAlignas;
        result_302->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj73=result_302->mChannelType;
        result_302->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_302->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_302->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_302->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_302->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_302->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_302->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_302->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_302->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_302->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_302->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_302->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_302->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_302->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_302->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_302->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_302->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_302->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_302->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_302->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_302->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj74=result_302->mSizeNum;
        result_302->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_302->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_302->mOriginalTypeName;
        result_302->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_302->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_302->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_302->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_302->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_302->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_302->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_302->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj76=result_302->mAsmName;
        result_302->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_302->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_302->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_302->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_302->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_302->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj77=result_302->mTupleName;
        result_302->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_302->mAttribute;
        result_302->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_302->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_302->mGenerate=self->mGenerate;
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_302;
    come_call_finalizer3(result_302,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result225__;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1voidph* result_303;
struct list_item$1voidph* it_304;
void* __right_value264 = (void*)0;
struct list$1voidph* __result228__;
    if(    self==((void*)0)) {
        __result225__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    result_303=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1206, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    it_304=self->head;
    while(it_304!=((void*)0)) {
        list$1voidphp_add(result_303,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_304->item)));
        it_304=it_304->next;
    }
    __result228__ = gComeFunResultObject = __result_obj__ = result_303;
    come_call_finalizer3(result_303,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result226__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_305;
void* __dec_obj58;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_306;
void* __dec_obj59;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_307;
void* __dec_obj60;
struct list$1voidph* __result227__;
    if(    self->len==0) {
        litem_305=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1220, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_305->prev=((void*)0);
        litem_305->next=((void*)0);
        __dec_obj58=litem_305->item;
        litem_305->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_305;
        self->head=litem_305;
    }
    else if(    self->len==1) {
        litem_306=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1230, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_306->prev=self->head;
        litem_306->next=((void*)0);
        __dec_obj59=litem_306->item;
        litem_306->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_306;
        self->head->next=litem_306;
    }
    else {
        litem_307=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1240, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_307->prev=self->tail;
        litem_307->next=((void*)0);
        __dec_obj60=litem_307->item;
        litem_307->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_307;
        self->tail=litem_307;
    }
    self->len++;
    __result227__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result229__;
void* __right_value266 = (void*)0;
void* __right_value267 = (void*)0;
struct list$1sNodeph* result_308;
struct list_item$1sNodeph* it_309;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __result234__;
    if(    self==((void*)0)) {
        __result229__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    result_308=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_309=self->head;
    while(it_309!=((void*)0)) {
        list$1sNodephp_add(result_308,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_309->item)));
        it_309=it_309->next;
    }
    __result234__ = gComeFunResultObject = __result_obj__ = result_308;
    come_call_finalizer3(result_308,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_310;
struct sNode* __dec_obj62;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_311;
struct sNode* __dec_obj63;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_312;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result231__;
    if(    self->len==0) {
        litem_310=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_310->prev=((void*)0);
        litem_310->next=((void*)0);
        __dec_obj62=litem_310->item;
        litem_310->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_310;
        self->head=litem_310;
    }
    else if(    self->len==1) {
        litem_311=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_311->prev=self->head;
        litem_311->next=((void*)0);
        __dec_obj63=litem_311->item;
        litem_311->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_311;
        self->head->next=litem_311;
    }
    else {
        litem_312=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_312->prev=self->tail;
        litem_312->next=((void*)0);
        __dec_obj64=litem_312->item;
        litem_312->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_312;
        self->tail=litem_312;
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
void* __right_value271 = (void*)0;
struct sNode* result_313;
struct sNode* __result233__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_313=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_313->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_313->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_313->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_313->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_313->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_313->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_313->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_313->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_313->kind=self->kind;
    }
    __result233__ = gComeFunResultObject = __result_obj__ = result_313;
    come_call_finalizer2((void*)0, result_313, result_313 ? ((struct sNode*)result_313)->finalize:(void*)0, result_313 ? ((struct sNode*)result_313)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result233__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result235__;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
struct list$1charph* result_314;
struct list_item$1charph* it_315;
void* __right_value280 = (void*)0;
struct list$1charph* __result237__;
    if(    self==((void*)0)) {
        __result235__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_314=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_315=self->head;
    while(it_315!=((void*)0)) {
        list$1charphp_add(result_314,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_315->item)));
        it_315=it_315->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_314;
    come_call_finalizer3(result_314,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_316;
char* __dec_obj67;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_317;
char* __dec_obj68;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_318;
char* __dec_obj69;
struct list$1charph* __result236__;
    if(    self->len==0) {
        litem_316=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_316->prev=((void*)0);
        litem_316->next=((void*)0);
        __dec_obj67=litem_316->item;
        litem_316->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_316;
        self->head=litem_316;
    }
    else if(    self->len==1) {
        litem_317=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_317->prev=self->head;
        litem_317->next=((void*)0);
        __dec_obj68=litem_317->item;
        litem_317->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_317;
        self->head->next=litem_317;
    }
    else {
        litem_318=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_318->prev=self->tail;
        litem_318->next=((void*)0);
        __dec_obj69=litem_318->item;
        litem_318->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_318;
        self->tail=litem_318;
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
        litem_321=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value297=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1290, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_321->prev=((void*)0);
        litem_321->next=((void*)0);
        __dec_obj81=litem_321->item;
        litem_321->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head=litem_321;
    }
    else if(    self->len==1) {
        litem_322=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1300, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
        litem_322->prev=self->head;
        litem_322->next=((void*)0);
        __dec_obj86=litem_322->item;
        litem_322->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head->next=litem_322;
    }
    else {
        litem_323=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1310, "struct list_item$1CVALUEph*", (void*)0, (void*)0))));
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
        result_type_326=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
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
struct list$1voidph* __dec_obj91;
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
            come_call_finalizer3(__dec_obj91,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj111;
void* __right_value310 = (void*)0;
struct list$1charph* __dec_obj112;
void* __right_value311 = (void*)0;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
struct sType* __dec_obj115;
struct list$1voidph* __dec_obj116;
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
    self->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj116,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(param_types,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list$1voidph* __dec_obj126;
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
            come_call_finalizer3(__dec_obj126,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value327=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2466, "char**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value329=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_346=0;    i_346<128;    i_346++    ){
        self->item_existance[i_346]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj140=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
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
    keys_357=(char**)come_increment_ref_count(((char**)(__right_value334=(char**)come_calloc(1, sizeof(char*)*(1*(size_356)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_358=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_356)), "./comelang.h", 2694, "char**", (void*)0, (void*)0))));
    item_existance_359=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value336=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_356)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
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
        litem_401=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value344=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1290, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_401->prev=((void*)0);
        litem_401->next=((void*)0);
        __dec_obj144=litem_401->item;
        litem_401->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_401;
        self->head=litem_401;
    }
    else if(    self->len==1) {
        litem_402=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1300, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_402->prev=self->head;
        litem_402->next=((void*)0);
        __dec_obj145=litem_402->item;
        litem_402->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_402;
        self->head->next=litem_402;
    }
    else {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1310, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
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
struct sSemicolonNode* result_425;
void* __right_value356 = (void*)0;
char* __dec_obj150;
struct sSemicolonNode* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_425=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode", sSemicolonNode_finalize, sSemicolonNode_clone));
    if(    self!=((void*)0)) {
        result_425->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result_425->sname;
        result_425->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->sline_real=self->sline_real;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_425;
    come_call_finalizer3(result_425,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_431;
struct sVarTable* old_table_432;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sVarTable* __dec_obj153;
struct sVarTable* current_loop_vtable_433;
struct list$1voidph* param_types__434;
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
struct list$1voidph* right_value_objects_451;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct list$1voidph* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
int stack_num_before_452;
int sline_453;
void* __right_value368 = (void*)0;
char* sname_454;
void* __right_value369 = (void*)0;
char* __dec_obj157;
_Bool Value_455;
void* __right_value370 = (void*)0;
struct CVALUE* come_value_456;
void* __right_value376 = (void*)0;
struct CVALUE* come_value2_457;
void* __right_value377 = (void*)0;
char* __dec_obj162;
void* __right_value378 = (void*)0;
struct CVALUE* come_value2_459;
struct sVar* var__460;
void* __right_value379 = (void*)0;
struct CVALUE* come_value3_461;
void* __right_value380 = (void*)0;
_Bool _if_conditional2;
void* __right_value381 = (void*)0;
struct sType* __dec_obj163;
void* __right_value382 = (void*)0;
char* c_value_466;
void* __right_value383 = (void*)0;
char* __dec_obj164;
void* __right_value384 = (void*)0;
char* __dec_obj165;
void* __right_value385 = (void*)0;
char* __dec_obj166;
_Bool Value_467;
void* __right_value386 = (void*)0;
char* __dec_obj167;
struct list$1voidph* __dec_obj168;
void* __if_result__0_470 = (void*)0;
struct list$1sVarph* o2_saved_471;
struct sVar* it_474;
struct list$1sVarph* __dec_obj174;
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
            type_439=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value363=list$1voidphp_operator_load_element(param_types,i_436))))));
            come_call_finalizer3(__right_value363,(void*)0, 0, 1, 0, 0, (void*)0);
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
            right_value_objects_451=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj154=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 492, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
            come_call_finalizer3(__dec_obj154,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj155=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj156=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_452=list$1CVALUEphp_length(info->stack);
            sline_453=info->sline;
            sname_454=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_448->sline(node_448->_protocol_obj);
            __dec_obj157=info->sname;
            info->sname=(char*)come_increment_ref_count(node_448->sname(node_448->_protocol_obj));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_444==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_455=node_compile(node_448,info);
                if(                !Value_455) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_452+1) {
                    come_value_456=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_456->type->mClass->mName,"void")&&come_value_456->type->mPointerNum==0) {
                        come_value2_457=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_456));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_457));
                        __dec_obj162=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_457->c_value));
                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_457,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_459=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_456));
                        var__460=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__460) {
                            come_value3_461=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0));
                            if(                            var__460->mType->mClass=="void"&&var__460->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__460->mType,((struct sType*)(__right_value380=come_call_cloner(sType_clone, come_value_456->type))),come_value3_461,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj163=var__460->mType;
                            var__460->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_456->type));
                            come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_456->type->mHeap) {
                                c_value_466=(char*)come_increment_ref_count(increment_ref_count_object(come_value_456->type,come_value_456->c_value,info));
                                __dec_obj164=come_value2_459->c_value;
                                come_value2_459->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__460->mCValueName,c_value_466));
                                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_466 = come_decrement_ref_count2(c_value_466, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj165=come_value2_459->c_value;
                                come_value2_459->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__460->mCValueName,come_value_456->c_value));
                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_461,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_459));
                        __dec_obj166=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_459->c_value));
                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_467=node_compile(node_448,info);
                if(                !Value_467) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_453;
            __dec_obj167=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_454));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_452);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj168=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_451);
            come_call_finalizer3(__dec_obj168,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            i_444++;
            come_call_finalizer3(right_value_objects_451,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_454 = come_decrement_ref_count2(sname_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_445,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_443==0) {
            for(            o2_saved_471=(struct list$1sVarph*)come_increment_ref_count((info->match_it_var)),it_474=list$1sVarphp_begin((o2_saved_471));            !list$1sVarphp_end((o2_saved_471));            it_474=list$1sVarphp_next((o2_saved_471))            ){
                free_object(it_474->mType,it_474->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_471,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj174=info->match_it_var;
            __if_result__0_470=(void*)((struct list$1sVarph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj174,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_470,list$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_440;
int i_441;
void* __result289__;
void* default_value_442;
void* __result290__;
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
    memset(&default_value_442,0,sizeof(void*));
    __result290__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_442);
    come_call_finalizer3(default_value_442, (void*)0, 0, 0, 1, 0, (void*)0);
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

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result297__;
void* __right_value371 = (void*)0;
struct CVALUE* result_458;
void* __right_value372 = (void*)0;
char* __dec_obj158;
void* __right_value373 = (void*)0;
struct sType* __dec_obj159;
void* __right_value374 = (void*)0;
char* __dec_obj160;
void* __right_value375 = (void*)0;
char* __dec_obj161;
struct CVALUE* __result298__;
    if(    self==(void*)0) {
        __result297__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    result_458=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj158=result_458->c_value;
        result_458->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj159=result_458->type;
        result_458->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_458->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_458->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj160=result_458->c_value_without_right_value_objects;
        result_458->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj161=result_458->c_value_without_cast_object_value;
        result_458->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result298__ = gComeFunResultObject = __result_obj__ = result_458;
    come_call_finalizer3(result_458,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
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
    if(    !list$1voidphp_equals(left->mFields,right->mFields)) {
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

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_462;
struct list_item$1voidph* it2_463;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_462=left->head;
    it2_463=right->head;
    while(it_462!=((void*)0)) {
        if(        !voidp_equals(it_462->item,it2_463->item)) {
            return (_Bool)0;
        }
        it_462=it_462->next;
        it2_463=it2_463->next;
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
    if(    list$1voidphp_operator_not_equals(left->mFields,right->mFields)) {
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

static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right){
    return !list$1voidphp_operator_equals(left,right);
}

static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_464;
struct list_item$1voidph* it2_465;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_464=left->head;
    it2_465=right->head;
    while(it_464!=((void*)0)) {
        if(        !(voidp_operator_equals(it_464->item,it2_465->item))) {
            return (_Bool)0;
        }
        it_464=it_464->next;
        it2_465=it2_465->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_468;
struct list_item$1voidph* prev_it_469;
struct list$1voidph* __result299__;
    it_468=self->head;
    while(it_468!=((void*)0)) {
        prev_it_469=it_468;
        it_468=it_468->next;
        come_call_finalizer3(prev_it_469,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static struct sVar* list$1sVarphp_begin(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_472;
struct sVar* __result300__;
struct sVar* __result301__;
struct sVar* result_473;
struct sVar* __result302__;
result_472 = (void*)0;
result_473 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_472,0,sizeof(struct sVar*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_472;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->head;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_473,0,sizeof(struct sVar*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_473;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static _Bool list$1sVarphp_end(struct list$1sVarph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVarphp_next(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct sVar* result_475;
struct sVar* __result303__;
struct sVar* __result304__;
struct sVar* result_476;
struct sVar* __result305__;
result_475 = (void*)0;
result_476 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_475,0,sizeof(struct sVar*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_475;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_476,0,sizeof(struct sVar*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_476;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_477;
struct list_item$1sVarph* prev_it_478;
    it_477=self->head;
    while(it_477!=((void*)0)) {
        prev_it_478=it_477;
        it_477=it_477->next;
        come_call_finalizer3(prev_it_478,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj169;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj169=self->item;
            come_call_finalizer3(__dec_obj169,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj170;
char* __dec_obj171;
struct sType* __dec_obj172;
char* __dec_obj173;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj170=self->mName;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj171=self->mCValueName;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj172=self->mType;
            come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj173=self->mFunName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_479;
struct list_item$1sVarph* prev_it_480;
    it_479=self->head;
    while(it_479!=((void*)0)) {
        prev_it_480=it_479;
        it_479=it_479->next;
        come_call_finalizer3(prev_it_480,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* head_481;
_Bool dquort_482;
_Bool squort_483;
int sline_484;
int nest_485;
char* tail_486;
void* __right_value387 = (void*)0;
char* buf_487;
void* __right_value388 = (void*)0;
char* __result306__;
    head_481=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_482=(_Bool)0;
        squort_483=(_Bool)0;
        sline_484=0;
        nest_485=0;
        while(1) {
            if(            dquort_482) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_484);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_482=!dquort_482;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_484);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_484);
                        exit(2);
                    }
                }
            }
            else if(            squort_483) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_484);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_483=!squort_483;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_484);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_484);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_484=info->sline;
                info->p++;
                squort_483=!squort_483;
            }
            else if(            *info->p==34) {
                sline_484=info->sline;
                info->p++;
                dquort_482=!dquort_482;
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
                nest_485++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_485==0) {
                    break;
                }
                nest_485--;
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
    tail_486=info->p;
    buf_487=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_486-head_481+1)), "05function.c", 765, "char*", (void*)0, (void*)0));
    memcpy(buf_487,head_481,tail_486-head_481);
    buf_487[tail_486-head_481]=0;
    skip_spaces_and_lf(info);
    __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string(buf_487)));
    buf_487 = come_decrement_ref_count2(buf_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_488;
char* p3_489;
int i_490;
    terminated_488=(_Bool)0;
    p3_489=p;
    for(    i_490=0;    i_490<strlen(p2);    i_490++    ){
        if(        *p3_489==0) {
            terminated_488=(_Bool)1;
            break;
        }
        p3_489++;
    }
    return !terminated_488&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct buffer* asm_fun_name_491;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct buffer* result_492;
char* head_493;
int brace_num_494;
char* tail_495;
char* head_496;
int brace_num_497;
char* tail_498;
char* head_499;
char* tail_500;
char* head_501;
char* tail_502;
int len_503;
_Bool in_dquort_504;
int brace_num_505;
char* head_506;
char* tail_507;
char* head_508;
char* tail_509;
char* head_510;
char* tail_511;
char* head_512;
int nest_513;
char* tail_514;
char* head_515;
int nest_516;
char* tail_517;
char* head_518;
int nest_519;
char* tail_520;
char* head_521;
int nest_522;
char* tail_523;
char* head_524;
int nest_525;
char* tail_526;
char* head_527;
char* tail_528;
char* head_529;
char* tail_530;
char* head_531;
char* tail_532;
char* head_533;
char* tail_534;
char* head_535;
char* tail_536;
char* head_537;
int brace_num_538;
char* tail_539;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple2$2charphcharph* __result310__;
    asm_fun_name_491=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer*", (void*)0, (void*)0))));
    result_492=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer*", (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_493=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_494=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_494++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_494--;
                        if(                        brace_num_494==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_495=info->p;
            buffer_append(result_492,head_493,tail_495-head_493);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_496=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_497=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_497++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_497--;
                        if(                        brace_num_497==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_498=info->p;
            buffer_append(result_492,head_496,tail_498-head_496);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_499=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_500=info->p;
            buffer_append(result_492,head_499,tail_500-head_499);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_501=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_502=info->p;
            buffer_append(result_492,head_501,tail_502-head_501);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_503=0;
            if(            *info->p==40) {
                in_dquort_504=(_Bool)0;
                brace_num_505=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_504=!in_dquort_504;
                    }
                    else if(                    in_dquort_504) {
                        buffer_append_char(asm_fun_name_491,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_505++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_505--;
                        if(                        brace_num_505==0) {
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
            head_506=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_507=info->p;
            buffer_append(result_492,head_506,tail_507-head_506);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_508=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_509=info->p;
            buffer_append(result_492,head_508,tail_509-head_508);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_510=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_511=info->p;
            buffer_append(result_492,head_510,tail_511-head_510);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_512=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_513=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_513++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_513--;
                        if(                        nest_513==0) {
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
            tail_514=info->p;
            buffer_append(result_492,head_512,tail_514-head_512);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_515=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_516=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_516++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_516--;
                        if(                        nest_516==0) {
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
            tail_517=info->p;
            buffer_append(result_492,head_515,tail_517-head_515);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_518=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_519=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_519--;
                        if(                        nest_519==0) {
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
            tail_520=info->p;
            buffer_append(result_492,head_518,tail_520-head_518);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_521=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_522=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_522++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_522--;
                        if(                        nest_522==0) {
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
            tail_523=info->p;
            buffer_append(result_492,head_521,tail_523-head_521);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_524=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_525=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_525++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_525--;
                        if(                        nest_525==0) {
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
            tail_526=info->p;
            buffer_append(result_492,head_524,tail_526-head_524);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_527=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_528=info->p;
            buffer_append(result_492,head_527,tail_528-head_527);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_529=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_530=info->p;
            buffer_append(result_492,head_529,tail_530-head_529);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_531=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_532=info->p;
            buffer_append(result_492,head_531,tail_532-head_531);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_533=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_534=info->p;
            buffer_append(result_492,head_533,tail_534-head_533);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_535=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_536=info->p;
            buffer_append(result_492,head_535,tail_536-head_535);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_537=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_538=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_538++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_538--;
                        if(                        brace_num_538==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_539=info->p;
            buffer_append(result_492,head_537,tail_539-head_537);
        }
        else {
            break;
        }
    }
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value399=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_491)),(char*)come_increment_ref_count(buffer_to_string(result_492)))));
    come_call_finalizer3(asm_fun_name_491,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_492,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value399,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj175;
char* __dec_obj176;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj175=self->v1;
            __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj176=self->v2;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphcharph* __result307__;
void* __right_value395 = (void*)0;
struct tuple2$2charphcharph* result_540;
void* __right_value396 = (void*)0;
char* __dec_obj177;
void* __right_value397 = (void*)0;
char* __dec_obj178;
struct tuple2$2charphcharph* __result308__;
    if(    self==(void*)0) {
        __result307__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_540=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj177=result_540->v1;
        result_540->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj178=result_540->v2;
        result_540->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_540;
    come_call_finalizer3(result_540,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj179;
char* __dec_obj180;
struct tuple2$2charphcharph* __result309__;
    __dec_obj179=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj180=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
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
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct buffer* asm_fun_name_541;
void* __right_value402 = (void*)0;
char* attribute_542;
int nest_543;
int nest_544;
int nest_545;
int nest_546;
int nest_547;
void* __right_value403 = (void*)0;
char* __dec_obj183;
int len_548;
_Bool in_dquort_549;
int brace_num_550;
int brace_num_551;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
struct tuple2$2charphcharph* __result311__;
    asm_fun_name_541=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer*", (void*)0, (void*)0))));
    attribute_542=(char*)come_increment_ref_count(xsprintf(""));
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
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_544=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_544++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_544--;
                        if(                        nest_544==0) {
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
                nest_545=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_545++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_545--;
                        if(                        nest_545==0) {
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
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_547=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_547--;
                        if(                        nest_547==0) {
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
            __dec_obj183=attribute_542;
            attribute_542=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_548=0;
            if(            *info->p==40) {
                in_dquort_549=(_Bool)0;
                brace_num_550=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_549=!in_dquort_549;
                    }
                    else if(                    in_dquort_549) {
                        buffer_append_char(asm_fun_name_541,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_550++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_550--;
                        if(                        brace_num_550==0) {
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
                brace_num_551=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_551++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_551--;
                        if(                        brace_num_551==0) {
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
    __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value406=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_541)),(char*)come_increment_ref_count(attribute_542))));
    come_call_finalizer3(asm_fun_name_541,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_542 = come_decrement_ref_count2(attribute_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value406,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value407 = (void*)0;
char* __dec_obj184;
char* head_552;
int head_sline_553;
void* __right_value408 = (void*)0;
char* buf_554;
void* __right_value409 = (void*)0;
struct sNode* node_555;
_Bool Value_556;
    while(*info->p) {
        __dec_obj184=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_552=info->p;
        head_sline_553=info->sline;
        buf_554=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            buf_554 = come_decrement_ref_count2(buf_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        node_555=(struct sNode*)come_increment_ref_count(top_level_v99(buf_554,head_552,head_sline_553,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_555!=((void*)0)) {
            Value_556=node_compile(node_555,info);
            if(            !Value_556) {
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
            buf_554 = come_decrement_ref_count2(buf_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        buf_554 = come_decrement_ref_count2(buf_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_555) { node_555 = come_decrement_ref_count2(node_555, ((struct sNode*)node_555)->finalize, ((struct sNode*)node_555)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value410 = (void*)0;
char* name_557;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct sType* result_type_558;
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
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct sType* __list_values1___559[7];
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct list$1sTypeph* param_types_569;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
char* __list_values2___570[7];
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct list$1charph* param_names_573;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct list$1charph* param_default_parametors_574;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct sFun* main_fun_575;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
char* name_597;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* result_type_598;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
struct sType* __list_values3___599[1];
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct list$1sTypeph* param_types_600;
void* __right_value467 = (void*)0;
char* __list_values4___601[1];
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1charph* param_names_602;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct list$1charph* param_default_parametors_603;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
struct sFun* main_fun_604;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
char* name_605;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* result_type_606;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __list_values5___607[7];
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1sTypeph* param_types_608;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
char* __list_values6___609[7];
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct list$1charph* param_names_610;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct list$1charph* param_default_parametors_611;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct sFun* main_fun_612;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
char* name_613;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* result_type_614;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sType* __list_values7___615[5];
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct list$1sTypeph* param_types_616;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
char* __list_values8___617[5];
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1charph* param_names_618;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct list$1charph* param_default_parametors_619;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sFun* main_fun_620;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
char* name_621;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sType* result_type_622;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct sType* __list_values9___623[1];
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct list$1sTypeph* param_types_624;
void* __right_value554 = (void*)0;
char* __list_values10___625[1];
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct list$1charph* param_names_626;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct list$1charph* param_default_parametors_627;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct sFun* main_fun_628;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
char* name_629;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
struct sType* result_type_630;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* __list_values11___631[4];
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sTypeph* param_types_632;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
char* __list_values12___633[4];
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct list$1charph* param_names_634;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct list$1charph* param_default_parametors_635;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct sFun* main_fun_636;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
char* name_637;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sType* result_type_638;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
void* __right_value605 = (void*)0;
struct sType* __list_values13___639[3];
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
struct list$1sTypeph* param_types_640;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
char* __list_values14___641[3];
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct list$1charph* param_names_642;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1charph* param_default_parametors_643;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sFun* main_fun_644;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
char* name_645;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* result_type_646;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sType* __list_values15___647[1];
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct list$1sTypeph* param_types_648;
void* __right_value629 = (void*)0;
char* __list_values16___649[1];
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct list$1charph* param_names_650;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1charph* param_default_parametors_651;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sFun* main_fun_652;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* name_653;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sType* result_type_654;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sType* __list_values17___655[3];
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct list$1sTypeph* param_types_656;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
char* __list_values18___657[3];
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct list$1charph* param_names_658;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct list$1charph* param_default_parametors_659;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct sFun* main_fun_660;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
char* name_661;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sType* result_type_662;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
struct list$1voidph* param_types_663;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct list$1charph* param_names_664;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
struct list$1charph* param_default_parametors_665;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
struct sFun* main_fun_666;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
char* name_667;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct sType* result_type_668;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sType* __list_values19___669[4];
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct list$1sTypeph* param_types_670;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
char* __list_values20___671[4];
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
struct list$1charph* param_names_672;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
struct list$1charph* param_default_parametors_673;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct sFun* main_fun_674;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
char* name_675;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
struct sType* result_type_676;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
struct list$1voidph* param_types_677;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct list$1charph* param_names_678;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
struct list$1charph* param_default_parametors_679;
void* __right_value719 = (void*)0;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sFun* fun_680;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
char* name_681;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct sType* result_type_682;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
struct list$1voidph* param_types_683;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct list$1charph* param_names_684;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct list$1charph* param_default_parametors_685;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
struct sFun* fun_686;
void* __right_value741 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_557=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_558=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
        param_types_569=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___559[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value414=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values1___559[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value416=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values1___559[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value418=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info)))),
__list_values1___559[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value420=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values1___559[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value422=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info)))),
__list_values1___559[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value424=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values1___559[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value426=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),7,__list_values1___559)));
        come_call_finalizer3(__right_value414,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value416,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value418,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value420,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value424,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value426,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_573=(struct list$1charph*)come_increment_ref_count((__list_values2___570[0]=(char*)come_increment_ref_count(((char*)(__right_value433=__builtin_string("count")))),
__list_values2___570[1]=(char*)come_increment_ref_count(((char*)(__right_value434=__builtin_string("size")))),
__list_values2___570[2]=(char*)come_increment_ref_count(((char*)(__right_value435=__builtin_string("sname")))),
__list_values2___570[3]=(char*)come_increment_ref_count(((char*)(__right_value436=__builtin_string("sline")))),
__list_values2___570[4]=(char*)come_increment_ref_count(((char*)(__right_value437=__builtin_string("class_name")))),
__list_values2___570[5]=(char*)come_increment_ref_count(((char*)(__right_value438=__builtin_string("finalizer_fun")))),
__list_values2___570[6]=(char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("cloner_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),7,__list_values2___570)));
        __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_574=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_574,((void*)0));
        list$1charphp_push_back(param_default_parametors_574,((void*)0));
        list$1charphp_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_574,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_575=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_557),(struct sType*)come_increment_ref_count(result_type_558),(struct list$1sTypeph*)come_increment_ref_count(param_types_569),(struct list$1charph*)come_increment_ref_count(param_names_573),(struct list$1charph*)come_increment_ref_count(param_default_parametors_574),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_557)),(struct sFun*)come_increment_ref_count(main_fun_575));
        name_557 = come_decrement_ref_count2(name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_558,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_569,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_573,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_575,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_597=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_598=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
        param_types_600=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___599[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value464=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values3___599)));
        come_call_finalizer3(__right_value464,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_602=(struct list$1charph*)come_increment_ref_count((__list_values4___601[0]=(char*)come_increment_ref_count(((char*)(__right_value467=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values4___601)));
        __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_603=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_604=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_597),(struct sType*)come_increment_ref_count(result_type_598),(struct list$1sTypeph*)come_increment_ref_count(param_types_600),(struct list$1charph*)come_increment_ref_count(param_names_602),(struct list$1charph*)come_increment_ref_count(param_default_parametors_603),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_597)),(struct sFun*)come_increment_ref_count(main_fun_604));
        name_597 = come_decrement_ref_count2(name_597, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_598,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_600,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_602,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_603,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_604,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_605=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_606=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
        param_types_608=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___607[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value483=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values5___607[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value485=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values5___607[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values5___607[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value489=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values5___607[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value491=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values5___607[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value493=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values5___607[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value495=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),7,__list_values5___607)));
        come_call_finalizer3(__right_value483,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value485,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value489,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value491,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value495,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_610=(struct list$1charph*)come_increment_ref_count((__list_values6___609[0]=(char*)come_increment_ref_count(((char*)(__right_value498=__builtin_string("fun")))),
__list_values6___609[1]=(char*)come_increment_ref_count(((char*)(__right_value499=__builtin_string("mem")))),
__list_values6___609[2]=(char*)come_increment_ref_count(((char*)(__right_value500=__builtin_string("protocol_fun")))),
__list_values6___609[3]=(char*)come_increment_ref_count(((char*)(__right_value501=__builtin_string("protocol_obj")))),
__list_values6___609[4]=(char*)come_increment_ref_count(((char*)(__right_value502=__builtin_string("call_finalizer_only")))),
__list_values6___609[5]=(char*)come_increment_ref_count(((char*)(__right_value503=__builtin_string("no_decrement")))),
__list_values6___609[6]=(char*)come_increment_ref_count(((char*)(__right_value504=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),7,__list_values6___609)));
        __right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value499 = come_decrement_ref_count2(__right_value499, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_611=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_612=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_605),(struct sType*)come_increment_ref_count(result_type_606),(struct list$1sTypeph*)come_increment_ref_count(param_types_608),(struct list$1charph*)come_increment_ref_count(param_names_610),(struct list$1charph*)come_increment_ref_count(param_default_parametors_611),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_605)),(struct sFun*)come_increment_ref_count(main_fun_612));
        name_605 = come_decrement_ref_count2(name_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_606,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_608,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_610,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_611,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_612,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_613=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_614=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
        param_types_616=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___615[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value520=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values7___615[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value522=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values7___615[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values7___615[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value526=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone)),"bool",(_Bool)0,info)))),
__list_values7___615[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value528=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),5,__list_values7___615)));
        come_call_finalizer3(__right_value520,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value522,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value528,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_618=(struct list$1charph*)come_increment_ref_count((__list_values8___617[0]=(char*)come_increment_ref_count(((char*)(__right_value531=__builtin_string("mem")))),
__list_values8___617[1]=(char*)come_increment_ref_count(((char*)(__right_value532=__builtin_string("protocol_fun")))),
__list_values8___617[2]=(char*)come_increment_ref_count(((char*)(__right_value533=__builtin_string("protocol_obj")))),
__list_values8___617[3]=(char*)come_increment_ref_count(((char*)(__right_value534=__builtin_string("no_decrement")))),
__list_values8___617[4]=(char*)come_increment_ref_count(((char*)(__right_value535=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),5,__list_values8___617)));
        __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value532 = come_decrement_ref_count2(__right_value532, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value534 = come_decrement_ref_count2(__right_value534, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_619=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_620=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_613),(struct sType*)come_increment_ref_count(result_type_614),(struct list$1sTypeph*)come_increment_ref_count(param_types_616),(struct list$1charph*)come_increment_ref_count(param_names_618),(struct list$1charph*)come_increment_ref_count(param_default_parametors_619),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_613)),(struct sFun*)come_increment_ref_count(main_fun_620));
        name_613 = come_decrement_ref_count2(name_613, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_614,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_616,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_618,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_619,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_620,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_621=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_622=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
        param_types_624=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___623[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value551=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values9___623)));
        come_call_finalizer3(__right_value551,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_626=(struct list$1charph*)come_increment_ref_count((__list_values10___625[0]=(char*)come_increment_ref_count(((char*)(__right_value554=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values10___625)));
        __right_value554 = come_decrement_ref_count2(__right_value554, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_627=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_628=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_621),(struct sType*)come_increment_ref_count(result_type_622),(struct list$1sTypeph*)come_increment_ref_count(param_types_624),(struct list$1charph*)come_increment_ref_count(param_names_626),(struct list$1charph*)come_increment_ref_count(param_default_parametors_627),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_621)),(struct sFun*)come_increment_ref_count(main_fun_628));
        name_621 = come_decrement_ref_count2(name_621, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_622,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_624,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_626,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_628,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_629=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_630=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
        param_types_632=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___631[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values11___631[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info)))),
__list_values11___631[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value574=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values11___631[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value576=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),4,__list_values11___631)));
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value574,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_634=(struct list$1charph*)come_increment_ref_count((__list_values12___633[0]=(char*)come_increment_ref_count(((char*)(__right_value579=__builtin_string("block")))),
__list_values12___633[1]=(char*)come_increment_ref_count(((char*)(__right_value580=__builtin_string("sname")))),
__list_values12___633[2]=(char*)come_increment_ref_count(((char*)(__right_value581=__builtin_string("sline")))),
__list_values12___633[3]=(char*)come_increment_ref_count(((char*)(__right_value582=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),4,__list_values12___633)));
        __right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_635=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_635,((void*)0));
        list$1charphp_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_635,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_636=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_629),(struct sType*)come_increment_ref_count(result_type_630),(struct list$1sTypeph*)come_increment_ref_count(param_types_632),(struct list$1charph*)come_increment_ref_count(param_names_634),(struct list$1charph*)come_increment_ref_count(param_default_parametors_635),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_629)),(struct sFun*)come_increment_ref_count(main_fun_636));
        name_629 = come_decrement_ref_count2(name_629, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_630,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_632,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_634,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_636,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_637=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_638=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
        param_types_640=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___639[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value601=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values13___639[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value603=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values13___639[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value605=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),3,__list_values13___639)));
        come_call_finalizer3(__right_value601,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value603,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value605,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_642=(struct list$1charph*)come_increment_ref_count((__list_values14___641[0]=(char*)come_increment_ref_count(((char*)(__right_value608=__builtin_string("b")))),
__list_values14___641[1]=(char*)come_increment_ref_count(((char*)(__right_value609=__builtin_string("c")))),
__list_values14___641[2]=(char*)come_increment_ref_count(((char*)(__right_value610=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),3,__list_values14___641)));
        __right_value608 = come_decrement_ref_count2(__right_value608, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value610 = come_decrement_ref_count2(__right_value610, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_643=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_644=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_637),(struct sType*)come_increment_ref_count(result_type_638),(struct list$1sTypeph*)come_increment_ref_count(param_types_640),(struct list$1charph*)come_increment_ref_count(param_names_642),(struct list$1charph*)come_increment_ref_count(param_default_parametors_643),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_637)),(struct sFun*)come_increment_ref_count(main_fun_644));
        name_637 = come_decrement_ref_count2(name_637, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_638,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_640,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_642,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_644,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_645=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_646=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info));
        param_types_648=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___647[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value626=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values15___647)));
        come_call_finalizer3(__right_value626,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_650=(struct list$1charph*)come_increment_ref_count((__list_values16___649[0]=(char*)come_increment_ref_count(((char*)(__right_value629=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values16___649)));
        __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_651=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_652=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_645),(struct sType*)come_increment_ref_count(result_type_646),(struct list$1sTypeph*)come_increment_ref_count(param_types_648),(struct list$1charph*)come_increment_ref_count(param_names_650),(struct list$1charph*)come_increment_ref_count(param_default_parametors_651),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_645)),(struct sFun*)come_increment_ref_count(main_fun_652));
        name_645 = come_decrement_ref_count2(name_645, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_646,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_648,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_650,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_652,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_653=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_654=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
        param_types_656=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___655[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value645=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values17___655[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value647=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values17___655[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value649=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),3,__list_values17___655)));
        come_call_finalizer3(__right_value645,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value647,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value649,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_658=(struct list$1charph*)come_increment_ref_count((__list_values18___657[0]=(char*)come_increment_ref_count(((char*)(__right_value652=xsprintf("come_malloc")))),
__list_values18___657[1]=(char*)come_increment_ref_count(((char*)(__right_value653=xsprintf("come_debug")))),
__list_values18___657[2]=(char*)come_increment_ref_count(((char*)(__right_value654=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),3,__list_values18___657)));
        __right_value652 = come_decrement_ref_count2(__right_value652, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value653 = come_decrement_ref_count2(__right_value653, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value654 = come_decrement_ref_count2(__right_value654, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_659=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_659,((void*)0));
        main_fun_660=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_653),(struct sType*)come_increment_ref_count(result_type_654),(struct list$1sTypeph*)come_increment_ref_count(param_types_656),(struct list$1charph*)come_increment_ref_count(param_names_658),(struct list$1charph*)come_increment_ref_count(param_default_parametors_659),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_653)),(struct sFun*)come_increment_ref_count(main_fun_660));
        name_653 = come_decrement_ref_count2(name_653, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_654,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_656,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_658,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_660,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_661=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_662=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
        param_types_663=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1728, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
        param_names_664=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_665=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_666=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_661),(struct sType*)come_increment_ref_count(result_type_662),(struct list$1voidph*)come_increment_ref_count(param_types_663),(struct list$1charph*)come_increment_ref_count(param_names_664),(struct list$1charph*)come_increment_ref_count(param_default_parametors_665),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_661)),(struct sFun*)come_increment_ref_count(main_fun_666));
        name_661 = come_decrement_ref_count2(name_661, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_662,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_663,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_664,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_665,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_666,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_667=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_668=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info));
        param_types_670=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___669[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value686=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone)),"void*",(_Bool)0,info)))),
__list_values19___669[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value688=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info)))),
__list_values19___669[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value690=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
__list_values19___669[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value692=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),4,__list_values19___669)));
        come_call_finalizer3(__right_value686,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value688,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value690,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value692,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_672=(struct list$1charph*)come_increment_ref_count((__list_values20___671[0]=(char*)come_increment_ref_count(((char*)(__right_value695=__builtin_string("mem")))),
__list_values20___671[1]=(char*)come_increment_ref_count(((char*)(__right_value696=__builtin_string("sname")))),
__list_values20___671[2]=(char*)come_increment_ref_count(((char*)(__right_value697=__builtin_string("sline")))),
__list_values20___671[3]=(char*)come_increment_ref_count(((char*)(__right_value698=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),4,__list_values20___671)));
        __right_value695 = come_decrement_ref_count2(__right_value695, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value696 = come_decrement_ref_count2(__right_value696, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value697 = come_decrement_ref_count2(__right_value697, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value698 = come_decrement_ref_count2(__right_value698, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_673=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0))));
        main_fun_674=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_667),(struct sType*)come_increment_ref_count(result_type_668),(struct list$1sTypeph*)come_increment_ref_count(param_types_670),(struct list$1charph*)come_increment_ref_count(param_names_672),(struct list$1charph*)come_increment_ref_count(param_default_parametors_673),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_667)),(struct sFun*)come_increment_ref_count(main_fun_674));
        name_667 = come_decrement_ref_count2(name_667, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_668,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_670,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_672,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_673,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_674,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_675=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_676=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
        param_types_677=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1758, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
        param_names_678=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_679=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0))));
        fun_680=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_675),(struct sType*)come_increment_ref_count(result_type_676),(struct list$1voidph*)come_increment_ref_count(param_types_677),(struct list$1charph*)come_increment_ref_count(param_names_678),(struct list$1charph*)come_increment_ref_count(param_default_parametors_679),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_675)),(struct sFun*)come_increment_ref_count(fun_680));
        name_675 = come_decrement_ref_count2(name_675, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_676,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_677,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_678,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_679,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_680,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_681=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_682=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
        param_types_683=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1790, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
        param_names_684=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0))));
        param_default_parametors_685=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0))));
        fun_686=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_681),(struct sType*)come_increment_ref_count(result_type_682),(struct list$1voidph*)come_increment_ref_count(param_types_683),(struct list$1charph*)come_increment_ref_count(param_names_684),(struct list$1charph*)come_increment_ref_count(param_default_parametors_685),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_681)),(struct sFun*)come_increment_ref_count(fun_686));
        name_681 = come_decrement_ref_count2(name_681, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_682,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_683,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_684,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_685,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_686,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_560;
struct list$1sTypeph* __result313__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_560=0;    i_560<num_value;    i_560++    ){
        list$1sTypephp_push_back(self,values[i_560]);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value427 = (void*)0;
struct list_item$1sTypeph* litem_561;
struct sType* __dec_obj185;
void* __right_value428 = (void*)0;
struct list_item$1sTypeph* litem_562;
struct sType* __dec_obj186;
void* __right_value429 = (void*)0;
struct list_item$1sTypeph* litem_563;
struct sType* __dec_obj187;
struct list$1sTypeph* __result312__;
    if(    self->len==0) {
        litem_561=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value427=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_561->prev=((void*)0);
        litem_561->next=((void*)0);
        __dec_obj185=litem_561->item;
        litem_561->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj185,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_561;
        self->head=litem_561;
    }
    else if(    self->len==1) {
        litem_562=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value428=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_562->prev=self->head;
        litem_562->next=((void*)0);
        __dec_obj186=litem_562->item;
        litem_562->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_562;
        self->head->next=litem_562;
    }
    else {
        litem_563=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value429=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_563->prev=self->tail;
        litem_563->next=((void*)0);
        __dec_obj187=litem_563->item;
        litem_563->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_563;
        self->tail=litem_563;
    }
    self->len++;
    __result312__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_564;
struct list_item$1sTypeph* prev_it_565;
    it_564=self->head;
    while(it_564!=((void*)0)) {
        prev_it_565=it_564;
        it_564=it_564->next;
        come_call_finalizer3(prev_it_565,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj188;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj188=self->item;
            come_call_finalizer3(__dec_obj188,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_566;
struct list_item$1sTypeph* prev_it_567;
    it_566=self->head;
    while(it_566!=((void*)0)) {
        prev_it_567=it_566;
        it_566=it_566->next;
        come_call_finalizer3(prev_it_567,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result314__;
void* __right_value430 = (void*)0;
struct list$1sTypeph* result_568;
struct list$1sTypeph* __result315__;
    if(    self==(void*)0) {
        __result314__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    result_568=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone));
    if(    self!=((void*)0)) {
        result_568->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_568->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_568->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_568->it=self->it;
    }
    __result315__ = gComeFunResultObject = __result_obj__ = result_568;
    come_call_finalizer3(result_568,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_571;
struct list$1charph* __result316__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_571=0;    i_571<num_value;    i_571++    ){
        list$1charphp_push_back(self,values[i_571]);
    }
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result317__;
void* __right_value440 = (void*)0;
struct list$1charph* result_572;
struct list$1charph* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_572=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph", list$1charph_finalize, list$1charph_clone));
    if(    self!=((void*)0)) {
        result_572->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_572->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_572->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_572->it=self->it;
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_572;
    come_call_finalizer3(result_572,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_593;
unsigned int it_594;
_Bool same_key_exist_595;
char* it2_596;
struct map$2charphsFunph* __result329__;
    if(    self->len*10>=self->size) {
        map$2charphsFunphp_rehash(self);
    }
    hash_593=charp_get_hash_key(key)%self->size;
    it_594=hash_593;
    while((_Bool)1) {
        if(        self->item_existance[it_594]) {
            if(            charp_equals(self->keys[it_594],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_594]);
                    self->keys[it_594] = come_decrement_ref_count2(self->keys[it_594], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_594]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_594]);
                    self->keys[it_594]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_594],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_594]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_594]=item;
                }
                break;
            }
            it_594++;
            if(            it_594>=self->size) {
                it_594=0;
            }
            else if(            it_594==hash_593) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_594]=(_Bool)1;
            if(            1) {
                self->keys[it_594]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_594]=key;
            }
            if(            1) {
                self->items[it_594]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_594]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_595=(_Bool)0;
    for(    it2_596=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_596=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_596,key)) {
            same_key_exist_595=(_Bool)1;
        }
    }
    if(    !same_key_exist_595) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result329__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_576;
void* __right_value454 = (void*)0;
char** keys_577;
void* __right_value455 = (void*)0;
struct sFun** items_578;
void* __right_value456 = (void*)0;
_Bool* item_existance_579;
int len_580;
char* it_583;
struct sFun* default_value_586;
void* __right_value457 = (void*)0;
struct sFun* it2_587;
unsigned int hash_590;
int n_591;
struct sFun* default_value_592;
void* __right_value458 = (void*)0;
default_value_586 = (void*)0;
default_value_592 = (void*)0;
    size_576=self->size*10;
    keys_577=(char**)come_increment_ref_count(((char**)(__right_value454=(char**)come_calloc(1, sizeof(char*)*(1*(size_576)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_578=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value455=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_576)), "./comelang.h", 2694, "struct sFun**", (void*)0, (void*)0))));
    item_existance_579=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value456=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_576)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_580=0;
    for(    it_583=map$2charphsFunphp_begin(self);    !map$2charphsFunphp_end(self);    it_583=map$2charphsFunphp_next(self)    ){
        memset(&default_value_586,0,sizeof(struct sFun*));
        it2_587=((struct sFun*)(__right_value457=map$2charphsFunphp_at(self,it_583,default_value_586)));
        come_call_finalizer3(__right_value457,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_590=charp_get_hash_key(it_583)%size_576;
        n_591=hash_590;
        while((_Bool)1) {
            if(            item_existance_579[n_591]) {
                n_591++;
                if(                n_591>=size_576) {
                    n_591=0;
                }
                else if(                n_591==hash_590) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_579[n_591]=(_Bool)1;
                keys_577[n_591]=it_583;
                items_578[n_591]=((struct sFun*)(__right_value458=map$2charphsFunphp_at(self,it_583,default_value_592)));
                come_call_finalizer3(__right_value458,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_580++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_577;
    self->items=items_578;
    self->item_existance=item_existance_579;
    self->size=size_576;
    self->len=len_580;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_581;
char* __result319__;
char* __result320__;
char* result_582;
char* __result321__;
result_581 = (void*)0;
result_582 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_581,0,sizeof(char*));
        __result319__ = gComeFunResultObject = __result_obj__ = result_581;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result320__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    memset(&result_582,0,sizeof(char*));
    __result321__ = gComeFunResultObject = __result_obj__ = result_582;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_584;
char* __result322__;
char* __result323__;
char* result_585;
char* __result324__;
result_584 = (void*)0;
result_585 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_584,0,sizeof(char*));
        __result322__ = gComeFunResultObject = __result_obj__ = result_584;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result323__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    memset(&result_585,0,sizeof(char*));
    __result324__ = gComeFunResultObject = __result_obj__ = result_585;
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_588;
unsigned int it_589;
struct sFun* __result325__;
struct sFun* __result326__;
struct sFun* __result327__;
struct sFun* __result328__;
    hash_588=charp_get_hash_key(((char*)key))%self->size;
    it_589=hash_588;
    while((_Bool)1) {
        if(        self->item_existance[it_589]) {
            if(            charp_equals(self->keys[it_589],key)) {
                __result325__ = gComeFunResultObject = __result_obj__ = self->items[it_589];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result325__;
            }
            it_589++;
            if(            it_589>=self->size) {
                it_589=0;
            }
            else if(            it_589==hash_588) {
                __result326__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result326__;
            }
        }
        else {
            __result327__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result327__;
        }
    }
    __result328__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_687;
_Bool is_type_name_flag_688;
int sline_689;
_Bool define_struct_nobody_690;
char* p_691;
int sline_692;
void* __right_value742 = (void*)0;
char* word_693;
_Bool define_function_pointer_result_function_694;
_Bool define_variable_between_brace_695;
char* p_696;
void* __right_value743 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_697=0;
char* fun_name_698=0;
_Bool err_699=0;
void* __right_value744 = (void*)0;
char* word_700;
_Bool define_function_flag_701;
char* p_702;
void* __right_value745 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_703=0;
char* fun_name_704=0;
_Bool err_705=0;
char* word_706;
void* __right_value746 = (void*)0;
char* __dec_obj191;
void* __right_value747 = (void*)0;
char* __dec_obj192;
char* __dec_obj193;
void* __right_value748 = (void*)0;
char* __dec_obj194;
_Bool define_variable_707;
char* p_708;
void* __right_value749 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_709=0;
char* fun_name_710=0;
_Bool err_711=0;
void* __right_value750 = (void*)0;
char* word_712;
void* __right_value751 = (void*)0;
char* word_713;
char* p_714;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
char* word_715;
void* __right_value755 = (void*)0;
char* __dec_obj195;
void* __right_value756 = (void*)0;
char* word_716;
void* __right_value757 = (void*)0;
char* word_719;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct sNode* node_720;
struct sNode* __result331__;
void* __right_value760 = (void*)0;
struct sNode* __result332__;
char* header_head_721;
void* __right_value761 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_722=0;
char* fun_name_723=0;
_Bool err_724=0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct list$1voidph* param_types_725;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct list$1charph* param_names_726;
void* __right_value766 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_727=0;
char* param_name_728=0;
_Bool err_729=0;
void* __right_value770 = (void*)0;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
void* __right_value773 = (void*)0;
struct list$1voidph* param_types2_734;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct list$1charph* param_names2_735;
void* __right_value776 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_736=0;
char* param_name_737=0;
_Bool err_738=0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
char* header_tail_740;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sType* result_type2_741;
struct sType* __dec_obj199;
void* __right_value781 = (void*)0;
struct list$1voidph* __dec_obj200;
void* __right_value782 = (void*)0;
struct list$1charph* __dec_obj201;
_Bool var_args_742;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* header_buf_743;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct list$1charph* param_default_parametors_744;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sFun* fun_745;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sFun* fun2_749;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value844 = (void*)0;
struct sNode* __result362__;
void* __right_value845 = (void*)0;
struct sNode* node_785;
struct sNode* __result363__;
void* __right_value846 = (void*)0;
struct sNode* node_786;
struct sNode* __result364__;
void* __right_value847 = (void*)0;
struct sNode* node_787;
char* source_tail_788;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
struct buffer* header_789;
struct sNode* __result365__;
void* __right_value850 = (void*)0;
char* buf2_790;
void* __right_value851 = (void*)0;
struct sNode* __result366__;
    info->in_top_level=(_Bool)1;
    source_head_687=info->p;
    is_type_name_flag_688=is_type_name(buf,info);
    sline_689=info->sline;
    define_struct_nobody_690=(_Bool)0;
    {
        p_691=info->p;
        sline_692=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_693=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_690=(_Bool)1;
                }
                word_693 = come_decrement_ref_count2(word_693, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_692;
    }
    define_function_pointer_result_function_694=(_Bool)0;
    define_variable_between_brace_695=(_Bool)0;
    if(    is_type_name_flag_688) {
        p_696=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value743=backtrace_parse_type((_Bool)0,info)));
            result_type_697=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_698=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_699=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value743,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_694=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_700=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_700,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_695=(_Bool)1;
                            }
                        }
                        word_700 = come_decrement_ref_count2(word_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_697,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_698 = come_decrement_ref_count2(fun_name_698, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_689;
    }
    define_function_flag_701=(_Bool)0;
    if(    is_type_name_flag_688&&!define_function_pointer_result_function_694&&charp_operator_not_equals(buf,"__typeof__")) {
        p_702=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value745=backtrace_parse_type((_Bool)0,info)));
            result_type_703=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_704=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_705=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value745,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_703,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_704 = come_decrement_ref_count2(fun_name_704, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_706=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj191=word_706;
                word_706=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_706,"extern")) {
                    __dec_obj192=word_706;
                    word_706=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj193=word_706;
                word_706=((void*)0);
                __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_706) {
                if(                is_type_name(word_706,info)) {
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
                        __dec_obj194=word_706;
                        word_706=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_706)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_688) {
                        define_function_flag_701=(_Bool)1;
                    }
                }
            }
            word_706 = come_decrement_ref_count2(word_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_702;
        info->sline=sline_689;
    }
    define_variable_707=(_Bool)1;
    if(    is_type_name_flag_688&&!define_function_pointer_result_function_694) {
        p_708=info->p;
        info->p=head;
        if(        !is_type_name_flag_688) {
            define_variable_707=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value749=backtrace_parse_type((_Bool)0,info)));
            result_type_709=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_710=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_711=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value749,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_712=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_707=(_Bool)1;
                            }
                        }
                        word_712 = come_decrement_ref_count2(word_712, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_713=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_713,info)&&*info->p!=40) {
                            define_variable_707=(_Bool)1;
                        }
                    }
                    word_713 = come_decrement_ref_count2(word_713, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_709,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_710 = come_decrement_ref_count2(fun_name_710, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_707=(_Bool)0;
        }
        else if(        define_variable_707) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_707=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_707=(_Bool)0;
            }
        }
        info->p=p_708;
        info->sline=sline_689;
    }
    else {
        define_variable_707=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_694) {
        p_714=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value752=parse_struct_attribute(info)));
            __right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value753=parse_word(info)));
                __right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_715=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj195=word_715;
                        word_715=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_715,"extends")) {
                            define_variable_707=(_Bool)0;
                        }
                    }
                    word_715 = come_decrement_ref_count2(word_715, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_707=(_Bool)0;
        }
        else if(        define_variable_707) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_707=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_707=(_Bool)0;
            }
        }
        info->p=p_714;
        info->sline=sline_689;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_716=(char*)come_increment_ref_count(parse_word(info));
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
                    word_719=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_719)));
                    word_719 = come_decrement_ref_count2(word_719, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_720=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result331__ = gComeFunResultObject = __result_obj__ = node_720;
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result331__;
            if(node_720) { node_720 = come_decrement_ref_count2(node_720, ((struct sNode*)node_720)->finalize, ((struct sNode*)node_720)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_716 = come_decrement_ref_count2(word_716, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_690) {
    }
    else if(    define_variable_between_brace_695) {
        info->p=head;
        info->sline=sline_689;
        __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value760=parse_global_variable(info)));
        if(__right_value760) { __right_value760 = come_decrement_ref_count2(__right_value760, ((struct sNode*)__right_value760)->finalize, ((struct sNode*)__right_value760)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    else if(    define_function_pointer_result_function_694) {
        header_head_721=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value761=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_722=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_723=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_724=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value761,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_725=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2119, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
            param_names_726=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value766=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_727=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_728=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_729=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value766,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_729) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1voidphp_push_back(param_types_725,(struct sType*)come_increment_ref_count(param_type_727));
                    static int num_function_pointer_result_var_name_a_733=0;
                    list$1charphp_push_back(param_names_726,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_733)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value771=parse_word(info)));
                        __right_value771 = come_decrement_ref_count2(__right_value771, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_728 = come_decrement_ref_count2(param_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_727,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_728 = come_decrement_ref_count2(param_name_728, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_734=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2166, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
                param_names2_735=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value776=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_736=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_737=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_738=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value776,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_738) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1voidphp_push_back(param_types2_734,(struct sType*)come_increment_ref_count(param_type_736));
                        static int num_function_pointer_result_var_name_b_739=0;
                        list$1charphp_push_back(param_names2_735,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_739)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value778=parse_word(info)));
                            __right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_736,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_737 = come_decrement_ref_count2(param_name_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_736,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_737 = come_decrement_ref_count2(param_name_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_740=info->p;
                result_type2_741=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType", sType_finalize, sType_clone)),"lambda",(_Bool)0,info));
                __dec_obj199=result_type2_741->mResultType;
                result_type2_741->mResultType=(struct sType*)come_increment_ref_count(result_type_722);
                come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj200=result_type2_741->mParamTypes;
                result_type2_741->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_734));
                come_call_finalizer3(__dec_obj200,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj201=result_type2_741->mParamNames;
                result_type2_741->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_735));
                come_call_finalizer3(__dec_obj201,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_741->mVarArgs=(_Bool)0;
                result_type2_741->mStatic=(_Bool)0;
                var_args_742=(_Bool)0;
                header_buf_743=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer*", (void*)0, (void*)0))));
                buffer_append(header_buf_743,header_head_721,header_tail_740-header_head_721);
                buffer_append_char(header_buf_743,0);
                param_default_parametors_744=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0))));
                fun_745=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_723)),(struct sType*)come_increment_ref_count(result_type2_741),(struct list$1voidph*)come_increment_ref_count(param_types_725),(struct list$1charph*)come_increment_ref_count(param_names_726),(struct list$1charph*)come_increment_ref_count(param_default_parametors_744),(_Bool)1,var_args_742,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_743)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_749=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value794=__builtin_string(fun_name_723)))));
                __right_value794 = come_decrement_ref_count2(__right_value794, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_749==((void*)0)||fun2_749->mExternal) {
                    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_723)),(struct sFun*)come_increment_ref_count(fun_745));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value798=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_745),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value844=_inf_value2));
                come_call_finalizer3(param_types2_734,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_735,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_741,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_744,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_745,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_749,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_725,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value798,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value844) { __right_value844 = come_decrement_ref_count2(__right_value844, ((struct sNode*)__right_value844)->finalize, ((struct sNode*)__right_value844)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result362__;
                come_call_finalizer3(param_types2_734,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_735,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_741,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_743,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_744,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_745,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_749,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_725,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_726,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_689;
        node_785=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result363__ = gComeFunResultObject = __result_obj__ = node_785;
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result363__;
        if(node_785) { node_785 = come_decrement_ref_count2(node_785, ((struct sNode*)node_785)->finalize, ((struct sNode*)node_785)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_701) {
        info->p=head;
        info->sline=sline_689;
        node_786=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result364__ = gComeFunResultObject = __result_obj__ = node_786;
        if(node_786) { node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result364__;
        if(node_786) { node_786 = come_decrement_ref_count2(node_786, ((struct sNode*)node_786)->finalize, ((struct sNode*)node_786)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_707) {
        info->p=head;
        info->sline=sline_689;
        node_787=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_788=info->p;
        header_789=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer*", (void*)0, (void*)0))));
        buffer_append(header_789,source_head_687,source_tail_788-source_head_687);
        __result365__ = gComeFunResultObject = __result_obj__ = node_787;
        if(node_787) { node_787 = come_decrement_ref_count2(node_787, ((struct sNode*)node_787)->finalize, ((struct sNode*)node_787)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result365__;
        if(node_787) { node_787 = come_decrement_ref_count2(node_787, ((struct sNode*)node_787)->finalize, ((struct sNode*)node_787)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_789,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_689;
    buf2_790=(char*)come_increment_ref_count(parse_word(info));
    __result366__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value851=top_level_v98(buf2_790,head,head_sline,info)));
    buf2_790 = come_decrement_ref_count2(buf2_790, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value851) { __right_value851 = come_decrement_ref_count2(__right_value851, ((struct sNode*)__right_value851)->finalize, ((struct sNode*)__right_value851)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result366__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj189;
char* __dec_obj190;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj189=self->v1;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj190=self->v2;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_717;
struct list_item$1charph* prev_it_718;
struct list$1charph* __result330__;
    it_717=self->head;
    while(it_717!=((void*)0)) {
        prev_it_718=it_717;
        it_717=it_717->next;
        come_call_finalizer3(prev_it_718,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value767 = (void*)0;
struct list_item$1voidph* litem_730;
void* __dec_obj196;
void* __right_value768 = (void*)0;
struct list_item$1voidph* litem_731;
void* __dec_obj197;
void* __right_value769 = (void*)0;
struct list_item$1voidph* litem_732;
void* __dec_obj198;
struct list$1voidph* __result333__;
    if(    self->len==0) {
        litem_730=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value767=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1290, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_730->prev=((void*)0);
        litem_730->next=((void*)0);
        __dec_obj196=litem_730->item;
        litem_730->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj196,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_730;
        self->head=litem_730;
    }
    else if(    self->len==1) {
        litem_731=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value768=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1300, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_731->prev=self->head;
        litem_731->next=((void*)0);
        __dec_obj197=litem_731->item;
        litem_731->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj197,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_731;
        self->head->next=litem_731;
    }
    else {
        litem_732=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value769=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1310, "struct list_item$1voidph*", (void*)0, (void*)0))));
        litem_732->prev=self->tail;
        litem_732->next=((void*)0);
        __dec_obj198=litem_732->item;
        litem_732->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj198,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_732;
        self->tail=litem_732;
    }
    self->len++;
    __result333__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_746;
unsigned int hash_747;
unsigned int it_748;
struct sFun* __result334__;
struct sFun* __result335__;
struct sFun* __result336__;
struct sFun* __result337__;
default_value_746 = (void*)0;
    memset(&default_value_746,0,sizeof(struct sFun*));
    hash_747=charp_get_hash_key(((char*)key))%self->size;
    it_748=hash_747;
    while((_Bool)1) {
        if(        self->item_existance[it_748]) {
            if(            charp_equals(self->keys[it_748],key)) {
                __result334__ = gComeFunResultObject = __result_obj__ = self->items[it_748];
                come_call_finalizer3(default_value_746,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result334__;
            }
            it_748++;
            if(            it_748>=self->size) {
                it_748=0;
            }
            else if(            it_748==hash_747) {
                __result335__ = gComeFunResultObject = __result_obj__ = default_value_746;
                come_call_finalizer3(default_value_746,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result335__;
            }
        }
        else {
            __result336__ = gComeFunResultObject = __result_obj__ = default_value_746;
            come_call_finalizer3(default_value_746,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result336__;
        }
    }
    __result337__ = gComeFunResultObject = __result_obj__ = default_value_746;
    come_call_finalizer3(default_value_746,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result338__;
void* __right_value799 = (void*)0;
struct sFunNode* result_750;
void* __right_value800 = (void*)0;
char* __dec_obj202;
void* __right_value843 = (void*)0;
struct sFun* __dec_obj227;
struct sFunNode* __result361__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_750=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode", sFunNode_finalize, sFunNode_clone));
    if(    self!=((void*)0)) {
        result_750->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj202=result_750->sname;
        result_750->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_750->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj227=result_750->mFun;
        result_750->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj227,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_750;
    come_call_finalizer3(result_750,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result339__;
void* __right_value801 = (void*)0;
struct sFun* result_751;
void* __right_value802 = (void*)0;
char* __dec_obj203;
void* __right_value803 = (void*)0;
struct sType* __dec_obj204;
void* __right_value804 = (void*)0;
struct list$1voidph* __dec_obj205;
void* __right_value805 = (void*)0;
struct list$1charph* __dec_obj206;
void* __right_value806 = (void*)0;
struct list$1charph* __dec_obj207;
void* __right_value807 = (void*)0;
struct sType* __dec_obj208;
void* __right_value834 = (void*)0;
struct sBlock* __dec_obj218;
void* __right_value835 = (void*)0;
struct buffer* __dec_obj219;
void* __right_value836 = (void*)0;
struct buffer* __dec_obj220;
void* __right_value837 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value838 = (void*)0;
struct buffer* __dec_obj222;
void* __right_value839 = (void*)0;
char* __dec_obj223;
void* __right_value840 = (void*)0;
char* __dec_obj224;
void* __right_value841 = (void*)0;
char* __dec_obj225;
void* __right_value842 = (void*)0;
char* __dec_obj226;
struct sFun* __result360__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_751=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj203=result_751->mName;
        result_751->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj204=result_751->mResultType;
        result_751->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj205=result_751->mParamTypes;
        result_751->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj205,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj206=result_751->mParamNames;
        result_751->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj206,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj207=result_751->mParamDefaultParametors;
        result_751->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj207,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj208=result_751->mLambdaType;
        result_751->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj218=result_751->mBlock;
        result_751->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj218,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_751->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj219=result_751->mSource;
        result_751->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj220=result_751->mSourceHead;
        result_751->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj221=result_751->mSourceHead2;
        result_751->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj222=result_751->mSourceDefer;
        result_751->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj222,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_751->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_751->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_751->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj223=result_751->mComeHeader;
        result_751->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj224=result_751->mDeclareSName;
        result_751->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_751->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_751->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_751->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj225=result_751->mAttribute;
        result_751->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj226=result_751->mFunAttribute;
        result_751->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result360__ = gComeFunResultObject = __result_obj__ = result_751;
    come_call_finalizer3(result_751,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result360__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result340__;
void* __right_value808 = (void*)0;
struct sBlock* result_752;
void* __right_value809 = (void*)0;
struct list$1sNodeph* __dec_obj209;
void* __right_value833 = (void*)0;
struct sVarTable* __dec_obj217;
struct sBlock* __result359__;
    if(    self==(void*)0) {
        __result340__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    result_752=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj209=result_752->mNodes;
        result_752->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj209,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj217=result_752->mVarTable;
        result_752->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj217,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_752->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result359__ = gComeFunResultObject = __result_obj__ = result_752;
    come_call_finalizer3(result_752,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result359__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result341__;
void* __right_value810 = (void*)0;
struct sVarTable* result_753;
void* __right_value832 = (void*)0;
struct map$2charphsVarph* __dec_obj216;
struct sVarTable* __result358__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_753=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj216=result_753->mVars;
        result_753->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj216,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_753->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_753->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_753->mID=self->mID;
    }
    __result358__ = gComeFunResultObject = __result_obj__ = result_753;
    come_call_finalizer3(result_753,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result342__;
void* __right_value811 = (void*)0;
void* __right_value817 = (void*)0;
struct map$2charphsVarph* result_757;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1charp* __dec_obj211;
char* it_760;
struct sVar* default_value_763;
void* __right_value820 = (void*)0;
struct sVar* it2_766;
void* __right_value831 = (void*)0;
struct map$2charphsVarph* __result357__;
default_value_763 = (void*)0;
    if(    self==((void*)0)) {
        __result342__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_757=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2536, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    __dec_obj211=result_757->key_list;
    result_757->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2538, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj211,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_760=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_760=map$2charphsVarphp_next(self)    ){
        memset(&default_value_763,0,sizeof(struct sVar*));
        it2_766=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_760,default_value_763));
        map$2charphsVarphp_put(result_757,it_760,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_766)));
        come_call_finalizer3(it2_766,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_757;
    come_call_finalizer3(result_757,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
int i_754;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct list$1charp* __dec_obj210;
struct map$2charphsVarph* __result343__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value812=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value813=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2466, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value814=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_754=0;    i_754<128;    i_754++    ){
        self->item_existance[i_754]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj210=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj210,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result343__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_755;
int i_756;
    for(    i_755=0;    i_755<self->size;    i_755++    ){
        if(        self->item_existance[i_755]) {
            if(            1) {
                come_call_finalizer3(self->items[i_755],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_756=0;    i_756<self->size;    i_756++    ){
        if(        self->item_existance[i_756]) {
            if(            1) {
                self->keys[i_756] = come_decrement_ref_count2(self->keys[i_756], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_758;
char* __result344__;
char* __result345__;
char* result_759;
char* __result346__;
result_758 = (void*)0;
result_759 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_758,0,sizeof(char*));
        __result344__ = gComeFunResultObject = __result_obj__ = result_758;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result345__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    memset(&result_759,0,sizeof(char*));
    __result346__ = gComeFunResultObject = __result_obj__ = result_759;
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_761;
char* __result347__;
char* __result348__;
char* result_762;
char* __result349__;
result_761 = (void*)0;
result_762 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_761,0,sizeof(char*));
        __result347__ = gComeFunResultObject = __result_obj__ = result_761;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result348__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    memset(&result_762,0,sizeof(char*));
    __result349__ = gComeFunResultObject = __result_obj__ = result_762;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_764;
unsigned int it_765;
struct sVar* __result350__;
struct sVar* __result351__;
struct sVar* __result352__;
struct sVar* __result353__;
    hash_764=charp_get_hash_key(((char*)key))%self->size;
    it_765=hash_764;
    while((_Bool)1) {
        if(        self->item_existance[it_765]) {
            if(            charp_equals(self->keys[it_765],key)) {
                __result350__ = gComeFunResultObject = __result_obj__ = self->items[it_765];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result350__;
            }
            it_765++;
            if(            it_765>=self->size) {
                it_765=0;
            }
            else if(            it_765==hash_764) {
                __result351__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result351__;
            }
        }
        else {
            __result352__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result352__;
        }
    }
    __result353__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result353__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_778;
int it_779;
_Bool same_key_exist_780;
char* it2_781;
struct map$2charphsVarph* __result354__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_778=charp_get_hash_key(key)%self->size;
    it_779=hash_778;
    while((_Bool)1) {
        if(        self->item_existance[it_779]) {
            if(            charp_equals(self->keys[it_779],key)) {
                if(                1) {
                    self->keys[it_779] = come_decrement_ref_count2(self->keys[it_779], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_779]);
                    self->keys[it_779]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_779]);
                    self->keys[it_779]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_779],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_779]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_779]=item;
                }
                break;
            }
            it_779++;
            if(            it_779>=self->size) {
                it_779=0;
            }
            else if(            it_779==hash_778) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_779]=(_Bool)1;
            if(            1) {
                self->keys[it_779]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_779]=key;
            }
            if(            1) {
                self->items[it_779]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_779]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_780=(_Bool)0;
    for(    it2_781=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_781=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_781,key)) {
            same_key_exist_780=(_Bool)1;
        }
    }
    if(    !same_key_exist_780) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result354__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_767;
void* __right_value821 = (void*)0;
char** keys_768;
void* __right_value822 = (void*)0;
struct sVar** items_769;
void* __right_value823 = (void*)0;
_Bool* item_existance_770;
int len_771;
char* it_772;
struct sVar* default_value_773;
void* __right_value824 = (void*)0;
struct sVar* it2_774;
unsigned int hash_775;
int n_776;
struct sVar* default_value_777;
void* __right_value825 = (void*)0;
default_value_773 = (void*)0;
default_value_777 = (void*)0;
    size_767=self->size*10;
    keys_768=(char**)come_increment_ref_count(((char**)(__right_value821=(char**)come_calloc(1, sizeof(char*)*(1*(size_767)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_769=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value822=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_767)), "./comelang.h", 2694, "struct sVar**", (void*)0, (void*)0))));
    item_existance_770=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value823=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_767)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_771=0;
    for(    it_772=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_772=map$2charphsVarphp_next(self)    ){
        memset(&default_value_773,0,sizeof(struct sVar*));
        it2_774=((struct sVar*)(__right_value824=map$2charphsVarphp_at(self,it_772,default_value_773)));
        come_call_finalizer3(__right_value824,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_775=charp_get_hash_key(it_772)%size_767;
        n_776=hash_775;
        while((_Bool)1) {
            if(            item_existance_770[n_776]) {
                n_776++;
                if(                n_776>=size_767) {
                    n_776=0;
                }
                else if(                n_776==hash_775) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_770[n_776]=(_Bool)1;
                keys_768[n_776]=it_772;
                items_769[n_776]=((struct sVar*)(__right_value825=map$2charphsVarphp_at(self,it_772,default_value_777)));
                come_call_finalizer3(__right_value825,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_771++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_768;
    self->items=items_769;
    self->item_existance=item_existance_770;
    self->size=size_767;
    self->len=len_771;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result355__;
void* __right_value826 = (void*)0;
struct sVar* result_782;
void* __right_value827 = (void*)0;
char* __dec_obj212;
void* __right_value828 = (void*)0;
char* __dec_obj213;
void* __right_value829 = (void*)0;
struct sType* __dec_obj214;
void* __right_value830 = (void*)0;
char* __dec_obj215;
struct sVar* __result356__;
    if(    self==(void*)0) {
        __result355__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    result_782=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj212=result_782->mName;
        result_782->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj213=result_782->mCValueName;
        result_782->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj214=result_782->mType;
        result_782->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_782->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_782->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_782->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_782->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_782->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj215=result_782->mFunName;
        result_782->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result356__ = gComeFunResultObject = __result_obj__ = result_782;
    come_call_finalizer3(result_782,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result356__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_783;
int i_784;
    for(    i_783=0;    i_783<self->size;    i_783++    ){
        if(        self->item_existance[i_783]) {
            if(            1) {
                come_call_finalizer3(self->items[i_783],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_784=0;    i_784<self->size;    i_784++    ){
        if(        self->item_existance[i_784]) {
            if(            1) {
                self->keys[i_784] = come_decrement_ref_count2(self->keys[i_784], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_791;
int caller_line_792;
char* caller_sname_793;
_Bool comma_instead_of_semicolon_794;
char* last_code_795;
char* __dec_obj228;
char* last_code2_796;
char* __dec_obj229;
void* __right_value852 = (void*)0;
char* sname_top_797;
int sline_top_798;
void* __right_value853 = (void*)0;
struct sFun* funX_799;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
struct tuple2$2charphbool* __result370__;
void* __right_value858 = (void*)0;
struct sType* result_type_801;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
struct list$1voidph* param_types_802;
struct list$1voidph* o2_saved_803;
struct sType* it_806;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
struct sType* param_type_809;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
struct list$1charph* param_names_810;
void* __right_value865 = (void*)0;
struct list$1charph* param_default_parametors_811;
char* p_812;
int sline_813;
char* sname_814;
char* head_815;
struct buffer* source_816;
void* __right_value866 = (void*)0;
struct buffer* __dec_obj234;
struct sType* generics_type_saved_817;
void* __right_value867 = (void*)0;
struct sType* __dec_obj235;
struct list$1charph* method_generics_type_names_818;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct list$1charph* __dec_obj236;
struct list$1charph* o2_saved_819;
char* it_820;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct list$1charph* __dec_obj237;
char* __dec_obj238;
void* __right_value872 = (void*)0;
struct sBlock* block_821;
struct buffer* __dec_obj239;
char* __dec_obj240;
_Bool var_args_822;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct sFun* fun_823;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value882 = (void*)0;
struct sNode* node_824;
_Bool in_generics_fun_825;
_Bool Value_826;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
struct tuple2$2charphbool* __result377__;
struct sType* __dec_obj241;
struct list$1charph* __dec_obj242;
void* __right_value886 = (void*)0;
char* __dec_obj243;
char* __dec_obj244;
char* __dec_obj245;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
struct tuple2$2charphbool* __result378__;
    caller_fun_791=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_792=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_793=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_794=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_795=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj228=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_796=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj229=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_797=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_798=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_799=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_799) {
        __result370__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value857=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_795 = come_decrement_ref_count2(last_code_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_796 = come_decrement_ref_count2(last_code2_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_797 = come_decrement_ref_count2(sname_top_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_799,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value857,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_type_801=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_802=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2316, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    for(    o2_saved_803=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_806=((struct sType*)list$1voidphp_begin((o2_saved_803)));    !list$1voidphp_end((o2_saved_803));    it_806=((struct sType*)list$1voidphp_next((o2_saved_803)))    ){
        param_type_809=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value861=come_call_cloner(sType_clone, it_806))),generics_type,info));
        come_call_finalizer3(__right_value861,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_809->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_802,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_809)));
        come_call_finalizer3(param_type_809,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_803,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_810=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_811=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_812=info->p;
    sline_813=info->sline;
    sname_814=(char*)come_increment_ref_count(info->sname);
    head_815=info->head;
    source_816=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj234=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj234,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_817=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj235=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_818=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj236=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2346, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_819=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_820=list$1charphp_begin((o2_saved_819));    !list$1charphp_end((o2_saved_819));    it_820=list$1charphp_next((o2_saved_819))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_820)));
    }
    come_call_finalizer3(o2_saved_819,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj237=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj237,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj238=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_821=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_815;
    __dec_obj239=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_816);
    come_call_finalizer3(__dec_obj239,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_812;
    info->sline=sline_813;
    __dec_obj240=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_814);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_801->mInline=(_Bool)0;
    result_type_801->mStatic=(_Bool)0;
    result_type_801->mUniq=(_Bool)0;
    var_args_822=generics_fun->mVarArgs;
    fun_823=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2370, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_801),(struct list$1voidph*)come_increment_ref_count(param_types_802),(struct list$1charph*)come_increment_ref_count(param_names_810),(struct list$1charph*)come_increment_ref_count(param_default_parametors_811),(_Bool)0,var_args_822,(struct sBlock*)come_increment_ref_count(block_821),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_823));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2377, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value881=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2377, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_823),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_824=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value881,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_825=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_826=node_compile(node_824,info);
    if(    !Value_826) {
        __result377__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value885=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2382, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_795 = come_decrement_ref_count2(last_code_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_796 = come_decrement_ref_count2(last_code2_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_797 = come_decrement_ref_count2(sname_top_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_799,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_802,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_810,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_811,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_814 = come_decrement_ref_count2(sname_814, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_816,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_817,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_821,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_823,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_824) { node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value885,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result377__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_825;
    __dec_obj241=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_817);
    come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj242=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_818);
    come_call_finalizer3(__dec_obj242,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj243=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_797));
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_798;
    __dec_obj244=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_795);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj245=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_796);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_791;
    info->caller_line=caller_line_792;
    info->caller_sname=caller_sname_793;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_794;
    __result378__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value889=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2402, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_795 = come_decrement_ref_count2(last_code_795, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_796 = come_decrement_ref_count2(last_code2_796, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_797 = come_decrement_ref_count2(sname_top_797, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_799,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_801,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_802,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_810,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_811,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_814 = come_decrement_ref_count2(sname_814, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_816,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_817,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_818,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_821,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_823,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_824) { node_824 = come_decrement_ref_count2(node_824, ((struct sNode*)node_824)->finalize, ((struct sNode*)node_824)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value889,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result378__;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __dec_obj230;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj230=self->v1;
            __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphbool* __result367__;
void* __right_value854 = (void*)0;
struct tuple2$2charphbool* result_800;
void* __right_value855 = (void*)0;
char* __dec_obj231;
struct tuple2$2charphbool* __result368__;
    if(    self==(void*)0) {
        __result367__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result367__;
    }
    result_800=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj231=result_800->v1;
        result_800->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_800->v2=self->v2;
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_800;
    come_call_finalizer3(result_800,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__=(void*)0;
char* __dec_obj232;
struct tuple2$2charphbool* __result369__;
    __dec_obj232=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result369__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj233;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj233=self->v1;
            __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_804;
void* __result371__;
void* __result372__;
void* result_805;
void* __result373__;
result_804 = (void*)0;
result_805 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_804,0,sizeof(void*));
        __result371__ = gComeFunResultObject = __result_obj__ = result_804;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    self->it=self->head;
    if(    self->it) {
        __result372__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result372__;
    }
    memset(&result_805,0,sizeof(void*));
    __result373__ = gComeFunResultObject = __result_obj__ = result_805;
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_807;
void* __result374__;
void* __result375__;
void* result_808;
void* __result376__;
result_807 = (void*)0;
result_808 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_807,0,sizeof(void*));
        __result374__ = gComeFunResultObject = __result_obj__ = result_807;
        gComeFunResultObject = (void*)0;
        return __result374__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result375__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result375__;
    }
    memset(&result_808,0,sizeof(void*));
    __result376__ = gComeFunResultObject = __result_obj__ = result_808;
    gComeFunResultObject = (void*)0;
    return __result376__;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_827;
int caller_line_828;
char* caller_sname_829;
_Bool comma_instead_of_semicolon_830;
char* last_code_831;
char* __dec_obj246;
char* last_code2_832;
char* __dec_obj247;
void* __right_value890 = (void*)0;
char* sname_top_833;
int sline_top_834;
void* __right_value891 = (void*)0;
struct sFun* funX_835;
_Bool __result379__;
void* __right_value892 = (void*)0;
struct sType* result_type_836;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct list$1voidph* param_types_837;
struct list$1voidph* o2_saved_838;
struct sType* it_839;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sType* param_type_840;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct list$1charph* param_names_841;
void* __right_value899 = (void*)0;
struct list$1charph* param_default_parametors_842;
char* p_843;
int sline_844;
char* sname_845;
char* head_846;
struct buffer* source_847;
void* __right_value900 = (void*)0;
struct buffer* __dec_obj248;
struct list$1charph* method_generics_type_names_848;
void* __right_value901 = (void*)0;
void* __right_value902 = (void*)0;
struct list$1charph* __dec_obj249;
struct list$1charph* o2_saved_849;
char* it_850;
void* __right_value903 = (void*)0;
void* __right_value904 = (void*)0;
struct list$1charph* __dec_obj250;
char* __dec_obj251;
void* __right_value905 = (void*)0;
struct sBlock* block_851;
struct buffer* __dec_obj252;
char* __dec_obj253;
_Bool generate__852;
_Bool var_args_853;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
void* __right_value912 = (void*)0;
struct sFun* fun_854;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
void* __right_value915 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value916 = (void*)0;
struct sNode* node_855;
_Bool Value_856;
void* __if_result__1_857 = (void*)0;
_Bool __result380__;
struct list$1charph* __dec_obj254;
void* __right_value917 = (void*)0;
char* __dec_obj255;
char* __dec_obj256;
char* __dec_obj257;
_Bool __result381__;
    caller_fun_827=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_828=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_829=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_830=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_831=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj246=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_832=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj247=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_833=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_834=info->sline;
    funX_835=((struct sFun*)(__right_value891=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value891,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_835) {
        __result379__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_831 = come_decrement_ref_count2(last_code_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_832 = come_decrement_ref_count2(last_code2_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_833 = come_decrement_ref_count2(sname_top_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result379__;
    }
    result_type_836=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_837=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2431, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone))));
    for(    o2_saved_838=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_839=((struct sType*)list$1voidphp_begin((o2_saved_838)));    !list$1voidphp_end((o2_saved_838));    it_839=((struct sType*)list$1voidphp_next((o2_saved_838)))    ){
        param_type_840=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value895=come_call_cloner(sType_clone, it_839))),info));
        come_call_finalizer3(__right_value895,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_840->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_837,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_840)));
        come_call_finalizer3(param_type_840,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_838,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_841=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_842=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_843=info->p;
    sline_844=info->sline;
    sname_845=(char*)come_increment_ref_count(info->sname);
    head_846=info->head;
    source_847=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj248=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj248,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_848=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj249=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2455, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj249,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_849=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_850=list$1charphp_begin((o2_saved_849));    !list$1charphp_end((o2_saved_849));    it_850=list$1charphp_next((o2_saved_849))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_850)));
    }
    come_call_finalizer3(o2_saved_849,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj250=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj250,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj251=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_851=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_846;
    __dec_obj252=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_847);
    come_call_finalizer3(__dec_obj252,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_843;
    info->sline=sline_844;
    __dec_obj253=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_845);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_836->mInline=(_Bool)0;
    result_type_836->mStatic=(_Bool)0;
    result_type_836->mUniq=(_Bool)0;
    generate__852=(_Bool)0;
    if(    result_type_836->mGenerate) {
        result_type_836->mGenerate=(_Bool)0;
        generate__852=(_Bool)1;
    }
    var_args_853=generics_fun->mVarArgs;
    fun_854=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_836),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_837)),(struct list$1charph*)come_increment_ref_count(param_names_841),(struct list$1charph*)come_increment_ref_count(param_default_parametors_842),(_Bool)0,var_args_853,(struct sBlock*)come_increment_ref_count(block_851),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__852,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_854));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2492, "struct sNode", (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value915=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2492, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_854),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_855=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value915,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_856=node_compile(node_855,info);
    if(    !Value_856) {
        __result380__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_831 = come_decrement_ref_count2(last_code_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_832 = come_decrement_ref_count2(last_code2_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_833 = come_decrement_ref_count2(sname_top_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_836,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_837,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_841,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_842,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_845 = come_decrement_ref_count2(sname_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_847,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_851,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_854,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_855) { node_855 = come_decrement_ref_count2(node_855, ((struct sNode*)node_855)->finalize, ((struct sNode*)node_855)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result380__;
    }
    else {
        __if_result__1_857=(void*)(Value_856);
;
    }
    __dec_obj254=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_848);
    come_call_finalizer3(__dec_obj254,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj255=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_833));
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_834;
    __dec_obj256=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_831);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj257=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_832);
    __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_827;
    info->caller_line=caller_line_828;
    info->caller_sname=caller_sname_829;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_830;
    __result381__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_831 = come_decrement_ref_count2(last_code_831, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_832 = come_decrement_ref_count2(last_code2_832, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_833 = come_decrement_ref_count2(sname_top_833, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_836,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_837,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_841,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_842,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_845 = come_decrement_ref_count2(sname_845, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_847,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_851,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_854,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_855) { node_855 = come_decrement_ref_count2(node_855, ((struct sNode*)node_855)->finalize, ((struct sNode*)node_855)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result381__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_858;
char* source_head_859;
void* __right_value918 = (void*)0;
char* attribute_860;
struct sType* result_type_861;
char* var_name_862;
_Bool constructor__863;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct sType* __dec_obj258;
void* __right_value921 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_864=0;
char* var_name2_865=0;
_Bool err_866=0;
struct sType* __dec_obj259;
char* __dec_obj260;
_Bool method_definition_867;
char* p_868;
int sline_869;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct buffer* buf2_870;
char* fun_name_871;
char* base_fun_name_872;
void* __right_value924 = (void*)0;
char* __dec_obj261;
void* __right_value925 = (void*)0;
char* __dec_obj262;
void* __right_value926 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_873=0;
char* name_874=0;
_Bool err_875=0;
void* __right_value927 = (void*)0;
char* __dec_obj263;
void* __right_value928 = (void*)0;
char* __dec_obj264;
void* __right_value929 = (void*)0;
char* __dec_obj265;
void* __right_value930 = (void*)0;
char* __dec_obj266;
void* __right_value931 = (void*)0;
char* __dec_obj267;
void* __right_value932 = (void*)0;
char* __dec_obj268;
void* __right_value933 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1voidph* param_types_876=0;
struct list$1charph* param_names_877=0;
struct list$1charph* param_default_parametors_878=0;
_Bool var_args_879=0;
char* header_tail_880;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct buffer* header_buf_881;
int version_882;
int n_883;
_Bool in_top_level_884;
void* __right_value936 = (void*)0;
struct sBlock* block_885;
void* __right_value937 = (void*)0;
char* fun_name_887;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct sFun* fun_888;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
struct sFun* fun2_889;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value952 = (void*)0;
struct sNode* __result384__;
void* __right_value953 = (void*)0;
char* none_generics_name_891;
void* __right_value954 = (void*)0;
char* generics_sname_892;
int generics_sline_893;
void* __right_value955 = (void*)0;
char* block_894;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct sGenericsFun* fun_895;
void* __right_value962 = (void*)0;
char* fun_name3_896;
void* __right_value968 = (void*)0;
struct sNode* __result396__;
void* __right_value969 = (void*)0;
char* generics_sname_918;
int generics_sline_919;
void* __right_value970 = (void*)0;
char* block_920;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
void* __right_value976 = (void*)0;
struct sGenericsFun* fun_921;
void* __right_value977 = (void*)0;
char* fun_name3_922;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct sNode* __result397__;
char* source_tail_923;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
struct buffer* header_924;
void* __right_value982 = (void*)0;
char* name_925;
void* __right_value983 = (void*)0;
char* name_926;
int i_927;
void* __right_value984 = (void*)0;
struct sType* param_type_928;
void* __right_value985 = (void*)0;
char* param_name_929;
void* __right_value986 = (void*)0;
char* default_parametor_930;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
void* __right_value989 = (void*)0;
char* impl_name_931;
void* __right_value990 = (void*)0;
char* result_type_name_932;
void* __right_value991 = (void*)0;
char* impl_name_933;
void* __right_value992 = (void*)0;
char* result_type_name_934;
int i_935;
void* __right_value993 = (void*)0;
struct sType* param_type_936;
void* __right_value994 = (void*)0;
char* param_name_937;
void* __right_value995 = (void*)0;
char* default_parametor_938;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sBlock* block_939;
_Bool static_fun_940;
_Bool inline_fun_941;
_Bool uniq_fun_942;
_Bool generate_fun_943;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
char* new_fun_name_944;
void* __right_value1002 = (void*)0;
char* __dec_obj273;
void* __right_value1003 = (void*)0;
void* __right_value1004 = (void*)0;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
struct sFun* fun_945;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sFun* fun2_946;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1016 = (void*)0;
struct sNode* __result398__;
void* __right_value1017 = (void*)0;
char* new_fun_name_947;
void* __right_value1018 = (void*)0;
char* __dec_obj274;
char* source_tail_948;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
struct buffer* header_949;
_Bool result_type_static_950;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
struct sFun* fun_951;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct sFun* fun2_952;
void* __right_value1029 = (void*)0;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1033 = (void*)0;
struct sNode* __result399__;
void* __right_value1034 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_953=0;
char* fun_attribute_954=0;
void* __right_value1035 = (void*)0;
char* __dec_obj275;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct buffer* header_955;
char* source_tail_956;
_Bool result_type_static_957;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
void* __right_value1042 = (void*)0;
struct sFun* fun_958;
void* __right_value1043 = (void*)0;
void* __right_value1044 = (void*)0;
struct sFun* fun2_959;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1049 = (void*)0;
struct sNode* __result400__;
struct sNode* __result401__;
fun_name_871 = (void*)0;
    header_head_858=info->p;
    source_head_859=info->p;
    attribute_860=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_861=((void*)0);
    var_name_862=((void*)0);
    constructor__863=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value919=parse_word(info)));
        __right_value919 = come_decrement_ref_count2(__right_value919, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj258=result_type_861;
        result_type_861=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_861->mHeap=(_Bool)1;
        constructor__863=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value921=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_864=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_865=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_866=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value921,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj259=result_type_861;
        result_type_861=(struct sType*)come_increment_ref_count(result_type2_864);
        come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj260=var_name_862;
        var_name_862=(char*)come_increment_ref_count(var_name2_865);
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_866) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_864,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_865 = come_decrement_ref_count2(var_name2_865, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_867=(_Bool)0;
    {
        p_868=info->p;
        sline_869=info->sline;
        buf2_870=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2558, "struct buffer*", (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_870,*info->p);
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
        if(        buffer_length(buf2_870)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_867=(_Bool)1;
        }
        info->p=p_868;
        info->sline=sline_869;
        come_call_finalizer3(buf2_870,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_872=((void*)0);
    if(    constructor__863) {
        __dec_obj261=base_fun_name_872;
        base_fun_name_872=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj262=fun_name_871;
        fun_name_871=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_872,info,(_Bool)1));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_867) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value926=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_873=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_874=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_875=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value926,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_875) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj263=base_fun_name_872;
        base_fun_name_872=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj264=fun_name_871;
        fun_name_871=(char*)come_increment_ref_count(create_method_name(obj_type_873,(_Bool)0,base_fun_name_872,info,(_Bool)1));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_873,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_874 = come_decrement_ref_count2(name_874, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj265=base_fun_name_872;
        base_fun_name_872=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj266=fun_name_871;
        fun_name_871=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_872,info,(_Bool)1));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj267=fun_name_871;
        fun_name_871=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj268=base_fun_name_872;
        base_fun_name_872=(char*)come_increment_ref_count(__builtin_string(fun_name_871));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_872,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value933=parse_params(info,constructor__863)));
    param_types_876=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_877=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_878=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_879=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value933,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_880=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_872,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_881=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2625, "struct buffer*", (void*)0, (void*)0))));
    buffer_append(header_buf_881,header_head_858,header_tail_880-header_head_858);
    buffer_append_char(header_buf_881,0);
    version_882=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_883=0;
        while(xisdigit(*info->p)) {
            n_883=n_883*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_882=n_883;
    }
    in_top_level_884=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_872,"lambda")) {
        block_885=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_886=0;
        lambda_num_886++;
        fun_name_887=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_886));
        result_type_861->mInline=(_Bool)0;
        result_type_861->mStatic=(_Bool)0;
        result_type_861->mUniq=(_Bool)0;
        result_type_861->mGenerate=(_Bool)0;
        fun_888=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2661, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_887)),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1voidph*)come_increment_ref_count(param_types_876),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),(_Bool)0,var_args_879,(struct sBlock*)come_increment_ref_count(block_885),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_881)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_889=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value945=__builtin_string(fun_name_887)))));
        __right_value945 = come_decrement_ref_count2(__right_value945, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_889==((void*)0)||fun2_889->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_887)),(struct sFun*)come_increment_ref_count(fun_888));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value949=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2671, "struct sLambdaNode*", (void*)0, (void*)0)),fun_888,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value952=_inf_value5));
        come_call_finalizer3(block_885,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_887 = come_decrement_ref_count2(fun_name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_888,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_889,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value949,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value952) { __right_value952 = come_decrement_ref_count2(__right_value952, ((struct sNode*)__right_value952)->finalize, ((struct sNode*)__right_value952)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result384__;
        come_call_finalizer3(block_885,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_887 = come_decrement_ref_count2(fun_name_887, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_888,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_889,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_891=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_892=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_893=info->sline;
        block_894=(char*)come_increment_ref_count(skip_block(info));
        fun_895=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2681, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value957=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value958=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_871)),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1voidph*)come_increment_ref_count(param_types_876),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),var_args_879,(char*)come_increment_ref_count(block_894),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_892)),generics_sline_893));
        come_call_finalizer3(__right_value957,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value958,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_896=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_891,base_fun_name_872));
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_896)),(struct sGenericsFun*)come_increment_ref_count(fun_895));
        __result396__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_891 = come_decrement_ref_count2(none_generics_name_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_892 = come_decrement_ref_count2(generics_sname_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_894 = come_decrement_ref_count2(block_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_895,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_896 = come_decrement_ref_count2(fun_name3_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result396__;
        none_generics_name_891 = come_decrement_ref_count2(none_generics_name_891, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_892 = come_decrement_ref_count2(generics_sname_892, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_894 = come_decrement_ref_count2(block_894, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_895,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_896 = come_decrement_ref_count2(fun_name3_896, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_918=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_919=info->sline;
        block_920=(char*)come_increment_ref_count(skip_block(info));
        fun_921=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2695, "struct sGenericsFun*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value972=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value973=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_871)),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1voidph*)come_increment_ref_count(param_types_876),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),var_args_879,(char*)come_increment_ref_count(block_920),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_918)),generics_sline_919));
        come_call_finalizer3(__right_value972,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value973,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_922=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_872));
        if(        method_definition_867) {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_871)),(struct sGenericsFun*)come_increment_ref_count(fun_921));
        }
        else {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_922)),(struct sGenericsFun*)come_increment_ref_count(fun_921));
        }
        __result397__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_918 = come_decrement_ref_count2(generics_sname_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_920 = come_decrement_ref_count2(block_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_921,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_922 = come_decrement_ref_count2(fun_name3_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result397__;
        generics_sname_918 = come_decrement_ref_count2(generics_sname_918, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_920 = come_decrement_ref_count2(block_920, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_921,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_922 = come_decrement_ref_count2(fun_name3_922, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_923=info->p-1;
        header_924=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2711, "struct buffer*", (void*)0, (void*)0))));
        if(        constructor__863) {
            if(            list$1voidphp_length(param_types_876)==1) {
                name_925=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_924,"extern %s*%% %s*::initialize(%s*%% self);\n",name_925,name_925,name_925);
                name_925 = come_decrement_ref_count2(name_925, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_926=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_924,"extern %s*%% %s*::initialize(%s*%% self, ",name_926,name_926,name_926);
                for(                i_927=1;                i_927<list$1voidphp_length(param_types_876);                i_927++                ){
                    param_type_928=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_876,i_927));
                    param_name_929=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_877,i_927));
                    default_parametor_930=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_878,i_927));
                    if(                    default_parametor_930) {
                        buffer_append_format(header_924,"extern %s %s=%s",((char*)(__right_value987=make_come_type_name_string_no_solved(param_type_928,(_Bool)0,info))),param_name_929,default_parametor_930);
                        __right_value987 = come_decrement_ref_count2(__right_value987, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_924,"extern %s %s",((char*)(__right_value988=make_come_type_name_string_no_solved(param_type_928,(_Bool)0,info))),param_name_929);
                        __right_value988 = come_decrement_ref_count2(__right_value988, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_927!=list$1voidphp_length(param_types_876)-1) {
                        buffer_append_str(header_924,",");
                    }
                    come_call_finalizer3(param_type_928,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_929 = come_decrement_ref_count2(param_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_930 = come_decrement_ref_count2(default_parametor_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_924,");\n");
                name_926 = come_decrement_ref_count2(name_926, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_876)==1) {
                impl_name_931=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_932=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_861,(_Bool)0,info));
                buffer_append_format(header_924,"extern %s %s*::%s(%s* self);\n",result_type_name_932,impl_name_931,base_fun_name_872,impl_name_931);
                impl_name_931 = come_decrement_ref_count2(impl_name_931, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_932 = come_decrement_ref_count2(result_type_name_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_933=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_934=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_861,(_Bool)0,info));
                buffer_append_format(header_924,"extern %s %s*::%s(%s* self, ",result_type_name_934,impl_name_933,base_fun_name_872,impl_name_933);
                for(                i_935=1;                i_935<list$1voidphp_length(param_types_876);                i_935++                ){
                    param_type_936=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_876,i_935));
                    param_name_937=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_877,i_935));
                    default_parametor_938=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_878,i_935));
                    if(                    default_parametor_938) {
                        buffer_append_format(header_924,"extern %s %s=%s",((char*)(__right_value996=make_come_type_name_string_no_solved(param_type_936,(_Bool)0,info))),param_name_937,default_parametor_938);
                        __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_924,"extern %s %s",((char*)(__right_value997=make_come_type_name_string_no_solved(param_type_936,(_Bool)0,info))),param_name_937);
                        __right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_935!=list$1voidphp_length(param_types_876)-1) {
                        buffer_append_str(header_924,",");
                    }
                    come_call_finalizer3(param_type_936,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_937 = come_decrement_ref_count2(param_name_937, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_938 = come_decrement_ref_count2(default_parametor_938, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_924,");\n");
                impl_name_933 = come_decrement_ref_count2(impl_name_933, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_934 = come_decrement_ref_count2(result_type_name_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_924,source_head_859,source_tail_923-source_head_859);
            buffer_append_str(header_924,";\n");
        }
        if(        !result_type_861->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value998=buffer_to_string(header_924))));
                __right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_939=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__863,(_Bool)1));
        static_fun_940=(_Bool)0;
        if(        result_type_861->mStatic) {
            result_type_861->mStatic=(_Bool)0;
            result_type_861->mUniq=(_Bool)0;
            static_fun_940=(_Bool)1;
        }
        inline_fun_941=(_Bool)0;
        if(        result_type_861->mInline) {
            result_type_861->mInline=(_Bool)0;
            result_type_861->mUniq=(_Bool)0;
            inline_fun_941=(_Bool)1;
        }
        uniq_fun_942=(_Bool)0;
        if(        result_type_861->mUniq) {
            result_type_861->mUniq=(_Bool)0;
            result_type_861->mInline=(_Bool)0;
            result_type_861->mStatic=(_Bool)0;
            uniq_fun_942=(_Bool)1;
        }
        generate_fun_943=(_Bool)0;
        if(        result_type_861->mUniq) {
            result_type_861->mUniq=(_Bool)0;
            result_type_861->mInline=(_Bool)0;
            result_type_861->mStatic=(_Bool)0;
            generate_fun_943=(_Bool)1;
        }
        if(        version_882>0) {
            new_fun_name_944=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1000=__builtin_string(fun_name_871))),version_882));
            __right_value1000 = come_decrement_ref_count2(__right_value1000, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj273=fun_name_871;
            fun_name_871=(char*)come_increment_ref_count(__builtin_string(new_fun_name_944));
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_944 = come_decrement_ref_count2(new_fun_name_944, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_945=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2820, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_871)),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1voidph*)come_increment_ref_count(param_types_876),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),(_Bool)0,var_args_879,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_939)),static_fun_940,(char*)come_increment_ref_count(buffer_to_string(header_buf_881)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_941,uniq_fun_942,generate_fun_943,(char*)come_increment_ref_count(attribute_860),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_871)),(struct sFun*)come_increment_ref_count(fun_945));
        }
        else {
            fun2_946=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1011=__builtin_string(fun_name_871)))));
            __right_value1011 = come_decrement_ref_count2(__right_value1011, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_946==((void*)0)||fun2_946->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_871)),(struct sFun*)come_increment_ref_count(fun_945));
            }
            come_call_finalizer3(fun2_946,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2840, "struct sNode", (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1015=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2840, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_945),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result398__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1016=_inf_value6));
        come_call_finalizer3(header_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_939,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_945,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1015,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1016) { __right_value1016 = come_decrement_ref_count2(__right_value1016, ((struct sNode*)__right_value1016)->finalize, ((struct sNode*)__right_value1016)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result398__;
        come_call_finalizer3(header_924,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_939,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_945,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_882>0) {
            new_fun_name_947=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_871,version_882));
            __dec_obj274=fun_name_871;
            fun_name_871=(char*)come_increment_ref_count(__builtin_string(new_fun_name_947));
            __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_947 = come_decrement_ref_count2(new_fun_name_947, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_948=info->p;
            header_949=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2853, "struct buffer*", (void*)0, (void*)0))));
            buffer_append(header_949,source_head_859,source_tail_948-source_head_859);
            skip_spaces_and_lf(info);
            result_type_static_950=result_type_861->mStatic;
            result_type_861->mStatic=(_Bool)0;
            result_type_861->mUniq=(_Bool)0;
            result_type_861->mInline=(_Bool)0;
            result_type_861->mGenerate=(_Bool)0;
            fun_951=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2864, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_871)),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1voidph*)come_increment_ref_count(param_types_876),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),(_Bool)1,var_args_879,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_881)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_860),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_952=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1027=__builtin_string(fun_name_871)))));
            __right_value1027 = come_decrement_ref_count2(__right_value1027, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_952==((void*)0)||fun2_952->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_871)),(struct sFun*)come_increment_ref_count(fun_951));
            }
            if(            !result_type_static_950) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1030=buffer_to_string(header_949))));
                    __right_value1030 = come_decrement_ref_count2(__right_value1030, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1032=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2883, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_951),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result399__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1033=_inf_value7));
            come_call_finalizer3(header_949,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_951,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_952,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1032,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1033) { __right_value1033 = come_decrement_ref_count2(__right_value1033, ((struct sNode*)__right_value1033)->finalize, ((struct sNode*)__right_value1033)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result399__;
            come_call_finalizer3(header_949,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_951,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_952,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1034=parse_function_attribute(info)));
            asm_fun_953=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_954=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1034,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_953,"")) {
                __dec_obj275=fun_name_871;
                fun_name_871=(char*)come_increment_ref_count(__builtin_string(asm_fun_953));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_955=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2892, "struct buffer*", (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_956=info->p;
                buffer_append(header_955,source_head_859,source_tail_956-source_head_859);
                skip_spaces_and_lf(info);
            }
            result_type_static_957=result_type_861->mStatic;
            result_type_861->mStatic=(_Bool)0;
            result_type_861->mUniq=(_Bool)0;
            result_type_861->mInline=(_Bool)0;
            result_type_861->mGenerate=(_Bool)0;
            fun_958=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2906, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_871)),(struct sType*)come_increment_ref_count(result_type_861),(struct list$1voidph*)come_increment_ref_count(param_types_876),(struct list$1charph*)come_increment_ref_count(param_names_877),(struct list$1charph*)come_increment_ref_count(param_default_parametors_878),(_Bool)1,var_args_879,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_881)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_860),(char*)come_increment_ref_count(fun_attribute_954)));
            fun2_959=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1043=__builtin_string(fun_name_871)))));
            __right_value1043 = come_decrement_ref_count2(__right_value1043, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_959==((void*)0)||fun2_959->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_871)),(struct sFun*)come_increment_ref_count(fun_958));
            }
            if(            !result_type_static_957) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1046=buffer_to_string(header_955))));
                    __right_value1046 = come_decrement_ref_count2(__right_value1046, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2926, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1048=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2926, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_958),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result400__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1049=_inf_value8));
            asm_fun_953 = come_decrement_ref_count2(asm_fun_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_954 = come_decrement_ref_count2(fun_attribute_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_955,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1048,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1049) { __right_value1049 = come_decrement_ref_count2(__right_value1049, ((struct sNode*)__right_value1049)->finalize, ((struct sNode*)__right_value1049)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result400__;
            asm_fun_953 = come_decrement_ref_count2(asm_fun_953, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_954 = come_decrement_ref_count2(fun_attribute_954, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_955,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_958,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_959,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_884;
    __result401__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_860 = come_decrement_ref_count2(attribute_860, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_861,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_862 = come_decrement_ref_count2(var_name_862, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_871 = come_decrement_ref_count2(fun_name_871, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_872 = come_decrement_ref_count2(base_fun_name_872, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_876,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_877,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_881,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result401__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj269;
struct list$1charph* __dec_obj270;
struct list$1charph* __dec_obj271;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj269=self->v1;
            come_call_finalizer3(__dec_obj269,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj270=self->v2;
            come_call_finalizer3(__dec_obj270,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj271=self->v3;
            come_call_finalizer3(__dec_obj271,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result382__;
void* __right_value950 = (void*)0;
struct sLambdaNode* result_890;
void* __right_value951 = (void*)0;
char* __dec_obj272;
struct sLambdaNode* __result383__;
    if(    self==(void*)0) {
        __result382__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    result_890=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode", sLambdaNode_finalize, sLambdaNode_clone));
    if(    self!=((void*)0)) {
        result_890->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj272=result_890->sname;
        result_890->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_890->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_890->mFun=self->mFun;
    }
    __result383__ = gComeFunResultObject = __result_obj__ = result_890;
    come_call_finalizer3(result_890,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_914;
unsigned int it_915;
_Bool same_key_exist_916;
char* it2_917;
struct map$2charphsGenericsFunph* __result395__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunphp_rehash(self);
    }
    hash_914=charp_get_hash_key(key)%self->size;
    it_915=hash_914;
    while((_Bool)1) {
        if(        self->item_existance[it_915]) {
            if(            charp_equals(self->keys[it_915],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_915]);
                    self->keys[it_915] = come_decrement_ref_count2(self->keys[it_915], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_915]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_915]);
                    self->keys[it_915]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_915],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_915]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_915]=item;
                }
                break;
            }
            it_915++;
            if(            it_915>=self->size) {
                it_915=0;
            }
            else if(            it_915==hash_914) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_915]=(_Bool)1;
            if(            1) {
                self->keys[it_915]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_915]=key;
            }
            if(            1) {
                self->items[it_915]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_915]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_916=(_Bool)0;
    for(    it2_917=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_917=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_917,key)) {
            same_key_exist_916=(_Bool)1;
        }
    }
    if(    !same_key_exist_916) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result395__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_897;
void* __right_value963 = (void*)0;
char** keys_898;
void* __right_value964 = (void*)0;
struct sGenericsFun** items_899;
void* __right_value965 = (void*)0;
_Bool* item_existance_900;
int len_901;
char* it_904;
struct sGenericsFun* default_value_907;
void* __right_value966 = (void*)0;
struct sGenericsFun* it2_908;
unsigned int hash_911;
int n_912;
struct sGenericsFun* default_value_913;
void* __right_value967 = (void*)0;
default_value_907 = (void*)0;
default_value_913 = (void*)0;
    size_897=self->size*10;
    keys_898=(char**)come_increment_ref_count(((char**)(__right_value963=(char**)come_calloc(1, sizeof(char*)*(1*(size_897)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_899=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value964=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_897)), "./comelang.h", 2694, "struct sGenericsFun**", (void*)0, (void*)0))));
    item_existance_900=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value965=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_897)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_901=0;
    for(    it_904=map$2charphsGenericsFunphp_begin(self);    !map$2charphsGenericsFunphp_end(self);    it_904=map$2charphsGenericsFunphp_next(self)    ){
        memset(&default_value_907,0,sizeof(struct sGenericsFun*));
        it2_908=((struct sGenericsFun*)(__right_value966=map$2charphsGenericsFunphp_at(self,it_904,default_value_907)));
        come_call_finalizer3(__right_value966,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_911=charp_get_hash_key(it_904)%size_897;
        n_912=hash_911;
        while((_Bool)1) {
            if(            item_existance_900[n_912]) {
                n_912++;
                if(                n_912>=size_897) {
                    n_912=0;
                }
                else if(                n_912==hash_911) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_900[n_912]=(_Bool)1;
                keys_898[n_912]=it_904;
                items_899[n_912]=((struct sGenericsFun*)(__right_value967=map$2charphsGenericsFunphp_at(self,it_904,default_value_913)));
                come_call_finalizer3(__right_value967,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_901++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_898;
    self->items=items_899;
    self->item_existance=item_existance_900;
    self->size=size_897;
    self->len=len_901;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_902;
char* __result385__;
char* __result386__;
char* result_903;
char* __result387__;
result_902 = (void*)0;
result_903 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_902,0,sizeof(char*));
        __result385__ = gComeFunResultObject = __result_obj__ = result_902;
        gComeFunResultObject = (void*)0;
        return __result385__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result386__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result386__;
    }
    memset(&result_903,0,sizeof(char*));
    __result387__ = gComeFunResultObject = __result_obj__ = result_903;
    gComeFunResultObject = (void*)0;
    return __result387__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_905;
char* __result388__;
char* __result389__;
char* result_906;
char* __result390__;
result_905 = (void*)0;
result_906 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_905,0,sizeof(char*));
        __result388__ = gComeFunResultObject = __result_obj__ = result_905;
        gComeFunResultObject = (void*)0;
        return __result388__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result389__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result389__;
    }
    memset(&result_906,0,sizeof(char*));
    __result390__ = gComeFunResultObject = __result_obj__ = result_906;
    gComeFunResultObject = (void*)0;
    return __result390__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_909;
unsigned int it_910;
struct sGenericsFun* __result391__;
struct sGenericsFun* __result392__;
struct sGenericsFun* __result393__;
struct sGenericsFun* __result394__;
    hash_909=charp_get_hash_key(((char*)key))%self->size;
    it_910=hash_909;
    while((_Bool)1) {
        if(        self->item_existance[it_910]) {
            if(            charp_equals(self->keys[it_910],key)) {
                __result391__ = gComeFunResultObject = __result_obj__ = self->items[it_910];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result391__;
            }
            it_910++;
            if(            it_910>=self->size) {
                it_910=0;
            }
            else if(            it_910==hash_909) {
                __result392__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result392__;
            }
        }
        else {
            __result393__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result393__;
        }
    }
    __result394__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result394__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_960;
char* __dec_obj276;
char* last_code2_961;
char* __dec_obj277;
_Bool comma_instead_of_semicolon_962;
struct sClass* current_stack_frame_struct_963;
char* real_fun_name_964;
struct sFun* finalizer_965;
void* __right_value1050 = (void*)0;
struct sType* type_before_966;
void* __right_value1051 = (void*)0;
struct sType* type2_967;
void* __right_value1052 = (void*)0;
char* fun_name2_968;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
char* none_generics_name_969;
void* __right_value1055 = (void*)0;
char* generics_fun_name_970;
void* __right_value1056 = (void*)0;
struct sGenericsFun* generics_fun_971;
void* __right_value1057 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_975=0;
_Bool err_976=0;
void* __right_value1058 = (void*)0;
char* __dec_obj278;
int i_977;
void* __right_value1059 = (void*)0;
char* new_fun_name_978;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
char* __dec_obj279;
void* __right_value1062 = (void*)0;
char* __dec_obj280;
void* __right_value1063 = (void*)0;
char* __dec_obj281;
void* __right_value1064 = (void*)0;
char* user_real_fun_name_979;
void* __right_value1065 = (void*)0;
struct sFun* user_finalizer_980;
void* __right_value1066 = (void*)0;
struct sType* type2_981;
struct sClass* klass_982;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct buffer* source_983;
void* __right_value1069 = (void*)0;
struct list$1voidph* o2_saved_988;
struct tuple2$2charphsTypeph* it_989;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_990=0;
struct sType* field_type_991=0;
char* p_994;
int sline_995;
char* sname_996;
char* head_997;
struct buffer* source3_998;
struct buffer* __dec_obj287;
void* __right_value1070 = (void*)0;
char* __dec_obj288;
void* __right_value1071 = (void*)0;
struct sBlock* block_999;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
struct sType* result_type_1000;
void* __right_value1074 = (void*)0;
char* name_1001;
void* __right_value1075 = (void*)0;
struct sType* self_type_1002;
struct sType* __list_values21___1004[1];
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct list$1voidph* param_types_1003;
void* __right_value1078 = (void*)0;
char* __list_values22___1005[1];
void* __right_value1079 = (void*)0;
void* __right_value1080 = (void*)0;
struct list$1charph* param_names_1006;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct list$1charph* param_default_parametors_1007;
void* __right_value1083 = (void*)0;
void* __right_value1084 = (void*)0;
struct buffer* header_buf_1008;
void* __right_value1085 = (void*)0;
int i_1009;
void* __right_value1086 = (void*)0;
struct sType* param_type_1010;
void* __right_value1087 = (void*)0;
char* param_name_1011;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
struct sFun* fun2_1012;
void* __right_value1091 = (void*)0;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sFun* fun_1013;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1100 = (void*)0;
struct sNode* node_1014;
_Bool Value_1015;
struct buffer* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
char* __dec_obj292;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
struct tuple2$2sFunpcharph* __result413__;
memset(&i_977, 0, sizeof(int));
    last_code_960=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj276=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_961=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj277=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_962=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_963=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_964=((void*)0);
    finalizer_965=((void*)0);
    type_before_966=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_967=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_967->mHeap=(_Bool)0;
    fun_name2_968=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        finalizer_965=((struct sFun*)(__right_value1053=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_968)));
        come_call_finalizer3(__right_value1053,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_965==((void*)0)) {
            none_generics_name_969=(char*)come_increment_ref_count(get_none_generics_name(type2_967->mClass->mName));
            generics_fun_name_970=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_969,fun_name));
            generics_fun_971=((struct sGenericsFun*)(__right_value1056=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_970)));
            come_call_finalizer3(__right_value1056,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_971) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1057=create_generics_fun((char*)come_increment_ref_count(fun_name2_968),generics_fun_971,type,info)));
                name_975=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_976=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1057,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_976) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_965=((struct sFun*)(__right_value1058=map$2charphsFunphp_operator_load_element(info->funcs,name_975)));
                come_call_finalizer3(__right_value1058,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_975 = come_decrement_ref_count2(name_975, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_969 = come_decrement_ref_count2(none_generics_name_969, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_970 = come_decrement_ref_count2(generics_fun_name_970, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj278=real_fun_name_964;
        real_fun_name_964=(char*)come_increment_ref_count(fun_name2_968);
        __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_977=128-1;        i_977>=1;        i_977--        ){
            new_fun_name_978=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_968,i_977));
            finalizer_965=((struct sFun*)(__right_value1060=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_978)));
            come_call_finalizer3(__right_value1060,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_965) {
                __dec_obj279=fun_name2_968;
                fun_name2_968=(char*)come_increment_ref_count(__builtin_string(new_fun_name_978));
                __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_978 = come_decrement_ref_count2(new_fun_name_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_978 = come_decrement_ref_count2(new_fun_name_978, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_965==((void*)0)) {
            finalizer_965=((struct sFun*)(__right_value1062=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_968)));
            come_call_finalizer3(__right_value1062,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj280=real_fun_name_964;
        real_fun_name_964=(char*)come_increment_ref_count(fun_name2_968);
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_965==((void*)0)) {
        type=type_before_966;
        __dec_obj281=real_fun_name_964;
        real_fun_name_964=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_979=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_980=((struct sFun*)(__right_value1065=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_979)));
        come_call_finalizer3(__right_value1065,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        type2_981=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_981;
        klass_982=type->mClass;
        if(        type->mPointerNum>0&&klass_982->mStruct||type->mAllocaValue) {
            source_983=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3026, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_char(source_983,123);
            if(            user_finalizer_980) {
                char source2_984[1024];
                memset(&source2_984, 0, sizeof(char)                *(1024)                );
                snprintf(source2_984,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_979);
                buffer_append_str(source_983,source2_984);
            }
            klass_982=((struct sClass*)(__right_value1069=map$2charphsClassphp_operator_load_element(info->classes,klass_982->mName)));
            come_call_finalizer3(__right_value1069,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_988=(struct list$1voidph*)come_increment_ref_count((klass_982->mFields)),it_989=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_988)));            !list$1voidphp_end((o2_saved_988));            it_989=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_988)))            ){
                multiple_assign_var12=it_989;
                name_990=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_991=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_991->mHeap) {
                    char source2_992[1024];
                    memset(&source2_992, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_992,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_990,name_990,name_990,name_990);
                    buffer_append_str(source_983,source2_992);
                }
                else if(                field_type_991->mChannel) {
                    char source2_993[1024];
                    memset(&source2_993, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_993,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_990,name_990);
                    buffer_append_str(source_983,source2_993);
                    snprintf(source2_993,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_990,name_990);
                    buffer_append_str(source_983,source2_993);
                }
                name_990 = come_decrement_ref_count2(name_990, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_991,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_988,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_983,125);
            p_994=info->p;
            sline_995=info->sline;
            sname_996=(char*)come_increment_ref_count(info->sname);
            head_997=info->head;
            source3_998=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj287=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_983);
            come_call_finalizer3(__dec_obj287,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_983->buf;
            info->head=source_983->buf;
            __dec_obj288=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_964));
            __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_999=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1000=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3075, "struct sType", sType_finalize, sType_clone)),"void",(_Bool)0,info));
            name_1001=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_964));
            self_type_1002=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1002->mHeap=(_Bool)0;
            if(            self_type_1002->mPointerNum==0) {
                self_type_1002->mPointerNum=1;
            }
            if(            self_type_1002->mPointerNum>1) {
                self_type_1002->mPointerNum=1;
            }
            param_types_1003=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1004[0]=(struct sType*)come_increment_ref_count(self_type_1002),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3085, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values21___1004)));
            param_names_1006=(struct list$1charph*)come_increment_ref_count((__list_values22___1005[0]=(char*)come_increment_ref_count(((char*)(__right_value1078=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3086, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values22___1005)));
            __right_value1078 = come_decrement_ref_count2(__right_value1078, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_1007=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3087, "struct list$1charph*", (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_1007,((void*)0));
            header_buf_1008=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3090, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(header_buf_1008,((char*)(__right_value1085=make_come_type_name_string(result_type_1000,info))));
            __right_value1085 = come_decrement_ref_count2(__right_value1085, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1008," ");
            buffer_append_str(header_buf_1008,real_fun_name_964);
            buffer_append_str(header_buf_1008,"(");
            for(            i_1009=0;            i_1009<list$1voidphp_length(param_types_1003);            i_1009++            ){
                param_type_1010=((struct sType*)((void*)(__right_value1086=list$1voidphp_operator_load_element(param_types_1003,i_1009))));
                come_call_finalizer3(__right_value1086,(void*)0, 0, 1, 0, 0, __result_obj__);
                param_name_1011=((char*)(__right_value1087=list$1charphp_operator_load_element(param_names_1006,i_1009)));
                __right_value1087 = come_decrement_ref_count2(__right_value1087, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1008,((char*)(__right_value1088=make_come_type_name_string(param_type_1010,info))));
                __right_value1088 = come_decrement_ref_count2(__right_value1088, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1008," ");
                buffer_append_str(header_buf_1008,param_name_1011);
                if(                i_1009!=list$1voidphp_length(param_types_1003)-1) {
                    buffer_append_str(header_buf_1008,",");
                }
            }
            buffer_append_str(header_buf_1008,")");
            result_type_1000->mStatic=(_Bool)0;
            result_type_1000->mUniq=(_Bool)0;
            result_type_1000->mInline=(_Bool)0;
            result_type_1000->mGenerate=(_Bool)0;
            fun2_1012=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1089=__builtin_string(name_1001)))));
            __right_value1089 = come_decrement_ref_count2(__right_value1089, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_1012==((void*)0)||fun2_1012->mExternal) {
                fun_1013=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3118, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1001),(struct sType*)come_increment_ref_count(result_type_1000),(struct list$1voidph*)come_increment_ref_count(param_types_1003),(struct list$1charph*)come_increment_ref_count(param_names_1006),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1007),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_999),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1008)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1001)),(struct sFun*)come_increment_ref_count(fun_1013));
                finalizer_965=fun_1013;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3130, "struct sNode", (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1099=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3130, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1013),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1014=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1099,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1015=node_compile(node_1014,info);
                if(                !Value_1015) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1013,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_1014) { node_1014 = come_decrement_ref_count2(node_1014, ((struct sNode*)node_1014)->finalize, ((struct sNode*)node_1014)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_965=fun2_1012;
            }
            __dec_obj289=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_998);
            come_call_finalizer3(__dec_obj289,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_994;
            info->head=head_997;
            info->sline=sline_995;
            __dec_obj290=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_996);
            __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_983,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_996 = come_decrement_ref_count2(sname_996, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_998,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_999,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1000,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_1001 = come_decrement_ref_count2(name_1001, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_1002,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1003,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1006,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1007,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1012,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_979 = come_decrement_ref_count2(user_real_fun_name_979, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_981,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_963;
    __dec_obj291=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_960);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj292=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_961);
    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_962;
    __result413__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1104=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),finalizer_965,(char*)come_increment_ref_count(real_fun_name_964))));
    last_code_960 = come_decrement_ref_count2(last_code_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_961 = come_decrement_ref_count2(last_code2_961, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_964 = come_decrement_ref_count2(real_fun_name_964, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_966,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_967,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_968 = come_decrement_ref_count2(fun_name2_968, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1104,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result413__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_972;
unsigned int hash_973;
unsigned int it_974;
struct sGenericsFun* __result402__;
struct sGenericsFun* __result403__;
struct sGenericsFun* __result404__;
struct sGenericsFun* __result405__;
default_value_972 = (void*)0;
    memset(&default_value_972,0,sizeof(struct sGenericsFun*));
    hash_973=charp_get_hash_key(((char*)key))%self->size;
    it_974=hash_973;
    while((_Bool)1) {
        if(        self->item_existance[it_974]) {
            if(            charp_equals(self->keys[it_974],key)) {
                __result402__ = gComeFunResultObject = __result_obj__ = self->items[it_974];
                come_call_finalizer3(default_value_972,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result402__;
            }
            it_974++;
            if(            it_974>=self->size) {
                it_974=0;
            }
            else if(            it_974==hash_973) {
                __result403__ = gComeFunResultObject = __result_obj__ = default_value_972;
                come_call_finalizer3(default_value_972,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result403__;
            }
        }
        else {
            __result404__ = gComeFunResultObject = __result_obj__ = default_value_972;
            come_call_finalizer3(default_value_972,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result404__;
        }
    }
    __result405__ = gComeFunResultObject = __result_obj__ = default_value_972;
    come_call_finalizer3(default_value_972,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result405__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_985;
unsigned int hash_986;
unsigned int it_987;
struct sClass* __result406__;
struct sClass* __result407__;
struct sClass* __result408__;
struct sClass* __result409__;
default_value_985 = (void*)0;
    memset(&default_value_985,0,sizeof(struct sClass*));
    hash_986=charp_get_hash_key(((char*)key))%self->size;
    it_987=hash_986;
    while((_Bool)1) {
        if(        self->item_existance[it_987]) {
            if(            charp_equals(self->keys[it_987],key)) {
                __result406__ = gComeFunResultObject = __result_obj__ = self->items[it_987];
                come_call_finalizer3(default_value_985,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result406__;
            }
            it_987++;
            if(            it_987>=self->size) {
                it_987=0;
            }
            else if(            it_987==hash_986) {
                __result407__ = gComeFunResultObject = __result_obj__ = default_value_985;
                come_call_finalizer3(default_value_985,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result407__;
            }
        }
        else {
            __result408__ = gComeFunResultObject = __result_obj__ = default_value_985;
            come_call_finalizer3(default_value_985,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result408__;
        }
    }
    __result409__ = gComeFunResultObject = __result_obj__ = default_value_985;
    come_call_finalizer3(default_value_985,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result409__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj282;
struct list$1voidph* __dec_obj283;
char* __dec_obj284;
char* __dec_obj285;
char* __dec_obj286;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj282=self->mName;
            __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj283=self->mFields;
            come_call_finalizer3(__dec_obj283,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj284=self->mDeclareSName;
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj285=self->mParentClassName;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj286=self->mAttribute;
            __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj293;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj293=self->v2;
            __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFunpcharph* __result410__;
void* __right_value1101 = (void*)0;
struct tuple2$2sFunpcharph* result_1016;
void* __right_value1102 = (void*)0;
char* __dec_obj294;
struct tuple2$2sFunpcharph* __result411__;
    if(    self==(void*)0) {
        __result410__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result410__;
    }
    result_1016=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone));
    if(    self!=((void*)0)) {
        result_1016->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj294=result_1016->v2;
        result_1016->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result411__ = gComeFunResultObject = __result_obj__ = result_1016;
    come_call_finalizer3(result_1016,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result411__;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj295;
struct tuple2$2sFunpcharph* __result412__;
    self->v1=v1;
    __dec_obj295=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result412__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result412__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj296;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj296=self->v2;
            __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1017;
char* __dec_obj297;
char* last_code2_1018;
char* __dec_obj298;
_Bool comma_instead_of_semicolon_1019;
struct sClass* current_stack_frame_struct_1020;
struct sFun* equaler_1021;
void* __right_value1105 = (void*)0;
char* real_fun_name_1022;
void* __right_value1106 = (void*)0;
struct sType* type2_1023;
struct sClass* klass_1024;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct buffer* source_1025;
char* name_1026;
void* __right_value1109 = (void*)0;
struct list$1voidph* o2_saved_1028;
struct tuple2$2charphsTypeph* it_1029;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1030=0;
struct sType* field_type_1031=0;
char* p_1033;
int sline_1034;
char* sname_1035;
char* head_1036;
struct buffer* source3_1037;
struct buffer* __dec_obj299;
void* __right_value1110 = (void*)0;
char* __dec_obj300;
void* __right_value1111 = (void*)0;
struct sBlock* block_1038;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct sType* result_type_1039;
void* __right_value1114 = (void*)0;
char* name_1040;
void* __right_value1115 = (void*)0;
struct sType* left_type_1041;
void* __right_value1116 = (void*)0;
struct sType* right_type_1042;
struct sType* __list_values23___1044[2];
void* __right_value1117 = (void*)0;
void* __right_value1118 = (void*)0;
struct list$1voidph* param_types_1043;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
char* __list_values24___1045[2];
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct list$1charph* param_names_1046;
void* __right_value1123 = (void*)0;
void* __right_value1124 = (void*)0;
struct list$1charph* param_default_parametors_1047;
void* __right_value1125 = (void*)0;
void* __right_value1126 = (void*)0;
struct buffer* header_buf_1048;
void* __right_value1127 = (void*)0;
int i_1049;
void* __right_value1128 = (void*)0;
struct sType* param_type_1050;
void* __right_value1129 = (void*)0;
char* param_name_1051;
void* __right_value1130 = (void*)0;
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct sFun* fun2_1052;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
void* __right_value1136 = (void*)0;
void* __right_value1137 = (void*)0;
void* __right_value1138 = (void*)0;
struct sFun* fun_1053;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1142 = (void*)0;
struct sNode* node_1054;
_Bool Value_1055;
struct buffer* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
char* __dec_obj304;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct tuple2$2sFunpcharph* __result414__;
    last_code_1017=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj297=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1018=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj298=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1019=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1020=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1021=((void*)0);
    real_fun_name_1022=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1023=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1023;
    klass_1024=type->mClass;
    if(    type->mPointerNum>0&&!klass_1024->mNumber) {
        source_1025=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3181, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1025,123);
        if(        klass_1024->mProtocol) {
            name_1026="_protocol_obj";
            char source2_1027[1024];
            memset(&source2_1027, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1027,1024,"return left.%s.equals(right.%s);\n",name_1026,name_1026);
            buffer_append_str(source_1025,source2_1027);
        }
        else {
            klass_1024=((struct sClass*)(__right_value1109=map$2charphsClassphp_operator_load_element(info->classes,klass_1024->mName)));
            come_call_finalizer3(__right_value1109,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1028=(struct list$1voidph*)come_increment_ref_count((klass_1024->mFields)),it_1029=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1028)));            !list$1voidphp_end((o2_saved_1028));            it_1029=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1028)))            ){
                multiple_assign_var13=it_1029;
                name_1030=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1031=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1032[1024];
                memset(&source2_1032, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1032,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1030,name_1030,name_1030);
                buffer_append_str(source_1025,source2_1032);
                name_1030 = come_decrement_ref_count2(name_1030, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1031,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1028,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1025,"return true;");
        buffer_append_char(source_1025,125);
        p_1033=info->p;
        sline_1034=info->sline;
        sname_1035=(char*)come_increment_ref_count(info->sname);
        head_1036=info->head;
        source3_1037=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj299=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1025);
        come_call_finalizer3(__dec_obj299,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1025->buf;
        info->head=source_1025->buf;
        __dec_obj300=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1022));
        __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1038=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1039=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3221, "struct sType", sType_finalize, sType_clone)),"bool",(_Bool)0,info));
        name_1040=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1022));
        left_type_1041=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1041->mHeap=(_Bool)0;
        right_type_1042=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1042->mHeap=(_Bool)0;
        param_types_1043=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1044[0]=(struct sType*)come_increment_ref_count(left_type_1041),
__list_values23___1044[1]=(struct sType*)come_increment_ref_count(right_type_1042),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3227, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),2,__list_values23___1044)));
        param_names_1046=(struct list$1charph*)come_increment_ref_count((__list_values24___1045[0]=(char*)come_increment_ref_count(((char*)(__right_value1119=__builtin_string("left")))),
__list_values24___1045[1]=(char*)come_increment_ref_count(((char*)(__right_value1120=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3228, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),2,__list_values24___1045)));
        __right_value1119 = come_decrement_ref_count2(__right_value1119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1120 = come_decrement_ref_count2(__right_value1120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1047=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3229, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1047,((void*)0));
        list$1charphp_push_back(param_default_parametors_1047,((void*)0));
        header_buf_1048=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3233, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1048,((char*)(__right_value1127=make_come_type_name_string(result_type_1039,info))));
        __right_value1127 = come_decrement_ref_count2(__right_value1127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1048," ");
        buffer_append_str(header_buf_1048,real_fun_name_1022);
        buffer_append_str(header_buf_1048,"(");
        for(        i_1049=0;        i_1049<list$1voidphp_length(param_types_1043);        i_1049++        ){
            param_type_1050=((struct sType*)((void*)(__right_value1128=list$1voidphp_operator_load_element(param_types_1043,i_1049))));
            come_call_finalizer3(__right_value1128,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1051=((char*)(__right_value1129=list$1charphp_operator_load_element(param_names_1046,i_1049)));
            __right_value1129 = come_decrement_ref_count2(__right_value1129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1048,((char*)(__right_value1130=make_come_type_name_string(param_type_1050,info))));
            __right_value1130 = come_decrement_ref_count2(__right_value1130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1048," ");
            buffer_append_str(header_buf_1048,param_name_1051);
            if(            i_1049!=list$1voidphp_length(param_types_1043)-1) {
                buffer_append_str(header_buf_1048,",");
            }
        }
        buffer_append_str(header_buf_1048,")");
        result_type_1039->mStatic=(_Bool)0;
        result_type_1039->mUniq=(_Bool)0;
        result_type_1039->mInline=(_Bool)0;
        result_type_1039->mGenerate=(_Bool)0;
        fun2_1052=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1131=__builtin_string(name_1040)))));
        __right_value1131 = come_decrement_ref_count2(__right_value1131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1052==((void*)0)||fun2_1052->mExternal) {
            fun_1053=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1040),(struct sType*)come_increment_ref_count(result_type_1039),(struct list$1voidph*)come_increment_ref_count(param_types_1043),(struct list$1charph*)come_increment_ref_count(param_names_1046),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1047),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1038),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1048)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1040)),(struct sFun*)come_increment_ref_count(fun_1053));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3271, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1141=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3271, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1053),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1054=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1141,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1055=node_compile(node_1054,info);
            if(            !Value_1055) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1021=fun_1053;
            come_call_finalizer3(fun_1053,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1054) { node_1054 = come_decrement_ref_count2(node_1054, ((struct sNode*)node_1054)->finalize, ((struct sNode*)node_1054)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1021=fun2_1052;
        }
        __dec_obj301=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1037);
        come_call_finalizer3(__dec_obj301,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1033;
        info->head=head_1036;
        info->sline=sline_1034;
        __dec_obj302=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1035);
        __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1025,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1035 = come_decrement_ref_count2(sname_1035, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1037,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1038,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1039,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1040 = come_decrement_ref_count2(name_1040, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1041,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1042,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1043,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1046,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1047,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1048,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1052,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1020;
    __dec_obj303=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1017);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj304=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1018);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1019;
    __result414__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1144=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),equaler_1021,(char*)come_increment_ref_count(real_fun_name_1022))));
    last_code_1017 = come_decrement_ref_count2(last_code_1017, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1018 = come_decrement_ref_count2(last_code2_1018, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1022 = come_decrement_ref_count2(real_fun_name_1022, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1023,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1144,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1056;
char* __dec_obj305;
char* last_code2_1057;
char* __dec_obj306;
_Bool comma_instead_of_semicolon_1058;
struct sClass* current_stack_frame_struct_1059;
struct sFun* equaler_1060;
void* __right_value1145 = (void*)0;
char* real_fun_name_1061;
void* __right_value1146 = (void*)0;
struct sType* type2_1062;
struct sClass* klass_1063;
void* __right_value1147 = (void*)0;
void* __right_value1148 = (void*)0;
struct buffer* source_1064;
char* name_1065;
int i_1068;
void* __right_value1149 = (void*)0;
struct list$1voidph* o2_saved_1069;
struct tuple2$2charphsTypeph* it_1070;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1071=0;
struct sType* field_type_1072=0;
char* p_1076;
int sline_1077;
char* sname_1078;
char* head_1079;
struct buffer* source3_1080;
struct buffer* __dec_obj307;
void* __right_value1150 = (void*)0;
char* __dec_obj308;
void* __right_value1151 = (void*)0;
struct sBlock* block_1081;
void* __right_value1152 = (void*)0;
void* __right_value1153 = (void*)0;
struct sType* result_type_1082;
void* __right_value1154 = (void*)0;
char* name_1083;
void* __right_value1155 = (void*)0;
struct sType* left_type_1084;
void* __right_value1156 = (void*)0;
struct sType* right_type_1085;
struct sType* __list_values25___1087[2];
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct list$1voidph* param_types_1086;
void* __right_value1159 = (void*)0;
void* __right_value1160 = (void*)0;
char* __list_values26___1088[2];
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct list$1charph* param_names_1089;
void* __right_value1163 = (void*)0;
void* __right_value1164 = (void*)0;
struct list$1charph* param_default_parametors_1090;
void* __right_value1165 = (void*)0;
void* __right_value1166 = (void*)0;
struct buffer* header_buf_1091;
void* __right_value1167 = (void*)0;
int i_1092;
void* __right_value1168 = (void*)0;
struct sType* param_type_1093;
void* __right_value1169 = (void*)0;
char* param_name_1094;
void* __right_value1170 = (void*)0;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct sFun* fun2_1095;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
struct sFun* fun_1096;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1182 = (void*)0;
struct sNode* node_1097;
_Bool Value_1098;
struct buffer* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
char* __dec_obj312;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
struct tuple2$2sFunpcharph* __result415__;
    last_code_1056=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj305=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1057=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj306=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1058=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1059=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1060=((void*)0);
    real_fun_name_1061=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1062=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1062;
    klass_1063=type->mClass;
    if(    type->mPointerNum>0&&!klass_1063->mNumber) {
        source_1064=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1064,123);
        if(        klass_1063->mProtocol) {
            name_1065="_protocol_obj";
            char source2_1066[1024];
            memset(&source2_1066, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1066,1024,"return left.%s !== right.%s;\n",name_1065,name_1065);
            buffer_append_str(source_1064,source2_1066);
        }
        else {
            char source2_1067[1024];
            memset(&source2_1067, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1067,1024,"return !(");
            buffer_append_str(source_1064,source2_1067);
            snprintf(source2_1067,1024,"( ");
            buffer_append_str(source_1064,source2_1067);
            i_1068=0;
            klass_1063=((struct sClass*)(__right_value1149=map$2charphsClassphp_operator_load_element(info->classes,klass_1063->mName)));
            come_call_finalizer3(__right_value1149,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1069=(struct list$1voidph*)come_increment_ref_count((klass_1063->mFields)),it_1070=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1069)));            !list$1voidphp_end((o2_saved_1069));            it_1070=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1069)))            ){
                multiple_assign_var14=it_1070;
                name_1071=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1072=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1073[1024];
                memset(&source2_1073, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1073,1024,"(left.%s === right.%s)",name_1071,name_1071,name_1071);
                buffer_append_str(source_1064,source2_1073);
                if(                i_1068==list$1voidphp_length(klass_1063->mFields)-1) {
                    char source2_1074[1024];
                    memset(&source2_1074, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1074,1024,"));");
                    buffer_append_str(source_1064,source2_1074);
                }
                else {
                    char source2_1075[1024];
                    memset(&source2_1075, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1075,1024," && ");
                    buffer_append_str(source_1064,source2_1075);
                }
                i_1068++;
                name_1071 = come_decrement_ref_count2(name_1071, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1072,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1069,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1064,125);
        p_1076=info->p;
        sline_1077=info->sline;
        sname_1078=(char*)come_increment_ref_count(info->sname);
        head_1079=info->head;
        source3_1080=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj307=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1064);
        come_call_finalizer3(__dec_obj307,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1064->buf;
        info->head=source_1064->buf;
        __dec_obj308=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1061));
        __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1081=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1082=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3382, "struct sType", sType_finalize, sType_clone)),"bool",(_Bool)0,info));
        name_1083=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1061));
        left_type_1084=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1084->mHeap=(_Bool)0;
        right_type_1085=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1085->mHeap=(_Bool)0;
        param_types_1086=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1087[0]=(struct sType*)come_increment_ref_count(left_type_1084),
__list_values25___1087[1]=(struct sType*)come_increment_ref_count(right_type_1085),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3388, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),2,__list_values25___1087)));
        param_names_1089=(struct list$1charph*)come_increment_ref_count((__list_values26___1088[0]=(char*)come_increment_ref_count(((char*)(__right_value1159=__builtin_string("left")))),
__list_values26___1088[1]=(char*)come_increment_ref_count(((char*)(__right_value1160=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3389, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),2,__list_values26___1088)));
        __right_value1159 = come_decrement_ref_count2(__right_value1159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1160 = come_decrement_ref_count2(__right_value1160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1090=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3390, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1090,((void*)0));
        list$1charphp_push_back(param_default_parametors_1090,((void*)0));
        header_buf_1091=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3394, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1091,((char*)(__right_value1167=make_come_type_name_string(result_type_1082,info))));
        __right_value1167 = come_decrement_ref_count2(__right_value1167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1091," ");
        buffer_append_str(header_buf_1091,real_fun_name_1061);
        buffer_append_str(header_buf_1091,"(");
        for(        i_1092=0;        i_1092<list$1voidphp_length(param_types_1086);        i_1092++        ){
            param_type_1093=((struct sType*)((void*)(__right_value1168=list$1voidphp_operator_load_element(param_types_1086,i_1092))));
            come_call_finalizer3(__right_value1168,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1094=((char*)(__right_value1169=list$1charphp_operator_load_element(param_names_1089,i_1092)));
            __right_value1169 = come_decrement_ref_count2(__right_value1169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1091,((char*)(__right_value1170=make_come_type_name_string(param_type_1093,info))));
            __right_value1170 = come_decrement_ref_count2(__right_value1170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1091," ");
            buffer_append_str(header_buf_1091,param_name_1094);
            if(            i_1092!=list$1voidphp_length(param_types_1086)-1) {
                buffer_append_str(header_buf_1091,",");
            }
        }
        buffer_append_str(header_buf_1091,")");
        result_type_1082->mStatic=(_Bool)0;
        result_type_1082->mUniq=(_Bool)0;
        result_type_1082->mInline=(_Bool)0;
        result_type_1082->mGenerate=(_Bool)0;
        fun2_1095=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1171=__builtin_string(name_1083)))));
        __right_value1171 = come_decrement_ref_count2(__right_value1171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1095==((void*)0)||fun2_1095->mExternal) {
            fun_1096=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1083),(struct sType*)come_increment_ref_count(result_type_1082),(struct list$1voidph*)come_increment_ref_count(param_types_1086),(struct list$1charph*)come_increment_ref_count(param_names_1089),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1090),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1081),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1091)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1083)),(struct sFun*)come_increment_ref_count(fun_1096));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3432, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1181=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3432, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1096),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1097=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1181,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1098=node_compile(node_1097,info);
            if(            !Value_1098) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1060=fun_1096;
            come_call_finalizer3(fun_1096,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1097) { node_1097 = come_decrement_ref_count2(node_1097, ((struct sNode*)node_1097)->finalize, ((struct sNode*)node_1097)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1060=fun2_1095;
        }
        __dec_obj309=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1080);
        come_call_finalizer3(__dec_obj309,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1076;
        info->head=head_1079;
        info->sline=sline_1077;
        __dec_obj310=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1078);
        __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1064,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1078 = come_decrement_ref_count2(sname_1078, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1080,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1081,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1082,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1083 = come_decrement_ref_count2(name_1083, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1084,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1085,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1086,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1089,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1090,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1091,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1095,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1059;
    __dec_obj311=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1056);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj312=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1057);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1058;
    __result415__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1184=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3458, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),equaler_1060,(char*)come_increment_ref_count(real_fun_name_1061))));
    last_code_1056 = come_decrement_ref_count2(last_code_1056, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1057 = come_decrement_ref_count2(last_code2_1057, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1061 = come_decrement_ref_count2(real_fun_name_1061, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1062,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1184,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result415__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1099;
char* __dec_obj313;
char* last_code2_1100;
char* __dec_obj314;
_Bool comma_instead_of_semicolon_1101;
struct sClass* current_stack_frame_struct_1102;
struct sFun* equaler_1103;
void* __right_value1185 = (void*)0;
char* real_fun_name_1104;
void* __right_value1186 = (void*)0;
struct sType* type2_1105;
struct sClass* klass_1106;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
struct buffer* source_1107;
char* name_1108;
int i_1111;
void* __right_value1189 = (void*)0;
struct list$1voidph* o2_saved_1112;
struct tuple2$2charphsTypeph* it_1113;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1114=0;
struct sType* field_type_1115=0;
char* p_1119;
int sline_1120;
char* sname_1121;
char* head_1122;
struct buffer* source3_1123;
struct buffer* __dec_obj315;
void* __right_value1190 = (void*)0;
char* __dec_obj316;
void* __right_value1191 = (void*)0;
struct sBlock* block_1124;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct sType* result_type_1125;
void* __right_value1194 = (void*)0;
char* name_1126;
void* __right_value1195 = (void*)0;
struct sType* left_type_1127;
void* __right_value1196 = (void*)0;
struct sType* right_type_1128;
struct sType* __list_values27___1130[2];
void* __right_value1197 = (void*)0;
void* __right_value1198 = (void*)0;
struct list$1voidph* param_types_1129;
void* __right_value1199 = (void*)0;
void* __right_value1200 = (void*)0;
char* __list_values28___1131[2];
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct list$1charph* param_names_1132;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
struct list$1charph* param_default_parametors_1133;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct buffer* header_buf_1134;
void* __right_value1207 = (void*)0;
int i_1135;
void* __right_value1208 = (void*)0;
struct sType* param_type_1136;
void* __right_value1209 = (void*)0;
char* param_name_1137;
void* __right_value1210 = (void*)0;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct sFun* fun2_1138;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct sFun* fun_1139;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1222 = (void*)0;
struct sNode* node_1140;
_Bool Value_1141;
struct buffer* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
char* __dec_obj320;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
struct tuple2$2sFunpcharph* __result416__;
    last_code_1099=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj313=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1100=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj314=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1101=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1102=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1103=((void*)0);
    real_fun_name_1104=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1105=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1105;
    klass_1106=type->mClass;
    if(    type->mPointerNum>0&&!klass_1106->mNumber) {
        source_1107=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1107,123);
        if(        klass_1106->mProtocol) {
            name_1108="_protocol_obj";
            char source2_1109[1024];
            memset(&source2_1109, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1109,1024,"return !left.%s.equals(right.%s);\n",name_1108,name_1108);
            buffer_append_str(source_1107,source2_1109);
        }
        else {
            char source2_1110[1024];
            memset(&source2_1110, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1110,1024,"return !(");
            buffer_append_str(source_1107,source2_1110);
            i_1111=0;
            klass_1106=((struct sClass*)(__right_value1189=map$2charphsClassphp_operator_load_element(info->classes,klass_1106->mName)));
            come_call_finalizer3(__right_value1189,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1112=(struct list$1voidph*)come_increment_ref_count((klass_1106->mFields)),it_1113=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1112)));            !list$1voidphp_end((o2_saved_1112));            it_1113=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1112)))            ){
                multiple_assign_var15=it_1113;
                name_1114=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1115=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1116[1024];
                memset(&source2_1116, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1116,1024,"left.%s.equals(right.%s)",name_1114,name_1114);
                buffer_append_str(source_1107,source2_1116);
                if(                i_1111==list$1voidphp_length(klass_1106->mFields)-1) {
                    char source2_1117[1024];
                    memset(&source2_1117, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1117,1024,");");
                    buffer_append_str(source_1107,source2_1117);
                }
                else {
                    char source2_1118[1024];
                    memset(&source2_1118, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1118,1024," && ");
                    buffer_append_str(source_1107,source2_1118);
                }
                i_1111++;
                name_1114 = come_decrement_ref_count2(name_1114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1115,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1112,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1107,125);
        p_1119=info->p;
        sline_1120=info->sline;
        sname_1121=(char*)come_increment_ref_count(info->sname);
        head_1122=info->head;
        source3_1123=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj315=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1107);
        come_call_finalizer3(__dec_obj315,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1107->buf;
        info->head=source_1107->buf;
        __dec_obj316=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1104));
        __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1124=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1125=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType", sType_finalize, sType_clone)),"bool",(_Bool)0,info));
        name_1126=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1104));
        left_type_1127=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1127->mHeap=(_Bool)0;
        right_type_1128=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1128->mHeap=(_Bool)0;
        param_types_1129=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1130[0]=(struct sType*)come_increment_ref_count(left_type_1127),
__list_values27___1130[1]=(struct sType*)come_increment_ref_count(right_type_1128),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3546, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),2,__list_values27___1130)));
        param_names_1132=(struct list$1charph*)come_increment_ref_count((__list_values28___1131[0]=(char*)come_increment_ref_count(((char*)(__right_value1199=__builtin_string("left")))),
__list_values28___1131[1]=(char*)come_increment_ref_count(((char*)(__right_value1200=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3547, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),2,__list_values28___1131)));
        __right_value1199 = come_decrement_ref_count2(__right_value1199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1200 = come_decrement_ref_count2(__right_value1200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1133=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3548, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1133,((void*)0));
        list$1charphp_push_back(param_default_parametors_1133,((void*)0));
        header_buf_1134=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3552, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1134,((char*)(__right_value1207=make_come_type_name_string(result_type_1125,info))));
        __right_value1207 = come_decrement_ref_count2(__right_value1207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1134," ");
        buffer_append_str(header_buf_1134,real_fun_name_1104);
        buffer_append_str(header_buf_1134,"(");
        for(        i_1135=0;        i_1135<list$1voidphp_length(param_types_1129);        i_1135++        ){
            param_type_1136=((struct sType*)((void*)(__right_value1208=list$1voidphp_operator_load_element(param_types_1129,i_1135))));
            come_call_finalizer3(__right_value1208,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1137=((char*)(__right_value1209=list$1charphp_operator_load_element(param_names_1132,i_1135)));
            __right_value1209 = come_decrement_ref_count2(__right_value1209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1134,((char*)(__right_value1210=make_come_type_name_string(param_type_1136,info))));
            __right_value1210 = come_decrement_ref_count2(__right_value1210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1134," ");
            buffer_append_str(header_buf_1134,param_name_1137);
            if(            i_1135!=list$1voidphp_length(param_types_1129)-1) {
                buffer_append_str(header_buf_1134,",");
            }
        }
        buffer_append_str(header_buf_1134,")");
        result_type_1125->mStatic=(_Bool)0;
        result_type_1125->mUniq=(_Bool)0;
        result_type_1125->mInline=(_Bool)0;
        result_type_1125->mGenerate=(_Bool)0;
        fun2_1138=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1211=__builtin_string(name_1126)))));
        __right_value1211 = come_decrement_ref_count2(__right_value1211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1138==((void*)0)||fun2_1138->mExternal) {
            fun_1139=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3580, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1126),(struct sType*)come_increment_ref_count(result_type_1125),(struct list$1voidph*)come_increment_ref_count(param_types_1129),(struct list$1charph*)come_increment_ref_count(param_names_1132),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1133),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1124),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1134)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1126)),(struct sFun*)come_increment_ref_count(fun_1139));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3590, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1221=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3590, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1139),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1140=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1221,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1141=node_compile(node_1140,info);
            if(            !Value_1141) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1103=fun_1139;
            come_call_finalizer3(fun_1139,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1140) { node_1140 = come_decrement_ref_count2(node_1140, ((struct sNode*)node_1140)->finalize, ((struct sNode*)node_1140)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1103=fun2_1138;
        }
        __dec_obj317=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1123);
        come_call_finalizer3(__dec_obj317,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1119;
        info->head=head_1122;
        info->sline=sline_1120;
        __dec_obj318=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1121);
        __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1107,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1121 = come_decrement_ref_count2(sname_1121, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1123,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1124,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1125,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1126 = come_decrement_ref_count2(name_1126, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1127,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1128,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1129,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1132,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1133,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1134,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1138,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1102;
    __dec_obj319=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1099);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj320=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1100);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1101;
    __result416__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1224=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3616, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),equaler_1103,(char*)come_increment_ref_count(real_fun_name_1104))));
    last_code_1099 = come_decrement_ref_count2(last_code_1099, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1100 = come_decrement_ref_count2(last_code2_1100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1104 = come_decrement_ref_count2(real_fun_name_1104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1105,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1224,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1142;
char* __dec_obj321;
char* last_code2_1143;
char* __dec_obj322;
_Bool comma_instead_of_semicolon_1144;
struct sClass* current_stack_frame_struct_1145;
struct sFun* equaler_1146;
void* __right_value1225 = (void*)0;
char* real_fun_name_1147;
void* __right_value1226 = (void*)0;
struct sType* type2_1148;
struct sClass* klass_1149;
void* __right_value1227 = (void*)0;
void* __right_value1228 = (void*)0;
struct buffer* source_1150;
char* name_1151;
void* __right_value1229 = (void*)0;
struct list$1voidph* o2_saved_1154;
struct tuple2$2charphsTypeph* it_1155;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1156=0;
struct sType* field_type_1157=0;
char* p_1159;
int sline_1160;
char* sname_1161;
char* head_1162;
struct buffer* source3_1163;
struct buffer* __dec_obj323;
void* __right_value1230 = (void*)0;
char* __dec_obj324;
void* __right_value1231 = (void*)0;
struct sBlock* block_1164;
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct sType* result_type_1165;
void* __right_value1234 = (void*)0;
char* name_1166;
void* __right_value1235 = (void*)0;
struct sType* left_type_1167;
void* __right_value1236 = (void*)0;
struct sType* right_type_1168;
struct sType* __list_values29___1170[2];
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
struct list$1voidph* param_types_1169;
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
char* __list_values30___1171[2];
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct list$1charph* param_names_1172;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
struct list$1charph* param_default_parametors_1173;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
struct buffer* header_buf_1174;
void* __right_value1247 = (void*)0;
int i_1175;
void* __right_value1248 = (void*)0;
struct sType* param_type_1176;
void* __right_value1249 = (void*)0;
char* param_name_1177;
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct sFun* fun2_1178;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct sFun* fun_1179;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1262 = (void*)0;
struct sNode* node_1180;
_Bool Value_1181;
struct buffer* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
char* __dec_obj328;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
struct tuple2$2sFunpcharph* __result417__;
    last_code_1142=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj321=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1143=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj322=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1144=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1145=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1146=((void*)0);
    real_fun_name_1147=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1148=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1148;
    klass_1149=type->mClass;
    if(    type->mPointerNum>0&&!klass_1149->mNumber) {
        source_1150=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_char(source_1150,123);
        if(        klass_1149->mProtocol) {
            name_1151="_protocol_obj";
            char source2_1152[1024];
            memset(&source2_1152, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1152,1024,"return left.%s === right.%s;\n",name_1151,name_1151);
            buffer_append_str(source_1150,source2_1152);
        }
        else {
            char source2_1153[1024];
            memset(&source2_1153, 0, sizeof(char)            *(1024)            );
            klass_1149=((struct sClass*)(__right_value1229=map$2charphsClassphp_operator_load_element(info->classes,klass_1149->mName)));
            come_call_finalizer3(__right_value1229,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1154=(struct list$1voidph*)come_increment_ref_count((klass_1149->mFields)),it_1155=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1154)));            !list$1voidphp_end((o2_saved_1154));            it_1155=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1154)))            ){
                multiple_assign_var16=it_1155;
                name_1156=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1157=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1158[1024];
                memset(&source2_1158, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1158,1024,"if(left.%s !== right.%s) { return false; }\n",name_1156,name_1156,name_1156);
                buffer_append_str(source_1150,source2_1158);
                name_1156 = come_decrement_ref_count2(name_1156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1157,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1154,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1150,"return true;\n");
        buffer_append_char(source_1150,125);
        p_1159=info->p;
        sline_1160=info->sline;
        sname_1161=(char*)come_increment_ref_count(info->sname);
        head_1162=info->head;
        source3_1163=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj323=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1150);
        come_call_finalizer3(__dec_obj323,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1150->buf;
        info->head=source_1150->buf;
        __dec_obj324=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1147));
        __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1164=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1165=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3683, "struct sType", sType_finalize, sType_clone)),"bool",(_Bool)0,info));
        name_1166=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1147));
        left_type_1167=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1167->mHeap=(_Bool)0;
        right_type_1168=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1168->mHeap=(_Bool)0;
        param_types_1169=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1170[0]=(struct sType*)come_increment_ref_count(left_type_1167),
__list_values29___1170[1]=(struct sType*)come_increment_ref_count(right_type_1168),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3689, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),2,__list_values29___1170)));
        param_names_1172=(struct list$1charph*)come_increment_ref_count((__list_values30___1171[0]=(char*)come_increment_ref_count(((char*)(__right_value1239=__builtin_string("left")))),
__list_values30___1171[1]=(char*)come_increment_ref_count(((char*)(__right_value1240=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3690, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),2,__list_values30___1171)));
        __right_value1239 = come_decrement_ref_count2(__right_value1239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1240 = come_decrement_ref_count2(__right_value1240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1173=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3691, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1173,((void*)0));
        list$1charphp_push_back(param_default_parametors_1173,((void*)0));
        header_buf_1174=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3695, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1174,((char*)(__right_value1247=make_come_type_name_string(result_type_1165,info))));
        __right_value1247 = come_decrement_ref_count2(__right_value1247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1174," ");
        buffer_append_str(header_buf_1174,real_fun_name_1147);
        buffer_append_str(header_buf_1174,"(");
        for(        i_1175=0;        i_1175<list$1voidphp_length(param_types_1169);        i_1175++        ){
            param_type_1176=((struct sType*)((void*)(__right_value1248=list$1voidphp_operator_load_element(param_types_1169,i_1175))));
            come_call_finalizer3(__right_value1248,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1177=((char*)(__right_value1249=list$1charphp_operator_load_element(param_names_1172,i_1175)));
            __right_value1249 = come_decrement_ref_count2(__right_value1249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1174,((char*)(__right_value1250=make_come_type_name_string(param_type_1176,info))));
            __right_value1250 = come_decrement_ref_count2(__right_value1250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1174," ");
            buffer_append_str(header_buf_1174,param_name_1177);
            if(            i_1175!=list$1voidphp_length(param_types_1169)-1) {
                buffer_append_str(header_buf_1174,",");
            }
        }
        buffer_append_str(header_buf_1174,")");
        result_type_1165->mStatic=(_Bool)0;
        result_type_1165->mUniq=(_Bool)0;
        result_type_1165->mInline=(_Bool)0;
        result_type_1165->mGenerate=(_Bool)0;
        fun2_1178=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1251=__builtin_string(name_1166)))));
        __right_value1251 = come_decrement_ref_count2(__right_value1251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1178==((void*)0)||fun2_1178->mExternal) {
            fun_1179=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1166),(struct sType*)come_increment_ref_count(result_type_1165),(struct list$1voidph*)come_increment_ref_count(param_types_1169),(struct list$1charph*)come_increment_ref_count(param_names_1172),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1173),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1164),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1174)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1166)),(struct sFun*)come_increment_ref_count(fun_1179));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3733, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1261=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3733, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1179),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1180=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1261,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1181=node_compile(node_1180,info);
            if(            !Value_1181) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1146=fun_1179;
            come_call_finalizer3(fun_1179,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1180) { node_1180 = come_decrement_ref_count2(node_1180, ((struct sNode*)node_1180)->finalize, ((struct sNode*)node_1180)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1146=fun2_1178;
        }
        __dec_obj325=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1163);
        come_call_finalizer3(__dec_obj325,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1159;
        info->head=head_1162;
        info->sline=sline_1160;
        __dec_obj326=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1161);
        __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1150,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1161 = come_decrement_ref_count2(sname_1161, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1163,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1164,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1165,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1166 = come_decrement_ref_count2(name_1166, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1167,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1168,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1169,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1173,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1174,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1178,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1145;
    __dec_obj327=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1142);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj328=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1143);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1144;
    __result417__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1264=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),equaler_1146,(char*)come_increment_ref_count(real_fun_name_1147))));
    last_code_1142 = come_decrement_ref_count2(last_code_1142, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1143 = come_decrement_ref_count2(last_code2_1143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1147 = come_decrement_ref_count2(real_fun_name_1147, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1148,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1264,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
char* last_code_1182;
char* __dec_obj329;
char* last_code2_1183;
char* __dec_obj330;
_Bool comma_instead_of_semicolon_1184;
struct sClass* current_stack_frame_struct_1185;
struct sFun* cloner_1186;
void* __right_value1267 = (void*)0;
char* real_fun_name_1187;
void* __right_value1268 = (void*)0;
struct sType* type2_1188;
struct sClass* klass_1189;
char* fun_name2_1190;
void* __right_value1269 = (void*)0;
char* none_generics_name_1191;
void* __right_value1270 = (void*)0;
struct sType* obj_type_1192;
void* __right_value1271 = (void*)0;
char* __dec_obj331;
void* __right_value1272 = (void*)0;
char* fun_name3_1193;
void* __right_value1273 = (void*)0;
struct sGenericsFun* generics_fun_1194;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1195=0;
_Bool err_1196=0;
void* __right_value1276 = (void*)0;
void* __right_value1277 = (void*)0;
struct tuple2$2sFunpcharph* __result419__;
void* __right_value1278 = (void*)0;
void* __right_value1279 = (void*)0;
char* __dec_obj332;
void* __right_value1280 = (void*)0;
char* __dec_obj333;
int i_1197;
void* __right_value1281 = (void*)0;
char* new_fun_name_1198;
void* __right_value1282 = (void*)0;
void* __right_value1283 = (void*)0;
char* __dec_obj334;
void* __right_value1284 = (void*)0;
char* __dec_obj335;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct buffer* source_1199;
void* __right_value1287 = (void*)0;
char* name_1200;
void* __right_value1288 = (void*)0;
struct list$1voidph* o2_saved_1202;
struct tuple2$2charphsTypeph* it_1203;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1204=0;
struct sType* field_type_1205=0;
void* __right_value1289 = (void*)0;
struct list$1voidph* o2_saved_1208;
struct tuple2$2charphsTypeph* it_1209;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1210=0;
struct sType* field_type_1211=0;
char* p_1215;
int sline_1216;
char* sname_1217;
struct buffer* source3_1218;
char* head_1219;
struct buffer* __dec_obj336;
void* __right_value1290 = (void*)0;
char* __dec_obj337;
void* __right_value1291 = (void*)0;
struct sBlock* block_1220;
void* __right_value1292 = (void*)0;
struct sType* result_type_1221;
void* __right_value1293 = (void*)0;
char* name_1222;
void* __right_value1294 = (void*)0;
struct sType* self_type_1223;
struct sType* __list_values31___1225[1];
void* __right_value1295 = (void*)0;
void* __right_value1296 = (void*)0;
struct list$1voidph* param_types_1224;
void* __right_value1297 = (void*)0;
char* __list_values32___1226[1];
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct list$1charph* param_names_1227;
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct list$1charph* param_default_parametors_1228;
void* __right_value1302 = (void*)0;
void* __right_value1303 = (void*)0;
struct buffer* header_buf_1229;
void* __right_value1304 = (void*)0;
int i_1230;
void* __right_value1305 = (void*)0;
struct sType* param_type_1231;
void* __right_value1306 = (void*)0;
char* param_name_1232;
void* __right_value1307 = (void*)0;
void* __right_value1308 = (void*)0;
void* __right_value1309 = (void*)0;
struct sFun* fun2_1233;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
void* __right_value1312 = (void*)0;
void* __right_value1313 = (void*)0;
void* __right_value1314 = (void*)0;
void* __right_value1315 = (void*)0;
struct sFun* fun_1234;
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
void* __right_value1318 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1319 = (void*)0;
struct sNode* node_1235;
_Bool Value_1236;
char* __dec_obj338;
struct buffer* __dec_obj339;
char* __dec_obj340;
char* __dec_obj341;
void* __right_value1320 = (void*)0;
void* __right_value1321 = (void*)0;
struct tuple2$2sFunpcharph* __result420__;
fun_name2_1190 = (void*)0;
memset(&i_1197, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1266=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3765, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1266,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result418__;
    }
    last_code_1182=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj329=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1183=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj330=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1184=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1185=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1186=((void*)0);
    real_fun_name_1187=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1188=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1188;
    klass_1189=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1191=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1192=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj331=fun_name2_1190;
        fun_name2_1190=(char*)come_increment_ref_count(create_method_name(obj_type_1192,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1193=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1191,fun_name));
        generics_fun_1194=((struct sGenericsFun*)(__right_value1273=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_1193,((void*)0))));
        come_call_finalizer3(__right_value1273,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1194) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1275=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1190)),generics_fun_1194,obj_type_1192,info)));
            name_1195=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1196=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1275,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1196) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result419__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1277=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3805, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1195 = come_decrement_ref_count2(name_1195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1191 = come_decrement_ref_count2(none_generics_name_1191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1192,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1193 = come_decrement_ref_count2(fun_name3_1193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1182 = come_decrement_ref_count2(last_code_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1183 = come_decrement_ref_count2(last_code2_1183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1187 = come_decrement_ref_count2(real_fun_name_1187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1190 = come_decrement_ref_count2(fun_name2_1190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1277,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result419__;
                }
            }
            cloner_1186=((struct sFun*)(__right_value1278=map$2charphsFunphp_operator_load_element(info->funcs,name_1195)));
            come_call_finalizer3(__right_value1278,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            name_1195 = come_decrement_ref_count2(name_1195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1186=((struct sFun*)(__right_value1279=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1190)));
            come_call_finalizer3(__right_value1279,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj332=real_fun_name_1187;
        real_fun_name_1187=(char*)come_increment_ref_count(fun_name2_1190);
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1191 = come_decrement_ref_count2(none_generics_name_1191, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1192,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1193 = come_decrement_ref_count2(fun_name3_1193, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj333=fun_name2_1190;
        fun_name2_1190=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1197=128-1;        i_1197>=1;        i_1197--        ){
            new_fun_name_1198=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1190,i_1197));
            cloner_1186=((struct sFun*)(__right_value1282=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1198)));
            come_call_finalizer3(__right_value1282,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1186) {
                __dec_obj334=fun_name2_1190;
                fun_name2_1190=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1198));
                __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1198 = come_decrement_ref_count2(new_fun_name_1198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1198 = come_decrement_ref_count2(new_fun_name_1198, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1186==((void*)0)) {
            cloner_1186=((struct sFun*)(__right_value1284=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1190)));
            come_call_finalizer3(__right_value1284,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj335=real_fun_name_1187;
        real_fun_name_1187=(char*)come_increment_ref_count(fun_name2_1190);
        __dec_obj335 = come_decrement_ref_count2(__dec_obj335, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1186==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1199=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3840, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1199,"{\n");
        buffer_append_str(source_1199,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1199,"var result = new %s~;\n",((char*)(__right_value1287=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1287 = come_decrement_ref_count2(__right_value1287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1189->mProtocol) {
            name_1200="_protocol_obj";
            char source2_1201[1024];
            memset(&source2_1201, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1201,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1199,source2_1201);
            klass_1189=((struct sClass*)(__right_value1288=map$2charphsClassphp_operator_load_element(info->classes,klass_1189->mName)));
            come_call_finalizer3(__right_value1288,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1202=(struct list$1voidph*)come_increment_ref_count((klass_1189->mFields)),it_1203=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1202)));            !list$1voidphp_end((o2_saved_1202));            it_1203=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1202)))            ){
                multiple_assign_var18=it_1203;
                name_1204=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1205=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1204,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1205->mArrayNum)>0) {
                    char source2_1206[1024];
                    memset(&source2_1206, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1206,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1204,name_1204,name_1204);
                    buffer_append_str(source_1199,source2_1206);
                }
                else {
                    char source2_1207[1024];
                    memset(&source2_1207, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1207,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1204,name_1204);
                    buffer_append_str(source_1199,source2_1207);
                }
                name_1204 = come_decrement_ref_count2(name_1204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1205,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1202,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1189=((struct sClass*)(__right_value1289=map$2charphsClassphp_operator_load_element(info->classes,klass_1189->mName)));
            come_call_finalizer3(__right_value1289,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1208=(struct list$1voidph*)come_increment_ref_count((klass_1189->mFields)),it_1209=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1208)));            !list$1voidphp_end((o2_saved_1208));            it_1209=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1208)))            ){
                multiple_assign_var19=it_1209;
                name_1210=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1211=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1211->mHeap) {
                    char source2_1212[1024];
                    memset(&source2_1212, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1212,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1210,name_1210,name_1210);
                    buffer_append_str(source_1199,source2_1212);
                }
                else if(                list$1sNodephp_length(field_type_1211->mArrayNum)>0) {
                    char source2_1213[1024];
                    memset(&source2_1213, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1213,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1210,name_1210,name_1210);
                    buffer_append_str(source_1199,source2_1213);
                }
                else {
                    char source2_1214[1024];
                    memset(&source2_1214, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1214,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1210,name_1210);
                    buffer_append_str(source_1199,source2_1214);
                }
                name_1210 = come_decrement_ref_count2(name_1210, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1211,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1208,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1199,"return result;");
        buffer_append_char(source_1199,125);
        p_1215=info->p;
        sline_1216=info->sline;
        sname_1217=(char*)come_increment_ref_count(info->sname);
        source3_1218=(struct buffer*)come_increment_ref_count(info->source);
        head_1219=info->head;
        __dec_obj336=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1199);
        come_call_finalizer3(__dec_obj336,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1187));
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1220=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1221=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1222=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1187));
        self_type_1223=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1223->mHeap=(_Bool)0;
        param_types_1224=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1225[0]=(struct sType*)come_increment_ref_count(self_type_1223),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3921, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values31___1225)));
        param_names_1227=(struct list$1charph*)come_increment_ref_count((__list_values32___1226[0]=(char*)come_increment_ref_count(((char*)(__right_value1297=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3922, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values32___1226)));
        __right_value1297 = come_decrement_ref_count2(__right_value1297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1228=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3923, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1228,((void*)0));
        header_buf_1229=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3926, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1229,((char*)(__right_value1304=make_come_type_name_string(result_type_1221,info))));
        __right_value1304 = come_decrement_ref_count2(__right_value1304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1229," ");
        buffer_append_str(header_buf_1229,real_fun_name_1187);
        buffer_append_str(header_buf_1229,"(");
        for(        i_1230=0;        i_1230<list$1voidphp_length(param_types_1224);        i_1230++        ){
            param_type_1231=((struct sType*)((void*)(__right_value1305=list$1voidphp_operator_load_element(param_types_1224,i_1230))));
            come_call_finalizer3(__right_value1305,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1232=((char*)(__right_value1306=list$1charphp_operator_load_element(param_names_1227,i_1230)));
            __right_value1306 = come_decrement_ref_count2(__right_value1306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1229,((char*)(__right_value1307=make_come_type_name_string(param_type_1231,info))));
            __right_value1307 = come_decrement_ref_count2(__right_value1307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1229," ");
            buffer_append_str(header_buf_1229,param_name_1232);
            if(            i_1230!=list$1voidphp_length(param_types_1224)-1) {
                buffer_append_str(header_buf_1229,",");
            }
        }
        buffer_append_str(header_buf_1229,")");
        result_type_1221->mStatic=(_Bool)0;
        result_type_1221->mUniq=(_Bool)0;
        result_type_1221->mInline=(_Bool)0;
        result_type_1221->mGenerate=(_Bool)0;
        fun2_1233=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1308=__builtin_string(name_1222)))));
        __right_value1308 = come_decrement_ref_count2(__right_value1308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1233==((void*)0)||fun2_1233->mExternal) {
            fun_1234=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3955, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1222),(struct sType*)come_increment_ref_count(result_type_1221),(struct list$1voidph*)come_increment_ref_count(param_types_1224),(struct list$1charph*)come_increment_ref_count(param_names_1227),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1228),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1220),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1229)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1234->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1222)),(struct sFun*)come_increment_ref_count(fun_1234));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3967, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1318=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3967, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1234),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1235=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1318,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1236=node_compile(node_1235,info);
            if(            !Value_1236) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1186=fun_1234;
            come_call_finalizer3(fun_1234,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1235) { node_1235 = come_decrement_ref_count2(node_1235, ((struct sNode*)node_1235)->finalize, ((struct sNode*)node_1235)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1186=fun2_1233;
        }
        __dec_obj338=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1217);
        __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1216;
        __dec_obj339=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1218);
        come_call_finalizer3(__dec_obj339,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1215;
        info->head=head_1219;
        info->sline=sline_1216;
        come_call_finalizer3(source_1199,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1217 = come_decrement_ref_count2(sname_1217, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1218,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1220,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1221,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1222 = come_decrement_ref_count2(name_1222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1223,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1224,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1227,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1228,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1229,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1233,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1185;
    __dec_obj340=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1182);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj341=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1183);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1184;
    __result420__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1321=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3995, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),cloner_1186,(char*)come_increment_ref_count(real_fun_name_1187))));
    last_code_1182 = come_decrement_ref_count2(last_code_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1183 = come_decrement_ref_count2(last_code2_1183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1187 = come_decrement_ref_count2(real_fun_name_1187, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1190 = come_decrement_ref_count2(fun_name2_1190, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1321,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1237;
char* __dec_obj342;
char* last_code2_1238;
char* __dec_obj343;
_Bool comma_instead_of_semicolon_1239;
struct sClass* current_stack_frame_struct_1240;
struct sFun* cloner_1241;
void* __right_value1322 = (void*)0;
char* real_fun_name_1242;
void* __right_value1323 = (void*)0;
struct sType* type2_1243;
struct sClass* klass_1244;
void* __right_value1324 = (void*)0;
void* __right_value1325 = (void*)0;
struct buffer* source_1245;
int i_1246;
void* __right_value1326 = (void*)0;
struct list$1voidph* o2_saved_1247;
struct tuple2$2charphsTypeph* it_1248;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1249=0;
struct sType* field_type_1250=0;
char* p_1253;
int sline_1254;
char* sname_1255;
struct buffer* source3_1256;
char* head_1257;
struct buffer* __dec_obj344;
void* __right_value1327 = (void*)0;
char* __dec_obj345;
void* __right_value1328 = (void*)0;
struct sBlock* block_1258;
void* __right_value1329 = (void*)0;
void* __right_value1330 = (void*)0;
struct sType* result_type_1259;
void* __right_value1331 = (void*)0;
char* name_1260;
void* __right_value1332 = (void*)0;
struct sType* self_type_1261;
struct sType* __list_values33___1263[1];
void* __right_value1333 = (void*)0;
void* __right_value1334 = (void*)0;
struct list$1voidph* param_types_1262;
void* __right_value1335 = (void*)0;
char* __list_values34___1264[1];
void* __right_value1336 = (void*)0;
void* __right_value1337 = (void*)0;
struct list$1charph* param_names_1265;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
struct list$1charph* param_default_parametors_1266;
void* __right_value1340 = (void*)0;
void* __right_value1341 = (void*)0;
struct buffer* header_buf_1267;
void* __right_value1342 = (void*)0;
int i_1268;
void* __right_value1343 = (void*)0;
struct sType* param_type_1269;
void* __right_value1344 = (void*)0;
char* param_name_1270;
void* __right_value1345 = (void*)0;
void* __right_value1346 = (void*)0;
void* __right_value1347 = (void*)0;
struct sFun* fun2_1271;
void* __right_value1348 = (void*)0;
void* __right_value1349 = (void*)0;
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
void* __right_value1352 = (void*)0;
void* __right_value1353 = (void*)0;
struct sFun* fun_1272;
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
void* __right_value1356 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1357 = (void*)0;
struct sNode* node_1273;
_Bool Value_1274;
char* __dec_obj346;
struct buffer* __dec_obj347;
char* __dec_obj348;
char* __dec_obj349;
void* __right_value1358 = (void*)0;
void* __right_value1359 = (void*)0;
struct tuple2$2sFunpcharph* __result421__;
    last_code_1237=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj342=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1238=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj343=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj343 = come_decrement_ref_count2(__dec_obj343, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1239=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1240=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1241=((void*)0);
    real_fun_name_1242=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1243=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1243;
    klass_1244=type->mClass;
    if(    type->mPointerNum>0&&!klass_1244->mNumber) {
        source_1245=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4020, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1245,"{\n");
        buffer_append_str(source_1245,"var result = new buffer();\n");
        buffer_append_format(source_1245,"result.append_str(\"%s {\");\n",klass_1244->mName);
        i_1246=0;
        klass_1244=((struct sClass*)(__right_value1326=map$2charphsClassphp_operator_load_element(info->classes,klass_1244->mName)));
        come_call_finalizer3(__right_value1326,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1247=(struct list$1voidph*)come_increment_ref_count((klass_1244->mFields)),it_1248=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1247)));        !list$1voidphp_end((o2_saved_1247));        it_1248=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1247)))        ){
            multiple_assign_var20=it_1248;
            name_1249=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1250=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1246==list$1voidphp_length(klass_1244->mFields)-1) {
                char source2_1251[1024];
                memset(&source2_1251, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1251,1024,"result.append_str(\"%s:\");\n",name_1249);
                buffer_append_str(source_1245,source2_1251);
                snprintf(source2_1251,1024,"result.append_str(self.%s.to_string());\n",name_1249);
                buffer_append_str(source_1245,source2_1251);
            }
            else {
                char source2_1252[1024];
                memset(&source2_1252, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1252,1024,"result.append_str(\"%s:\");\n",name_1249);
                buffer_append_str(source_1245,source2_1252);
                snprintf(source2_1252,1024,"result.append_str(self.%s.to_string());\n",name_1249);
                buffer_append_str(source_1245,source2_1252);
                snprintf(source2_1252,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1245,source2_1252);
            }
            i_1246++;
            name_1249 = come_decrement_ref_count2(name_1249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1250,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1247,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1245,"result.append_str(\"}\");\n");
        buffer_append_format(source_1245,"return result.to_string();\n");
        buffer_append_char(source_1245,125);
        p_1253=info->p;
        sline_1254=info->sline;
        sname_1255=(char*)come_increment_ref_count(info->sname);
        source3_1256=(struct buffer*)come_increment_ref_count(info->source);
        head_1257=info->head;
        __dec_obj344=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1245);
        come_call_finalizer3(__dec_obj344,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1242));
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1258=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1259=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4081, "struct sType", sType_finalize, sType_clone)),"char*",(_Bool)0,info));
        result_type_1259->mHeap=(_Bool)1;
        name_1260=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1242));
        self_type_1261=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1261->mHeap=(_Bool)0;
        param_types_1262=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1263[0]=(struct sType*)come_increment_ref_count(self_type_1261),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4086, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values33___1263)));
        param_names_1265=(struct list$1charph*)come_increment_ref_count((__list_values34___1264[0]=(char*)come_increment_ref_count(((char*)(__right_value1335=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4087, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values34___1264)));
        __right_value1335 = come_decrement_ref_count2(__right_value1335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1266=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4088, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1266,((void*)0));
        header_buf_1267=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4091, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1267,((char*)(__right_value1342=make_come_type_name_string(result_type_1259,info))));
        __right_value1342 = come_decrement_ref_count2(__right_value1342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1267," ");
        buffer_append_str(header_buf_1267,real_fun_name_1242);
        buffer_append_str(header_buf_1267,"(");
        for(        i_1268=0;        i_1268<list$1voidphp_length(param_types_1262);        i_1268++        ){
            param_type_1269=((struct sType*)((void*)(__right_value1343=list$1voidphp_operator_load_element(param_types_1262,i_1268))));
            come_call_finalizer3(__right_value1343,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1270=((char*)(__right_value1344=list$1charphp_operator_load_element(param_names_1265,i_1268)));
            __right_value1344 = come_decrement_ref_count2(__right_value1344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1267,((char*)(__right_value1345=make_come_type_name_string(param_type_1269,info))));
            __right_value1345 = come_decrement_ref_count2(__right_value1345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1267," ");
            buffer_append_str(header_buf_1267,param_name_1270);
            if(            i_1268!=list$1voidphp_length(param_types_1262)-1) {
                buffer_append_str(header_buf_1267,",");
            }
        }
        buffer_append_str(header_buf_1267,")");
        result_type_1259->mStatic=(_Bool)0;
        result_type_1259->mUniq=(_Bool)0;
        result_type_1259->mInline=(_Bool)0;
        result_type_1259->mGenerate=(_Bool)0;
        fun2_1271=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1346=__builtin_string(name_1260)))));
        __right_value1346 = come_decrement_ref_count2(__right_value1346, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1271==((void*)0)||fun2_1271->mExternal) {
            fun_1272=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4119, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1260),(struct sType*)come_increment_ref_count(result_type_1259),(struct list$1voidph*)come_increment_ref_count(param_types_1262),(struct list$1charph*)come_increment_ref_count(param_names_1265),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1266),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1258),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1267)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1272->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1260)),(struct sFun*)come_increment_ref_count(fun_1272));
            cloner_1241=fun_1272;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4133, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1356=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4133, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1272),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1273=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1356,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1274=node_compile(node_1273,info);
            if(            !Value_1274) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1272,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1273) { node_1273 = come_decrement_ref_count2(node_1273, ((struct sNode*)node_1273)->finalize, ((struct sNode*)node_1273)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1241=fun2_1271;
        }
        __dec_obj346=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1255);
        __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1254;
        __dec_obj347=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1256);
        come_call_finalizer3(__dec_obj347,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1253;
        info->head=head_1257;
        info->sline=sline_1254;
        come_call_finalizer3(source_1245,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1255 = come_decrement_ref_count2(sname_1255, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1256,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1258,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1259,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1260 = come_decrement_ref_count2(name_1260, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1261,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1262,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1265,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1267,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1271,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1240;
    __dec_obj348=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1237);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj349=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1238);
    __dec_obj349 = come_decrement_ref_count2(__dec_obj349, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1239;
    __result421__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1359=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4159, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),cloner_1241,(char*)come_increment_ref_count(real_fun_name_1242))));
    last_code_1237 = come_decrement_ref_count2(last_code_1237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1238 = come_decrement_ref_count2(last_code2_1238, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1242 = come_decrement_ref_count2(real_fun_name_1242, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1359,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1322;
char* __dec_obj360;
char* last_code2_1323;
char* __dec_obj361;
_Bool comma_instead_of_semicolon_1324;
struct sClass* current_stack_frame_struct_1325;
struct sFun* get_hash_key_fun_1326;
void* __right_value1410 = (void*)0;
char* real_fun_name_1327;
void* __right_value1411 = (void*)0;
struct sType* type2_1328;
struct sClass* klass_1329;
void* __right_value1412 = (void*)0;
void* __right_value1413 = (void*)0;
char* none_generics_name_1330;
void* __right_value1414 = (void*)0;
char* generics_fun_name_1331;
void* __right_value1415 = (void*)0;
struct sGenericsFun* generics_fun_1332;
void* __right_value1416 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1333=0;
_Bool err_1334=0;
void* __right_value1417 = (void*)0;
int i_1335;
void* __right_value1418 = (void*)0;
char* new_fun_name_1336;
void* __right_value1419 = (void*)0;
void* __right_value1420 = (void*)0;
char* __dec_obj362;
void* __right_value1421 = (void*)0;
void* __right_value1422 = (void*)0;
void* __right_value1423 = (void*)0;
struct buffer* source_1337;
int i_1338;
void* __right_value1424 = (void*)0;
struct list$1voidph* o2_saved_1339;
struct tuple2$2charphsTypeph* it_1340;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1341=0;
struct sType* field_type_1342=0;
char* p_1344;
int sline_1345;
char* sname_1346;
struct buffer* source3_1347;
char* head_1348;
struct buffer* __dec_obj363;
void* __right_value1425 = (void*)0;
char* __dec_obj364;
void* __right_value1426 = (void*)0;
struct sBlock* block_1349;
void* __right_value1427 = (void*)0;
void* __right_value1428 = (void*)0;
struct sType* result_type_1350;
void* __right_value1429 = (void*)0;
char* name_1351;
void* __right_value1430 = (void*)0;
struct sType* self_type_1352;
struct sType* __list_values37___1354[1];
void* __right_value1431 = (void*)0;
void* __right_value1432 = (void*)0;
struct list$1voidph* param_types_1353;
void* __right_value1433 = (void*)0;
char* __list_values38___1355[1];
void* __right_value1434 = (void*)0;
void* __right_value1435 = (void*)0;
struct list$1charph* param_names_1356;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
struct list$1charph* param_default_parametors_1357;
void* __right_value1438 = (void*)0;
void* __right_value1439 = (void*)0;
struct buffer* header_buf_1358;
void* __right_value1440 = (void*)0;
int i_1359;
void* __right_value1441 = (void*)0;
struct sType* param_type_1360;
void* __right_value1442 = (void*)0;
char* param_name_1361;
void* __right_value1443 = (void*)0;
void* __right_value1444 = (void*)0;
void* __right_value1445 = (void*)0;
struct sFun* fun2_1362;
void* __right_value1446 = (void*)0;
void* __right_value1447 = (void*)0;
void* __right_value1448 = (void*)0;
void* __right_value1449 = (void*)0;
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
struct sFun* fun_1363;
void* __right_value1452 = (void*)0;
void* __right_value1453 = (void*)0;
void* __right_value1454 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1455 = (void*)0;
struct sNode* node_1364;
_Bool Value_1365;
char* __dec_obj365;
struct buffer* __dec_obj366;
char* __dec_obj367;
char* __dec_obj368;
void* __right_value1456 = (void*)0;
void* __right_value1457 = (void*)0;
struct tuple2$2sFunpcharph* __result423__;
memset(&i_1335, 0, sizeof(int));
    last_code_1322=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj360=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1323=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj361=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1324=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1325=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1326=((void*)0);
    real_fun_name_1327=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1328=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1328;
    klass_1329=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1326=((struct sFun*)(__right_value1412=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1327)));
        come_call_finalizer3(__right_value1412,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1326==((void*)0)) {
            none_generics_name_1330=(char*)come_increment_ref_count(get_none_generics_name(type2_1328->mClass->mName));
            generics_fun_name_1331=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1330,fun_name));
            generics_fun_1332=((struct sGenericsFun*)(__right_value1415=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_1331)));
            come_call_finalizer3(__right_value1415,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1332) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1416=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1327),generics_fun_1332,type,info)));
                name_1333=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1334=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1416,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1334) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1326=((struct sFun*)(__right_value1417=map$2charphsFunphp_operator_load_element(info->funcs,name_1333)));
                come_call_finalizer3(__right_value1417,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_1333 = come_decrement_ref_count2(name_1333, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1330 = come_decrement_ref_count2(none_generics_name_1330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1331 = come_decrement_ref_count2(generics_fun_name_1331, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1335=128-1;        i_1335>=1;        i_1335--        ){
            new_fun_name_1336=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1327,i_1335));
            get_hash_key_fun_1326=((struct sFun*)(__right_value1419=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1336)));
            come_call_finalizer3(__right_value1419,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1326) {
                __dec_obj362=real_fun_name_1327;
                real_fun_name_1327=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1336));
                __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1336 = come_decrement_ref_count2(new_fun_name_1336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1336 = come_decrement_ref_count2(new_fun_name_1336, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1326==((void*)0)) {
            get_hash_key_fun_1326=((struct sFun*)(__right_value1421=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1327)));
            come_call_finalizer3(__right_value1421,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1326==((void*)0)&&type->mPointerNum>0&&!klass_1329->mNumber&&!klass_1329->mProtocol) {
        source_1337=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4447, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(source_1337,"{\n");
        buffer_append_str(source_1337,"unsigned int result = 0;\n");
        i_1338=0;
        klass_1329=((struct sClass*)(__right_value1424=map$2charphsClassphp_operator_load_element(info->classes,klass_1329->mName)));
        come_call_finalizer3(__right_value1424,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1339=(struct list$1voidph*)come_increment_ref_count((klass_1329->mFields)),it_1340=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1339)));        !list$1voidphp_end((o2_saved_1339));        it_1340=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1339)))        ){
            multiple_assign_var24=it_1340;
            name_1341=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1342=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1343[1024];
            memset(&source2_1343, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1343,1024,"result += self.%s.get_hash_key();\n",name_1341);
            buffer_append_str(source_1337,source2_1343);
            i_1338++;
            name_1341 = come_decrement_ref_count2(name_1341, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1342,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1339,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1337,"return result;\n");
        buffer_append_char(source_1337,125);
        p_1344=info->p;
        sline_1345=info->sline;
        sname_1346=(char*)come_increment_ref_count(info->sname);
        source3_1347=(struct buffer*)come_increment_ref_count(info->source);
        head_1348=info->head;
        __dec_obj363=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1337);
        come_call_finalizer3(__dec_obj363,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1327));
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1349=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1350=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4484, "struct sType", sType_finalize, sType_clone)),"int",(_Bool)0,info));
        result_type_1350->mUnsigned=(_Bool)1;
        name_1351=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1327));
        self_type_1352=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1352->mHeap=(_Bool)0;
        param_types_1353=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1354[0]=(struct sType*)come_increment_ref_count(self_type_1352),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4489, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone)),1,__list_values37___1354)));
        param_names_1356=(struct list$1charph*)come_increment_ref_count((__list_values38___1355[0]=(char*)come_increment_ref_count(((char*)(__right_value1433=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4490, "struct list$1charph", list$1charph_finalize, list$1charph_clone)),1,__list_values38___1355)));
        __right_value1433 = come_decrement_ref_count2(__right_value1433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1357=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4491, "struct list$1charph*", (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1357,((void*)0));
        header_buf_1358=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4494, "struct buffer*", (void*)0, (void*)0))));
        buffer_append_str(header_buf_1358,((char*)(__right_value1440=make_come_type_name_string(result_type_1350,info))));
        __right_value1440 = come_decrement_ref_count2(__right_value1440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1358," ");
        buffer_append_str(header_buf_1358,real_fun_name_1327);
        buffer_append_str(header_buf_1358,"(");
        for(        i_1359=0;        i_1359<list$1voidphp_length(param_types_1353);        i_1359++        ){
            param_type_1360=((struct sType*)((void*)(__right_value1441=list$1voidphp_operator_load_element(param_types_1353,i_1359))));
            come_call_finalizer3(__right_value1441,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1361=((char*)(__right_value1442=list$1charphp_operator_load_element(param_names_1356,i_1359)));
            __right_value1442 = come_decrement_ref_count2(__right_value1442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1358,((char*)(__right_value1443=make_come_type_name_string(param_type_1360,info))));
            __right_value1443 = come_decrement_ref_count2(__right_value1443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1358," ");
            buffer_append_str(header_buf_1358,param_name_1361);
            if(            i_1359!=list$1voidphp_length(param_types_1353)-1) {
                buffer_append_str(header_buf_1358,",");
            }
        }
        buffer_append_str(header_buf_1358,")");
        result_type_1350->mStatic=(_Bool)0;
        result_type_1350->mUniq=(_Bool)0;
        result_type_1350->mInline=(_Bool)0;
        result_type_1350->mGenerate=(_Bool)0;
        fun2_1362=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1444=__builtin_string(name_1351)))));
        __right_value1444 = come_decrement_ref_count2(__right_value1444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1362==((void*)0)||fun2_1362->mExternal) {
            fun_1363=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4522, "struct sFun*", (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1351),(struct sType*)come_increment_ref_count(result_type_1350),(struct list$1voidph*)come_increment_ref_count(param_types_1353),(struct list$1charph*)come_increment_ref_count(param_names_1356),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1357),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1349),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1358)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1363->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1351)),(struct sFun*)come_increment_ref_count(fun_1363));
            get_hash_key_fun_1326=fun_1363;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4536, "struct sNode", (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1454=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4536, "struct sFunNode*", (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1363),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1364=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1454,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1365=node_compile(node_1364,info);
            if(            !Value_1365) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1363,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1364) { node_1364 = come_decrement_ref_count2(node_1364, ((struct sNode*)node_1364)->finalize, ((struct sNode*)node_1364)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1326=fun2_1362;
        }
        __dec_obj365=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1346);
        __dec_obj365 = come_decrement_ref_count2(__dec_obj365, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1345;
        __dec_obj366=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1347);
        come_call_finalizer3(__dec_obj366,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1344;
        info->head=head_1348;
        info->sline=sline_1345;
        come_call_finalizer3(source_1337,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1346 = come_decrement_ref_count2(sname_1346, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1347,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1349,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1350,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1351 = come_decrement_ref_count2(name_1351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1352,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1353,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1356,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1358,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1362,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1325;
    __dec_obj367=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1322);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj368=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1323);
    __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1324;
    __result423__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1457=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4562, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone)),get_hash_key_fun_1326,(char*)come_increment_ref_count(real_fun_name_1327))));
    last_code_1322 = come_decrement_ref_count2(last_code_1322, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1323 = come_decrement_ref_count2(last_code2_1323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1327 = come_decrement_ref_count2(real_fun_name_1327, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1328,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1457,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result423__;
}

