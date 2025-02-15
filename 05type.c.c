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

struct tuple4$4list$1voidphplist$1charphplist$1charphpbool
{
    struct list$1voidph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
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
unsigned int come_call_equals(void* fun, void* mem, void* mem2);
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
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2charphcharph* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
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
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static void sType_finalize(struct sType* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static _Bool list$1charphp_contained(struct list$1charph* self, char* item);
static char* list$1charphp_begin(struct list$1charph* self);
static _Bool list$1charphp_end(struct list$1charph* self);
static char* list$1charphp_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static void* list$1voidphp_begin(struct list$1voidph* self);
static _Bool list$1voidphp_end(struct list$1voidph* self);
static void* list$1voidphp_next(struct list$1voidph* self);
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidph_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static _Bool tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* left, struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* right);
static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self);
static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
static _Bool tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* left, struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* right);
static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1voidphp_length(struct list$1voidph* self);
static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self);
static _Bool tuple2$2sTypephcharph_equals(struct tuple2$2sTypephcharph* left, struct tuple2$2sTypephcharph* right);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self);
static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self);
static _Bool tuple3$3sTypephcharphbool_equals(struct tuple3$3sTypephcharphbool* left, struct tuple3$3sTypephcharphbool* right);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charphp_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self);
static char* map$2charphsClassphp_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charpp_reset(struct list$1charp* self);
static char* list$1charpp_begin(struct list$1charp* self);
static _Bool list$1charpp_end(struct list$1charp* self);
static char* list$1charpp_next(struct list$1charp* self);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right);
static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item);
static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value250 = (void*)0;
struct sClass* klass_308;
void* __right_value251 = (void*)0;
struct sType* type_316;
void* __right_value252 = (void*)0;
struct sClass* generics_class_326;
void* __right_value253 = (void*)0;
_Bool generics_type_name_327;
void* __right_value254 = (void*)0;
_Bool mgenerics_type_name_333;
    klass_308=((struct sClass*)(__right_value250=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value250,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_316=((struct sType*)(__right_value251=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value251,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_326=((struct sClass*)(__right_value252=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer3(__right_value252,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_327=list$1charphp_contained(info->generics_type_names,((char*)(__right_value253=__builtin_string(buf))));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_333=list$1charphp_contained(info->method_generics_type_names,((char*)(__right_value254=__builtin_string(buf))));
    __right_value254 = come_decrement_ref_count2(__right_value254, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_316&&type_316->mTypedef)||(klass_308&&klass_308->mNumber)||(klass_308&&klass_308->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_326||generics_type_name_327||mgenerics_type_name_333||klass_308||type_316||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_309;
unsigned int hash_310;
unsigned int it_311;
struct sClass* __result229__;
struct sClass* __result230__;
struct sClass* __result231__;
struct sClass* __result232__;
default_value_309 = (void*)0;
    memset(&default_value_309,0,sizeof(struct sClass*));
    hash_310=string_get_hash_key(((char*)key))%self->size;
    it_311=hash_310;
    while((_Bool)1) {
        if(        self->item_existance[it_311]) {
            if(            string_equals(self->keys[it_311],key)) {
                __result229__ = gComeFunResultObject = __result_obj__ = self->items[it_311];
                come_call_finalizer3(default_value_309,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result229__;
            }
            it_311++;
            if(            it_311>=self->size) {
                it_311=0;
            }
            else if(            it_311==hash_310) {
                __result230__ = gComeFunResultObject = __result_obj__ = default_value_309;
                come_call_finalizer3(default_value_309,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result230__;
            }
        }
        else {
            __result231__ = gComeFunResultObject = __result_obj__ = default_value_309;
            come_call_finalizer3(default_value_309,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result231__;
        }
    }
    __result232__ = gComeFunResultObject = __result_obj__ = default_value_309;
    come_call_finalizer3(default_value_309,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj31;
struct list$1voidph* __dec_obj32;
char* __dec_obj34;
char* __dec_obj35;
char* __dec_obj36;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj31=self->mName;
            __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj32=self->mFields;
            come_call_finalizer3(__dec_obj32,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj34=self->mDeclareSName;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj35=self->mParentClassName;
            __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj36=self->mAttribute;
            __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_312;
struct list_item$1voidph* prev_it_313;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            come_call_finalizer3(__dec_obj33,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_314;
struct list_item$1voidph* prev_it_315;
    it_314=self->head;
    while(it_314!=((void*)0)) {
        prev_it_315=it_314;
        it_314=it_314->next;
        come_call_finalizer3(prev_it_315,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_317;
unsigned int hash_318;
unsigned int it_319;
struct sType* __result233__;
struct sType* __result234__;
struct sType* __result235__;
struct sType* __result236__;
default_value_317 = (void*)0;
    memset(&default_value_317,0,sizeof(struct sType*));
    hash_318=string_get_hash_key(((char*)key))%self->size;
    it_319=hash_318;
    while((_Bool)1) {
        if(        self->item_existance[it_319]) {
            if(            string_equals(self->keys[it_319],key)) {
                __result233__ = gComeFunResultObject = __result_obj__ = self->items[it_319];
                come_call_finalizer3(default_value_317,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result233__;
            }
            it_319++;
            if(            it_319>=self->size) {
                it_319=0;
            }
            else if(            it_319==hash_318) {
                __result234__ = gComeFunResultObject = __result_obj__ = default_value_317;
                come_call_finalizer3(default_value_317,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
        }
        else {
            __result235__ = gComeFunResultObject = __result_obj__ = default_value_317;
            come_call_finalizer3(default_value_317,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result235__;
        }
    }
    __result236__ = gComeFunResultObject = __result_obj__ = default_value_317;
    come_call_finalizer3(default_value_317,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1voidph* __dec_obj42;
struct list$1sNodeph* __dec_obj43;
struct list$1voidph* __dec_obj45;
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
            __dec_obj37=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj38=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj38,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj39=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj42,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj45,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_330;
    for(    it_330=list$1charphp_begin(self);    !list$1charphp_end(self);    it_330=list$1charphp_next(self)    ){
        if(        string_equals(it_330,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_328;
char* __result237__;
char* __result238__;
char* result_329;
char* __result239__;
result_328 = (void*)0;
result_329 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_328,0,sizeof(char*));
        __result237__ = gComeFunResultObject = __result_obj__ = result_328;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    self->it=self->head;
    if(    self->it) {
        __result238__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    memset(&result_329,0,sizeof(char*));
    __result239__ = gComeFunResultObject = __result_obj__ = result_329;
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_331;
char* __result240__;
char* __result241__;
char* result_332;
char* __result242__;
result_331 = (void*)0;
result_332 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_331,0,sizeof(char*));
        __result240__ = gComeFunResultObject = __result_obj__ = result_331;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result241__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    memset(&result_332,0,sizeof(char*));
    __result242__ = gComeFunResultObject = __result_obj__ = result_332;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

void skip_paren(struct sInfo* info){
int nest_334;
    nest_334=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_334++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_334--;
            if(            nest_334==0) {
                break;
            }
        }
        else if(        *info->p==0) {
            err_msg(info,"invalid the source end. require )");
            break;
        }
        else {
            info->p++;
        }
    }
}

_Bool parsecmp(char* str, struct sInfo* info){
char c_335;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_335=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_335==59||c_335==32||c_335==9||c_335==10||c_335==10||c_335==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
void* __right_value256 = (void*)0;
struct buffer* buf_336;
void* __right_value257 = (void*)0;
_Bool _if_conditional1;
void* __right_value258 = (void*)0;
char* __result243__;
void* __right_value259 = (void*)0;
char* result_337;
void* __right_value260 = (void*)0;
_Bool _if_conditional2;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
char* __result248__;
char* __result249__;
    buf_336=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 96, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_336,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value257=buffer_to_string(buf_336))))==0)),    (__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result243__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value258=__builtin_string("")));
        come_call_finalizer3(buf_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value258 = come_decrement_ref_count2(__right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_337=(char*)come_increment_ref_count(buffer_to_string(buf_336));
    if(    (_if_conditional2=(info->module_params&&((char*)(__right_value260=map$2charphcharphp_operator_load_element(info->module_params,result_337))))),    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional2) {
        __result248__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value262=__builtin_string(((char*)(__right_value261=map$2charphcharphp_operator_load_element(info->module_params,result_337))))));
        come_call_finalizer3(buf_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_337 = come_decrement_ref_count2(result_337, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    __result249__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(buf_336,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_337 = come_decrement_ref_count2(result_337, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_338;
unsigned int hash_339;
unsigned int it_340;
char* __result244__;
char* __result245__;
char* __result246__;
char* __result247__;
default_value_338 = (void*)0;
    memset(&default_value_338,0,sizeof(char*));
    hash_339=string_get_hash_key(((char*)key))%self->size;
    it_340=hash_339;
    while((_Bool)1) {
        if(        self->item_existance[it_340]) {
            if(            string_equals(self->keys[it_340],key)) {
                __result244__ = gComeFunResultObject = __result_obj__ = self->items[it_340];
                default_value_338 = come_decrement_ref_count2(default_value_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result244__;
            }
            it_340++;
            if(            it_340>=self->size) {
                it_340=0;
            }
            else if(            it_340==hash_339) {
                __result245__ = gComeFunResultObject = __result_obj__ = default_value_338;
                default_value_338 = come_decrement_ref_count2(default_value_338, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result245__;
            }
        }
        else {
            __result246__ = gComeFunResultObject = __result_obj__ = default_value_338;
            default_value_338 = come_decrement_ref_count2(default_value_338, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result246__;
        }
    }
    __result247__ = gComeFunResultObject = __result_obj__ = default_value_338;
    default_value_338 = come_decrement_ref_count2(default_value_338, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_341;
int sline_342;
char* buf_343;
void* __right_value263 = (void*)0;
char* __dec_obj55;
void* __right_value264 = (void*)0;
char* __dec_obj56;
char* __result250__;
buf_343 = (void*)0;
    p_341=info->p;
    sline_342=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj55=buf_343;
        buf_343=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj56=buf_343;
        buf_343=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_341;
    info->sline=sline_342;
    __result250__ = gComeFunResultObject = __result_obj__ = buf_343;
    buf_343 = come_decrement_ref_count2(buf_343, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

void skip_spaces_and_lf(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
}

void skip_spaces_and_lf2(struct sInfo* info){
    while((_Bool)1) {
        if(        *info->p==32||*info->p==9) {
            info->p++;
        }
        else if(        *info->p==10) {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

void parse_sharp_v5(struct sInfo* info){
int line_344;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct buffer* fname_345;
void* __right_value267 = (void*)0;
char* __dec_obj57;
int nest_346;
    while(1) {
        if(        *info->p==35) {
            skip_spaces_and_lf2(info);
            info->p++;
            skip_spaces_and_lf2(info);
            if(            strmemcmp(info->p,"pragma")) {
                while(*info->p) {
                    if(                    *info->p==10) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            else if(            xisdigit(*info->p)) {
                line_344=0;
                fname_345=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 195, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
                while(xisdigit(*info->p)) {
                    line_344=line_344*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_345,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_344;
                __dec_obj57=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_345));
                __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_345,buffer_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            *info->p==34) {
                info->p++;
                while(*info->p!=34) {
                    info->p++;
                }
                while(*info->p!=10) {
                    info->p++;
                }
                info->p++;
            }
            skip_spaces_and_lf2(info);
        }
        else if(        *info->p==47&&*(info->p+1)==42) {
            nest_346=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_346++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_346--;
                    if(                    nest_346==0) {
                        skip_spaces_and_lf2(info);
                        break;
                    }
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        *info->p==47&&*(info->p+1)==47) {
            info->p+=2;
            while(1) {
                if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    skip_spaces_and_lf2(info);
                    break;
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        strmemcmp(info->p,"__extension__")) {
            info->p+=strlen("__extension__");
            skip_spaces_and_lf2(info);
        }
        else {
            break;
        }
    }
}

_Bool is_contained_generics_class(struct sType* type, struct sInfo* info){
struct list$1voidph* o2_saved_347;
struct sType* it_350;
_Bool __result257__;
    for(    o2_saved_347=(struct list$1voidph*)come_increment_ref_count((type->mGenericsTypes)),it_350=((struct sType*)list$1voidphp_begin((o2_saved_347)));    !list$1voidphp_end((o2_saved_347));    it_350=((struct sType*)list$1voidphp_next((o2_saved_347)))    ){
        if(        is_contained_generics_class(it_350,info)) {
            __result257__ = (_Bool)1;
            come_call_finalizer3(o2_saved_347,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result257__;
        }
    }
    come_call_finalizer3(o2_saved_347,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static void* list$1voidphp_begin(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_348;
void* __result251__;
void* __result252__;
void* result_349;
void* __result253__;
result_348 = (void*)0;
result_349 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_348,0,sizeof(void*));
        __result251__ = gComeFunResultObject = __result_obj__ = result_348;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    self->it=self->head;
    if(    self->it) {
        __result252__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    memset(&result_349,0,sizeof(void*));
    __result253__ = gComeFunResultObject = __result_obj__ = result_349;
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static _Bool list$1voidphp_end(struct list$1voidph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidphp_next(struct list$1voidph* self){
void* __result_obj__=(void*)0;
void* result_351;
void* __result254__;
void* __result255__;
void* result_352;
void* __result256__;
result_351 = (void*)0;
result_352 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_351,0,sizeof(void*));
        __result254__ = gComeFunResultObject = __result_obj__ = result_351;
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result255__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    memset(&result_352,0,sizeof(void*));
    __result256__ = gComeFunResultObject = __result_obj__ = result_352;
    gComeFunResultObject = (void*)0;
    return __result256__;
}

struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1voidph* param_types_356;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* param_names_357;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1charph* param_default_parametors_358;
_Bool var_args_359;
void* __right_value278 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* type__363;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool void_param_383;
char* p_384;
int sline_385;
void* __right_value316 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_386=0;
char* param_name_387=0;
_Bool err_388=0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result278__;
void* __right_value320 = (void*)0;
struct sType* param_type2_391;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* p_395;
_Bool no_comma_396;
void* __right_value326 = (void*)0;
struct sNode* node_397;
char* p2_398;
void* __right_value327 = (void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result283__;
    param_types_356=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 324, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    param_names_357=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 325, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    param_default_parametors_358=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 326, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    var_args_359=(_Bool)0;
    if(    in_constructor_) {
        list$1charphp_add(param_names_357,(char*)come_increment_ref_count(xsprintf("self")));
        type__363=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__363->mHeap=(_Bool)1;
        list$1voidphp_add(param_types_356,(struct sType*)come_increment_ref_count(type__363));
        list$1charphp_add(param_default_parametors_358,((void*)0));
        come_call_finalizer3(type__363,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charphp_add(param_names_357,(char*)come_increment_ref_count(xsprintf("self")));
        list$1voidphp_add(param_types_356,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1charphp_add(param_default_parametors_358,((void*)0));
    }
    expected_next_character(40,info);
    void_param_383=(_Bool)0;
    {
        p_384=info->p;
        sline_385=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_383=(_Bool)1;
            }
        }
        info->p=p_384;
        info->sline=sline_385;
    }
    if(    void_param_383) {
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
        }
    }
    else {
        while((_Bool)1) {
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            parse_sharp_v5(info);
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value316=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_386=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_387=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_388=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value316,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_388) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result278__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)(__right_value319=tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool**)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "05type.c", 388, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key, tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals)),(struct list$1voidph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_387 = come_decrement_ref_count2(param_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_356,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_358,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value319,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
            param_type2_391=(struct sType*)come_increment_ref_count(solve_generics(param_type_386,info->generics_type,info));
            param_type2_391->mFunctionParam=(_Bool)1;
            list$1voidphp_push_back(param_types_356,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_391)));
            list$1charphp_push_back(param_names_357,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_387)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_395=info->p;
                no_comma_396=info->no_comma;
                info->no_comma=(_Bool)1;
                node_397=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_396;
                p2_398=info->p;
                char buf_399[p2_398-p_395+1];
                memset(&buf_399, 0, sizeof(char)                *(p2_398-p_395+1)                );
                memcpy(buf_399,p_395,p2_398-p_395);
                buf_399[p2_398-p_395]=0;
                list$1charphp_push_back(param_default_parametors_358,(char*)come_increment_ref_count(__builtin_string(buf_399)));
                if(node_397) { node_397 = come_decrement_ref_count2(node_397, ((struct sNode*)node_397)->finalize, ((struct sNode*)node_397)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charphp_push_back(param_default_parametors_358,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_359=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_387 = come_decrement_ref_count2(param_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_391,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_387 = come_decrement_ref_count2(param_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_391,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_386,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_387 = come_decrement_ref_count2(param_name_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_391,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value333=tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool**)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "05type.c", 448, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals)),(struct list$1voidph*)come_increment_ref_count(param_types_356),(struct list$1charph*)come_increment_ref_count(param_names_357),(struct list$1charph*)come_increment_ref_count(param_default_parametors_358),var_args_359)));
    come_call_finalizer3(param_types_356,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_357,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_358,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value333,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result258__;
void* __right_value268 = (void*)0;
struct list$1voidph* result_354;
struct list$1voidph* __result259__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_354=(struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "list$1voidph_clone", 3, "struct list$1voidph", list$1voidph_finalize, list$1voidph_clone, list$1voidph_get_hash_key, list$1voidph_equals));
    if(    self!=((void*)0)) {
        result_354->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_354->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_354->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_354->it=self->it;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_354;
    come_call_finalizer3(result_354,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static unsigned int list$1voidph_get_hash_key(struct list$1voidph* self){
unsigned int result_353;
    result_353=0;
    result_353+=int_get_hash_key(((int)self->head));
    result_353+=int_get_hash_key(((int)self->tail));
    result_353+=int_get_hash_key(((int)self->len));
    result_353+=int_get_hash_key(((int)self->it));
    return result_353;
}

static _Bool list$1voidph_equals(struct list$1voidph* left, struct list$1voidph* right){
    if(    !list_item$1voidph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right){
    if(    !come_call_equals((void*)0, left->item, right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_355;
    result_355=0;
    result_355+=int_get_hash_key(((int)self->head));
    result_355+=int_get_hash_key(((int)self->tail));
    result_355+=int_get_hash_key(((int)self->len));
    result_355+=int_get_hash_key(((int)self->it));
    return result_355;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
    if(    !list_item$1voidph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1voidph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result260__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_360;
char* __dec_obj58;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_361;
char* __dec_obj59;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_362;
char* __dec_obj60;
struct list$1charph* __result261__;
    if(    self->len==0) {
        litem_360=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1335, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj58=litem_360->item;
        litem_360->item=(char*)come_increment_ref_count(item);
        __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1345, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj59=litem_361->item;
        litem_361->item=(char*)come_increment_ref_count(item);
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1355, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj60=litem_362->item;
        litem_362->item=(char*)come_increment_ref_count(item);
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result261__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result262__;
void* __right_value279 = (void*)0;
struct sType* result_369;
void* __right_value280 = (void*)0;
struct sType* __dec_obj61;
void* __right_value281 = (void*)0;
struct sType* __dec_obj62;
void* __right_value282 = (void*)0;
struct sType* __dec_obj63;
void* __right_value283 = (void*)0;
char* __dec_obj64;
void* __right_value284 = (void*)0;
char* __dec_obj65;
void* __right_value291 = (void*)0;
struct list$1voidph* __dec_obj69;
void* __right_value299 = (void*)0;
struct list$1sNodeph* __dec_obj73;
void* __right_value300 = (void*)0;
struct list$1voidph* __dec_obj74;
void* __right_value304 = (void*)0;
struct list$1charph* __dec_obj75;
void* __right_value305 = (void*)0;
struct sType* __dec_obj76;
void* __right_value306 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value307 = (void*)0;
struct sType* __dec_obj78;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value309 = (void*)0;
char* __dec_obj80;
void* __right_value310 = (void*)0;
char* __dec_obj81;
void* __right_value311 = (void*)0;
char* __dec_obj82;
void* __right_value312 = (void*)0;
char* __dec_obj83;
struct sType* __result274__;
    if(    self==(void*)0) {
        __result262__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_369=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_369->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj61=result_369->mNoSolvedGenericsType;
        result_369->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj61,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj62=result_369->mOriginalLoadVarType;
        result_369->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj63=result_369->mAnyOriginalType;
        result_369->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj64=result_369->mInterfaceName;
        result_369->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj65=result_369->mGenericsName;
        result_369->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj69=result_369->mGenericsTypes;
        result_369->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj69,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj73=result_369->mArrayNum;
        result_369->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj73,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj74=result_369->mParamTypes;
        result_369->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj74,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj75=result_369->mParamNames;
        result_369->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj75,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj76=result_369->mResultType;
        result_369->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj76,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj77=result_369->mAlignas;
        result_369->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj78=result_369->mChannelType;
        result_369->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_369->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_369->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_369->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_369->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_369->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_369->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_369->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_369->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_369->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_369->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_369->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_369->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_369->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_369->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_369->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_369->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_369->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_369->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj79=result_369->mSizeNum;
        result_369->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_369->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj80=result_369->mOriginalTypeName;
        result_369->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_369->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_369->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_369->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_369->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_369->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_369->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_369->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj81=result_369->mAsmName;
        result_369->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_369->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_369->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_369->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_369->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_369->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj82=result_369->mTupleName;
        result_369->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj83=result_369->mAttribute;
        result_369->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_369->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_369->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_369->mCreateVTable=self->mCreateVTable;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_369;
    come_call_finalizer3(result_369,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_364;
    result_364=0;
    result_364+=int_get_hash_key(((int)self->mClass));
    result_364+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_364+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_364+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_364+=int_get_hash_key(((int)self->mAnyClass));
    result_364+=int_get_hash_key(((int)self->mInterfaceName));
    result_364+=int_get_hash_key(((int)self->mGenericsName));
    result_364+=int_get_hash_key(((int)self->mGenericsTypes));
    result_364+=int_get_hash_key(((int)self->mArrayNum));
    result_364+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_364+=int_get_hash_key(((int)self->mParamTypes));
    result_364+=int_get_hash_key(((int)self->mParamNames));
    result_364+=int_get_hash_key(((int)self->mResultType));
    result_364+=int_get_hash_key(((int)self->mVarArgs));
    result_364+=int_get_hash_key(((int)self->mAlignas));
    result_364+=int_get_hash_key(((int)self->mChannelType));
    result_364+=int_get_hash_key(((int)self->mUnsigned));
    result_364+=int_get_hash_key(((int)self->mShort));
    result_364+=int_get_hash_key(((int)self->mLong));
    result_364+=int_get_hash_key(((int)self->mLongLong));
    result_364+=int_get_hash_key(((int)self->mConstant));
    result_364+=int_get_hash_key(((int)self->mAtomic));
    result_364+=int_get_hash_key(((int)self->mRegister));
    result_364+=int_get_hash_key(((int)self->mVolatile));
    result_364+=int_get_hash_key(((int)self->mStatic));
    result_364+=int_get_hash_key(((int)self->mUniq));
    result_364+=int_get_hash_key(((int)self->mRecord));
    result_364+=int_get_hash_key(((int)self->mExtern));
    result_364+=int_get_hash_key(((int)self->mRestrict));
    result_364+=int_get_hash_key(((int)self->mImmutable));
    result_364+=int_get_hash_key(((int)self->mHeap));
    result_364+=int_get_hash_key(((int)self->mChannel));
    result_364+=int_get_hash_key(((int)self->mNoHeap));
    result_364+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_364+=int_get_hash_key(((int)self->mException));
    result_364+=int_get_hash_key(((int)self->mPointerNum));
    result_364+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_364+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_364+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_364+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_364+=int_get_hash_key(((int)self->mSizeNum));
    result_364+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_364+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_364+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_364+=int_get_hash_key(((int)self->mFunctionParam));
    result_364+=int_get_hash_key(((int)self->mAllocaValue));
    result_364+=int_get_hash_key(((int)self->mGenericsStruct));
    result_364+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_364+=int_get_hash_key(((int)self->mInline));
    result_364+=int_get_hash_key(((int)self->mNullValue));
    result_364+=int_get_hash_key(((int)self->mGuardValue));
    result_364+=int_get_hash_key(((int)self->mAsmName));
    result_364+=int_get_hash_key(((int)self->mArrayPointerType));
    result_364+=int_get_hash_key(((int)self->mLambdaArray));
    result_364+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_364+=int_get_hash_key(((int)self->mTypedef));
    result_364+=int_get_hash_key(((int)self->mMultipleTypes));
    result_364+=int_get_hash_key(((int)self->mOriginIsArray));
    result_364+=int_get_hash_key(((int)self->mTupleName));
    result_364+=int_get_hash_key(((int)self->mAttribute));
    result_364+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_364+=int_get_hash_key(((int)self->mGenerate));
    result_364+=int_get_hash_key(((int)self->mCreateVTable));
    return result_364;
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

static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
struct list_item$1sNodeph* it_365;
struct list_item$1sNodeph* it2_366;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_365=left->head;
    it2_366=right->head;
    while(it_365!=((void*)0)) {
        if(        !sNode_equals(it_365->item,it2_366->item)) {
            return (_Bool)0;
        }
        it_365=it_365->next;
        it2_366=it2_366->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_367;
struct list_item$1charph* it2_368;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_367=left->head;
    it2_368=right->head;
    while(it_367!=((void*)0)) {
        if(        !string_equals(it_367->item,it2_368->item)) {
            return (_Bool)0;
        }
        it_367=it_367->next;
        it2_368=it2_368->next;
    }
    return (_Bool)1;
}

static struct list$1voidph* list$1voidphp_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result263__;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1voidph* result_370;
struct list_item$1voidph* it_371;
void* __right_value290 = (void*)0;
struct list$1voidph* __result265__;
    if(    self==((void*)0)) {
        __result263__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_370=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1321, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_371=self->head;
    while(it_371!=((void*)0)) {
        list$1voidphp_add(result_370,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_371->item)));
        it_371=it_371->next;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_370;
    come_call_finalizer3(result_370,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
struct list_item$1voidph* litem_372;
void* __dec_obj66;
void* __right_value288 = (void*)0;
struct list_item$1voidph* litem_373;
void* __dec_obj67;
void* __right_value289 = (void*)0;
struct list_item$1voidph* litem_374;
void* __dec_obj68;
struct list$1voidph* __result264__;
    if(    self->len==0) {
        litem_372=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value287=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1335, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_372->prev=((void*)0);
        litem_372->next=((void*)0);
        __dec_obj66=litem_372->item;
        litem_372->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_372;
        self->head=litem_372;
    }
    else if(    self->len==1) {
        litem_373=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value288=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1345, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_373->prev=self->head;
        litem_373->next=((void*)0);
        __dec_obj67=litem_373->item;
        litem_373->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_373;
        self->head->next=litem_373;
    }
    else {
        litem_374=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value289=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1355, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_374->prev=self->tail;
        litem_374->next=((void*)0);
        __dec_obj68=litem_374->item;
        litem_374->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_374;
        self->tail=litem_374;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result266__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sNodeph* result_375;
struct list_item$1sNodeph* it_376;
void* __right_value298 = (void*)0;
struct list$1sNodeph* __result271__;
    if(    self==((void*)0)) {
        __result266__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result266__;
    }
    result_375=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1321, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_376=self->head;
    while(it_376!=((void*)0)) {
        list$1sNodephp_add(result_375,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_376->item)));
        it_376=it_376->next;
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_375;
    come_call_finalizer3(result_375,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result267__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1sNodeph* litem_377;
struct sNode* __dec_obj70;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_378;
struct sNode* __dec_obj71;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_379;
struct sNode* __dec_obj72;
struct list$1sNodeph* __result268__;
    if(    self->len==0) {
        litem_377=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1335, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj70=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1345, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj71=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1355, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj72=litem_379->item;
        litem_379->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result269__;
void* __right_value297 = (void*)0;
struct sNode* result_380;
struct sNode* __result270__;
    if(    self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_380=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_380->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_380->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_380->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_380->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_380->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_380->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_380->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_380->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_380->kind=self->kind;
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_380;
    come_call_finalizer2((void*)0, result_380, result_380 ? ((struct sNode*)result_380)->finalize:(void*)0, result_380 ? ((struct sNode*)result_380)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result272__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* result_381;
struct list_item$1charph* it_382;
void* __right_value303 = (void*)0;
struct list$1charph* __result273__;
    if(    self==((void*)0)) {
        __result272__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_381=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1321, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_382=self->head;
    while(it_382!=((void*)0)) {
        list$1charphp_add(result_381,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_382->item)));
        it_382=it_382->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_381;
    come_call_finalizer3(result_381,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj84;
char* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj84=self->v1;
            come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj85=self->v2;
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result275__;
void* __right_value317 = (void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* result_390;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result276__;
    if(    self==(void*)0) {
        __result275__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_390=(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1voidphplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool)*(1), "tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone", 3, "struct tuple4$4list$1voidphplist$1charphplist$1charphpbool", tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, tuple4$4list$1voidphplist$1charphplist$1charphpbool_clone, tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key, tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals));
    if(    self!=((void*)0)) {
        result_390->v1=self->v1;
    }
    if(    self!=((void*)0)) {
        result_390->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_390->v3=self->v3;
    }
    if(    self!=((void*)0)) {
        result_390->v4=self->v4;
    }
    __result276__ = gComeFunResultObject = __result_obj__ = result_390;
    come_call_finalizer3(result_390,tuple4$4list$1voidphplist$1charphplist$1charphpbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static unsigned int tuple4$4list$1voidphplist$1charphplist$1charphpbool_get_hash_key(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
unsigned int result_389;
    result_389=0;
    result_389+=int_get_hash_key(((int)self->v1));
    result_389+=int_get_hash_key(((int)self->v2));
    result_389+=int_get_hash_key(((int)self->v3));
    result_389+=int_get_hash_key(((int)self->v4));
    return result_389;
}

static _Bool tuple4$4list$1voidphplist$1charphplist$1charphpbool_equals(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* left, struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* right){
    if(    !list$1voidphp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* tuple4$4list$1voidphplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* __result277__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void tuple4$4list$1voidphplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1voidphplist$1charphplist$1charphpbool* self){
}

static struct list$1voidph* list$1voidphp_push_back(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value321 = (void*)0;
struct list_item$1voidph* litem_392;
void* __dec_obj86;
void* __right_value322 = (void*)0;
struct list_item$1voidph* litem_393;
void* __dec_obj87;
void* __right_value323 = (void*)0;
struct list_item$1voidph* litem_394;
void* __dec_obj88;
struct list$1voidph* __result279__;
    if(    self->len==0) {
        litem_392=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value321=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1405, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_392->prev=((void*)0);
        litem_392->next=((void*)0);
        __dec_obj86=litem_392->item;
        litem_392->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj86,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_392;
        self->head=litem_392;
    }
    else if(    self->len==1) {
        litem_393=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value322=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1415, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_393->prev=self->head;
        litem_393->next=((void*)0);
        __dec_obj87=litem_393->item;
        litem_393->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_393;
        self->head->next=litem_393;
    }
    else {
        litem_394=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value323=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1425, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_394->prev=self->tail;
        litem_394->next=((void*)0);
        __dec_obj88=litem_394->item;
        litem_394->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_394;
        self->tail=litem_394;
    }
    self->len++;
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj89;
struct list$1charph* __dec_obj90;
struct list$1charph* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj89=self->v1;
            come_call_finalizer3(__dec_obj89,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj90=self->v2;
            come_call_finalizer3(__dec_obj90,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj91=self->v3;
            come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result280__;
void* __right_value328 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* result_401;
void* __right_value329 = (void*)0;
struct list$1voidph* __dec_obj92;
void* __right_value330 = (void*)0;
struct list$1charph* __dec_obj93;
void* __right_value331 = (void*)0;
struct list$1charph* __dec_obj94;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result281__;
    if(    self==(void*)0) {
        __result280__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    result_401=(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool)*(1), "tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone", 3, "struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool", tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_clone, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key, tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj92=result_401->v1;
        result_401->v1=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidphp_clone, self->v1));
        come_call_finalizer3(__dec_obj92,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj93=result_401->v2;
        result_401->v2=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v2));
        come_call_finalizer3(__dec_obj93,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj94=result_401->v3;
        result_401->v3=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v3));
        come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_401->v4=self->v4;
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_401;
    come_call_finalizer3(result_401,tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static unsigned int tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_get_hash_key(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
unsigned int result_400;
    result_400=0;
    result_400+=int_get_hash_key(((int)self->v1));
    result_400+=int_get_hash_key(((int)self->v2));
    result_400+=int_get_hash_key(((int)self->v3));
    result_400+=int_get_hash_key(((int)self->v4));
    return result_400;
}

static _Bool tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_equals(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* left, struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* right){
    if(    !list$1voidphp_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !list$1charphp_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v4,right->v4)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* tuple4$4list$1voidphphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self, struct list$1voidph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1voidph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* __result282__;
    __dec_obj95=self->v1;
    self->v1=(struct list$1voidph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj95,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* self){
struct list$1voidph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj98=self->v1;
            come_call_finalizer3(__dec_obj98,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj99=self->v2;
            come_call_finalizer3(__dec_obj99,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj100=self->v3;
            come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value334 = (void*)0;
struct sType* right_type2_402;
struct sType* left_no_solved_generics_type_403;
struct sType* right_no_solved_generics_type_404;
struct sClass* left_class_405;
struct sClass* right_class_406;
_Bool parent_class_407;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* left_type_name_408;
void* __right_value337 = (void*)0;
char* __dec_obj101;
void* __right_value338 = (void*)0;
struct sType* __dec_obj102;
void* __right_value339 = (void*)0;
struct sType* __dec_obj103;
void* __right_value340 = (void*)0;
char* left_type_name_409;
void* __right_value341 = (void*)0;
char* __dec_obj104;
void* __right_value342 = (void*)0;
struct sType* __dec_obj105;
void* __right_value343 = (void*)0;
struct sType* __dec_obj106;
_Bool __result284__;
int i_410;
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* left_type_name_414;
void* __right_value347 = (void*)0;
char* __dec_obj107;
void* __right_value348 = (void*)0;
struct sType* __dec_obj108;
void* __right_value349 = (void*)0;
struct sType* __dec_obj109;
void* __right_value350 = (void*)0;
char* left_type_name_415;
void* __right_value351 = (void*)0;
char* __dec_obj110;
void* __right_value352 = (void*)0;
struct sType* __dec_obj111;
void* __right_value353 = (void*)0;
struct sType* __dec_obj112;
void* __right_value354 = (void*)0;
char* __dec_obj113;
void* __right_value355 = (void*)0;
struct sType* __dec_obj114;
void* __right_value356 = (void*)0;
struct sType* __dec_obj115;
void* __right_value357 = (void*)0;
char* left_type_name_416;
void* __right_value358 = (void*)0;
char* __dec_obj116;
void* __right_value359 = (void*)0;
struct sType* __dec_obj117;
void* __right_value360 = (void*)0;
struct sType* __dec_obj118;
void* __right_value361 = (void*)0;
char* left_type_name_417;
void* __right_value362 = (void*)0;
char* __dec_obj119;
void* __right_value363 = (void*)0;
struct sType* __dec_obj120;
void* __right_value364 = (void*)0;
struct sType* __dec_obj121;
_Bool __result287__;
_Bool __result288__;
_Bool __result289__;
_Bool __result290__;
_Bool __result291__;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct buffer* buf2_418;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* __dec_obj122;
void* __right_value373 = (void*)0;
struct sType* __dec_obj123;
void* __right_value374 = (void*)0;
struct sType* __dec_obj124;
_Bool __result292__;
_Bool __result293__;
_Bool __result294__;
_Bool __result295__;
void* __right_value375 = (void*)0;
char* tmp_419;
void* __right_value376 = (void*)0;
char* __dec_obj125;
void* __right_value377 = (void*)0;
struct sType* __dec_obj126;
void* __right_value378 = (void*)0;
struct sType* __dec_obj127;
_Bool __result296__;
_Bool __result297__;
void* __right_value379 = (void*)0;
char* tmp_420;
void* __right_value380 = (void*)0;
char* __dec_obj128;
void* __right_value381 = (void*)0;
struct sType* __dec_obj129;
_Bool __result298__;
int i_421;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
_Bool __result299__;
    right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_403=((void*)0);
    if(    left_type->mNoSolvedGenericsType) {
        left_no_solved_generics_type_403=left_type->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_404=((void*)0);
    if(    right_type2_402->mNoSolvedGenericsType) {
        right_no_solved_generics_type_404=right_type2_402->mNoSolvedGenericsType;
    }
    left_class_405=left_type->mClass;
    right_class_406=right_type2_402->mClass;
    parent_class_407=(_Bool)0;
    if(    string_operator_not_equals(left_class_405->mName,right_class_406->mName)) {
        while(left_class_405&&right_class_406) {
            if(            string_operator_equals(left_class_405->mName,right_class_406->mName)) {
                parent_class_407=(_Bool)1;
            }
            if(            right_class_406->mParentClassName) {
                right_class_406=((struct sClass*)(__right_value335=map$2charphsClassphp_operator_load_element(info->classes,right_class_406->mParentClassName)));
                come_call_finalizer3(__right_value335,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_406=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
        }
        else if(        left_type->mPointerNum>0&&right_type->mPointerNum>0) {
            if(            string_operator_equals(left_type->mClass->mName,"void")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type->mClass->mName)) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_403&&right_no_solved_generics_type_404) {
        if(        strlen(left_type->mClass->mName)>=strlen("tuple")&&memcmp(left_type->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
            if(            print_err_msg) {
                err_msg(info,"tuple err");
                puts(msg);
                printf("left type is tuple, right type is none tuple\n");
                exit(2);
            }
        }
        else if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes),left_no_solved_generics_type_403->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes),right_no_solved_generics_type_404->mClass->mName,right_type2_402->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_408=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj101=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_408,come_value->c_value));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj102=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj103=right_type2_402;
                right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_408 = come_decrement_ref_count2(left_type_name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes),left_no_solved_generics_type_403->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes),right_no_solved_generics_type_404->mClass->mName,right_type2_402->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_409=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj104=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_409,come_value->c_value));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj105=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj106=right_type2_402;
                right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_409 = come_decrement_ref_count2(left_type_name_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_402->mClass->mName)&&left_type->mPointerNum==right_type2_402->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum>0&&string_operator_equals(left_type->mClass->mName,right_type2_402->mClass->mName)&&(left_type->mPointerNum!=right_type2_402->mPointerNum||left_type->mHeap!=right_type2_402->mHeap)) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_402->mClass->mName)&&(left_type->mPointerNum!=right_type2_402->mPointerNum||left_type->mHeap!=right_type2_402->mHeap)) {
            err_msg(info,"poinetr num err");
            puts(msg);
            printf("left type class_name %s\n",left_type->mClass->mName);
            printf("right type class_name %s\n",right_type2_402->mClass->mName);
            printf("left type pointernum %d\n",left_type->mPointerNum);
            printf("right type pointernum %d\n",right_type->mPointerNum);
            printf("left type heap %d\n",left_type->mHeap);
            printf("right type heap %d\n",right_type->mHeap);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes),left_no_solved_generics_type_403->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes),right_no_solved_generics_type_404->mClass->mName,right_type2_402->mClass->mName);
            exit(2);
        }
        else if(        list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_403->mClass->mName,"void")&&left_no_solved_generics_type_403->mPointerNum>0&&right_no_solved_generics_type_404->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_404->mClass->mName,"void")&&right_no_solved_generics_type_404->mPointerNum>0&&left_no_solved_generics_type_403->mPointerNum>0)) {
            }
            else {
                if(                list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes)!=list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        puts(msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes),left_no_solved_generics_type_403->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes),right_no_solved_generics_type_404->mClass->mName,right_type2_402->mClass->mName);
                        exit(2);
                    }
                    __result284__ = (_Bool)0;
                    come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result284__;
                }
                for(                i_410=0;                i_410<list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes);                i_410++                ){
                    check_assign_type(msg,((struct sType*)((void*)(__right_value344=list$1voidphp_operator_load_element(left_no_solved_generics_type_403->mGenericsTypes,i_410)))),((struct sType*)((void*)(__right_value345=list$1voidphp_operator_load_element(right_no_solved_generics_type_404->mGenericsTypes,i_410)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    come_call_finalizer3(__right_value344,(void*)0, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value345,(void*)0, 0, 1, 0, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_403,right_no_solved_generics_type_404,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    strlen(left_type->mClass->mName)>=strlen("tuple")&&memcmp(left_type->mClass->mName,"tuple",strlen("tuple"))==0&&!(strlen(right_type->mClass->mName)>=strlen("tuple")&&memcmp(right_type->mClass->mName,"tuple",strlen("tuple"))==0)&&(string_operator_not_equals(right_type->mClass->mName,"void")&&right_type->mPointerNum>=1)) {
        if(        print_err_msg) {
            err_msg(info,"tuple err");
            puts(msg);
            printf("left type is tuple, right type is none tuple\n");
            exit(2);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes),left_no_solved_generics_type_403->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes),right_no_solved_generics_type_404->mClass->mName,right_type2_402->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_414=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj107=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_414,come_value->c_value));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj108=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj109=right_type2_402;
            right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_414 = come_decrement_ref_count2(left_type_name_414, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(left_no_solved_generics_type_403->mGenericsTypes),left_no_solved_generics_type_403->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1voidphp_length(right_no_solved_generics_type_404->mGenericsTypes),right_no_solved_generics_type_404->mClass->mName,right_type2_402->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_415=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj110=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_415,come_value->c_value));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj111=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj112=right_type2_402;
            right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_415 = come_decrement_ref_count2(left_type_name_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_402->mHeap&&left_type->mPointerNum>0&&right_type2_402->mPointerNum>0&&string_operator_not_equals(right_type2_402->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum,right_type2_402->mHeap);
        exit(2);
    }
    else if(    parent_class_407&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj113=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj115=right_type2_402;
        right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_416=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj116=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_416,come_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj117=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj118=right_type2_402;
            right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_416 = come_decrement_ref_count2(left_type_name_416, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_417=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_417,come_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_402;
            right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_417 = come_decrement_ref_count2(left_type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_402->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_402->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_402->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_402->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                        exit(2);
                    }
                    __result287__ = (_Bool)0;
                    come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result287__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                    exit(2);
                }
                __result288__ = (_Bool)0;
                come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result288__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_402->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result289__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result289__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_402->mPointerNum==0&&string_operator_equals(right_type2_402->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_402->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result290__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result290__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_402->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_402->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_402->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"void")&&right_type2_402->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result291__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result291__;
        }
        else {
            buf2_418=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 814, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_str(buf2_418,((char*)(__right_value371=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value367=string_to_string(come_value->c_value))),((char*)(__right_value368=string_to_string(info->sname))),((char*)(__right_value369=int_to_string(info->sline))),((char*)(__right_value370=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value371 = come_decrement_ref_count2(__right_value371, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj122=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_418));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj124=right_type2_402;
            right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_418,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_402->mClass->mName,"char")&&right_type2_402->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_402->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_402->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result292__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result292__;
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"void")&&right_type2_402->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result293__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result293__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_402->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_402->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result294__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result294__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_402->mClass->mName,"void")&&right_type2_402->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_402->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_402->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"void")&&right_type2_402->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_402->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result295__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result295__;
        }
        else if(        right_type2_402->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_419=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj125=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_419));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj126=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj127=right_type2_402;
                right_type2_402=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_419 = come_decrement_ref_count2(tmp_419, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_402->mPointerNum>0||(right_type2_402->mPointerNum==0&&right_type2_402->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_402->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_402->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_402->mClass->mName)) {
                if(                print_err_msg) {
                    puts(msg);
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                    exit(2);
                }
                __result296__ = (_Bool)0;
                come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result296__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_402->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
            }
            else if(            list$1sNodephp_length(right_type2_402->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodephp_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum,list$1sNodephp_length(right_type2_402->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_402->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_402->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_402->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_402->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_402->mPointerNum==0&&string_operator_equals(right_type2_402->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            __result297__ = (_Bool)0;
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result297__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_402->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_402->mPointerNum==0) {
            tmp_420=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj128=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_420));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result298__ = (_Bool)1;
            tmp_420 = come_decrement_ref_count2(tmp_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result298__;
            tmp_420 = come_decrement_ref_count2(tmp_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1voidphp_length(left_type->mGenericsTypes)>0) {
            if(            list$1voidphp_length(left_type->mGenericsTypes)!=list$1voidphp_length(right_type2_402->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                puts(msg);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_402->mClass->mName,right_type2_402->mPointerNum);
                exit(2);
            }
            for(            i_421=0;            i_421<list$1voidphp_length(left_type->mGenericsTypes);            i_421++            ){
                check_assign_type(msg,((struct sType*)((void*)(__right_value382=list$1voidphp_operator_load_element(left_type->mGenericsTypes,i_421)))),((struct sType*)((void*)(__right_value383=list$1voidphp_operator_load_element(right_type2_402->mGenericsTypes,i_421)))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                come_call_finalizer3(__right_value382,(void*)0, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value383,(void*)0, 0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result299__ = (_Bool)1;
    come_call_finalizer3(right_type2_402,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result299__;
}

static int list$1voidphp_length(struct list$1voidph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static void* list$1voidphp_operator_load_element(struct list$1voidph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1voidph* it_411;
int i_412;
void* __result285__;
void* default_value_413;
void* __result286__;
default_value_413 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_411=self->head;
    i_412=0;
    while(it_411!=((void*)0)) {
        if(        position==i_412) {
            __result285__ = gComeFunResultObject = __result_obj__ = it_411->item;
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
        it_411=it_411->next;
        i_412++;
    }
    memset(&default_value_413,0,sizeof(void*));
    __result286__ = gComeFunResultObject = __result_obj__ = ((struct sType*)default_value_413);
    come_call_finalizer3(default_value_413, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static int list$1sNodephp_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value384 = (void*)0;
struct sType* result_type_422;
char* var_name_423;
char* p_424;
int sline_425;
void* __right_value385 = (void*)0;
char* word_426;
_Bool between_brace_427;
char* p_428;
int sline_429;
void* __right_value386 = (void*)0;
char* word_430;
void* __right_value387 = (void*)0;
char* __dec_obj130;
void* __right_value388 = (void*)0;
char* __dec_obj131;
_Bool no_comma_432;
void* __right_value389 = (void*)0;
struct sNode* node_433;
struct sNode* __dec_obj132;
char* p_434;
int sline_435;
void* __right_value390 = (void*)0;
char* word_436;
void* __right_value391 = (void*)0;
struct sNode* node_437;
void* __right_value395 = (void*)0;
char* attribute_441;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
char* __dec_obj136;
char* __dec_obj137;
void* __right_value398 = (void*)0;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct tuple2$2sTypephcharph* __result304__;
    result_type_422=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_422->mPointerNum=result_type_422->mTypedefOriginalPointerNum;
    }
    var_name_423=((void*)0);
    {
        p_424=info->p;
        sline_425=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_426=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_426,"const")||string_operator_equals(word_426,"__restrict")||string_operator_equals(word_426,"restrict")||string_operator_equals(word_426,"__user")||string_operator_equals(word_426,"volatile")||string_operator_equals(word_426,"_Nonnull")||string_operator_equals(word_426,"_Nullable")||string_operator_equals(word_426,"_Null_unspecified")||string_operator_equals(word_426,"__user")||string_operator_equals(word_426,"_Addr")) {
            }
            else {
                info->p=p_424;
                info->sline=sline_425;
            }
            word_426 = come_decrement_ref_count2(word_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_424;
            info->sline=sline_425;
        }
    }
    between_brace_427=(_Bool)0;
    {
        p_428=info->p;
        sline_429=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_430=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_430,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_427=(_Bool)1;
                    }
                }
                word_430 = come_decrement_ref_count2(word_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_428;
        info->sline=sline_429;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_422->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_427&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj130=var_name_423;
        var_name_423=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_431=0;
        num_anonymous_var_name_431++;
        __dec_obj131=var_name_423;
        var_name_423=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_431));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_427&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_432=info->no_comma;
        info->no_comma=(_Bool)1;
        node_433=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_432;
        __dec_obj132=result_type_422->mSizeNum;
        result_type_422->mSizeNum=(struct sNode*)come_increment_ref_count(node_433);
        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_433) { node_433 = come_decrement_ref_count2(node_433, ((struct sNode*)node_433)->finalize, ((struct sNode*)node_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_434=info->p;
            sline_435=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_436=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_436,"const")||string_operator_equals(word_436,"__restrict")||string_operator_equals(word_436,"restrict")||string_operator_equals(word_436,"__user")||string_operator_equals(word_436,"volatile")||string_operator_equals(word_436,"_Nonnull")||string_operator_equals(word_436,"_Nullable")||string_operator_equals(word_436,"_Null_unspecified")||string_operator_equals(word_436,"__user")||string_operator_equals(word_436,"_Addr")) {
                }
                else {
                    info->p=p_434;
                    info->sline=sline_435;
                }
                word_436 = come_decrement_ref_count2(word_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_434;
                info->sline=sline_435;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_422->mArrayPointerType=(_Bool)1;
            result_type_422->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_437=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(result_type_422->mArrayNum,(struct sNode*)come_increment_ref_count(node_437));
        parse_sharp_v5(info);
        result_type_422->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_437) { node_437 = come_decrement_ref_count2(node_437, ((struct sNode*)node_437)->finalize, ((struct sNode*)node_437)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_441=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_441,"")) {
        if(        result_type_422->mAttribute) {
            __dec_obj136=result_type_422->mAttribute;
            result_type_422->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_422->mAttribute,((char*)(__right_value396=charp_operator_add(" ",attribute_441)))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj137=result_type_422->mAttribute;
            result_type_422->mAttribute=(char*)come_increment_ref_count(attribute_441);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value398=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value398,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value403=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1138, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals)),(struct sType*)come_increment_ref_count(result_type_422),(char*)come_increment_ref_count(var_name_423))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_422,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_423 = come_decrement_ref_count2(var_name_423, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_441 = come_decrement_ref_count2(attribute_441, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value403,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
struct list_item$1sNodeph* litem_438;
struct sNode* __dec_obj133;
void* __right_value393 = (void*)0;
struct list_item$1sNodeph* litem_439;
struct sNode* __dec_obj134;
void* __right_value394 = (void*)0;
struct list_item$1sNodeph* litem_440;
struct sNode* __dec_obj135;
struct list$1sNodeph* __result300__;
    if(    self->len==0) {
        litem_438=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value392=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1405, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_438->prev=((void*)0);
        litem_438->next=((void*)0);
        __dec_obj133=litem_438->item;
        litem_438->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_438;
        self->head=litem_438;
    }
    else if(    self->len==1) {
        litem_439=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value393=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1415, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_439->prev=self->head;
        litem_439->next=((void*)0);
        __dec_obj134=litem_439->item;
        litem_439->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_439;
        self->head->next=litem_439;
    }
    else {
        litem_440=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value394=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1425, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_440->prev=self->tail;
        litem_440->next=((void*)0);
        __dec_obj135=litem_440->item;
        litem_440->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_440;
        self->tail=litem_440;
    }
    self->len++;
    __result300__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result300__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj138;
char* __dec_obj139;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj138=self->v1;
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj139=self->v2;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj140;
char* __dec_obj141;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj140=self->v1;
            come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj141=self->v2;
            __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result301__;
void* __right_value399 = (void*)0;
struct tuple2$2sTypephcharph* result_443;
void* __right_value400 = (void*)0;
struct sType* __dec_obj142;
void* __right_value401 = (void*)0;
char* __dec_obj143;
struct tuple2$2sTypephcharph* __result302__;
    if(    self==(void*)0) {
        __result301__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_443=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone, tuple2$2sTypephcharph_get_hash_key, tuple2$2sTypephcharph_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj142=result_443->v1;
        result_443->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj143=result_443->v2;
        result_443->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_443;
    come_call_finalizer3(result_443,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static unsigned int tuple2$2sTypephcharph_get_hash_key(struct tuple2$2sTypephcharph* self){
unsigned int result_442;
    result_442=0;
    result_442+=int_get_hash_key(((int)self->v1));
    result_442+=int_get_hash_key(((int)self->v2));
    return result_442;
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
struct sType* __dec_obj144;
char* __dec_obj145;
struct tuple2$2sTypephcharph* __result303__;
    __dec_obj144=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj145=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj146;
char* __dec_obj147;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj146=self->v1;
            come_call_finalizer3(__dec_obj146,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj147=self->v2;
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_444;
int sline_445;
void* __right_value404 = (void*)0;
char* word_446;
int nest_447;
    p_444=info->p;
    sline_445=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_446=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_446,"__attribute")||string_operator_equals(word_446,"__attribute__"))&&*info->p==40) {
            nest_447=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_447++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_447--;
                    if(                    nest_447==0) {
                        break;
                    }
                }
                else if(                *info->p==0) {
                    break;
                }
                else {
                    info->p++;
                }
            }
        }
        else if(        string_operator_equals(word_446,"const")||string_operator_equals(word_446,"__restrict")||string_operator_equals(word_446,"restrict")||string_operator_equals(word_446,"__user")||string_operator_equals(word_446,"volatile")||string_operator_equals(word_446,"_Nonnull")||string_operator_equals(word_446,"_Nullable")||string_operator_equals(word_446,"__nonnull")||string_operator_equals(word_446,"_Null_unspecified")||string_operator_equals(word_446,"__user")||string_operator_equals(word_446,"_Addr")||string_operator_equals(word_446,"__noreturn")||string_operator_equals(word_446,"_noreturn")||string_operator_equals(word_446,"_Noreturn")) {
        }
        else {
            info->p=p_444;
            info->sline=sline_445;
        }
        word_446 = come_decrement_ref_count2(word_446, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_444;
        info->sline=sline_445;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_448;
void* __right_value405 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_449=0;
char* name_450=0;
_Bool err_451=0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct tuple3$3sTypephcharphbool* __result308__;
    no_output_err_448=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value405=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_449=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_450=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_451=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value405,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_448;
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value410=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1195, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type_449),(char*)come_increment_ref_count(name_450),err_451)));
    come_call_finalizer3(type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_450 = come_decrement_ref_count2(name_450, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value410,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj148;
char* __dec_obj149;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj148=self->v1;
            come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj149=self->v2;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphbool* __result305__;
void* __right_value406 = (void*)0;
struct tuple3$3sTypephcharphbool* result_453;
void* __right_value407 = (void*)0;
struct sType* __dec_obj150;
void* __right_value408 = (void*)0;
char* __dec_obj151;
struct tuple3$3sTypephcharphbool* __result306__;
    if(    self==(void*)0) {
        __result305__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result305__;
    }
    result_453=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "tuple3$3sTypephcharphbool_clone", 3, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj150=result_453->v1;
        result_453->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj151=result_453->v2;
        result_453->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_453->v3=self->v3;
    }
    __result306__ = gComeFunResultObject = __result_obj__ = result_453;
    come_call_finalizer3(result_453,tuple3$3sTypephcharphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result306__;
}

static unsigned int tuple3$3sTypephcharphbool_get_hash_key(struct tuple3$3sTypephcharphbool* self){
unsigned int result_452;
    result_452=0;
    result_452+=int_get_hash_key(((int)self->v1));
    result_452+=int_get_hash_key(((int)self->v2));
    result_452+=int_get_hash_key(((int)self->v3));
    return result_452;
}

static _Bool tuple3$3sTypephcharphbool_equals(struct tuple3$3sTypephcharphbool* left, struct tuple3$3sTypephcharphbool* right){
    if(    !sType_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v3,right->v3)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj152;
char* __dec_obj153;
struct tuple3$3sTypephcharphbool* __result307__;
    __dec_obj152=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj153=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result307__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_454;
int head_sline_455;
void* __right_value411 = (void*)0;
char* type_name_456;
_Bool record__457;
_Bool exception__458;
_Bool constant_459;
_Bool static__460;
_Bool volatile__461;
_Bool register__462;
_Bool unsigned__463;
_Bool long__464;
_Bool long_long_465;
_Bool short__466;
_Bool restrict__467;
_Bool struct__468;
_Bool union__469;
_Bool enum__470;
_Bool no_heap_471;
_Bool extern__472;
_Bool inline__473;
_Bool uniq__474;
_Bool tuple__475;
_Bool generate__476;
struct sNode* alignas__477;
_Bool anonymous_type_478;
_Bool anonymous_name_479;
_Bool atomic__480;
_Bool object_interface_481;
void* __right_value412 = (void*)0;
char* __dec_obj154;
void* __right_value413 = (void*)0;
char* __dec_obj155;
void* __right_value414 = (void*)0;
char* __dec_obj156;
int brace_num_482;
void* __right_value415 = (void*)0;
char* __dec_obj157;
int brace_num_483;
void* __right_value416 = (void*)0;
char* __dec_obj158;
void* __right_value417 = (void*)0;
char* __dec_obj159;
void* __right_value418 = (void*)0;
char* __dec_obj160;
void* __right_value419 = (void*)0;
char* __dec_obj161;
void* __right_value420 = (void*)0;
char* __dec_obj162;
void* __right_value421 = (void*)0;
struct sNode* exp_484;
struct sNode* __dec_obj163;
void* __right_value422 = (void*)0;
char* __dec_obj164;
void* __right_value423 = (void*)0;
char* __dec_obj165;
void* __right_value424 = (void*)0;
char* __dec_obj166;
void* __right_value425 = (void*)0;
char* __dec_obj167;
void* __right_value426 = (void*)0;
char* __dec_obj168;
void* __right_value427 = (void*)0;
char* __dec_obj169;
void* __right_value428 = (void*)0;
char* __dec_obj170;
void* __right_value429 = (void*)0;
char* __dec_obj171;
void* __right_value430 = (void*)0;
char* __dec_obj172;
void* __right_value431 = (void*)0;
char* __dec_obj173;
char* p_485;
int sline_486;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
char* __dec_obj174;
void* __right_value434 = (void*)0;
char* __dec_obj175;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
char* __dec_obj176;
char* p_487;
int sline_488;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct tuple3$3sTypephcharphbool* __result309__;
char* p_489;
int sline_490;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple3$3sTypephcharphbool* __result310__;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sNode* node_491;
_Bool Value_492;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
struct tuple3$3sTypephcharphbool* __result311__;
char* p_493;
int sline_494;
void* __right_value447 = (void*)0;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* __dec_obj177;
void* __right_value450 = (void*)0;
char* __dec_obj178;
void* __right_value451 = (void*)0;
char* __dec_obj179;
char* p_495;
int sline_496;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct tuple3$3sTypephcharphbool* __result312__;
void* __right_value455 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_497=0;
char* name_498=0;
_Bool err_499=0;
char* p_500;
int sline_501;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple3$3sTypephcharphbool* __result313__;
void* __right_value460 = (void*)0;
char* __dec_obj180;
void* __right_value461 = (void*)0;
char* __dec_obj181;
void* __right_value462 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_502=0;
char* name_503=0;
_Bool err_504=0;
char* p_505;
int sline_506;
void* __right_value463 = (void*)0;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
struct tuple3$3sTypephcharphbool* __result314__;
char* p_507;
int sline_508;
void* __right_value466 = (void*)0;
char* __dec_obj182;
void* __right_value467 = (void*)0;
char* __dec_obj183;
void* __right_value468 = (void*)0;
char* __dec_obj184;
void* __right_value469 = (void*)0;
char* __dec_obj185;
void* __right_value470 = (void*)0;
char* __dec_obj186;
void* __right_value471 = (void*)0;
char* __dec_obj187;
void* __right_value472 = (void*)0;
char* __dec_obj188;
char* p_509;
int sline_510;
void* __right_value473 = (void*)0;
char* __dec_obj189;
char* p_511;
int sline_512;
void* __right_value474 = (void*)0;
char* __dec_obj190;
void* __right_value475 = (void*)0;
char* __dec_obj191;
void* __right_value476 = (void*)0;
char* __dec_obj192;
char* p_513;
int sline_514;
void* __right_value477 = (void*)0;
char* __dec_obj193;
void* __right_value478 = (void*)0;
char* __dec_obj194;
void* __right_value479 = (void*)0;
char* __dec_obj195;
void* __right_value480 = (void*)0;
char* __dec_obj196;
void* __right_value481 = (void*)0;
char* __dec_obj197;
void* __right_value482 = (void*)0;
char* __dec_obj198;
void* __right_value483 = (void*)0;
char* __dec_obj199;
void* __right_value484 = (void*)0;
char* __dec_obj200;
void* __right_value485 = (void*)0;
char* __dec_obj201;
void* __right_value486 = (void*)0;
char* __dec_obj202;
void* __right_value487 = (void*)0;
char* __dec_obj203;
char* p_515;
int sline_516;
void* __right_value488 = (void*)0;
char* __dec_obj204;
void* __right_value489 = (void*)0;
char* __dec_obj205;
void* __right_value490 = (void*)0;
char* attribute_517;
int pointer_num_518;
_Bool heap_519;
_Bool refference_520;
_Bool no_refference_521;
_Bool channel_522;
_Bool any_class_523;
_Bool vtable_524;
char* tuple_name_525;
void* __right_value491 = (void*)0;
char* __dec_obj206;
_Bool lambda_flag_526;
char* pX_527;
int slineX_528;
void* __right_value492 = (void*)0;
struct sType* type_529;
char* var_name_530;
_Bool function_pointer_flag_531;
char* p_532;
int sline_533;
void* __right_value493 = (void*)0;
char* word_534;
_Bool var_name_between_brace_535;
char* p_536;
int sline_537;
void* __right_value494 = (void*)0;
char* word_538;
void* __right_value495 = (void*)0;
char* __dec_obj207;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* node_540;
_Bool Value_541;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple3$3sTypephcharphbool* __result315__;
int pointer_num_542;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj208;
void* __right_value502 = (void*)0;
char* __dec_obj209;
void* __right_value503 = (void*)0;
struct sNode* node_543;
_Bool Value_544;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct tuple3$3sTypephcharphbool* __result316__;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct sType* __dec_obj210;
void* __right_value508 = (void*)0;
char* __dec_obj211;
void* __right_value509 = (void*)0;
struct sNode* node_545;
_Bool Value_546;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct tuple3$3sTypephcharphbool* __result317__;
int pointer_num_547;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sType* __dec_obj212;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct tuple3$3sTypephcharphbool* __result318__;
void* __right_value516 = (void*)0;
char* attribute_548;
char* __dec_obj213;
void* __right_value517 = (void*)0;
char* __dec_obj214;
void* __right_value518 = (void*)0;
char* __dec_obj215;
void* __right_value519 = (void*)0;
char* __dec_obj216;
void* __right_value520 = (void*)0;
char* __dec_obj217;
_Bool no_comma_551;
void* __right_value521 = (void*)0;
struct sNode* node_552;
struct sNode* __dec_obj218;
void* __right_value522 = (void*)0;
char* attribute2_553;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
char* __dec_obj219;
char* __dec_obj220;
struct sType* result_type_554;
void* __right_value525 = (void*)0;
_Bool _if_conditional3;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
struct sType* __dec_obj221;
void* __right_value528 = (void*)0;
int i_555;
void* __right_value529 = (void*)0;
_Bool _if_conditional4;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct sType* __dec_obj222;
int i_559;
void* __right_value533 = (void*)0;
_Bool _if_conditional5;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj223;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sType* __dec_obj224;
struct sNode* __dec_obj225;
void* __right_value539 = (void*)0;
char* __dec_obj226;
void* __right_value540 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1voidph* param_types_560=0;
struct list$1charph* param_names_561=0;
struct list$1charph* param_default_parametors_562=0;
_Bool var_args_563=0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
struct sType* __dec_obj227;
struct sType* __dec_obj228;
struct list$1voidph* __dec_obj229;
struct list$1charph* __dec_obj230;
int function_pointer_num_564;
struct sType* result_type_565;
void* __right_value543 = (void*)0;
_Bool _if_conditional6;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sType* __dec_obj231;
void* __right_value546 = (void*)0;
int i_566;
void* __right_value547 = (void*)0;
_Bool _if_conditional7;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* __dec_obj232;
int i_567;
void* __right_value551 = (void*)0;
_Bool _if_conditional8;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* __dec_obj233;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sType* __dec_obj234;
struct sNode* __dec_obj235;
void* __right_value557 = (void*)0;
char* __dec_obj236;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct tuple3$3sTypephcharphbool* __result321__;
void* __right_value560 = (void*)0;
char* __dec_obj237;
_Bool function_pointer_array_569;
int function_pointer_array_num_570;
int n_571;
void* __right_value561 = (void*)0;
struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1voidph* param_types_572=0;
struct list$1charph* param_names_573=0;
struct list$1charph* param_default_parametors_574=0;
_Bool var_args_575=0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
struct sType* __dec_obj238;
void* __right_value564 = (void*)0;
struct sType* __dec_obj239;
struct list$1voidph* __dec_obj240;
struct list$1charph* __dec_obj241;
void* __right_value565 = (void*)0;
struct sNode* exp_576;
_Bool Value_577;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct tuple3$3sTypephcharphbool* __result322__;
void* __right_value568 = (void*)0;
struct CVALUE* come_value_578;
void* __right_value569 = (void*)0;
struct sType* __dec_obj242;
void* __right_value570 = (void*)0;
char* attribute_579;
char* __dec_obj243;
void* __right_value571 = (void*)0;
char* __dec_obj244;
void* __right_value572 = (void*)0;
char* __dec_obj245;
void* __right_value573 = (void*)0;
char* __dec_obj246;
void* __right_value574 = (void*)0;
char* __dec_obj247;
_Bool no_comma_582;
void* __right_value575 = (void*)0;
struct sNode* node_583;
struct sNode* __dec_obj248;
void* __right_value576 = (void*)0;
char* attribute2_584;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
char* __dec_obj249;
char* __dec_obj250;
void* __right_value579 = (void*)0;
_Bool _if_conditional9;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
struct sType* __dec_obj255;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* __dec_obj256;
struct sNode* __dec_obj257;
char* __dec_obj258;
int i_585;
void* __right_value584 = (void*)0;
_Bool _if_conditional10;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __dec_obj259;
struct sNode* __dec_obj260;
char* __dec_obj261;
int i_586;
void* __right_value588 = (void*)0;
_Bool _if_conditional11;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sType* __dec_obj262;
struct sNode* __dec_obj263;
char* __dec_obj264;
void* __right_value592 = (void*)0;
_Bool _if_conditional12;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct tuple3$3sTypephcharphbool* __result323__;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sType* __dec_obj265;
void* __right_value597 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_587=0;
char* var_name_588=0;
_Bool err_589=0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct tuple3$3sTypephcharphbool* __result324__;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct tuple3$3sTypephcharphbool* __result325__;
void* __right_value602 = (void*)0;
struct sType* __dec_obj266;
void* __right_value603 = (void*)0;
char* new_name_590;
struct sNode* __dec_obj267;
char* __dec_obj268;
char* __dec_obj269;
void* __right_value604 = (void*)0;
struct sClass* klass_591;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sClass* klass_633;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sType* __dec_obj270;
struct sNode* __dec_obj271;
char* __dec_obj272;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct list$1voidph* types_634;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_635=0;
char* name_636=0;
_Bool err_637=0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct tuple3$3sTypephcharphbool* __result347__;
void* __right_value623 = (void*)0;
int num_tuples_638;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sType* __dec_obj273;
struct list$1voidph* o2_saved_639;
struct sType* it_640;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
struct sType* __dec_obj274;
void* __right_value629 = (void*)0;
char* new_name_641;
char* __dec_obj275;
void* __right_value630 = (void*)0;
char* attribute_642;
char* __dec_obj276;
void* __right_value631 = (void*)0;
char* __dec_obj277;
void* __right_value632 = (void*)0;
char* __dec_obj278;
void* __right_value633 = (void*)0;
char* __dec_obj279;
void* __right_value634 = (void*)0;
char* __dec_obj280;
_Bool no_comma_645;
void* __right_value635 = (void*)0;
struct sNode* node_646;
struct sNode* __dec_obj281;
void* __right_value636 = (void*)0;
char* attribute2_647;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
char* __dec_obj282;
char* __dec_obj283;
void* __right_value639 = (void*)0;
struct sNode* node_648;
void* __right_value640 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_649=0;
char* attribute2_650=0;
char* __dec_obj284;
char* __dec_obj285;
void* __right_value641 = (void*)0;
struct sType* type_before_651;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
struct sType* __dec_obj286;
void* __right_value644 = (void*)0;
struct sNode* __list_values1___652[1];
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct list$1sNodeph* __dec_obj287;
struct sType* __dec_obj288;
void* __right_value648 = (void*)0;
struct sType* type_before_656;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sType* __dec_obj289;
struct sType* __dec_obj290;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct sType* type2_657;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sType* type3_663;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct sType* type4_664;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct tuple3$3sTypephcharphbool* __result353__;
char* __dec_obj292;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
struct tuple3$3sTypephcharphbool* __result354__;
type_529 = (void*)0;
var_name_530 = (void*)0;
result_type_554 = (void*)0;
result_type_565 = (void*)0;
    head_454=info->p;
    head_sline_455=info->sline;
    info->define_struct=(_Bool)0;
    type_name_456=(char*)come_increment_ref_count(parse_word(info));
    record__457=(_Bool)0;
    exception__458=(_Bool)0;
    constant_459=(_Bool)0;
    static__460=(_Bool)0;
    volatile__461=(_Bool)0;
    register__462=(_Bool)0;
    unsigned__463=(_Bool)0;
    long__464=(_Bool)0;
    long_long_465=(_Bool)0;
    short__466=(_Bool)0;
    restrict__467=(_Bool)0;
    struct__468=(_Bool)0;
    union__469=(_Bool)0;
    enum__470=(_Bool)0;
    no_heap_471=(_Bool)0;
    extern__472=(_Bool)0;
    inline__473=(_Bool)0;
    uniq__474=(_Bool)0;
    tuple__475=(_Bool)0;
    generate__476=(_Bool)0;
    alignas__477=((void*)0);
    anonymous_type_478=(_Bool)0;
    anonymous_name_479=(_Bool)0;
    atomic__480=(_Bool)0;
    object_interface_481=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_456,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_481=(_Bool)1;
            __dec_obj154=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj155=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__480=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_456,"__extension__")) {
            __dec_obj156=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_482=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_482++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_482--;
                        if(                        brace_num_482==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj157=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"__declspec")) {
            if(            *info->p==40) {
                brace_num_483=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_483++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_483--;
                        if(                        brace_num_483==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj158=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"_Noreturn")) {
            __dec_obj159=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"__noreturn")) {
            __dec_obj160=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"_Nullable")) {
            __dec_obj161=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"_noreturn")) {
            __dec_obj162=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"_Alignas")) {
            expected_next_character(40,info);
            exp_484=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj163=alignas__477;
            alignas__477=(struct sNode*)come_increment_ref_count(exp_484);
            if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj164=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_484) { exp_484 = come_decrement_ref_count2(exp_484, ((struct sNode*)exp_484)->finalize, ((struct sNode*)exp_484)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_456,"const")) {
            constant_459=(_Bool)1;
            __dec_obj165=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"static")) {
            static__460=(_Bool)1;
            __dec_obj166=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"uniq")) {
            uniq__474=(_Bool)1;
            __dec_obj167=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"record")) {
            record__457=(_Bool)1;
            __dec_obj168=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"exception")) {
            exception__458=(_Bool)1;
            __dec_obj169=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"extern")) {
            extern__472=(_Bool)1;
            __dec_obj170=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"inline")||string_operator_equals(type_name_456,"__inline")||string_operator_equals(type_name_456,"__inline__")||string_operator_equals(type_name_456,"__always_inline")||string_operator_equals(type_name_456,"__forceinline")) {
            inline__473=(_Bool)1;
            __dec_obj171=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"volatile")) {
            volatile__461=(_Bool)1;
            __dec_obj172=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"generate")) {
            generate__476=(_Bool)1;
            __dec_obj173=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"struct")) {
            struct__468=(_Bool)1;
            if(            *info->p==123) {
                p_485=info->p;
                sline_486=info->sline;
                ((char*)(__right_value432=skip_block(info)));
                __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_479=(_Bool)1;
                    anonymous_type_478=(_Bool)1;
                    __dec_obj174=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_485;
                    info->sline=sline_486;
                    break;
                }
                else {
                    anonymous_type_478=(_Bool)1;
                    __dec_obj175=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_485;
                    info->sline=sline_486;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value435=parse_struct_attribute(info)));
                __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj176=type_name_456;
                type_name_456=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_487=info->p;
                    sline_488=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_487;
                                info->sline=sline_488;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value438=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1430, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value438,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result309__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_489=info->p;
                    sline_490=info->sline;
                    ((char*)(__right_value439=skip_block(info)));
                    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value440=parse_struct_attribute(info)));
                    __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_454;
                        info->sline=head_sline_455;
                        info->define_struct=(_Bool)1;
                        __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value442=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1450, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value442,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result310__;
                    }
                    else {
                        info->p=p_489;
                        info->sline=sline_490;
                        node_491=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_456),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_492=node_compile(node_491,info);
                        if(                        !Value_492) {
                            __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value446=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1462, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value446,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result311__;
                        }
                        else {
                        }
                        if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_491) { node_491 = come_decrement_ref_count2(node_491, ((struct sNode*)node_491)->finalize, ((struct sNode*)node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_456,"union")) {
            union__469=(_Bool)1;
            if(            *info->p==123) {
                p_493=info->p;
                sline_494=info->sline;
                ((char*)(__right_value447=skip_block(info)));
                __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value448=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value448,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_454;
                    info->sline=head_sline_455;
                    info->define_struct=(_Bool)0;
                    anonymous_type_478=(_Bool)1;
                    __dec_obj177=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_493;
                    info->sline=sline_494;
                    break;
                }
                else {
                    anonymous_type_478=(_Bool)1;
                    __dec_obj178=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_493;
                    info->sline=sline_494;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj179=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_495=info->p;
                sline_496=info->sline;
                ((char*)(__right_value452=skip_block(info)));
                __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_454;
                    info->sline=head_sline_455;
                    info->define_struct=(_Bool)1;
                    __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value454=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1519, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value454,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result312__;
                }
                else {
                    anonymous_type_478=(_Bool)1;
                    info->p=p_495;
                    info->sline=sline_496;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_456,"enum")) {
            enum__470=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value455=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_497=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_498=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_499=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value455,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_497,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_498 = come_decrement_ref_count2(name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_500=info->p;
                sline_501=info->sline;
                ((char*)(__right_value456=skip_block(info)));
                __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value457=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value457,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_454;
                    info->sline=head_sline_455;
                    info->define_struct=(_Bool)1;
                    __result313__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value459=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1557, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value459,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result313__;
                }
                else {
                    anonymous_type_478=(_Bool)1;
                    __dec_obj180=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_500;
                    info->sline=sline_501;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj181=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value462=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_502=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_503=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_504=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value462,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_503 = come_decrement_ref_count2(name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_505=info->p;
                sline_506=info->sline;
                ((char*)(__right_value463=skip_block(info)));
                __right_value463 = come_decrement_ref_count2(__right_value463, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_454;
                    info->sline=head_sline_455;
                    info->define_struct=(_Bool)1;
                    __result314__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value465=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1593, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value465,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result314__;
                }
                else {
                    anonymous_type_478=(_Bool)1;
                    info->p=p_505;
                    info->sline=sline_506;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_456,"long")) {
            {
                p_507=info->p;
                sline_508=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_507;
                    info->sline=sline_508;
                    __dec_obj182=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj183=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_456,"unsigned")) {
                        __dec_obj184=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_456,"int")) {
                            long__464=(_Bool)1;
                            unsigned__463=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_456,"signed")) {
                        __dec_obj185=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_456,"int")) {
                            long__464=(_Bool)1;
                            unsigned__463=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_456,"long")) {
                        p_507=info->p;
                        sline_508=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_465=(_Bool)1;
                            __dec_obj186=type_name_456;
                            type_name_456=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__464=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_456,"int")) {
                            long_long_465=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_456,info)) {
                            __dec_obj187=type_name_456;
                            type_name_456=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_465=(_Bool)1;
                            info->p=p_507;
                            info->sline=sline_508;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_456,info)) {
                        if(                        long__464) {
                            long_long_465=(_Bool)1;
                            long__464=(_Bool)0;
                        }
                        else {
                            long__464=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_507;
                        info->sline=sline_508;
                        __dec_obj188=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_456,"unsigned")) {
            unsigned__463=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_509=info->p;
                sline_510=info->sline;
                __dec_obj189=type_name_456;
                type_name_456=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_456,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_511=info->p;
                        sline_512=info->sline;
                        __dec_obj190=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_456,info)) {
                            short__466=(_Bool)1;
                        }
                        else {
                            short__466=(_Bool)1;
                            __dec_obj191=type_name_456;
                            type_name_456=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_511;
                            info->sline=sline_512;
                        }
                    }
                    else {
                        short__466=(_Bool)1;
                        __dec_obj192=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_456,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_513=info->p;
                        sline_514=info->sline;
                        __dec_obj193=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_456,info)) {
                            long__464=(_Bool)1;
                        }
                        else {
                            long__464=(_Bool)1;
                            __dec_obj194=type_name_456;
                            type_name_456=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_513;
                            info->sline=sline_514;
                        }
                    }
                    else {
                        long__464=(_Bool)1;
                        __dec_obj195=type_name_456;
                        type_name_456=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_456,info)) {
                    __dec_obj196=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_509;
                    info->sline=sline_510;
                    break;
                }
            }
            else {
                __dec_obj197=type_name_456;
                type_name_456=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_456,"signed")||string_operator_equals(type_name_456,"__signed__")) {
            unsigned__463=(_Bool)0;
            __dec_obj198=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"register")) {
            register__462=(_Bool)1;
            __dec_obj199=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"restrict")) {
            restrict__467=(_Bool)1;
            __dec_obj200=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"_Addr")) {
            __dec_obj201=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"__restrict")) {
            restrict__467=(_Bool)1;
            __dec_obj202=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_456,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj203=type_name_456;
            type_name_456=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__475=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_456,"short")) {
            short__466=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_515=info->p;
                sline_516=info->sline;
                __dec_obj204=type_name_456;
                type_name_456=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_456,"int")) {
                    short__466=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_456,"short")) {
                    short__466=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_456,info)) {
                    info->p=p_515;
                    info->sline=sline_516;
                }
                else {
                    __dec_obj205=type_name_456;
                    type_name_456=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_515;
                    info->sline=sline_516;
                    break;
                }
            }
            else {
                break;
            }
        }
        else {
            break;
        }
    }
    attribute_517=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_518=0;
    heap_519=(_Bool)0;
    refference_520=(_Bool)0;
    no_refference_521=(_Bool)0;
    channel_522=(_Bool)0;
    any_class_523=(_Bool)0;
    vtable_524=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_518++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            vtable_524=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_523=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_519=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_522=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_525=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__475) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj206=tuple_name_525;
        tuple_name_525=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__480) {
        expected_next_character(41,info);
    }
    lambda_flag_526=(_Bool)0;
    {
        pX_527=info->p;
        slineX_528=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value492=parse_word(info)));
            __right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_526=(_Bool)1;
            }
        }
        info->p=pX_527;
        info->sline=slineX_528;
    }
    function_pointer_flag_531=(_Bool)0;
    {
        p_532=info->p;
        sline_533=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_531=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_534=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_531=(_Bool)1;
                    }
                }
                word_534 = come_decrement_ref_count2(word_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_532;
        info->sline=sline_533;
    }
    var_name_between_brace_535=(_Bool)0;
    {
        p_536=info->p;
        sline_537=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_538=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_538,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_535=(_Bool)1;
                    }
                }
                word_538 = come_decrement_ref_count2(word_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_536;
        info->sline=sline_537;
    }
    if(    anonymous_type_478&&*info->p==123) {
        static int anonymous_num_539=0;
        if(        struct__468) {
            if(            string_operator_equals(type_name_456,"")) {
                __dec_obj207=type_name_456;
                type_name_456=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_539));
                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_540=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_456),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_541=node_compile(node_540,info);
            if(            !Value_541) {
                err_msg(info,"parse_struct is failed");
                __result315__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value499=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2007, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_540) { node_540 = come_decrement_ref_count2(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value499,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result315__;
            }
            else {
            }
            pointer_num_542=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_542++;
            }
            __dec_obj208=type_529;
            type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2020, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj208,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_529->mPointerNum=pointer_num_542;
            if(node_540) { node_540 = come_decrement_ref_count2(node_540, ((struct sNode*)node_540)->finalize, ((struct sNode*)node_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__470) {
            if(            string_operator_equals(type_name_456,"")) {
                __dec_obj209=type_name_456;
                type_name_456=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_539));
                __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_543=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_456),info));
            if(            !info->no_output_err) {
                Value_544=node_compile(node_543,info);
                if(                !Value_544) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result316__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value505=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2034, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value505,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result316__;
                }
                else {
                }
            }
            __dec_obj210=type_529;
            type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2038, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj210,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_543) { node_543 = come_decrement_ref_count2(node_543, ((struct sNode*)node_543)->finalize, ((struct sNode*)node_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__469) {
            if(            string_operator_equals(type_name_456,"")) {
                __dec_obj211=type_name_456;
                type_name_456=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_539));
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_545=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_456),info));
            Value_546=node_compile(node_545,info);
            if(            !Value_546) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result317__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value511=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2050, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_545) { node_545 = come_decrement_ref_count2(node_545, ((struct sNode*)node_545)->finalize, ((struct sNode*)node_545)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value511,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
            else {
            }
            pointer_num_547=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_547++;
            }
            __dec_obj212=type_529;
            type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2064, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_529->mPointerNum=pointer_num_547;
            if(node_545) { node_545 = come_decrement_ref_count2(node_545, ((struct sNode*)node_545)->finalize, ((struct sNode*)node_545)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result318__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value515=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2070, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value515,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        attribute_548=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_548,"")) {
            __dec_obj213=type_529->mAttribute;
            type_529->mAttribute=(char*)come_increment_ref_count(attribute_548);
            __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_535&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj214=var_name_530;
                var_name_530=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_479) {
                static int num_anonymous_var_name_549=0;
                num_anonymous_var_name_549++;
                __dec_obj215=var_name_530;
                var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_549));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj216=var_name_530;
                var_name_530=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_550=0;
                num_anonymous_var_name_550++;
                __dec_obj217=var_name_530;
                var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_550));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_535&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_551=info->no_comma;
                info->no_comma=(_Bool)1;
                node_552=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_551;
                __dec_obj218=type_529->mSizeNum;
                type_529->mSizeNum=(struct sNode*)come_increment_ref_count(node_552);
                if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_552) { node_552 = come_decrement_ref_count2(node_552, ((struct sNode*)node_552)->finalize, ((struct sNode*)node_552)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_553=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_548,"")&&string_operator_not_equals(attribute2_553,"")) {
                __dec_obj219=type_529->mAttribute;
                type_529->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_548,((char*)(__right_value523=charp_operator_add(" ",attribute2_553)))));
                __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_553,"")) {
                __dec_obj220=type_529->mAttribute;
                type_529->mAttribute=(char*)come_increment_ref_count(attribute2_553);
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_553 = come_decrement_ref_count2(attribute2_553, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_548 = come_decrement_ref_count2(attribute_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_526) {
        if(        (_if_conditional3=(((struct sType*)(__right_value525=map$2charphsTypephp_operator_load_element(info->types,type_name_456))))),        come_call_finalizer3(__right_value525,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj221=result_type_554;
            result_type_554=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value526=map$2charphsTypephp_operator_load_element(info->types,type_name_456)))));
            come_call_finalizer3(__dec_obj221,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value526,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_554->mClass=((struct sClass*)(__right_value528=map$2charphsClassphp_operator_load_element(info->classes,result_type_554->mClass->mName)));
            come_call_finalizer3(__right_value528,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_456)) {
            for(            i_555=0;            i_555<list$1charphp_length(info->generics_type_names);            i_555++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)(__right_value529=list$1charphp_operator_load_element(info->generics_type_names,i_555))),type_name_456))),                (__right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj222=result_type_554;
                    result_type_554=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2138, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value531=xsprintf("generics_type%d",i_555))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_456)) {
            for(            i_559=0;            i_559<list$1charphp_length(info->method_generics_type_names);            i_559++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value533=list$1charphp_operator_load_element(info->method_generics_type_names,i_559))),type_name_456))),                (__right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj223=result_type_554;
                    result_type_554=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2145, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value535=xsprintf("mgenerics_type%d",i_559))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value535 = come_decrement_ref_count2(__right_value535, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj224=result_type_554;
            result_type_554=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2150, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_554->mAtomic=result_type_554->mAtomic||atomic__480;
        result_type_554->mConstant=result_type_554->mConstant||constant_459;
        __dec_obj225=result_type_554->mAlignas;
        result_type_554->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
        if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_554->mRegister=register__462;
        result_type_554->mUnsigned=result_type_554->mUnsigned||unsigned__463;
        result_type_554->mVolatile=volatile__461;
        result_type_554->mGenerate=generate__476;
        result_type_554->mRecord=result_type_554->mRecord||record__457;
        result_type_554->mUniq=result_type_554->mUniq||uniq__474;
        result_type_554->mStatic=(result_type_554->mStatic||static__460)&&!result_type_554->mUniq;
        result_type_554->mException=result_type_554->mException||exception__458;
        result_type_554->mExtern=result_type_554->mExtern||extern__472;
        result_type_554->mInline=result_type_554->mInline||inline__473;
        result_type_554->mRestrict=result_type_554->mRestrict||restrict__467;
        result_type_554->mLongLong=result_type_554->mLongLong||long_long_465;
        result_type_554->mLong=result_type_554->mLong||long__464;
        result_type_554->mShort=result_type_554->mShort||short__466;
        result_type_554->mPointerNum=pointer_num_518;
        result_type_554->mHeap=result_type_554->mHeap||heap_519;
        result_type_554->mChannel=result_type_554->mChannel||channel_522;
        result_type_554->mAnyClass=result_type_554->mAnyClass||any_class_523;
        result_type_554->mCreateVTable=result_type_554->mCreateVTable||vtable_524;
        __dec_obj226=var_name_530;
        var_name_530=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value540=parse_params(info,(_Bool)0)));
        param_types_560=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_561=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_562=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_563=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value540,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj227=type_529;
        type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2180, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj228=type_529->mResultType;
        type_529->mResultType=(struct sType*)come_increment_ref_count(result_type_554);
        come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj229=type_529->mParamTypes;
        type_529->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_560);
        come_call_finalizer3(__dec_obj229,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj230=type_529->mParamNames;
        type_529->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_561);
        come_call_finalizer3(__dec_obj230,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_529->mVarArgs=var_args_563;
        type_529->mExtern=extern__472;
        come_call_finalizer3(result_type_554,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_560,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_561,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_562,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_531) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_564=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_564++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)(__right_value543=map$2charphsTypephp_operator_load_element(info->types,type_name_456))))),        come_call_finalizer3(__right_value543,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj231=result_type_565;
            result_type_565=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value544=map$2charphsTypephp_operator_load_element(info->types,type_name_456)))));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value544,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_565->mClass=((struct sClass*)(__right_value546=map$2charphsClassphp_operator_load_element(info->classes,result_type_565->mClass->mName)));
            come_call_finalizer3(__right_value546,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_456)) {
            for(            i_566=0;            i_566<list$1charphp_length(info->generics_type_names);            i_566++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)(__right_value547=list$1charphp_operator_load_element(info->generics_type_names,i_566))),type_name_456))),                (__right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj232=result_type_565;
                    result_type_565=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2213, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value549=xsprintf("generics_type%d",i_566))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_456)) {
            for(            i_567=0;            i_567<list$1charphp_length(info->method_generics_type_names);            i_567++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value551=list$1charphp_operator_load_element(info->method_generics_type_names,i_567))),type_name_456))),                (__right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj233=result_type_565;
                    result_type_565=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2220, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value553=xsprintf("mgenerics_type%d",i_567))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj234=result_type_565;
            result_type_565=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2225, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_565->mConstant=result_type_565->mConstant||constant_459;
        result_type_565->mAtomic=result_type_565->mAtomic||atomic__480;
        __dec_obj235=result_type_565->mAlignas;
        result_type_565->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
        if(__dec_obj235) { __dec_obj235 = come_decrement_ref_count2(__dec_obj235, ((struct sNode*)__dec_obj235)->finalize, ((struct sNode*)__dec_obj235)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_565->mRegister=register__462;
        result_type_565->mUnsigned=result_type_565->mUnsigned||unsigned__463;
        result_type_565->mVolatile=volatile__461;
        result_type_565->mGenerate=generate__476;
        result_type_565->mUniq=result_type_565->mUniq||uniq__474;
        result_type_565->mStatic=(result_type_565->mStatic||static__460)&&!result_type_565->mUniq;
        result_type_565->mRecord=result_type_565->mRecord||record__457;
        result_type_565->mException=result_type_565->mException||exception__458;
        result_type_565->mExtern=result_type_565->mExtern||extern__472;
        result_type_565->mInline=result_type_565->mInline||inline__473;
        result_type_565->mRestrict=result_type_565->mRestrict||restrict__467;
        result_type_565->mLongLong=result_type_565->mLongLong||long_long_465;
        result_type_565->mLong=result_type_565->mLong||long__464;
        result_type_565->mShort=result_type_565->mShort||short__466;
        result_type_565->mPointerNum+=pointer_num_518;
        result_type_565->mHeap=result_type_565->mHeap||heap_519;
        result_type_565->mChannel=result_type_565->mChannel||channel_522;
        result_type_565->mAnyClass=result_type_565->mAnyClass||any_class_523;
        result_type_565->mCreateVTable=result_type_565->mCreateVTable||vtable_524;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj236=var_name_530;
            var_name_530=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result321__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value559=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2254, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(result_type_565),(char*)come_increment_ref_count(var_name_530),(_Bool)0)));
                come_call_finalizer3(result_type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value559,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result321__;
            }
        }
        else {
            static int num_anonymous_var_name_568=0;
            num_anonymous_var_name_568++;
            __dec_obj237=var_name_530;
            var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_568));
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_569=(_Bool)0;
        function_pointer_array_num_570=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_571=0;
            while(xisdigit(*info->p)) {
                n_571=n_571*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_570=n_571;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_569=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1voidphphlist$1charphphlist$1charphphbool*)(__right_value561=parse_params(info,(_Bool)0)));
        param_types_572=(struct list$1voidph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_573=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_574=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_575=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value561,tuple4$4list$1voidphphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj238=type_529;
        type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2286, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj238,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj239=type_529->mResultType;
        type_529->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_565));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj240=type_529->mParamTypes;
        type_529->mParamTypes=(struct list$1voidph*)come_increment_ref_count(param_types_572);
        come_call_finalizer3(__dec_obj240,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj241=type_529->mParamNames;
        type_529->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_573);
        come_call_finalizer3(__dec_obj241,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_529->mVarArgs=var_args_575;
        type_529->mExtern=extern__472;
        if(        function_pointer_array_569) {
            type_529->mLambdaArray=(_Bool)1;
            type_529->mLambdaArrayNum=function_pointer_array_num_570;
        }
        type_529->mFunctionPointerNum=function_pointer_num_564;
        come_call_finalizer3(result_type_565,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_572,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_573,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_574,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_456,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_576=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_577=node_compile(exp_576,info);
        if(        !Value_577) {
            err_msg(info,"invalid __typeof__ expression");
            __result322__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value567=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2310, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_576) { exp_576 = come_decrement_ref_count2(exp_576, ((struct sNode*)exp_576)->finalize, ((struct sNode*)exp_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value567,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result322__;
        }
        else {
        }
        come_value_578=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj242=type_529;
        type_529=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_578->type));
        come_call_finalizer3(__dec_obj242,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_579=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_579,"")) {
            __dec_obj243=type_529->mAttribute;
            type_529->mAttribute=(char*)come_increment_ref_count(attribute_579);
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_535&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj244=var_name_530;
                var_name_530=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_479) {
                static int num_anonymous_var_name_580=0;
                num_anonymous_var_name_580++;
                __dec_obj245=var_name_530;
                var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_580));
                __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj246=var_name_530;
                var_name_530=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_581=0;
                num_anonymous_var_name_581++;
                __dec_obj247=var_name_530;
                var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_581));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_535&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_582=info->no_comma;
                info->no_comma=(_Bool)1;
                node_583=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_582;
                __dec_obj248=type_529->mSizeNum;
                type_529->mSizeNum=(struct sNode*)come_increment_ref_count(node_583);
                if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_583) { node_583 = come_decrement_ref_count2(node_583, ((struct sNode*)node_583)->finalize, ((struct sNode*)node_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_584=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_579,"")&&string_operator_not_equals(attribute2_584,"")) {
                __dec_obj249=type_529->mAttribute;
                type_529->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_579,((char*)(__right_value577=charp_operator_add(" ",attribute2_584)))));
                __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value577 = come_decrement_ref_count2(__right_value577, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_584,"")) {
                __dec_obj250=type_529->mAttribute;
                type_529->mAttribute=(char*)come_increment_ref_count(attribute2_584);
                __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_584 = come_decrement_ref_count2(attribute2_584, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_576) { exp_576 = come_decrement_ref_count2(exp_576, ((struct sNode*)exp_576)->finalize, ((struct sNode*)exp_576)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_578,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_579 = come_decrement_ref_count2(attribute_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)(__right_value579=map$2charphsTypephp_operator_load_element(info->types,type_name_456))))),        come_call_finalizer3(__right_value579,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj255=type_529;
            type_529=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value580=map$2charphsTypephp_operator_load_element(info->types,type_name_456)))));
            come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value580,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_529->mTypedefOriginalPointerNum=type_529->mPointerNum;
            type_529->mClass=((struct sClass*)(__right_value582=map$2charphsClassphp_operator_load_element(info->classes,type_529->mClass->mName)));
            come_call_finalizer3(__right_value582,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj256=type_529->mOriginalTypeName;
            type_529->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_456));
            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_529->mOriginalTypeNamePointerNum=pointer_num_518;
            type_529->mOriginalTypeNameHeap=heap_519;
            type_529->mConstant=type_529->mConstant||constant_459;
            type_529->mAtomic=type_529->mAtomic||atomic__480;
            __dec_obj257=type_529->mAlignas;
            type_529->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
            if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
            type_529->mRegister=register__462;
            type_529->mUnsigned=type_529->mUnsigned||unsigned__463;
            type_529->mVolatile=volatile__461;
            type_529->mGenerate=generate__476;
            type_529->mUniq=type_529->mUniq||uniq__474;
            type_529->mStatic=(type_529->mStatic||static__460)&&!type_529->mUniq;
            type_529->mRecord=type_529->mRecord||record__457;
            type_529->mException=type_529->mException||exception__458;
            type_529->mExtern=type_529->mExtern||extern__472;
            type_529->mInline=type_529->mInline||inline__473;
            type_529->mRestrict=type_529->mRestrict||restrict__467;
            type_529->mLongLong=type_529->mLongLong||long_long_465;
            type_529->mLong=type_529->mLong||long__464;
            type_529->mShort=type_529->mShort||short__466;
            type_529->mPointerNum+=pointer_num_518;
            type_529->mHeap=type_529->mHeap||heap_519;
            type_529->mChannel=type_529->mChannel||channel_522;
            type_529->mAnyClass=type_529->mAnyClass||any_class_523;
            type_529->mCreateVTable=type_529->mCreateVTable||vtable_524;
            __dec_obj258=type_529->mTupleName;
            type_529->mTupleName=(char*)come_increment_ref_count(tuple_name_525);
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_456)) {
            for(            i_585=0;            i_585<list$1charphp_length(info->generics_type_names);            i_585++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)(__right_value584=list$1charphp_operator_load_element(info->generics_type_names,i_585))),type_name_456))),                (__right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj259=type_529;
                    type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2410, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value586=xsprintf("generics_type%d",i_585))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_529->mConstant=type_529->mConstant||constant_459;
            type_529->mAtomic=type_529->mAtomic||atomic__480;
            __dec_obj260=type_529->mAlignas;
            type_529->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
            if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
            type_529->mRegister=register__462;
            type_529->mUnsigned=type_529->mUnsigned||unsigned__463;
            type_529->mVolatile=volatile__461;
            type_529->mGenerate=generate__476;
            type_529->mUniq=type_529->mUniq||uniq__474;
            type_529->mStatic=(type_529->mStatic||static__460)&&!type_529->mUniq;
            type_529->mRecord=type_529->mRecord||record__457;
            type_529->mException=type_529->mException||exception__458;
            type_529->mExtern=type_529->mExtern||extern__472;
            type_529->mInline=type_529->mInline||inline__473;
            type_529->mRestrict=type_529->mRestrict||restrict__467;
            type_529->mLongLong=type_529->mLongLong||long_long_465;
            type_529->mLong=type_529->mLong||long__464;
            type_529->mShort=type_529->mShort||short__466;
            type_529->mPointerNum+=pointer_num_518;
            type_529->mHeap=type_529->mHeap||heap_519;
            type_529->mChannel=type_529->mChannel||channel_522;
            type_529->mAnyClass=type_529->mAnyClass||any_class_523;
            type_529->mCreateVTable=type_529->mCreateVTable||vtable_524;
            __dec_obj261=type_529->mTupleName;
            type_529->mTupleName=(char*)come_increment_ref_count(tuple_name_525);
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_456)) {
            for(            i_586=0;            i_586<list$1charphp_length(info->method_generics_type_names);            i_586++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value588=list$1charphp_operator_load_element(info->method_generics_type_names,i_586))),type_name_456))),                (__right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj262=type_529;
                    type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2441, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value590=xsprintf("mgenerics_type%d",i_586))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_529->mConstant=type_529->mConstant||constant_459;
            type_529->mAtomic=type_529->mAtomic||atomic__480;
            __dec_obj263=type_529->mAlignas;
            type_529->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
            if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
            type_529->mRegister=register__462;
            type_529->mUnsigned=type_529->mUnsigned||unsigned__463;
            type_529->mVolatile=volatile__461;
            type_529->mGenerate=generate__476;
            type_529->mUniq=type_529->mUniq||uniq__474;
            type_529->mStatic=(type_529->mStatic||static__460)&&!type_529->mUniq;
            type_529->mRecord=type_529->mRecord||record__457;
            type_529->mException=type_529->mException||exception__458;
            type_529->mExtern=type_529->mExtern||extern__472;
            type_529->mInline=type_529->mInline||inline__473;
            type_529->mRestrict=type_529->mRestrict||restrict__467;
            type_529->mLongLong=type_529->mLongLong||long_long_465;
            type_529->mLong=type_529->mLong||long__464;
            type_529->mShort=type_529->mShort||short__466;
            type_529->mPointerNum+=pointer_num_518;
            type_529->mHeap=type_529->mHeap||heap_519;
            type_529->mChannel=type_529->mChannel||channel_522;
            type_529->mAnyClass=type_529->mAnyClass||any_class_523;
            type_529->mCreateVTable=type_529->mCreateVTable||vtable_524;
            __dec_obj264=type_529->mTupleName;
            type_529->mTupleName=(char*)come_increment_ref_count(tuple_name_525);
            __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)(__right_value592=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_456)))==((void*)0))),            come_call_finalizer3(__right_value592,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result323__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value594=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2475, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value594,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result323__;
            }
            __dec_obj265=type_529;
            type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2478, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj265,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value597=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_587=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_588=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_589=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value597,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_589) {
                    __result324__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value599=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2484, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_588 = come_decrement_ref_count2(var_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value599,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result324__;
                }
                list$1voidphp_push_back(type_529->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_587));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_588 = come_decrement_ref_count2(var_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result325__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value601=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2501, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_588 = come_decrement_ref_count2(var_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value601,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result325__;
                }
                come_call_finalizer3(generics_type_587,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_588 = come_decrement_ref_count2(var_name_588, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_529,info)) {
                __dec_obj266=type_529;
                type_529=(struct sType*)come_increment_ref_count(solve_generics(type_529,info->generics_type,info));
                come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_529,type_529,info)) {
                    new_name_590=(char*)come_increment_ref_count(create_generics_name(type_529,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_590);
                    exit(7);
                    new_name_590 = come_decrement_ref_count2(new_name_590, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_529->mConstant=type_529->mConstant||constant_459;
            type_529->mAtomic=type_529->mAtomic||atomic__480;
            __dec_obj267=type_529->mAlignas;
            type_529->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
            if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
            type_529->mRegister=register__462;
            type_529->mUnsigned=type_529->mUnsigned||unsigned__463;
            type_529->mVolatile=volatile__461;
            type_529->mGenerate=generate__476;
            type_529->mUniq=type_529->mUniq||uniq__474;
            type_529->mStatic=(type_529->mStatic||static__460)&&!type_529->mUniq;
            type_529->mRecord=type_529->mRecord||record__457;
            type_529->mException=type_529->mException||exception__458;
            type_529->mExtern=type_529->mExtern||extern__472;
            type_529->mInline=type_529->mInline||inline__473;
            type_529->mRestrict=type_529->mRestrict||restrict__467;
            type_529->mLongLong=type_529->mLongLong||long_long_465;
            type_529->mLong=type_529->mLong||long__464;
            type_529->mShort=type_529->mShort||short__466;
            type_529->mPointerNum+=pointer_num_518;
            type_529->mHeap=type_529->mHeap||heap_519;
            type_529->mChannel=type_529->mChannel||channel_522;
            type_529->mAnyClass=type_529->mAnyClass||any_class_523;
            type_529->mCreateVTable=type_529->mCreateVTable||vtable_524;
            __dec_obj268=type_529->mTupleName;
            type_529->mTupleName=(char*)come_increment_ref_count(tuple_name_525);
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj269=type_name_456;
            type_name_456=(char*)come_increment_ref_count(type_529->mClass->mName);
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__468) {
                klass_591=((struct sClass*)(__right_value604=map$2charphsClassphp_operator_load_element(info->classes,type_name_456)));
                come_call_finalizer3(__right_value604,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_591==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_456),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2548, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_456,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__469) {
                klass_633=((struct sClass*)(__right_value612=map$2charphsClassphp_operator_load_element(info->classes,type_name_456)));
                come_call_finalizer3(__right_value612,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_633==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_456),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2555, "struct sClass*", (void*)0, (void*)0, (void*)0, (void*)0)),type_name_456,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj270=type_529;
            type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2559, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),type_name_456,(_Bool)0,info));
            come_call_finalizer3(__dec_obj270,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_529->mConstant=type_529->mConstant||constant_459;
            type_529->mAtomic=type_529->mAtomic||atomic__480;
            __dec_obj271=type_529->mAlignas;
            type_529->mAlignas=(struct sNode*)come_increment_ref_count(alignas__477);
            if(__dec_obj271) { __dec_obj271 = come_decrement_ref_count2(__dec_obj271, ((struct sNode*)__dec_obj271)->finalize, ((struct sNode*)__dec_obj271)->_protocol_obj, 0,0,0, (void*)0); };
            type_529->mRegister=register__462;
            type_529->mUnsigned=type_529->mUnsigned||unsigned__463;
            type_529->mVolatile=volatile__461;
            type_529->mGenerate=generate__476;
            type_529->mUniq=type_529->mUniq||uniq__474;
            type_529->mStatic=(type_529->mStatic||static__460)&&!type_529->mUniq;
            type_529->mRecord=type_529->mRecord||record__457;
            type_529->mException=type_529->mException||exception__458;
            type_529->mExtern=type_529->mExtern||extern__472;
            type_529->mInline=type_529->mInline||inline__473;
            type_529->mRestrict=type_529->mRestrict||restrict__467;
            type_529->mLongLong=type_529->mLongLong||long_long_465;
            type_529->mLong=type_529->mLong||long__464;
            type_529->mShort=type_529->mShort||short__466;
            type_529->mPointerNum+=pointer_num_518;
            type_529->mHeap=type_529->mHeap||heap_519;
            type_529->mChannel=type_529->mChannel||channel_522;
            type_529->mAnyClass=type_529->mAnyClass||any_class_523;
            type_529->mCreateVTable=type_529->mCreateVTable||vtable_524;
            __dec_obj272=type_529->mTupleName;
            type_529->mTupleName=(char*)come_increment_ref_count(tuple_name_525);
            __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_529->mPointerNum++;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_529->mHeap=(_Bool)1;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_529->mNoHeap=(_Bool)1;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_529->mGuardValue=(_Bool)1;
                }
                else {
                    type_529->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_529->mNoCallingDestructor=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_529->mPointerNum++;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_529->mHeap=(_Bool)1;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_529->mCreateVTable=(_Bool)1;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_529->mAnyClass=(_Bool)1;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_529->mChannel=(_Bool)1;
                if(                type_529->mNoSolvedGenericsType) {
                    type_529->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_634=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "05type.c", 2702, "struct list$1voidph*", list$1voidphp_finalize, list$1voidphp_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            list$1voidphp_push_back(types_634,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_529)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value620=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_635=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_636=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_637=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value620,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_637) {
                    __result347__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value622=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2713, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_636 = come_decrement_ref_count2(name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_634,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value622,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result347__;
                }
                list$1voidphp_push_back(types_634,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_635)));
                come_call_finalizer3(type2_635,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_636 = come_decrement_ref_count2(name_636, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_638=list$1voidphp_length(types_634);
            __dec_obj273=type_529;
            type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2726, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),((char*)(__right_value625=xsprintf("tuple%d",num_tuples_638))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj273,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value625 = come_decrement_ref_count2(__right_value625, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_529->mPointerNum++;
            type_529->mHeap=(_Bool)1;
            for(            o2_saved_639=(struct list$1voidph*)come_increment_ref_count((types_634)),it_640=((struct sType*)list$1voidphp_begin((o2_saved_639)));            !list$1voidphp_end((o2_saved_639));            it_640=((struct sType*)list$1voidphp_next((o2_saved_639)))            ){
                list$1voidphp_push_back(type_529->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value627=come_call_cloner(sType_clone, it_640))))));
                come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_639,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_529->mPointerNum++;
                    if(                    type_529->mNoSolvedGenericsType) {
                        type_529->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_529->mHeap=(_Bool)1;
                    if(                    type_529->mNoSolvedGenericsType) {
                        type_529->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_529->mCreateVTable=(_Bool)1;
                    if(                    type_529->mNoSolvedGenericsType) {
                        type_529->mNoSolvedGenericsType->mCreateVTable=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_529->mAnyClass=(_Bool)1;
                    if(                    type_529->mNoSolvedGenericsType) {
                        type_529->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_529->mChannel=(_Bool)1;
                    if(                    type_529->mNoSolvedGenericsType) {
                        type_529->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_529,info)) {
                __dec_obj274=type_529;
                type_529=(struct sType*)come_increment_ref_count(solve_generics(type_529,info->generics_type,info));
                come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_529,type_529,info)) {
                    new_name_641=(char*)come_increment_ref_count(create_generics_name(type_529,info));
                    printf("output generics is failed(%s)\n",new_name_641);
                    exit(9);
                    new_name_641 = come_decrement_ref_count2(new_name_641, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_529->mMultipleTypes=(_Bool)1;
            __dec_obj275=type_name_456;
            type_name_456=(char*)come_increment_ref_count(type_529->mClass->mName);
            __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_634,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_642=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_642,"")) {
            __dec_obj276=type_529->mAttribute;
            type_529->mAttribute=(char*)come_increment_ref_count(attribute_642);
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_535&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj277=var_name_530;
                var_name_530=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_479) {
                static int num_anonymous_var_name_643=0;
                num_anonymous_var_name_643++;
                __dec_obj278=var_name_530;
                var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_643));
                __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj279=var_name_530;
                var_name_530=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_644=0;
                num_anonymous_var_name_644++;
                __dec_obj280=var_name_530;
                var_name_530=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_644));
                __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_535&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_645=info->no_comma;
                info->no_comma=(_Bool)1;
                node_646=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_645;
                __dec_obj281=type_529->mSizeNum;
                type_529->mSizeNum=(struct sNode*)come_increment_ref_count(node_646);
                if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_646) { node_646 = come_decrement_ref_count2(node_646, ((struct sNode*)node_646)->finalize, ((struct sNode*)node_646)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_647=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_642,"")&&string_operator_not_equals(attribute2_647,"")) {
                __dec_obj282=type_529->mAttribute;
                type_529->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_642,((char*)(__right_value637=charp_operator_add(" ",attribute2_647)))));
                __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value637 = come_decrement_ref_count2(__right_value637, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_647,"")) {
                __dec_obj283=type_529->mAttribute;
                type_529->mAttribute=(char*)come_increment_ref_count(attribute2_647);
                __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_647 = come_decrement_ref_count2(attribute2_647, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_642 = come_decrement_ref_count2(attribute_642, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    parse_sharp_v5(info);
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        skip_pointer_attribute(info);
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            type_529->mArrayPointerType=(_Bool)1;
            type_529->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_648=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(type_529->mArrayNum,(struct sNode*)come_increment_ref_count(node_648));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_648) { node_648 = come_decrement_ref_count2(node_648, ((struct sNode*)node_648)->finalize, ((struct sNode*)node_648)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value640=parse_attribute(info,(_Bool)0)));
    asm_name_649=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_650=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value640,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_650,"")) {
        __dec_obj284=type_529->mAttribute;
        type_529->mAttribute=(char*)come_increment_ref_count(attribute2_650);
        __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj285=type_529->mAsmName;
    type_529->mAsmName=(char*)come_increment_ref_count(asm_name_649);
    __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_529->mChannel) {
        type_before_651=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_529));
        __dec_obj286=type_529;
        type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2899, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj287=type_529->mArrayNum;
        type_529->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___652[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value644=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2900, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),1,__list_values1___652)));
        come_call_finalizer3(__dec_obj287,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj288=type_529->mChannelType;
        type_529->mChannelType=(struct sType*)come_increment_ref_count(type_before_651);
        come_call_finalizer3(__dec_obj288,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_529->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_651,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_529->mAnyClass&&!type_529->mClass->mProtocol) {
        type_before_656=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_529));
        type_before_656->mHeap=(_Bool)1;
        type_before_656->mPointerNum=1;
        __dec_obj289=type_529;
        type_529=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2908, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_529->mHeap=(_Bool)1;
        type_529->mPointerNum=1;
        __dec_obj290=type_529->mAnyOriginalType;
        type_529->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_656);
        come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_529->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_656,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_529->mException) {
        type2_657=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2915, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type2_657->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2916, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type0",(_Bool)0,info)));
        list$1voidphp_operator_store_element(type2_657->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2917, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"generics_type1",(_Bool)0,info)));
        type2_657->mPointerNum=1;
        type2_657->mHeap=(_Bool)1;
        type3_663=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2921, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"tuple2",(_Bool)0,info));
        list$1voidphp_operator_store_element(type3_663->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_529));
        list$1voidphp_operator_store_element(type3_663->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2923, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"char*",(_Bool)0,info)));
        ((struct sType*)((void*)(__right_value661=list$1voidphp_operator_load_element(type3_663->mGenericsTypes,1))))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value661,(void*)0, 0, 1, 0, 0, __result_obj__);
        type4_664=(struct sType*)come_increment_ref_count(solve_generics(type2_657,type3_663,info));
        type4_664->mException=(_Bool)1;
        type4_664->mUniq=type_529->mUniq;
        __result353__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value664=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2931, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type4_664),(char*)come_increment_ref_count(var_name_530),(_Bool)1)));
        come_call_finalizer3(type2_657,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_663,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_664,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_649 = come_decrement_ref_count2(asm_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_650 = come_decrement_ref_count2(attribute2_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value664,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result353__;
        come_call_finalizer3(type2_657,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_663,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_664,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_517,"")) {
        __dec_obj292=type_529->mAttribute;
        type_529->mAttribute=(char*)come_increment_ref_count(attribute_517);
        __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result354__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value666=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2938, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone, tuple3$3sTypephcharphbool_get_hash_key, tuple3$3sTypephcharphbool_equals)),(struct sType*)come_increment_ref_count(type_529),(char*)come_increment_ref_count(var_name_530),(_Bool)1)));
    type_name_456 = come_decrement_ref_count2(type_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__477) { alignas__477 = come_decrement_ref_count2(alignas__477, ((struct sNode*)alignas__477)->finalize, ((struct sNode*)alignas__477)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_517 = come_decrement_ref_count2(attribute_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_525 = come_decrement_ref_count2(tuple_name_525, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_530 = come_decrement_ref_count2(var_name_530, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_649 = come_decrement_ref_count2(asm_name_649, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_650 = come_decrement_ref_count2(attribute2_650, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value666,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_556;
int i_557;
char* __result319__;
char* default_value_558;
char* __result320__;
default_value_558 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_556=self->head;
    i_557=0;
    while(it_556!=((void*)0)) {
        if(        position==i_557) {
            __result319__ = gComeFunResultObject = __result_obj__ = it_556->item;
            gComeFunResultObject = (void*)0;
            return __result319__;
        }
        it_556=it_556->next;
        i_557++;
    }
    memset(&default_value_558,0,sizeof(char*));
    __result320__ = gComeFunResultObject = __result_obj__ = default_value_558;
    default_value_558 = come_decrement_ref_count2(default_value_558, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj251;
struct sType* __dec_obj252;
char* __dec_obj253;
char* __dec_obj254;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj251=self->c_value;
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj252=self->type;
            come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj253=self->c_value_without_right_value_objects;
            __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj254=self->c_value_without_cast_object_value;
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_609;
unsigned int it_610;
_Bool same_key_exist_627;
char* it2_630;
struct map$2charphsClassph* __result346__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_609=string_get_hash_key(((char*)key))%self->size;
    it_610=hash_609;
    while((_Bool)1) {
        if(        self->item_existance[it_610]) {
            if(            string_equals(self->keys[it_610],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_610]);
                    self->keys[it_610] = come_decrement_ref_count2(self->keys[it_610], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_610]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_610]);
                    self->keys[it_610]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_610],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_610]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_610]=item;
                }
                break;
            }
            it_610++;
            if(            it_610>=self->size) {
                it_610=0;
            }
            else if(            it_610==hash_609) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_610]=(_Bool)1;
            if(            1) {
                self->keys[it_610]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_610]=key;
            }
            if(            1) {
                self->items[it_610]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_610]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_627=(_Bool)0;
    for(    it2_630=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_630=list$1charpp_next(self->key_list)    ){
        if(        string_equals(it2_630,key)) {
            same_key_exist_627=(_Bool)1;
        }
    }
    if(    !same_key_exist_627) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result346__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_592;
void* __right_value605 = (void*)0;
char** keys_593;
void* __right_value606 = (void*)0;
struct sClass** items_594;
void* __right_value607 = (void*)0;
_Bool* item_existance_595;
int len_596;
char* it_599;
struct sClass* default_value_602;
void* __right_value608 = (void*)0;
struct sClass* it2_603;
unsigned int hash_606;
int n_607;
struct sClass* default_value_608;
void* __right_value609 = (void*)0;
default_value_602 = (void*)0;
default_value_608 = (void*)0;
    size_592=self->size*10;
    keys_593=(char**)come_increment_ref_count(((char**)(__right_value605=(char**)come_calloc(1, sizeof(char*)*(1*(size_592)), "./comelang.h", 2808, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_594=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value606=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_592)), "./comelang.h", 2809, "struct sClass**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_595=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value607=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_592)), "./comelang.h", 2810, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_596=0;
    for(    it_599=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_599=map$2charphsClassphp_next(self)    ){
        memset(&default_value_602,0,sizeof(struct sClass*));
        it2_603=((struct sClass*)(__right_value608=map$2charphsClassphp_at(self,it_599,default_value_602)));
        come_call_finalizer3(__right_value608,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_606=string_get_hash_key(((char*)it_599))%size_592;
        n_607=hash_606;
        while((_Bool)1) {
            if(            item_existance_595[n_607]) {
                n_607++;
                if(                n_607>=size_592) {
                    n_607=0;
                }
                else if(                n_607==hash_606) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_595[n_607]=(_Bool)1;
                keys_593[n_607]=it_599;
                items_594[n_607]=((struct sClass*)(__right_value609=map$2charphsClassphp_at(self,it_599,default_value_608)));
                come_call_finalizer3(__right_value609,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_596++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_593;
    self->items=items_594;
    self->item_existance=item_existance_595;
    self->size=size_592;
    self->len=len_596;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_597;
char* __result326__;
char* __result327__;
char* result_598;
char* __result328__;
result_597 = (void*)0;
result_598 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_597,0,sizeof(char*));
        __result326__ = gComeFunResultObject = __result_obj__ = result_597;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result327__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    memset(&result_598,0,sizeof(char*));
    __result328__ = gComeFunResultObject = __result_obj__ = result_598;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_600;
char* __result329__;
char* __result330__;
char* result_601;
char* __result331__;
result_600 = (void*)0;
result_601 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_600,0,sizeof(char*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_600;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_601,0,sizeof(char*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_601;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_604;
unsigned int it_605;
struct sClass* __result332__;
struct sClass* __result333__;
struct sClass* __result334__;
struct sClass* __result335__;
    hash_604=string_get_hash_key(((char*)key))%self->size;
    it_605=hash_604;
    while((_Bool)1) {
        if(        self->item_existance[it_605]) {
            if(            string_equals(self->keys[it_605],key)) {
                __result332__ = gComeFunResultObject = __result_obj__ = self->items[it_605];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result332__;
            }
            it_605++;
            if(            it_605>=self->size) {
                it_605=0;
            }
            else if(            it_605==hash_604) {
                __result333__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result333__;
            }
        }
        else {
            __result334__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result334__;
        }
    }
    __result335__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_611;
struct list_item$1charp* it_612;
struct list$1charp* __result339__;
    it2_611=0;
    it_612=self->head;
    while(it_612!=((void*)0)) {
        if(        charp_equals(it_612->item,item)) {
            list$1charpp_delete(self,it2_611,it2_611+1);
            break;
        }
        it2_611++;
        it_612=it_612->next;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_613;
struct list$1charp* __result336__;
struct list_item$1charp* it_616;
int i_617;
struct list_item$1charp* prev_it_618;
struct list_item$1charp* it_619;
int i_620;
struct list_item$1charp* prev_it_621;
struct list_item$1charp* it_622;
struct list_item$1charp* head_prev_it_623;
struct list_item$1charp* tail_it_624;
int i_625;
struct list_item$1charp* prev_it_626;
struct list$1charp* __result338__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_613=tail;
        tail=head;
        head=tmp_613;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result336__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_616=self->head;
        i_617=0;
        while(it_616!=((void*)0)) {
            if(            i_617<tail) {
                prev_it_618=it_616;
                it_616=it_616->next;
                i_617++;
                come_call_finalizer3(prev_it_618,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_617==tail) {
                self->head=it_616;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_616=it_616->next;
                i_617++;
            }
        }
    }
    else if(    tail==self->len) {
        it_619=self->head;
        i_620=0;
        while(it_619!=((void*)0)) {
            if(            i_620==head) {
                self->tail=it_619->prev;
                self->tail->next=((void*)0);
            }
            if(            i_620>=head) {
                prev_it_621=it_619;
                it_619=it_619->next;
                i_620++;
                come_call_finalizer3(prev_it_621,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_619=it_619->next;
                i_620++;
            }
        }
    }
    else {
        it_622=self->head;
        head_prev_it_623=((void*)0);
        tail_it_624=((void*)0);
        i_625=0;
        while(it_622!=((void*)0)) {
            if(            i_625==head) {
                head_prev_it_623=it_622->prev;
            }
            if(            i_625==tail) {
                tail_it_624=it_622;
            }
            if(            i_625>=head&&i_625<tail) {
                prev_it_626=it_622;
                it_622=it_622->next;
                i_625++;
                come_call_finalizer3(prev_it_626,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_622=it_622->next;
                i_625++;
            }
        }
        if(        head_prev_it_623!=((void*)0)) {
            head_prev_it_623->next=tail_it_624;
        }
        if(        tail_it_624!=((void*)0)) {
            tail_it_624->prev=head_prev_it_623;
        }
    }
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_614;
struct list_item$1charp* prev_it_615;
struct list$1charp* __result337__;
    it_614=self->head;
    while(it_614!=((void*)0)) {
        prev_it_615=it_614;
        it_614=it_614->next;
        come_call_finalizer3(prev_it_615,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_628;
char* __result340__;
char* __result341__;
char* result_629;
char* __result342__;
result_628 = (void*)0;
result_629 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_628,0,sizeof(char*));
        __result340__ = gComeFunResultObject = __result_obj__ = result_628;
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    self->it=self->head;
    if(    self->it) {
        __result341__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    memset(&result_629,0,sizeof(char*));
    __result342__ = gComeFunResultObject = __result_obj__ = result_629;
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_631;
char* __result343__;
char* __result344__;
char* result_632;
char* __result345__;
result_631 = (void*)0;
result_632 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_631,0,sizeof(char*));
        __result343__ = gComeFunResultObject = __result_obj__ = result_631;
        gComeFunResultObject = (void*)0;
        return __result343__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result344__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    memset(&result_632,0,sizeof(char*));
    __result345__ = gComeFunResultObject = __result_obj__ = result_632;
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_653;
struct list$1sNodeph* __result348__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_653=0;    i_653<num_value;    i_653++    ){
        list$1sNodephp_push_back(self,values[i_653]);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result349__;
void* __right_value645 = (void*)0;
struct list$1sNodeph* result_655;
struct list$1sNodeph* __result350__;
    if(    self==(void*)0) {
        __result349__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result349__;
    }
    result_655=(struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "list$1sNodeph_clone", 3, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals));
    if(    self!=((void*)0)) {
        result_655->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_655->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_655->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_655->it=self->it;
    }
    __result350__ = gComeFunResultObject = __result_obj__ = result_655;
    come_call_finalizer3(result_655,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result350__;
}

static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self){
unsigned int result_654;
    result_654=0;
    result_654+=int_get_hash_key(((int)self->head));
    result_654+=int_get_hash_key(((int)self->tail));
    result_654+=int_get_hash_key(((int)self->len));
    result_654+=int_get_hash_key(((int)self->it));
    return result_654;
}

static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right){
    if(    !list_item$1sNodeph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right){
    if(    !sNode_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sNodeph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static void list$1voidphp_operator_store_element(struct list$1voidph* self, int position, void* item){
    list$1voidphp_replace(self,position,(struct sType*)come_increment_ref_count(((struct sType*)item)));
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1voidph* list$1voidphp_replace(struct list$1voidph* self, int position, void* item){
void* __result_obj__=(void*)0;
int len_658;
int i_659;
void* default_value_660;
struct list$1voidph* __result351__;
struct list_item$1voidph* it_661;
int i_662;
void* __dec_obj291;
struct list$1voidph* __result352__;
default_value_660 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_658=self->len;
        for(        i_659=0;        i_659<position-len_658;        i_659++        ){
            memset(&default_value_660,0,sizeof(void*));
            list$1voidphp_push_back(self,(void*)come_increment_ref_count(default_value_660));
            come_call_finalizer3(default_value_660, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_push_back(self,(void*)come_increment_ref_count(item));
        __result351__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    it_661=self->head;
    i_662=0;
    while(it_661!=((void*)0)) {
        if(        position==i_662) {
            __dec_obj291=it_661->item;
            it_661->item=(void*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj291,(void*)0, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_661=it_661->next;
        i_662++;
    }
    __result352__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

