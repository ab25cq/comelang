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
    _Bool mCreateVTable;
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
    struct list$1voidph* match_it_var;
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
struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

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
unsigned int come_call_equals(void* fun, void* mem);
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
static unsigned int sSemicolonNode_get_hash_key(struct sSemicolonNode* self);
static _Bool sSemicolonNode_equals(struct sSemicolonNode* left, struct sSemicolonNode* right);
int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static unsigned int CVALUE_get_hash_key(struct CVALUE* self);
static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_operator_not_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1voidphp_operator_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info);
static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self);
static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self);
static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self);
static _Bool tuple2$2charphcharph_equals(struct tuple2$2charphcharph* left, struct tuple2$2charphcharph* right);
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
static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self);
static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right);
static _Bool list_item$1sTypeph_equals(struct list_item$1sTypeph* left, struct list_item$1sTypeph* right);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right);
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
static unsigned int sFunNode_get_hash_key(struct sFunNode* self);
static _Bool sFunNode_equals(struct sFunNode* left, struct sFunNode* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2charphsVarphp_equals(struct map$2charphsVarph* left, struct map$2charphsVarph* right);
static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value);
static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static _Bool buffer_equals(struct buffer* left, struct buffer* right);
static struct sFun* sFun_clone(struct sFun* self);
static unsigned int sFun_get_hash_key(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static unsigned int sBlock_get_hash_key(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self);
static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self);
static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self);
static _Bool tuple2$2charphbool_equals(struct tuple2$2charphbool* left, struct tuple2$2charphbool* right);
static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static unsigned int sLambdaNode_get_hash_key(struct sLambdaNode* self);
static _Bool sLambdaNode_equals(struct sLambdaNode* left, struct sLambdaNode* right);
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
static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self);
static _Bool tuple2$2sFunpcharph_equals(struct tuple2$2sFunpcharph* left, struct tuple2$2sFunpcharph* right);
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

// body function
static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result80__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
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
struct smart_pointer$1short* __result83__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
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
struct smart_pointer$1int* __result85__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
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
struct smart_pointer$1long* __result87__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result87__;
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
struct smart_pointer$1charp* __result90__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result90__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result90__;
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
struct smart_pointer$1float* __result95__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result95__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result95__;
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
struct smart_pointer$1double* __result97__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
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
int i_166;
struct list$1char* __result100__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_166=0;    i_166<num_value;    i_166++    ){
        list$1charp_push_back(self,values[i_166]);
    }
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_167;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_168;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_169;
struct list$1char* __result99__;
    if(    self->len==0) {
        litem_167=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1405, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_167->prev=((void*)0);
        litem_167->next=((void*)0);
        litem_167->item=item;
        self->tail=litem_167;
        self->head=litem_167;
    }
    else if(    self->len==1) {
        litem_168=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1415, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_168->prev=self->head;
        litem_168->next=((void*)0);
        litem_168->item=item;
        self->tail=litem_168;
        self->head->next=litem_168;
    }
    else {
        litem_169=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1425, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_169->prev=self->tail;
        litem_169->next=((void*)0);
        litem_169->item=item;
        self->tail->next=litem_169;
        self->tail=litem_169;
    }
    self->len++;
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_170;
struct list_item$1char* prev_it_171;
    it_170=self->head;
    while(it_170!=((void*)0)) {
        prev_it_171=it_170;
        it_170=it_170->next;
        come_call_finalizer3(prev_it_171,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_172;
struct list$1charp* __result103__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_172=0;    i_172<num_value;    i_172++    ){
        list$1charpp_push_back(self,values[i_172]);
    }
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_173;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_174;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_175;
struct list$1charp* __result102__;
    if(    self->len==0) {
        litem_173=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1405, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_173->prev=((void*)0);
        litem_173->next=((void*)0);
        litem_173->item=item;
        self->tail=litem_173;
        self->head=litem_173;
    }
    else if(    self->len==1) {
        litem_174=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1415, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_174->prev=self->head;
        litem_174->next=((void*)0);
        litem_174->item=item;
        self->tail=litem_174;
        self->head->next=litem_174;
    }
    else {
        litem_175=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1425, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_175->prev=self->tail;
        litem_175->next=((void*)0);
        litem_175->item=item;
        self->tail->next=litem_175;
        self->tail=litem_175;
    }
    self->len++;
    __result102__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_176;
struct list_item$1charp* prev_it_177;
    it_176=self->head;
    while(it_176!=((void*)0)) {
        prev_it_177=it_176;
        it_176=it_176->next;
        come_call_finalizer3(prev_it_177,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_178;
struct list$1short* __result106__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_178=0;    i_178<num_value;    i_178++    ){
        list$1shortp_push_back(self,values[i_178]);
    }
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_179;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_180;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_181;
struct list$1short* __result105__;
    if(    self->len==0) {
        litem_179=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1405, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_179->prev=((void*)0);
        litem_179->next=((void*)0);
        litem_179->item=item;
        self->tail=litem_179;
        self->head=litem_179;
    }
    else if(    self->len==1) {
        litem_180=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1415, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_180->prev=self->head;
        litem_180->next=((void*)0);
        litem_180->item=item;
        self->tail=litem_180;
        self->head->next=litem_180;
    }
    else {
        litem_181=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1425, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=self->tail;
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail->next=litem_181;
        self->tail=litem_181;
    }
    self->len++;
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_182;
struct list_item$1short* prev_it_183;
    it_182=self->head;
    while(it_182!=((void*)0)) {
        prev_it_183=it_182;
        it_182=it_182->next;
        come_call_finalizer3(prev_it_183,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_184;
struct list$1int* __result109__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_184=0;    i_184<num_value;    i_184++    ){
        list$1intp_push_back(self,values[i_184]);
    }
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_185;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_186;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_187;
struct list$1int* __result108__;
    if(    self->len==0) {
        litem_185=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1405, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_185->prev=((void*)0);
        litem_185->next=((void*)0);
        litem_185->item=item;
        self->tail=litem_185;
        self->head=litem_185;
    }
    else if(    self->len==1) {
        litem_186=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1415, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_186->prev=self->head;
        litem_186->next=((void*)0);
        litem_186->item=item;
        self->tail=litem_186;
        self->head->next=litem_186;
    }
    else {
        litem_187=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1425, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=self->tail;
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail->next=litem_187;
        self->tail=litem_187;
    }
    self->len++;
    __result108__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result108__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_188;
struct list_item$1int* prev_it_189;
    it_188=self->head;
    while(it_188!=((void*)0)) {
        prev_it_189=it_188;
        it_188=it_188->next;
        come_call_finalizer3(prev_it_189,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_190;
struct list$1long* __result112__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_190=0;    i_190<num_value;    i_190++    ){
        list$1longp_push_back(self,values[i_190]);
    }
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_191;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_192;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_193;
struct list$1long* __result111__;
    if(    self->len==0) {
        litem_191=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1405, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_191->prev=((void*)0);
        litem_191->next=((void*)0);
        litem_191->item=item;
        self->tail=litem_191;
        self->head=litem_191;
    }
    else if(    self->len==1) {
        litem_192=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1415, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_192->prev=self->head;
        litem_192->next=((void*)0);
        litem_192->item=item;
        self->tail=litem_192;
        self->head->next=litem_192;
    }
    else {
        litem_193=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1425, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=self->tail;
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail->next=litem_193;
        self->tail=litem_193;
    }
    self->len++;
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_194;
struct list_item$1long* prev_it_195;
    it_194=self->head;
    while(it_194!=((void*)0)) {
        prev_it_195=it_194;
        it_194=it_194->next;
        come_call_finalizer3(prev_it_195,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_196;
struct list$1float* __result115__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_196=0;    i_196<num_value;    i_196++    ){
        list$1floatp_push_back(self,values[i_196]);
    }
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_197;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_198;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_199;
struct list$1float* __result114__;
    if(    self->len==0) {
        litem_197=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1405, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_197->prev=((void*)0);
        litem_197->next=((void*)0);
        litem_197->item=item;
        self->tail=litem_197;
        self->head=litem_197;
    }
    else if(    self->len==1) {
        litem_198=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1415, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_198->prev=self->head;
        litem_198->next=((void*)0);
        litem_198->item=item;
        self->tail=litem_198;
        self->head->next=litem_198;
    }
    else {
        litem_199=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1425, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=self->tail;
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail->next=litem_199;
        self->tail=litem_199;
    }
    self->len++;
    __result114__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result114__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_200;
struct list_item$1float* prev_it_201;
    it_200=self->head;
    while(it_200!=((void*)0)) {
        prev_it_201=it_200;
        it_200=it_200->next;
        come_call_finalizer3(prev_it_201,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_202;
struct list$1double* __result118__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_202=0;    i_202<num_value;    i_202++    ){
        list$1doublep_push_back(self,values[i_202]);
    }
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_203;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_204;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_205;
struct list$1double* __result117__;
    if(    self->len==0) {
        litem_203=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1405, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_203->prev=((void*)0);
        litem_203->next=((void*)0);
        litem_203->item=item;
        self->tail=litem_203;
        self->head=litem_203;
    }
    else if(    self->len==1) {
        litem_204=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1415, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_204->prev=self->head;
        litem_204->next=((void*)0);
        litem_204->item=item;
        self->tail=litem_204;
        self->head->next=litem_204;
    }
    else {
        litem_205=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1425, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=self->tail;
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail->next=litem_205;
        self->tail=litem_205;
    }
    self->len++;
    __result117__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_206;
struct list_item$1double* prev_it_207;
    it_206=self->head;
    while(it_206!=((void*)0)) {
        prev_it_207=it_206;
        it_206=it_206->next;
        come_call_finalizer3(prev_it_207,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result120__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2197, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result120__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result120__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_208;
    if(    0) {
        for(        i_208=0;        i_208<self->len;        i_208++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result122__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2197, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result122__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result122__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_209;
    if(    0) {
        for(        i_209=0;        i_209<self->len;        i_209++        ){
            self->items[i_209] = come_decrement_ref_count2(self->items[i_209], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result124__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2197, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result124__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_210;
    if(    0) {
        for(        i_210=0;        i_210<self->len;        i_210++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result126__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2197, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result126__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_211;
    if(    0) {
        for(        i_211=0;        i_211<self->len;        i_211++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result128__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2197, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result128__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_212;
    if(    0) {
        for(        i_212=0;        i_212<self->len;        i_212++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result130__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2197, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result130__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_213;
    if(    0) {
        for(        i_213=0;        i_213<self->len;        i_213++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result132__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2197, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result132__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_214;
    if(    0) {
        for(        i_214=0;        i_214<self->len;        i_214++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result170__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result170__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_248;
struct list_item$1charph* prev_it_249;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        come_call_finalizer3(prev_it_249,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1charph* litem_253;
char* __dec_obj28;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_254;
char* __dec_obj29;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_255;
char* __dec_obj30;
struct list$1charph* __result172__;
    if(    self->len==0) {
        litem_253=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1405, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj28=litem_253->item;
        litem_253->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1) {
        litem_254=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1415, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj29=litem_254->item;
        litem_254->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1425, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj30=litem_255->item;
        litem_255->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result172__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result172__;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value250 = (void*)0;
struct sSemicolonNode* __result229__;
    ((struct sNodeBase*)(__right_value250=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value250,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result230__;
    __result230__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sSemicolonNode")));
    __right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result230__;
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
void* __right_value252 = (void*)0;
struct sLambdaNode* __result231__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->mFun=fun;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
char* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value253=__builtin_string("sLambdaNode")));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_308;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct sType* result_type_309;
void* __right_value293 = (void*)0;
int block_level_345;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct CVALUE* come_value_346;
void* __right_value296 = (void*)0;
char* __dec_obj79;
void* __right_value297 = (void*)0;
struct sType* __dec_obj80;
_Bool __result249__;
    come_fun_308=info->come_fun;
    info->come_fun=self->mFun;
    result_type_309=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 42, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
    if(    !gComeC&&!self->mFun->mNoResultType) {
        add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value293=make_define_var(result_type_309,"__result_obj__",(_Bool)0,info))));
        __right_value293 = come_decrement_ref_count2(__right_value293, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    }
    block_level_345=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_345;
    come_value_346=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 57, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj79=come_value_346->c_value;
    come_value_346->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj80=come_value_346->type;
    come_value_346->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_346->var=((void*)0);
    add_come_last_code(info,"%s",come_value_346->c_value);
    list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_346));
    info->come_fun=come_fun_308;
    __result249__ = (_Bool)1;
    come_call_finalizer3(result_type_309,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_346,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result249__;
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
struct list_item$1voidph* it_310;
struct list_item$1voidph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_312;
struct list_item$1voidph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_314;
struct list_item$1sNodeph* prev_it_315;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        prev_it_315=it_314;
        it_314=it_314->next;
        come_call_finalizer3(prev_it_315,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_316;
struct list_item$1sNodeph* prev_it_317;
    it_316=self->head;
    while(it_316!=((void*)0)) {
        prev_it_317=it_316;
        it_316=it_316->next;
        come_call_finalizer3(prev_it_317,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_318;
struct list_item$1charph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result233__;
void* __right_value254 = (void*)0;
struct sType* result_327;
void* __right_value255 = (void*)0;
struct sType* __dec_obj53;
void* __right_value256 = (void*)0;
struct sType* __dec_obj54;
void* __right_value257 = (void*)0;
struct sType* __dec_obj55;
void* __right_value258 = (void*)0;
char* __dec_obj56;
void* __right_value259 = (void*)0;
char* __dec_obj57;
void* __right_value266 = (void*)0;
struct list$1voidph* __dec_obj61;
void* __right_value274 = (void*)0;
struct list$1sNodeph* __dec_obj65;
void* __right_value275 = (void*)0;
struct list$1voidph* __dec_obj66;
void* __right_value282 = (void*)0;
struct list$1charph* __dec_obj70;
void* __right_value283 = (void*)0;
struct sType* __dec_obj71;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj72;
void* __right_value285 = (void*)0;
struct sType* __dec_obj73;
void* __right_value286 = (void*)0;
struct sNode* __dec_obj74;
void* __right_value287 = (void*)0;
char* __dec_obj75;
void* __right_value288 = (void*)0;
char* __dec_obj76;
void* __right_value289 = (void*)0;
char* __dec_obj77;
void* __right_value290 = (void*)0;
char* __dec_obj78;
struct sType* __result247__;
    if(    self==(void*)0) {
        __result233__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_327=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_327->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj53=result_327->mNoSolvedGenericsType;
        result_327->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj54=result_327->mOriginalLoadVarType;
        result_327->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj55=result_327->mAnyOriginalType;
        result_327->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj56=result_327->mInterfaceName;
        result_327->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj57=result_327->mGenericsName;
        result_327->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj61=result_327->mGenericsTypes;
        result_327->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj61,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj65=result_327->mArrayNum;
        result_327->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj65,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj66=result_327->mParamTypes;
        result_327->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj66,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj70=result_327->mParamNames;
        result_327->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj70,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj71=result_327->mResultType;
        result_327->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj71,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj72=result_327->mAlignas;
        result_327->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj73=result_327->mChannelType;
        result_327->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_327->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_327->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_327->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_327->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_327->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_327->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_327->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_327->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_327->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_327->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_327->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_327->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_327->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_327->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_327->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_327->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_327->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_327->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_327->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_327->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj74=result_327->mSizeNum;
        result_327->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_327->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj75=result_327->mOriginalTypeName;
        result_327->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_327->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_327->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_327->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_327->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_327->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_327->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_327->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj76=result_327->mAsmName;
        result_327->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_327->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_327->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_327->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_327->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_327->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj77=result_327->mTupleName;
        result_327->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj78=result_327->mAttribute;
        result_327->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_327->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_327->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_327->mCreateVTable=self->mCreateVTable;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_327;
    come_call_finalizer3(result_327,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_320;
    result_320=0;
    result_320+=int_get_hash_key(((int)self->mClass));
    result_320+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_320+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_320+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_320+=int_get_hash_key(((int)self->mAnyClass));
    result_320+=int_get_hash_key(((int)self->mInterfaceName));
    result_320+=int_get_hash_key(((int)self->mGenericsName));
    result_320+=int_get_hash_key(((int)self->mGenericsTypes));
    result_320+=int_get_hash_key(((int)self->mArrayNum));
    result_320+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_320+=int_get_hash_key(((int)self->mParamTypes));
    result_320+=int_get_hash_key(((int)self->mParamNames));
    result_320+=int_get_hash_key(((int)self->mResultType));
    result_320+=int_get_hash_key(((int)self->mVarArgs));
    result_320+=int_get_hash_key(((int)self->mAlignas));
    result_320+=int_get_hash_key(((int)self->mChannelType));
    result_320+=int_get_hash_key(((int)self->mUnsigned));
    result_320+=int_get_hash_key(((int)self->mShort));
    result_320+=int_get_hash_key(((int)self->mLong));
    result_320+=int_get_hash_key(((int)self->mLongLong));
    result_320+=int_get_hash_key(((int)self->mConstant));
    result_320+=int_get_hash_key(((int)self->mAtomic));
    result_320+=int_get_hash_key(((int)self->mRegister));
    result_320+=int_get_hash_key(((int)self->mVolatile));
    result_320+=int_get_hash_key(((int)self->mStatic));
    result_320+=int_get_hash_key(((int)self->mUniq));
    result_320+=int_get_hash_key(((int)self->mRecord));
    result_320+=int_get_hash_key(((int)self->mExtern));
    result_320+=int_get_hash_key(((int)self->mRestrict));
    result_320+=int_get_hash_key(((int)self->mImmutable));
    result_320+=int_get_hash_key(((int)self->mHeap));
    result_320+=int_get_hash_key(((int)self->mChannel));
    result_320+=int_get_hash_key(((int)self->mNoHeap));
    result_320+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_320+=int_get_hash_key(((int)self->mException));
    result_320+=int_get_hash_key(((int)self->mPointerNum));
    result_320+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_320+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_320+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_320+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_320+=int_get_hash_key(((int)self->mSizeNum));
    result_320+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_320+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_320+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_320+=int_get_hash_key(((int)self->mFunctionParam));
    result_320+=int_get_hash_key(((int)self->mAllocaValue));
    result_320+=int_get_hash_key(((int)self->mGenericsStruct));
    result_320+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_320+=int_get_hash_key(((int)self->mInline));
    result_320+=int_get_hash_key(((int)self->mNullValue));
    result_320+=int_get_hash_key(((int)self->mGuardValue));
    result_320+=int_get_hash_key(((int)self->mAsmName));
    result_320+=int_get_hash_key(((int)self->mArrayPointerType));
    result_320+=int_get_hash_key(((int)self->mLambdaArray));
    result_320+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_320+=int_get_hash_key(((int)self->mTypedef));
    result_320+=int_get_hash_key(((int)self->mMultipleTypes));
    result_320+=int_get_hash_key(((int)self->mOriginIsArray));
    result_320+=int_get_hash_key(((int)self->mTupleName));
    result_320+=int_get_hash_key(((int)self->mAttribute));
    result_320+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_320+=int_get_hash_key(((int)self->mGenerate));
    result_320+=int_get_hash_key(((int)self->mCreateVTable));
    return result_320;
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
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_321;
struct list_item$1voidph* it2_322;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_321=left->head;
    it2_322=right->head;
    while(it_321!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_321->item)) {
            return (_Bool)0;
        }
        it_321=it_321->next;
        it2_322=it2_322->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_323;
struct list_item$1sNodeph* it2_324;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_323=left->head;
    it2_324=right->head;
    while(it_323!=((void*)0)) {
        if(        !sNode_equals(it_323->item,it2_324->item)) {
            return (_Bool)0;
        }
        it_323=it_323->next;
        it2_324=it2_324->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_325;
struct list_item$1charph* it2_326;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_325=left->head;
    it2_326=right->head;
    while(it_325!=((void*)0)) {
        if(        !string_equals(it_325->item,it2_326->item)) {
            return (_Bool)0;
        }
        it_325=it_325->next;
        it2_326=it2_326->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result234__;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct list$1voidph* result_329;
struct list_item$1voidph* it_330;
void* __right_value265 = (void*)0;
struct list$1voidph* __result237__;
    if(    self==((void*)0)) {
        __result234__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_329=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_330=self->head;
    while(it_330!=((void*)0)) {
        list$1voidphp_add(result_329,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_330->item)));
        it_330=it_330->next;
    }
    __result237__ = gComeFunResultObject = __result_obj__ = result_329;
    come_call_finalizer3(result_329,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_328;
    result_328=0;
    result_328+=int_get_hash_key(((int)self->head));
    result_328+=int_get_hash_key(((int)self->tail));
    result_328+=int_get_hash_key(((int)self->len));
    result_328+=int_get_hash_key(((int)self->it));
    return result_328;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result235__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value262 = (void*)0;
struct list_item$1voidph* litem_331;
void* __dec_obj58;
void* __right_value263 = (void*)0;
struct list_item$1voidph* litem_332;
void* __dec_obj59;
void* __right_value264 = (void*)0;
struct list_item$1voidph* litem_333;
void* __dec_obj60;
struct list$1voidph* __result236__;
    if(    self->len==0) {
        litem_331=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value262=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_331->prev=((void*)0);
        litem_331->next=((void*)0);
        __dec_obj58=litem_331->item;
        litem_331->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_331;
        self->head=litem_331;
    }
    else if(    self->len==1) {
        litem_332=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value263=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_332->prev=self->head;
        litem_332->next=((void*)0);
        __dec_obj59=litem_332->item;
        litem_332->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_332;
        self->head->next=litem_332;
    }
    else {
        litem_333=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value264=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_333->prev=self->tail;
        litem_333->next=((void*)0);
        __dec_obj60=litem_333->item;
        litem_333->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj60,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_333;
        self->tail=litem_333;
    }
    self->len++;
    __result236__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result238__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sNodeph* result_334;
struct list_item$1sNodeph* it_335;
void* __right_value273 = (void*)0;
struct list$1sNodeph* __result243__;
    if(    self==((void*)0)) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    result_334=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_335=self->head;
    while(it_335!=((void*)0)) {
        list$1sNodephp_add(result_334,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_335->item)));
        it_335=it_335->next;
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_334;
    come_call_finalizer3(result_334,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_336;
struct sNode* __dec_obj62;
void* __right_value270 = (void*)0;
struct list_item$1sNodeph* litem_337;
struct sNode* __dec_obj63;
void* __right_value271 = (void*)0;
struct list_item$1sNodeph* litem_338;
struct sNode* __dec_obj64;
struct list$1sNodeph* __result240__;
    if(    self->len==0) {
        litem_336=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_336->prev=((void*)0);
        litem_336->next=((void*)0);
        __dec_obj62=litem_336->item;
        litem_336->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_336;
        self->head=litem_336;
    }
    else if(    self->len==1) {
        litem_337=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value270=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_337->prev=self->head;
        litem_337->next=((void*)0);
        __dec_obj63=litem_337->item;
        litem_337->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_337;
        self->head->next=litem_337;
    }
    else {
        litem_338=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value271=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_338->prev=self->tail;
        litem_338->next=((void*)0);
        __dec_obj64=litem_338->item;
        litem_338->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_338;
        self->tail=litem_338;
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
void* __right_value272 = (void*)0;
struct sNode* result_339;
struct sNode* __result242__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_339=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_339->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_339->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_339->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_339->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_339->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_339->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_339->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_339->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_339->kind=self->kind;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = result_339;
    come_call_finalizer2((void*)0, result_339, result_339 ? ((struct sNode*)result_339)->finalize:(void*)0, result_339 ? ((struct sNode*)result_339)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result244__;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
struct list$1charph* result_340;
struct list_item$1charph* it_341;
void* __right_value281 = (void*)0;
struct list$1charph* __result246__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_340=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_341=self->head;
    while(it_341!=((void*)0)) {
        list$1charphp_add(result_340,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_341->item)));
        it_341=it_341->next;
    }
    __result246__ = gComeFunResultObject = __result_obj__ = result_340;
    come_call_finalizer3(result_340,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_342;
char* __dec_obj67;
void* __right_value279 = (void*)0;
struct list_item$1charph* litem_343;
char* __dec_obj68;
void* __right_value280 = (void*)0;
struct list_item$1charph* litem_344;
char* __dec_obj69;
struct list$1charph* __result245__;
    if(    self->len==0) {
        litem_342=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=((void*)0);
        litem_342->next=((void*)0);
        __dec_obj67=litem_342->item;
        litem_342->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_342;
        self->head=litem_342;
    }
    else if(    self->len==1) {
        litem_343=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value279=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_343->prev=self->head;
        litem_343->next=((void*)0);
        __dec_obj68=litem_343->item;
        litem_343->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_343;
        self->head->next=litem_343;
    }
    else {
        litem_344=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value280=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=self->tail;
        litem_344->next=((void*)0);
        __dec_obj69=litem_344->item;
        litem_344->item=(char*)come_increment_ref_count(item);
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_344;
        self->tail=litem_344;
    }
    self->len++;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value298 = (void*)0;
struct list_item$1CVALUEph* litem_347;
struct CVALUE* __dec_obj81;
void* __right_value299 = (void*)0;
struct list_item$1CVALUEph* litem_348;
struct CVALUE* __dec_obj86;
void* __right_value300 = (void*)0;
struct list_item$1CVALUEph* litem_349;
struct CVALUE* __dec_obj87;
struct list$1CVALUEph* __result248__;
    if(    self->len==0) {
        litem_347=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value298=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1405, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_347->prev=((void*)0);
        litem_347->next=((void*)0);
        __dec_obj81=litem_347->item;
        litem_347->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_347;
        self->head=litem_347;
    }
    else if(    self->len==1) {
        litem_348=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value299=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1415, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_348->prev=self->head;
        litem_348->next=((void*)0);
        __dec_obj86=litem_348->item;
        litem_348->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_348;
        self->head->next=litem_348;
    }
    else {
        litem_349=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value300=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1425, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_349->prev=self->tail;
        litem_349->next=((void*)0);
        __dec_obj87=litem_349->item;
        litem_349->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_349;
        self->tail=litem_349;
    }
    self->len++;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
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
void* __right_value301 = (void*)0;
struct sFun* __dec_obj88;
struct sFunNode* __result250__;
    ((struct sNodeBase*)(__right_value301=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value301,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj88=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj88,sFun_finalize, 0, 0, 0, 0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sFunNode_kind(struct sFunNode* self){
void* __result_obj__=(void*)0;
void* __right_value302 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value302=__builtin_string("sFunNode")));
    __right_value302 = come_decrement_ref_count2(__right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_350;
char* come_fun_name_351;
void* __right_value303 = (void*)0;
char* __dec_obj108;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
struct sType* result_type_352;
void* __right_value306 = (void*)0;
int block_level_353;
void* __right_value307 = (void*)0;
char* __dec_obj109;
_Bool __result252__;
    come_fun_350=info->come_fun;
    info->come_fun=self->mFun;
    come_fun_name_351=(char*)come_increment_ref_count(info->come_fun_name);
    __dec_obj108=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(__builtin_string(info->come_fun->mName));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        result_type_352=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 100, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        if(        !gComeC&&!self->mFun->mNoResultType) {
            add_come_code_at_function_head(info,"%s=(void*)0;\n",((char*)(__right_value306=make_define_var(result_type_352,"__result_obj__",(_Bool)0,info))));
            __right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        block_level_353=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_353;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value307=xsprintf("come_heap_final();\n"))));
            __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->come_fun=come_fun_350;
    __dec_obj109=info->come_fun_name;
    info->come_fun_name=(char*)come_increment_ref_count(come_fun_name_351);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result252__ = (_Bool)1;
    come_fun_name_351 = come_decrement_ref_count2(come_fun_name_351, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result252__;
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
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct list$1sNodeph* __dec_obj110;
struct sBlock* __result253__;
    __dec_obj110=self->mNodes;
    self->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05function.c", 129, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj110,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1charph* generics_type_names, struct list$1charph* method_generics_type_names, char* name, struct sType* result_type, struct list$1voidph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
struct sType* __dec_obj111;
void* __right_value311 = (void*)0;
struct list$1charph* __dec_obj112;
void* __right_value312 = (void*)0;
struct list$1charph* __dec_obj113;
char* __dec_obj114;
struct sType* __dec_obj115;
struct list$1voidph* __dec_obj116;
struct list$1charph* __dec_obj117;
struct list$1charph* __dec_obj118;
char* __dec_obj119;
void* __right_value313 = (void*)0;
char* __dec_obj120;
struct sGenericsFun* __result254__;
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
    __result254__ = gComeFunResultObject = __result_obj__ = self;
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
    return __result254__;
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
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
struct sBlock* result_354;
int sline_top_355;
int block_level_356;
char* p_saved_357;
int sline_saved_358;
char* sname_saved_359;
void* __right_value316 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
struct map$2charphcharph* __dec_obj133;
char* p_362;
int sline_363;
void* __right_value317 = (void*)0;
char* sname_364;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* module_name_365;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1charph* params_366;
void* __right_value322 = (void*)0;
char* word_367;
void* __right_value323 = (void*)0;
char* __dec_obj134;
void* __right_value324 = (void*)0;
char* __dec_obj135;
void* __right_value325 = (void*)0;
_Bool _if_conditional1;
struct sBlock* __result259__;
void* __right_value326 = (void*)0;
struct sClassModule* module_371;
void* __right_value327 = (void*)0;
void* __right_value333 = (void*)0;
struct map$2charphcharph* __dec_obj141;
int i_375;
struct list$1charph* o2_saved_376;
char* it_379;
void* __right_value334 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __dec_obj142;
void* __right_value343 = (void*)0;
struct sNode* node_426;
void* __right_value344 = (void*)0;
char* __dec_obj143;
_Bool omit_semicolon_430;
void* __right_value348 = (void*)0;
char* __dec_obj147;
char* head_445;
void* __right_value349 = (void*)0;
struct sNode* value_446;
char* tail_447;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj148;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
struct sNode* node_449;
void* __right_value353 = (void*)0;
char* __dec_obj149;
struct sNode* node_450;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj151;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj152;
_Bool omit_semicolon_453;
char* p_454;
char* head_455;
void* __right_value360 = (void*)0;
char* source_456;
void* __right_value361 = (void*)0;
struct sNode* node_457;
struct sBlock* __result297__;
node_450 = (void*)0;
    result_354=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 167, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_355=info->sline_top;
    info->sline_top=info->sline;
    block_level_356=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_357=((void*)0);
        sline_saved_358=0;
        sname_saved_359=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_357) {
                if(                *info->p==0) {
                    info->p=p_saved_357;
                    info->sline=sline_saved_358;
                    __dec_obj131=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_359));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_357=((void*)0);
                    sline_saved_358=0;
                    __dec_obj132=sname_saved_359;
                    sname_saved_359=((void*)0);
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
            p_362=info->p;
            sline_363=info->sline;
            sname_364=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_363;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value318=parse_word(info)));
                __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                module_name_365=(char*)come_increment_ref_count(parse_word(info));
                params_366=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 223, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_367=(char*)come_increment_ref_count(parse_word(info));
                        list$1charphp_add(params_366,(char*)come_increment_ref_count(word_367));
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
                            word_367 = come_decrement_ref_count2(word_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"invalid charactor(%c)",*info->p);
                            exit(2);
                        }
                        word_367 = come_decrement_ref_count2(word_367, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_357=info->p;
                sline_saved_358=info->sline;
                __dec_obj134=sname_saved_359;
                sname_saved_359=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj135=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_365));
                __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value325=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_365)))==((void*)0))),                come_call_finalizer3(__right_value325,sClassModule_finalize, 0, 1, 0, 0, __result_obj__),
                _if_conditional1) {
                    err_msg(info,"module not found");
                    __result259__ = gComeFunResultObject = __result_obj__ = ((void*)0);
                    module_name_365 = come_decrement_ref_count2(module_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(params_366,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                    sname_364 = come_decrement_ref_count2(sname_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    sname_saved_359 = come_decrement_ref_count2(sname_saved_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(result_354,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result259__;
                }
                module_371=((struct sClassModule*)(__right_value326=map$2charphsClassModulephp_operator_load_element(info->modules,module_name_365)));
                come_call_finalizer3(__right_value326,sClassModule_finalize, 0, 1, 0, 0, __result_obj__);
                if(                list$1charphp_length(module_371->mParams)!=list$1charphp_length(params_366)) {
                    err_msg(info,"invalid parametor number");
                    exit(1);
                }
                __dec_obj141=info->module_params;
                info->module_params=(struct map$2charphcharph*)come_increment_ref_count(map$2charphcharphp_initialize((struct map$2charphcharph*)come_increment_ref_count((struct map$2charphcharph*)come_calloc(1, sizeof(struct map$2charphcharph)*(1), "05function.c", 277, "struct map$2charphcharph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj141,map$2charphcharph_finalize, 0, 0, 0, 0, (void*)0);
                i_375=0;
                for(                o2_saved_376=(struct list$1charph*)come_increment_ref_count((module_371->mParams)),it_379=list$1charphp_begin((o2_saved_376));                !list$1charphp_end((o2_saved_376));                it_379=list$1charphp_next((o2_saved_376))                ){
                    map$2charphcharphp_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_379)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value340=list$1charphp_operator_load_element(params_366,i_375))))));
                    __right_value340 = come_decrement_ref_count2(__right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    i_375++;
                }
                come_call_finalizer3(o2_saved_376,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_371->mText;
                info->sline=module_371->mSLine;
                __dec_obj142=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_371->mSName));
                __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                module_name_365 = come_decrement_ref_count2(module_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(params_366,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_426=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj143=info->sname;
            info->sname=(char*)come_increment_ref_count(node_426->sname(node_426->_protocol_obj));
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_426->sline(node_426->_protocol_obj);
            if(            node_426==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            list$1sNodephp_push_back(result_354->mNodes,(struct sNode*)come_increment_ref_count(node_426));
            parse_sharp_v5(info);
            if(            node_426->terminated(node_426->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_430=(_Bool)1;
            if(            node_426->terminated(node_426->_protocol_obj)) {
                omit_semicolon_430=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_430=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_354->mOmitSemicolon=omit_semicolon_430;
                if(                omit_semicolon_430&&in_function) {
                    list$1sNodephp_delete(result_354->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_362;
                    info->sline=sline_363;
                    __dec_obj147=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_364));
                    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_445=info->p;
                    value_446=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_447=info->p;
                    __dec_obj148=value_446;
                    value_446=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_446),info));
                    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_448[tail_447-head_445+1];
                    memset(&buf_448, 0, sizeof(char)                    *(tail_447-head_445+1)                    );
                    memcpy(buf_448,head_445,tail_447-head_445);
                    buf_448[tail_447-head_445]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_449=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_446),(char*)come_increment_ref_count(__builtin_string(buf_448)),info));
                    list$1sNodephp_push_back(result_354->mNodes,(struct sNode*)come_increment_ref_count(node_449));
                    if(value_446) { value_446 = come_decrement_ref_count2(value_446, ((struct sNode*)value_446)->finalize, ((struct sNode*)value_446)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    sname_364 = come_decrement_ref_count2(sname_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                    if(value_446) { value_446 = come_decrement_ref_count2(value_446, ((struct sNode*)value_446)->finalize, ((struct sNode*)value_446)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_449) { node_449 = come_decrement_ref_count2(node_449, ((struct sNode*)node_449)->finalize, ((struct sNode*)node_449)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    sname_364 = come_decrement_ref_count2(sname_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
            }
            sname_364 = come_decrement_ref_count2(sname_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        p_saved_357) {
            if(            info->p==0) {
                info->p=p_saved_357;
                info->sline=sline_saved_358;
                __dec_obj149=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_359));
                __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_357=((void*)0);
                sline_saved_358=0;
            }
        }
        sname_saved_359 = come_decrement_ref_count2(sname_saved_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 381, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value355=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 381, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj151=node_450;
            node_450=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value355,sSemicolonNode_finalize, 0, 1, 0, 0, __result_obj__);
            list$1sNodephp_push_back(result_354->mNodes,(struct sNode*)come_increment_ref_count(node_450));
        }
        else {
            __dec_obj152=node_450;
            node_450=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_450==((void*)0)) {
                err_msg(info,"Invalid expression");
                exit(1);
            }
            parse_sharp_v5(info);
            if(            node_450->terminated(node_450->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_453=(_Bool)1;
            if(            node_450->terminated(node_450->_protocol_obj)) {
                omit_semicolon_453=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_453=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_354->mOmitSemicolon=omit_semicolon_453;
            list$1sNodephp_push_back(result_354->mNodes,(struct sNode*)come_increment_ref_count(node_450));
        }
        if(node_450) { node_450 = come_decrement_ref_count2(node_450, ((struct sNode*)node_450)->finalize, ((struct sNode*)node_450)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    if(    return_self_at_last) {
        p_454=info->p;
        head_455=info->head;
        source_456=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_456;
        info->head=source_456;
        node_457=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_457==((void*)0)) {
            err_msg(info,"Invalid expression");
            exit(1);
        }
        list$1sNodephp_push_back(result_354->mNodes,(struct sNode*)come_increment_ref_count(node_457));
        info->p=p_454;
        info->head=head_455;
        source_456 = come_decrement_ref_count2(source_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_457) { node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    info->block_level=block_level_356;
    __result297__ = gComeFunResultObject = __result_obj__ = result_354;
    come_call_finalizer3(result_354,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void map$2charphcharph_finalize(struct map$2charphcharph* self){
int i_360;
int i_361;
    for(    i_360=0;    i_360<self->size;    i_360++    ){
        if(        self->item_existance[i_360]) {
            if(            1) {
                self->items[i_360] = come_decrement_ref_count2(self->items[i_360], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_361=0;    i_361<self->size;    i_361++    ){
        if(        self->item_existance[i_361]) {
            if(            1) {
                self->keys[i_361] = come_decrement_ref_count2(self->keys[i_361], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sClassModule* map$2charphsClassModulephp_operator_load_element(struct map$2charphsClassModuleph* self, char* key){
void* __result_obj__=(void*)0;
struct sClassModule* default_value_368;
unsigned int hash_369;
unsigned int it_370;
struct sClassModule* __result255__;
struct sClassModule* __result256__;
struct sClassModule* __result257__;
struct sClassModule* __result258__;
default_value_368 = (void*)0;
    memset(&default_value_368,0,sizeof(struct sClassModule*));
    hash_369=string_get_hash_key(((char*)key))%self->size;
    it_370=hash_369;
    while((_Bool)1) {
        if(        self->item_existance[it_370]) {
            if(            string_equals(self->keys[it_370],key)) {
                __result255__ = gComeFunResultObject = __result_obj__ = self->items[it_370];
                come_call_finalizer3(default_value_368,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result255__;
            }
            it_370++;
            if(            it_370>=self->size) {
                it_370=0;
            }
            else if(            it_370==hash_369) {
                __result256__ = gComeFunResultObject = __result_obj__ = default_value_368;
                come_call_finalizer3(default_value_368,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result256__;
            }
        }
        else {
            __result257__ = gComeFunResultObject = __result_obj__ = default_value_368;
            come_call_finalizer3(default_value_368,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result257__;
        }
    }
    __result258__ = gComeFunResultObject = __result_obj__ = default_value_368;
    come_call_finalizer3(default_value_368,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
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
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
int i_372;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct list$1charp* __dec_obj140;
struct map$2charphcharph* __result261__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value328=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value329=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2581, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value330=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_372=0;    i_372<128;    i_372++    ){
        self->item_existance[i_372]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj140=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj140,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1charp* list$1charpp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result260__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static void map$2charphcharphp_finalize(struct map$2charphcharph* self){
int i_373;
int i_374;
    for(    i_373=0;    i_373<self->size;    i_373++    ){
        if(        self->item_existance[i_373]) {
            if(            1) {
                self->items[i_373] = come_decrement_ref_count2(self->items[i_373], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_374=0;    i_374<self->size;    i_374++    ){
        if(        self->item_existance[i_374]) {
            if(            1) {
                self->keys[i_374] = come_decrement_ref_count2(self->keys[i_374], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_377;
char* __result262__;
char* __result263__;
char* result_378;
char* __result264__;
result_377 = (void*)0;
result_378 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_377,0,sizeof(char*));
        __result262__ = gComeFunResultObject = __result_obj__ = result_377;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    self->it=self->head;
    if(    self->it) {
        __result263__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    memset(&result_378,0,sizeof(char*));
    __result264__ = gComeFunResultObject = __result_obj__ = result_378;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_380;
char* __result265__;
char* __result266__;
char* result_381;
char* __result267__;
result_380 = (void*)0;
result_381 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_380,0,sizeof(char*));
        __result265__ = gComeFunResultObject = __result_obj__ = result_380;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result266__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    memset(&result_381,0,sizeof(char*));
    __result267__ = gComeFunResultObject = __result_obj__ = result_381;
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void map$2charphcharphp_operator_store_element(struct map$2charphcharph* self, char* key, char* item){
    map$2charphcharphp_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct map$2charphcharph* map$2charphcharphp_insert(struct map$2charphcharph* self, char* key, char* item){
void* __result_obj__=(void*)0;
unsigned int hash_399;
unsigned int it_400;
_Bool same_key_exist_417;
char* it2_420;
struct map$2charphcharph* __result288__;
    if(    self->len*10>=self->size) {
        map$2charphcharphp_rehash(self);
    }
    hash_399=string_get_hash_key(((char*)key))%self->size;
    it_400=hash_399;
    while((_Bool)1) {
        if(        self->item_existance[it_400]) {
            if(            string_equals(self->keys[it_400],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_400]);
                    self->keys[it_400] = come_decrement_ref_count2(self->keys[it_400], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_400]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_400]);
                    self->keys[it_400]=key;
                }
                if(                1) {
                    self->items[it_400] = come_decrement_ref_count2(self->items[it_400], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->items[it_400]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_400]=item;
                }
                break;
            }
            it_400++;
            if(            it_400>=self->size) {
                it_400=0;
            }
            else if(            it_400==hash_399) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_400]=(_Bool)1;
            if(            1) {
                self->keys[it_400]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_400]=key;
            }
            if(            1) {
                self->items[it_400]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_400]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_417=(_Bool)0;
    for(    it2_420=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_420=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_420,key)) {
            same_key_exist_417=(_Bool)1;
        }
    }
    if(    !same_key_exist_417) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static void map$2charphcharphp_rehash(struct map$2charphcharph* self){
int size_382;
void* __right_value335 = (void*)0;
char** keys_383;
void* __right_value336 = (void*)0;
char** items_384;
void* __right_value337 = (void*)0;
_Bool* item_existance_385;
int len_386;
char* it_389;
char* default_value_392;
void* __right_value338 = (void*)0;
char* it2_393;
unsigned int hash_396;
int n_397;
char* default_value_398;
void* __right_value339 = (void*)0;
default_value_392 = (void*)0;
default_value_398 = (void*)0;
    size_382=self->size*10;
    keys_383=(char**)come_increment_ref_count(((char**)(__right_value335=(char**)come_calloc(1, sizeof(char*)*(1*(size_382)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_384=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(size_382)), "./comelang.h", 2809, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_385=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value337=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_382)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_386=0;
    for(    it_389=map$2charphcharphp_begin(self);    !map$2charphcharphp_end(self);    it_389=map$2charphcharphp_next(self)    ){
        memset(&default_value_392,0,sizeof(char*));
        it2_393=((char*)(__right_value338=map$2charphcharphp_at(self,it_389,default_value_392)));
        __right_value338 = come_decrement_ref_count2(__right_value338, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        hash_396=string_get_hash_key(((char*)it_389))%size_382;
        n_397=hash_396;
        while((_Bool)1) {
            if(            item_existance_385[n_397]) {
                n_397++;
                if(                n_397>=size_382) {
                    n_397=0;
                }
                else if(                n_397==hash_396) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_385[n_397]=(_Bool)1;
                keys_383[n_397]=it_389;
                items_384[n_397]=((char*)(__right_value339=map$2charphcharphp_at(self,it_389,default_value_398)));
                __right_value339 = come_decrement_ref_count2(__right_value339, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                len_386++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_383;
    self->items=items_384;
    self->item_existance=item_existance_385;
    self->size=size_382;
    self->len=len_386;
}

static char* map$2charphcharphp_begin(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_387;
char* __result268__;
char* __result269__;
char* result_388;
char* __result270__;
result_387 = (void*)0;
result_388 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_387,0,sizeof(char*));
        __result268__ = gComeFunResultObject = __result_obj__ = result_387;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result269__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    memset(&result_388,0,sizeof(char*));
    __result270__ = gComeFunResultObject = __result_obj__ = result_388;
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static _Bool map$2charphcharphp_end(struct map$2charphcharph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphcharphp_next(struct map$2charphcharph* self){
void* __result_obj__=(void*)0;
char* result_390;
char* __result271__;
char* __result272__;
char* result_391;
char* __result273__;
result_390 = (void*)0;
result_391 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_390,0,sizeof(char*));
        __result271__ = gComeFunResultObject = __result_obj__ = result_390;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result272__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    memset(&result_391,0,sizeof(char*));
    __result273__ = gComeFunResultObject = __result_obj__ = result_391;
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static char* map$2charphcharphp_at(struct map$2charphcharph* self, char* key, char* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_394;
unsigned int it_395;
char* __result274__;
char* __result275__;
char* __result276__;
char* __result277__;
    hash_394=string_get_hash_key(((char*)key))%self->size;
    it_395=hash_394;
    while((_Bool)1) {
        if(        self->item_existance[it_395]) {
            if(            string_equals(self->keys[it_395],key)) {
                __result274__ = gComeFunResultObject = __result_obj__ = self->items[it_395];
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
            it_395++;
            if(            it_395>=self->size) {
                it_395=0;
            }
            else if(            it_395==hash_394) {
                __result275__ = gComeFunResultObject = __result_obj__ = default_value;
                default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
        }
        else {
            __result276__ = gComeFunResultObject = __result_obj__ = default_value;
            default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = default_value;
    default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_401;
struct list_item$1charp* it_402;
struct list$1charp* __result281__;
    it2_401=0;
    it_402=self->head;
    while(it_402!=((void*)0)) {
        if(        charp_equals(it_402->item,item)) {
            list$1charpp_delete(self,it2_401,it2_401+1);
            break;
        }
        it2_401++;
        it_402=it_402->next;
    }
    __result281__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_403;
struct list$1charp* __result278__;
struct list_item$1charp* it_406;
int i_407;
struct list_item$1charp* prev_it_408;
struct list_item$1charp* it_409;
int i_410;
struct list_item$1charp* prev_it_411;
struct list_item$1charp* it_412;
struct list_item$1charp* head_prev_it_413;
struct list_item$1charp* tail_it_414;
int i_415;
struct list_item$1charp* prev_it_416;
struct list$1charp* __result280__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_403=tail;
        tail=head;
        head=tmp_403;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result278__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_406=self->head;
        i_407=0;
        while(it_406!=((void*)0)) {
            if(            i_407<tail) {
                prev_it_408=it_406;
                it_406=it_406->next;
                i_407++;
                come_call_finalizer3(prev_it_408,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_407==tail) {
                self->head=it_406;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_406=it_406->next;
                i_407++;
            }
        }
    }
    else if(    tail==self->len) {
        it_409=self->head;
        i_410=0;
        while(it_409!=((void*)0)) {
            if(            i_410==head) {
                self->tail=it_409->prev;
                self->tail->next=((void*)0);
            }
            if(            i_410>=head) {
                prev_it_411=it_409;
                it_409=it_409->next;
                i_410++;
                come_call_finalizer3(prev_it_411,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_409=it_409->next;
                i_410++;
            }
        }
    }
    else {
        it_412=self->head;
        head_prev_it_413=((void*)0);
        tail_it_414=((void*)0);
        i_415=0;
        while(it_412!=((void*)0)) {
            if(            i_415==head) {
                head_prev_it_413=it_412->prev;
            }
            if(            i_415==tail) {
                tail_it_414=it_412;
            }
            if(            i_415>=head&&i_415<tail) {
                prev_it_416=it_412;
                it_412=it_412->next;
                i_415++;
                come_call_finalizer3(prev_it_416,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_412=it_412->next;
                i_415++;
            }
        }
        if(        head_prev_it_413!=((void*)0)) {
            head_prev_it_413->next=tail_it_414;
        }
        if(        tail_it_414!=((void*)0)) {
            tail_it_414->prev=head_prev_it_413;
        }
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_404;
struct list_item$1charp* prev_it_405;
struct list$1charp* __result279__;
    it_404=self->head;
    while(it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        come_call_finalizer3(prev_it_405,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_418;
char* __result282__;
char* __result283__;
char* result_419;
char* __result284__;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_418,0,sizeof(char*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_418;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->head;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_419,0,sizeof(char*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_419;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_421;
char* __result285__;
char* __result286__;
char* result_422;
char* __result287__;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_421,0,sizeof(char*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_421;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_422,0,sizeof(char*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_422;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_423;
int i_424;
char* __result289__;
char* default_value_425;
char* __result290__;
default_value_425 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_423=self->head;
    i_424=0;
    while(it_423!=((void*)0)) {
        if(        position==i_424) {
            __result289__ = gComeFunResultObject = __result_obj__ = it_423->item;
            gComeFunResultObject = (void*)0;
            return __result289__;
        }
        it_423=it_423->next;
        i_424++;
    }
    memset(&default_value_425,0,sizeof(char*));
    __result290__ = gComeFunResultObject = __result_obj__ = default_value_425;
    default_value_425 = come_decrement_ref_count2(default_value_425, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
struct list_item$1sNodeph* litem_427;
struct sNode* __dec_obj144;
void* __right_value346 = (void*)0;
struct list_item$1sNodeph* litem_428;
struct sNode* __dec_obj145;
void* __right_value347 = (void*)0;
struct list_item$1sNodeph* litem_429;
struct sNode* __dec_obj146;
struct list$1sNodeph* __result291__;
    if(    self->len==0) {
        litem_427=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value345=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_427->prev=((void*)0);
        litem_427->next=((void*)0);
        __dec_obj144=litem_427->item;
        litem_427->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_427;
        self->head=litem_427;
    }
    else if(    self->len==1) {
        litem_428=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value346=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=self->head;
        litem_428->next=((void*)0);
        __dec_obj145=litem_428->item;
        litem_428->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_428;
        self->head->next=litem_428;
    }
    else {
        litem_429=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value347=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_429->prev=self->tail;
        litem_429->next=((void*)0);
        __dec_obj146=litem_429->item;
        litem_429->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_429;
        self->tail=litem_429;
    }
    self->len++;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct list$1sNodeph* list$1sNodephp_delete(struct list$1sNodeph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_431;
struct list$1sNodeph* __result292__;
struct list_item$1sNodeph* it_434;
int i_435;
struct list_item$1sNodeph* prev_it_436;
struct list_item$1sNodeph* it_437;
int i_438;
struct list_item$1sNodeph* prev_it_439;
struct list_item$1sNodeph* it_440;
struct list_item$1sNodeph* head_prev_it_441;
struct list_item$1sNodeph* tail_it_442;
int i_443;
struct list_item$1sNodeph* prev_it_444;
struct list$1sNodeph* __result294__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_431=tail;
        tail=head;
        head=tmp_431;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result292__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    if(    head==0&&tail==self->len) {
        list$1sNodephp_reset(self);
    }
    else if(    head==0) {
        it_434=self->head;
        i_435=0;
        while(it_434!=((void*)0)) {
            if(            i_435<tail) {
                prev_it_436=it_434;
                it_434=it_434->next;
                i_435++;
                come_call_finalizer3(prev_it_436,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_435==tail) {
                self->head=it_434;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_434=it_434->next;
                i_435++;
            }
        }
    }
    else if(    tail==self->len) {
        it_437=self->head;
        i_438=0;
        while(it_437!=((void*)0)) {
            if(            i_438==head) {
                self->tail=it_437->prev;
                self->tail->next=((void*)0);
            }
            if(            i_438>=head) {
                prev_it_439=it_437;
                it_437=it_437->next;
                i_438++;
                come_call_finalizer3(prev_it_439,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_437=it_437->next;
                i_438++;
            }
        }
    }
    else {
        it_440=self->head;
        head_prev_it_441=((void*)0);
        tail_it_442=((void*)0);
        i_443=0;
        while(it_440!=((void*)0)) {
            if(            i_443==head) {
                head_prev_it_441=it_440->prev;
            }
            if(            i_443==tail) {
                tail_it_442=it_440;
            }
            if(            i_443>=head&&i_443<tail) {
                prev_it_444=it_440;
                it_440=it_440->next;
                i_443++;
                come_call_finalizer3(prev_it_444,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_440=it_440->next;
                i_443++;
            }
        }
        if(        head_prev_it_441!=((void*)0)) {
            head_prev_it_441->next=tail_it_442;
        }
        if(        tail_it_442!=((void*)0)) {
            tail_it_442->prev=head_prev_it_441;
        }
    }
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1sNodeph* list$1sNodephp_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_432;
struct list_item$1sNodeph* prev_it_433;
struct list$1sNodeph* __result293__;
    it_432=self->head;
    while(it_432!=((void*)0)) {
        prev_it_433=it_432;
        it_432=it_432->next;
        come_call_finalizer3(prev_it_433,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
void* __result_obj__=(void*)0;
struct sSemicolonNode* __result295__;
void* __right_value356 = (void*)0;
struct sSemicolonNode* result_452;
void* __right_value357 = (void*)0;
char* __dec_obj150;
struct sSemicolonNode* __result296__;
    if(    self==(void*)0) {
        __result295__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    result_452=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode", sSemicolonNode_finalize, sSemicolonNode_clone, sSemicolonNode_get_hash_key, sSemicolonNode_equals));
    if(    self!=((void*)0)) {
        result_452->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj150=result_452->sname;
        result_452->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_452->sline_real=self->sline_real;
    }
    __result296__ = gComeFunResultObject = __result_obj__ = result_452;
    come_call_finalizer3(result_452,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static unsigned int sSemicolonNode_get_hash_key(struct sSemicolonNode* self){
unsigned int result_451;
    result_451=0;
    result_451+=int_get_hash_key(((int)self->sline));
    result_451+=int_get_hash_key(((int)self->sname));
    result_451+=int_get_hash_key(((int)self->sline_real));
    return result_451;
}

static _Bool sSemicolonNode_equals(struct sSemicolonNode* left, struct sSemicolonNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

int transpile_block(struct sBlock* block, struct list$1voidph* param_types, struct list$1charph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_458;
struct sVarTable* old_table_459;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct sVarTable* __dec_obj153;
struct sVarTable* current_loop_vtable_460;
struct list$1voidph* param_types__461;
struct list$1charph* param_names__462;
int i_463;
struct list$1charph* o2_saved_464;
char* name_465;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sType* type_466;
void* __right_value366 = (void*)0;
int block_level_470;
int i_471;
struct list$1sNodeph* o2_saved_472;
struct sNode* node_475;
struct list$1voidph* right_value_objects_478;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
struct list$1voidph* __dec_obj154;
char* __dec_obj155;
char* __dec_obj156;
int stack_num_before_479;
int sline_480;
void* __right_value369 = (void*)0;
char* sname_481;
void* __right_value370 = (void*)0;
char* __dec_obj157;
_Bool Value_482;
void* __right_value371 = (void*)0;
struct CVALUE* come_value_483;
void* __right_value377 = (void*)0;
struct CVALUE* come_value2_484;
void* __right_value378 = (void*)0;
char* __dec_obj162;
void* __right_value379 = (void*)0;
struct CVALUE* come_value2_487;
struct sVar* var__488;
void* __right_value380 = (void*)0;
struct CVALUE* come_value3_489;
void* __right_value381 = (void*)0;
_Bool _if_conditional2;
void* __right_value382 = (void*)0;
struct sType* __dec_obj163;
void* __right_value383 = (void*)0;
char* c_value_492;
void* __right_value384 = (void*)0;
char* __dec_obj164;
void* __right_value385 = (void*)0;
char* __dec_obj165;
void* __right_value386 = (void*)0;
char* __dec_obj166;
_Bool Value_493;
void* __right_value387 = (void*)0;
char* __dec_obj167;
struct list$1voidph* __dec_obj168;
void* __if_result__0_496 = (void*)0;
struct list$1voidph* o2_saved_497;
struct sVar* it_500;
struct list$1voidph* __dec_obj169;
memset(&i_463, 0, sizeof(int));
memset(&i_471, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_458=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_459=info->lv_table;
    if(    !no_var_table) {
        __dec_obj153=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 455, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,old_table_459));
        come_call_finalizer3(__dec_obj153,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_460=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    param_types__461=info->param_types;
    param_names__462=info->param_names;
    info->param_types=param_types;
    info->param_names=param_names;
    if(    param_types&&param_names) {
        for(        o2_saved_464=(param_names),name_465=list$1charphp_begin((o2_saved_464));        !list$1charphp_end((o2_saved_464));        name_465=list$1charphp_next((o2_saved_464))        ){
            type_466=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value364=list$1voidphp_operator_load_element(param_types,i_463))))));
            come_call_finalizer3(__right_value364,(void*)0, 0, 1, 0, 0, (void*)0);
            type_466->mFunctionParam=(_Bool)1;
            type_466->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_465,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_466)),info);
            i_463++;
            come_call_finalizer3(type_466,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_470=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNodephp_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_472=(struct list$1sNodeph*)come_increment_ref_count((block->mNodes)),node_475=list$1sNodephp_begin((o2_saved_472));        !list$1sNodephp_end((o2_saved_472));        node_475=list$1sNodephp_next((o2_saved_472))        ){
            right_value_objects_478=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj154=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 492, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj154,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj155=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj156=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_479=list$1CVALUEphp_length(info->stack);
            sline_480=info->sline;
            sname_481=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_475->sline(node_475->_protocol_obj);
            __dec_obj157=info->sname;
            info->sname=(char*)come_increment_ref_count(node_475->sname(node_475->_protocol_obj));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_471==list$1sNodephp_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_482=node_compile(node_475,info);
                if(                !Value_482) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUEphp_length(info->stack)==stack_num_before_479+1) {
                    come_value_483=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_483->type->mClass->mName,"void")&&come_value_483->type->mPointerNum==0) {
                        come_value2_484=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_483));
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_484));
                        __dec_obj162=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_484->c_value));
                        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_484,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_487=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_483));
                        var__488=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__488) {
                            come_value3_489=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 528, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__488->mType->mClass=="void"&&var__488->mType->mPointerNum==1) {
                                if(                                (_if_conditional2=(!check_assign_type("invalid if result value",var__488->mType,((struct sType*)(__right_value381=come_call_cloner(sType_clone, come_value_483->type))),come_value3_489,info,(_Bool)1,(_Bool)1,info))),                                come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    err_msg(info,"invalid if result value");
                                    exit(2);
                                }
                            }
                            __dec_obj163=var__488->mType;
                            var__488->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_483->type));
                            come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
                            if(                            come_value_483->type->mHeap) {
                                c_value_492=(char*)come_increment_ref_count(increment_ref_count_object(come_value_483->type,come_value_483->c_value,info));
                                __dec_obj164=come_value2_487->c_value;
                                come_value2_487->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__488->mCValueName,c_value_492));
                                __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                c_value_492 = come_decrement_ref_count2(c_value_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            else {
                                __dec_obj165=come_value2_487->c_value;
                                come_value2_487->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__488->mCValueName,come_value_483->c_value));
                                __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_489,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_487));
                        __dec_obj166=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_487->c_value));
                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_487,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_483,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_493=node_compile(node_475,info);
                if(                !Value_493) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_480;
            __dec_obj167=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_481));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_479);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1voidphp_reset(info->right_value_objects);
            }
            __dec_obj168=info->right_value_objects;
            info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_478);
            come_call_finalizer3(__dec_obj168,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
            i_471++;
            come_call_finalizer3(right_value_objects_478,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            sname_481 = come_decrement_ref_count2(sname_481, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_472,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_470==0) {
            for(            o2_saved_497=(struct list$1voidph*)come_increment_ref_count((info->match_it_var)),it_500=((struct sVar*)list$1voidphp_begin((o2_saved_497)));            !list$1voidphp_end((o2_saved_497));            it_500=((struct sVar*)list$1voidphp_next((o2_saved_497)))            ){
                free_object(it_500->mType,it_500->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            }
            come_call_finalizer3(o2_saved_497,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj169=info->match_it_var;
            __if_result__0_496=(void*)((struct list$1voidph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj169,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(__if_result__0_496,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_459;
    info->block_level=block_level_470;
    info->param_types=param_types__461;
    info->param_names=param_names__462;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_460;
    info->inhibits_output_code=inhibits_output_code_458;
    return 0;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_467;
int i_468;
void* __result298__;
void* default_value_469;
void* __result299__;
default_value_469 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_467=self->head;
    i_468=0;
    while(it_467!=((void*)0)) {
        if(        position==i_468) {
            __result298__ = gComeFunResultObject = __result_obj__ = it_467->item;
            gComeFunResultObject = (void*)0;
            return __result298__;
        }
        it_467=it_467->next;
        i_468++;
    }
    memset(&default_value_469,0,sizeof(void*));
    __result299__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_469);
    come_call_finalizer3(default_value_469, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_473;
struct sNode* __result300__;
struct sNode* __result301__;
struct sNode* result_474;
struct sNode* __result302__;
result_473 = (void*)0;
result_474 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_473,0,sizeof(struct sNode*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_473;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->it=self->head;
    if(    self->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_474,0,sizeof(struct sNode*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_474;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_476;
struct sNode* __result303__;
struct sNode* __result304__;
struct sNode* result_477;
struct sNode* __result305__;
result_476 = (void*)0;
result_477 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_476,0,sizeof(struct sNode*));
        __result303__ = gComeFunResultObject = __result_obj__ = result_476;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result304__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    memset(&result_477,0,sizeof(struct sNode*));
    __result305__ = gComeFunResultObject = __result_obj__ = result_477;
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result306__;
void* __right_value372 = (void*)0;
struct CVALUE* result_486;
void* __right_value373 = (void*)0;
char* __dec_obj158;
void* __right_value374 = (void*)0;
struct sType* __dec_obj159;
void* __right_value375 = (void*)0;
char* __dec_obj160;
void* __right_value376 = (void*)0;
char* __dec_obj161;
struct CVALUE* __result307__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_486=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE", CVALUE_finalize, CVALUE_clone, CVALUE_get_hash_key, CVALUE_equals));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj158=result_486->c_value;
        result_486->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj159=result_486->type;
        result_486->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_486->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_486->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj160=result_486->c_value_without_right_value_objects;
        result_486->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj161=result_486->c_value_without_cast_object_value;
        result_486->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_486;
    come_call_finalizer3(result_486,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

static unsigned int CVALUE_get_hash_key(struct CVALUE* self){
unsigned int result_485;
    result_485=0;
    result_485+=int_get_hash_key(((int)self->c_value));
    result_485+=int_get_hash_key(((int)self->type));
    result_485+=int_get_hash_key(((int)self->var));
    result_485+=int_get_hash_key(((int)self->right_value_objects));
    result_485+=int_get_hash_key(((int)self->c_value_without_right_value_objects));
    result_485+=int_get_hash_key(((int)self->c_value_without_cast_object_value));
    return result_485;
}

static _Bool CVALUE_equals(struct CVALUE* left, struct CVALUE* right){
    if(    !string_equals(left->c_value,right->c_value)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->type,right->type)) {
        return (_Bool)0;
    }
    if(    !sVar_equals(left->var,right->var)) {
        return (_Bool)0;
    }
    if(    !sRightValueObject_equals(left->right_value_objects,right->right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_right_value_objects,right->c_value_without_right_value_objects)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->c_value_without_cast_object_value,right->c_value_without_cast_object_value)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVar_equals(struct sVar* left, struct sVar* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mCValueName,right->mCValueName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFunctionParam,right->mFunctionParam)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoFree,right->mNoFree)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right){
    if(    !sType_equals(left->mType,right->mType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mVarName,right->mVarName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunName,right->mFunName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mFreed,right->mFreed)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mBlockLevel,right->mBlockLevel)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStored,right->mStored)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDecrementRefCount,right->mDecrementRefCount)) {
        return (_Bool)0;
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
struct list_item$1voidph* it_490;
struct list_item$1voidph* it2_491;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_490=left->head;
    it2_491=right->head;
    while(it_490!=((void*)0)) {
        if(        !(voidp_operator_equals(it_490->item,it2_491->item))) {
            return (_Bool)0;
        }
        it_490=it_490->next;
        it2_491=it2_491->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_494;
struct list_item$1voidph* prev_it_495;
struct list$1voidph* __result308__;
    it_494=self->head;
    while(it_494!=((void*)0)) {
        prev_it_495=it_494;
        it_494=it_494->next;
        come_call_finalizer3(prev_it_495,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_498;
void* __result309__;
void* __result310__;
void* result_499;
void* __result311__;
result_498 = (void*)0;
result_499 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_498,0,sizeof(void*));
        __result309__ = gComeFunResultObject = __result_obj__ = result_498;
        gComeFunResultObject = (void*)0;
        return __result309__;
    }
    self->it=self->head;
    if(    self->it) {
        __result310__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    memset(&result_499,0,sizeof(void*));
    __result311__ = gComeFunResultObject = __result_obj__ = result_499;
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_501;
void* __result312__;
void* __result313__;
void* result_502;
void* __result314__;
result_501 = (void*)0;
result_502 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_501,0,sizeof(void*));
        __result312__ = gComeFunResultObject = __result_obj__ = result_501;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result313__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    memset(&result_502,0,sizeof(void*));
    __result314__ = gComeFunResultObject = __result_obj__ = result_502;
    gComeFunResultObject = (void*)0;
    return __result314__;
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
char* head_503;
_Bool dquort_504;
_Bool squort_505;
int sline_506;
int nest_507;
char* tail_508;
void* __right_value388 = (void*)0;
char* buf_509;
void* __right_value389 = (void*)0;
char* __result315__;
    head_503=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_504=(_Bool)0;
        squort_505=(_Bool)0;
        sline_506=0;
        nest_507=0;
        while(1) {
            if(            dquort_504) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_506);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_504=!dquort_504;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_506);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_506);
                        exit(2);
                    }
                }
            }
            else if(            squort_505) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_506);
                        exit(2);
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_505=!squort_505;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_506);
                        exit(2);
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_506);
                        exit(2);
                    }
                }
            }
            else if(            *info->p==39) {
                sline_506=info->sline;
                info->p++;
                squort_505=!squort_505;
            }
            else if(            *info->p==34) {
                sline_506=info->sline;
                info->p++;
                dquort_504=!dquort_504;
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
                nest_507++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_507==0) {
                    break;
                }
                nest_507--;
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
    tail_508=info->p;
    buf_509=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_508-head_503+1)), "05function.c", 765, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_509,head_503,tail_508-head_503);
    buf_509[tail_508-head_503]=0;
    skip_spaces_and_lf(info);
    __result315__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value389=__builtin_string(buf_509)));
    buf_509 = come_decrement_ref_count2(buf_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_510;
char* p3_511;
int i_512;
    terminated_510=(_Bool)0;
    p3_511=p;
    for(    i_512=0;    i_512<strlen(p2);    i_512++    ){
        if(        *p3_511==0) {
            terminated_510=(_Bool)1;
            break;
        }
        p3_511++;
    }
    return !terminated_510&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2charphcharph* parse_function_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct buffer* asm_fun_name_513;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
struct buffer* result_514;
char* head_515;
int brace_num_516;
char* tail_517;
char* head_518;
int brace_num_519;
char* tail_520;
char* head_521;
char* tail_522;
char* head_523;
char* tail_524;
int len_525;
_Bool in_dquort_526;
int brace_num_527;
char* head_528;
char* tail_529;
char* head_530;
char* tail_531;
char* head_532;
char* tail_533;
char* head_534;
int nest_535;
char* tail_536;
char* head_537;
int nest_538;
char* tail_539;
char* head_540;
int nest_541;
char* tail_542;
char* head_543;
int nest_544;
char* tail_545;
char* head_546;
int nest_547;
char* tail_548;
char* head_549;
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
int brace_num_560;
char* tail_561;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct tuple2$2charphcharph* __result319__;
    asm_fun_name_513=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 790, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    result_514=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 791, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_515=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_516=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_516++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_516--;
                        if(                        brace_num_516==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_517=info->p;
            buffer_append(result_514,head_515,tail_517-head_515);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_518=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_519=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_519++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_519--;
                        if(                        brace_num_519==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_520=info->p;
            buffer_append(result_514,head_518,tail_520-head_518);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_521=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_522=info->p;
            buffer_append(result_514,head_521,tail_522-head_521);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_523=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_524=info->p;
            buffer_append(result_514,head_523,tail_524-head_523);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_525=0;
            if(            *info->p==40) {
                in_dquort_526=(_Bool)0;
                brace_num_527=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_526=!in_dquort_526;
                    }
                    else if(                    in_dquort_526) {
                        buffer_append_char(asm_fun_name_513,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_527++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_527--;
                        if(                        brace_num_527==0) {
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
            head_528=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_529=info->p;
            buffer_append(result_514,head_528,tail_529-head_528);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_530=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_531=info->p;
            buffer_append(result_514,head_530,tail_531-head_530);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_532=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_533=info->p;
            buffer_append(result_514,head_532,tail_533-head_532);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_534=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_535=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_535++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_535--;
                        if(                        nest_535==0) {
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
            tail_536=info->p;
            buffer_append(result_514,head_534,tail_536-head_534);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_537=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_538=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_538++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_538--;
                        if(                        nest_538==0) {
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
            tail_539=info->p;
            buffer_append(result_514,head_537,tail_539-head_537);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_540=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_541=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_541++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_541--;
                        if(                        nest_541==0) {
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
            tail_542=info->p;
            buffer_append(result_514,head_540,tail_542-head_540);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_543=info->p;
            info->p+=strlen("_Nonnull");
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
            tail_545=info->p;
            buffer_append(result_514,head_543,tail_545-head_543);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_546=info->p;
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
            tail_548=info->p;
            buffer_append(result_514,head_546,tail_548-head_546);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_549=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_550=info->p;
            buffer_append(result_514,head_549,tail_550-head_549);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_551=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_552=info->p;
            buffer_append(result_514,head_551,tail_552-head_551);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_553=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_554=info->p;
            buffer_append(result_514,head_553,tail_554-head_553);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_555=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_556=info->p;
            buffer_append(result_514,head_555,tail_556-head_555);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_557=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_558=info->p;
            buffer_append(result_514,head_557,tail_558-head_557);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_559=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_560=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_560++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_560--;
                        if(                        brace_num_560==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_561=info->p;
            buffer_append(result_514,head_559,tail_561-head_559);
        }
        else {
            break;
        }
    }
    __result319__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value400=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1205, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_513)),(char*)come_increment_ref_count(buffer_to_string(result_514)))));
    come_call_finalizer3(asm_fun_name_513,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_514,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value400,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static void tuple2$2charphcharph_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj170;
char* __dec_obj171;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj170=self->v1;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj171=self->v2;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_clone(struct tuple2$2charphcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphcharph* __result316__;
void* __right_value396 = (void*)0;
struct tuple2$2charphcharph* result_563;
void* __right_value397 = (void*)0;
char* __dec_obj172;
void* __right_value398 = (void*)0;
char* __dec_obj173;
struct tuple2$2charphcharph* __result317__;
    if(    self==(void*)0) {
        __result316__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    result_563=(struct tuple2$2charphcharph*)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "tuple2$2charphcharph_clone", 3, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj172=result_563->v1;
        result_563->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj173=result_563->v2;
        result_563->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result317__ = gComeFunResultObject = __result_obj__ = result_563;
    come_call_finalizer3(result_563,tuple2$2charphcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static unsigned int tuple2$2charphcharph_get_hash_key(struct tuple2$2charphcharph* self){
unsigned int result_562;
    result_562=0;
    result_562+=int_get_hash_key(((int)self->v1));
    result_562+=int_get_hash_key(((int)self->v2));
    return result_562;
}

static _Bool tuple2$2charphcharph_equals(struct tuple2$2charphcharph* left, struct tuple2$2charphcharph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphcharph* tuple2$2charphcharph_initialize(struct tuple2$2charphcharph* self, char* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj174;
char* __dec_obj175;
struct tuple2$2charphcharph* __result318__;
    __dec_obj174=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result318__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj176;
char* __dec_obj177;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj176=self->v1;
            __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj177=self->v2;
            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2charphcharph* parse_attribute(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct buffer* asm_fun_name_564;
void* __right_value403 = (void*)0;
char* attribute_565;
int nest_566;
int nest_567;
int nest_568;
int nest_569;
int nest_570;
void* __right_value404 = (void*)0;
char* __dec_obj178;
int len_571;
_Bool in_dquort_572;
int brace_num_573;
int brace_num_574;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct tuple2$2charphcharph* __result320__;
    asm_fun_name_564=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1210, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
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
            __dec_obj178=attribute_565;
            attribute_565=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
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
    __result320__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphcharph*)(__right_value407=tuple2$2charphcharph_initialize((struct tuple2$2charphcharph**)come_increment_ref_count((struct tuple2$2charphcharph*)come_calloc(1, sizeof(struct tuple2$2charphcharph)*(1), "05function.c", 1479, "struct tuple2$2charphcharph", tuple2$2charphcharph_finalize, tuple2$2charphcharph_clone, tuple2$2charphcharph_get_hash_key, tuple2$2charphcharph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_564)),(char*)come_increment_ref_count(attribute_565))));
    come_call_finalizer3(asm_fun_name_564,buffer_finalize, 0, 0, 0, 0, (void*)0);
    attribute_565 = come_decrement_ref_count2(attribute_565, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value407,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value408 = (void*)0;
char* __dec_obj179;
char* head_575;
int head_sline_576;
void* __right_value409 = (void*)0;
char* buf_577;
void* __right_value410 = (void*)0;
struct sNode* node_578;
_Bool Value_579;
    while(*info->p) {
        __dec_obj179=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value411 = (void*)0;
char* name_580;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sType* result_type_581;
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
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct sType* __list_values1___582[9];
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1sTypeph* param_types_593;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* __list_values2___594[9];
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1charph* param_names_598;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct list$1charph* param_default_parametors_599;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sFun* main_fun_600;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
char* name_622;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sType* result_type_623;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sType* __list_values3___624[1];
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
struct list$1sTypeph* param_types_625;
void* __right_value474 = (void*)0;
char* __list_values4___626[1];
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct list$1charph* param_names_627;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct list$1charph* param_default_parametors_628;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sFun* main_fun_629;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
char* name_630;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sType* result_type_631;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __list_values5___632[7];
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1sTypeph* param_types_633;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
char* __list_values6___634[7];
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1charph* param_names_635;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1charph* param_default_parametors_636;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
struct sFun* main_fun_637;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
char* name_638;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* result_type_639;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __list_values7___640[5];
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct list$1sTypeph* param_types_641;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* __list_values8___642[5];
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct list$1charph* param_names_643;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1charph* param_default_parametors_644;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sFun* main_fun_645;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
char* name_646;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* result_type_647;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sType* __list_values9___648[1];
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct list$1sTypeph* param_types_649;
void* __right_value561 = (void*)0;
char* __list_values10___650[1];
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct list$1charph* param_names_651;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct list$1charph* param_default_parametors_652;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
struct sFun* main_fun_653;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
char* name_654;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct sType* result_type_655;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __list_values11___656[4];
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1sTypeph* param_types_657;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
char* __list_values12___658[4];
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1charph* param_names_659;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1charph* param_default_parametors_660;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
struct sFun* main_fun_661;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
char* name_662;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct sType* result_type_663;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sType* __list_values13___664[3];
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct list$1sTypeph* param_types_665;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
char* __list_values14___666[3];
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct list$1charph* param_names_667;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
struct list$1charph* param_default_parametors_668;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sFun* main_fun_669;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
char* name_670;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
struct sType* result_type_671;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sType* __list_values15___672[1];
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1sTypeph* param_types_673;
void* __right_value636 = (void*)0;
char* __list_values16___674[1];
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1charph* param_names_675;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct list$1charph* param_default_parametors_676;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sFun* main_fun_677;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
char* name_678;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sType* result_type_679;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sType* __list_values17___680[3];
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct list$1sTypeph* param_types_681;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
char* __list_values18___682[3];
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct list$1charph* param_names_683;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1charph* param_default_parametors_684;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sFun* main_fun_685;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
char* name_686;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* result_type_687;
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct list$1voidph* param_types_688;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct list$1charph* param_names_689;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1charph* param_default_parametors_690;
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct sFun* main_fun_691;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
char* name_692;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
struct sType* result_type_693;
void* __right_value692 = (void*)0;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
struct sType* __list_values19___694[4];
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
struct list$1sTypeph* param_types_695;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
char* __list_values20___696[4];
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct list$1charph* param_names_697;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
struct list$1charph* param_default_parametors_698;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct sFun* main_fun_699;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
char* name_700;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sType* result_type_701;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
struct list$1voidph* param_types_702;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
struct list$1charph* param_names_703;
void* __right_value724 = (void*)0;
void* __right_value725 = (void*)0;
struct list$1charph* param_default_parametors_704;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
struct sFun* fun_705;
void* __right_value732 = (void*)0;
void* __right_value733 = (void*)0;
char* name_706;
void* __right_value734 = (void*)0;
void* __right_value735 = (void*)0;
struct sType* result_type_707;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct list$1voidph* param_types_708;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct list$1charph* param_names_709;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
struct list$1charph* param_default_parametors_710;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct sFun* fun_711;
void* __right_value748 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_580=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_581=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1535, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_593=(struct list$1sTypeph*)come_increment_ref_count((__list_values1___582[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value415=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___582[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value417=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___582[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value419=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___582[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value421=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values1___582[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value423=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values1___582[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value425=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___582[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value427=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___582[7]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value429=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values1___582[8]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value431=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1536, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1536, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),9,__list_values1___582)));
        come_call_finalizer3(__right_value415,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value417,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value419,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value421,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value423,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value425,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value427,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value429,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value431,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_598=(struct list$1charph*)come_increment_ref_count((__list_values2___594[0]=(char*)come_increment_ref_count(((char*)(__right_value438=__builtin_string("count")))),
__list_values2___594[1]=(char*)come_increment_ref_count(((char*)(__right_value439=__builtin_string("size")))),
__list_values2___594[2]=(char*)come_increment_ref_count(((char*)(__right_value440=__builtin_string("sname")))),
__list_values2___594[3]=(char*)come_increment_ref_count(((char*)(__right_value441=__builtin_string("sline")))),
__list_values2___594[4]=(char*)come_increment_ref_count(((char*)(__right_value442=__builtin_string("class_name")))),
__list_values2___594[5]=(char*)come_increment_ref_count(((char*)(__right_value443=__builtin_string("finalizer_fun")))),
__list_values2___594[6]=(char*)come_increment_ref_count(((char*)(__right_value444=__builtin_string("cloner_fun")))),
__list_values2___594[7]=(char*)come_increment_ref_count(((char*)(__right_value445=__builtin_string("get_hash_key_fun")))),
__list_values2___594[8]=(char*)come_increment_ref_count(((char*)(__right_value446=__builtin_string("equaler_fun")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1537, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),9,__list_values2___594)));
        __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_599=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1538, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_599,((void*)0));
        list$1charphp_push_back(param_default_parametors_599,((void*)0));
        list$1charphp_push_back(param_default_parametors_599,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_599,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_599,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_600=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_580),(struct sType*)come_increment_ref_count(result_type_581),(struct list$1sTypeph*)come_increment_ref_count(param_types_593),(struct list$1charph*)come_increment_ref_count(param_names_598),(struct list$1charph*)come_increment_ref_count(param_default_parametors_599),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_calloc(int count, int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun, void* get_hash_key_fun, void* equler_fun)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_580)),(struct sFun*)come_increment_ref_count(main_fun_600));
        name_580 = come_decrement_ref_count2(name_580, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_581,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_593,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_598,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_599,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_600,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_622=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_623=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1555, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_625=(struct list$1sTypeph*)come_increment_ref_count((__list_values3___624[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value471=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1556, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1556, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values3___624)));
        come_call_finalizer3(__right_value471,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_627=(struct list$1charph*)come_increment_ref_count((__list_values4___626[0]=(char*)come_increment_ref_count(((char*)(__right_value474=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1557, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values4___626)));
        __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_628=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1558, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_629=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1559, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_622),(struct sType*)come_increment_ref_count(result_type_623),(struct list$1sTypeph*)come_increment_ref_count(param_types_625),(struct list$1charph*)come_increment_ref_count(param_names_627),(struct list$1charph*)come_increment_ref_count(param_default_parametors_628),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_increment_ref_count(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_622)),(struct sFun*)come_increment_ref_count(main_fun_629));
        name_622 = come_decrement_ref_count2(name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_623,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_625,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_627,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_628,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_629,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_630=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_631=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1570, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_633=(struct list$1sTypeph*)come_increment_ref_count((__list_values5___632[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___632[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value492=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___632[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value494=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___632[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value496=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values5___632[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value498=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___632[5]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value500=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values5___632[6]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value502=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1571, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1571, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),7,__list_values5___632)));
        come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value492,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value494,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value496,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value498,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value500,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value502,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_635=(struct list$1charph*)come_increment_ref_count((__list_values6___634[0]=(char*)come_increment_ref_count(((char*)(__right_value505=__builtin_string("fun")))),
__list_values6___634[1]=(char*)come_increment_ref_count(((char*)(__right_value506=__builtin_string("mem")))),
__list_values6___634[2]=(char*)come_increment_ref_count(((char*)(__right_value507=__builtin_string("protocol_fun")))),
__list_values6___634[3]=(char*)come_increment_ref_count(((char*)(__right_value508=__builtin_string("protocol_obj")))),
__list_values6___634[4]=(char*)come_increment_ref_count(((char*)(__right_value509=__builtin_string("call_finalizer_only")))),
__list_values6___634[5]=(char*)come_increment_ref_count(((char*)(__right_value510=__builtin_string("no_decrement")))),
__list_values6___634[6]=(char*)come_increment_ref_count(((char*)(__right_value511=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1572, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),7,__list_values6___634)));
        __right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value509 = come_decrement_ref_count2(__right_value509, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value510 = come_decrement_ref_count2(__right_value510, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_636=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1573, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_637=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1574, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_630),(struct sType*)come_increment_ref_count(result_type_631),(struct list$1sTypeph*)come_increment_ref_count(param_types_633),(struct list$1charph*)come_increment_ref_count(param_names_635),(struct list$1charph*)come_increment_ref_count(param_default_parametors_636),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_630)),(struct sFun*)come_increment_ref_count(main_fun_637));
        name_630 = come_decrement_ref_count2(name_630, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_631,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_633,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_635,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_636,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_637,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_638=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_639=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1585, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_641=(struct list$1sTypeph*)come_increment_ref_count((__list_values7___640[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value527=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___640[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value529=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___640[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value531=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values7___640[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value533=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
__list_values7___640[4]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value535=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1586, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1586, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),5,__list_values7___640)));
        come_call_finalizer3(__right_value527,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value529,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value531,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value535,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_643=(struct list$1charph*)come_increment_ref_count((__list_values8___642[0]=(char*)come_increment_ref_count(((char*)(__right_value538=__builtin_string("mem")))),
__list_values8___642[1]=(char*)come_increment_ref_count(((char*)(__right_value539=__builtin_string("protocol_fun")))),
__list_values8___642[2]=(char*)come_increment_ref_count(((char*)(__right_value540=__builtin_string("protocol_obj")))),
__list_values8___642[3]=(char*)come_increment_ref_count(((char*)(__right_value541=__builtin_string("no_decrement")))),
__list_values8___642[4]=(char*)come_increment_ref_count(((char*)(__right_value542=__builtin_string("no_free")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1587, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),5,__list_values8___642)));
        __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_644=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1588, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_645=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1589, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_638),(struct sType*)come_increment_ref_count(result_type_639),(struct list$1sTypeph*)come_increment_ref_count(param_types_641),(struct list$1charph*)come_increment_ref_count(param_names_643),(struct list$1charph*)come_increment_ref_count(param_default_parametors_644),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_638)),(struct sFun*)come_increment_ref_count(main_fun_645));
        name_638 = come_decrement_ref_count2(name_638, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_639,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_641,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_643,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_644,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_645,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_646=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_647=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1600, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_649=(struct list$1sTypeph*)come_increment_ref_count((__list_values9___648[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value558=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1601, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1601, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values9___648)));
        come_call_finalizer3(__right_value558,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_651=(struct list$1charph*)come_increment_ref_count((__list_values10___650[0]=(char*)come_increment_ref_count(((char*)(__right_value561=__builtin_string("mem")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1602, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values10___650)));
        __right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_652=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1603, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_653=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1604, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_646),(struct sType*)come_increment_ref_count(result_type_647),(struct list$1sTypeph*)come_increment_ref_count(param_types_649),(struct list$1charph*)come_increment_ref_count(param_names_651),(struct list$1charph*)come_increment_ref_count(param_default_parametors_652),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_free_object(void* mem)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_646)),(struct sFun*)come_increment_ref_count(main_fun_653));
        name_646 = come_decrement_ref_count2(name_646, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_647,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_649,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_651,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_652,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_653,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_654=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_655=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1615, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_657=(struct list$1sTypeph*)come_increment_ref_count((__list_values11___656[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value577=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values11___656[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value579=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values11___656[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value581=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values11___656[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value583=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1616, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1616, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values11___656)));
        come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value583,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_659=(struct list$1charph*)come_increment_ref_count((__list_values12___658[0]=(char*)come_increment_ref_count(((char*)(__right_value586=__builtin_string("block")))),
__list_values12___658[1]=(char*)come_increment_ref_count(((char*)(__right_value587=__builtin_string("sname")))),
__list_values12___658[2]=(char*)come_increment_ref_count(((char*)(__right_value588=__builtin_string("sline")))),
__list_values12___658[3]=(char*)come_increment_ref_count(((char*)(__right_value589=__builtin_string("class_name")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1617, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values12___658)));
        __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_660=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1618, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_660,((void*)0));
        list$1charphp_push_back(param_default_parametors_660,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1charphp_push_back(param_default_parametors_660,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1charphp_push_back(param_default_parametors_660,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_661=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1623, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_654),(struct sType*)come_increment_ref_count(result_type_655),(struct list$1sTypeph*)come_increment_ref_count(param_types_657),(struct list$1charph*)come_increment_ref_count(param_names_659),(struct list$1charph*)come_increment_ref_count(param_default_parametors_660),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_memdup(void* block, char* sname, int sline, char* class_name)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_654)),(struct sFun*)come_increment_ref_count(main_fun_661));
        name_654 = come_decrement_ref_count2(name_654, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_655,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_657,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_659,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_660,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_661,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_662=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_663=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_665=(struct list$1sTypeph*)come_increment_ref_count((__list_values13___664[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value608=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values13___664[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value610=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values13___664[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value612=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"long",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1635, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values13___664)));
        come_call_finalizer3(__right_value608,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value610,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_667=(struct list$1charph*)come_increment_ref_count((__list_values14___666[0]=(char*)come_increment_ref_count(((char*)(__right_value615=__builtin_string("b")))),
__list_values14___666[1]=(char*)come_increment_ref_count(((char*)(__right_value616=__builtin_string("c")))),
__list_values14___666[2]=(char*)come_increment_ref_count(((char*)(__right_value617=__builtin_string("len")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1636, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values14___666)));
        __right_value615 = come_decrement_ref_count2(__right_value615, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value616 = come_decrement_ref_count2(__right_value616, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_668=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1637, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_669=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1638, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_662),(struct sType*)come_increment_ref_count(result_type_663),(struct list$1sTypeph*)come_increment_ref_count(param_types_665),(struct list$1charph*)come_increment_ref_count(param_names_667),(struct list$1charph*)come_increment_ref_count(param_default_parametors_668),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* memset(void* b, int c, size_t len)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_662)),(struct sFun*)come_increment_ref_count(main_fun_669));
        name_662 = come_decrement_ref_count2(name_662, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_663,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_665,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_667,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_668,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_669,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_670=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_671=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        param_types_673=(struct list$1sTypeph*)come_increment_ref_count((__list_values15___672[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value633=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1650, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1650, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values15___672)));
        come_call_finalizer3(__right_value633,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_675=(struct list$1charph*)come_increment_ref_count((__list_values16___674[0]=(char*)come_increment_ref_count(((char*)(__right_value636=__builtin_string("str")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1651, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values16___674)));
        __right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_676=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1652, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_677=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_670),(struct sType*)come_increment_ref_count(result_type_671),(struct list$1sTypeph*)come_increment_ref_count(param_types_673),(struct list$1charph*)come_increment_ref_count(param_names_675),(struct list$1charph*)come_increment_ref_count(param_default_parametors_676),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("char* __builtin_string(char* str)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_670)),(struct sFun*)come_increment_ref_count(main_fun_677));
        name_670 = come_decrement_ref_count2(name_670, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_671,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_673,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_675,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_676,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_677,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_678=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_679=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1711, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_681=(struct list$1sTypeph*)come_increment_ref_count((__list_values17___680[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value652=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___680[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value654=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values17___680[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value656=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1712, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1712, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),3,__list_values17___680)));
        come_call_finalizer3(__right_value652,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value654,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value656,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_683=(struct list$1charph*)come_increment_ref_count((__list_values18___682[0]=(char*)come_increment_ref_count(((char*)(__right_value659=xsprintf("come_malloc")))),
__list_values18___682[1]=(char*)come_increment_ref_count(((char*)(__right_value660=xsprintf("come_debug")))),
__list_values18___682[2]=(char*)come_increment_ref_count(((char*)(__right_value661=xsprintf("come_gc")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1713, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),3,__list_values18___682)));
        __right_value659 = come_decrement_ref_count2(__right_value659, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value660 = come_decrement_ref_count2(__right_value660, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_684=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1714, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_684,((void*)0));
        main_fun_685=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1716, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_678),(struct sType*)come_increment_ref_count(result_type_679),(struct list$1sTypeph*)come_increment_ref_count(param_types_681),(struct list$1charph*)come_increment_ref_count(param_names_683),(struct list$1charph*)come_increment_ref_count(param_default_parametors_684),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("come_heap_init(int come_malloc, int come_debug, int come_gc)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_678)),(struct sFun*)come_increment_ref_count(main_fun_685));
        name_678 = come_decrement_ref_count2(name_678, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_679,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_681,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_683,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_684,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_685,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_686=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_687=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1727, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_688=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1728, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_689=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1729, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_690=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1730, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_691=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1731, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_686),(struct sType*)come_increment_ref_count(result_type_687),(struct list$1voidph*)come_increment_ref_count(param_types_688),(struct list$1charph*)come_increment_ref_count(param_names_689),(struct list$1charph*)come_increment_ref_count(param_default_parametors_690),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void come_heap_final()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_686)),(struct sFun*)come_increment_ref_count(main_fun_691));
        name_686 = come_decrement_ref_count2(name_686, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_687,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_688,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_689,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_690,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_691,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_692=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_693=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1742, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        param_types_695=(struct list$1sTypeph*)come_increment_ref_count((__list_values19___694[0]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value693=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info)))),
__list_values19___694[1]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value695=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)))),
__list_values19___694[2]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value697=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
__list_values19___694[3]=(struct sType*)come_increment_ref_count(((struct sType*)(__right_value699=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1743, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info)))),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 1743, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),4,__list_values19___694)));
        come_call_finalizer3(__right_value693,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value695,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value697,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value699,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_697=(struct list$1charph*)come_increment_ref_count((__list_values20___696[0]=(char*)come_increment_ref_count(((char*)(__right_value702=__builtin_string("mem")))),
__list_values20___696[1]=(char*)come_increment_ref_count(((char*)(__right_value703=__builtin_string("sname")))),
__list_values20___696[2]=(char*)come_increment_ref_count(((char*)(__right_value704=__builtin_string("sline")))),
__list_values20___696[3]=(char*)come_increment_ref_count(((char*)(__right_value705=__builtin_string("id")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1744, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),4,__list_values20___696)));
        __right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value703 = come_decrement_ref_count2(__right_value703, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value704 = come_decrement_ref_count2(__right_value704, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value705 = come_decrement_ref_count2(__right_value705, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        param_default_parametors_698=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1745, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_699=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1746, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_692),(struct sType*)come_increment_ref_count(result_type_693),(struct list$1sTypeph*)come_increment_ref_count(param_types_695),(struct list$1charph*)come_increment_ref_count(param_names_697),(struct list$1charph*)come_increment_ref_count(param_default_parametors_698),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void* come_null_check(void* mem, char* sname, int sline, int id)")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_692)),(struct sFun*)come_increment_ref_count(main_fun_699));
        name_692 = come_decrement_ref_count2(name_692, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_693,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_695,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_697,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_698,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_699,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_700=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_701=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1757, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_702=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1758, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_703=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1759, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_704=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1760, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_705=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1761, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_700),(struct sType*)come_increment_ref_count(result_type_701),(struct list$1voidph*)come_increment_ref_count(param_types_702),(struct list$1charph*)come_increment_ref_count(param_names_703),(struct list$1charph*)come_increment_ref_count(param_default_parametors_704),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_start()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_700)),(struct sFun*)come_increment_ref_count(fun_705));
        name_700 = come_decrement_ref_count2(name_700, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_701,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_702,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_703,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_704,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_705,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_706=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_707=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1789, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        param_types_708=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 1790, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
        param_names_709=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1791, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_710=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 1792, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_711=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1793, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_706),(struct sType*)come_increment_ref_count(result_type_707),(struct list$1voidph*)come_increment_ref_count(param_types_708),(struct list$1charph*)come_increment_ref_count(param_names_709),(struct list$1charph*)come_increment_ref_count(param_default_parametors_710),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,(char*)come_increment_ref_count(__builtin_string("void __builtin_va_end()")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_706)),(struct sFun*)come_increment_ref_count(fun_711));
        name_706 = come_decrement_ref_count2(name_706, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_707,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_708,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_709,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_710,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_711,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sTypeph* list$1sTypeph_initialize_with_values(struct list$1sTypeph* self, int num_value, struct sType** values){
void* __result_obj__=(void*)0;
int i_583;
struct list$1sTypeph* __result322__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_583=0;    i_583<num_value;    i_583++    ){
        list$1sTypephp_push_back(self,values[i_583]);
    }
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value432 = (void*)0;
struct list_item$1sTypeph* litem_584;
struct sType* __dec_obj180;
void* __right_value433 = (void*)0;
struct list_item$1sTypeph* litem_585;
struct sType* __dec_obj181;
void* __right_value434 = (void*)0;
struct list_item$1sTypeph* litem_586;
struct sType* __dec_obj182;
struct list$1sTypeph* __result321__;
    if(    self->len==0) {
        litem_584=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value432=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1405, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_584->prev=((void*)0);
        litem_584->next=((void*)0);
        __dec_obj180=litem_584->item;
        litem_584->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_584;
        self->head=litem_584;
    }
    else if(    self->len==1) {
        litem_585=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value433=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1415, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_585->prev=self->head;
        litem_585->next=((void*)0);
        __dec_obj181=litem_585->item;
        litem_585->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_585;
        self->head->next=litem_585;
    }
    else {
        litem_586=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value434=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1425, "struct list_item$1sTypeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_586->prev=self->tail;
        litem_586->next=((void*)0);
        __dec_obj182=litem_586->item;
        litem_586->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj182,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_586;
        self->tail=litem_586;
    }
    self->len++;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_587;
struct list_item$1sTypeph* prev_it_588;
    it_587=self->head;
    while(it_587!=((void*)0)) {
        prev_it_588=it_587;
        it_587=it_587->next;
        come_call_finalizer3(prev_it_588,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj183;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj183=self->item;
            come_call_finalizer3(__dec_obj183,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_589;
struct list_item$1sTypeph* prev_it_590;
    it_589=self->head;
    while(it_589!=((void*)0)) {
        prev_it_590=it_589;
        it_589=it_589->next;
        come_call_finalizer3(prev_it_590,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sTypeph* list$1sTypeph_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result323__;
void* __right_value435 = (void*)0;
struct list$1sTypeph* result_592;
struct list$1sTypeph* __result324__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_592=(struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "list$1sTypeph_clone", 3, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals));
    if(    self!=((void*)0)) {
        result_592->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_592->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_592->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_592->it=self->it;
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_592;
    come_call_finalizer3(result_592,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static unsigned int list$1sTypeph_get_hash_key(struct list$1sTypeph* self){
unsigned int result_591;
    result_591=0;
    result_591+=int_get_hash_key(((int)self->head));
    result_591+=int_get_hash_key(((int)self->tail));
    result_591+=int_get_hash_key(((int)self->len));
    result_591+=int_get_hash_key(((int)self->it));
    return result_591;
}

static _Bool list$1sTypeph_equals(struct list$1sTypeph* left, struct list$1sTypeph* right){
    if(    !list_item$1sTypeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sTypeph_equals(struct list_item$1sTypeph* left, struct list_item$1sTypeph* right){
    if(    !sType_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sTypeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_595;
struct list$1charph* __result325__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_595=0;    i_595<num_value;    i_595++    ){
        list$1charphp_push_back(self,values[i_595]);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result326__;
void* __right_value447 = (void*)0;
struct list$1charph* result_597;
struct list$1charph* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_597=(struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "list$1charph_clone", 3, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals));
    if(    self!=((void*)0)) {
        result_597->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_597->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_597->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_597->it=self->it;
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_597;
    come_call_finalizer3(result_597,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_596;
    result_596=0;
    result_596+=int_get_hash_key(((int)self->head));
    result_596+=int_get_hash_key(((int)self->tail));
    result_596+=int_get_hash_key(((int)self->len));
    result_596+=int_get_hash_key(((int)self->it));
    return result_596;
}

static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right){
    if(    !list_item$1charph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right){
    if(    !string_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1charph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2charphsFunph* map$2charphsFunphp_insert(struct map$2charphsFunph* self, char* key, struct sFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_618;
unsigned int it_619;
_Bool same_key_exist_620;
char* it2_621;
struct map$2charphsFunph* __result338__;
    if(    self->len*10>=self->size) {
        map$2charphsFunphp_rehash(self);
    }
    hash_618=string_get_hash_key(((char*)key))%self->size;
    it_619=hash_618;
    while((_Bool)1) {
        if(        self->item_existance[it_619]) {
            if(            string_equals(self->keys[it_619],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_619]);
                    self->keys[it_619] = come_decrement_ref_count2(self->keys[it_619], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_619]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_619]);
                    self->keys[it_619]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_619],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_619]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_619]=item;
                }
                break;
            }
            it_619++;
            if(            it_619>=self->size) {
                it_619=0;
            }
            else if(            it_619==hash_618) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_619]=(_Bool)1;
            if(            1) {
                self->keys[it_619]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_619]=key;
            }
            if(            1) {
                self->items[it_619]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_619]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_620=(_Bool)0;
    for(    it2_621=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_621=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_621,key)) {
            same_key_exist_620=(_Bool)1;
        }
    }
    if(    !same_key_exist_620) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static void map$2charphsFunphp_rehash(struct map$2charphsFunph* self){
int size_601;
void* __right_value461 = (void*)0;
char** keys_602;
void* __right_value462 = (void*)0;
struct sFun** items_603;
void* __right_value463 = (void*)0;
_Bool* item_existance_604;
int len_605;
char* it_608;
struct sFun* default_value_611;
void* __right_value464 = (void*)0;
struct sFun* it2_612;
unsigned int hash_615;
int n_616;
struct sFun* default_value_617;
void* __right_value465 = (void*)0;
default_value_611 = (void*)0;
default_value_617 = (void*)0;
    size_601=self->size*10;
    keys_602=(char**)come_increment_ref_count(((char**)(__right_value461=(char**)come_calloc(1, sizeof(char*)*(1*(size_601)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_603=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value462=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_601)), "./comelang.h", 2809, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_604=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value463=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_601)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_605=0;
    for(    it_608=map$2charphsFunphp_begin(self);    !map$2charphsFunphp_end(self);    it_608=map$2charphsFunphp_next(self)    ){
        memset(&default_value_611,0,sizeof(struct sFun*));
        it2_612=((struct sFun*)(__right_value464=map$2charphsFunphp_at(self,it_608,default_value_611)));
        come_call_finalizer3(__right_value464,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_615=string_get_hash_key(((char*)it_608))%size_601;
        n_616=hash_615;
        while((_Bool)1) {
            if(            item_existance_604[n_616]) {
                n_616++;
                if(                n_616>=size_601) {
                    n_616=0;
                }
                else if(                n_616==hash_615) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_604[n_616]=(_Bool)1;
                keys_602[n_616]=it_608;
                items_603[n_616]=((struct sFun*)(__right_value465=map$2charphsFunphp_at(self,it_608,default_value_617)));
                come_call_finalizer3(__right_value465,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_605++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_602;
    self->items=items_603;
    self->item_existance=item_existance_604;
    self->size=size_601;
    self->len=len_605;
}

static char* map$2charphsFunphp_begin(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_606;
char* __result328__;
char* __result329__;
char* result_607;
char* __result330__;
result_606 = (void*)0;
result_607 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_606,0,sizeof(char*));
        __result328__ = gComeFunResultObject = __result_obj__ = result_606;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result329__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    memset(&result_607,0,sizeof(char*));
    __result330__ = gComeFunResultObject = __result_obj__ = result_607;
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static _Bool map$2charphsFunphp_end(struct map$2charphsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsFunphp_next(struct map$2charphsFunph* self){
void* __result_obj__=(void*)0;
char* result_609;
char* __result331__;
char* __result332__;
char* result_610;
char* __result333__;
result_609 = (void*)0;
result_610 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_609,0,sizeof(char*));
        __result331__ = gComeFunResultObject = __result_obj__ = result_609;
        gComeFunResultObject = (void*)0;
        return __result331__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result332__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    memset(&result_610,0,sizeof(char*));
    __result333__ = gComeFunResultObject = __result_obj__ = result_610;
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static struct sFun* map$2charphsFunphp_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_613;
unsigned int it_614;
struct sFun* __result334__;
struct sFun* __result335__;
struct sFun* __result336__;
struct sFun* __result337__;
    hash_613=string_get_hash_key(((char*)key))%self->size;
    it_614=hash_613;
    while((_Bool)1) {
        if(        self->item_existance[it_614]) {
            if(            string_equals(self->keys[it_614],key)) {
                __result334__ = gComeFunResultObject = __result_obj__ = self->items[it_614];
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result334__;
            }
            it_614++;
            if(            it_614>=self->size) {
                it_614=0;
            }
            else if(            it_614==hash_613) {
                __result335__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result335__;
            }
        }
        else {
            __result336__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result336__;
        }
    }
    __result337__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
char* source_head_712;
_Bool is_type_name_flag_713;
int sline_714;
_Bool define_struct_nobody_715;
char* p_716;
int sline_717;
void* __right_value749 = (void*)0;
char* word_718;
_Bool define_function_pointer_result_function_719;
_Bool define_variable_between_brace_720;
char* p_721;
void* __right_value750 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* result_type_722=0;
char* fun_name_723=0;
_Bool err_724=0;
void* __right_value751 = (void*)0;
char* word_725;
_Bool define_function_flag_726;
char* p_727;
void* __right_value752 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* result_type_728=0;
char* fun_name_729=0;
_Bool err_730=0;
char* word_731;
void* __right_value753 = (void*)0;
char* __dec_obj186;
void* __right_value754 = (void*)0;
char* __dec_obj187;
char* __dec_obj188;
void* __right_value755 = (void*)0;
char* __dec_obj189;
_Bool define_variable_732;
char* p_733;
void* __right_value756 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* result_type_734=0;
char* fun_name_735=0;
_Bool err_736=0;
void* __right_value757 = (void*)0;
char* word_737;
void* __right_value758 = (void*)0;
char* word_738;
char* p_739;
void* __right_value759 = (void*)0;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
char* word_740;
void* __right_value762 = (void*)0;
char* __dec_obj190;
void* __right_value763 = (void*)0;
char* word_741;
void* __right_value764 = (void*)0;
char* word_744;
void* __right_value765 = (void*)0;
void* __right_value766 = (void*)0;
struct sNode* node_745;
struct sNode* __result340__;
void* __right_value767 = (void*)0;
struct sNode* __result341__;
char* header_head_746;
void* __right_value768 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* result_type_747=0;
char* fun_name_748=0;
_Bool err_749=0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct list$1voidph* param_types_750;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct list$1charph* param_names_751;
void* __right_value773 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* param_type_752=0;
char* param_name_753=0;
_Bool err_754=0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct list$1voidph* param_types2_759;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
struct list$1charph* param_names2_760;
void* __right_value783 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* param_type_761=0;
char* param_name_762=0;
_Bool err_763=0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
char* header_tail_765;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct sType* result_type2_766;
struct sType* __dec_obj194;
void* __right_value788 = (void*)0;
struct list$1voidph* __dec_obj195;
void* __right_value789 = (void*)0;
struct list$1charph* __dec_obj196;
_Bool var_args_767;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
struct buffer* header_buf_768;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct list$1charph* param_default_parametors_769;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
void* __right_value800 = (void*)0;
struct sFun* fun_770;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
struct sFun* fun2_774;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value853 = (void*)0;
struct sNode* __result373__;
void* __right_value854 = (void*)0;
struct sNode* node_825;
struct sNode* __result374__;
void* __right_value855 = (void*)0;
struct sNode* node_826;
struct sNode* __result375__;
void* __right_value856 = (void*)0;
struct sNode* node_827;
char* source_tail_828;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
struct buffer* header_829;
struct sNode* __result376__;
void* __right_value859 = (void*)0;
char* buf2_830;
void* __right_value860 = (void*)0;
struct sNode* __result377__;
    info->in_top_level=(_Bool)1;
    source_head_712=info->p;
    is_type_name_flag_713=is_type_name(buf,info);
    sline_714=info->sline;
    define_struct_nobody_715=(_Bool)0;
    {
        p_716=info->p;
        sline_717=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_718=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_715=(_Bool)1;
                }
                word_718 = come_decrement_ref_count2(word_718, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=head;
        info->sline=sline_717;
    }
    define_function_pointer_result_function_719=(_Bool)0;
    define_variable_between_brace_720=(_Bool)0;
    if(    is_type_name_flag_713) {
        p_721=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value750=backtrace_parse_type((_Bool)0,info)));
            result_type_722=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            fun_name_723=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_724=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value750,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_719=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_725=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_725,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_720=(_Bool)1;
                            }
                        }
                        word_725 = come_decrement_ref_count2(word_725, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
            }
            come_call_finalizer3(result_type_722,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_723 = come_decrement_ref_count2(fun_name_723, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=head;
        info->sline=sline_714;
    }
    define_function_flag_726=(_Bool)0;
    if(    is_type_name_flag_713&&!define_function_pointer_result_function_719&&charp_operator_not_equals(buf,"__typeof__")) {
        p_727=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value752=backtrace_parse_type((_Bool)0,info)));
            result_type_728=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
            fun_name_729=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            err_730=multiple_assign_var2->v3;
            come_call_finalizer3(__right_value752,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_729 = come_decrement_ref_count2(fun_name_729, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_731=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj186=word_731;
                word_731=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_731,"extern")) {
                    __dec_obj187=word_731;
                    word_731=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj188=word_731;
                word_731=((void*)0);
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_731) {
                if(                is_type_name(word_731,info)) {
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
                        __dec_obj189=word_731;
                        word_731=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_731)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_713) {
                        define_function_flag_726=(_Bool)1;
                    }
                }
            }
            word_731 = come_decrement_ref_count2(word_731, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        info->p=p_727;
        info->sline=sline_714;
    }
    define_variable_732=(_Bool)1;
    if(    is_type_name_flag_713&&!define_function_pointer_result_function_719) {
        p_733=info->p;
        info->p=head;
        if(        !is_type_name_flag_713) {
            define_variable_732=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value756=backtrace_parse_type((_Bool)0,info)));
            result_type_734=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
            fun_name_735=(char*)come_increment_ref_count(multiple_assign_var3->v2);
            err_736=multiple_assign_var3->v3;
            come_call_finalizer3(__right_value756,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_737=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_732=(_Bool)1;
                            }
                        }
                        word_737 = come_decrement_ref_count2(word_737, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_738=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_738,info)&&*info->p!=40) {
                            define_variable_732=(_Bool)1;
                        }
                    }
                    word_738 = come_decrement_ref_count2(word_738, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            come_call_finalizer3(result_type_734,sType_finalize, 0, 0, 0, 0, (void*)0);
            fun_name_735 = come_decrement_ref_count2(fun_name_735, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_732=(_Bool)0;
        }
        else if(        define_variable_732) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_732=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_732=(_Bool)0;
            }
        }
        info->p=p_733;
        info->sline=sline_714;
    }
    else {
        define_variable_732=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_719) {
        p_739=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value759=parse_struct_attribute(info)));
            __right_value759 = come_decrement_ref_count2(__right_value759, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value760=parse_word(info)));
                __right_value760 = come_decrement_ref_count2(__right_value760, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_740=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj190=word_740;
                        word_740=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_740,"extends")) {
                            define_variable_732=(_Bool)0;
                        }
                    }
                    word_740 = come_decrement_ref_count2(word_740, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_732=(_Bool)0;
        }
        else if(        define_variable_732) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_732=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_732=(_Bool)0;
            }
        }
        info->p=p_739;
        info->sline=sline_714;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_741=(char*)come_increment_ref_count(parse_word(info));
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
                    word_744=(char*)come_increment_ref_count(parse_word(info));
                    list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_744)));
                    word_744 = come_decrement_ref_count2(word_744, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            node_745=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1charphp_reset(info->method_generics_type_names);
            __result340__ = gComeFunResultObject = __result_obj__ = node_745;
            if(node_745) { node_745 = come_decrement_ref_count2(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0, 1, 0, (void*)0); } 
            word_741 = come_decrement_ref_count2(word_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result340__;
            if(node_745) { node_745 = come_decrement_ref_count2(node_745, ((struct sNode*)node_745)->finalize, ((struct sNode*)node_745)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        word_741 = come_decrement_ref_count2(word_741, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_715) {
    }
    else if(    define_variable_between_brace_720) {
        info->p=head;
        info->sline=sline_714;
        __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value767=parse_global_variable(info)));
        if(__right_value767) { __right_value767 = come_decrement_ref_count2(__right_value767, ((struct sNode*)__right_value767)->finalize, ((struct sNode*)__right_value767)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    else if(    define_function_pointer_result_function_719) {
        header_head_746=info->p;
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value768=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_747=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        fun_name_748=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_749=multiple_assign_var4->v3;
        come_call_finalizer3(__right_value768,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_750=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2119, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            param_names_751=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2120, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value773=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_752=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                    param_name_753=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                    err_754=multiple_assign_var5->v3;
                    come_call_finalizer3(__right_value773,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    if(                    !err_754) {
                        err_msg(info,"parse_type is failed");
                        exit(2);
                    }
                    list$1voidphp_push_back(param_types_750,(struct sType*)come_increment_ref_count(param_type_752));
                    static int num_function_pointer_result_var_name_a_758=0;
                    list$1charphp_push_back(param_names_751,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_758)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value778=parse_word(info)));
                        __right_value778 = come_decrement_ref_count2(__right_value778, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_753 = come_decrement_ref_count2(param_name_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        break;
                    }
                    else {
                        err_msg(info,"require , or ) (1) it is %c",*info->p);
                        exit(2);
                    }
                    come_call_finalizer3(param_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_753 = come_decrement_ref_count2(param_name_753, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_759=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2166, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
                param_names2_760=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2167, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value783=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_761=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                        param_name_762=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                        err_763=multiple_assign_var6->v3;
                        come_call_finalizer3(__right_value783,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        if(                        !err_763) {
                            err_msg(info,"parse_type is failed");
                            exit(2);
                        }
                        list$1voidphp_push_back(param_types2_759,(struct sType*)come_increment_ref_count(param_type_761));
                        static int num_function_pointer_result_var_name_b_764=0;
                        list$1charphp_push_back(param_names2_760,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_764)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value785=parse_word(info)));
                            __right_value785 = come_decrement_ref_count2(__right_value785, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
                            param_name_762 = come_decrement_ref_count2(param_name_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            break;
                        }
                        else {
                            err_msg(info,"require , or ) (2)");
                            exit(2);
                        }
                        come_call_finalizer3(param_type_761,sType_finalize, 0, 0, 0, 0, (void*)0);
                        param_name_762 = come_decrement_ref_count2(param_name_762, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                header_tail_765=info->p;
                result_type2_766=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2209, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
                __dec_obj194=result_type2_766->mResultType;
                result_type2_766->mResultType=(struct sType*)come_increment_ref_count(result_type_747);
                come_call_finalizer3(__dec_obj194,sType_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj195=result_type2_766->mParamTypes;
                result_type2_766->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types2_759));
                come_call_finalizer3(__dec_obj195,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
                __dec_obj196=result_type2_766->mParamNames;
                result_type2_766->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, param_names2_760));
                come_call_finalizer3(__dec_obj196,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
                result_type2_766->mVarArgs=(_Bool)0;
                result_type2_766->mStatic=(_Bool)0;
                var_args_767=(_Bool)0;
                header_buf_768=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2219, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                buffer_append(header_buf_768,header_head_746,header_tail_765-header_head_746);
                buffer_append_char(header_buf_768,0);
                param_default_parametors_769=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2223, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_770=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2225, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_748)),(struct sType*)come_increment_ref_count(result_type2_766),(struct list$1voidph*)come_increment_ref_count(param_types_750),(struct list$1charph*)come_increment_ref_count(param_names_751),(struct list$1charph*)come_increment_ref_count(param_default_parametors_769),(_Bool)1,var_args_767,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_768)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_774=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value801=__builtin_string(fun_name_748)))));
                __right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                fun2_774==((void*)0)||fun2_774->mExternal) {
                    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_748)),(struct sFun*)come_increment_ref_count(fun_770));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2238, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value805=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2238, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_770),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                __result373__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value853=_inf_value2));
                come_call_finalizer3(param_types2_759,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_760,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_766,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_768,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_769,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_770,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_774,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_750,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_751,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name_748 = come_decrement_ref_count2(fun_name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value805,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value853) { __right_value853 = come_decrement_ref_count2(__right_value853, ((struct sNode*)__right_value853)->finalize, ((struct sNode*)__right_value853)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result373__;
                come_call_finalizer3(param_types2_759,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_760,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_766,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(header_buf_768,buffer_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_769,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_770,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_774,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                err_msg(info,"require (");
                exit(2);
            }
            come_call_finalizer3(param_types_750,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_751,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_747,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_748 = come_decrement_ref_count2(fun_name_748, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_714;
        node_825=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result374__ = gComeFunResultObject = __result_obj__ = node_825;
        if(node_825) { node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result374__;
        if(node_825) { node_825 = come_decrement_ref_count2(node_825, ((struct sNode*)node_825)->finalize, ((struct sNode*)node_825)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_function_flag_726) {
        info->p=head;
        info->sline=sline_714;
        node_826=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result375__ = gComeFunResultObject = __result_obj__ = node_826;
        if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result375__;
        if(node_826) { node_826 = come_decrement_ref_count2(node_826, ((struct sNode*)node_826)->finalize, ((struct sNode*)node_826)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    define_variable_732) {
        info->p=head;
        info->sline=sline_714;
        node_827=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_828=info->p;
        header_829=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2270, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append(header_829,source_head_712,source_tail_828-source_head_712);
        __result376__ = gComeFunResultObject = __result_obj__ = node_827;
        if(node_827) { node_827 = come_decrement_ref_count2(node_827, ((struct sNode*)node_827)->finalize, ((struct sNode*)node_827)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer3(header_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result376__;
        if(node_827) { node_827 = come_decrement_ref_count2(node_827, ((struct sNode*)node_827)->finalize, ((struct sNode*)node_827)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(header_829,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_714;
    buf2_830=(char*)come_increment_ref_count(parse_word(info));
    __result377__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value860=top_level_v98(buf2_830,head,head_sline,info)));
    buf2_830 = come_decrement_ref_count2(buf2_830, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(__right_value860) { __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result377__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj184;
char* __dec_obj185;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj184=self->v1;
            come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj185=self->v2;
            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charphp_reset(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_742;
struct list_item$1charph* prev_it_743;
struct list$1charph* __result339__;
    it_742=self->head;
    while(it_742!=((void*)0)) {
        prev_it_743=it_742;
        it_742=it_742->next;
        come_call_finalizer3(prev_it_743,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value774 = (void*)0;
struct list_item$1voidph* litem_755;
void* __dec_obj191;
void* __right_value775 = (void*)0;
struct list_item$1voidph* litem_756;
void* __dec_obj192;
void* __right_value776 = (void*)0;
struct list_item$1voidph* litem_757;
void* __dec_obj193;
struct list$1voidph* __result342__;
    if(    self->len==0) {
        litem_755=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value774=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_755->prev=((void*)0);
        litem_755->next=((void*)0);
        __dec_obj191=litem_755->item;
        litem_755->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj191,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_755;
        self->head=litem_755;
    }
    else if(    self->len==1) {
        litem_756=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value775=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_756->prev=self->head;
        litem_756->next=((void*)0);
        __dec_obj192=litem_756->item;
        litem_756->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj192,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_756;
        self->head->next=litem_756;
    }
    else {
        litem_757=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value776=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_757->prev=self->tail;
        litem_757->next=((void*)0);
        __dec_obj193=litem_757->item;
        litem_757->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj193,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_757;
        self->tail=litem_757;
    }
    self->len++;
    __result342__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_771;
unsigned int hash_772;
unsigned int it_773;
struct sFun* __result343__;
struct sFun* __result344__;
struct sFun* __result345__;
struct sFun* __result346__;
default_value_771 = (void*)0;
    memset(&default_value_771,0,sizeof(struct sFun*));
    hash_772=string_get_hash_key(((char*)key))%self->size;
    it_773=hash_772;
    while((_Bool)1) {
        if(        self->item_existance[it_773]) {
            if(            string_equals(self->keys[it_773],key)) {
                __result343__ = gComeFunResultObject = __result_obj__ = self->items[it_773];
                come_call_finalizer3(default_value_771,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result343__;
            }
            it_773++;
            if(            it_773>=self->size) {
                it_773=0;
            }
            else if(            it_773==hash_772) {
                __result344__ = gComeFunResultObject = __result_obj__ = default_value_771;
                come_call_finalizer3(default_value_771,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result344__;
            }
        }
        else {
            __result345__ = gComeFunResultObject = __result_obj__ = default_value_771;
            come_call_finalizer3(default_value_771,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result345__;
        }
    }
    __result346__ = gComeFunResultObject = __result_obj__ = default_value_771;
    come_call_finalizer3(default_value_771,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
void* __result_obj__=(void*)0;
struct sFunNode* __result347__;
void* __right_value808 = (void*)0;
struct sFunNode* result_788;
void* __right_value809 = (void*)0;
char* __dec_obj201;
void* __right_value852 = (void*)0;
struct sFun* __dec_obj226;
struct sFunNode* __result372__;
    if(    self==(void*)0) {
        __result347__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    result_788=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode", sFunNode_finalize, sFunNode_clone, sFunNode_get_hash_key, sFunNode_equals));
    if(    self!=((void*)0)) {
        result_788->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj201=result_788->sname;
        result_788->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_788->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj226=result_788->mFun;
        result_788->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj226,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_788;
    come_call_finalizer3(result_788,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static unsigned int sFunNode_get_hash_key(struct sFunNode* self){
unsigned int result_775;
    result_775=0;
    result_775+=int_get_hash_key(((int)self->sline));
    result_775+=int_get_hash_key(((int)self->sname));
    result_775+=int_get_hash_key(((int)self->sline_real));
    result_775+=int_get_hash_key(((int)self->mFun));
    return result_775;
}

static _Bool sFunNode_equals(struct sFunNode* left, struct sFunNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->mFun,right->mFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1voidphp_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mComeHeader,right->mComeHeader)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCloner,right->mCloner)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mDeclareSName,right->mDeclareSName)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDeclaredResultObject,right->mDeclaredResultObject)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->no_output_come_code2,right->no_output_come_code2)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNodephp_equals(left->mNodes,right->mNodes)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mVarTable,right->mVarTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOmitSemicolon,right->mOmitSemicolon)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2charphsVarphp_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mID,right->mID)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2charphsVarphp_equals(struct map$2charphsVarph* left, struct map$2charphsVarph* right){
int n_776;
_Bool result_777;
char* it_778;
char* default_value_779;
char* it2_780;
struct sVar* default_value2_783;
void* __right_value806 = (void*)0;
struct sVar* item_784;
void* __right_value807 = (void*)0;
struct sVar* item2_787;
default_value_779 = (void*)0;
default_value2_783 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_776=0;
    result_777=(_Bool)1;
    for(    it_778=list$1charpp_begin(left->key_list);    !list$1charpp_end(left->key_list);    it_778=list$1charpp_next(left->key_list)    ){
        memset(&default_value_779,0,sizeof(char*));
        it2_780=list$1charpp_item(right->key_list,n_776,default_value_779);
        if(        string_equals(it_778,it2_780)) {
            memset(&default_value2_783,0,sizeof(struct sVar*));
            item_784=((struct sVar*)(__right_value806=map$2charphsVarphp_at(left,it_778,default_value2_783)));
            come_call_finalizer3(__right_value806,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_787=((struct sVar*)(__right_value807=map$2charphsVarphp_at(right,it2_780,default_value2_783)));
            come_call_finalizer3(__right_value807,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_784,item2_787)) {
                result_777=(_Bool)0;
            }
        }
        else {
            result_777=(_Bool)0;
        }
        n_776++;
    }
    return result_777;
}

static char* list$1charpp_item(struct list$1charp* self, int position, char* default_value){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_781;
int i_782;
char* __result348__;
char* __result349__;
    if(    position<0) {
        position+=self->len;
    }
    it_781=self->head;
    i_782=0;
    while(it_781!=((void*)0)) {
        if(        position==i_782) {
            __result348__ = gComeFunResultObject = __result_obj__ = it_781->item;
            gComeFunResultObject = (void*)0;
            return __result348__;
        }
        it_781=it_781->next;
        i_782++;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sVar* map$2charphsVarphp_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_785;
unsigned int it_786;
struct sVar* __result350__;
struct sVar* __result351__;
struct sVar* __result352__;
struct sVar* __result353__;
    hash_785=string_get_hash_key(((char*)key))%self->size;
    it_786=hash_785;
    while((_Bool)1) {
        if(        self->item_existance[it_786]) {
            if(            string_equals(self->keys[it_786],key)) {
                __result350__ = gComeFunResultObject = __result_obj__ = self->items[it_786];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result350__;
            }
            it_786++;
            if(            it_786>=self->size) {
                it_786=0;
            }
            else if(            it_786==hash_785) {
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

static void sVar_finalize(struct sVar* self){
char* __dec_obj197;
char* __dec_obj198;
struct sType* __dec_obj199;
char* __dec_obj200;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj197=self->mName;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj198=self->mCValueName;
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj199=self->mType;
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj200=self->mFunName;
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static _Bool buffer_equals(struct buffer* left, struct buffer* right){
    if(    !charp_equals(left->buf,right->buf)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->size,right->size)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct sFun* sFun_clone(struct sFun* self){
void* __result_obj__=(void*)0;
struct sFun* __result354__;
void* __right_value810 = (void*)0;
struct sFun* result_790;
void* __right_value811 = (void*)0;
char* __dec_obj202;
void* __right_value812 = (void*)0;
struct sType* __dec_obj203;
void* __right_value813 = (void*)0;
struct list$1voidph* __dec_obj204;
void* __right_value814 = (void*)0;
struct list$1charph* __dec_obj205;
void* __right_value815 = (void*)0;
struct list$1charph* __dec_obj206;
void* __right_value816 = (void*)0;
struct sType* __dec_obj207;
void* __right_value843 = (void*)0;
struct sBlock* __dec_obj217;
void* __right_value844 = (void*)0;
struct buffer* __dec_obj218;
void* __right_value845 = (void*)0;
struct buffer* __dec_obj219;
void* __right_value846 = (void*)0;
struct buffer* __dec_obj220;
void* __right_value847 = (void*)0;
struct buffer* __dec_obj221;
void* __right_value848 = (void*)0;
char* __dec_obj222;
void* __right_value849 = (void*)0;
char* __dec_obj223;
void* __right_value850 = (void*)0;
char* __dec_obj224;
void* __right_value851 = (void*)0;
char* __dec_obj225;
struct sFun* __result371__;
    if(    self==(void*)0) {
        __result354__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    result_790=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj202=result_790->mName;
        result_790->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj203=result_790->mResultType;
        result_790->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj204=result_790->mParamTypes;
        result_790->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj204,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj205=result_790->mParamNames;
        result_790->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj205,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj206=result_790->mParamDefaultParametors;
        result_790->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj206,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj207=result_790->mLambdaType;
        result_790->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj217=result_790->mBlock;
        result_790->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj217,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_790->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj218=result_790->mSource;
        result_790->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj219=result_790->mSourceHead;
        result_790->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj220=result_790->mSourceHead2;
        result_790->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj220,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj221=result_790->mSourceDefer;
        result_790->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj221,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_790->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_790->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_790->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        __dec_obj222=result_790->mComeHeader;
        result_790->mComeHeader=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mComeHeader));
        __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->mCloner=self->mCloner;
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        __dec_obj223=result_790->mDeclareSName;
        result_790->mDeclareSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mDeclareSName));
        __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_790->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)) {
        result_790->mDeclaredResultObject=self->mDeclaredResultObject;
    }
    if(    self!=((void*)0)) {
        result_790->no_output_come_code2=self->no_output_come_code2;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj224=result_790->mAttribute;
        result_790->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj225=result_790->mFunAttribute;
        result_790->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result371__ = gComeFunResultObject = __result_obj__ = result_790;
    come_call_finalizer3(result_790,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result371__;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_789;
    result_789=0;
    result_789+=int_get_hash_key(((int)self->mName));
    result_789+=int_get_hash_key(((int)self->mResultType));
    result_789+=int_get_hash_key(((int)self->mParamTypes));
    result_789+=int_get_hash_key(((int)self->mParamNames));
    result_789+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_789+=int_get_hash_key(((int)self->mLambdaType));
    result_789+=int_get_hash_key(((int)self->mBlock));
    result_789+=int_get_hash_key(((int)self->mExternal));
    result_789+=int_get_hash_key(((int)self->mVarArgs));
    result_789+=int_get_hash_key(((int)self->mSource));
    result_789+=int_get_hash_key(((int)self->mSourceHead));
    result_789+=int_get_hash_key(((int)self->mSourceHead2));
    result_789+=int_get_hash_key(((int)self->mSourceDefer));
    result_789+=int_get_hash_key(((int)self->mStatic));
    result_789+=int_get_hash_key(((int)self->mInline));
    result_789+=int_get_hash_key(((int)self->mUniq));
    result_789+=int_get_hash_key(((int)self->mGenerate));
    result_789+=int_get_hash_key(((int)self->mComeHeader));
    result_789+=int_get_hash_key(((int)self->mCloner));
    result_789+=int_get_hash_key(((int)self->mDeclareSName));
    result_789+=int_get_hash_key(((int)self->mNoResultType));
    result_789+=int_get_hash_key(((int)self->mDeclaredResultObject));
    result_789+=int_get_hash_key(((int)self->no_output_come_code2));
    result_789+=int_get_hash_key(((int)self->mAttribute));
    result_789+=int_get_hash_key(((int)self->mFunAttribute));
    return result_789;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result355__;
void* __right_value817 = (void*)0;
struct sBlock* result_792;
void* __right_value818 = (void*)0;
struct list$1sNodeph* __dec_obj208;
void* __right_value842 = (void*)0;
struct sVarTable* __dec_obj216;
struct sBlock* __result370__;
    if(    self==(void*)0) {
        __result355__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    result_792=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone, sBlock_get_hash_key, sBlock_equals));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj208=result_792->mNodes;
        result_792->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj208,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj216=result_792->mVarTable;
        result_792->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj216,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_792->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result370__ = gComeFunResultObject = __result_obj__ = result_792;
    come_call_finalizer3(result_792,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result370__;
}

static unsigned int sBlock_get_hash_key(struct sBlock* self){
unsigned int result_791;
    result_791=0;
    result_791+=int_get_hash_key(((int)self->mNodes));
    result_791+=int_get_hash_key(((int)self->mVarTable));
    result_791+=int_get_hash_key(((int)self->mOmitSemicolon));
    return result_791;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result356__;
void* __right_value819 = (void*)0;
struct sVarTable* result_794;
void* __right_value841 = (void*)0;
struct map$2charphsVarph* __dec_obj215;
struct sVarTable* __result369__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_794=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj215=result_794->mVars;
        result_794->mVars=(struct map$2charphsVarph*)come_increment_ref_count(come_call_cloner(map$2charphsVarphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj215,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_794->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_794->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_794->mID=self->mID;
    }
    __result369__ = gComeFunResultObject = __result_obj__ = result_794;
    come_call_finalizer3(result_794,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result369__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_793;
    result_793=0;
    result_793+=int_get_hash_key(((int)self->mVars));
    result_793+=int_get_hash_key(((int)self->mGlobal));
    result_793+=int_get_hash_key(((int)self->mParent));
    result_793+=int_get_hash_key(((int)self->mID));
    return result_793;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result357__;
void* __right_value820 = (void*)0;
void* __right_value826 = (void*)0;
struct map$2charphsVarph* result_798;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1charp* __dec_obj210;
char* it_801;
struct sVar* default_value_804;
void* __right_value829 = (void*)0;
struct sVar* it2_805;
void* __right_value840 = (void*)0;
struct map$2charphsVarph* __result368__;
default_value_804 = (void*)0;
    if(    self==((void*)0)) {
        __result357__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result357__;
    }
    result_798=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2651, "struct map$2charphsVarph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj210=result_798->key_list;
    result_798->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2653, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj210,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_801=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_801=map$2charphsVarphp_next(self)    ){
        memset(&default_value_804,0,sizeof(struct sVar*));
        it2_805=(struct sVar*)come_increment_ref_count(map$2charphsVarphp_at(self,it_801,default_value_804));
        map$2charphsVarphp_put(result_798,it_801,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_805)));
        come_call_finalizer3(it2_805,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result368__ = gComeFunResultObject = __result_obj__ = result_798;
    come_call_finalizer3(result_798,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static struct map$2charphsVarph* map$2charphsVarphp_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
int i_795;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
struct list$1charp* __dec_obj209;
struct map$2charphsVarph* __result358__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value821=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2580, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value822=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2581, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value823=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2582, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_795=0;    i_795<128;    i_795++    ){
        self->item_existance[i_795]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj209=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charpp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2592, "struct list$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj209,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result358__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_796;
int i_797;
    for(    i_796=0;    i_796<self->size;    i_796++    ){
        if(        self->item_existance[i_796]) {
            if(            1) {
                come_call_finalizer3(self->items[i_796],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_797=0;    i_797<self->size;    i_797++    ){
        if(        self->item_existance[i_797]) {
            if(            1) {
                self->keys[i_797] = come_decrement_ref_count2(self->keys[i_797], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_799;
char* __result359__;
char* __result360__;
char* result_800;
char* __result361__;
result_799 = (void*)0;
result_800 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_799,0,sizeof(char*));
        __result359__ = gComeFunResultObject = __result_obj__ = result_799;
        gComeFunResultObject = (void*)0;
        return __result359__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result360__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    memset(&result_800,0,sizeof(char*));
    __result361__ = gComeFunResultObject = __result_obj__ = result_800;
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_802;
char* __result362__;
char* __result363__;
char* result_803;
char* __result364__;
result_802 = (void*)0;
result_803 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_802,0,sizeof(char*));
        __result362__ = gComeFunResultObject = __result_obj__ = result_802;
        gComeFunResultObject = (void*)0;
        return __result362__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result363__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    memset(&result_803,0,sizeof(char*));
    __result364__ = gComeFunResultObject = __result_obj__ = result_803;
    gComeFunResultObject = (void*)0;
    return __result364__;
}

static struct map$2charphsVarph* map$2charphsVarphp_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_817;
int it_818;
_Bool same_key_exist_819;
char* it2_820;
struct map$2charphsVarph* __result365__;
    if(    self->len*2>=self->size) {
        map$2charphsVarphp_rehash(self);
    }
    hash_817=string_get_hash_key(((char*)key))%self->size;
    it_818=hash_817;
    while((_Bool)1) {
        if(        self->item_existance[it_818]) {
            if(            string_equals(self->keys[it_818],key)) {
                if(                1) {
                    self->keys[it_818] = come_decrement_ref_count2(self->keys[it_818], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charpp_remove(self->key_list,self->keys[it_818]);
                    self->keys[it_818]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_818]);
                    self->keys[it_818]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_818],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_818]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_818]=item;
                }
                break;
            }
            it_818++;
            if(            it_818>=self->size) {
                it_818=0;
            }
            else if(            it_818==hash_817) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_818]=(_Bool)1;
            if(            1) {
                self->keys[it_818]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_818]=key;
            }
            if(            1) {
                self->items[it_818]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_818]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_819=(_Bool)0;
    for(    it2_820=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_820=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_820,key)) {
            same_key_exist_819=(_Bool)1;
        }
    }
    if(    !same_key_exist_819) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result365__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result365__;
}

static void map$2charphsVarphp_rehash(struct map$2charphsVarph* self){
int size_806;
void* __right_value830 = (void*)0;
char** keys_807;
void* __right_value831 = (void*)0;
struct sVar** items_808;
void* __right_value832 = (void*)0;
_Bool* item_existance_809;
int len_810;
char* it_811;
struct sVar* default_value_812;
void* __right_value833 = (void*)0;
struct sVar* it2_813;
unsigned int hash_814;
int n_815;
struct sVar* default_value_816;
void* __right_value834 = (void*)0;
default_value_812 = (void*)0;
default_value_816 = (void*)0;
    size_806=self->size*10;
    keys_807=(char**)come_increment_ref_count(((char**)(__right_value830=(char**)come_calloc(1, sizeof(char*)*(1*(size_806)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_808=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value831=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_806)), "./comelang.h", 2809, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_809=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value832=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_806)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_810=0;
    for(    it_811=map$2charphsVarphp_begin(self);    !map$2charphsVarphp_end(self);    it_811=map$2charphsVarphp_next(self)    ){
        memset(&default_value_812,0,sizeof(struct sVar*));
        it2_813=((struct sVar*)(__right_value833=map$2charphsVarphp_at(self,it_811,default_value_812)));
        come_call_finalizer3(__right_value833,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_814=string_get_hash_key(((char*)it_811))%size_806;
        n_815=hash_814;
        while((_Bool)1) {
            if(            item_existance_809[n_815]) {
                n_815++;
                if(                n_815>=size_806) {
                    n_815=0;
                }
                else if(                n_815==hash_814) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_809[n_815]=(_Bool)1;
                keys_807[n_815]=it_811;
                items_808[n_815]=((struct sVar*)(__right_value834=map$2charphsVarphp_at(self,it_811,default_value_816)));
                come_call_finalizer3(__right_value834,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_810++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_807;
    self->items=items_808;
    self->item_existance=item_existance_809;
    self->size=size_806;
    self->len=len_810;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result366__;
void* __right_value835 = (void*)0;
struct sVar* result_822;
void* __right_value836 = (void*)0;
char* __dec_obj211;
void* __right_value837 = (void*)0;
char* __dec_obj212;
void* __right_value838 = (void*)0;
struct sType* __dec_obj213;
void* __right_value839 = (void*)0;
char* __dec_obj214;
struct sVar* __result367__;
    if(    self==(void*)0) {
        __result366__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result366__;
    }
    result_822=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj211=result_822->mName;
        result_822->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj212=result_822->mCValueName;
        result_822->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj213=result_822->mType;
        result_822->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_822->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_822->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_822->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_822->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_822->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj214=result_822->mFunName;
        result_822->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result367__ = gComeFunResultObject = __result_obj__ = result_822;
    come_call_finalizer3(result_822,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_821;
    result_821=0;
    result_821+=int_get_hash_key(((int)self->mName));
    result_821+=int_get_hash_key(((int)self->mCValueName));
    result_821+=int_get_hash_key(((int)self->mType));
    result_821+=int_get_hash_key(((int)self->mBlockLevel));
    result_821+=int_get_hash_key(((int)self->mGlobal));
    result_821+=int_get_hash_key(((int)self->mAllocaValue));
    result_821+=int_get_hash_key(((int)self->mFunctionParam));
    result_821+=int_get_hash_key(((int)self->mNoFree));
    result_821+=int_get_hash_key(((int)self->mFunName));
    return result_821;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_823;
int i_824;
    for(    i_823=0;    i_823<self->size;    i_823++    ){
        if(        self->item_existance[i_823]) {
            if(            1) {
                come_call_finalizer3(self->items[i_823],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_824=0;    i_824<self->size;    i_824++    ){
        if(        self->item_existance[i_824]) {
            if(            1) {
                self->keys[i_824] = come_decrement_ref_count2(self->keys[i_824], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
struct sFun* caller_fun_831;
int caller_line_832;
char* caller_sname_833;
_Bool comma_instead_of_semicolon_834;
char* last_code_835;
char* __dec_obj227;
char* last_code2_836;
char* __dec_obj228;
void* __right_value861 = (void*)0;
char* sname_top_837;
int sline_top_838;
void* __right_value862 = (void*)0;
struct sFun* funX_839;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
struct tuple2$2charphbool* __result381__;
void* __right_value867 = (void*)0;
struct sType* result_type_842;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
struct list$1voidph* param_types_843;
struct list$1voidph* o2_saved_844;
struct sType* it_845;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct sType* param_type_846;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
struct list$1charph* param_names_847;
void* __right_value874 = (void*)0;
struct list$1charph* param_default_parametors_848;
char* p_849;
int sline_850;
char* sname_851;
char* head_852;
struct buffer* source_853;
void* __right_value875 = (void*)0;
struct buffer* __dec_obj233;
struct sType* generics_type_saved_854;
void* __right_value876 = (void*)0;
struct sType* __dec_obj234;
struct list$1charph* method_generics_type_names_855;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
struct list$1charph* __dec_obj235;
struct list$1charph* o2_saved_856;
char* it_857;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
struct list$1charph* __dec_obj236;
char* __dec_obj237;
void* __right_value881 = (void*)0;
struct sBlock* block_858;
struct buffer* __dec_obj238;
char* __dec_obj239;
_Bool var_args_859;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
struct sFun* fun_860;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value891 = (void*)0;
struct sNode* node_861;
_Bool in_generics_fun_862;
_Bool Value_863;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
void* __right_value894 = (void*)0;
struct tuple2$2charphbool* __result382__;
struct sType* __dec_obj240;
struct list$1charph* __dec_obj241;
void* __right_value895 = (void*)0;
char* __dec_obj242;
char* __dec_obj243;
char* __dec_obj244;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct tuple2$2charphbool* __result383__;
    caller_fun_831=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_832=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_833=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_834=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_835=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj227=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_836=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj228=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_837=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_838=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_839=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,fun_name));
    if(    funX_839) {
        __result381__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value866=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2311, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_835 = come_decrement_ref_count2(last_code_835, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_836 = come_decrement_ref_count2(last_code2_836, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_837 = come_decrement_ref_count2(sname_top_837, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_839,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value866,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result381__;
    }
    result_type_842=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_843=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2316, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_844=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_845=((struct sType*)list$1voidphp_begin((o2_saved_844)));    !list$1voidphp_end((o2_saved_844));    it_845=((struct sType*)list$1voidphp_next((o2_saved_844)))    ){
        param_type_846=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value870=come_call_cloner(sType_clone, it_845))),generics_type,info));
        come_call_finalizer3(__right_value870,sType_finalize, 0, 1, 0, 0, __result_obj__);
        param_type_846->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_843,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_846)));
        come_call_finalizer3(param_type_846,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_844,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_847=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_848=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_849=info->p;
    sline_850=info->sline;
    sname_851=(char*)come_increment_ref_count(info->sname);
    head_852=info->head;
    source_853=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj233=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj233,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_854=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj234=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
    method_generics_type_names_855=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj235=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2346, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj235,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_856=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_857=list$1charphp_begin((o2_saved_856));    !list$1charphp_end((o2_saved_856));    it_857=list$1charphp_next((o2_saved_856))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_857)));
    }
    come_call_finalizer3(o2_saved_856,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj236=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj236,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj237=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_858=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_852;
    __dec_obj238=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_853);
    come_call_finalizer3(__dec_obj238,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_849;
    info->sline=sline_850;
    __dec_obj239=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_851);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_842->mInline=(_Bool)0;
    result_type_842->mStatic=(_Bool)0;
    result_type_842->mUniq=(_Bool)0;
    var_args_859=generics_fun->mVarArgs;
    fun_860=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2370, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_842),(struct list$1voidph*)come_increment_ref_count(param_types_843),(struct list$1charph*)come_increment_ref_count(param_names_847),(struct list$1charph*)come_increment_ref_count(param_default_parametors_848),(_Bool)0,var_args_859,(struct sBlock*)come_increment_ref_count(block_858),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_860));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2377, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value890=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2377, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_860),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_861=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value890,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
    in_generics_fun_862=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_863=node_compile(node_861,info);
    if(    !Value_863) {
        __result382__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value894=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2382, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0)));
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_835 = come_decrement_ref_count2(last_code_835, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_836 = come_decrement_ref_count2(last_code2_836, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_837 = come_decrement_ref_count2(sname_top_837, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(funX_839,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_842,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_843,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_847,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_851 = come_decrement_ref_count2(sname_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_854,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_858,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_861) { node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value894,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_862;
    __dec_obj240=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_854);
    come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj241=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_855);
    come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj242=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_837));
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_838;
    __dec_obj243=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_835);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj244=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_836);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_831;
    info->caller_line=caller_line_832;
    info->caller_sname=caller_sname_833;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_834;
    __result383__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2charphbool*)(__right_value898=tuple2$2charphbool_initialize((struct tuple2$2charphbool**)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "05function.c", 2402, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1)));
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_835 = come_decrement_ref_count2(last_code_835, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_836 = come_decrement_ref_count2(last_code2_836, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_837 = come_decrement_ref_count2(sname_top_837, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(funX_839,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_842,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_843,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_847,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_848,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_851 = come_decrement_ref_count2(sname_851, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_853,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_854,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_855,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_858,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_860,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_861) { node_861 = come_decrement_ref_count2(node_861, ((struct sNode*)node_861)->finalize, ((struct sNode*)node_861)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value898,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

static void tuple2$2charphbool_finalize(struct tuple2$2charphbool* self){
char* __dec_obj229;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj229=self->v1;
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2charphbool* tuple2$2charphbool_clone(struct tuple2$2charphbool* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphbool* __result378__;
void* __right_value863 = (void*)0;
struct tuple2$2charphbool* result_841;
void* __right_value864 = (void*)0;
char* __dec_obj230;
struct tuple2$2charphbool* __result379__;
    if(    self==(void*)0) {
        __result378__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result378__;
    }
    result_841=(struct tuple2$2charphbool*)come_increment_ref_count((struct tuple2$2charphbool*)come_calloc(1, sizeof(struct tuple2$2charphbool)*(1), "tuple2$2charphbool_clone", 3, "struct tuple2$2charphbool", tuple2$2charphbool_finalize, tuple2$2charphbool_clone, tuple2$2charphbool_get_hash_key, tuple2$2charphbool_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj230=result_841->v1;
        result_841->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_841->v2=self->v2;
    }
    __result379__ = gComeFunResultObject = __result_obj__ = result_841;
    come_call_finalizer3(result_841,tuple2$2charphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result379__;
}

static unsigned int tuple2$2charphbool_get_hash_key(struct tuple2$2charphbool* self){
unsigned int result_840;
    result_840=0;
    result_840+=int_get_hash_key(((int)self->v1));
    result_840+=int_get_hash_key(((int)self->v2));
    return result_840;
}

static _Bool tuple2$2charphbool_equals(struct tuple2$2charphbool* left, struct tuple2$2charphbool* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2charphbool* tuple2$2charphbool_initialize(struct tuple2$2charphbool* self, char* v1, _Bool v2){
void* __result_obj__=(void*)0;
char* __dec_obj231;
struct tuple2$2charphbool* __result380__;
    __dec_obj231=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result380__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2charphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
char* __dec_obj232;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj232=self->v1;
            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_864;
int caller_line_865;
char* caller_sname_866;
_Bool comma_instead_of_semicolon_867;
char* last_code_868;
char* __dec_obj245;
char* last_code2_869;
char* __dec_obj246;
void* __right_value899 = (void*)0;
char* sname_top_870;
int sline_top_871;
void* __right_value900 = (void*)0;
struct sFun* funX_872;
_Bool __result384__;
void* __right_value901 = (void*)0;
struct sType* result_type_873;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct list$1voidph* param_types_874;
struct list$1voidph* o2_saved_875;
struct sType* it_876;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct sType* param_type_877;
void* __right_value906 = (void*)0;
void* __right_value907 = (void*)0;
struct list$1charph* param_names_878;
void* __right_value908 = (void*)0;
struct list$1charph* param_default_parametors_879;
char* p_880;
int sline_881;
char* sname_882;
char* head_883;
struct buffer* source_884;
void* __right_value909 = (void*)0;
struct buffer* __dec_obj247;
struct list$1charph* method_generics_type_names_885;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct list$1charph* __dec_obj248;
struct list$1charph* o2_saved_886;
char* it_887;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct list$1charph* __dec_obj249;
char* __dec_obj250;
void* __right_value914 = (void*)0;
struct sBlock* block_888;
struct buffer* __dec_obj251;
char* __dec_obj252;
_Bool generate__889;
_Bool var_args_890;
void* __right_value915 = (void*)0;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct sFun* fun_891;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value925 = (void*)0;
struct sNode* node_892;
_Bool Value_893;
void* __if_result__1_894 = (void*)0;
_Bool __result385__;
struct list$1charph* __dec_obj253;
void* __right_value926 = (void*)0;
char* __dec_obj254;
char* __dec_obj255;
char* __dec_obj256;
_Bool __result386__;
    caller_fun_864=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_865=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_866=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_867=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_868=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj245=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_869=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj246=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_870=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_871=info->sline;
    funX_872=((struct sFun*)(__right_value900=map$2charphsFunphp_operator_load_element(info->funcs,fun_name)));
    come_call_finalizer3(__right_value900,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_872) {
        __result384__ = (_Bool)1;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_868 = come_decrement_ref_count2(last_code_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_869 = come_decrement_ref_count2(last_code2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_870 = come_decrement_ref_count2(sname_top_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result384__;
    }
    result_type_873=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_874=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05function.c", 2431, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    for(    o2_saved_875=(struct list$1voidph*)come_increment_ref_count((generics_fun->mParamTypes)),it_876=((struct sType*)list$1voidphp_begin((o2_saved_875)));    !list$1voidphp_end((o2_saved_875));    it_876=((struct sType*)list$1voidphp_next((o2_saved_875)))    ){
        param_type_877=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value904=come_call_cloner(sType_clone, it_876))),info));
        come_call_finalizer3(__right_value904,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_type_877->mFunctionParam=(_Bool)1;
        list$1voidphp_add(param_types_874,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_877)));
        come_call_finalizer3(param_type_877,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_875,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    param_names_878=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamNames));
    param_default_parametors_879=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mParamDefaultParametors));
    p_880=info->p;
    sline_881=info->sline;
    sname_882=(char*)come_increment_ref_count(info->sname);
    head_883=info->head;
    source_884=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj247=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj247,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_885=(struct list$1charph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj248=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 2455, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj248,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_886=(struct list$1charph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_887=list$1charphp_begin((o2_saved_886));    !list$1charphp_end((o2_saved_886));    it_887=list$1charphp_next((o2_saved_886))    ){
        list$1charphp_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_887)));
    }
    come_call_finalizer3(o2_saved_886,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj249=info->generics_type_names;
    info->generics_type_names=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj249,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj250=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_888=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_883;
    __dec_obj251=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_884);
    come_call_finalizer3(__dec_obj251,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_880;
    info->sline=sline_881;
    __dec_obj252=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_882);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_873->mInline=(_Bool)0;
    result_type_873->mStatic=(_Bool)0;
    result_type_873->mUniq=(_Bool)0;
    generate__889=(_Bool)0;
    if(    result_type_873->mGenerate) {
        result_type_873->mGenerate=(_Bool)0;
        generate__889=(_Bool)1;
    }
    var_args_890=generics_fun->mVarArgs;
    fun_891=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2485, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_873),(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, param_types_874)),(struct list$1charph*)come_increment_ref_count(param_names_878),(struct list$1charph*)come_increment_ref_count(param_default_parametors_879),(_Bool)0,var_args_890,(struct sBlock*)come_increment_ref_count(block_888),(_Bool)1,(char*)come_increment_ref_count(__builtin_string("")),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,generate__889,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name)),(struct sFun*)come_increment_ref_count(fun_891));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2492, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value924=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2492, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_891),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_892=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value924,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_893=node_compile(node_892,info);
    if(    !Value_893) {
        __result385__ = (_Bool)0;
        fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code_868 = come_decrement_ref_count2(last_code_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        last_code2_869 = come_decrement_ref_count2(last_code2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        sname_top_870 = come_decrement_ref_count2(sname_top_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_873,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_874,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        sname_882 = come_decrement_ref_count2(sname_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source_884,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_888,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_891,sFun_finalize, 0, 0, 0, 0, (void*)0);
        if(node_892) { node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result385__;
    }
    else {
        __if_result__1_894=(void*)(Value_893);
;
    }
    __dec_obj253=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1charph*)come_increment_ref_count(method_generics_type_names_885);
    come_call_finalizer3(__dec_obj253,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    list$1charphp_reset(info->generics_type_names);
    __dec_obj254=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_870));
    __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_871;
    __dec_obj255=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_868);
    __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj256=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_869);
    __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_864;
    info->caller_line=caller_line_865;
    info->caller_sname=caller_sname_866;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_867;
    __result386__ = (_Bool)1;
    fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code_868 = come_decrement_ref_count2(last_code_868, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_869 = come_decrement_ref_count2(last_code2_869, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname_top_870 = come_decrement_ref_count2(sname_top_870, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_873,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_874,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_878,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_879,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    sname_882 = come_decrement_ref_count2(sname_882, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(source_884,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_885,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_888,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_891,sFun_finalize, 0, 0, 0, 0, (void*)0);
    if(node_892) { node_892 = come_decrement_ref_count2(node_892, ((struct sNode*)node_892)->finalize, ((struct sNode*)node_892)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result386__;
}

struct sNode* parse_function(struct sInfo* info){
void* __result_obj__=(void*)0;
char* header_head_895;
char* source_head_896;
void* __right_value927 = (void*)0;
char* attribute_897;
struct sType* result_type_898;
char* var_name_899;
_Bool constructor__900;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct sType* __dec_obj257;
void* __right_value930 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* result_type2_901=0;
char* var_name2_902=0;
_Bool err_903=0;
struct sType* __dec_obj258;
char* __dec_obj259;
_Bool method_definition_904;
char* p_905;
int sline_906;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
struct buffer* buf2_907;
char* fun_name_908;
char* base_fun_name_909;
void* __right_value933 = (void*)0;
char* __dec_obj260;
void* __right_value934 = (void*)0;
char* __dec_obj261;
void* __right_value935 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* obj_type_910=0;
char* name_911=0;
_Bool err_912=0;
void* __right_value936 = (void*)0;
char* __dec_obj262;
void* __right_value937 = (void*)0;
char* __dec_obj263;
void* __right_value938 = (void*)0;
char* __dec_obj264;
void* __right_value939 = (void*)0;
char* __dec_obj265;
void* __right_value940 = (void*)0;
char* __dec_obj266;
void* __right_value941 = (void*)0;
char* __dec_obj267;
void* __right_value942 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var9 = (void*)0;
struct list$1voidph* param_types_913=0;
struct list$1charph* param_names_914=0;
struct list$1charph* param_default_parametors_915=0;
_Bool var_args_916=0;
char* header_tail_917;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct buffer* header_buf_918;
int version_919;
int n_920;
_Bool in_top_level_921;
void* __right_value945 = (void*)0;
struct sBlock* block_922;
void* __right_value946 = (void*)0;
char* fun_name_924;
void* __right_value947 = (void*)0;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct sFun* fun_925;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sFun* fun2_926;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value961 = (void*)0;
struct sNode* __result389__;
void* __right_value962 = (void*)0;
char* none_generics_name_929;
void* __right_value963 = (void*)0;
char* generics_sname_930;
int generics_sline_931;
void* __right_value964 = (void*)0;
char* block_932;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
void* __right_value970 = (void*)0;
struct sGenericsFun* fun_933;
void* __right_value971 = (void*)0;
char* fun_name3_934;
void* __right_value977 = (void*)0;
struct sNode* __result401__;
void* __right_value978 = (void*)0;
char* generics_sname_956;
int generics_sline_957;
void* __right_value979 = (void*)0;
char* block_958;
void* __right_value980 = (void*)0;
void* __right_value981 = (void*)0;
void* __right_value982 = (void*)0;
void* __right_value983 = (void*)0;
void* __right_value984 = (void*)0;
void* __right_value985 = (void*)0;
struct sGenericsFun* fun_959;
void* __right_value986 = (void*)0;
char* fun_name3_960;
void* __right_value987 = (void*)0;
void* __right_value988 = (void*)0;
struct sNode* __result402__;
char* source_tail_961;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct buffer* header_962;
void* __right_value991 = (void*)0;
char* name_963;
void* __right_value992 = (void*)0;
char* name_964;
int i_965;
void* __right_value993 = (void*)0;
struct sType* param_type_966;
void* __right_value994 = (void*)0;
char* param_name_967;
void* __right_value995 = (void*)0;
char* default_parametor_968;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
char* impl_name_969;
void* __right_value999 = (void*)0;
char* result_type_name_970;
void* __right_value1000 = (void*)0;
char* impl_name_971;
void* __right_value1001 = (void*)0;
char* result_type_name_972;
int i_973;
void* __right_value1002 = (void*)0;
struct sType* param_type_974;
void* __right_value1003 = (void*)0;
char* param_name_975;
void* __right_value1004 = (void*)0;
char* default_parametor_976;
void* __right_value1005 = (void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
void* __right_value1008 = (void*)0;
struct sBlock* block_977;
_Bool static_fun_978;
_Bool inline_fun_979;
_Bool uniq_fun_980;
_Bool generate_fun_981;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
char* new_fun_name_982;
void* __right_value1011 = (void*)0;
char* __dec_obj272;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
void* __right_value1014 = (void*)0;
void* __right_value1015 = (void*)0;
void* __right_value1016 = (void*)0;
void* __right_value1017 = (void*)0;
void* __right_value1018 = (void*)0;
struct sFun* fun_983;
void* __right_value1019 = (void*)0;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
struct sFun* fun2_984;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1025 = (void*)0;
struct sNode* __result403__;
void* __right_value1026 = (void*)0;
char* new_fun_name_985;
void* __right_value1027 = (void*)0;
char* __dec_obj273;
char* source_tail_986;
void* __right_value1028 = (void*)0;
void* __right_value1029 = (void*)0;
struct buffer* header_987;
_Bool result_type_static_988;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
void* __right_value1034 = (void*)0;
void* __right_value1035 = (void*)0;
struct sFun* fun_989;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
struct sFun* fun2_990;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1042 = (void*)0;
struct sNode* __result404__;
void* __right_value1043 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var10 = (void*)0;
char* asm_fun_991=0;
char* fun_attribute_992=0;
void* __right_value1044 = (void*)0;
char* __dec_obj274;
void* __right_value1045 = (void*)0;
void* __right_value1046 = (void*)0;
struct buffer* header_993;
char* source_tail_994;
_Bool result_type_static_995;
void* __right_value1047 = (void*)0;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
struct sFun* fun_996;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
struct sFun* fun2_997;
void* __right_value1054 = (void*)0;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
void* __right_value1057 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1058 = (void*)0;
struct sNode* __result405__;
struct sNode* __result406__;
fun_name_908 = (void*)0;
    header_head_895=info->p;
    source_head_896=info->p;
    attribute_897=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_898=((void*)0);
    var_name_899=((void*)0);
    constructor__900=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value928=parse_word(info)));
        __right_value928 = come_decrement_ref_count2(__right_value928, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj257=result_type_898;
        result_type_898=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj257,sType_finalize, 0, 0, 0, 0, (void*)0);
        result_type_898->mHeap=(_Bool)1;
        constructor__900=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value930=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_901=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        var_name2_902=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_903=multiple_assign_var7->v3;
        come_call_finalizer3(__right_value930,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj258=result_type_898;
        result_type_898=(struct sType*)come_increment_ref_count(result_type2_901);
        come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj259=var_name_899;
        var_name_899=(char*)come_increment_ref_count(var_name2_902);
        __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_903) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_901,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name2_902 = come_decrement_ref_count2(var_name2_902, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    method_definition_904=(_Bool)0;
    {
        p_905=info->p;
        sline_906=info->sline;
        buf2_907=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2558, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_907,*info->p);
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
        if(        buffer_length(buf2_907)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_904=(_Bool)1;
        }
        info->p=p_905;
        info->sline=sline_906;
        come_call_finalizer3(buf2_907,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_909=((void*)0);
    if(    constructor__900) {
        __dec_obj260=base_fun_name_909;
        base_fun_name_909=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj261=fun_name_908;
        fun_name_908=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_909,info,(_Bool)1));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_904) {
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value935=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_910=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        name_911=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_912=multiple_assign_var8->v3;
        come_call_finalizer3(__right_value935,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_912) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj262=base_fun_name_909;
        base_fun_name_909=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj263=fun_name_908;
        fun_name_908=(char*)come_increment_ref_count(create_method_name(obj_type_910,(_Bool)0,base_fun_name_909,info,(_Bool)1));
        __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_910,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_911 = come_decrement_ref_count2(name_911, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type) {
        __dec_obj264=base_fun_name_909;
        base_fun_name_909=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj265=fun_name_908;
        fun_name_908=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_909,info,(_Bool)1));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj266=fun_name_908;
        fun_name_908=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj267=base_fun_name_909;
        base_fun_name_909=(char*)come_increment_ref_count(__builtin_string(fun_name_908));
        __dec_obj267 = come_decrement_ref_count2(__dec_obj267, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_909,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var9=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value942=parse_params(info,constructor__900)));
    param_types_913=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var9->v1);
    param_names_914=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v2);
    param_default_parametors_915=(struct list$1charph*)come_increment_ref_count(multiple_assign_var9->v3);
    var_args_916=multiple_assign_var9->v4;
    come_call_finalizer3(__right_value942,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    header_tail_917=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_909,"initialize")) {
        info->in_class=(_Bool)1;
    }
    header_buf_918=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2625, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    buffer_append(header_buf_918,header_head_895,header_tail_917-header_head_895);
    buffer_append_char(header_buf_918,0);
    version_919=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_920=0;
        while(xisdigit(*info->p)) {
            n_920=n_920*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_919=n_920;
    }
    in_top_level_921=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_909,"lambda")) {
        block_922=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_923=0;
        lambda_num_923++;
        fun_name_924=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_923));
        result_type_898->mInline=(_Bool)0;
        result_type_898->mStatic=(_Bool)0;
        result_type_898->mUniq=(_Bool)0;
        result_type_898->mGenerate=(_Bool)0;
        fun_925=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2661, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_924)),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1voidph*)come_increment_ref_count(param_types_913),(struct list$1charph*)come_increment_ref_count(param_names_914),(struct list$1charph*)come_increment_ref_count(param_default_parametors_915),(_Bool)0,var_args_916,(struct sBlock*)come_increment_ref_count(block_922),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_918)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_926=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value954=__builtin_string(fun_name_924)))));
        __right_value954 = come_decrement_ref_count2(__right_value954, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_926==((void*)0)||fun2_926->mExternal) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_924)),(struct sFun*)come_increment_ref_count(fun_925));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2671, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value958=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2671, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_925,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result389__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value961=_inf_value5));
        come_call_finalizer3(block_922,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_924 = come_decrement_ref_count2(fun_name_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_925,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_926,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value958,sLambdaNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value961) { __right_value961 = come_decrement_ref_count2(__right_value961, ((struct sNode*)__right_value961)->finalize, ((struct sNode*)__right_value961)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result389__;
        come_call_finalizer3(block_922,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        fun_name_924 = come_decrement_ref_count2(fun_name_924, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_925,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_926,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1charphp_length(info->generics_type_names)>0) {
        none_generics_name_929=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_930=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_931=info->sline;
        block_932=(char*)come_increment_ref_count(skip_block(info));
        fun_933=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2681, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value966=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value967=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_908)),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1voidph*)come_increment_ref_count(param_types_913),(struct list$1charph*)come_increment_ref_count(param_names_914),(struct list$1charph*)come_increment_ref_count(param_default_parametors_915),var_args_916,(char*)come_increment_ref_count(block_932),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_930)),generics_sline_931));
        come_call_finalizer3(__right_value966,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value967,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_934=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_929,base_fun_name_909));
        map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_934)),(struct sGenericsFun*)come_increment_ref_count(fun_933));
        __result401__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        none_generics_name_929 = come_decrement_ref_count2(none_generics_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_930 = come_decrement_ref_count2(generics_sname_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_932 = come_decrement_ref_count2(block_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_933,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_934 = come_decrement_ref_count2(fun_name3_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result401__;
        none_generics_name_929 = come_decrement_ref_count2(none_generics_name_929, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        generics_sname_930 = come_decrement_ref_count2(generics_sname_930, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_932 = come_decrement_ref_count2(block_932, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_933,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_934 = come_decrement_ref_count2(fun_name3_934, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    list$1charphp_length(info->method_generics_type_names)>0) {
        generics_sname_956=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_957=info->sline;
        block_958=(char*)come_increment_ref_count(skip_block(info));
        fun_959=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2695, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1charph*)(__right_value981=come_call_cloner(list$1charphp_clone, info->generics_type_names))),((struct list$1charph*)(__right_value982=come_call_cloner(list$1charphp_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_908)),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1voidph*)come_increment_ref_count(param_types_913),(struct list$1charph*)come_increment_ref_count(param_names_914),(struct list$1charph*)come_increment_ref_count(param_default_parametors_915),var_args_916,(char*)come_increment_ref_count(block_958),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_956)),generics_sline_957));
        come_call_finalizer3(__right_value981,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value982,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        fun_name3_960=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_909));
        if(        method_definition_904) {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_908)),(struct sGenericsFun*)come_increment_ref_count(fun_959));
        }
        else {
            map$2charphsGenericsFunphp_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_960)),(struct sGenericsFun*)come_increment_ref_count(fun_959));
        }
        __result402__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        generics_sname_956 = come_decrement_ref_count2(generics_sname_956, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_958 = come_decrement_ref_count2(block_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_959,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_960 = come_decrement_ref_count2(fun_name3_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result402__;
        generics_sname_956 = come_decrement_ref_count2(generics_sname_956, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        block_958 = come_decrement_ref_count2(block_958, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_959,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_960 = come_decrement_ref_count2(fun_name3_960, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==123) {
        source_tail_961=info->p-1;
        header_962=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2711, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        constructor__900) {
            if(            list$1voidphp_length(param_types_913)==1) {
                name_963=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_962,"extern %s*%% %s*::initialize(%s*%% self);\n",name_963,name_963,name_963);
                name_963 = come_decrement_ref_count2(name_963, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                name_964=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_962,"extern %s*%% %s*::initialize(%s*%% self, ",name_964,name_964,name_964);
                for(                i_965=1;                i_965<list$1voidphp_length(param_types_913);                i_965++                ){
                    param_type_966=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_913,i_965));
                    param_name_967=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_914,i_965));
                    default_parametor_968=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_915,i_965));
                    if(                    default_parametor_968) {
                        buffer_append_format(header_962,"extern %s %s=%s",((char*)(__right_value996=make_come_type_name_string_no_solved(param_type_966,(_Bool)0,info))),param_name_967,default_parametor_968);
                        __right_value996 = come_decrement_ref_count2(__right_value996, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_962,"extern %s %s",((char*)(__right_value997=make_come_type_name_string_no_solved(param_type_966,(_Bool)0,info))),param_name_967);
                        __right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_965!=list$1voidphp_length(param_types_913)-1) {
                        buffer_append_str(header_962,",");
                    }
                    come_call_finalizer3(param_type_966,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_967 = come_decrement_ref_count2(param_name_967, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_968 = come_decrement_ref_count2(default_parametor_968, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_962,");\n");
                name_964 = come_decrement_ref_count2(name_964, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1voidphp_length(param_types_913)==1) {
                impl_name_969=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_970=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_898,(_Bool)0,info));
                buffer_append_format(header_962,"extern %s %s*::%s(%s* self);\n",result_type_name_970,impl_name_969,base_fun_name_909,impl_name_969);
                impl_name_969 = come_decrement_ref_count2(impl_name_969, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_970 = come_decrement_ref_count2(result_type_name_970, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                impl_name_971=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_972=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_898,(_Bool)0,info));
                buffer_append_format(header_962,"extern %s %s*::%s(%s* self, ",result_type_name_972,impl_name_971,base_fun_name_909,impl_name_971);
                for(                i_973=1;                i_973<list$1voidphp_length(param_types_913);                i_973++                ){
                    param_type_974=(struct sType*)come_increment_ref_count(list$1voidphp_operator_load_element(param_types_913,i_973));
                    param_name_975=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_names_914,i_973));
                    default_parametor_976=(char*)come_increment_ref_count(list$1charphp_operator_load_element(param_default_parametors_915,i_973));
                    if(                    default_parametor_976) {
                        buffer_append_format(header_962,"extern %s %s=%s",((char*)(__right_value1005=make_come_type_name_string_no_solved(param_type_974,(_Bool)0,info))),param_name_975,default_parametor_976);
                        __right_value1005 = come_decrement_ref_count2(__right_value1005, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    else {
                        buffer_append_format(header_962,"extern %s %s",((char*)(__right_value1006=make_come_type_name_string_no_solved(param_type_974,(_Bool)0,info))),param_name_975);
                        __right_value1006 = come_decrement_ref_count2(__right_value1006, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    if(                    i_973!=list$1voidphp_length(param_types_913)-1) {
                        buffer_append_str(header_962,",");
                    }
                    come_call_finalizer3(param_type_974,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_975 = come_decrement_ref_count2(param_name_975, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    default_parametor_976 = come_decrement_ref_count2(default_parametor_976, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                buffer_append_str(header_962,");\n");
                impl_name_971 = come_decrement_ref_count2(impl_name_971, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_type_name_972 = come_decrement_ref_count2(result_type_name_972, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            buffer_append(header_962,source_head_896,source_tail_961-source_head_896);
            buffer_append_str(header_962,";\n");
        }
        if(        !result_type_898->mStatic) {
            if(            !info->no_output_come_code) {
                add_come_code_at_come_header(info,"%s",((char*)(__right_value1007=buffer_to_string(header_962))));
                __right_value1007 = come_decrement_ref_count2(__right_value1007, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
        }
        block_977=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__900,(_Bool)1));
        static_fun_978=(_Bool)0;
        if(        result_type_898->mStatic) {
            result_type_898->mStatic=(_Bool)0;
            result_type_898->mUniq=(_Bool)0;
            static_fun_978=(_Bool)1;
        }
        inline_fun_979=(_Bool)0;
        if(        result_type_898->mInline) {
            result_type_898->mInline=(_Bool)0;
            result_type_898->mUniq=(_Bool)0;
            inline_fun_979=(_Bool)1;
        }
        uniq_fun_980=(_Bool)0;
        if(        result_type_898->mUniq) {
            result_type_898->mUniq=(_Bool)0;
            result_type_898->mInline=(_Bool)0;
            result_type_898->mStatic=(_Bool)0;
            uniq_fun_980=(_Bool)1;
        }
        generate_fun_981=(_Bool)0;
        if(        result_type_898->mUniq) {
            result_type_898->mUniq=(_Bool)0;
            result_type_898->mInline=(_Bool)0;
            result_type_898->mStatic=(_Bool)0;
            generate_fun_981=(_Bool)1;
        }
        if(        version_919>0) {
            new_fun_name_982=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1009=__builtin_string(fun_name_908))),version_919));
            __right_value1009 = come_decrement_ref_count2(__right_value1009, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __dec_obj272=fun_name_908;
            fun_name_908=(char*)come_increment_ref_count(__builtin_string(new_fun_name_982));
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_982 = come_decrement_ref_count2(new_fun_name_982, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        fun_983=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2820, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_908)),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1voidph*)come_increment_ref_count(param_types_913),(struct list$1charph*)come_increment_ref_count(param_names_914),(struct list$1charph*)come_increment_ref_count(param_default_parametors_915),(_Bool)0,var_args_916,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_977)),static_fun_978,(char*)come_increment_ref_count(buffer_to_string(header_buf_918)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,inline_fun_979,uniq_fun_980,generate_fun_981,(char*)come_increment_ref_count(attribute_897),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_908)),(struct sFun*)come_increment_ref_count(fun_983));
        }
        else {
            fun2_984=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1020=__builtin_string(fun_name_908)))));
            __right_value1020 = come_decrement_ref_count2(__right_value1020, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_984==((void*)0)||fun2_984->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_908)),(struct sFun*)come_increment_ref_count(fun_983));
            }
            come_call_finalizer3(fun2_984,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2840, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1024=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2840, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_983),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        __result403__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1025=_inf_value6));
        come_call_finalizer3(header_962,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_977,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_983,sFun_finalize, 0, 0, 0, 0, (void*)0);
        attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1024,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value1025) { __right_value1025 = come_decrement_ref_count2(__right_value1025, ((struct sNode*)__right_value1025)->finalize, ((struct sNode*)__right_value1025)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result403__;
        come_call_finalizer3(header_962,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_977,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_983,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_919>0) {
            new_fun_name_985=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_908,version_919));
            __dec_obj273=fun_name_908;
            fun_name_908=(char*)come_increment_ref_count(__builtin_string(new_fun_name_985));
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            new_fun_name_985 = come_decrement_ref_count2(new_fun_name_985, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_986=info->p;
            header_987=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2853, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append(header_987,source_head_896,source_tail_986-source_head_896);
            skip_spaces_and_lf(info);
            result_type_static_988=result_type_898->mStatic;
            result_type_898->mStatic=(_Bool)0;
            result_type_898->mUniq=(_Bool)0;
            result_type_898->mInline=(_Bool)0;
            result_type_898->mGenerate=(_Bool)0;
            fun_989=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2864, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_908)),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1voidph*)come_increment_ref_count(param_types_913),(struct list$1charph*)come_increment_ref_count(param_names_914),(struct list$1charph*)come_increment_ref_count(param_default_parametors_915),(_Bool)1,var_args_916,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_918)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_897),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_990=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1036=__builtin_string(fun_name_908)))));
            __right_value1036 = come_decrement_ref_count2(__right_value1036, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_990==((void*)0)||fun2_990->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_908)),(struct sFun*)come_increment_ref_count(fun_989));
            }
            if(            !result_type_static_988) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1039=buffer_to_string(header_987))));
                    __right_value1039 = come_decrement_ref_count2(__right_value1039, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2883, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1041=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2883, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_989),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            __result404__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1042=_inf_value7));
            come_call_finalizer3(header_987,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_989,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_990,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1041,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1042) { __right_value1042 = come_decrement_ref_count2(__right_value1042, ((struct sNode*)__right_value1042)->finalize, ((struct sNode*)__right_value1042)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result404__;
            come_call_finalizer3(header_987,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_989,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_990,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            multiple_assign_var10=((struct tuple2$2charphcharph*)(__right_value1043=parse_function_attribute(info)));
            asm_fun_991=(char*)come_increment_ref_count(multiple_assign_var10->v1);
            fun_attribute_992=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            come_call_finalizer3(__right_value1043,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            string_operator_not_equals(asm_fun_991,"")) {
                __dec_obj274=fun_name_908;
                fun_name_908=(char*)come_increment_ref_count(__builtin_string(asm_fun_991));
                __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_993=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2892, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_994=info->p;
                buffer_append(header_993,source_head_896,source_tail_994-source_head_896);
                skip_spaces_and_lf(info);
            }
            result_type_static_995=result_type_898->mStatic;
            result_type_898->mStatic=(_Bool)0;
            result_type_898->mUniq=(_Bool)0;
            result_type_898->mInline=(_Bool)0;
            result_type_898->mGenerate=(_Bool)0;
            fun_996=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2906, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_908)),(struct sType*)come_increment_ref_count(result_type_898),(struct list$1voidph*)come_increment_ref_count(param_types_913),(struct list$1charph*)come_increment_ref_count(param_names_914),(struct list$1charph*)come_increment_ref_count(param_default_parametors_915),(_Bool)1,var_args_916,((void*)0),(_Bool)0,(char*)come_increment_ref_count(buffer_to_string(header_buf_918)),(char*)come_increment_ref_count(__builtin_string(info->sname)),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_897),(char*)come_increment_ref_count(fun_attribute_992)));
            fun2_997=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1052=__builtin_string(fun_name_908)))));
            __right_value1052 = come_decrement_ref_count2(__right_value1052, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_997==((void*)0)||fun2_997->mExternal) {
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, fun_name_908)),(struct sFun*)come_increment_ref_count(fun_996));
            }
            if(            !result_type_static_995) {
                if(                !info->no_output_come_code) {
                    add_come_code_at_come_header(info,"%s",((char*)(__right_value1055=buffer_to_string(header_993))));
                    __right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2926, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1057=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2926, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_996),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            __result405__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1058=_inf_value8));
            asm_fun_991 = come_decrement_ref_count2(asm_fun_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_992 = come_decrement_ref_count2(fun_attribute_992, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_993,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_996,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_997,sFun_finalize, 0, 0, 0, 0, (void*)0);
            attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value1057,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value1058) { __right_value1058 = come_decrement_ref_count2(__right_value1058, ((struct sNode*)__right_value1058)->finalize, ((struct sNode*)__right_value1058)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result405__;
            asm_fun_991 = come_decrement_ref_count2(asm_fun_991, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            fun_attribute_992 = come_decrement_ref_count2(fun_attribute_992, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_993,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_996,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_997,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        err_msg(info,"invalid character(2)(%c)\n",*info->p);
        exit(2);
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_921;
    __result406__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    attribute_897 = come_decrement_ref_count2(attribute_897, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_898,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_899 = come_decrement_ref_count2(var_name_899, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name_908 = come_decrement_ref_count2(fun_name_908, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    base_fun_name_909 = come_decrement_ref_count2(base_fun_name_909, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_913,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_914,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_915,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(header_buf_918,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result406__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj268;
struct list$1charph* __dec_obj269;
struct list$1charph* __dec_obj270;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj268=self->v1;
            come_call_finalizer3(__dec_obj268,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj269=self->v2;
            come_call_finalizer3(__dec_obj269,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj270=self->v3;
            come_call_finalizer3(__dec_obj270,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
void* __result_obj__=(void*)0;
struct sLambdaNode* __result387__;
void* __right_value959 = (void*)0;
struct sLambdaNode* result_928;
void* __right_value960 = (void*)0;
char* __dec_obj271;
struct sLambdaNode* __result388__;
    if(    self==(void*)0) {
        __result387__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result387__;
    }
    result_928=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode", sLambdaNode_finalize, sLambdaNode_clone, sLambdaNode_get_hash_key, sLambdaNode_equals));
    if(    self!=((void*)0)) {
        result_928->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_928->sname;
        result_928->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_928->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_928->mFun=self->mFun;
    }
    __result388__ = gComeFunResultObject = __result_obj__ = result_928;
    come_call_finalizer3(result_928,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result388__;
}

static unsigned int sLambdaNode_get_hash_key(struct sLambdaNode* self){
unsigned int result_927;
    result_927=0;
    result_927+=int_get_hash_key(((int)self->sline));
    result_927+=int_get_hash_key(((int)self->sname));
    result_927+=int_get_hash_key(((int)self->sline_real));
    result_927+=int_get_hash_key(((int)self->mFun));
    return result_927;
}

static _Bool sLambdaNode_equals(struct sLambdaNode* left, struct sLambdaNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sFun_equals(left->mFun,right->mFun)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2charphsGenericsFunph* map$2charphsGenericsFunphp_insert(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* item){
void* __result_obj__=(void*)0;
unsigned int hash_952;
unsigned int it_953;
_Bool same_key_exist_954;
char* it2_955;
struct map$2charphsGenericsFunph* __result400__;
    if(    self->len*10>=self->size) {
        map$2charphsGenericsFunphp_rehash(self);
    }
    hash_952=string_get_hash_key(((char*)key))%self->size;
    it_953=hash_952;
    while((_Bool)1) {
        if(        self->item_existance[it_953]) {
            if(            string_equals(self->keys[it_953],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_953]);
                    self->keys[it_953] = come_decrement_ref_count2(self->keys[it_953], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_953]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_953]);
                    self->keys[it_953]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_953],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_953]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_953]=item;
                }
                break;
            }
            it_953++;
            if(            it_953>=self->size) {
                it_953=0;
            }
            else if(            it_953==hash_952) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_953]=(_Bool)1;
            if(            1) {
                self->keys[it_953]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_953]=key;
            }
            if(            1) {
                self->items[it_953]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_953]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_954=(_Bool)0;
    for(    it2_955=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_955=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_955,key)) {
            same_key_exist_954=(_Bool)1;
        }
    }
    if(    !same_key_exist_954) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result400__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result400__;
}

static void map$2charphsGenericsFunphp_rehash(struct map$2charphsGenericsFunph* self){
int size_935;
void* __right_value972 = (void*)0;
char** keys_936;
void* __right_value973 = (void*)0;
struct sGenericsFun** items_937;
void* __right_value974 = (void*)0;
_Bool* item_existance_938;
int len_939;
char* it_942;
struct sGenericsFun* default_value_945;
void* __right_value975 = (void*)0;
struct sGenericsFun* it2_946;
unsigned int hash_949;
int n_950;
struct sGenericsFun* default_value_951;
void* __right_value976 = (void*)0;
default_value_945 = (void*)0;
default_value_951 = (void*)0;
    size_935=self->size*10;
    keys_936=(char**)come_increment_ref_count(((char**)(__right_value972=(char**)come_calloc(1, sizeof(char*)*(1*(size_935)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_937=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value973=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_935)), "./comelang.h", 2809, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_938=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value974=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_935)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_939=0;
    for(    it_942=map$2charphsGenericsFunphp_begin(self);    !map$2charphsGenericsFunphp_end(self);    it_942=map$2charphsGenericsFunphp_next(self)    ){
        memset(&default_value_945,0,sizeof(struct sGenericsFun*));
        it2_946=((struct sGenericsFun*)(__right_value975=map$2charphsGenericsFunphp_at(self,it_942,default_value_945)));
        come_call_finalizer3(__right_value975,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_949=string_get_hash_key(((char*)it_942))%size_935;
        n_950=hash_949;
        while((_Bool)1) {
            if(            item_existance_938[n_950]) {
                n_950++;
                if(                n_950>=size_935) {
                    n_950=0;
                }
                else if(                n_950==hash_949) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_938[n_950]=(_Bool)1;
                keys_936[n_950]=it_942;
                items_937[n_950]=((struct sGenericsFun*)(__right_value976=map$2charphsGenericsFunphp_at(self,it_942,default_value_951)));
                come_call_finalizer3(__right_value976,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_939++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_936;
    self->items=items_937;
    self->item_existance=item_existance_938;
    self->size=size_935;
    self->len=len_939;
}

static char* map$2charphsGenericsFunphp_begin(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_940;
char* __result390__;
char* __result391__;
char* result_941;
char* __result392__;
result_940 = (void*)0;
result_941 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_940,0,sizeof(char*));
        __result390__ = gComeFunResultObject = __result_obj__ = result_940;
        gComeFunResultObject = (void*)0;
        return __result390__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result391__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result391__;
    }
    memset(&result_941,0,sizeof(char*));
    __result392__ = gComeFunResultObject = __result_obj__ = result_941;
    gComeFunResultObject = (void*)0;
    return __result392__;
}

static _Bool map$2charphsGenericsFunphp_end(struct map$2charphsGenericsFunph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsGenericsFunphp_next(struct map$2charphsGenericsFunph* self){
void* __result_obj__=(void*)0;
char* result_943;
char* __result393__;
char* __result394__;
char* result_944;
char* __result395__;
result_943 = (void*)0;
result_944 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_943,0,sizeof(char*));
        __result393__ = gComeFunResultObject = __result_obj__ = result_943;
        gComeFunResultObject = (void*)0;
        return __result393__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result394__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result394__;
    }
    memset(&result_944,0,sizeof(char*));
    __result395__ = gComeFunResultObject = __result_obj__ = result_944;
    gComeFunResultObject = (void*)0;
    return __result395__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_947;
unsigned int it_948;
struct sGenericsFun* __result396__;
struct sGenericsFun* __result397__;
struct sGenericsFun* __result398__;
struct sGenericsFun* __result399__;
    hash_947=string_get_hash_key(((char*)key))%self->size;
    it_948=hash_947;
    while((_Bool)1) {
        if(        self->item_existance[it_948]) {
            if(            string_equals(self->keys[it_948],key)) {
                __result396__ = gComeFunResultObject = __result_obj__ = self->items[it_948];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result396__;
            }
            it_948++;
            if(            it_948>=self->size) {
                it_948=0;
            }
            else if(            it_948==hash_947) {
                __result397__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result397__;
            }
        }
        else {
            __result398__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result398__;
        }
    }
    __result399__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result399__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_998;
char* __dec_obj275;
char* last_code2_999;
char* __dec_obj276;
_Bool comma_instead_of_semicolon_1000;
struct sClass* current_stack_frame_struct_1001;
char* real_fun_name_1002;
struct sFun* finalizer_1003;
void* __right_value1059 = (void*)0;
struct sType* type_before_1004;
void* __right_value1060 = (void*)0;
struct sType* type2_1005;
void* __right_value1061 = (void*)0;
char* fun_name2_1006;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
char* none_generics_name_1007;
void* __right_value1064 = (void*)0;
char* generics_fun_name_1008;
void* __right_value1065 = (void*)0;
struct sGenericsFun* generics_fun_1009;
void* __right_value1066 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_1013=0;
_Bool err_1014=0;
void* __right_value1067 = (void*)0;
char* __dec_obj277;
int i_1015;
void* __right_value1068 = (void*)0;
char* new_fun_name_1016;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
char* __dec_obj278;
void* __right_value1071 = (void*)0;
char* __dec_obj279;
void* __right_value1072 = (void*)0;
char* __dec_obj280;
void* __right_value1073 = (void*)0;
char* user_real_fun_name_1017;
void* __right_value1074 = (void*)0;
struct sFun* user_finalizer_1018;
void* __right_value1075 = (void*)0;
struct sType* type2_1019;
struct sClass* klass_1020;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
struct buffer* source_1021;
void* __right_value1078 = (void*)0;
struct list$1voidph* o2_saved_1026;
struct tuple2$2charphsTypeph* it_1027;
struct tuple2$2charphsTypeph* multiple_assign_var12 = (void*)0;
char* name_1028=0;
struct sType* field_type_1029=0;
char* p_1032;
int sline_1033;
char* sname_1034;
char* head_1035;
struct buffer* source3_1036;
struct buffer* __dec_obj286;
void* __right_value1079 = (void*)0;
char* __dec_obj287;
void* __right_value1080 = (void*)0;
struct sBlock* block_1037;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct sType* result_type_1038;
void* __right_value1083 = (void*)0;
char* name_1039;
void* __right_value1084 = (void*)0;
struct sType* self_type_1040;
struct sType* __list_values21___1042[1];
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct list$1voidph* param_types_1041;
void* __right_value1087 = (void*)0;
char* __list_values22___1043[1];
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
struct list$1charph* param_names_1044;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct list$1charph* param_default_parametors_1045;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct buffer* header_buf_1046;
void* __right_value1094 = (void*)0;
int i_1047;
void* __right_value1095 = (void*)0;
struct sType* param_type_1048;
void* __right_value1096 = (void*)0;
char* param_name_1049;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
void* __right_value1099 = (void*)0;
struct sFun* fun2_1050;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
struct sFun* fun_1051;
void* __right_value1106 = (void*)0;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1109 = (void*)0;
struct sNode* node_1052;
_Bool Value_1053;
struct buffer* __dec_obj288;
char* __dec_obj289;
char* __dec_obj290;
char* __dec_obj291;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct tuple2$2sFunpcharph* __result418__;
memset(&i_1015, 0, sizeof(int));
    last_code_998=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj275=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_999=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj276=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1000=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1001=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1002=((void*)0);
    finalizer_1003=((void*)0);
    type_before_1004=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1005=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1005->mHeap=(_Bool)0;
    fun_name2_1006=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        finalizer_1003=((struct sFun*)(__right_value1062=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1006)));
        come_call_finalizer3(__right_value1062,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        finalizer_1003==((void*)0)) {
            none_generics_name_1007=(char*)come_increment_ref_count(get_none_generics_name(type2_1005->mClass->mName));
            generics_fun_name_1008=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1007,fun_name));
            generics_fun_1009=((struct sGenericsFun*)(__right_value1065=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_1008)));
            come_call_finalizer3(__right_value1065,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1009) {
                multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value1066=create_generics_fun((char*)come_increment_ref_count(fun_name2_1006),generics_fun_1009,type,info)));
                name_1013=(char*)come_increment_ref_count(multiple_assign_var11->v1);
                err_1014=multiple_assign_var11->v2;
                come_call_finalizer3(__right_value1066,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1014) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1003=((struct sFun*)(__right_value1067=map$2charphsFunphp_operator_load_element(info->funcs,name_1013)));
                come_call_finalizer3(__right_value1067,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_1013 = come_decrement_ref_count2(name_1013, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1007 = come_decrement_ref_count2(none_generics_name_1007, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1008 = come_decrement_ref_count2(generics_fun_name_1008, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        __dec_obj277=real_fun_name_1002;
        real_fun_name_1002=(char*)come_increment_ref_count(fun_name2_1006);
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1015=128-1;        i_1015>=1;        i_1015--        ){
            new_fun_name_1016=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1006,i_1015));
            finalizer_1003=((struct sFun*)(__right_value1069=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1016)));
            come_call_finalizer3(__right_value1069,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            finalizer_1003) {
                __dec_obj278=fun_name2_1006;
                fun_name2_1006=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1016));
                __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1016 = come_decrement_ref_count2(new_fun_name_1016, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1016 = come_decrement_ref_count2(new_fun_name_1016, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_1003==((void*)0)) {
            finalizer_1003=((struct sFun*)(__right_value1071=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1006)));
            come_call_finalizer3(__right_value1071,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj279=real_fun_name_1002;
        real_fun_name_1002=(char*)come_increment_ref_count(fun_name2_1006);
        __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1003==((void*)0)) {
        type=type_before_1004;
        __dec_obj280=real_fun_name_1002;
        real_fun_name_1002=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1017=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1018=((struct sFun*)(__right_value1074=map$2charphsFunphp_operator_load_element(info->funcs,user_real_fun_name_1017)));
        come_call_finalizer3(__right_value1074,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        type2_1019=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1019;
        klass_1020=type->mClass;
        if(        type->mPointerNum>0&&klass_1020->mStruct||type->mAllocaValue) {
            source_1021=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3026, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_char(source_1021,123);
            if(            user_finalizer_1018) {
                char source2_1022[1024];
                memset(&source2_1022, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1022,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1017);
                buffer_append_str(source_1021,source2_1022);
            }
            klass_1020=((struct sClass*)(__right_value1078=map$2charphsClassphp_operator_load_element(info->classes,klass_1020->mName)));
            come_call_finalizer3(__right_value1078,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1026=(struct list$1voidph*)come_increment_ref_count((klass_1020->mFields)),it_1027=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1026)));            !list$1voidphp_end((o2_saved_1026));            it_1027=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1026)))            ){
                multiple_assign_var12=it_1027;
                name_1028=(char*)come_increment_ref_count(multiple_assign_var12->v1);
                field_type_1029=(struct sType*)come_increment_ref_count(multiple_assign_var12->v2);
                if(                field_type_1029->mHeap) {
                    char source2_1030[1024];
                    memset(&source2_1030, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1030,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { if(self.%s == gComeFunResultObject) { gc_dec_nofree(self.%s); } else { delete borrow self.%s; }}\n",name_1028,name_1028,name_1028,name_1028);
                    buffer_append_str(source_1021,source2_1030);
                }
                else if(                field_type_1029->mChannel) {
                    char source2_1031[1024];
                    memset(&source2_1031, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1031,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1028,name_1028);
                    buffer_append_str(source_1021,source2_1031);
                    snprintf(source2_1031,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1028,name_1028);
                    buffer_append_str(source_1021,source2_1031);
                }
                name_1028 = come_decrement_ref_count2(name_1028, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1029,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1026,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1021,125);
            p_1032=info->p;
            sline_1033=info->sline;
            sname_1034=(char*)come_increment_ref_count(info->sname);
            head_1035=info->head;
            source3_1036=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj286=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1021);
            come_call_finalizer3(__dec_obj286,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=source_1021->buf;
            info->head=source_1021->buf;
            __dec_obj287=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1002));
            __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1037=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1038=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3075, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
            name_1039=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1002));
            self_type_1040=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1040->mHeap=(_Bool)0;
            if(            self_type_1040->mPointerNum==0) {
                self_type_1040->mPointerNum=1;
            }
            if(            self_type_1040->mPointerNum>1) {
                self_type_1040->mPointerNum=1;
            }
            param_types_1041=(struct list$1sTypeph*)come_increment_ref_count((__list_values21___1042[0]=(struct sType*)come_increment_ref_count(self_type_1040),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3085, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values21___1042)));
            param_names_1044=(struct list$1charph*)come_increment_ref_count((__list_values22___1043[0]=(char*)come_increment_ref_count(((char*)(__right_value1087=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3086, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values22___1043)));
            __right_value1087 = come_decrement_ref_count2(__right_value1087, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            param_default_parametors_1045=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3087, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1charphp_push_back(param_default_parametors_1045,((void*)0));
            header_buf_1046=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3090, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(header_buf_1046,((char*)(__right_value1094=make_come_type_name_string(result_type_1038,info))));
            __right_value1094 = come_decrement_ref_count2(__right_value1094, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1046," ");
            buffer_append_str(header_buf_1046,real_fun_name_1002);
            buffer_append_str(header_buf_1046,"(");
            for(            i_1047=0;            i_1047<list$1voidphp_length(param_types_1041);            i_1047++            ){
                param_type_1048=((struct sType*)((void*)(__right_value1095=list$1voidphp_operator_load_element(param_types_1041,i_1047))));
                come_call_finalizer3(__right_value1095,(void*)0, 0, 1, 0, 0, __result_obj__);
                param_name_1049=((char*)(__right_value1096=list$1charphp_operator_load_element(param_names_1044,i_1047)));
                __right_value1096 = come_decrement_ref_count2(__right_value1096, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1046,((char*)(__right_value1097=make_come_type_name_string(param_type_1048,info))));
                __right_value1097 = come_decrement_ref_count2(__right_value1097, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                buffer_append_str(header_buf_1046," ");
                buffer_append_str(header_buf_1046,param_name_1049);
                if(                i_1047!=list$1voidphp_length(param_types_1041)-1) {
                    buffer_append_str(header_buf_1046,",");
                }
            }
            buffer_append_str(header_buf_1046,")");
            result_type_1038->mStatic=(_Bool)0;
            result_type_1038->mUniq=(_Bool)0;
            result_type_1038->mInline=(_Bool)0;
            result_type_1038->mGenerate=(_Bool)0;
            fun2_1050=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1098=__builtin_string(name_1039)))));
            __right_value1098 = come_decrement_ref_count2(__right_value1098, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            fun2_1050==((void*)0)||fun2_1050->mExternal) {
                fun_1051=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3118, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1039),(struct sType*)come_increment_ref_count(result_type_1038),(struct list$1voidph*)come_increment_ref_count(param_types_1041),(struct list$1charph*)come_increment_ref_count(param_names_1044),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1045),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1037),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1046)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1039)),(struct sFun*)come_increment_ref_count(fun_1051));
                finalizer_1003=fun_1051;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3130, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1108=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3130, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1051),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1052=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1108,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
                Value_1053=node_compile(node_1052,info);
                if(                !Value_1053) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1051,sFun_finalize, 0, 0, 0, 0, (void*)0);
                if(node_1052) { node_1052 = come_decrement_ref_count2(node_1052, ((struct sNode*)node_1052)->finalize, ((struct sNode*)node_1052)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                finalizer_1003=fun2_1050;
            }
            __dec_obj288=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1036);
            come_call_finalizer3(__dec_obj288,buffer_finalize, 0, 0, 0, 0, (void*)0);
            info->p=p_1032;
            info->head=head_1035;
            info->sline=sline_1033;
            __dec_obj289=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1034);
            __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1021,buffer_finalize, 0, 0, 0, 0, (void*)0);
            sname_1034 = come_decrement_ref_count2(sname_1034, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(source3_1036,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1037,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1038,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_1039 = come_decrement_ref_count2(name_1039, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(self_type_1040,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1041,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1044,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1045,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(header_buf_1046,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1050,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_1017 = come_decrement_ref_count2(user_real_fun_name_1017, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_1019,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1001;
    __dec_obj290=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_998);
    __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj291=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_999);
    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1000;
    __result418__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1113=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3155, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),finalizer_1003,(char*)come_increment_ref_count(real_fun_name_1002))));
    last_code_998 = come_decrement_ref_count2(last_code_998, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_999 = come_decrement_ref_count2(last_code2_999, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1002 = come_decrement_ref_count2(real_fun_name_1002, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_before_1004,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1005,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1006 = come_decrement_ref_count2(fun_name2_1006, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1113,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result418__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_1010;
unsigned int hash_1011;
unsigned int it_1012;
struct sGenericsFun* __result407__;
struct sGenericsFun* __result408__;
struct sGenericsFun* __result409__;
struct sGenericsFun* __result410__;
default_value_1010 = (void*)0;
    memset(&default_value_1010,0,sizeof(struct sGenericsFun*));
    hash_1011=string_get_hash_key(((char*)key))%self->size;
    it_1012=hash_1011;
    while((_Bool)1) {
        if(        self->item_existance[it_1012]) {
            if(            string_equals(self->keys[it_1012],key)) {
                __result407__ = gComeFunResultObject = __result_obj__ = self->items[it_1012];
                come_call_finalizer3(default_value_1010,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result407__;
            }
            it_1012++;
            if(            it_1012>=self->size) {
                it_1012=0;
            }
            else if(            it_1012==hash_1011) {
                __result408__ = gComeFunResultObject = __result_obj__ = default_value_1010;
                come_call_finalizer3(default_value_1010,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result408__;
            }
        }
        else {
            __result409__ = gComeFunResultObject = __result_obj__ = default_value_1010;
            come_call_finalizer3(default_value_1010,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result409__;
        }
    }
    __result410__ = gComeFunResultObject = __result_obj__ = default_value_1010;
    come_call_finalizer3(default_value_1010,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result410__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_1023;
unsigned int hash_1024;
unsigned int it_1025;
struct sClass* __result411__;
struct sClass* __result412__;
struct sClass* __result413__;
struct sClass* __result414__;
default_value_1023 = (void*)0;
    memset(&default_value_1023,0,sizeof(struct sClass*));
    hash_1024=string_get_hash_key(((char*)key))%self->size;
    it_1025=hash_1024;
    while((_Bool)1) {
        if(        self->item_existance[it_1025]) {
            if(            string_equals(self->keys[it_1025],key)) {
                __result411__ = gComeFunResultObject = __result_obj__ = self->items[it_1025];
                come_call_finalizer3(default_value_1023,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result411__;
            }
            it_1025++;
            if(            it_1025>=self->size) {
                it_1025=0;
            }
            else if(            it_1025==hash_1024) {
                __result412__ = gComeFunResultObject = __result_obj__ = default_value_1023;
                come_call_finalizer3(default_value_1023,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result412__;
            }
        }
        else {
            __result413__ = gComeFunResultObject = __result_obj__ = default_value_1023;
            come_call_finalizer3(default_value_1023,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result413__;
        }
    }
    __result414__ = gComeFunResultObject = __result_obj__ = default_value_1023;
    come_call_finalizer3(default_value_1023,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result414__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj281;
struct list$1voidph* __dec_obj282;
char* __dec_obj283;
char* __dec_obj284;
char* __dec_obj285;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj281=self->mName;
            __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj282=self->mFields;
            come_call_finalizer3(__dec_obj282,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj283=self->mDeclareSName;
            __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj284=self->mParentClassName;
            __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj285=self->mAttribute;
            __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharph_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj292;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj292=self->v2;
            __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_clone(struct tuple2$2sFunpcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sFunpcharph* __result415__;
void* __right_value1110 = (void*)0;
struct tuple2$2sFunpcharph* result_1055;
void* __right_value1111 = (void*)0;
char* __dec_obj293;
struct tuple2$2sFunpcharph* __result416__;
    if(    self==(void*)0) {
        __result415__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result415__;
    }
    result_1055=(struct tuple2$2sFunpcharph*)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "tuple2$2sFunpcharph_clone", 3, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals));
    if(    self!=((void*)0)) {
        result_1055->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj293=result_1055->v2;
        result_1055->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result416__ = gComeFunResultObject = __result_obj__ = result_1055;
    come_call_finalizer3(result_1055,tuple2$2sFunpcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result416__;
}

static unsigned int tuple2$2sFunpcharph_get_hash_key(struct tuple2$2sFunpcharph* self){
unsigned int result_1054;
    result_1054=0;
    result_1054+=int_get_hash_key(((int)self->v1));
    result_1054+=int_get_hash_key(((int)self->v2));
    return result_1054;
}

static _Bool tuple2$2sFunpcharph_equals(struct tuple2$2sFunpcharph* left, struct tuple2$2sFunpcharph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sFunpcharph* tuple2$2sFunpcharph_initialize(struct tuple2$2sFunpcharph* self, struct sFun* v1, char* v2){
void* __result_obj__=(void*)0;
char* __dec_obj294;
struct tuple2$2sFunpcharph* __result417__;
    self->v1=v1;
    __dec_obj294=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result417__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sFunpcharphp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result417__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj295;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj295=self->v2;
            __dec_obj295 = come_decrement_ref_count2(__dec_obj295, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sFunpcharph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1056;
char* __dec_obj296;
char* last_code2_1057;
char* __dec_obj297;
_Bool comma_instead_of_semicolon_1058;
struct sClass* current_stack_frame_struct_1059;
struct sFun* equaler_1060;
void* __right_value1114 = (void*)0;
char* real_fun_name_1061;
void* __right_value1115 = (void*)0;
struct sType* type2_1062;
struct sClass* klass_1063;
void* __right_value1116 = (void*)0;
void* __right_value1117 = (void*)0;
struct buffer* source_1064;
char* name_1065;
void* __right_value1118 = (void*)0;
struct list$1voidph* o2_saved_1067;
struct tuple2$2charphsTypeph* it_1068;
struct tuple2$2charphsTypeph* multiple_assign_var13 = (void*)0;
char* name_1069=0;
struct sType* field_type_1070=0;
char* p_1072;
int sline_1073;
char* sname_1074;
char* head_1075;
struct buffer* source3_1076;
struct buffer* __dec_obj298;
void* __right_value1119 = (void*)0;
char* __dec_obj299;
void* __right_value1120 = (void*)0;
struct sBlock* block_1077;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct sType* result_type_1078;
void* __right_value1123 = (void*)0;
char* name_1079;
void* __right_value1124 = (void*)0;
struct sType* left_type_1080;
void* __right_value1125 = (void*)0;
struct sType* right_type_1081;
struct sType* __list_values23___1083[2];
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
struct list$1voidph* param_types_1082;
void* __right_value1128 = (void*)0;
void* __right_value1129 = (void*)0;
char* __list_values24___1084[2];
void* __right_value1130 = (void*)0;
void* __right_value1131 = (void*)0;
struct list$1charph* param_names_1085;
void* __right_value1132 = (void*)0;
void* __right_value1133 = (void*)0;
struct list$1charph* param_default_parametors_1086;
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
struct buffer* header_buf_1087;
void* __right_value1136 = (void*)0;
int i_1088;
void* __right_value1137 = (void*)0;
struct sType* param_type_1089;
void* __right_value1138 = (void*)0;
char* param_name_1090;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
struct sFun* fun2_1091;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
struct sFun* fun_1092;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
void* __right_value1150 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1151 = (void*)0;
struct sNode* node_1093;
_Bool Value_1094;
struct buffer* __dec_obj300;
char* __dec_obj301;
char* __dec_obj302;
char* __dec_obj303;
void* __right_value1152 = (void*)0;
void* __right_value1153 = (void*)0;
struct tuple2$2sFunpcharph* __result419__;
    last_code_1056=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj296=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1057=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj297=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj297 = come_decrement_ref_count2(__dec_obj297, (void*)0, (void*)0, 0,0,0, (void*)0);
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
        source_1064=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3181, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1064,123);
        if(        klass_1063->mProtocol) {
            name_1065="_protocol_obj";
            char source2_1066[1024];
            memset(&source2_1066, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1066,1024,"return left.%s.equals(right.%s);\n",name_1065,name_1065);
            buffer_append_str(source_1064,source2_1066);
        }
        else {
            klass_1063=((struct sClass*)(__right_value1118=map$2charphsClassphp_operator_load_element(info->classes,klass_1063->mName)));
            come_call_finalizer3(__right_value1118,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1067=(struct list$1voidph*)come_increment_ref_count((klass_1063->mFields)),it_1068=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1067)));            !list$1voidphp_end((o2_saved_1067));            it_1068=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1067)))            ){
                multiple_assign_var13=it_1068;
                name_1069=(char*)come_increment_ref_count(multiple_assign_var13->v1);
                field_type_1070=(struct sType*)come_increment_ref_count(multiple_assign_var13->v2);
                char source2_1071[1024];
                memset(&source2_1071, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1071,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1069,name_1069,name_1069);
                buffer_append_str(source_1064,source2_1071);
                name_1069 = come_decrement_ref_count2(name_1069, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1070,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1067,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1064,"return true;");
        buffer_append_char(source_1064,125);
        p_1072=info->p;
        sline_1073=info->sline;
        sname_1074=(char*)come_increment_ref_count(info->sname);
        head_1075=info->head;
        source3_1076=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj298=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1064);
        come_call_finalizer3(__dec_obj298,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1064->buf;
        info->head=source_1064->buf;
        __dec_obj299=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1061));
        __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1077=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1078=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3221, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1079=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1061));
        left_type_1080=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1080->mHeap=(_Bool)0;
        right_type_1081=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1081->mHeap=(_Bool)0;
        param_types_1082=(struct list$1sTypeph*)come_increment_ref_count((__list_values23___1083[0]=(struct sType*)come_increment_ref_count(left_type_1080),
__list_values23___1083[1]=(struct sType*)come_increment_ref_count(right_type_1081),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3227, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values23___1083)));
        param_names_1085=(struct list$1charph*)come_increment_ref_count((__list_values24___1084[0]=(char*)come_increment_ref_count(((char*)(__right_value1128=__builtin_string("left")))),
__list_values24___1084[1]=(char*)come_increment_ref_count(((char*)(__right_value1129=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3228, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values24___1084)));
        __right_value1128 = come_decrement_ref_count2(__right_value1128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1129 = come_decrement_ref_count2(__right_value1129, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1086=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3229, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1086,((void*)0));
        list$1charphp_push_back(param_default_parametors_1086,((void*)0));
        header_buf_1087=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3233, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1087,((char*)(__right_value1136=make_come_type_name_string(result_type_1078,info))));
        __right_value1136 = come_decrement_ref_count2(__right_value1136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1087," ");
        buffer_append_str(header_buf_1087,real_fun_name_1061);
        buffer_append_str(header_buf_1087,"(");
        for(        i_1088=0;        i_1088<list$1voidphp_length(param_types_1082);        i_1088++        ){
            param_type_1089=((struct sType*)((void*)(__right_value1137=list$1voidphp_operator_load_element(param_types_1082,i_1088))));
            come_call_finalizer3(__right_value1137,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1090=((char*)(__right_value1138=list$1charphp_operator_load_element(param_names_1085,i_1088)));
            __right_value1138 = come_decrement_ref_count2(__right_value1138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1087,((char*)(__right_value1139=make_come_type_name_string(param_type_1089,info))));
            __right_value1139 = come_decrement_ref_count2(__right_value1139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1087," ");
            buffer_append_str(header_buf_1087,param_name_1090);
            if(            i_1088!=list$1voidphp_length(param_types_1082)-1) {
                buffer_append_str(header_buf_1087,",");
            }
        }
        buffer_append_str(header_buf_1087,")");
        result_type_1078->mStatic=(_Bool)0;
        result_type_1078->mUniq=(_Bool)0;
        result_type_1078->mInline=(_Bool)0;
        result_type_1078->mGenerate=(_Bool)0;
        fun2_1091=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1140=__builtin_string(name_1079)))));
        __right_value1140 = come_decrement_ref_count2(__right_value1140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1091==((void*)0)||fun2_1091->mExternal) {
            fun_1092=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3261, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1079),(struct sType*)come_increment_ref_count(result_type_1078),(struct list$1voidph*)come_increment_ref_count(param_types_1082),(struct list$1charph*)come_increment_ref_count(param_names_1085),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1086),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1077),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1087)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1079)),(struct sFun*)come_increment_ref_count(fun_1092));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3271, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1150=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3271, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1092),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1093=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1150,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1094=node_compile(node_1093,info);
            if(            !Value_1094) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1060=fun_1092;
            come_call_finalizer3(fun_1092,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1093) { node_1093 = come_decrement_ref_count2(node_1093, ((struct sNode*)node_1093)->finalize, ((struct sNode*)node_1093)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1060=fun2_1091;
        }
        __dec_obj300=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1076);
        come_call_finalizer3(__dec_obj300,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1072;
        info->head=head_1075;
        info->sline=sline_1073;
        __dec_obj301=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1074);
        __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1064,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1074 = come_decrement_ref_count2(sname_1074, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1076,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1077,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1078,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1079 = come_decrement_ref_count2(name_1079, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1080,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1081,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1082,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1085,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1086,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1087,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1091,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1059;
    __dec_obj302=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1056);
    __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj303=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1057);
    __dec_obj303 = come_decrement_ref_count2(__dec_obj303, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1058;
    __result419__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1153=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3297, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1060,(char*)come_increment_ref_count(real_fun_name_1061))));
    last_code_1056 = come_decrement_ref_count2(last_code_1056, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1057 = come_decrement_ref_count2(last_code2_1057, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1061 = come_decrement_ref_count2(real_fun_name_1061, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1062,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1153,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result419__;
}

struct tuple2$2sFunpcharph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1095;
char* __dec_obj304;
char* last_code2_1096;
char* __dec_obj305;
_Bool comma_instead_of_semicolon_1097;
struct sClass* current_stack_frame_struct_1098;
struct sFun* equaler_1099;
void* __right_value1154 = (void*)0;
char* real_fun_name_1100;
void* __right_value1155 = (void*)0;
struct sType* type2_1101;
struct sClass* klass_1102;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
struct buffer* source_1103;
char* name_1104;
int i_1107;
void* __right_value1158 = (void*)0;
struct list$1voidph* o2_saved_1108;
struct tuple2$2charphsTypeph* it_1109;
struct tuple2$2charphsTypeph* multiple_assign_var14 = (void*)0;
char* name_1110=0;
struct sType* field_type_1111=0;
char* p_1115;
int sline_1116;
char* sname_1117;
char* head_1118;
struct buffer* source3_1119;
struct buffer* __dec_obj306;
void* __right_value1159 = (void*)0;
char* __dec_obj307;
void* __right_value1160 = (void*)0;
struct sBlock* block_1120;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
struct sType* result_type_1121;
void* __right_value1163 = (void*)0;
char* name_1122;
void* __right_value1164 = (void*)0;
struct sType* left_type_1123;
void* __right_value1165 = (void*)0;
struct sType* right_type_1124;
struct sType* __list_values25___1126[2];
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct list$1voidph* param_types_1125;
void* __right_value1168 = (void*)0;
void* __right_value1169 = (void*)0;
char* __list_values26___1127[2];
void* __right_value1170 = (void*)0;
void* __right_value1171 = (void*)0;
struct list$1charph* param_names_1128;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct list$1charph* param_default_parametors_1129;
void* __right_value1174 = (void*)0;
void* __right_value1175 = (void*)0;
struct buffer* header_buf_1130;
void* __right_value1176 = (void*)0;
int i_1131;
void* __right_value1177 = (void*)0;
struct sType* param_type_1132;
void* __right_value1178 = (void*)0;
char* param_name_1133;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
void* __right_value1181 = (void*)0;
struct sFun* fun2_1134;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct sFun* fun_1135;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1191 = (void*)0;
struct sNode* node_1136;
_Bool Value_1137;
struct buffer* __dec_obj308;
char* __dec_obj309;
char* __dec_obj310;
char* __dec_obj311;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct tuple2$2sFunpcharph* __result420__;
    last_code_1095=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj304=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1096=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj305=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj305 = come_decrement_ref_count2(__dec_obj305, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1097=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1098=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1099=((void*)0);
    real_fun_name_1100=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1101=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1101;
    klass_1102=type->mClass;
    if(    type->mPointerNum>0&&!klass_1102->mNumber) {
        source_1103=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3322, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1103,123);
        if(        klass_1102->mProtocol) {
            name_1104="_protocol_obj";
            char source2_1105[1024];
            memset(&source2_1105, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1105,1024,"return left.%s !== right.%s;\n",name_1104,name_1104);
            buffer_append_str(source_1103,source2_1105);
        }
        else {
            char source2_1106[1024];
            memset(&source2_1106, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1106,1024,"return !(");
            buffer_append_str(source_1103,source2_1106);
            snprintf(source2_1106,1024,"( ");
            buffer_append_str(source_1103,source2_1106);
            i_1107=0;
            klass_1102=((struct sClass*)(__right_value1158=map$2charphsClassphp_operator_load_element(info->classes,klass_1102->mName)));
            come_call_finalizer3(__right_value1158,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1108=(struct list$1voidph*)come_increment_ref_count((klass_1102->mFields)),it_1109=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1108)));            !list$1voidphp_end((o2_saved_1108));            it_1109=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1108)))            ){
                multiple_assign_var14=it_1109;
                name_1110=(char*)come_increment_ref_count(multiple_assign_var14->v1);
                field_type_1111=(struct sType*)come_increment_ref_count(multiple_assign_var14->v2);
                char source2_1112[1024];
                memset(&source2_1112, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1112,1024,"(left.%s === right.%s)",name_1110,name_1110,name_1110);
                buffer_append_str(source_1103,source2_1112);
                if(                i_1107==list$1voidphp_length(klass_1102->mFields)-1) {
                    char source2_1113[1024];
                    memset(&source2_1113, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1113,1024,"));");
                    buffer_append_str(source_1103,source2_1113);
                }
                else {
                    char source2_1114[1024];
                    memset(&source2_1114, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1114,1024," && ");
                    buffer_append_str(source_1103,source2_1114);
                }
                i_1107++;
                name_1110 = come_decrement_ref_count2(name_1110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1111,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1108,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1103,125);
        p_1115=info->p;
        sline_1116=info->sline;
        sname_1117=(char*)come_increment_ref_count(info->sname);
        head_1118=info->head;
        source3_1119=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj306=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1103);
        come_call_finalizer3(__dec_obj306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1103->buf;
        info->head=source_1103->buf;
        __dec_obj307=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1100));
        __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1120=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1121=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3382, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1122=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1100));
        left_type_1123=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1123->mHeap=(_Bool)0;
        right_type_1124=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1124->mHeap=(_Bool)0;
        param_types_1125=(struct list$1sTypeph*)come_increment_ref_count((__list_values25___1126[0]=(struct sType*)come_increment_ref_count(left_type_1123),
__list_values25___1126[1]=(struct sType*)come_increment_ref_count(right_type_1124),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3388, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values25___1126)));
        param_names_1128=(struct list$1charph*)come_increment_ref_count((__list_values26___1127[0]=(char*)come_increment_ref_count(((char*)(__right_value1168=__builtin_string("left")))),
__list_values26___1127[1]=(char*)come_increment_ref_count(((char*)(__right_value1169=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3389, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values26___1127)));
        __right_value1168 = come_decrement_ref_count2(__right_value1168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1169 = come_decrement_ref_count2(__right_value1169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1129=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3390, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1129,((void*)0));
        list$1charphp_push_back(param_default_parametors_1129,((void*)0));
        header_buf_1130=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3394, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1130,((char*)(__right_value1176=make_come_type_name_string(result_type_1121,info))));
        __right_value1176 = come_decrement_ref_count2(__right_value1176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1130," ");
        buffer_append_str(header_buf_1130,real_fun_name_1100);
        buffer_append_str(header_buf_1130,"(");
        for(        i_1131=0;        i_1131<list$1voidphp_length(param_types_1125);        i_1131++        ){
            param_type_1132=((struct sType*)((void*)(__right_value1177=list$1voidphp_operator_load_element(param_types_1125,i_1131))));
            come_call_finalizer3(__right_value1177,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1133=((char*)(__right_value1178=list$1charphp_operator_load_element(param_names_1128,i_1131)));
            __right_value1178 = come_decrement_ref_count2(__right_value1178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1130,((char*)(__right_value1179=make_come_type_name_string(param_type_1132,info))));
            __right_value1179 = come_decrement_ref_count2(__right_value1179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1130," ");
            buffer_append_str(header_buf_1130,param_name_1133);
            if(            i_1131!=list$1voidphp_length(param_types_1125)-1) {
                buffer_append_str(header_buf_1130,",");
            }
        }
        buffer_append_str(header_buf_1130,")");
        result_type_1121->mStatic=(_Bool)0;
        result_type_1121->mUniq=(_Bool)0;
        result_type_1121->mInline=(_Bool)0;
        result_type_1121->mGenerate=(_Bool)0;
        fun2_1134=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1180=__builtin_string(name_1122)))));
        __right_value1180 = come_decrement_ref_count2(__right_value1180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1134==((void*)0)||fun2_1134->mExternal) {
            fun_1135=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3422, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1122),(struct sType*)come_increment_ref_count(result_type_1121),(struct list$1voidph*)come_increment_ref_count(param_types_1125),(struct list$1charph*)come_increment_ref_count(param_names_1128),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1129),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1120),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1130)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1122)),(struct sFun*)come_increment_ref_count(fun_1135));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3432, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1190=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3432, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1135),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1136=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1190,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1137=node_compile(node_1136,info);
            if(            !Value_1137) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1099=fun_1135;
            come_call_finalizer3(fun_1135,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1136) { node_1136 = come_decrement_ref_count2(node_1136, ((struct sNode*)node_1136)->finalize, ((struct sNode*)node_1136)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1099=fun2_1134;
        }
        __dec_obj308=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1119);
        come_call_finalizer3(__dec_obj308,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1115;
        info->head=head_1118;
        info->sline=sline_1116;
        __dec_obj309=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1117);
        __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1103,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1117 = come_decrement_ref_count2(sname_1117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1119,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1120,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1121,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1122 = come_decrement_ref_count2(name_1122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1123,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1124,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1125,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1128,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1129,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1130,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1134,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1098;
    __dec_obj310=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1095);
    __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj311=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1096);
    __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1097;
    __result420__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1193=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3458, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1099,(char*)come_increment_ref_count(real_fun_name_1100))));
    last_code_1095 = come_decrement_ref_count2(last_code_1095, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1096 = come_decrement_ref_count2(last_code2_1096, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1100 = come_decrement_ref_count2(real_fun_name_1100, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1101,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1193,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result420__;
}

struct tuple2$2sFunpcharph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1138;
char* __dec_obj312;
char* last_code2_1139;
char* __dec_obj313;
_Bool comma_instead_of_semicolon_1140;
struct sClass* current_stack_frame_struct_1141;
struct sFun* equaler_1142;
void* __right_value1194 = (void*)0;
char* real_fun_name_1143;
void* __right_value1195 = (void*)0;
struct sType* type2_1144;
struct sClass* klass_1145;
void* __right_value1196 = (void*)0;
void* __right_value1197 = (void*)0;
struct buffer* source_1146;
char* name_1147;
int i_1150;
void* __right_value1198 = (void*)0;
struct list$1voidph* o2_saved_1151;
struct tuple2$2charphsTypeph* it_1152;
struct tuple2$2charphsTypeph* multiple_assign_var15 = (void*)0;
char* name_1153=0;
struct sType* field_type_1154=0;
char* p_1158;
int sline_1159;
char* sname_1160;
char* head_1161;
struct buffer* source3_1162;
struct buffer* __dec_obj314;
void* __right_value1199 = (void*)0;
char* __dec_obj315;
void* __right_value1200 = (void*)0;
struct sBlock* block_1163;
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct sType* result_type_1164;
void* __right_value1203 = (void*)0;
char* name_1165;
void* __right_value1204 = (void*)0;
struct sType* left_type_1166;
void* __right_value1205 = (void*)0;
struct sType* right_type_1167;
struct sType* __list_values27___1169[2];
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct list$1voidph* param_types_1168;
void* __right_value1208 = (void*)0;
void* __right_value1209 = (void*)0;
char* __list_values28___1170[2];
void* __right_value1210 = (void*)0;
void* __right_value1211 = (void*)0;
struct list$1charph* param_names_1171;
void* __right_value1212 = (void*)0;
void* __right_value1213 = (void*)0;
struct list$1charph* param_default_parametors_1172;
void* __right_value1214 = (void*)0;
void* __right_value1215 = (void*)0;
struct buffer* header_buf_1173;
void* __right_value1216 = (void*)0;
int i_1174;
void* __right_value1217 = (void*)0;
struct sType* param_type_1175;
void* __right_value1218 = (void*)0;
char* param_name_1176;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct sFun* fun2_1177;
void* __right_value1222 = (void*)0;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
struct sFun* fun_1178;
void* __right_value1228 = (void*)0;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1231 = (void*)0;
struct sNode* node_1179;
_Bool Value_1180;
struct buffer* __dec_obj316;
char* __dec_obj317;
char* __dec_obj318;
char* __dec_obj319;
void* __right_value1232 = (void*)0;
void* __right_value1233 = (void*)0;
struct tuple2$2sFunpcharph* __result421__;
    last_code_1138=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj312=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1139=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj313=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj313 = come_decrement_ref_count2(__dec_obj313, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1140=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1141=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1142=((void*)0);
    real_fun_name_1143=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1144=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1144;
    klass_1145=type->mClass;
    if(    type->mPointerNum>0&&!klass_1145->mNumber) {
        source_1146=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3483, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1146,123);
        if(        klass_1145->mProtocol) {
            name_1147="_protocol_obj";
            char source2_1148[1024];
            memset(&source2_1148, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1148,1024,"return !left.%s.equals(right.%s);\n",name_1147,name_1147);
            buffer_append_str(source_1146,source2_1148);
        }
        else {
            char source2_1149[1024];
            memset(&source2_1149, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1149,1024,"return !(");
            buffer_append_str(source_1146,source2_1149);
            i_1150=0;
            klass_1145=((struct sClass*)(__right_value1198=map$2charphsClassphp_operator_load_element(info->classes,klass_1145->mName)));
            come_call_finalizer3(__right_value1198,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1151=(struct list$1voidph*)come_increment_ref_count((klass_1145->mFields)),it_1152=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1151)));            !list$1voidphp_end((o2_saved_1151));            it_1152=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1151)))            ){
                multiple_assign_var15=it_1152;
                name_1153=(char*)come_increment_ref_count(multiple_assign_var15->v1);
                field_type_1154=(struct sType*)come_increment_ref_count(multiple_assign_var15->v2);
                char source2_1155[1024];
                memset(&source2_1155, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1155,1024,"left.%s.equals(right.%s)",name_1153,name_1153);
                buffer_append_str(source_1146,source2_1155);
                if(                i_1150==list$1voidphp_length(klass_1145->mFields)-1) {
                    char source2_1156[1024];
                    memset(&source2_1156, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1156,1024,");");
                    buffer_append_str(source_1146,source2_1156);
                }
                else {
                    char source2_1157[1024];
                    memset(&source2_1157, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1157,1024," && ");
                    buffer_append_str(source_1146,source2_1157);
                }
                i_1150++;
                name_1153 = come_decrement_ref_count2(name_1153, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1154,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1151,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1146,125);
        p_1158=info->p;
        sline_1159=info->sline;
        sname_1160=(char*)come_increment_ref_count(info->sname);
        head_1161=info->head;
        source3_1162=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj314=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1146);
        come_call_finalizer3(__dec_obj314,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1146->buf;
        info->head=source_1146->buf;
        __dec_obj315=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1143));
        __dec_obj315 = come_decrement_ref_count2(__dec_obj315, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1163=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1164=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1165=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1143));
        left_type_1166=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1166->mHeap=(_Bool)0;
        right_type_1167=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1167->mHeap=(_Bool)0;
        param_types_1168=(struct list$1sTypeph*)come_increment_ref_count((__list_values27___1169[0]=(struct sType*)come_increment_ref_count(left_type_1166),
__list_values27___1169[1]=(struct sType*)come_increment_ref_count(right_type_1167),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3546, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values27___1169)));
        param_names_1171=(struct list$1charph*)come_increment_ref_count((__list_values28___1170[0]=(char*)come_increment_ref_count(((char*)(__right_value1208=__builtin_string("left")))),
__list_values28___1170[1]=(char*)come_increment_ref_count(((char*)(__right_value1209=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3547, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values28___1170)));
        __right_value1208 = come_decrement_ref_count2(__right_value1208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1209 = come_decrement_ref_count2(__right_value1209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1172=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3548, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1172,((void*)0));
        list$1charphp_push_back(param_default_parametors_1172,((void*)0));
        header_buf_1173=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3552, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1173,((char*)(__right_value1216=make_come_type_name_string(result_type_1164,info))));
        __right_value1216 = come_decrement_ref_count2(__right_value1216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1173," ");
        buffer_append_str(header_buf_1173,real_fun_name_1143);
        buffer_append_str(header_buf_1173,"(");
        for(        i_1174=0;        i_1174<list$1voidphp_length(param_types_1168);        i_1174++        ){
            param_type_1175=((struct sType*)((void*)(__right_value1217=list$1voidphp_operator_load_element(param_types_1168,i_1174))));
            come_call_finalizer3(__right_value1217,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1176=((char*)(__right_value1218=list$1charphp_operator_load_element(param_names_1171,i_1174)));
            __right_value1218 = come_decrement_ref_count2(__right_value1218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1173,((char*)(__right_value1219=make_come_type_name_string(param_type_1175,info))));
            __right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1173," ");
            buffer_append_str(header_buf_1173,param_name_1176);
            if(            i_1174!=list$1voidphp_length(param_types_1168)-1) {
                buffer_append_str(header_buf_1173,",");
            }
        }
        buffer_append_str(header_buf_1173,")");
        result_type_1164->mStatic=(_Bool)0;
        result_type_1164->mUniq=(_Bool)0;
        result_type_1164->mInline=(_Bool)0;
        result_type_1164->mGenerate=(_Bool)0;
        fun2_1177=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1220=__builtin_string(name_1165)))));
        __right_value1220 = come_decrement_ref_count2(__right_value1220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1177==((void*)0)||fun2_1177->mExternal) {
            fun_1178=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3580, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1165),(struct sType*)come_increment_ref_count(result_type_1164),(struct list$1voidph*)come_increment_ref_count(param_types_1168),(struct list$1charph*)come_increment_ref_count(param_names_1171),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1172),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1163),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1173)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1165)),(struct sFun*)come_increment_ref_count(fun_1178));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3590, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1230=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3590, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1178),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1179=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1230,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1180=node_compile(node_1179,info);
            if(            !Value_1180) {
                err_msg(info,"compiling error");
                exit(2);
            }
            else {
            }
            equaler_1142=fun_1178;
            come_call_finalizer3(fun_1178,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1179) { node_1179 = come_decrement_ref_count2(node_1179, ((struct sNode*)node_1179)->finalize, ((struct sNode*)node_1179)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1142=fun2_1177;
        }
        __dec_obj316=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1162);
        come_call_finalizer3(__dec_obj316,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1158;
        info->head=head_1161;
        info->sline=sline_1159;
        __dec_obj317=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1160);
        __dec_obj317 = come_decrement_ref_count2(__dec_obj317, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1146,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1160 = come_decrement_ref_count2(sname_1160, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1162,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1163,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1164,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1165 = come_decrement_ref_count2(name_1165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1166,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1167,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1168,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1171,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1172,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1173,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1177,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1141;
    __dec_obj318=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1138);
    __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj319=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1139);
    __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1140;
    __result421__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1233=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3616, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1142,(char*)come_increment_ref_count(real_fun_name_1143))));
    last_code_1138 = come_decrement_ref_count2(last_code_1138, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1139 = come_decrement_ref_count2(last_code2_1139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1143 = come_decrement_ref_count2(real_fun_name_1143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1144,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1233,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result421__;
}

struct tuple2$2sFunpcharph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1181;
char* __dec_obj320;
char* last_code2_1182;
char* __dec_obj321;
_Bool comma_instead_of_semicolon_1183;
struct sClass* current_stack_frame_struct_1184;
struct sFun* equaler_1185;
void* __right_value1234 = (void*)0;
char* real_fun_name_1186;
void* __right_value1235 = (void*)0;
struct sType* type2_1187;
struct sClass* klass_1188;
void* __right_value1236 = (void*)0;
void* __right_value1237 = (void*)0;
struct buffer* source_1189;
char* name_1190;
void* __right_value1238 = (void*)0;
struct list$1voidph* o2_saved_1193;
struct tuple2$2charphsTypeph* it_1194;
struct tuple2$2charphsTypeph* multiple_assign_var16 = (void*)0;
char* name_1195=0;
struct sType* field_type_1196=0;
char* p_1198;
int sline_1199;
char* sname_1200;
char* head_1201;
struct buffer* source3_1202;
struct buffer* __dec_obj322;
void* __right_value1239 = (void*)0;
char* __dec_obj323;
void* __right_value1240 = (void*)0;
struct sBlock* block_1203;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct sType* result_type_1204;
void* __right_value1243 = (void*)0;
char* name_1205;
void* __right_value1244 = (void*)0;
struct sType* left_type_1206;
void* __right_value1245 = (void*)0;
struct sType* right_type_1207;
struct sType* __list_values29___1209[2];
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
struct list$1voidph* param_types_1208;
void* __right_value1248 = (void*)0;
void* __right_value1249 = (void*)0;
char* __list_values30___1210[2];
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
struct list$1charph* param_names_1211;
void* __right_value1252 = (void*)0;
void* __right_value1253 = (void*)0;
struct list$1charph* param_default_parametors_1212;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct buffer* header_buf_1213;
void* __right_value1256 = (void*)0;
int i_1214;
void* __right_value1257 = (void*)0;
struct sType* param_type_1215;
void* __right_value1258 = (void*)0;
char* param_name_1216;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct sFun* fun2_1217;
void* __right_value1262 = (void*)0;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
void* __right_value1266 = (void*)0;
void* __right_value1267 = (void*)0;
struct sFun* fun_1218;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1271 = (void*)0;
struct sNode* node_1219;
_Bool Value_1220;
struct buffer* __dec_obj324;
char* __dec_obj325;
char* __dec_obj326;
char* __dec_obj327;
void* __right_value1272 = (void*)0;
void* __right_value1273 = (void*)0;
struct tuple2$2sFunpcharph* __result422__;
    last_code_1181=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj320=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1182=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj321=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj321 = come_decrement_ref_count2(__dec_obj321, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1183=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1184=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1185=((void*)0);
    real_fun_name_1186=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1187=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1187;
    klass_1188=type->mClass;
    if(    type->mPointerNum>0&&!klass_1188->mNumber) {
        source_1189=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3641, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1189,123);
        if(        klass_1188->mProtocol) {
            name_1190="_protocol_obj";
            char source2_1191[1024];
            memset(&source2_1191, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1191,1024,"return left.%s === right.%s;\n",name_1190,name_1190);
            buffer_append_str(source_1189,source2_1191);
        }
        else {
            char source2_1192[1024];
            memset(&source2_1192, 0, sizeof(char)            *(1024)            );
            klass_1188=((struct sClass*)(__right_value1238=map$2charphsClassphp_operator_load_element(info->classes,klass_1188->mName)));
            come_call_finalizer3(__right_value1238,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1193=(struct list$1voidph*)come_increment_ref_count((klass_1188->mFields)),it_1194=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1193)));            !list$1voidphp_end((o2_saved_1193));            it_1194=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1193)))            ){
                multiple_assign_var16=it_1194;
                name_1195=(char*)come_increment_ref_count(multiple_assign_var16->v1);
                field_type_1196=(struct sType*)come_increment_ref_count(multiple_assign_var16->v2);
                char source2_1197[1024];
                memset(&source2_1197, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1197,1024,"if(left.%s !== right.%s) { return false; }\n",name_1195,name_1195,name_1195);
                buffer_append_str(source_1189,source2_1197);
                name_1195 = come_decrement_ref_count2(name_1195, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1196,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1193,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1189,"return true;\n");
        buffer_append_char(source_1189,125);
        p_1198=info->p;
        sline_1199=info->sline;
        sname_1200=(char*)come_increment_ref_count(info->sname);
        head_1201=info->head;
        source3_1202=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj322=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1189);
        come_call_finalizer3(__dec_obj322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=source_1189->buf;
        info->head=source_1189->buf;
        __dec_obj323=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1186));
        __dec_obj323 = come_decrement_ref_count2(__dec_obj323, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1203=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1204=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3683, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"bool",(_Bool)0,info));
        name_1205=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1186));
        left_type_1206=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1206->mHeap=(_Bool)0;
        right_type_1207=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1207->mHeap=(_Bool)0;
        param_types_1208=(struct list$1sTypeph*)come_increment_ref_count((__list_values29___1209[0]=(struct sType*)come_increment_ref_count(left_type_1206),
__list_values29___1209[1]=(struct sType*)come_increment_ref_count(right_type_1207),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3689, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),2,__list_values29___1209)));
        param_names_1211=(struct list$1charph*)come_increment_ref_count((__list_values30___1210[0]=(char*)come_increment_ref_count(((char*)(__right_value1248=__builtin_string("left")))),
__list_values30___1210[1]=(char*)come_increment_ref_count(((char*)(__right_value1249=__builtin_string("right")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3690, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values30___1210)));
        __right_value1248 = come_decrement_ref_count2(__right_value1248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value1249 = come_decrement_ref_count2(__right_value1249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1212=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3691, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1212,((void*)0));
        list$1charphp_push_back(param_default_parametors_1212,((void*)0));
        header_buf_1213=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3695, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1213,((char*)(__right_value1256=make_come_type_name_string(result_type_1204,info))));
        __right_value1256 = come_decrement_ref_count2(__right_value1256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1213," ");
        buffer_append_str(header_buf_1213,real_fun_name_1186);
        buffer_append_str(header_buf_1213,"(");
        for(        i_1214=0;        i_1214<list$1voidphp_length(param_types_1208);        i_1214++        ){
            param_type_1215=((struct sType*)((void*)(__right_value1257=list$1voidphp_operator_load_element(param_types_1208,i_1214))));
            come_call_finalizer3(__right_value1257,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1216=((char*)(__right_value1258=list$1charphp_operator_load_element(param_names_1211,i_1214)));
            __right_value1258 = come_decrement_ref_count2(__right_value1258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1213,((char*)(__right_value1259=make_come_type_name_string(param_type_1215,info))));
            __right_value1259 = come_decrement_ref_count2(__right_value1259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1213," ");
            buffer_append_str(header_buf_1213,param_name_1216);
            if(            i_1214!=list$1voidphp_length(param_types_1208)-1) {
                buffer_append_str(header_buf_1213,",");
            }
        }
        buffer_append_str(header_buf_1213,")");
        result_type_1204->mStatic=(_Bool)0;
        result_type_1204->mUniq=(_Bool)0;
        result_type_1204->mInline=(_Bool)0;
        result_type_1204->mGenerate=(_Bool)0;
        fun2_1217=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1260=__builtin_string(name_1205)))));
        __right_value1260 = come_decrement_ref_count2(__right_value1260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1217==((void*)0)||fun2_1217->mExternal) {
            fun_1218=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3723, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1205),(struct sType*)come_increment_ref_count(result_type_1204),(struct list$1voidph*)come_increment_ref_count(param_types_1208),(struct list$1charph*)come_increment_ref_count(param_names_1211),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1212),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1203),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1213)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1205)),(struct sFun*)come_increment_ref_count(fun_1218));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3733, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1270=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3733, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1218),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1219=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1270,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1220=node_compile(node_1219,info);
            if(            !Value_1220) {
                err_msg(info,"compiling error(X)");
                exit(2);
            }
            else {
            }
            equaler_1185=fun_1218;
            come_call_finalizer3(fun_1218,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1219) { node_1219 = come_decrement_ref_count2(node_1219, ((struct sNode*)node_1219)->finalize, ((struct sNode*)node_1219)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            equaler_1185=fun2_1217;
        }
        __dec_obj324=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1202);
        come_call_finalizer3(__dec_obj324,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1198;
        info->head=head_1201;
        info->sline=sline_1199;
        __dec_obj325=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1200);
        __dec_obj325 = come_decrement_ref_count2(__dec_obj325, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1200 = come_decrement_ref_count2(sname_1200, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1202,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1203,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1204,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1205 = come_decrement_ref_count2(name_1205, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(left_type_1206,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1207,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1208,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1211,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1212,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1213,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1217,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1184;
    __dec_obj326=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1181);
    __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj327=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1182);
    __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1183;
    __result422__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1273=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3759, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),equaler_1185,(char*)come_increment_ref_count(real_fun_name_1186))));
    last_code_1181 = come_decrement_ref_count2(last_code_1181, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1182 = come_decrement_ref_count2(last_code2_1182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1186 = come_decrement_ref_count2(real_fun_name_1186, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1187,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1273,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result422__;
}

struct tuple2$2sFunpcharph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct tuple2$2sFunpcharph* __result423__;
char* last_code_1221;
char* __dec_obj328;
char* last_code2_1222;
char* __dec_obj329;
_Bool comma_instead_of_semicolon_1223;
struct sClass* current_stack_frame_struct_1224;
struct sFun* cloner_1225;
void* __right_value1276 = (void*)0;
char* real_fun_name_1226;
void* __right_value1277 = (void*)0;
struct sType* type2_1227;
struct sClass* klass_1228;
char* fun_name2_1229;
void* __right_value1278 = (void*)0;
char* none_generics_name_1230;
void* __right_value1279 = (void*)0;
struct sType* obj_type_1231;
void* __right_value1280 = (void*)0;
char* __dec_obj330;
void* __right_value1281 = (void*)0;
char* fun_name3_1232;
void* __right_value1282 = (void*)0;
struct sGenericsFun* generics_fun_1233;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var17 = (void*)0;
char* name_1234=0;
_Bool err_1235=0;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct tuple2$2sFunpcharph* __result424__;
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
char* __dec_obj331;
void* __right_value1289 = (void*)0;
char* __dec_obj332;
int i_1236;
void* __right_value1290 = (void*)0;
char* new_fun_name_1237;
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
char* __dec_obj333;
void* __right_value1293 = (void*)0;
char* __dec_obj334;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
struct buffer* source_1238;
void* __right_value1296 = (void*)0;
char* name_1239;
void* __right_value1297 = (void*)0;
struct list$1voidph* o2_saved_1241;
struct tuple2$2charphsTypeph* it_1242;
struct tuple2$2charphsTypeph* multiple_assign_var18 = (void*)0;
char* name_1243=0;
struct sType* field_type_1244=0;
void* __right_value1298 = (void*)0;
struct list$1voidph* o2_saved_1247;
struct tuple2$2charphsTypeph* it_1248;
struct tuple2$2charphsTypeph* multiple_assign_var19 = (void*)0;
char* name_1249=0;
struct sType* field_type_1250=0;
char* p_1254;
int sline_1255;
char* sname_1256;
struct buffer* source3_1257;
char* head_1258;
struct buffer* __dec_obj335;
void* __right_value1299 = (void*)0;
char* __dec_obj336;
void* __right_value1300 = (void*)0;
struct sBlock* block_1259;
void* __right_value1301 = (void*)0;
struct sType* result_type_1260;
void* __right_value1302 = (void*)0;
char* name_1261;
void* __right_value1303 = (void*)0;
struct sType* self_type_1262;
struct sType* __list_values31___1264[1];
void* __right_value1304 = (void*)0;
void* __right_value1305 = (void*)0;
struct list$1voidph* param_types_1263;
void* __right_value1306 = (void*)0;
char* __list_values32___1265[1];
void* __right_value1307 = (void*)0;
void* __right_value1308 = (void*)0;
struct list$1charph* param_names_1266;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct list$1charph* param_default_parametors_1267;
void* __right_value1311 = (void*)0;
void* __right_value1312 = (void*)0;
struct buffer* header_buf_1268;
void* __right_value1313 = (void*)0;
int i_1269;
void* __right_value1314 = (void*)0;
struct sType* param_type_1270;
void* __right_value1315 = (void*)0;
char* param_name_1271;
void* __right_value1316 = (void*)0;
void* __right_value1317 = (void*)0;
void* __right_value1318 = (void*)0;
struct sFun* fun2_1272;
void* __right_value1319 = (void*)0;
void* __right_value1320 = (void*)0;
void* __right_value1321 = (void*)0;
void* __right_value1322 = (void*)0;
void* __right_value1323 = (void*)0;
void* __right_value1324 = (void*)0;
struct sFun* fun_1273;
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
void* __right_value1327 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1328 = (void*)0;
struct sNode* node_1274;
_Bool Value_1275;
char* __dec_obj337;
struct buffer* __dec_obj338;
char* __dec_obj339;
char* __dec_obj340;
void* __right_value1329 = (void*)0;
void* __right_value1330 = (void*)0;
struct tuple2$2sFunpcharph* __result425__;
fun_name2_1229 = (void*)0;
memset(&i_1236, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result423__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1275=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3765, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
        come_call_finalizer3(__right_value1275,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result423__;
    }
    last_code_1221=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj328=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1222=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj329=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1223=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1224=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1225=((void*)0);
    real_fun_name_1226=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1227=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1227;
    klass_1228=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_1230=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1231=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj330=fun_name2_1229;
        fun_name2_1229=(char*)come_increment_ref_count(create_method_name(obj_type_1231,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj330 = come_decrement_ref_count2(__dec_obj330, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1232=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1230,fun_name));
        generics_fun_1233=((struct sGenericsFun*)(__right_value1282=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_1232,((void*)0))));
        come_call_finalizer3(__right_value1282,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_1233) {
            multiple_assign_var17=((struct tuple2$2charphbool*)(__right_value1284=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1229)),generics_fun_1233,obj_type_1231,info)));
            name_1234=(char*)come_increment_ref_count(multiple_assign_var17->v1);
            err_1235=multiple_assign_var17->v2;
            come_call_finalizer3(__right_value1284,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_1235) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result424__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1286=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3805, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)))));
                    name_1234 = come_decrement_ref_count2(name_1234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    none_generics_name_1230 = come_decrement_ref_count2(none_generics_name_1230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(obj_type_1231,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name3_1232 = come_decrement_ref_count2(fun_name3_1232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code_1221 = come_decrement_ref_count2(last_code_1221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    last_code2_1222 = come_decrement_ref_count2(last_code2_1222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    real_fun_name_1226 = come_decrement_ref_count2(real_fun_name_1226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type2_1227,sType_finalize, 0, 0, 0, 0, (void*)0);
                    fun_name2_1229 = come_decrement_ref_count2(fun_name2_1229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value1286,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result424__;
                }
            }
            cloner_1225=((struct sFun*)(__right_value1287=map$2charphsFunphp_operator_load_element(info->funcs,name_1234)));
            come_call_finalizer3(__right_value1287,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            name_1234 = come_decrement_ref_count2(name_1234, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_1225=((struct sFun*)(__right_value1288=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1229)));
            come_call_finalizer3(__right_value1288,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj331=real_fun_name_1226;
        real_fun_name_1226=(char*)come_increment_ref_count(fun_name2_1229);
        __dec_obj331 = come_decrement_ref_count2(__dec_obj331, (void*)0, (void*)0, 0,0,0, (void*)0);
        none_generics_name_1230 = come_decrement_ref_count2(none_generics_name_1230, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_1231,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_1232 = come_decrement_ref_count2(fun_name3_1232, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj332=fun_name2_1229;
        fun_name2_1229=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1236=128-1;        i_1236>=1;        i_1236--        ){
            new_fun_name_1237=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1229,i_1236));
            cloner_1225=((struct sFun*)(__right_value1291=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1237)));
            come_call_finalizer3(__right_value1291,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_1225) {
                __dec_obj333=fun_name2_1229;
                fun_name2_1229=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1237));
                __dec_obj333 = come_decrement_ref_count2(__dec_obj333, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1237 = come_decrement_ref_count2(new_fun_name_1237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1237 = come_decrement_ref_count2(new_fun_name_1237, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_1225==((void*)0)) {
            cloner_1225=((struct sFun*)(__right_value1293=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_1229)));
            come_call_finalizer3(__right_value1293,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        __dec_obj334=real_fun_name_1226;
        real_fun_name_1226=(char*)come_increment_ref_count(fun_name2_1229);
        __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1225==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1238=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3840, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1238,"{\n");
        buffer_append_str(source_1238,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1238,"var result = new %s~;\n",((char*)(__right_value1296=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        __right_value1296 = come_decrement_ref_count2(__right_value1296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        klass_1228->mProtocol) {
            name_1239="_protocol_obj";
            char source2_1240[1024];
            memset(&source2_1240, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1240,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1238,source2_1240);
            klass_1228=((struct sClass*)(__right_value1297=map$2charphsClassphp_operator_load_element(info->classes,klass_1228->mName)));
            come_call_finalizer3(__right_value1297,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1241=(struct list$1voidph*)come_increment_ref_count((klass_1228->mFields)),it_1242=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1241)));            !list$1voidphp_end((o2_saved_1241));            it_1242=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1241)))            ){
                multiple_assign_var18=it_1242;
                name_1243=(char*)come_increment_ref_count(multiple_assign_var18->v1);
                field_type_1244=(struct sType*)come_increment_ref_count(multiple_assign_var18->v2);
                if(                string_operator_equals(name_1243,"_protocol_obj")) {
                }
                else if(                list$1sNodephp_length(field_type_1244->mArrayNum)>0) {
                    char source2_1245[1024];
                    memset(&source2_1245, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1245,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1243,name_1243,name_1243);
                    buffer_append_str(source_1238,source2_1245);
                }
                else {
                    char source2_1246[1024];
                    memset(&source2_1246, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1246,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1243,name_1243);
                    buffer_append_str(source_1238,source2_1246);
                }
                name_1243 = come_decrement_ref_count2(name_1243, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1244,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1241,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1228=((struct sClass*)(__right_value1298=map$2charphsClassphp_operator_load_element(info->classes,klass_1228->mName)));
            come_call_finalizer3(__right_value1298,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            for(            o2_saved_1247=(struct list$1voidph*)come_increment_ref_count((klass_1228->mFields)),it_1248=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1247)));            !list$1voidphp_end((o2_saved_1247));            it_1248=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1247)))            ){
                multiple_assign_var19=it_1248;
                name_1249=(char*)come_increment_ref_count(multiple_assign_var19->v1);
                field_type_1250=(struct sType*)come_increment_ref_count(multiple_assign_var19->v2);
                if(                field_type_1250->mHeap) {
                    char source2_1251[1024];
                    memset(&source2_1251, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1251,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1249,name_1249,name_1249);
                    buffer_append_str(source_1238,source2_1251);
                }
                else if(                list$1sNodephp_length(field_type_1250->mArrayNum)>0) {
                    char source2_1252[1024];
                    memset(&source2_1252, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1252,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1249,name_1249,name_1249);
                    buffer_append_str(source_1238,source2_1252);
                }
                else {
                    char source2_1253[1024];
                    memset(&source2_1253, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1253,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1249,name_1249);
                    buffer_append_str(source_1238,source2_1253);
                }
                name_1249 = come_decrement_ref_count2(name_1249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(field_type_1250,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1247,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_format(source_1238,"return result;");
        buffer_append_char(source_1238,125);
        p_1254=info->p;
        sline_1255=info->sline;
        sname_1256=(char*)come_increment_ref_count(info->sname);
        source3_1257=(struct buffer*)come_increment_ref_count(info->source);
        head_1258=info->head;
        __dec_obj335=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1238);
        come_call_finalizer3(__dec_obj335,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj336=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1226));
        __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1259=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1260=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1261=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1226));
        self_type_1262=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1262->mHeap=(_Bool)0;
        param_types_1263=(struct list$1sTypeph*)come_increment_ref_count((__list_values31___1264[0]=(struct sType*)come_increment_ref_count(self_type_1262),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 3921, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values31___1264)));
        param_names_1266=(struct list$1charph*)come_increment_ref_count((__list_values32___1265[0]=(char*)come_increment_ref_count(((char*)(__right_value1306=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3922, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values32___1265)));
        __right_value1306 = come_decrement_ref_count2(__right_value1306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1267=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 3923, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1267,((void*)0));
        header_buf_1268=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3926, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1268,((char*)(__right_value1313=make_come_type_name_string(result_type_1260,info))));
        __right_value1313 = come_decrement_ref_count2(__right_value1313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1268," ");
        buffer_append_str(header_buf_1268,real_fun_name_1226);
        buffer_append_str(header_buf_1268,"(");
        for(        i_1269=0;        i_1269<list$1voidphp_length(param_types_1263);        i_1269++        ){
            param_type_1270=((struct sType*)((void*)(__right_value1314=list$1voidphp_operator_load_element(param_types_1263,i_1269))));
            come_call_finalizer3(__right_value1314,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1271=((char*)(__right_value1315=list$1charphp_operator_load_element(param_names_1266,i_1269)));
            __right_value1315 = come_decrement_ref_count2(__right_value1315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1268,((char*)(__right_value1316=make_come_type_name_string(param_type_1270,info))));
            __right_value1316 = come_decrement_ref_count2(__right_value1316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1268," ");
            buffer_append_str(header_buf_1268,param_name_1271);
            if(            i_1269!=list$1voidphp_length(param_types_1263)-1) {
                buffer_append_str(header_buf_1268,",");
            }
        }
        buffer_append_str(header_buf_1268,")");
        result_type_1260->mStatic=(_Bool)0;
        result_type_1260->mUniq=(_Bool)0;
        result_type_1260->mInline=(_Bool)0;
        result_type_1260->mGenerate=(_Bool)0;
        fun2_1272=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1317=__builtin_string(name_1261)))));
        __right_value1317 = come_decrement_ref_count2(__right_value1317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1272==((void*)0)||fun2_1272->mExternal) {
            fun_1273=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3955, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1261),(struct sType*)come_increment_ref_count(result_type_1260),(struct list$1voidph*)come_increment_ref_count(param_types_1263),(struct list$1charph*)come_increment_ref_count(param_names_1266),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1267),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1259),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1268)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1273->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1261)),(struct sFun*)come_increment_ref_count(fun_1273));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3967, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1327=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3967, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1273),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1274=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1327,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1275=node_compile(node_1274,info);
            if(            !Value_1275) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            cloner_1225=fun_1273;
            come_call_finalizer3(fun_1273,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1274) { node_1274 = come_decrement_ref_count2(node_1274, ((struct sNode*)node_1274)->finalize, ((struct sNode*)node_1274)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1225=fun2_1272;
        }
        __dec_obj337=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1256);
        __dec_obj337 = come_decrement_ref_count2(__dec_obj337, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1255;
        __dec_obj338=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1257);
        come_call_finalizer3(__dec_obj338,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1254;
        info->head=head_1258;
        info->sline=sline_1255;
        come_call_finalizer3(source_1238,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1256 = come_decrement_ref_count2(sname_1256, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1257,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1259,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1260,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1261 = come_decrement_ref_count2(name_1261, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1262,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1263,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1266,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1267,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1268,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1272,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1224;
    __dec_obj339=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1221);
    __dec_obj339 = come_decrement_ref_count2(__dec_obj339, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj340=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1222);
    __dec_obj340 = come_decrement_ref_count2(__dec_obj340, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1223;
    __result425__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1330=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 3995, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1225,(char*)come_increment_ref_count(real_fun_name_1226))));
    last_code_1221 = come_decrement_ref_count2(last_code_1221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1222 = come_decrement_ref_count2(last_code2_1222, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1226 = come_decrement_ref_count2(real_fun_name_1226, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1227,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_1229 = come_decrement_ref_count2(fun_name2_1229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1330,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result425__;
}

struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1276;
char* __dec_obj341;
char* last_code2_1277;
char* __dec_obj342;
_Bool comma_instead_of_semicolon_1278;
struct sClass* current_stack_frame_struct_1279;
struct sFun* cloner_1280;
void* __right_value1331 = (void*)0;
char* real_fun_name_1281;
void* __right_value1332 = (void*)0;
struct sType* type2_1282;
struct sClass* klass_1283;
void* __right_value1333 = (void*)0;
void* __right_value1334 = (void*)0;
struct buffer* source_1284;
int i_1285;
void* __right_value1335 = (void*)0;
struct list$1voidph* o2_saved_1286;
struct tuple2$2charphsTypeph* it_1287;
struct tuple2$2charphsTypeph* multiple_assign_var20 = (void*)0;
char* name_1288=0;
struct sType* field_type_1289=0;
char* p_1292;
int sline_1293;
char* sname_1294;
struct buffer* source3_1295;
char* head_1296;
struct buffer* __dec_obj343;
void* __right_value1336 = (void*)0;
char* __dec_obj344;
void* __right_value1337 = (void*)0;
struct sBlock* block_1297;
void* __right_value1338 = (void*)0;
void* __right_value1339 = (void*)0;
struct sType* result_type_1298;
void* __right_value1340 = (void*)0;
char* name_1299;
void* __right_value1341 = (void*)0;
struct sType* self_type_1300;
struct sType* __list_values33___1302[1];
void* __right_value1342 = (void*)0;
void* __right_value1343 = (void*)0;
struct list$1voidph* param_types_1301;
void* __right_value1344 = (void*)0;
char* __list_values34___1303[1];
void* __right_value1345 = (void*)0;
void* __right_value1346 = (void*)0;
struct list$1charph* param_names_1304;
void* __right_value1347 = (void*)0;
void* __right_value1348 = (void*)0;
struct list$1charph* param_default_parametors_1305;
void* __right_value1349 = (void*)0;
void* __right_value1350 = (void*)0;
struct buffer* header_buf_1306;
void* __right_value1351 = (void*)0;
int i_1307;
void* __right_value1352 = (void*)0;
struct sType* param_type_1308;
void* __right_value1353 = (void*)0;
char* param_name_1309;
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
void* __right_value1356 = (void*)0;
struct sFun* fun2_1310;
void* __right_value1357 = (void*)0;
void* __right_value1358 = (void*)0;
void* __right_value1359 = (void*)0;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
void* __right_value1362 = (void*)0;
struct sFun* fun_1311;
void* __right_value1363 = (void*)0;
void* __right_value1364 = (void*)0;
void* __right_value1365 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1366 = (void*)0;
struct sNode* node_1312;
_Bool Value_1313;
char* __dec_obj345;
struct buffer* __dec_obj346;
char* __dec_obj347;
char* __dec_obj348;
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
struct tuple2$2sFunpcharph* __result426__;
    last_code_1276=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj341=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj341 = come_decrement_ref_count2(__dec_obj341, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1277=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj342=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1278=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1279=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1280=((void*)0);
    real_fun_name_1281=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1282=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1282;
    klass_1283=type->mClass;
    if(    type->mPointerNum>0&&!klass_1283->mNumber) {
        source_1284=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4020, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1284,"{\n");
        buffer_append_str(source_1284,"var result = new buffer();\n");
        buffer_append_format(source_1284,"result.append_str(\"%s {\");\n",klass_1283->mName);
        i_1285=0;
        klass_1283=((struct sClass*)(__right_value1335=map$2charphsClassphp_operator_load_element(info->classes,klass_1283->mName)));
        come_call_finalizer3(__right_value1335,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1286=(struct list$1voidph*)come_increment_ref_count((klass_1283->mFields)),it_1287=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1286)));        !list$1voidphp_end((o2_saved_1286));        it_1287=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1286)))        ){
            multiple_assign_var20=it_1287;
            name_1288=(char*)come_increment_ref_count(multiple_assign_var20->v1);
            field_type_1289=(struct sType*)come_increment_ref_count(multiple_assign_var20->v2);
            if(            i_1285==list$1voidphp_length(klass_1283->mFields)-1) {
                char source2_1290[1024];
                memset(&source2_1290, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1290,1024,"result.append_str(\"%s:\");\n",name_1288);
                buffer_append_str(source_1284,source2_1290);
                snprintf(source2_1290,1024,"result.append_str(self.%s.to_string());\n",name_1288);
                buffer_append_str(source_1284,source2_1290);
            }
            else {
                char source2_1291[1024];
                memset(&source2_1291, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1291,1024,"result.append_str(\"%s:\");\n",name_1288);
                buffer_append_str(source_1284,source2_1291);
                snprintf(source2_1291,1024,"result.append_str(self.%s.to_string());\n",name_1288);
                buffer_append_str(source_1284,source2_1291);
                snprintf(source2_1291,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1284,source2_1291);
            }
            i_1285++;
            name_1288 = come_decrement_ref_count2(name_1288, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1289,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1286,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1284,"result.append_str(\"}\");\n");
        buffer_append_format(source_1284,"return result.to_string();\n");
        buffer_append_char(source_1284,125);
        p_1292=info->p;
        sline_1293=info->sline;
        sname_1294=(char*)come_increment_ref_count(info->sname);
        source3_1295=(struct buffer*)come_increment_ref_count(info->source);
        head_1296=info->head;
        __dec_obj343=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1284);
        come_call_finalizer3(__dec_obj343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj344=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1281));
        __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1297=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1298=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4081, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info));
        result_type_1298->mHeap=(_Bool)1;
        name_1299=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1281));
        self_type_1300=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1300->mHeap=(_Bool)0;
        param_types_1301=(struct list$1sTypeph*)come_increment_ref_count((__list_values33___1302[0]=(struct sType*)come_increment_ref_count(self_type_1300),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4086, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values33___1302)));
        param_names_1304=(struct list$1charph*)come_increment_ref_count((__list_values34___1303[0]=(char*)come_increment_ref_count(((char*)(__right_value1344=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4087, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values34___1303)));
        __right_value1344 = come_decrement_ref_count2(__right_value1344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1305=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4088, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1305,((void*)0));
        header_buf_1306=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4091, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1306,((char*)(__right_value1351=make_come_type_name_string(result_type_1298,info))));
        __right_value1351 = come_decrement_ref_count2(__right_value1351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1306," ");
        buffer_append_str(header_buf_1306,real_fun_name_1281);
        buffer_append_str(header_buf_1306,"(");
        for(        i_1307=0;        i_1307<list$1voidphp_length(param_types_1301);        i_1307++        ){
            param_type_1308=((struct sType*)((void*)(__right_value1352=list$1voidphp_operator_load_element(param_types_1301,i_1307))));
            come_call_finalizer3(__right_value1352,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1309=((char*)(__right_value1353=list$1charphp_operator_load_element(param_names_1304,i_1307)));
            __right_value1353 = come_decrement_ref_count2(__right_value1353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1306,((char*)(__right_value1354=make_come_type_name_string(param_type_1308,info))));
            __right_value1354 = come_decrement_ref_count2(__right_value1354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1306," ");
            buffer_append_str(header_buf_1306,param_name_1309);
            if(            i_1307!=list$1voidphp_length(param_types_1301)-1) {
                buffer_append_str(header_buf_1306,",");
            }
        }
        buffer_append_str(header_buf_1306,")");
        result_type_1298->mStatic=(_Bool)0;
        result_type_1298->mUniq=(_Bool)0;
        result_type_1298->mInline=(_Bool)0;
        result_type_1298->mGenerate=(_Bool)0;
        fun2_1310=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1355=__builtin_string(name_1299)))));
        __right_value1355 = come_decrement_ref_count2(__right_value1355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1310==((void*)0)||fun2_1310->mExternal) {
            fun_1311=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4119, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1299),(struct sType*)come_increment_ref_count(result_type_1298),(struct list$1voidph*)come_increment_ref_count(param_types_1301),(struct list$1charph*)come_increment_ref_count(param_names_1304),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1305),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1297),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1306)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1311->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1299)),(struct sFun*)come_increment_ref_count(fun_1311));
            cloner_1280=fun_1311;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4133, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1365=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4133, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1311),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1312=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1365,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1313=node_compile(node_1312,info);
            if(            !Value_1313) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1311,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1312) { node_1312 = come_decrement_ref_count2(node_1312, ((struct sNode*)node_1312)->finalize, ((struct sNode*)node_1312)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            cloner_1280=fun2_1310;
        }
        __dec_obj345=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1294);
        __dec_obj345 = come_decrement_ref_count2(__dec_obj345, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1293;
        __dec_obj346=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1295);
        come_call_finalizer3(__dec_obj346,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1292;
        info->head=head_1296;
        info->sline=sline_1293;
        come_call_finalizer3(source_1284,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1294 = come_decrement_ref_count2(sname_1294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1295,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1297,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1298,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1299 = come_decrement_ref_count2(name_1299, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1300,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1301,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1304,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1305,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1306,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1310,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1279;
    __dec_obj347=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1276);
    __dec_obj347 = come_decrement_ref_count2(__dec_obj347, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj348=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1277);
    __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1278;
    __result426__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1368=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4159, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),cloner_1280,(char*)come_increment_ref_count(real_fun_name_1281))));
    last_code_1276 = come_decrement_ref_count2(last_code_1276, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1277 = come_decrement_ref_count2(last_code2_1277, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1281 = come_decrement_ref_count2(real_fun_name_1281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1282,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1368,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result426__;
}

struct tuple2$2sFunpcharph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __result_obj__=(void*)0;
char* last_code_1361;
char* __dec_obj359;
char* last_code2_1362;
char* __dec_obj360;
_Bool comma_instead_of_semicolon_1363;
struct sClass* current_stack_frame_struct_1364;
struct sFun* get_hash_key_fun_1365;
void* __right_value1419 = (void*)0;
char* real_fun_name_1366;
void* __right_value1420 = (void*)0;
struct sType* type2_1367;
struct sClass* klass_1368;
void* __right_value1421 = (void*)0;
void* __right_value1422 = (void*)0;
char* none_generics_name_1369;
void* __right_value1423 = (void*)0;
char* generics_fun_name_1370;
void* __right_value1424 = (void*)0;
struct sGenericsFun* generics_fun_1371;
void* __right_value1425 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var23 = (void*)0;
char* name_1372=0;
_Bool err_1373=0;
void* __right_value1426 = (void*)0;
int i_1374;
void* __right_value1427 = (void*)0;
char* new_fun_name_1375;
void* __right_value1428 = (void*)0;
void* __right_value1429 = (void*)0;
char* __dec_obj361;
void* __right_value1430 = (void*)0;
void* __right_value1431 = (void*)0;
void* __right_value1432 = (void*)0;
struct buffer* source_1376;
int i_1377;
void* __right_value1433 = (void*)0;
struct list$1voidph* o2_saved_1378;
struct tuple2$2charphsTypeph* it_1379;
struct tuple2$2charphsTypeph* multiple_assign_var24 = (void*)0;
char* name_1380=0;
struct sType* field_type_1381=0;
char* p_1383;
int sline_1384;
char* sname_1385;
struct buffer* source3_1386;
char* head_1387;
struct buffer* __dec_obj362;
void* __right_value1434 = (void*)0;
char* __dec_obj363;
void* __right_value1435 = (void*)0;
struct sBlock* block_1388;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
struct sType* result_type_1389;
void* __right_value1438 = (void*)0;
char* name_1390;
void* __right_value1439 = (void*)0;
struct sType* self_type_1391;
struct sType* __list_values37___1393[1];
void* __right_value1440 = (void*)0;
void* __right_value1441 = (void*)0;
struct list$1voidph* param_types_1392;
void* __right_value1442 = (void*)0;
char* __list_values38___1394[1];
void* __right_value1443 = (void*)0;
void* __right_value1444 = (void*)0;
struct list$1charph* param_names_1395;
void* __right_value1445 = (void*)0;
void* __right_value1446 = (void*)0;
struct list$1charph* param_default_parametors_1396;
void* __right_value1447 = (void*)0;
void* __right_value1448 = (void*)0;
struct buffer* header_buf_1397;
void* __right_value1449 = (void*)0;
int i_1398;
void* __right_value1450 = (void*)0;
struct sType* param_type_1399;
void* __right_value1451 = (void*)0;
char* param_name_1400;
void* __right_value1452 = (void*)0;
void* __right_value1453 = (void*)0;
void* __right_value1454 = (void*)0;
struct sFun* fun2_1401;
void* __right_value1455 = (void*)0;
void* __right_value1456 = (void*)0;
void* __right_value1457 = (void*)0;
void* __right_value1458 = (void*)0;
void* __right_value1459 = (void*)0;
void* __right_value1460 = (void*)0;
struct sFun* fun_1402;
void* __right_value1461 = (void*)0;
void* __right_value1462 = (void*)0;
void* __right_value1463 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1464 = (void*)0;
struct sNode* node_1403;
_Bool Value_1404;
char* __dec_obj364;
struct buffer* __dec_obj365;
char* __dec_obj366;
char* __dec_obj367;
void* __right_value1465 = (void*)0;
void* __right_value1466 = (void*)0;
struct tuple2$2sFunpcharph* __result428__;
memset(&i_1374, 0, sizeof(int));
    last_code_1361=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj359=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj359 = come_decrement_ref_count2(__dec_obj359, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1362=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj360=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj360 = come_decrement_ref_count2(__dec_obj360, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1363=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1364=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1365=((void*)0);
    real_fun_name_1366=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1367=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1367;
    klass_1368=type->mClass;
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1365=((struct sFun*)(__right_value1421=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1366)));
        come_call_finalizer3(__right_value1421,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        get_hash_key_fun_1365==((void*)0)) {
            none_generics_name_1369=(char*)come_increment_ref_count(get_none_generics_name(type2_1367->mClass->mName));
            generics_fun_name_1370=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1369,fun_name));
            generics_fun_1371=((struct sGenericsFun*)(__right_value1424=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_1370)));
            come_call_finalizer3(__right_value1424,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            generics_fun_1371) {
                multiple_assign_var23=((struct tuple2$2charphbool*)(__right_value1425=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1366),generics_fun_1371,type,info)));
                name_1372=(char*)come_increment_ref_count(multiple_assign_var23->v1);
                err_1373=multiple_assign_var23->v2;
                come_call_finalizer3(__right_value1425,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_1373) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1365=((struct sFun*)(__right_value1426=map$2charphsFunphp_operator_load_element(info->funcs,name_1372)));
                come_call_finalizer3(__right_value1426,sFun_finalize, 0, 1, 0, 0, __result_obj__);
                name_1372 = come_decrement_ref_count2(name_1372, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            none_generics_name_1369 = come_decrement_ref_count2(none_generics_name_1369, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            generics_fun_name_1370 = come_decrement_ref_count2(generics_fun_name_1370, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else {
        for(        i_1374=128-1;        i_1374>=1;        i_1374--        ){
            new_fun_name_1375=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1366,i_1374));
            get_hash_key_fun_1365=((struct sFun*)(__right_value1428=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_1375)));
            come_call_finalizer3(__right_value1428,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            get_hash_key_fun_1365) {
                __dec_obj361=real_fun_name_1366;
                real_fun_name_1366=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1375));
                __dec_obj361 = come_decrement_ref_count2(__dec_obj361, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_1375 = come_decrement_ref_count2(new_fun_name_1375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_1375 = come_decrement_ref_count2(new_fun_name_1375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        get_hash_key_fun_1365==((void*)0)) {
            get_hash_key_fun_1365=((struct sFun*)(__right_value1430=map$2charphsFunphp_operator_load_element(info->funcs,real_fun_name_1366)));
            come_call_finalizer3(__right_value1430,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    get_hash_key_fun_1365==((void*)0)&&type->mPointerNum>0&&!klass_1368->mNumber&&!klass_1368->mProtocol) {
        source_1376=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4447, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1376,"{\n");
        buffer_append_str(source_1376,"unsigned int result = 0;\n");
        i_1377=0;
        klass_1368=((struct sClass*)(__right_value1433=map$2charphsClassphp_operator_load_element(info->classes,klass_1368->mName)));
        come_call_finalizer3(__right_value1433,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        for(        o2_saved_1378=(struct list$1voidph*)come_increment_ref_count((klass_1368->mFields)),it_1379=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_1378)));        !list$1voidphp_end((o2_saved_1378));        it_1379=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_1378)))        ){
            multiple_assign_var24=it_1379;
            name_1380=(char*)come_increment_ref_count(multiple_assign_var24->v1);
            field_type_1381=(struct sType*)come_increment_ref_count(multiple_assign_var24->v2);
            char source2_1382[1024];
            memset(&source2_1382, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1382,1024,"result += ((int)self.%s).get_hash_key();\n",name_1380);
            buffer_append_str(source_1376,source2_1382);
            i_1377++;
            name_1380 = come_decrement_ref_count2(name_1380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(field_type_1381,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1378,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1376,"return result;\n");
        buffer_append_char(source_1376,125);
        p_1383=info->p;
        sline_1384=info->sline;
        sname_1385=(char*)come_increment_ref_count(info->sname);
        source3_1386=(struct buffer*)come_increment_ref_count(info->source);
        head_1387=info->head;
        __dec_obj362=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1376);
        come_call_finalizer3(__dec_obj362,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj363=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1366));
        __dec_obj363 = come_decrement_ref_count2(__dec_obj363, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1388=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1389=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4484, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        result_type_1389->mUnsigned=(_Bool)1;
        name_1390=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1366));
        self_type_1391=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1391->mHeap=(_Bool)0;
        param_types_1392=(struct list$1sTypeph*)come_increment_ref_count((__list_values37___1393[0]=(struct sType*)come_increment_ref_count(self_type_1391),
list$1sTypeph_initialize_with_values((struct list$1sTypeph**)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05function.c", 4489, "struct list$1sTypeph", list$1sTypeph_finalize, list$1sTypeph_clone, list$1sTypeph_get_hash_key, list$1sTypeph_equals)),1,__list_values37___1393)));
        param_names_1395=(struct list$1charph*)come_increment_ref_count((__list_values38___1394[0]=(char*)come_increment_ref_count(((char*)(__right_value1442=__builtin_string("self")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4490, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),1,__list_values38___1394)));
        __right_value1442 = come_decrement_ref_count2(__right_value1442, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        param_default_parametors_1396=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05function.c", 4491, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1charphp_push_back(param_default_parametors_1396,((void*)0));
        header_buf_1397=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4494, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(header_buf_1397,((char*)(__right_value1449=make_come_type_name_string(result_type_1389,info))));
        __right_value1449 = come_decrement_ref_count2(__right_value1449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        buffer_append_str(header_buf_1397," ");
        buffer_append_str(header_buf_1397,real_fun_name_1366);
        buffer_append_str(header_buf_1397,"(");
        for(        i_1398=0;        i_1398<list$1voidphp_length(param_types_1392);        i_1398++        ){
            param_type_1399=((struct sType*)((void*)(__right_value1450=list$1voidphp_operator_load_element(param_types_1392,i_1398))));
            come_call_finalizer3(__right_value1450,(void*)0, 0, 1, 0, 0, __result_obj__);
            param_name_1400=((char*)(__right_value1451=list$1charphp_operator_load_element(param_names_1395,i_1398)));
            __right_value1451 = come_decrement_ref_count2(__right_value1451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1397,((char*)(__right_value1452=make_come_type_name_string(param_type_1399,info))));
            __right_value1452 = come_decrement_ref_count2(__right_value1452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            buffer_append_str(header_buf_1397," ");
            buffer_append_str(header_buf_1397,param_name_1400);
            if(            i_1398!=list$1voidphp_length(param_types_1392)-1) {
                buffer_append_str(header_buf_1397,",");
            }
        }
        buffer_append_str(header_buf_1397,")");
        result_type_1389->mStatic=(_Bool)0;
        result_type_1389->mUniq=(_Bool)0;
        result_type_1389->mInline=(_Bool)0;
        result_type_1389->mGenerate=(_Bool)0;
        fun2_1401=(struct sFun*)come_increment_ref_count(map$2charphsFunphp_operator_load_element(info->funcs,((char*)(__right_value1453=__builtin_string(name_1390)))));
        __right_value1453 = come_decrement_ref_count2(__right_value1453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(        fun2_1401==((void*)0)||fun2_1401->mExternal) {
            fun_1402=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4522, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1390),(struct sType*)come_increment_ref_count(result_type_1389),(struct list$1voidph*)come_increment_ref_count(param_types_1392),(struct list$1charph*)come_increment_ref_count(param_names_1395),(struct list$1charph*)come_increment_ref_count(param_default_parametors_1396),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1388),(_Bool)1,(char*)come_increment_ref_count(buffer_to_string(header_buf_1397)),(char*)come_increment_ref_count(__builtin_string("")),info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            fun_1402->mCloner=(_Bool)1;
            map$2charphsFunphp_insert(info->funcs,(char*)come_increment_ref_count(come_call_cloner(string_clone, name_1390)),(struct sFun*)come_increment_ref_count(fun_1402));
            get_hash_key_fun_1365=fun_1402;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4536, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1463=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4536, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1402),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1403=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1463,sFunNode_finalize, 0, 1, 0, 0, __result_obj__);
            Value_1404=node_compile(node_1403,info);
            if(            !Value_1404) {
                err_msg(info,"compiling error(Y)");
                exit(2);
            }
            else {
            }
            come_call_finalizer3(fun_1402,sFun_finalize, 0, 0, 0, 0, (void*)0);
            if(node_1403) { node_1403 = come_decrement_ref_count2(node_1403, ((struct sNode*)node_1403)->finalize, ((struct sNode*)node_1403)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            get_hash_key_fun_1365=fun2_1401;
        }
        __dec_obj364=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1385);
        __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1384;
        __dec_obj365=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1386);
        come_call_finalizer3(__dec_obj365,buffer_finalize, 0, 0, 0, 0, (void*)0);
        info->p=p_1383;
        info->head=head_1387;
        info->sline=sline_1384;
        come_call_finalizer3(source_1376,buffer_finalize, 0, 0, 0, 0, (void*)0);
        sname_1385 = come_decrement_ref_count2(sname_1385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(source3_1386,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1388,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1389,sType_finalize, 0, 0, 0, 0, (void*)0);
        name_1390 = come_decrement_ref_count2(name_1390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(self_type_1391,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1392,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1395,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1396,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(header_buf_1397,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1401,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1364;
    __dec_obj366=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1361);
    __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj367=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1362);
    __dec_obj367 = come_decrement_ref_count2(__dec_obj367, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1363;
    __result428__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sFunpcharph*)(__right_value1466=tuple2$2sFunpcharph_initialize((struct tuple2$2sFunpcharph**)come_increment_ref_count((struct tuple2$2sFunpcharph*)come_calloc(1, sizeof(struct tuple2$2sFunpcharph)*(1), "05function.c", 4562, "struct tuple2$2sFunpcharph", tuple2$2sFunpcharph_finalize, tuple2$2sFunpcharph_clone, tuple2$2sFunpcharph_get_hash_key, tuple2$2sFunpcharph_equals)),get_hash_key_fun_1365,(char*)come_increment_ref_count(real_fun_name_1366))));
    last_code_1361 = come_decrement_ref_count2(last_code_1361, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    last_code2_1362 = come_decrement_ref_count2(last_code2_1362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    real_fun_name_1366 = come_decrement_ref_count2(real_fun_name_1366, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1367,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1466,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result428__;
}

