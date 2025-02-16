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

int gRightValueNum=0;
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
void free_objects_of_match_lv_tables(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
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
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static int list$1voidphp_length(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self);
static unsigned int sRightValueObject_get_hash_key(struct sRightValueObject* self);
static _Bool sRightValueObject_equals(struct sRightValueObject* left, struct sRightValueObject* right);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1voidph* list$1voidphp_delete(struct list$1voidph* self, int head, int tail);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
_Bool create_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_equals_method(struct sType* type, struct sInfo* info);
_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
struct sVar* get_variable_from_table(struct sVarTable* table, char* name);
static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key);
static void sVar_finalize(struct sVar* self);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self);
static char* map$2charphsVarphp_next(struct map$2charphsVarph* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
void free_objects_on_break(struct sInfo* info);
char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info);
_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block);
_Bool existance_free_right_value_objects(struct sInfo* info);
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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_308;
struct list$1voidph* o2_saved_309;
struct sRightValueObject* it2_312;
char* __dec_obj32;
void* __right_value250 = (void*)0;
char* __dec_obj33;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_308=right_value->right_value_objects;
        for(        o2_saved_309=(struct list$1voidph*)come_increment_ref_count((info->right_value_objects)),it2_312=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_309)));        !list$1voidphp_end((o2_saved_309));        it2_312=((struct sRightValueObject*)list$1voidphp_next((o2_saved_309)))        ){
            if(            it_308->mID==it2_312->mID) {
                it2_312->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer3(o2_saved_309,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj32=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj33=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_310;
void* __result229__;
void* __result230__;
void* result_311;
void* __result231__;
result_310 = (void*)0;
result_311 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_310,0,sizeof(void*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_310;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->it=self->head;
    if(    self->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_311,0,sizeof(void*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_311;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_313;
void* __result232__;
void* __result233__;
void* result_314;
void* __result234__;
result_313 = (void*)0;
result_314 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_313,0,sizeof(void*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_313;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_314,0,sizeof(void*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_314;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_315;
struct list_item$1voidph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        come_call_finalizer3(prev_it_316,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            come_call_finalizer3(__dec_obj31,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value288 = (void*)0;
struct sType* result_317;
struct sType* __result250__;
struct sType* __result251__;
struct sClass* klass_351;
void* __right_value289 = (void*)0;
struct sType* result_type_352;
struct sType* __dec_obj78;
struct list$1voidph* o2_saved_355;
struct sType* it_356;
void* __right_value290 = (void*)0;
struct sType* new_param_type_357;
int generics_number_361;
struct list$1sNodeph* array_num_362;
_Bool immutable__363;
int pointer_num_364;
_Bool heap_365;
_Bool exception__366;
_Bool guard__367;
_Bool no_heap_368;
_Bool no_calling_destructor_369;
_Bool null_value_370;
_Bool generate__371;
_Bool vtable_372;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sType* __dec_obj82;
struct list$1sNodeph* __dec_obj83;
int generics_number_376;
void* __right_value296 = (void*)0;
struct sClass* klass2_377;
int generics_number2_378;
struct list$1sNodeph* array_num_379;
_Bool immutable__380;
int pointer_num_381;
_Bool heap_382;
_Bool guard__383;
_Bool no_heap_384;
_Bool no_calling_destructor_385;
_Bool null_value_386;
_Bool record__387;
_Bool multiple_types_388;
_Bool exception__389;
_Bool generate__390;
_Bool vtable_391;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj84;
struct list$1sNodeph* __dec_obj85;
struct list$1voidph* o2_saved_392;
struct sType* it_393;
void* __right_value299 = (void*)0;
struct sType* type_394;
void* __right_value300 = (void*)0;
char* new_name_395;
struct sType* __result256__;
    result_317=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = result_317;
        come_call_finalizer3(result_317,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    if(    list$1voidphp_length(generics_type->mGenericsTypes)==0) {
        __result251__ = gComeFunResultObject = __result_obj__ = result_317;
        come_call_finalizer3(result_317,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    klass_351=type->mClass;
    if(    string_operator_equals(klass_351->mName,"lambda")) {
        result_type_352=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType,generics_type,info));
        __dec_obj78=result_317->mResultType;
        result_317->mResultType=(struct sType*)come_increment_ref_count(result_type_352);
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1voidphp_reset(result_317->mParamTypes);
        for(        o2_saved_355=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_356=((struct sType*)list$1voidphp_begin((o2_saved_355)));        !list$1voidphp_end((o2_saved_355));        it_356=((struct sType*)list$1voidphp_next((o2_saved_355)))        ){
            new_param_type_357=(struct sType*)come_increment_ref_count(solve_generics(it_356,generics_type,info));
            list$1voidphp_push_back(result_317->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_357));
            come_call_finalizer3(new_param_type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_355,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_352,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_351->mMethodGenerics&&info->method_generics_types&&list$1voidphp_length(info->method_generics_types)>0) {
        generics_number_361=klass_351->mMethodGenericsNum;
        if(        generics_number_361>=list$1voidphp_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_361,list$1voidphp_length(info->method_generics_types));
            exit(2);
        }
        array_num_362=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__363=type->mImmutable;
        pointer_num_364=type->mPointerNum;
        heap_365=type->mHeap;
        exception__366=type->mException;
        guard__367=type->mGuardValue;
        no_heap_368=type->mNoHeap;
        no_calling_destructor_369=type->mNoCallingDestructor;
        null_value_370=type->mNullValue;
        generate__371=type->mGenerate;
        vtable_372=type->mCreateVTable;
        __dec_obj82=result_317;
        result_317=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value294=list$1voidphp_operator_load_element(info->method_generics_types,generics_number_361))))));
        come_call_finalizer3(__dec_obj82,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value294,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        generate__371) {
            result_317->mGenerate=generate__371;
        }
        if(        vtable_372) {
            result_317->mCreateVTable=vtable_372;
        }
        if(        heap_365) {
            result_317->mHeap=heap_365;
        }
        if(        guard__367) {
            result_317->mGuardValue=guard__367;
        }
        if(        no_heap_368) {
            result_317->mNoHeap=(_Bool)1;
            result_317->mHeap=(_Bool)0;
        }
        if(        exception__366) {
            result_317->mException=(_Bool)1;
        }
        if(        no_calling_destructor_369) {
            result_317->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__363) {
            result_317->mImmutable=immutable__363;
        }
        if(        list$1sNodephp_length(array_num_362)>0) {
            __dec_obj83=result_317->mArrayNum;
            result_317->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_362);
            come_call_finalizer3(__dec_obj83,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_370) {
            result_317->mNullValue=null_value_370;
        }
        if(        pointer_num_364>0) {
            result_317->mPointerNum+=pointer_num_364;
        }
        come_call_finalizer3(array_num_362,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_351->mGenerics) {
        generics_number_376=klass_351->mGenericsNum;
        if(        generics_number_376>=list$1voidphp_length(generics_type->mGenericsTypes)) {
            err_msg(info,"invalid generics parametor number");
            exit(2);
        }
        klass2_377=((struct sType*)((void*)(__right_value296=list$1voidphp_operator_load_element(generics_type->mGenericsTypes,generics_number_376))))->mClass;
        come_call_finalizer3(__right_value296,(void*)0, 0, 1, 0, 0, __result_obj__);
        generics_number2_378=klass2_377->mGenericsNum;
        if(        generics_number_376!=generics_number2_378) {
            array_num_379=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__380=type->mImmutable;
            pointer_num_381=type->mPointerNum;
            heap_382=type->mHeap;
            guard__383=type->mGuardValue;
            no_heap_384=type->mNoHeap;
            no_calling_destructor_385=type->mNoCallingDestructor;
            null_value_386=type->mNullValue;
            record__387=type->mRecord;
            multiple_types_388=type->mMultipleTypes;
            exception__389=type->mException;
            generate__390=type->mGenerate;
            vtable_391=type->mCreateVTable;
            __dec_obj84=result_317;
            result_317=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value297=list$1voidphp_operator_load_element(generics_type->mGenericsTypes,generics_number_376))))));
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value297,(void*)0, 0, 1, 0, 0, __result_obj__);
            result_317->mGenericsNumBefore=generics_number_376;
            if(            vtable_391) {
                result_317->mCreateVTable=vtable_391;
            }
            if(            generate__390) {
                result_317->mGenerate=generate__390;
            }
            if(            heap_382) {
                result_317->mHeap=heap_382;
            }
            if(            exception__389) {
                result_317->mException=exception__389;
            }
            if(            guard__383) {
                result_317->mGuardValue=guard__383;
            }
            if(            record__387) {
                result_317->mRecord=record__387;
            }
            if(            no_heap_384) {
                result_317->mNoHeap=(_Bool)1;
                result_317->mHeap=(_Bool)0;
            }
            if(            multiple_types_388) {
                result_317->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_385) {
                result_317->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__380) {
                result_317->mImmutable=immutable__380;
            }
            if(            list$1sNodephp_length(array_num_379)>0) {
                __dec_obj85=result_317->mArrayNum;
                result_317->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_379);
                come_call_finalizer3(__dec_obj85,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            null_value_386) {
                result_317->mNullValue=null_value_386;
            }
            if(            pointer_num_381>0) {
                result_317->mPointerNum+=pointer_num_381;
            }
            come_call_finalizer3(array_num_379,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1voidphp_reset(result_317->mGenericsTypes);
        for(        o2_saved_392=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_393=((struct sType*)list$1voidphp_begin((o2_saved_392)));        !list$1voidphp_end((o2_saved_392));        it_393=((struct sType*)list$1voidphp_next((o2_saved_392)))        ){
            type_394=(struct sType*)come_increment_ref_count(solve_generics(it_393,generics_type,info));
            list$1voidphp_push_back(result_317->mGenericsTypes,(struct sType*)come_increment_ref_count(type_394));
            come_call_finalizer3(type_394,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_392,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_generics_struct(result_317,generics_type,info)) {
            new_name_395=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_395);
            exit(1);
            new_name_395 = come_decrement_ref_count2(new_name_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer3(result_317,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result235__;
void* __right_value251 = (void*)0;
struct sType* result_333;
void* __right_value252 = (void*)0;
struct sType* __dec_obj52;
void* __right_value253 = (void*)0;
struct sType* __dec_obj53;
void* __right_value254 = (void*)0;
struct sType* __dec_obj54;
void* __right_value255 = (void*)0;
char* __dec_obj55;
void* __right_value256 = (void*)0;
char* __dec_obj56;
void* __right_value263 = (void*)0;
struct list$1voidph* __dec_obj60;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value272 = (void*)0;
struct list$1voidph* __dec_obj65;
void* __right_value279 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value280 = (void*)0;
struct sType* __dec_obj70;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value282 = (void*)0;
struct sType* __dec_obj72;
void* __right_value283 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value284 = (void*)0;
char* __dec_obj74;
void* __right_value285 = (void*)0;
char* __dec_obj75;
void* __right_value286 = (void*)0;
char* __dec_obj76;
void* __right_value287 = (void*)0;
char* __dec_obj77;
struct sType* __result249__;
    if(    self==(void*)0) {
        __result235__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result235__;
    }
    result_333=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_333->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj52=result_333->mNoSolvedGenericsType;
        result_333->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj52,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj53=result_333->mOriginalLoadVarType;
        result_333->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj54=result_333->mAnyOriginalType;
        result_333->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj54,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj55=result_333->mInterfaceName;
        result_333->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj56=result_333->mGenericsName;
        result_333->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_333->mGenericsTypes;
        result_333->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_333->mArrayNum;
        result_333->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_333->mParamTypes;
        result_333->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_333->mParamNames;
        result_333->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_333->mResultType;
        result_333->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj70,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_333->mAlignas;
        result_333->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_333->mChannelType;
        result_333->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_333->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_333->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_333->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_333->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_333->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_333->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_333->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_333->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_333->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_333->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_333->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_333->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_333->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_333->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_333->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_333->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_333->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_333->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_333->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_333->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_333->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_333->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_333->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_333->mSizeNum;
        result_333->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_333->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_333->mOriginalTypeName;
        result_333->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_333->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_333->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_333->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_333->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_333->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_333->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_333->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_333->mAsmName;
        result_333->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_333->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_333->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_333->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_333->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_333->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_333->mTupleName;
        result_333->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj77=result_333->mAttribute;
        result_333->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_333->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_333->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_333->mCreateVTable=self->mCreateVTable;
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_333;
    come_call_finalizer3(result_333,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj34;
struct sType* __dec_obj35;
struct sType* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1voidph* __dec_obj39;
struct list$1sNodeph* __dec_obj40;
struct list$1voidph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct sType* __dec_obj44;
struct sNode* __dec_obj45;
struct sType* __dec_obj46;
struct sNode* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
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
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_318;
struct list_item$1voidph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_320;
struct list_item$1sNodeph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_322;
struct list_item$1sNodeph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        come_call_finalizer3(prev_it_323,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_324;
struct list_item$1charph* prev_it_325;
    it_324=self->head;
    while(it_324!=((void*)0)) {
        prev_it_325=it_324;
        it_324=it_324->next;
        come_call_finalizer3(prev_it_325,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_326;
    result_326=0;
    result_326+=int_get_hash_key(((int)self->mClass));
    result_326+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_326+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_326+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_326+=int_get_hash_key(((int)self->mAnyClass));
    result_326+=int_get_hash_key(((int)self->mInterfaceName));
    result_326+=int_get_hash_key(((int)self->mGenericsName));
    result_326+=int_get_hash_key(((int)self->mGenericsTypes));
    result_326+=int_get_hash_key(((int)self->mArrayNum));
    result_326+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_326+=int_get_hash_key(((int)self->mParamTypes));
    result_326+=int_get_hash_key(((int)self->mParamNames));
    result_326+=int_get_hash_key(((int)self->mResultType));
    result_326+=int_get_hash_key(((int)self->mVarArgs));
    result_326+=int_get_hash_key(((int)self->mAlignas));
    result_326+=int_get_hash_key(((int)self->mChannelType));
    result_326+=int_get_hash_key(((int)self->mUnsigned));
    result_326+=int_get_hash_key(((int)self->mShort));
    result_326+=int_get_hash_key(((int)self->mLong));
    result_326+=int_get_hash_key(((int)self->mLongLong));
    result_326+=int_get_hash_key(((int)self->mConstant));
    result_326+=int_get_hash_key(((int)self->mAtomic));
    result_326+=int_get_hash_key(((int)self->mRegister));
    result_326+=int_get_hash_key(((int)self->mVolatile));
    result_326+=int_get_hash_key(((int)self->mStatic));
    result_326+=int_get_hash_key(((int)self->mUniq));
    result_326+=int_get_hash_key(((int)self->mRecord));
    result_326+=int_get_hash_key(((int)self->mExtern));
    result_326+=int_get_hash_key(((int)self->mRestrict));
    result_326+=int_get_hash_key(((int)self->mImmutable));
    result_326+=int_get_hash_key(((int)self->mHeap));
    result_326+=int_get_hash_key(((int)self->mChannel));
    result_326+=int_get_hash_key(((int)self->mNoHeap));
    result_326+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_326+=int_get_hash_key(((int)self->mException));
    result_326+=int_get_hash_key(((int)self->mPointerNum));
    result_326+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_326+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_326+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_326+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_326+=int_get_hash_key(((int)self->mSizeNum));
    result_326+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_326+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_326+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_326+=int_get_hash_key(((int)self->mFunctionParam));
    result_326+=int_get_hash_key(((int)self->mAllocaValue));
    result_326+=int_get_hash_key(((int)self->mGenericsStruct));
    result_326+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_326+=int_get_hash_key(((int)self->mInline));
    result_326+=int_get_hash_key(((int)self->mNullValue));
    result_326+=int_get_hash_key(((int)self->mGuardValue));
    result_326+=int_get_hash_key(((int)self->mAsmName));
    result_326+=int_get_hash_key(((int)self->mArrayPointerType));
    result_326+=int_get_hash_key(((int)self->mLambdaArray));
    result_326+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_326+=int_get_hash_key(((int)self->mTypedef));
    result_326+=int_get_hash_key(((int)self->mMultipleTypes));
    result_326+=int_get_hash_key(((int)self->mOriginIsArray));
    result_326+=int_get_hash_key(((int)self->mTupleName));
    result_326+=int_get_hash_key(((int)self->mAttribute));
    result_326+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_326+=int_get_hash_key(((int)self->mGenerate));
    result_326+=int_get_hash_key(((int)self->mCreateVTable));
    return result_326;
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
struct list_item$1voidph* it_327;
struct list_item$1voidph* it2_328;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_327=left->head;
    it2_328=right->head;
    while(it_327!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_327->item)) {
            return (_Bool)0;
        }
        it_327=it_327->next;
        it2_328=it2_328->next;
    }
    return (_Bool)1;
}

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_329;
struct list_item$1sNodeph* it2_330;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_329=left->head;
    it2_330=right->head;
    while(it_329!=((void*)0)) {
        if(        !sNode_equals(it_329->item,it2_330->item)) {
            return (_Bool)0;
        }
        it_329=it_329->next;
        it2_330=it2_330->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_331;
struct list_item$1charph* it2_332;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_331=left->head;
    it2_332=right->head;
    while(it_331!=((void*)0)) {
        if(        !string_equals(it_331->item,it2_332->item)) {
            return (_Bool)0;
        }
        it_331=it_331->next;
        it2_332=it2_332->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result236__;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct list$1voidph* result_335;
struct list_item$1voidph* it_336;
void* __right_value262 = (void*)0;
struct list$1voidph* __result239__;
    if(    self==((void*)0)) {
        __result236__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    result_335=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_336=self->head;
    while(it_336!=((void*)0)) {
        list$1voidphp_add(result_335,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_336->item)));
        it_336=it_336->next;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_335;
    come_call_finalizer3(result_335,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_334;
    result_334=0;
    result_334+=int_get_hash_key(((int)self->head));
    result_334+=int_get_hash_key(((int)self->tail));
    result_334+=int_get_hash_key(((int)self->len));
    result_334+=int_get_hash_key(((int)self->it));
    return result_334;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result237__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
struct list_item$1voidph* litem_337;
void* __dec_obj57;
void* __right_value260 = (void*)0;
struct list_item$1voidph* litem_338;
void* __dec_obj58;
void* __right_value261 = (void*)0;
struct list_item$1voidph* litem_339;
void* __dec_obj59;
struct list$1voidph* __result238__;
    if(    self->len==0) {
        litem_337=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value259=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_337->prev=((void*)0);
        litem_337->next=((void*)0);
        __dec_obj57=litem_337->item;
        litem_337->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_337;
        self->head=litem_337;
    }
    else if(    self->len==1) {
        litem_338=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value260=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_338->prev=self->head;
        litem_338->next=((void*)0);
        __dec_obj58=litem_338->item;
        litem_338->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_338;
        self->head->next=litem_338;
    }
    else {
        litem_339=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value261=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_339->prev=self->tail;
        litem_339->next=((void*)0);
        __dec_obj59=litem_339->item;
        litem_339->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_339;
        self->tail=litem_339;
    }
    self->len++;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result240__;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1sNodeph* result_340;
struct list_item$1sNodeph* it_341;
void* __right_value270 = (void*)0;
struct list$1sNodeph* __result245__;
    if(    self==((void*)0)) {
        __result240__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_340=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_341=self->head;
    while(it_341!=((void*)0)) {
        list$1sNodephp_add(result_340,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_341->item)));
        it_341=it_341->next;
    }
    __result245__ = gComeFunResultObject = __result_obj__ = result_340;
    come_call_finalizer3(result_340,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result241__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value266 = (void*)0;
struct list_item$1sNodeph* litem_342;
struct sNode* __dec_obj61;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_343;
struct sNode* __dec_obj62;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result242__;
    if(    self->len==0) {
        litem_342=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value266=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_342->prev=((void*)0);
        litem_342->next=((void*)0);
        __dec_obj61=litem_342->item;
        litem_342->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_342;
        self->head=litem_342;
    }
    else if(    self->len==1) {
        litem_343=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_343->prev=self->head;
        litem_343->next=((void*)0);
        __dec_obj62=litem_343->item;
        litem_343->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_343;
        self->head->next=litem_343;
    }
    else {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=self->tail;
        litem_344->next=((void*)0);
        __dec_obj63=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_344;
        self->tail=litem_344;
    }
    self->len++;
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result243__;
void* __right_value269 = (void*)0;
struct sNode* result_345;
struct sNode* __result244__;
    if(    self==(void*)0) {
        __result243__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_345=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_345->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_345->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_345->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_345->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_345->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_345->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_345->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_345->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_345->kind=self->kind;
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_345;
    come_call_finalizer2((void*)0, result_345, result_345 ? ((struct sNode*)result_345)->finalize:(void*)0, result_345 ? ((struct sNode*)result_345)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result246__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* result_346;
struct list_item$1charph* it_347;
void* __right_value278 = (void*)0;
struct list$1charph* __result248__;
    if(    self==((void*)0)) {
        __result246__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_346=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_347=self->head;
    while(it_347!=((void*)0)) {
        list$1charphp_add(result_346,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_347->item)));
        it_347=it_347->next;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_346;
    come_call_finalizer3(result_346,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_348;
char* __dec_obj66;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_349;
char* __dec_obj67;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_350;
char* __dec_obj68;
struct list$1charph* __result247__;
    if(    self->len==0) {
        litem_348=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_348->prev=((void*)0);
        litem_348->next=((void*)0);
        __dec_obj66=litem_348->item;
        litem_348->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_348;
        self->head=litem_348;
    }
    else if(    self->len==1) {
        litem_349=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_349->prev=self->head;
        litem_349->next=((void*)0);
        __dec_obj67=litem_349->item;
        litem_349->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_349;
        self->head->next=litem_349;
    }
    else {
        litem_350=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_350->prev=self->tail;
        litem_350->next=((void*)0);
        __dec_obj68=litem_350->item;
        litem_350->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_350;
        self->tail=litem_350;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct list$1voidph* list$1voidphp_reset(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_353;
struct list_item$1voidph* prev_it_354;
struct list$1voidph* __result252__;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value291 = (void*)0;
struct list_item$1voidph* litem_358;
void* __dec_obj79;
void* __right_value292 = (void*)0;
struct list_item$1voidph* litem_359;
void* __dec_obj80;
void* __right_value293 = (void*)0;
struct list_item$1voidph* litem_360;
void* __dec_obj81;
struct list$1voidph* __result253__;
    if(    self->len==0) {
        litem_358=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value291=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_358->prev=((void*)0);
        litem_358->next=((void*)0);
        __dec_obj79=litem_358->item;
        litem_358->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj79,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_358;
        self->head=litem_358;
    }
    else if(    self->len==1) {
        litem_359=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value292=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_359->prev=self->head;
        litem_359->next=((void*)0);
        __dec_obj80=litem_359->item;
        litem_359->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj80,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_359;
        self->head->next=litem_359;
    }
    else {
        litem_360=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value293=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=self->tail;
        litem_360->next=((void*)0);
        __dec_obj81=litem_360->item;
        litem_360->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_360;
        self->tail=litem_360;
    }
    self->len++;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_373;
int i_374;
void* __result254__;
void* default_value_375;
void* __result255__;
default_value_375 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_373=self->head;
    i_374=0;
    while(it_373!=((void*)0)) {
        if(        position==i_374) {
            __result254__ = gComeFunResultObject = __result_obj__ = it_373->item;
            gComeFunResultObject = (void*)0;
            return __result254__;
        }
        it_373=it_373->next;
        i_374++;
    }
    memset(&default_value_375,0,sizeof(void*));
    __result255__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_375);
    come_call_finalizer3(default_value_375, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct sType* result_396;
struct sClass* klass_397;
int generics_number_398;
struct list$1sNodeph* array_num_399;
_Bool immutable__400;
int pointer_num_401;
_Bool heap_402;
_Bool guard__403;
_Bool no_heap_404;
_Bool no_calling_destructor_405;
_Bool null_value_406;
_Bool exception__407;
_Bool generate__408;
_Bool vtable_409;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
struct sType* __dec_obj86;
struct list$1sNodeph* __dec_obj87;
int i_410;
struct list$1voidph* o2_saved_411;
struct sType* it_412;
void* __right_value304 = (void*)0;
struct list$1voidph* o2_saved_418;
struct sType* it_419;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj89;
struct sType* __result259__;
    result_396=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    klass_397=type->mClass;
    if(    klass_397->mMethodGenerics&&info->method_generics_types&&list$1voidphp_length(info->method_generics_types)>0) {
        generics_number_398=klass_397->mMethodGenericsNum;
        if(        generics_number_398>=list$1voidphp_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_398,list$1voidphp_length(info->method_generics_types));
            exit(2);
        }
        array_num_399=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__400=type->mImmutable;
        pointer_num_401=type->mPointerNum;
        heap_402=type->mHeap;
        guard__403=type->mGuardValue;
        no_heap_404=type->mNoHeap;
        no_calling_destructor_405=type->mNoCallingDestructor;
        null_value_406=type->mNullValue;
        exception__407=type->mException;
        generate__408=type->mGenerate;
        vtable_409=type->mCreateVTable;
        __dec_obj86=result_396;
        result_396=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)((void*)(__right_value302=list$1voidphp_operator_load_element(info->method_generics_types,generics_number_398))))));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value302,(void*)0, 0, 1, 0, 0, __result_obj__);
        if(        vtable_409) {
            result_396->mCreateVTable=vtable_409;
        }
        if(        generate__408) {
            result_396->mGenerate=generate__408;
        }
        if(        heap_402) {
            result_396->mHeap=heap_402||result_396->mHeap;
        }
        if(        exception__407) {
            result_396->mException=exception__407;
        }
        if(        guard__403) {
            result_396->mGuardValue=guard__403||result_396->mGuardValue;
        }
        if(        no_heap_404) {
            result_396->mNoHeap=(_Bool)1;
            result_396->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_405) {
            result_396->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__400) {
            result_396->mImmutable=immutable__400;
        }
        if(        list$1sNodephp_length(array_num_399)>0) {
            __dec_obj87=result_396->mArrayNum;
            result_396->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_399);
            come_call_finalizer3(__dec_obj87,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_406) {
            result_396->mNullValue=null_value_406;
        }
        if(        pointer_num_401>0) {
            result_396->mPointerNum+=pointer_num_401;
        }
        come_call_finalizer3(array_num_399,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_410=0;
    for(    o2_saved_411=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_412=((struct sType*)list$1voidphp_begin((o2_saved_411)));    !list$1voidphp_end((o2_saved_411));    it_412=((struct sType*)list$1voidphp_next((o2_saved_411)))    ){
        list$1voidphp_operator_store_element(result_396->mGenericsTypes,i_410,(struct sType*)come_increment_ref_count(solve_method_generics(it_412,info)));
        i_410++;
    }
    come_call_finalizer3(o2_saved_411,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    i_410=0;
    for(    o2_saved_418=(struct list$1voidph*)come_increment_ref_count((type->mParamTypes)),it_419=((struct sType*)list$1voidphp_begin((o2_saved_418)));    !list$1voidphp_end((o2_saved_418));    it_419=((struct sType*)list$1voidphp_next((o2_saved_418)))    ){
        list$1voidphp_operator_store_element(result_396->mParamTypes,i_410,(struct sType*)come_increment_ref_count(solve_method_generics(it_419,info)));
        i_410++;
    }
    come_call_finalizer3(o2_saved_418,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mResultType) {
        __dec_obj89=result_396->mResultType;
        result_396->mResultType=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType,info));
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_396;
    come_call_finalizer3(result_396,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_413;
int i_414;
void* default_value_415;
struct list$1voidph* __result257__;
struct list_item$1voidph* it_416;
int i_417;
void* __dec_obj88;
struct list$1voidph* __result258__;
default_value_415 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_413=self->len;
        for(        i_414=0;        i_414<position-len_413;        i_414++        ){
            memset(&default_value_415,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_415));
            come_call_finalizer3(default_value_415, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result257__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    it_416=self->head;
    i_417=0;
    while(it_416!=((void*)0)) {
        if(        position==i_417) {
            __dec_obj88=it_416->item;
            it_416->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj88,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_416=it_416->next;
        i_417++;
    }
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result258__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value307 = (void*)0;
char* __result260__;
void* __right_value308 = (void*)0;
char* __result261__;
void* __right_value313 = (void*)0;
struct sRightValueObject* new_value_422;
struct sType* __dec_obj96;
void* __right_value314 = (void*)0;
char* __dec_obj97;
char* __dec_obj98;
void* __right_value315 = (void*)0;
char* buf_423;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
char* __result264__;
    if(    gComeGC||gComeC) {
        __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value307=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value307 = come_decrement_ref_count2(__right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    if(    info->no_output_come_code) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value308=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value308 = come_decrement_ref_count2(__right_value308, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    new_value_422=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 301, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    __dec_obj96=new_value_422->mType;
    new_value_422->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_422->mFreed=(_Bool)0;
    new_value_422->mID=gRightValueNum;
    __dec_obj97=new_value_422->mVarName;
    new_value_422->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj98=new_value_422->mFunName;
    new_value_422->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_422->mBlockLevel=info->block_level;
    list$1voidphp_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_422));
    buf_423=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_423);
    __result264__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value317=xsprintf("((%s)(%s=%s))",((char*)(__right_value316=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_422->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_422,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_423 = come_decrement_ref_count2(buf_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value317 = come_decrement_ref_count2(__right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj90;
char* __dec_obj91;
char* __dec_obj92;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj90=self->mType;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj91=self->mVarName;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj92=self->mFunName;
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sRightValueObject* sRightValueObject_clone(struct sRightValueObject* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* __result262__;
void* __right_value309 = (void*)0;
struct sRightValueObject* result_421;
void* __right_value310 = (void*)0;
struct sType* __dec_obj93;
void* __right_value311 = (void*)0;
char* __dec_obj94;
void* __right_value312 = (void*)0;
char* __dec_obj95;
struct sRightValueObject* __result263__;
    if(    self==(void*)0) {
        __result262__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_421=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "sRightValueObject_clone", 3, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj93=result_421->mType;
        result_421->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        __dec_obj94=result_421->mVarName;
        result_421->mVarName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mVarName));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj95=result_421->mFunName;
        result_421->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->mFreed=self->mFreed;
    }
    if(    self!=((void*)0)) {
        result_421->mID=self->mID;
    }
    if(    self!=((void*)0)) {
        result_421->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_421->mStored=self->mStored;
    }
    if(    self!=((void*)0)) {
        result_421->mDecrementRefCount=self->mDecrementRefCount;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_421;
    come_call_finalizer3(result_421,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static unsigned int sRightValueObject_get_hash_key(struct sRightValueObject* self){
unsigned int result_420;
    result_420=0;
    result_420+=int_get_hash_key(((int)self->mType));
    result_420+=int_get_hash_key(((int)self->mVarName));
    result_420+=int_get_hash_key(((int)self->mFunName));
    result_420+=int_get_hash_key(((int)self->mFreed));
    result_420+=int_get_hash_key(((int)self->mID));
    result_420+=int_get_hash_key(((int)self->mBlockLevel));
    result_420+=int_get_hash_key(((int)self->mStored));
    result_420+=int_get_hash_key(((int)self->mDecrementRefCount));
    return result_420;
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

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value318 = (void*)0;
struct sRightValueObject* new_value_424;
struct sType* __dec_obj99;
void* __right_value319 = (void*)0;
char* __dec_obj100;
char* __dec_obj101;
void* __right_value320 = (void*)0;
char* buf_425;
void* __right_value321 = (void*)0;
char* __dec_obj102;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* __dec_obj103;
    if(    gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_424=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 325, "struct sRightValueObject", sRightValueObject_finalize, sRightValueObject_clone, sRightValueObject_get_hash_key, sRightValueObject_equals));
    __dec_obj99=new_value_424->mType;
    new_value_424->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj99,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_424->mFreed=(_Bool)0;
    new_value_424->mID=gRightValueNum;
    __dec_obj100=new_value_424->mVarName;
    new_value_424->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=new_value_424->mFunName;
    new_value_424->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_424->mBlockLevel=info->block_level;
    new_value_424->mDecrementRefCount=decrement_ref_count;
    list$1voidphp_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_424));
    buf_425=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_425);
    __dec_obj102=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, come_value->c_value));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj103=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value322=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_424->mVarName,come_value->c_value));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value322 = come_decrement_ref_count2(__right_value322, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_424;
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_424,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_425 = come_decrement_ref_count2(buf_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_426;
struct list$1voidph* o2_saved_427;
struct sRightValueObject* it_428;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_426=0;
    for(    o2_saved_427=(struct list$1voidph*)come_increment_ref_count((info->right_value_objects)),it_428=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_427)));    !list$1voidphp_end((o2_saved_427));    it_428=((struct sRightValueObject*)list$1voidphp_next((o2_saved_427)))    ){
        if(        it_428->mID==right_value_num) {
            break;
        }
        i_426++;
    }
    come_call_finalizer3(o2_saved_427,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1voidphp_delete(info->right_value_objects,i_426,i_426+1);
}

static struct list$1voidph* list$1voidphp_delete(struct list$1voidph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_429;
struct list$1voidph* __result265__;
struct list_item$1voidph* it_430;
int i_431;
struct list_item$1voidph* prev_it_432;
struct list_item$1voidph* it_433;
int i_434;
struct list_item$1voidph* prev_it_435;
struct list_item$1voidph* it_436;
struct list_item$1voidph* head_prev_it_437;
struct list_item$1voidph* tail_it_438;
int i_439;
struct list_item$1voidph* prev_it_440;
struct list$1voidph* __result266__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_429=tail;
        tail=head;
        head=tmp_429;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result265__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidphp_reset(self);
    }
    else if(    head==0) {
        it_430=self->head;
        i_431=0;
        while(it_430!=((void*)0)) {
            if(            i_431<tail) {
                prev_it_432=it_430;
                it_430=it_430->next;
                i_431++;
                come_call_finalizer3(prev_it_432,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_431==tail) {
                self->head=it_430;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_430=it_430->next;
                i_431++;
            }
        }
    }
    else if(    tail==self->len) {
        it_433=self->head;
        i_434=0;
        while(it_433!=((void*)0)) {
            if(            i_434==head) {
                self->tail=it_433->prev;
                self->tail->next=((void*)0);
            }
            if(            i_434>=head) {
                prev_it_435=it_433;
                it_433=it_433->next;
                i_434++;
                come_call_finalizer3(prev_it_435,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_433=it_433->next;
                i_434++;
            }
        }
    }
    else {
        it_436=self->head;
        head_prev_it_437=((void*)0);
        tail_it_438=((void*)0);
        i_439=0;
        while(it_436!=((void*)0)) {
            if(            i_439==head) {
                head_prev_it_437=it_436->prev;
            }
            if(            i_439==tail) {
                tail_it_438=it_436;
            }
            if(            i_439>=head&&i_439<tail) {
                prev_it_440=it_436;
                it_436=it_436->next;
                i_439++;
                come_call_finalizer3(prev_it_440,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_436=it_436->next;
                i_439++;
            }
        }
        if(        head_prev_it_437!=((void*)0)) {
            head_prev_it_437->next=tail_it_438;
        }
        if(        tail_it_438!=((void*)0)) {
            tail_it_438->prev=head_prev_it_437;
        }
    }
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value324 = (void*)0;
char* __result267__;
void* __right_value325 = (void*)0;
char* __result268__;
struct sClass* klass_441;
void* __right_value326 = (void*)0;
char* type_name_442;
void* __right_value327 = (void*)0;
char* __result269__;
    if(    gComeGC||gComeC) {
        __result267__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value324=__builtin_string(obj)));
        __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    if(    info->no_output_come_code) {
        __result268__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value325=__builtin_string(obj)));
        __right_value325 = come_decrement_ref_count2(__right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    klass_441=type->mClass;
    type_name_442=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value327=xsprintf("(%s)come_increment_ref_count(%s)",type_name_442,obj)));
    type_name_442 = come_decrement_ref_count2(type_name_442, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_443;
struct list$1voidph* right_value_objects_444;
struct sClass* klass_445;
void* __right_value328 = (void*)0;
char* name_447;
void* __right_value329 = (void*)0;
_Bool no_decrement_448;
void* __right_value330 = (void*)0;
char* c_value_449;
struct sClass* klass_450;
char* class_name_451;
char* fun_name_452;
void* __right_value331 = (void*)0;
struct sType* type2_453;
void* __right_value332 = (void*)0;
char* fun_name2_454;
struct sFun* finalizer_455;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* none_generics_name_459;
void* __right_value335 = (void*)0;
char* generics_fun_name_460;
void* __right_value336 = (void*)0;
struct sGenericsFun* generics_fun_461;
void* __right_value337 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var1 = (void*)0;
char* name_465=0;
_Bool err_466=0;
void* __right_value338 = (void*)0;
int i_467;
void* __right_value339 = (void*)0;
char* new_fun_name_468;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* __dec_obj132;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_469=0;
char* new_fun_name_470=0;
char* __dec_obj134;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* type_name_471;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
char* type_name_472;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* str_473;
void* __right_value368 = (void*)0;
char* str_474;
struct list$1voidph* __dec_obj135;
struct list$1CVALUEph* __dec_obj136;
memset(&i_467, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_443=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_444=info->right_value_objects;
    klass_445=type->mClass;
    static int dec_num_446=0;
    name_447=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_446));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value329=make_define_var(type,name_447,(_Bool)0,info))));
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    info->comma_instead_of_semicolon) {
        add_come_code(info,"%s=%s,\n",name_447,obj);
    }
    else {
        add_come_code(info,"%s=%s;\n",name_447,obj);
    }
    obj=name_447;
    no_decrement_448=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_449=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_450=type->mClass;
        class_name_451=klass_450->mName;
        fun_name_452="finalize";
        type2_453=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_453->mHeap=(_Bool)0;
        fun_name2_454=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_452,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType) {
            type=type->mNoSolvedGenericsType;
        }
        finalizer_455=((void*)0);
        if(        list$1voidphp_length(type->mGenericsTypes)>0) {
            finalizer_455=((struct sFun*)(__right_value333=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_454)));
            come_call_finalizer3(__right_value333,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_455==((void*)0)) {
                none_generics_name_459=(char*)come_increment_ref_count(get_none_generics_name(type2_453->mClass->mName));
                generics_fun_name_460=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_459,fun_name_452));
                generics_fun_461=((struct sGenericsFun*)(__right_value336=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_460)));
                come_call_finalizer3(__right_value336,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                generics_fun_461) {
                    multiple_assign_var1=((struct tuple2$2charphbool*)(__right_value337=create_generics_fun((char*)come_increment_ref_count(fun_name2_454),generics_fun_461,type,info)));
                    name_465=(char*)come_increment_ref_count(multiple_assign_var1->v1);
                    err_466=multiple_assign_var1->v2;
                    come_call_finalizer3(__right_value337,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_466) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_455=((struct sFun*)(__right_value338=map$2charphsFunphp_operator_load_element(info->funcs,name_465)));
                    come_call_finalizer3(__right_value338,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    name_465 = come_decrement_ref_count2(name_465, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                none_generics_name_459 = come_decrement_ref_count2(none_generics_name_459, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_460 = come_decrement_ref_count2(generics_fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_467=128-1;            i_467>=1;            i_467--            ){
                new_fun_name_468=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_454,i_467));
                finalizer_455=((struct sFun*)(__right_value340=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_468)));
                come_call_finalizer3(__right_value340,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                finalizer_455) {
                    __dec_obj132=fun_name2_454;
                    fun_name2_454=(char*)come_increment_ref_count(__builtin_string(new_fun_name_468));
                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_468 = come_decrement_ref_count2(new_fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_468 = come_decrement_ref_count2(new_fun_name_468, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_455==((void*)0)) {
                finalizer_455=((struct sFun*)(__right_value342=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_454)));
                come_call_finalizer3(__right_value342,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        if(        finalizer_455==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodephp_length(type->mArrayNum)==0) {
            multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value343=create_finalizer_automatically(type,fun_name_452,info)));
            fun_469=multiple_assign_var2->v1;
            new_fun_name_470=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            come_call_finalizer3(__right_value343,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj134=fun_name2_454;
            fun_name2_454=(char*)come_increment_ref_count(new_fun_name_470);
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_455=fun_469;
            new_fun_name_470 = come_decrement_ref_count2(new_fun_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_455!=((void*)0)||(finalizer_455==((void*)0)&&string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==1)) {
            if(            string_operator_equals(type->mClass->mName,"void")) {
                if(                c_value_449) {
                    add_come_last_code2(info,((char*)(__right_value345=xsprintf("come_call_finalizer3(\%s,(void*)0, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value344=string_to_string(c_value_449)))))),type->mAllocaValue,no_decrement_448,no_free,force_delete_);
                    __right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
            else if(            klass_450->mProtocol&&type->mPointerNum==1) {
                type_name_471=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_449) {
                    add_come_last_code2(info,((char*)(__right_value355=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value347=string_to_string(fun_name2_454))),((char*)(__right_value348=string_to_string(c_value_449))),((char*)(__right_value349=string_to_string(c_value_449))),((char*)(__right_value350=string_to_string(type_name_471))),((char*)(__right_value351=string_to_string(c_value_449))),((char*)(__right_value352=string_to_string(c_value_449))),((char*)(__right_value353=string_to_string(type_name_471))),((char*)(__right_value354=string_to_string(c_value_449)))))),type->mAllocaValue,no_decrement_448,no_free,force_delete_);
                    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                type_name_471 = come_decrement_ref_count2(type_name_471, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_449) {
                    add_come_last_code2(info,((char*)(__right_value358=xsprintf("come_call_finalizer3(\%s,\%s, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value356=string_to_string(c_value_449))),((char*)(__right_value357=string_to_string(fun_name2_454)))))),type->mAllocaValue,no_decrement_448,no_free,force_delete_);
                    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(            klass_450->mProtocol&&type->mPointerNum==1) {
                type_name_472=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_473=(char*)come_increment_ref_count(xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0,0,0, (void*)0); }",((char*)(__right_value360=string_to_string(name_447))),((char*)(__right_value361=string_to_string(name_447))),((char*)(__right_value362=string_to_string(name_447))),((char*)(__right_value363=string_to_string(type_name_472))),((char*)(__right_value364=string_to_string(name_447))),((char*)(__right_value365=string_to_string(type_name_472))),((char*)(__right_value366=string_to_string(name_447)))));
                __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_last_code2(info,str_473);
                type_name_472 = come_decrement_ref_count2(type_name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_473 = come_decrement_ref_count2(str_473, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_474=(char*)come_increment_ref_count(xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0)",name_447,name_447));
                add_come_last_code2(info,str_474);
                str_474 = come_decrement_ref_count2(str_474, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        c_value_449 = come_decrement_ref_count2(c_value_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_453,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_454 = come_decrement_ref_count2(fun_name2_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj135=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_444);
    come_call_finalizer3(__dec_obj135,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj136=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_443);
    come_call_finalizer3(__dec_obj136,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_443,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_447 = come_decrement_ref_count2(name_447, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_456;
unsigned int hash_457;
unsigned int it_458;
struct sFun* __result270__;
struct sFun* __result271__;
struct sFun* __result272__;
struct sFun* __result273__;
default_value_456 = (void*)0;
    memset(&default_value_456,0,sizeof(struct sFun*));
    hash_457=string_get_hash_key(((char*)key))%self->size;
    it_458=hash_457;
    while((_Bool)1) {
        if(        self->item_existance[it_458]) {
            if(            string_equals(self->keys[it_458],key)) {
                __result270__ = gComeFunResultObject = __result_obj__ = self->items[it_458];
                come_call_finalizer3(default_value_456,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result270__;
            }
            it_458++;
            if(            it_458>=self->size) {
                it_458=0;
            }
            else if(            it_458==hash_457) {
                __result271__ = gComeFunResultObject = __result_obj__ = default_value_456;
                come_call_finalizer3(default_value_456,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result271__;
            }
        }
        else {
            __result272__ = gComeFunResultObject = __result_obj__ = default_value_456;
            come_call_finalizer3(default_value_456,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result272__;
        }
    }
    __result273__ = gComeFunResultObject = __result_obj__ = default_value_456;
    come_call_finalizer3(default_value_456,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj104;
struct sType* __dec_obj105;
struct list$1voidph* __dec_obj106;
struct list$1charph* __dec_obj107;
struct list$1charph* __dec_obj108;
struct sType* __dec_obj109;
struct sBlock* __dec_obj110;
struct buffer* __dec_obj113;
struct buffer* __dec_obj114;
struct buffer* __dec_obj115;
struct buffer* __dec_obj116;
char* __dec_obj117;
char* __dec_obj118;
char* __dec_obj119;
char* __dec_obj120;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj104=self->mName;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj105=self->mResultType;
            come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj106=self->mParamTypes;
            come_call_finalizer3(__dec_obj106,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj107=self->mParamNames;
            come_call_finalizer3(__dec_obj107,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj108=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj108,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj109=self->mLambdaType;
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj110=self->mBlock;
            come_call_finalizer3(__dec_obj110,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj113=self->mSource;
            come_call_finalizer3(__dec_obj113,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj114=self->mSourceHead;
            come_call_finalizer3(__dec_obj114,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj115=self->mSourceHead2;
            come_call_finalizer3(__dec_obj115,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj116=self->mSourceDefer;
            come_call_finalizer3(__dec_obj116,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj117=self->mComeHeader;
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj118=self->mDeclareSName;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj119=self->mAttribute;
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj120=self->mFunAttribute;
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj111;
struct sVarTable* __dec_obj112;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj111=self->mNodes;
            come_call_finalizer3(__dec_obj111,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj112=self->mVarTable;
            come_call_finalizer3(__dec_obj112,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_462;
unsigned int hash_463;
unsigned int it_464;
struct sGenericsFun* __result274__;
struct sGenericsFun* __result275__;
struct sGenericsFun* __result276__;
struct sGenericsFun* __result277__;
default_value_462 = (void*)0;
    memset(&default_value_462,0,sizeof(struct sGenericsFun*));
    hash_463=string_get_hash_key(((char*)key))%self->size;
    it_464=hash_463;
    while((_Bool)1) {
        if(        self->item_existance[it_464]) {
            if(            string_equals(self->keys[it_464],key)) {
                __result274__ = gComeFunResultObject = __result_obj__ = self->items[it_464];
                come_call_finalizer3(default_value_462,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
            it_464++;
            if(            it_464>=self->size) {
                it_464=0;
            }
            else if(            it_464==hash_463) {
                __result275__ = gComeFunResultObject = __result_obj__ = default_value_462;
                come_call_finalizer3(default_value_462,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result275__;
            }
        }
        else {
            __result276__ = gComeFunResultObject = __result_obj__ = default_value_462;
            come_call_finalizer3(default_value_462,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
    }
    __result277__ = gComeFunResultObject = __result_obj__ = default_value_462;
    come_call_finalizer3(default_value_462,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
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

static void tuple2$2charphboolp_finalize(struct tuple2$2charphbool* self){
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

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj133;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj133=self->v2;
            __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_475;
struct list_item$1CVALUEph* prev_it_476;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj137;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj137=self->item;
            come_call_finalizer3(__dec_obj137,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj138;
struct sType* __dec_obj139;
char* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj138=self->c_value;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj139=self->type;
            come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj140=self->c_value_without_right_value_objects;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj141=self->c_value_without_cast_object_value;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_477;
struct list_item$1CVALUEph* prev_it_478;
    it_477=self->head;
    while(it_477!=((void*)0)) {
        prev_it_478=it_477;
        it_477=it_477->next;
        come_call_finalizer3(prev_it_478,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_479;
struct list$1voidph* right_value_objects_480;
struct sType* type_before_481;
_Bool alloca_value_482;
void* __right_value369 = (void*)0;
char* c_value_483;
struct sClass* klass_484;
char* class_name_485;
char* fun_name_486;
void* __right_value370 = (void*)0;
struct sType* type2_487;
void* __right_value371 = (void*)0;
char* fun_name2_488;
struct sFun* finalizer_489;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
char* none_generics_name_490;
void* __right_value374 = (void*)0;
char* generics_fun_name_491;
void* __right_value375 = (void*)0;
struct sGenericsFun* generics_fun_492;
void* __right_value376 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var3 = (void*)0;
char* name_493=0;
_Bool err_494=0;
void* __right_value377 = (void*)0;
int i_495;
void* __right_value378 = (void*)0;
char* new_fun_name_496;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
char* __dec_obj142;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun_497=0;
char* new_fun_name_498=0;
char* __dec_obj143;
void* __right_value383 = (void*)0;
char* type_name_499;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
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
struct list$1voidph* o2_saved_500;
struct tuple2$2charphsTypeph* it_501;
struct tuple2$2charphsTypeph* multiple_assign_var5 = (void*)0;
char* name_502=0;
struct sType* field_type_503=0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
char* obj_504;
struct list$1voidph* o2_saved_505;
struct tuple2$2charphsTypeph* it_506;
struct tuple2$2charphsTypeph* multiple_assign_var6 = (void*)0;
char* name_507=0;
struct sType* field_type_508=0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
char* obj_509;
void* __right_value428 = (void*)0;
char* type_name_510;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
char* type_name_511;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
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
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct list$1voidph* __dec_obj144;
struct list$1CVALUEph* __dec_obj145;
memset(&i_495, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_479=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_480=info->right_value_objects;
    type_before_481=type;
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType) {
        alloca_value_482=type->mAllocaValue;
        type=type->mNoSolvedGenericsType;
        type->mAllocaValue=alloca_value_482;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1voidphp_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        c_value_483=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_484=type->mClass;
        class_name_485=klass_484->mName;
        fun_name_486="finalize";
        type2_487=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_487->mHeap=(_Bool)0;
        fun_name2_488=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_486,info,(_Bool)1));
        finalizer_489=((void*)0);
        if(        list$1voidphp_length(type->mGenericsTypes)>0) {
            finalizer_489=((struct sFun*)(__right_value372=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_488)));
            come_call_finalizer3(__right_value372,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_489==((void*)0)) {
                none_generics_name_490=(char*)come_increment_ref_count(get_none_generics_name(type2_487->mClass->mName));
                generics_fun_name_491=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_490,fun_name_486));
                generics_fun_492=((struct sGenericsFun*)(__right_value375=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_491)));
                come_call_finalizer3(__right_value375,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                generics_fun_492) {
                    multiple_assign_var3=((struct tuple2$2charphbool*)(__right_value376=create_generics_fun((char*)come_increment_ref_count(fun_name2_488),generics_fun_492,type,info)));
                    name_493=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    err_494=multiple_assign_var3->v2;
                    come_call_finalizer3(__right_value376,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_494) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_489=((struct sFun*)(__right_value377=map$2charphsFunphp_operator_load_element(info->funcs,name_493)));
                    come_call_finalizer3(__right_value377,sFun_finalize, 0, 1, 0, 0, (void*)0);
                    name_493 = come_decrement_ref_count2(name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                none_generics_name_490 = come_decrement_ref_count2(none_generics_name_490, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_491 = come_decrement_ref_count2(generics_fun_name_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_495=128-1;            i_495>=1;            i_495--            ){
                new_fun_name_496=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_488,i_495));
                finalizer_489=((struct sFun*)(__right_value379=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_496)));
                come_call_finalizer3(__right_value379,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                finalizer_489) {
                    __dec_obj142=fun_name2_488;
                    fun_name2_488=(char*)come_increment_ref_count(__builtin_string(new_fun_name_496));
                    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_496 = come_decrement_ref_count2(new_fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_496 = come_decrement_ref_count2(new_fun_name_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_489==((void*)0)) {
                finalizer_489=((struct sFun*)(__right_value381=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_488)));
                come_call_finalizer3(__right_value381,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        if(        finalizer_489==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodephp_length(type->mArrayNum)==0) {
            multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value382=create_finalizer_automatically(type,fun_name_486,info)));
            fun_497=multiple_assign_var4->v1;
            new_fun_name_498=(char*)come_increment_ref_count(multiple_assign_var4->v2);
            come_call_finalizer3(__right_value382,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj143=fun_name2_488;
            fun_name2_488=(char*)come_increment_ref_count(new_fun_name_498);
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_489=fun_497;
            new_fun_name_498 = come_decrement_ref_count2(new_fun_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_489!=((void*)0)) {
            if(            klass_484->mProtocol&&type->mPointerNum==1) {
                type_name_499=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_483) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value392=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, %%d, %%d, %%d, %%d, %%s),\n",((char*)(__right_value384=string_to_string(fun_name2_488))),((char*)(__right_value385=string_to_string(c_value_483))),((char*)(__right_value386=string_to_string(c_value_483))),((char*)(__right_value387=string_to_string(type_name_499))),((char*)(__right_value388=string_to_string(c_value_483))),((char*)(__right_value389=string_to_string(c_value_483))),((char*)(__right_value390=string_to_string(type_name_499))),((char*)(__right_value391=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value401=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, %%s);\n",((char*)(__right_value393=string_to_string(fun_name2_488))),((char*)(__right_value394=string_to_string(c_value_483))),((char*)(__right_value395=string_to_string(c_value_483))),((char*)(__right_value396=string_to_string(type_name_499))),((char*)(__right_value397=string_to_string(c_value_483))),((char*)(__right_value398=string_to_string(c_value_483))),((char*)(__right_value399=string_to_string(type_name_499))),((char*)(__right_value400=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value410=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0),\n",((char*)(__right_value402=string_to_string(fun_name2_488))),((char*)(__right_value403=string_to_string(c_value_483))),((char*)(__right_value404=string_to_string(c_value_483))),((char*)(__right_value405=string_to_string(type_name_499))),((char*)(__right_value406=string_to_string(c_value_483))),((char*)(__right_value407=string_to_string(c_value_483))),((char*)(__right_value408=string_to_string(type_name_499))),((char*)(__right_value409=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                            __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value419=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0);\n",((char*)(__right_value411=string_to_string(fun_name2_488))),((char*)(__right_value412=string_to_string(c_value_483))),((char*)(__right_value413=string_to_string(c_value_483))),((char*)(__right_value414=string_to_string(type_name_499))),((char*)(__right_value415=string_to_string(c_value_483))),((char*)(__right_value416=string_to_string(c_value_483))),((char*)(__right_value417=string_to_string(type_name_499))),((char*)(__right_value418=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                            __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
                type_name_499 = come_decrement_ref_count2(type_name_499, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_483) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value420=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_483,fun_name2_488,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value421=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_483,fun_name2_488,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value422=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_483,fun_name2_488,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value423=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_483,fun_name2_488,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        else {
            if(            klass_484->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_500=(struct list$1voidph*)come_increment_ref_count((klass_484->mFields)),it_501=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_500)));                !list$1voidphp_end((o2_saved_500));                it_501=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_500)))                ){
                    multiple_assign_var5=it_501;
                    name_502=(char*)come_increment_ref_count(multiple_assign_var5->v1);
                    field_type_503=(struct sType*)come_increment_ref_count(multiple_assign_var5->v2);
                    if(                    field_type_503->mHeap&&field_type_503->mPointerNum>0) {
                        obj_504=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value424=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_483,name_502));
                        __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_503,obj_504,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        obj_504 = come_decrement_ref_count2(obj_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    name_502 = come_decrement_ref_count2(name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_503,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_500,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            klass_484->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_505=(struct list$1voidph*)come_increment_ref_count((klass_484->mFields)),it_506=((struct tuple2$2charphsTypeph*)list$1voidphp_begin((o2_saved_505)));                !list$1voidphp_end((o2_saved_505));                it_506=((struct tuple2$2charphsTypeph*)list$1voidphp_next((o2_saved_505)))                ){
                    multiple_assign_var6=it_506;
                    name_507=(char*)come_increment_ref_count(multiple_assign_var6->v1);
                    field_type_508=(struct sType*)come_increment_ref_count(multiple_assign_var6->v2);
                    if(                    field_type_508->mHeap&&field_type_508->mPointerNum>0) {
                        obj_509=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value426=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_483,name_507));
                        __right_value426 = come_decrement_ref_count2(__right_value426, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_508,obj_509,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        obj_509 = come_decrement_ref_count2(obj_509, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    name_507 = come_decrement_ref_count2(name_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_508,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_505,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                type->mAnyClass) {
                    if(                    klass_484->mProtocol&&type->mPointerNum==1) {
                        type_name_510=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        c_value_483) {
                            if(                            no_decrement) {
                                if(                                comma) {
                                    add_come_code(info,((char*)(__right_value436=xsprintf("come_call_finalizer2((void*)0, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, %%d, %%d, %%d, %%d, %%s),\n",((char*)(__right_value429=string_to_string(c_value_483))),((char*)(__right_value430=string_to_string(c_value_483))),((char*)(__right_value431=string_to_string(type_name_510))),((char*)(__right_value432=string_to_string(c_value_483))),((char*)(__right_value433=string_to_string(c_value_483))),((char*)(__right_value434=string_to_string(type_name_510))),((char*)(__right_value435=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                    __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                                else {
                                    add_come_code(info,((char*)(__right_value444=xsprintf("come_call_finalizer2((void*)0, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, %%s);\n",((char*)(__right_value437=string_to_string(c_value_483))),((char*)(__right_value438=string_to_string(c_value_483))),((char*)(__right_value439=string_to_string(type_name_510))),((char*)(__right_value440=string_to_string(c_value_483))),((char*)(__right_value441=string_to_string(c_value_483))),((char*)(__right_value442=string_to_string(type_name_510))),((char*)(__right_value443=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                            }
                            else {
                                if(                                comma) {
                                    add_come_code(info,((char*)(__right_value452=xsprintf("come_call_finalizer2((void*)0, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0),\n",((char*)(__right_value445=string_to_string(c_value_483))),((char*)(__right_value446=string_to_string(c_value_483))),((char*)(__right_value447=string_to_string(type_name_510))),((char*)(__right_value448=string_to_string(c_value_483))),((char*)(__right_value449=string_to_string(c_value_483))),((char*)(__right_value450=string_to_string(type_name_510))),((char*)(__right_value451=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                                    __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                                else {
                                    add_come_code(info,((char*)(__right_value460=xsprintf("come_call_finalizer2((void*)0, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0);\n",((char*)(__right_value453=string_to_string(c_value_483))),((char*)(__right_value454=string_to_string(c_value_483))),((char*)(__right_value455=string_to_string(type_name_510))),((char*)(__right_value456=string_to_string(c_value_483))),((char*)(__right_value457=string_to_string(c_value_483))),((char*)(__right_value458=string_to_string(type_name_510))),((char*)(__right_value459=string_to_string(c_value_483)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                                    __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                    __right_value460 = come_decrement_ref_count2(__right_value460, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                            }
                        }
                        type_name_510 = come_decrement_ref_count2(type_name_510, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    else {
                        if(                        c_value_483) {
                            if(                            no_decrement) {
                                if(                                comma) {
                                    add_come_code(info,((char*)(__right_value461=xsprintf("come_call_finalizer3(%s,(void*)0, %d, %d, %d, %d, %s),\n",c_value_483,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                                    __right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                                else {
                                    add_come_code(info,((char*)(__right_value462=xsprintf("come_call_finalizer3(%s,(void*)0, %d, %d, %d, %d, %s);\n",c_value_483,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                                    __right_value462 = come_decrement_ref_count2(__right_value462, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                            }
                            else {
                                if(                                comma) {
                                    add_come_code(info,((char*)(__right_value463=xsprintf("come_call_finalizer3(%s, (void*)0, %d, %d, %d, %d, (void*)0),\n",c_value_483,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                    __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                                else {
                                    add_come_code(info,((char*)(__right_value464=xsprintf("come_call_finalizer3(%s, (void*)0, %d, %d, %d, %d, (void*)0);\n",c_value_483,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                                    __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                }
                            }
                        }
                    }
                }
                else if(                klass_484->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_483) {
                        type_name_511=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,((char*)(__right_value473=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d,%%d, %%s):0),\n",((char*)(__right_value466=string_to_string(c_value_483))),((char*)(__right_value467=string_to_string(c_value_483))),((char*)(__right_value468=string_to_string(c_value_483))),((char*)(__right_value469=string_to_string(type_name_511))),((char*)(__right_value470=string_to_string(c_value_483))),((char*)(__right_value471=string_to_string(type_name_511))),((char*)(__right_value472=string_to_string(c_value_483)))))),no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                __right_value466 = come_decrement_ref_count2(__right_value466, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value467 = come_decrement_ref_count2(__right_value467, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value468 = come_decrement_ref_count2(__right_value468, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value481=xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, %%s); } \n",((char*)(__right_value474=string_to_string(c_value_483))),((char*)(__right_value475=string_to_string(c_value_483))),((char*)(__right_value476=string_to_string(c_value_483))),((char*)(__right_value477=string_to_string(type_name_511))),((char*)(__right_value478=string_to_string(c_value_483))),((char*)(__right_value479=string_to_string(type_name_511))),((char*)(__right_value480=string_to_string(c_value_483)))))),no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                __right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value478 = come_decrement_ref_count2(__right_value478, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,((char*)(__right_value489=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, (void*)0):0),\n",((char*)(__right_value482=string_to_string(c_value_483))),((char*)(__right_value483=string_to_string(c_value_483))),((char*)(__right_value484=string_to_string(c_value_483))),((char*)(__right_value485=string_to_string(type_name_511))),((char*)(__right_value486=string_to_string(c_value_483))),((char*)(__right_value487=string_to_string(type_name_511))),((char*)(__right_value488=string_to_string(c_value_483)))))),no_decrement,no_free,force_delete_);
                                __right_value482 = come_decrement_ref_count2(__right_value482, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value484 = come_decrement_ref_count2(__right_value484, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value486 = come_decrement_ref_count2(__right_value486, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value487 = come_decrement_ref_count2(__right_value487, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value488 = come_decrement_ref_count2(__right_value488, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value497=xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, (void*)0); } \n",((char*)(__right_value490=string_to_string(c_value_483))),((char*)(__right_value491=string_to_string(c_value_483))),((char*)(__right_value492=string_to_string(c_value_483))),((char*)(__right_value493=string_to_string(type_name_511))),((char*)(__right_value494=string_to_string(c_value_483))),((char*)(__right_value495=string_to_string(type_name_511))),((char*)(__right_value496=string_to_string(c_value_483)))))),no_decrement,no_free,force_delete_);
                                __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value491 = come_decrement_ref_count2(__right_value491, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value495 = come_decrement_ref_count2(__right_value495, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value496 = come_decrement_ref_count2(__right_value496, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value497 = come_decrement_ref_count2(__right_value497, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        type_name_511 = come_decrement_ref_count2(type_name_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(                    c_value_483) {
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_483,c_value_483,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                            else {
                                add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_483,c_value_483,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_483,c_value_483,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_483,c_value_483,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                }
            }
        }
        c_value_483 = come_decrement_ref_count2(c_value_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_488 = come_decrement_ref_count2(fun_name2_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj144=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_480);
    come_call_finalizer3(__dec_obj144,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj145=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_479);
    come_call_finalizer3(__dec_obj145,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_479,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_512;
void* __right_value498 = (void*)0;
struct sType* type2_513;
char* result_514;
struct sType* result_type_515;
struct list$1CVALUEph* stack_saved_516;
struct list$1voidph* right_value_objects_517;
void* __right_value499 = (void*)0;
char* c_value_518;
struct sClass* klass_519;
char* class_name_520;
char* fun_name_521;
struct sFun* cloner_522;
char* fun_name2_523;
void* __right_value500 = (void*)0;
char* none_generics_name_524;
void* __right_value501 = (void*)0;
struct sType* obj_type_525;
void* __right_value502 = (void*)0;
char* __dec_obj146;
void* __right_value503 = (void*)0;
char* fun_name3_526;
void* __right_value504 = (void*)0;
struct sGenericsFun* generics_fun_527;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var7 = (void*)0;
char* name_530=0;
_Bool err_531=0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct tuple2$2sTypephcharph* __result285__;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
char* __dec_obj155;
int i_534;
void* __right_value518 = (void*)0;
char* new_fun_name_535;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
char* __dec_obj156;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun_536=0;
char* new_fun_name_537=0;
char* __dec_obj157;
void* __right_value523 = (void*)0;
char* __dec_obj158;
struct sType* __dec_obj159;
void* __right_value524 = (void*)0;
struct sType* __dec_obj160;
void* __right_value525 = (void*)0;
char* __dec_obj161;
void* __right_value526 = (void*)0;
char* __dec_obj162;
void* __right_value527 = (void*)0;
struct sType* __dec_obj163;
void* __right_value528 = (void*)0;
char* type_name_538;
void* __right_value529 = (void*)0;
char* __dec_obj164;
void* __right_value530 = (void*)0;
char* __dec_obj165;
struct list$1voidph* __dec_obj166;
struct list$1CVALUEph* __dec_obj167;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple2$2sTypephcharph* __result286__;
fun_name2_523 = (void*)0;
memset(&i_534, 0, sizeof(int));
    in_clone_object_512=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_513=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_514=((void*)0);
    result_type_515=((void*)0);
    stack_saved_516=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_517=info->right_value_objects;
    c_value_518=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_519=type->mClass;
    class_name_520=klass_519->mName;
    fun_name_521="clone";
    cloner_522=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_524=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_525=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj146=fun_name2_523;
        fun_name2_523=(char*)come_increment_ref_count(create_method_name(obj_type_525,(_Bool)0,fun_name_521,info,(_Bool)1));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_526=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_524,fun_name_521));
        generics_fun_527=((struct sGenericsFun*)(__right_value504=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_526,((void*)0))));
        come_call_finalizer3(__right_value504,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_527) {
            multiple_assign_var7=((struct tuple2$2charphbool*)(__right_value506=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_523)),generics_fun_527,obj_type_525,info)));
            name_530=(char*)come_increment_ref_count(multiple_assign_var7->v1);
            err_531=multiple_assign_var7->v2;
            come_call_finalizer3(__right_value506,tuple2$2charphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_531) {
                __result285__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value514=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 793, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 793, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                name_530 = come_decrement_ref_count2(name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_524 = come_decrement_ref_count2(none_generics_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_526 = come_decrement_ref_count2(fun_name3_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_513,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_514 = come_decrement_ref_count2(result_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_518 = come_decrement_ref_count2(c_value_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_523 = come_decrement_ref_count2(fun_name2_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value514,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result285__;
            }
            cloner_522=((struct sFun*)(__right_value515=map$2charphsFunphp_operator_load_element(info->funcs,name_530)));
            come_call_finalizer3(__right_value515,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            name_530 = come_decrement_ref_count2(name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_522=((struct sFun*)(__right_value516=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_523)));
            come_call_finalizer3(__right_value516,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
        none_generics_name_524 = come_decrement_ref_count2(none_generics_name_524, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_525,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_526 = come_decrement_ref_count2(fun_name3_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj155=fun_name2_523;
        fun_name2_523=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_521,info,(_Bool)1));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_534=128-1;        i_534>=1;        i_534--        ){
            new_fun_name_535=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_523,i_534));
            cloner_522=((struct sFun*)(__right_value519=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_535)));
            come_call_finalizer3(__right_value519,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_522) {
                __dec_obj156=fun_name2_523;
                fun_name2_523=(char*)come_increment_ref_count(__builtin_string(new_fun_name_535));
                __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_535 = come_decrement_ref_count2(new_fun_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_535 = come_decrement_ref_count2(new_fun_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_522==((void*)0)) {
            cloner_522=((struct sFun*)(__right_value521=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_523)));
            come_call_finalizer3(__right_value521,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    cloner_522==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value522=create_cloner_automatically(type,fun_name_521,info)));
        fun_536=multiple_assign_var8->v1;
        new_fun_name_537=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value522,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj157=fun_name2_523;
        fun_name2_523=(char*)come_increment_ref_count(new_fun_name_537);
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_522=fun_536;
        new_fun_name_537 = come_decrement_ref_count2(new_fun_name_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    type->mAnyOriginalType) {
        __dec_obj158=result_514;
        result_514=(char*)come_increment_ref_count(xsprintf("come_call_cloner((void*)0, %s)",c_value_518));
        __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    cloner_522!=((void*)0)) {
        __dec_obj159=result_type_515;
        result_type_515=(struct sType*)come_increment_ref_count(cloner_522->mResultType);
        come_call_finalizer3(__dec_obj159,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj160=result_type_515;
        result_type_515=(struct sType*)come_increment_ref_count(solve_generics(result_type_515,type,info));
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj161=result_514;
        result_514=(char*)come_increment_ref_count(xsprintf("come_call_cloner(%s, %s)",fun_name2_523,c_value_518));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj162=result_514;
            result_514=(char*)come_increment_ref_count(append_stackframe(result_514,result_type_515,info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj163=result_type_515;
        result_type_515=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_513->mHeap=(_Bool)1;
        type_name_538=(char*)come_increment_ref_count(make_type_name_string(type2_513,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj164=result_514;
        result_514=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\")",type_name_538,c_value_518,info->sname,info->sline,type_name_538));
        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj165=result_514;
            result_514=(char*)come_increment_ref_count(append_stackframe(result_514,result_type_515,info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_name_538 = come_decrement_ref_count2(type_name_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj166=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_517);
    come_call_finalizer3(__dec_obj166,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj167=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_516);
    come_call_finalizer3(__dec_obj167,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object_512;
    __result286__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value532=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 858, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(result_type_515),(char*)come_increment_ref_count(result_514))));
    come_call_finalizer3(type2_513,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_514 = come_decrement_ref_count2(result_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_515,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_516,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_518 = come_decrement_ref_count2(c_value_518, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_523 = come_decrement_ref_count2(fun_name2_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value532,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static struct sGenericsFun* map$2charphsGenericsFunphp_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_528;
unsigned int it_529;
struct sGenericsFun* __result278__;
struct sGenericsFun* __result279__;
struct sGenericsFun* __result280__;
struct sGenericsFun* __result281__;
    hash_528=string_get_hash_key(((char*)key))%self->size;
    it_529=hash_528;
    while((_Bool)1) {
        if(        self->item_existance[it_529]) {
            if(            string_equals(self->keys[it_529],key)) {
                __result278__ = gComeFunResultObject = __result_obj__ = self->items[it_529];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
            it_529++;
            if(            it_529>=self->size) {
                it_529=0;
            }
            else if(            it_529==hash_528) {
                __result279__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result279__;
            }
        }
        else {
            __result280__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result280__;
        }
    }
    __result281__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj147;
char* __dec_obj148;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj147=self->v1;
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj148=self->v2;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result282__;
void* __right_value510 = (void*)0;
struct tuple2$2sTypephcharph* result_533;
void* __right_value511 = (void*)0;
struct sType* __dec_obj149;
void* __right_value512 = (void*)0;
char* __dec_obj150;
struct tuple2$2sTypephcharph* __result283__;
    if(    self==(void*)0) {
        __result282__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    result_533=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj149=result_533->v1;
        result_533->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj150=result_533->v2;
        result_533->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_533;
    come_call_finalizer3(result_533,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_532;
    result_532=0;
    result_532+=int_get_hash_key(((int)self->v1));
    result_532+=int_get_hash_key(((int)self->v2));
    return result_532;
}

static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj151;
char* __dec_obj152;
struct tuple2$2sTypephcharph* __result284__;
    __dec_obj151=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj152=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result284__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj153;
char* __dec_obj154;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj153=self->v1;
            come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj154=self->v2;
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_539;
struct list$1CVALUEph* stack_saved_540;
struct list$1voidph* right_value_objects_541;
struct sClass* klass_542;
char* class_name_543;
char* fun_name_544;
void* __right_value533 = (void*)0;
struct sType* type2_545;
struct sFun* cloner_546;
char* fun_name2_547;
void* __right_value534 = (void*)0;
char* none_generics_name_548;
void* __right_value535 = (void*)0;
struct sType* obj_type_549;
void* __right_value536 = (void*)0;
char* __dec_obj168;
void* __right_value537 = (void*)0;
char* fun_name3_550;
void* __right_value538 = (void*)0;
struct sGenericsFun* generics_fun_551;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var9 = (void*)0;
char* name_552=0;
_Bool err_553=0;
_Bool __result287__;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
char* __dec_obj169;
int i_554;
void* __right_value544 = (void*)0;
char* new_fun_name_555;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
char* __dec_obj170;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var10 = (void*)0;
struct sFun* fun_556=0;
char* new_fun_name_557=0;
char* __dec_obj171;
struct list$1voidph* __dec_obj172;
struct list$1CVALUEph* __dec_obj173;
_Bool __result288__;
fun_name2_547 = (void*)0;
memset(&i_554, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_539=((void*)0);
    stack_saved_540=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_541=info->right_value_objects;
    klass_542=type->mClass;
    class_name_543=klass_542->mName;
    fun_name_544="equals";
    type2_545=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_545->mHeap=(_Bool)0;
    cloner_546=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_548=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_549=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj168=fun_name2_547;
        fun_name2_547=(char*)come_increment_ref_count(create_method_name(obj_type_549,(_Bool)0,fun_name_544,info,(_Bool)1));
        __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_550=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_548,fun_name_544));
        generics_fun_551=((struct sGenericsFun*)(__right_value538=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_550,((void*)0))));
        come_call_finalizer3(__right_value538,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_551) {
            multiple_assign_var9=((struct tuple2$2charphbool*)(__right_value540=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_547)),generics_fun_551,obj_type_549,info)));
            name_552=(char*)come_increment_ref_count(multiple_assign_var9->v1);
            err_553=multiple_assign_var9->v2;
            come_call_finalizer3(__right_value540,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_553) {
                __result287__ = (_Bool)0;
                name_552 = come_decrement_ref_count2(name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_548 = come_decrement_ref_count2(none_generics_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_550 = come_decrement_ref_count2(fun_name3_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_539 = come_decrement_ref_count2(result_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_540,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_547 = come_decrement_ref_count2(fun_name2_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result287__;
            }
            else {
                cloner_546=((struct sFun*)(__right_value541=map$2charphsFunphp_operator_load_element(info->funcs,name_552)));
                come_call_finalizer3(__right_value541,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
            name_552 = come_decrement_ref_count2(name_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_546=((struct sFun*)(__right_value542=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_547)));
            come_call_finalizer3(__right_value542,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        none_generics_name_548 = come_decrement_ref_count2(none_generics_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_549,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_550 = come_decrement_ref_count2(fun_name3_550, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj169=fun_name2_547;
        fun_name2_547=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_544,info,(_Bool)1));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_554=128-1;        i_554>=1;        i_554--        ){
            new_fun_name_555=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_547,i_554));
            cloner_546=((struct sFun*)(__right_value545=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_555)));
            come_call_finalizer3(__right_value545,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_546) {
                __dec_obj170=fun_name2_547;
                fun_name2_547=(char*)come_increment_ref_count(__builtin_string(new_fun_name_555));
                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_555 = come_decrement_ref_count2(new_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_555 = come_decrement_ref_count2(new_fun_name_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_546==((void*)0)) {
            cloner_546=((struct sFun*)(__right_value547=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_547)));
            come_call_finalizer3(__right_value547,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_546==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var10=((struct tuple2$2sFunpcharph*)(__right_value548=create_equals_automatically(type,fun_name_544,info)));
        fun_556=multiple_assign_var10->v1;
        new_fun_name_557=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        come_call_finalizer3(__right_value548,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj171=fun_name2_547;
        fun_name2_547=(char*)come_increment_ref_count(new_fun_name_557);
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_546=fun_556;
        new_fun_name_557 = come_decrement_ref_count2(new_fun_name_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj172=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_541);
    come_call_finalizer3(__dec_obj172,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj173=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_540);
    come_call_finalizer3(__dec_obj173,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result288__ = (_Bool)1;
    result_539 = come_decrement_ref_count2(result_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_540,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_545,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_547 = come_decrement_ref_count2(fun_name2_547, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result288__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_558;
struct list$1CVALUEph* stack_saved_559;
struct list$1voidph* right_value_objects_560;
struct sClass* klass_561;
char* class_name_562;
char* fun_name_563;
void* __right_value549 = (void*)0;
struct sType* type2_564;
struct sFun* cloner_565;
char* fun_name2_566;
void* __right_value550 = (void*)0;
char* none_generics_name_567;
void* __right_value551 = (void*)0;
struct sType* obj_type_568;
void* __right_value552 = (void*)0;
char* __dec_obj174;
void* __right_value553 = (void*)0;
char* fun_name3_569;
void* __right_value554 = (void*)0;
struct sGenericsFun* generics_fun_570;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var11 = (void*)0;
char* name_571=0;
_Bool err_572=0;
_Bool __result289__;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
char* __dec_obj175;
int i_573;
void* __right_value560 = (void*)0;
char* new_fun_name_574;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
char* __dec_obj176;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var12 = (void*)0;
struct sFun* fun_575=0;
char* new_fun_name_576=0;
char* __dec_obj177;
struct list$1voidph* __dec_obj178;
struct list$1CVALUEph* __dec_obj179;
_Bool __result290__;
fun_name2_566 = (void*)0;
memset(&i_573, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_558=((void*)0);
    stack_saved_559=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_560=info->right_value_objects;
    klass_561=type->mClass;
    class_name_562=klass_561->mName;
    fun_name_563="operator_equals";
    type2_564=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_564->mHeap=(_Bool)0;
    cloner_565=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_567=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_568=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj174=fun_name2_566;
        fun_name2_566=(char*)come_increment_ref_count(create_method_name(obj_type_568,(_Bool)0,fun_name_563,info,(_Bool)1));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_569=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_567,fun_name_563));
        generics_fun_570=((struct sGenericsFun*)(__right_value554=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_569,((void*)0))));
        come_call_finalizer3(__right_value554,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_570) {
            multiple_assign_var11=((struct tuple2$2charphbool*)(__right_value556=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_566)),generics_fun_570,obj_type_568,info)));
            name_571=(char*)come_increment_ref_count(multiple_assign_var11->v1);
            err_572=multiple_assign_var11->v2;
            come_call_finalizer3(__right_value556,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_572) {
                __result289__ = (_Bool)0;
                name_571 = come_decrement_ref_count2(name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_567 = come_decrement_ref_count2(none_generics_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_569 = come_decrement_ref_count2(fun_name3_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_558 = come_decrement_ref_count2(result_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_564,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_566 = come_decrement_ref_count2(fun_name2_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result289__;
            }
            cloner_565=((struct sFun*)(__right_value557=map$2charphsFunphp_operator_load_element(info->funcs,name_571)));
            come_call_finalizer3(__right_value557,sFun_finalize, 0, 1, 0, 0, (void*)0);
            name_571 = come_decrement_ref_count2(name_571, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_565=((struct sFun*)(__right_value558=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_566)));
            come_call_finalizer3(__right_value558,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        none_generics_name_567 = come_decrement_ref_count2(none_generics_name_567, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_568,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_569 = come_decrement_ref_count2(fun_name3_569, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj175=fun_name2_566;
        fun_name2_566=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_563,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_573=128-1;        i_573>=1;        i_573--        ){
            new_fun_name_574=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_566,i_573));
            cloner_565=((struct sFun*)(__right_value561=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_574)));
            come_call_finalizer3(__right_value561,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_565) {
                __dec_obj176=fun_name2_566;
                fun_name2_566=(char*)come_increment_ref_count(__builtin_string(new_fun_name_574));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_574 = come_decrement_ref_count2(new_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_574 = come_decrement_ref_count2(new_fun_name_574, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_565==((void*)0)) {
            cloner_565=((struct sFun*)(__right_value563=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_566)));
            come_call_finalizer3(__right_value563,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_565==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var12=((struct tuple2$2sFunpcharph*)(__right_value564=create_operator_equals_automatically(type,fun_name_563,info)));
        fun_575=multiple_assign_var12->v1;
        new_fun_name_576=(char*)come_increment_ref_count(multiple_assign_var12->v2);
        come_call_finalizer3(__right_value564,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj177=fun_name2_566;
        fun_name2_566=(char*)come_increment_ref_count(new_fun_name_576);
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_565=fun_575;
        new_fun_name_576 = come_decrement_ref_count2(new_fun_name_576, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj178=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_560);
    come_call_finalizer3(__dec_obj178,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj179=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_559);
    come_call_finalizer3(__dec_obj179,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result290__ = (_Bool)1;
    result_558 = come_decrement_ref_count2(result_558, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_559,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_564,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_566 = come_decrement_ref_count2(fun_name2_566, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result290__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_577;
struct list$1CVALUEph* stack_saved_578;
struct list$1voidph* right_value_objects_579;
struct sClass* klass_580;
char* class_name_581;
char* fun_name_582;
void* __right_value565 = (void*)0;
struct sType* type2_583;
struct sFun* cloner_584;
char* fun_name2_585;
void* __right_value566 = (void*)0;
char* none_generics_name_586;
void* __right_value567 = (void*)0;
struct sType* obj_type_587;
void* __right_value568 = (void*)0;
char* __dec_obj180;
void* __right_value569 = (void*)0;
char* fun_name3_588;
void* __right_value570 = (void*)0;
struct sGenericsFun* generics_fun_589;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
struct tuple2$2charphbool* multiple_assign_var13 = (void*)0;
char* name_590=0;
_Bool err_591=0;
_Bool __result291__;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* __dec_obj181;
int i_592;
void* __right_value576 = (void*)0;
char* new_fun_name_593;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __dec_obj182;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var14 = (void*)0;
struct sFun* fun_594=0;
char* new_fun_name_595=0;
char* __dec_obj183;
struct list$1voidph* __dec_obj184;
struct list$1CVALUEph* __dec_obj185;
_Bool __result292__;
fun_name2_585 = (void*)0;
memset(&i_592, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    result_577=((void*)0);
    stack_saved_578=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_579=info->right_value_objects;
    klass_580=type->mClass;
    class_name_581=klass_580->mName;
    fun_name_582="operator_not_equals";
    type2_583=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_583->mHeap=(_Bool)0;
    cloner_584=((void*)0);
    if(    list$1voidphp_length(type->mGenericsTypes)>0) {
        none_generics_name_586=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_587=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj180=fun_name2_585;
        fun_name2_585=(char*)come_increment_ref_count(create_method_name(obj_type_587,(_Bool)0,fun_name_582,info,(_Bool)1));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_588=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_586,fun_name_582));
        generics_fun_589=((struct sGenericsFun*)(__right_value570=map$2charphsGenericsFunphp_at(info->generics_funcs,fun_name3_588,((void*)0))));
        come_call_finalizer3(__right_value570,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_589) {
            multiple_assign_var13=((struct tuple2$2charphbool*)(__right_value572=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_585)),generics_fun_589,obj_type_587,info)));
            name_590=(char*)come_increment_ref_count(multiple_assign_var13->v1);
            err_591=multiple_assign_var13->v2;
            come_call_finalizer3(__right_value572,tuple2$2charphboolp_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_591) {
                __result291__ = (_Bool)0;
                name_590 = come_decrement_ref_count2(name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                none_generics_name_586 = come_decrement_ref_count2(none_generics_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_588 = come_decrement_ref_count2(fun_name3_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_577 = come_decrement_ref_count2(result_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_578,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_583,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_585 = come_decrement_ref_count2(fun_name2_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result291__;
            }
            cloner_584=((struct sFun*)(__right_value573=map$2charphsFunphp_operator_load_element(info->funcs,name_590)));
            come_call_finalizer3(__right_value573,sFun_finalize, 0, 1, 0, 0, (void*)0);
            name_590 = come_decrement_ref_count2(name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            cloner_584=((struct sFun*)(__right_value574=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_585)));
            come_call_finalizer3(__right_value574,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        none_generics_name_586 = come_decrement_ref_count2(none_generics_name_586, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_588 = come_decrement_ref_count2(fun_name3_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj181=fun_name2_585;
        fun_name2_585=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_582,info,(_Bool)1));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_592=128-1;        i_592>=1;        i_592--        ){
            new_fun_name_593=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_585,i_592));
            cloner_584=((struct sFun*)(__right_value577=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_593)));
            come_call_finalizer3(__right_value577,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_584) {
                __dec_obj182=fun_name2_585;
                fun_name2_585=(char*)come_increment_ref_count(__builtin_string(new_fun_name_593));
                __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_593 = come_decrement_ref_count2(new_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_593 = come_decrement_ref_count2(new_fun_name_593, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_584==((void*)0)) {
            cloner_584=((struct sFun*)(__right_value579=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_585)));
            come_call_finalizer3(__right_value579,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_584==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var14=((struct tuple2$2sFunpcharph*)(__right_value580=create_operator_not_equals_automatically(type,fun_name_582,info)));
        fun_594=multiple_assign_var14->v1;
        new_fun_name_595=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        come_call_finalizer3(__right_value580,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj183=fun_name2_585;
        fun_name2_585=(char*)come_increment_ref_count(new_fun_name_595);
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_584=fun_594;
        new_fun_name_595 = come_decrement_ref_count2(new_fun_name_595, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj184=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(right_value_objects_579);
    come_call_finalizer3(__dec_obj184,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj185=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_578);
    come_call_finalizer3(__dec_obj185,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result292__ = (_Bool)1;
    result_577 = come_decrement_ref_count2(result_577, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_578,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_583,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_585 = come_decrement_ref_count2(fun_name2_585, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result292__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_596;
struct list$1voidph* right_value_objects_597;
int n_598;
struct list$1voidph* o2_saved_599;
struct sRightValueObject* it_600;
struct sType* type_601;
void* __right_value581 = (void*)0;
struct sType* type2_602;
void* __right_value582 = (void*)0;
struct sType* __dec_obj186;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_596=(_Bool)0;
    right_value_objects_597=info->right_value_objects;
    n_598=0;
    for(    o2_saved_599=(right_value_objects_597),it_600=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_599)));    !list$1voidphp_end((o2_saved_599));    it_600=((struct sRightValueObject*)list$1voidphp_next((o2_saved_599)))    ){
        if(        it_600&&!it_600->mFreed) {
            if(            string_operator_equals(it_600->mFunName,info->come_fun->mName)&&it_600->mBlockLevel==info->block_level&&!it_600->mStored) {
                type_601=(struct sType*)come_increment_ref_count(it_600->mType);
                type2_602=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_601));
                if(                info->generics_type) {
                    __dec_obj186=type_601;
                    type_601=(struct sType*)come_increment_ref_count(solve_generics(type2_602,info->generics_type,info));
                    come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                free_object(type_601,it_600->mVarName,!it_600->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_600->mFreed=(_Bool)1;
                free_right_value_596=(_Bool)1;
                come_call_finalizer3(type_601,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_602,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_598++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_603;
void* __right_value583 = (void*)0;
struct sVar* var__604;
struct sVar* __result297__;
struct sVar* __result298__;
    it_603=table;
    while(it_603) {
        var__604=((struct sVar*)(__right_value583=map$2charphsVarphp_operator_load_element(it_603->mVars,name)));
        come_call_finalizer3(__right_value583,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        if(        var__604) {
            __result297__ = gComeFunResultObject = __result_obj__ = var__604;
            gComeFunResultObject = (void*)0;
            return __result297__;
        }
        it_603=it_603->mParent;
    }
    __result298__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_605;
unsigned int hash_606;
unsigned int it_607;
struct sVar* __result293__;
struct sVar* __result294__;
struct sVar* __result295__;
struct sVar* __result296__;
default_value_605 = (void*)0;
    memset(&default_value_605,0,sizeof(struct sVar*));
    hash_606=string_get_hash_key(((char*)key))%self->size;
    it_607=hash_606;
    while((_Bool)1) {
        if(        self->item_existance[it_607]) {
            if(            string_equals(self->keys[it_607],key)) {
                __result293__ = gComeFunResultObject = __result_obj__ = self->items[it_607];
                come_call_finalizer3(default_value_605,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result293__;
            }
            it_607++;
            if(            it_607>=self->size) {
                it_607=0;
            }
            else if(            it_607==hash_606) {
                __result294__ = gComeFunResultObject = __result_obj__ = default_value_605;
                come_call_finalizer3(default_value_605,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result294__;
            }
        }
        else {
            __result295__ = gComeFunResultObject = __result_obj__ = default_value_605;
            come_call_finalizer3(default_value_605,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
    }
    __result296__ = gComeFunResultObject = __result_obj__ = default_value_605;
    come_call_finalizer3(default_value_605,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj187;
char* __dec_obj188;
struct sType* __dec_obj189;
char* __dec_obj190;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj187=self->mName;
            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj188=self->mCValueName;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj189=self->mType;
            come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj190=self->mFunName;
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_608;
char* it_611;
void* __right_value584 = (void*)0;
struct sVar* p_614;
struct sType* type_615;
struct sClass* klass_616;
void* __right_value585 = (void*)0;
char* c_value_617;
void* __right_value586 = (void*)0;
struct sType* type2_618;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_608=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_611=map$2charphsVarphp_begin((o2_saved_608));    !map$2charphsVarphp_end((o2_saved_608));    it_611=map$2charphsVarphp_next((o2_saved_608))    ){
        p_614=((struct sVar*)(__right_value584=map$2charphsVarphp_operator_load_element(table->mVars,it_611)));
        come_call_finalizer3(__right_value584,sVar_finalize, 0, 1, 0, 0, (void*)0);
        type_615=p_614->mType;
        klass_616=type_615->mClass;
        if(        type_615->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_614->mCValueName,p_614->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_614->mCValueName,p_614->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_614->mCValueName!=((void*)0)&&string_operator_equals(p_614->mCValueName,ret_value->mCValueName)&&type_615->mHeap) {
            free_object(type_615,p_614->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else if(        type_615->mHeap&&p_614->mCValueName) {
            free_object(type_615,p_614->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        }
        else if(        klass_616->mStruct&&p_614->mCValueName&&type_615->mAllocaValue&&!type_615->mNoCallingDestructor) {
            c_value_617=(char*)come_increment_ref_count(xsprintf("(&%s)",p_614->mCValueName));
            type2_618=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_615));
            type2_618->mPointerNum++;
            free_object(type2_618,c_value_617,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            c_value_617 = come_decrement_ref_count2(c_value_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_608,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarphp_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_609;
char* __result299__;
char* __result300__;
char* result_610;
char* __result301__;
result_609 = (void*)0;
result_610 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_609,0,sizeof(char*));
        __result299__ = gComeFunResultObject = __result_obj__ = result_609;
        gComeFunResultObject = (void*)0;
        return __result299__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result300__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    memset(&result_610,0,sizeof(char*));
    __result301__ = gComeFunResultObject = __result_obj__ = result_610;
    gComeFunResultObject = (void*)0;
    return __result301__;
}

static _Bool map$2charphsVarphp_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarphp_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_612;
char* __result302__;
char* __result303__;
char* result_613;
char* __result304__;
result_612 = (void*)0;
result_613 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_612,0,sizeof(char*));
        __result302__ = gComeFunResultObject = __result_obj__ = result_612;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result303__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result303__;
    }
    memset(&result_613,0,sizeof(char*));
    __result304__ = gComeFunResultObject = __result_obj__ = result_613;
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_619;
int i_620;
    for(    i_619=0;    i_619<self->size;    i_619++    ){
        if(        self->item_existance[i_619]) {
            if(            1) {
                come_call_finalizer3(self->items[i_619],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_620=0;    i_620<self->size;    i_620++    ){
        if(        self->item_existance[i_620]) {
            if(            1) {
                self->keys[i_620] = come_decrement_ref_count2(self->keys[i_620], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_621;
    if(    gComeGC||gComeC) {
        return;
    }
    it_621=info->lv_table;
    if(    it_621==info->come_fun->mBlock->mVarTable) {
        free_objects(it_621,ret_value,info);
    }
    else {
        while(it_621!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_621,ret_value,info);
            it_621=it_621->mParent;
        }
        free_objects(it_621,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_622;
struct sVarTable* current_loop_vtable_623;
struct sVarTable* it_624;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_622=((void*)0);
    current_loop_vtable_623=info->current_loop_vtable;
    if(    current_loop_vtable_623!=((void*)0)) {
        it_624=info->lv_table;
        while(it_624!=current_loop_vtable_623) {
            free_objects(it_624,ret_value_622,info);
            it_624=it_624->mParent;
        }
        free_objects(it_624,ret_value_622,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
char* __result305__;
void* __right_value592 = (void*)0;
char* var_name_626;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
char* __result306__;
void* __right_value601 = (void*)0;
char* __result307__;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value591=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value587=string_to_string(info->sname))),((char*)(__right_value588=int_to_string(info->sline))),((char*)(__right_value589=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value590=charp_to_string(c_value))))));
            __right_value587 = come_decrement_ref_count2(__right_value587, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value589 = come_decrement_ref_count2(__right_value589, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result305__;
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_625=0;
        ++n_625;
        var_name_626=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_625));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value593=make_define_var(type,var_name_626,(_Bool)0,info))));
        __right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result306__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value600=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value594=string_to_string(info->sname))),((char*)(__right_value595=int_to_string(info->sline))),((char*)(__right_value596=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value597=string_to_string(var_name_626))),((char*)(__right_value598=charp_to_string(c_value))),((char*)(__right_value599=string_to_string(var_name_626))))));
        var_name_626 = come_decrement_ref_count2(var_name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value597 = come_decrement_ref_count2(__right_value597, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value600 = come_decrement_ref_count2(__right_value600, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result306__;
        var_name_626 = come_decrement_ref_count2(var_name_626, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result307__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value601=__builtin_string(c_value)));
    __right_value601 = come_decrement_ref_count2(__right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_627;
char* it_628;
void* __right_value602 = (void*)0;
struct sVar* p_629;
struct sType* type_630;
struct sClass* klass_631;
_Bool __result308__;
_Bool __result309__;
_Bool __result310__;
_Bool __result311__;
_Bool __result312__;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_627=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_628=map$2charphsVarphp_begin((o2_saved_627));    !map$2charphsVarphp_end((o2_saved_627));    it_628=map$2charphsVarphp_next((o2_saved_627))    ){
        p_629=((struct sVar*)(__right_value602=map$2charphsVarphp_operator_load_element(table->mVars,it_628)));
        come_call_finalizer3(__right_value602,sVar_finalize, 0, 1, 0, 0, (void*)0);
        type_630=p_629->mType;
        klass_631=type_630->mClass;
        if(        type_630->mChannel) {
            __result308__ = (_Bool)1;
            come_call_finalizer3(o2_saved_627,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result308__;
        }
        else if(        ret_value!=((void*)0)&&p_629->mCValueName!=((void*)0)&&string_operator_equals(p_629->mCValueName,ret_value->mCValueName)&&type_630->mHeap) {
            __result309__ = (_Bool)1;
            come_call_finalizer3(o2_saved_627,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result309__;
        }
        else if(        type_630->mHeap&&p_629->mCValueName) {
            if(            type_630->mFunctionParam) {
                __result310__ = (_Bool)1;
                come_call_finalizer3(o2_saved_627,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result310__;
            }
            else {
                __result311__ = (_Bool)1;
                come_call_finalizer3(o2_saved_627,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result311__;
            }
        }
        else if(        klass_631->mStruct&&p_629->mCValueName&&type_630->mAllocaValue&&!type_630->mNoCallingDestructor) {
            __result312__ = (_Bool)1;
            come_call_finalizer3(o2_saved_627,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result312__;
        }
    }
    come_call_finalizer3(o2_saved_627,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_632;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_632=info->lv_table;
    if(    it_632==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_632,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_632!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_632,ret_value,info)) {
                return (_Bool)1;
            }
            it_632=it_632->mParent;
        }
        if(        existance_free_objects(it_632,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1voidph* right_value_objects_633;
struct list$1voidph* o2_saved_634;
struct sRightValueObject* it_635;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_633=info->right_value_objects;
    for(    o2_saved_634=(right_value_objects_633),it_635=((struct sRightValueObject*)list$1voidphp_begin((o2_saved_634)));    !list$1voidphp_end((o2_saved_634));    it_635=((struct sRightValueObject*)list$1voidphp_next((o2_saved_634)))    ){
        if(        it_635&&!it_635->mFreed) {
            if(            string_operator_equals(it_635->mFunName,info->come_fun->mName)&&it_635->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

