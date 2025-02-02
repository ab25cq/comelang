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
void free_objects_of_match_lv_tables(struct sInfo* info);
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
void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects);
static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self);
static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self);
static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info);
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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list$1CVALUEph_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static void CVALUE_finalize(struct CVALUE* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
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
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
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

void std_move(struct sType* left_type, struct sType* right_type, struct CVALUE* right_value, struct sInfo* info, _Bool no_delete_from_right_value_objects){
struct sRightValueObject* it_272;
struct list$1sRightValueObjectph* o2_saved_273;
struct sRightValueObject* it2_276;
char* __dec_obj55;
void* __right_value249 = (void*)0;
char* __dec_obj56;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    right_value->right_value_objects) {
        it_272=right_value->right_value_objects;
        for(        o2_saved_273=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it2_276=list$1sRightValueObjectph_begin((o2_saved_273));        !list$1sRightValueObjectph_end((o2_saved_273));        it2_276=list$1sRightValueObjectph_next((o2_saved_273))        ){
            if(            it_272->mID==it2_276->mID) {
                it2_276->mStored=(_Bool)1;
                break;
            }
        }
        come_call_finalizer3(o2_saved_273,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    right_value->c_value_without_right_value_objects) {
        __dec_obj55=right_value->c_value;
        right_value->c_value=(char*)come_increment_ref_count(right_value->c_value_without_right_value_objects);
        __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj56=right_value->c_value;
    right_value->c_value=(char*)come_increment_ref_count(increment_ref_count_object(right_value->type,right_value->c_value,info));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_begin(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_274;
struct sRightValueObject* __result214__;
struct sRightValueObject* __result215__;
struct sRightValueObject* result_275;
struct sRightValueObject* __result216__;
result_274 = (void*)0;
result_275 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_274,0,sizeof(struct sRightValueObject*));
        __result214__ = gComeFunResultObject = __result_obj__ = result_274;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    self->it=self->head;
    if(    self->it) {
        __result215__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result215__;
    }
    memset(&result_275,0,sizeof(struct sRightValueObject*));
    __result216__ = gComeFunResultObject = __result_obj__ = result_275;
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static _Bool list$1sRightValueObjectph_end(struct list$1sRightValueObjectph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sRightValueObject* list$1sRightValueObjectph_next(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct sRightValueObject* result_277;
struct sRightValueObject* __result217__;
struct sRightValueObject* __result218__;
struct sRightValueObject* result_278;
struct sRightValueObject* __result219__;
result_277 = (void*)0;
result_278 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_277,0,sizeof(struct sRightValueObject*));
        __result217__ = gComeFunResultObject = __result_obj__ = result_277;
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result218__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result218__;
    }
    memset(&result_278,0,sizeof(struct sRightValueObject*));
    __result219__ = gComeFunResultObject = __result_obj__ = result_278;
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_279;
struct list_item$1sRightValueObjectph* prev_it_280;
    it_279=self->head;
    while(it_279!=((void*)0)) {
        prev_it_280=it_279;
        it_279=it_279->next;
        come_call_finalizer3(prev_it_280,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj31;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj31=self->item;
            come_call_finalizer3(__dec_obj31,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj32;
char* __dec_obj53;
char* __dec_obj54;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj32=self->mType;
            come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj53=self->mVarName;
            __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj54=self->mFunName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
struct list$1sTypeph* __dec_obj39;
struct list$1sNodeph* __dec_obj41;
struct list$1sTypeph* __dec_obj43;
struct list$1charph* __dec_obj44;
struct tuple1$1sTypeph* __dec_obj45;
struct sNode* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj48;
char* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj33=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj33,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj35=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj35,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        if(        self->mRefferenceOriginalType==gComeFunResultObject) {
            __dec_obj36=self->mRefferenceOriginalType;
            come_call_finalizer3(__dec_obj36,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mRefferenceOriginalType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj39,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj47,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj34;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj34=self->v1;
            come_call_finalizer3(__dec_obj34,sType_finalize, 0, 0, 1, 0, (void*)0);
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
struct sType* __dec_obj40;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj40=self->item;
            come_call_finalizer3(__dec_obj40,sType_finalize, 0, 0, 1, 0, (void*)0);
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

struct sType* solve_generics(struct sType* type, struct sType* generics_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value289 = (void*)0;
struct sType* result_291;
struct sType* __result237__;
struct sType* __result238__;
struct sClass* klass_310;
void* __right_value290 = (void*)0;
struct sType* result_type_311;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
struct list$1sTypeph* o2_saved_314;
struct sType* it_317;
void* __right_value293 = (void*)0;
struct sType* new_param_type_320;
int generics_number_324;
struct list$1sNodeph* array_num_325;
_Bool immutable__326;
int pointer_num_327;
_Bool heap_328;
_Bool refference_329;
_Bool no_refference_330;
_Bool exception__331;
_Bool guard__332;
_Bool no_heap_333;
_Bool no_calling_destructor_334;
_Bool null_value_335;
void* __right_value297 = (void*)0;
void* __right_value298 = (void*)0;
struct sType* __dec_obj90;
struct list$1sNodeph* __dec_obj91;
int generics_number_339;
void* __right_value299 = (void*)0;
struct sClass* klass2_340;
int generics_number2_341;
struct list$1sNodeph* array_num_342;
_Bool immutable__343;
int pointer_num_344;
_Bool heap_345;
_Bool refference_346;
_Bool no_refference_347;
_Bool guard__348;
_Bool no_heap_349;
_Bool no_calling_destructor_350;
_Bool null_value_351;
_Bool record__352;
_Bool multiple_types_353;
_Bool exception__354;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct sType* __dec_obj92;
struct list$1sNodeph* __dec_obj93;
struct list$1sTypeph* o2_saved_355;
struct sType* it_356;
void* __right_value302 = (void*)0;
struct sType* type_357;
void* __right_value303 = (void*)0;
char* new_name_358;
struct sType* __result250__;
    result_291=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    generics_type==((void*)0)) {
        __result237__ = gComeFunResultObject = __result_obj__ = result_291;
        come_call_finalizer3(result_291,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    if(    list$1sTypeph_length(generics_type->mGenericsTypes)==0) {
        __result238__ = gComeFunResultObject = __result_obj__ = result_291;
        come_call_finalizer3(result_291,sType_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    klass_310=type->mClass;
    if(    string_operator_equals(klass_310->mName,"lambda")) {
        result_type_311=(struct sType*)come_increment_ref_count(solve_generics(type->mResultType->v1,generics_type,info));
        __dec_obj86=result_291->mResultType;
        result_291->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "04heap.c", 38, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_311)));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        list$1sTypeph_reset(result_291->mParamTypes);
        for(        o2_saved_314=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_317=list$1sTypeph_begin((o2_saved_314));        !list$1sTypeph_end((o2_saved_314));        it_317=list$1sTypeph_next((o2_saved_314))        ){
            new_param_type_320=(struct sType*)come_increment_ref_count(solve_generics(it_317,generics_type,info));
            list$1sTypeph_push_back(result_291->mParamTypes,(struct sType*)come_increment_ref_count(new_param_type_320));
            come_call_finalizer3(new_param_type_320,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_314,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_311,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_310->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_324=klass_310->mMethodGenericsNum;
        if(        generics_number_324>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_324,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_325=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__326=type->mImmutable;
        pointer_num_327=type->mPointerNum;
        heap_328=type->mHeap;
        refference_329=type->mRefference;
        no_refference_330=type->mNoRefference;
        exception__331=type->mException;
        guard__332=type->mGuardValue;
        no_heap_333=type->mNoHeap;
        no_calling_destructor_334=type->mNoCallingDestructor;
        null_value_335=type->mNullValue;
        __dec_obj90=result_291;
        result_291=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value297=list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_324))), "04heap.c", 70, 0))));
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value297,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        heap_328) {
            result_291->mHeap=heap_328;
        }
        if(        refference_329) {
            result_291->mRefference=refference_329;
        }
        if(        no_refference_330) {
            result_291->mNoRefference=no_refference_330;
        }
        if(        guard__332) {
            result_291->mGuardValue=guard__332;
        }
        if(        no_heap_333) {
            result_291->mNoHeap=(_Bool)1;
            result_291->mHeap=(_Bool)0;
        }
        if(        exception__331) {
            result_291->mException=(_Bool)1;
        }
        if(        no_calling_destructor_334) {
            result_291->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__326) {
            result_291->mImmutable=immutable__326;
        }
        if(        list$1sNodeph_length(array_num_325)>0) {
            __dec_obj91=result_291->mArrayNum;
            result_291->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_325);
            come_call_finalizer3(__dec_obj91,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_335) {
            result_291->mNullValue=null_value_335;
        }
        if(        pointer_num_327>0) {
            result_291->mPointerNum+=pointer_num_327;
        }
        come_call_finalizer3(array_num_325,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    klass_310->mGenerics) {
        generics_number_339=klass_310->mGenericsNum;
        if(        generics_number_339>=list$1sTypeph_length(generics_type->mGenericsTypes)) {
            err_msg(info,"invalid generics parametor number");
            exit(2);
        }
        klass2_340=((struct sType*)come_null_check(((struct sType*)(__right_value299=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_339))), "04heap.c", 118, 1))->mClass;
        come_call_finalizer3(__right_value299,sType_finalize, 0, 1, 0, 0, __result_obj__);
        generics_number2_341=klass2_340->mGenericsNum;
        if(        generics_number_339!=generics_number2_341) {
            array_num_342=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
            immutable__343=type->mImmutable;
            pointer_num_344=type->mPointerNum;
            heap_345=type->mHeap;
            refference_346=type->mRefference;
            no_refference_347=type->mNoRefference;
            guard__348=type->mGuardValue;
            no_heap_349=type->mNoHeap;
            no_calling_destructor_350=type->mNoCallingDestructor;
            null_value_351=type->mNullValue;
            record__352=type->mRecord;
            multiple_types_353=type->mMultipleTypes;
            exception__354=type->mException;
            __dec_obj92=result_291;
            result_291=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value300=list$1sTypephp_operator_load_element(generics_type->mGenericsTypes,generics_number_339))), "04heap.c", 139, 2))));
            come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value300,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_291->mGenericsNumBefore=generics_number_339;
            if(            refference_346) {
                result_291->mRefference=refference_346;
            }
            if(            no_refference_347) {
                result_291->mNoRefference=no_refference_347;
            }
            if(            heap_345) {
                result_291->mHeap=heap_345;
            }
            if(            exception__354) {
                result_291->mException=exception__354;
            }
            if(            guard__348) {
                result_291->mGuardValue=guard__348;
            }
            if(            record__352) {
                result_291->mRecord=record__352;
            }
            if(            no_heap_349) {
                result_291->mNoHeap=(_Bool)1;
                result_291->mHeap=(_Bool)0;
            }
            if(            multiple_types_353) {
                result_291->mMultipleTypes=(_Bool)1;
            }
            if(            no_calling_destructor_350) {
                result_291->mNoCallingDestructor=(_Bool)1;
            }
            if(            immutable__343) {
                result_291->mImmutable=immutable__343;
            }
            if(            list$1sNodeph_length(array_num_342)>0) {
                __dec_obj93=result_291->mArrayNum;
                result_291->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_342);
                come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            null_value_351) {
                result_291->mNullValue=null_value_351;
            }
            if(            pointer_num_344>0) {
                result_291->mPointerNum+=pointer_num_344;
            }
            come_call_finalizer3(array_num_342,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else {
        list$1sTypeph_reset(result_291->mGenericsTypes);
        for(        o2_saved_355=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_356=list$1sTypeph_begin((o2_saved_355));        !list$1sTypeph_end((o2_saved_355));        it_356=list$1sTypeph_next((o2_saved_355))        ){
            type_357=(struct sType*)come_increment_ref_count(solve_generics(it_356,generics_type,info));
            list$1sTypeph_push_back(result_291->mGenericsTypes,(struct sType*)come_increment_ref_count(type_357));
            come_call_finalizer3(type_357,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_355,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(        !output_generics_struct(result_291,generics_type,info)) {
            new_name_358=(char*)come_increment_ref_count(create_generics_name(type,info));
            printf("output generics is failed(%s)",new_name_358);
            exit(1);
            new_name_358 = come_decrement_ref_count2(new_name_358, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_291;
    come_call_finalizer3(result_291,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result220__;
void* __right_value250 = (void*)0;
struct sType* result_292;
void* __right_value253 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value254 = (void*)0;
struct tuple1$1sTypeph* __dec_obj60;
void* __right_value255 = (void*)0;
struct tuple1$1sTypeph* __dec_obj61;
void* __right_value256 = (void*)0;
char* __dec_obj62;
void* __right_value257 = (void*)0;
char* __dec_obj63;
void* __right_value264 = (void*)0;
struct list$1sTypeph* __dec_obj67;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj71;
void* __right_value273 = (void*)0;
struct list$1sTypeph* __dec_obj72;
void* __right_value280 = (void*)0;
struct list$1charph* __dec_obj76;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj77;
void* __right_value282 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value283 = (void*)0;
struct tuple1$1sTypeph* __dec_obj79;
void* __right_value284 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value285 = (void*)0;
char* __dec_obj81;
void* __right_value286 = (void*)0;
char* __dec_obj82;
void* __right_value287 = (void*)0;
char* __dec_obj83;
void* __right_value288 = (void*)0;
char* __dec_obj84;
struct sType* __result236__;
    if(    self==(void*)0) {
        __result220__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_292=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_292->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj59=result_292->mNoSolvedGenericsType;
        result_292->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj60=result_292->mOriginalLoadVarType;
        result_292->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj60,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj61=result_292->mRefferenceOriginalType;
        result_292->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj61,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj62=result_292->mInterfaceName;
        result_292->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj63=result_292->mGenericsName;
        result_292->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj67=result_292->mGenericsTypes;
        result_292->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj67,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj71=result_292->mArrayNum;
        result_292->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj71,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj72=result_292->mParamTypes;
        result_292->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj72,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_292->mParamNames;
        result_292->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_292->mResultType;
        result_292->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj78=result_292->mAlignas;
        result_292->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj79=result_292->mChannelType;
        result_292->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj79,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_292->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_292->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_292->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_292->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_292->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_292->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_292->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_292->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_292->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_292->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_292->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_292->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_292->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_292->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_292->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_292->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_292->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_292->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_292->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_292->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_292->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_292->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj80=result_292->mSizeNum;
        result_292->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_292->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj81=result_292->mOriginalTypeName;
        result_292->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_292->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_292->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_292->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_292->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_292->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_292->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_292->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj82=result_292->mAsmName;
        result_292->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_292->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_292->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_292->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_292->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_292->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_292->mTupleName;
        result_292->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_292->mAttribute;
        result_292->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_292->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_292;
    come_call_finalizer3(result_292,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result221__;
void* __right_value251 = (void*)0;
struct tuple1$1sTypeph* result_293;
void* __right_value252 = (void*)0;
struct sType* __dec_obj57;
struct tuple1$1sTypeph* __result222__;
    if(    self==(void*)0) {
        __result221__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result221__;
    }
    result_293=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj57=result_293->v1;
        result_293->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_293;
    come_call_finalizer3(result_293,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
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
struct list$1sTypeph* __result223__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sTypeph* result_294;
struct list_item$1sTypeph* it_295;
void* __right_value263 = (void*)0;
struct list$1sTypeph* __result226__;
    if(    self==((void*)0)) {
        __result223__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    result_294=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1221, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_295=self->head;
    while(it_295!=((void*)0)) {
        list$1sTypeph_add(result_294,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_295->item)));
        it_295=it_295->next;
    }
    __result226__ = gComeFunResultObject = __result_obj__ = result_294;
    come_call_finalizer3(result_294,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result224__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sTypeph* litem_296;
struct sType* __dec_obj64;
void* __right_value261 = (void*)0;
struct list_item$1sTypeph* litem_297;
struct sType* __dec_obj65;
void* __right_value262 = (void*)0;
struct list_item$1sTypeph* litem_298;
struct sType* __dec_obj66;
struct list$1sTypeph* __result225__;
    if(    self->len==0) {
        litem_296=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value260=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1235, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_296->prev=((void*)0);
        litem_296->next=((void*)0);
        __dec_obj64=litem_296->item;
        litem_296->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_296;
        self->head=litem_296;
    }
    else if(    self->len==1) {
        litem_297=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value261=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1245, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_297->prev=self->head;
        litem_297->next=((void*)0);
        __dec_obj65=litem_297->item;
        litem_297->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_297;
        self->head->next=litem_297;
    }
    else {
        litem_298=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value262=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1255, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_298->prev=self->tail;
        litem_298->next=((void*)0);
        __dec_obj66=litem_298->item;
        litem_298->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_298;
        self->tail=litem_298;
    }
    self->len++;
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result227__;
void* __right_value265 = (void*)0;
void* __right_value266 = (void*)0;
struct list$1sNodeph* result_299;
struct list_item$1sNodeph* it_300;
void* __right_value271 = (void*)0;
struct list$1sNodeph* __result232__;
    if(    self==((void*)0)) {
        __result227__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    result_299=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1221, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_300=self->head;
    while(it_300!=((void*)0)) {
        list$1sNodeph_add(result_299,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_300->item)));
        it_300=it_300->next;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_299;
    come_call_finalizer3(result_299,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result228__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
struct list_item$1sNodeph* litem_301;
struct sNode* __dec_obj68;
void* __right_value268 = (void*)0;
struct list_item$1sNodeph* litem_302;
struct sNode* __dec_obj69;
void* __right_value269 = (void*)0;
struct list_item$1sNodeph* litem_303;
struct sNode* __dec_obj70;
struct list$1sNodeph* __result229__;
    if(    self->len==0) {
        litem_301=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value267=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1235, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_301->prev=((void*)0);
        litem_301->next=((void*)0);
        __dec_obj68=litem_301->item;
        litem_301->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_301;
        self->head=litem_301;
    }
    else if(    self->len==1) {
        litem_302=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value268=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1245, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_302->prev=self->head;
        litem_302->next=((void*)0);
        __dec_obj69=litem_302->item;
        litem_302->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_302;
        self->head->next=litem_302;
    }
    else {
        litem_303=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value269=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1255, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_303->prev=self->tail;
        litem_303->next=((void*)0);
        __dec_obj70=litem_303->item;
        litem_303->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_303;
        self->tail=litem_303;
    }
    self->len++;
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result230__;
void* __right_value270 = (void*)0;
struct sNode* result_304;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_304=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_304->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_304->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_304->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_304->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_304->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_304->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_304->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_304->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_304->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_304;
    if(result_304) { result_304 = come_decrement_ref_count2(result_304, ((struct sNode*)result_304)->finalize, ((struct sNode*)result_304)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result233__;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1charph* result_305;
struct list_item$1charph* it_306;
void* __right_value279 = (void*)0;
struct list$1charph* __result235__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_305=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1221, "struct list$1charph*", (void*)0, (void*)0))));
    it_306=self->head;
    while(it_306!=((void*)0)) {
        list$1charph_add(result_305,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_306->item)));
        it_306=it_306->next;
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_305;
    come_call_finalizer3(result_305,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value276 = (void*)0;
struct list_item$1charph* litem_307;
char* __dec_obj73;
void* __right_value277 = (void*)0;
struct list_item$1charph* litem_308;
char* __dec_obj74;
void* __right_value278 = (void*)0;
struct list_item$1charph* litem_309;
char* __dec_obj75;
struct list$1charph* __result234__;
    if(    self->len==0) {
        litem_307=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value276=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1235, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        __dec_obj73=litem_307->item;
        litem_307->item=(char*)come_increment_ref_count(item);
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1) {
        litem_308=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value277=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1245, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        __dec_obj74=litem_308->item;
        litem_308->item=(char*)come_increment_ref_count(item);
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value278=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1255, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        __dec_obj75=litem_309->item;
        litem_309->item=(char*)come_increment_ref_count(item);
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj85;
struct tuple1$1sTypeph* __result239__;
    __dec_obj85=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result239__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static struct list$1sTypeph* list$1sTypeph_reset(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_312;
struct list_item$1sTypeph* prev_it_313;
struct list$1sTypeph* __result240__;
    it_312=self->head;
    while(it_312!=((void*)0)) {
        prev_it_313=it_312;
        it_312=it_312->next;
        come_call_finalizer3(prev_it_313,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_315;
struct sType* __result241__;
struct sType* __result242__;
struct sType* result_316;
struct sType* __result243__;
result_315 = (void*)0;
result_316 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_315,0,sizeof(struct sType*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_315;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->it=self->head;
    if(    self->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_316,0,sizeof(struct sType*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_316;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_318;
struct sType* __result244__;
struct sType* __result245__;
struct sType* result_319;
struct sType* __result246__;
result_318 = (void*)0;
result_319 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_318,0,sizeof(struct sType*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_318;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_319,0,sizeof(struct sType*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_319;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1sTypeph* litem_321;
struct sType* __dec_obj87;
void* __right_value295 = (void*)0;
struct list_item$1sTypeph* litem_322;
struct sType* __dec_obj88;
void* __right_value296 = (void*)0;
struct list_item$1sTypeph* litem_323;
struct sType* __dec_obj89;
struct list$1sTypeph* __result247__;
    if(    self->len==0) {
        litem_321=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value294=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1305, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_321->prev=((void*)0);
        litem_321->next=((void*)0);
        __dec_obj87=litem_321->item;
        litem_321->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_321;
        self->head=litem_321;
    }
    else if(    self->len==1) {
        litem_322=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value295=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1315, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_322->prev=self->head;
        litem_322->next=((void*)0);
        __dec_obj88=litem_322->item;
        litem_322->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_322;
        self->head->next=litem_322;
    }
    else {
        litem_323=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value296=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1325, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_323->prev=self->tail;
        litem_323->next=((void*)0);
        __dec_obj89=litem_323->item;
        litem_323->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_323;
        self->tail=litem_323;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_336;
int i_337;
struct sType* __result248__;
struct sType* default_value_338;
struct sType* __result249__;
default_value_338 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_336=self->head;
    i_337=0;
    while(it_336!=((void*)0)) {
        if(        position==i_337) {
            __result248__ = gComeFunResultObject = __result_obj__ = it_336->item;
            gComeFunResultObject = (void*)0;
            return __result248__;
        }
        it_336=it_336->next;
        i_337++;
    }
    memset(&default_value_338,0,sizeof(struct sType*));
    __result249__ = gComeFunResultObject = __result_obj__ = default_value_338;
    come_call_finalizer3(default_value_338,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sType* solve_method_generics(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value304 = (void*)0;
struct sType* result_359;
struct sClass* klass_360;
int generics_number_361;
struct list$1sNodeph* array_num_362;
_Bool immutable__363;
int pointer_num_364;
_Bool heap_365;
_Bool refference_366;
_Bool no_refference_367;
_Bool guard__368;
_Bool no_heap_369;
_Bool no_calling_destructor_370;
_Bool null_value_371;
_Bool exception__372;
void* __right_value305 = (void*)0;
void* __right_value306 = (void*)0;
struct sType* __dec_obj94;
struct list$1sNodeph* __dec_obj95;
int i_373;
struct list$1sTypeph* o2_saved_374;
struct sType* it_375;
void* __right_value307 = (void*)0;
struct list$1sTypeph* o2_saved_381;
struct sType* it_382;
void* __right_value308 = (void*)0;
void* __right_value309 = (void*)0;
struct sType* __dec_obj97;
struct sType* __result253__;
    result_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    klass_360=type->mClass;
    if(    klass_360->mMethodGenerics&&info->method_generics_types&&list$1sTypeph_length(info->method_generics_types)>0) {
        generics_number_361=klass_360->mMethodGenericsNum;
        if(        generics_number_361>=list$1sTypeph_length(info->method_generics_types)) {
            err_msg(info,"invalid method generics parametor number. %d %d",generics_number_361,list$1sTypeph_length(info->method_generics_types));
            exit(2);
        }
        array_num_362=(struct list$1sNodeph*)come_increment_ref_count(type->mArrayNum);
        immutable__363=type->mImmutable;
        pointer_num_364=type->mPointerNum;
        heap_365=type->mHeap;
        refference_366=type->mRefference;
        no_refference_367=type->mNoRefference;
        guard__368=type->mGuardValue;
        no_heap_369=type->mNoHeap;
        no_calling_destructor_370=type->mNoCallingDestructor;
        null_value_371=type->mNullValue;
        exception__372=type->mException;
        __dec_obj94=result_359;
        result_359=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)come_null_check(((struct sType*)(__right_value305=list$1sTypephp_operator_load_element(info->method_generics_types,generics_number_361))), "04heap.c", 233, 3))));
        come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value305,sType_finalize, 0, 1, 0, 0, __result_obj__);
        if(        heap_365) {
            result_359->mHeap=heap_365||result_359->mHeap;
        }
        if(        refference_366) {
            result_359->mRefference=refference_366||result_359->mRefference;
        }
        if(        no_refference_367) {
            result_359->mNoRefference=no_refference_367||result_359->mNoRefference;
        }
        if(        exception__372) {
            result_359->mException=exception__372;
        }
        if(        guard__368) {
            result_359->mGuardValue=guard__368||result_359->mGuardValue;
        }
        if(        no_heap_369) {
            result_359->mNoHeap=(_Bool)1;
            result_359->mHeap=(_Bool)0;
        }
        if(        no_calling_destructor_370) {
            result_359->mNoCallingDestructor=(_Bool)1;
        }
        if(        immutable__363) {
            result_359->mImmutable=immutable__363;
        }
        if(        list$1sNodeph_length(array_num_362)>0) {
            __dec_obj95=result_359->mArrayNum;
            result_359->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(array_num_362);
            come_call_finalizer3(__dec_obj95,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        null_value_371) {
            result_359->mNullValue=null_value_371;
        }
        if(        pointer_num_364>0) {
            result_359->mPointerNum+=pointer_num_364;
        }
        come_call_finalizer3(array_num_362,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    i_373=0;
    for(    o2_saved_374=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_375=list$1sTypeph_begin((o2_saved_374));    !list$1sTypeph_end((o2_saved_374));    it_375=list$1sTypeph_next((o2_saved_374))    ){
        list$1sTypephp_operator_store_element(result_359->mGenericsTypes,i_373,(struct sType*)come_increment_ref_count(solve_method_generics(it_375,info)));
        i_373++;
    }
    come_call_finalizer3(o2_saved_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    i_373=0;
    for(    o2_saved_381=(struct list$1sTypeph*)come_increment_ref_count((type->mParamTypes)),it_382=list$1sTypeph_begin((o2_saved_381));    !list$1sTypeph_end((o2_saved_381));    it_382=list$1sTypeph_next((o2_saved_381))    ){
        list$1sTypephp_operator_store_element(result_359->mParamTypes,i_373,(struct sType*)come_increment_ref_count(solve_method_generics(it_382,info)));
        i_373++;
    }
    come_call_finalizer3(o2_saved_381,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mResultType) {
        __dec_obj97=result_359->mResultType->v1;
        result_359->mResultType->v1=(struct sType*)come_increment_ref_count(solve_method_generics(type->mResultType->v1,info));
        come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_376;
int i_377;
struct sType* default_value_378;
struct list$1sTypeph* __result251__;
struct list_item$1sTypeph* it_379;
int i_380;
struct sType* __dec_obj96;
struct list$1sTypeph* __result252__;
default_value_378 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_376=self->len;
        for(        i_377=0;        i_377<position-len_376;        i_377++        ){
            memset(&default_value_378,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_378));
            come_call_finalizer3(default_value_378,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result251__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    it_379=self->head;
    i_380=0;
    while(it_379!=((void*)0)) {
        if(        position==i_380) {
            __dec_obj96=it_379->item;
            it_379->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj96,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_379=it_379->next;
        i_380++;
    }
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value310 = (void*)0;
char* __result254__;
void* __right_value311 = (void*)0;
char* __result255__;
void* __right_value312 = (void*)0;
struct sRightValueObject* new_value_383;
struct sType* __dec_obj98;
void* __right_value313 = (void*)0;
char* __dec_obj99;
char* __dec_obj100;
void* __right_value317 = (void*)0;
char* buf_387;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
char* __result257__;
    if(    gComeGC||gComeC) {
        __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value310=__builtin_string(obj)));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result254__;
    }
    if(    info->no_output_come_code) {
        __result255__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value311=__builtin_string("")));
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        __right_value311 = come_decrement_ref_count2(__right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    new_value_383=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 301, "struct sRightValueObject*", (void*)0, (void*)0));
    __dec_obj98=new_value_383->mType;
    new_value_383->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj98,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_383->mFreed=(_Bool)0;
    new_value_383->mID=gRightValueNum;
    __dec_obj99=new_value_383->mVarName;
    new_value_383->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=new_value_383->mFunName;
    new_value_383->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_383->mBlockLevel=info->block_level;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_383));
    buf_387=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_387);
    __result257__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value319=xsprintf("((%s)(%s=%s))",((char*)(__right_value318=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_383->mVarName,obj)));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_383,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_387 = come_decrement_ref_count2(buf_387, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value318 = come_decrement_ref_count2(__right_value318, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value319 = come_decrement_ref_count2(__right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_push_back(struct list$1sRightValueObjectph* self, struct sRightValueObject* item){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
struct list_item$1sRightValueObjectph* litem_384;
struct sRightValueObject* __dec_obj101;
void* __right_value315 = (void*)0;
struct list_item$1sRightValueObjectph* litem_385;
struct sRightValueObject* __dec_obj102;
void* __right_value316 = (void*)0;
struct list_item$1sRightValueObjectph* litem_386;
struct sRightValueObject* __dec_obj103;
struct list$1sRightValueObjectph* __result256__;
    if(    self->len==0) {
        litem_384=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value314=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 1305, "struct list_item$1sRightValueObjectph*", (void*)0, (void*)0))));
        litem_384->prev=((void*)0);
        litem_384->next=((void*)0);
        __dec_obj101=litem_384->item;
        litem_384->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj101,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_384;
        self->head=litem_384;
    }
    else if(    self->len==1) {
        litem_385=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value315=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 1315, "struct list_item$1sRightValueObjectph*", (void*)0, (void*)0))));
        litem_385->prev=self->head;
        litem_385->next=((void*)0);
        __dec_obj102=litem_385->item;
        litem_385->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_385;
        self->head->next=litem_385;
    }
    else {
        litem_386=(struct list_item$1sRightValueObjectph*)come_increment_ref_count(((struct list_item$1sRightValueObjectph*)(__right_value316=(struct list_item$1sRightValueObjectph*)come_calloc(1, sizeof(struct list_item$1sRightValueObjectph)*(1), "./comelang.h", 1325, "struct list_item$1sRightValueObjectph*", (void*)0, (void*)0))));
        litem_386->prev=self->tail;
        litem_386->next=((void*)0);
        __dec_obj103=litem_386->item;
        litem_386->item=(struct sRightValueObject*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj103,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_386;
        self->tail=litem_386;
    }
    self->len++;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count){
void* __right_value320 = (void*)0;
struct sRightValueObject* new_value_388;
struct sType* __dec_obj104;
void* __right_value321 = (void*)0;
char* __dec_obj105;
char* __dec_obj106;
void* __right_value322 = (void*)0;
char* buf_389;
void* __right_value323 = (void*)0;
char* __dec_obj107;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
char* __dec_obj108;
    if(    gComeGC||gComeC) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    if(    info->no_output_come_code) {
        come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
        return;
    }
    new_value_388=(struct sRightValueObject*)come_increment_ref_count((struct sRightValueObject*)come_calloc(1, sizeof(struct sRightValueObject)*(1), "04heap.c", 325, "struct sRightValueObject*", (void*)0, (void*)0));
    __dec_obj104=new_value_388->mType;
    new_value_388->mType=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
    new_value_388->mFreed=(_Bool)0;
    new_value_388->mID=gRightValueNum;
    __dec_obj105=new_value_388->mVarName;
    new_value_388->mVarName=(char*)come_increment_ref_count(xsprintf("__right_value%d",gRightValueNum++));
    __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj106=new_value_388->mFunName;
    new_value_388->mFunName=(char*)come_increment_ref_count(info->come_fun->mName);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    new_value_388->mBlockLevel=info->block_level;
    new_value_388->mDecrementRefCount=decrement_ref_count;
    list$1sRightValueObjectph_push_back(info->right_value_objects,(struct sRightValueObject*)come_increment_ref_count(new_value_388));
    buf_389=(char*)come_increment_ref_count(xsprintf("void* __right_value%d = (void*)0;\n",gRightValueNum-1));
    add_come_code_at_function_head(info,buf_389);
    __dec_obj107=come_value->c_value_without_right_value_objects;
    come_value->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, come_value->c_value));
    __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj108=come_value->c_value;
    come_value->c_value=(char*)come_increment_ref_count(xsprintf("((%s)(%s=%s))",((char*)(__right_value324=make_type_name_string(type,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0))),new_value_388->mVarName,come_value->c_value));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value->right_value_objects=new_value_388;
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(new_value_388,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    buf_389 = come_decrement_ref_count2(buf_389, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void remove_object_from_right_values(int right_value_num, struct sInfo* info){
int i_390;
struct list$1sRightValueObjectph* o2_saved_391;
struct sRightValueObject* it_392;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    i_390=0;
    for(    o2_saved_391=(struct list$1sRightValueObjectph*)come_increment_ref_count((info->right_value_objects)),it_392=list$1sRightValueObjectph_begin((o2_saved_391));    !list$1sRightValueObjectph_end((o2_saved_391));    it_392=list$1sRightValueObjectph_next((o2_saved_391))    ){
        if(        it_392->mID==right_value_num) {
            break;
        }
        i_390++;
    }
    come_call_finalizer3(o2_saved_391,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    list$1sRightValueObjectph_delete(info->right_value_objects,i_390,i_390+1);
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_delete(struct list$1sRightValueObjectph* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_393;
struct list$1sRightValueObjectph* __result258__;
struct list_item$1sRightValueObjectph* it_396;
int i_397;
struct list_item$1sRightValueObjectph* prev_it_398;
struct list_item$1sRightValueObjectph* it_399;
int i_400;
struct list_item$1sRightValueObjectph* prev_it_401;
struct list_item$1sRightValueObjectph* it_402;
struct list_item$1sRightValueObjectph* head_prev_it_403;
struct list_item$1sRightValueObjectph* tail_it_404;
int i_405;
struct list_item$1sRightValueObjectph* prev_it_406;
struct list$1sRightValueObjectph* __result260__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_393=tail;
        tail=head;
        head=tmp_393;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result258__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    if(    head==0&&tail==self->len) {
        list$1sRightValueObjectph_reset(self);
    }
    else if(    head==0) {
        it_396=self->head;
        i_397=0;
        while(it_396!=((void*)0)) {
            if(            i_397<tail) {
                prev_it_398=it_396;
                it_396=it_396->next;
                i_397++;
                come_call_finalizer3(prev_it_398,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_397==tail) {
                self->head=it_396;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_396=it_396->next;
                i_397++;
            }
        }
    }
    else if(    tail==self->len) {
        it_399=self->head;
        i_400=0;
        while(it_399!=((void*)0)) {
            if(            i_400==head) {
                self->tail=it_399->prev;
                self->tail->next=((void*)0);
            }
            if(            i_400>=head) {
                prev_it_401=it_399;
                it_399=it_399->next;
                i_400++;
                come_call_finalizer3(prev_it_401,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_399=it_399->next;
                i_400++;
            }
        }
    }
    else {
        it_402=self->head;
        head_prev_it_403=((void*)0);
        tail_it_404=((void*)0);
        i_405=0;
        while(it_402!=((void*)0)) {
            if(            i_405==head) {
                head_prev_it_403=it_402->prev;
            }
            if(            i_405==tail) {
                tail_it_404=it_402;
            }
            if(            i_405>=head&&i_405<tail) {
                prev_it_406=it_402;
                it_402=it_402->next;
                i_405++;
                come_call_finalizer3(prev_it_406,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_402=it_402->next;
                i_405++;
            }
        }
        if(        head_prev_it_403!=((void*)0)) {
            head_prev_it_403->next=tail_it_404;
        }
        if(        tail_it_404!=((void*)0)) {
            tail_it_404->prev=head_prev_it_403;
        }
    }
    __result260__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_reset(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list_item$1sRightValueObjectph* it_394;
struct list_item$1sRightValueObjectph* prev_it_395;
struct list$1sRightValueObjectph* __result259__;
    it_394=self->head;
    while(it_394!=((void*)0)) {
        prev_it_395=it_394;
        it_394=it_394->next;
        come_call_finalizer3(prev_it_395,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value326 = (void*)0;
char* __result261__;
void* __right_value327 = (void*)0;
char* __result262__;
struct sClass* klass_407;
void* __right_value328 = (void*)0;
char* type_name_408;
void* __right_value329 = (void*)0;
char* __result263__;
    if(    gComeGC||gComeC) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value326=__builtin_string(obj)));
        __right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    if(    info->no_output_come_code) {
        __result262__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value327=__builtin_string(obj)));
        __right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    klass_407=type->mClass;
    type_name_408=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __result263__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value329=xsprintf("(%s)come_increment_ref_count(%s)",type_name_408,obj)));
    type_name_408 = come_decrement_ref_count2(type_name_408, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free){
struct list$1CVALUEph* stack_saved_409;
struct list$1sRightValueObjectph* right_value_objects_410;
struct sClass* klass_411;
void* __right_value330 = (void*)0;
char* name_413;
void* __right_value331 = (void*)0;
_Bool no_decrement_414;
void* __right_value332 = (void*)0;
char* c_value_415;
struct sClass* klass_416;
char* class_name_417;
char* fun_name_418;
void* __right_value333 = (void*)0;
struct sType* type2_419;
void* __right_value334 = (void*)0;
char* fun_name2_420;
struct sFun* finalizer_421;
void* __right_value335 = (void*)0;
void* __right_value336 = (void*)0;
char* none_generics_name_425;
void* __right_value337 = (void*)0;
char* generics_fun_name_426;
void* __right_value338 = (void*)0;
struct sGenericsFun* generics_fun_427;
void* __right_value339 = (void*)0;
int i_431;
void* __right_value340 = (void*)0;
char* new_fun_name_432;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
char* __dec_obj136;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_433=0;
char* new_fun_name_434=0;
char* __dec_obj138;
void* __right_value345 = (void*)0;
char* type_name_435;
void* __right_value346 = (void*)0;
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
char* type_name_436;
void* __right_value359 = (void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
char* str_437;
void* __right_value367 = (void*)0;
char* str_438;
struct list$1sRightValueObjectph* __dec_obj139;
struct list$1CVALUEph* __dec_obj140;
memset(&i_431, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_409=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_410=info->right_value_objects;
    klass_411=type->mClass;
    static int dec_num_412=0;
    name_413=(char*)come_increment_ref_count(xsprintf("__dec_obj%d",++dec_num_412));
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value331=make_define_var(type,name_413,(_Bool)0,info))));
    __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    info->comma_instead_of_semicolon) {
        add_come_code(info,"%s=%s,\n",name_413,obj);
    }
    else {
        add_come_code(info,"%s=%s;\n",name_413,obj);
    }
    obj=name_413;
    no_decrement_414=(_Bool)0;
    if(    type->mPointerNum>0) {
        c_value_415=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_416=type->mClass;
        class_name_417=klass_416->mName;
        fun_name_418="finalize";
        type2_419=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_419->mHeap=(_Bool)0;
        fun_name2_420=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_418,info,(_Bool)1));
        if(        type->mNoSolvedGenericsType->v1) {
            type=type->mNoSolvedGenericsType->v1;
        }
        finalizer_421=((void*)0);
        if(        list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_421=((struct sFun*)(__right_value335=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_420)));
            come_call_finalizer3(__right_value335,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_421==((void*)0)) {
                none_generics_name_425=(char*)come_increment_ref_count(get_none_generics_name(type2_419->mClass->mName));
                generics_fun_name_426=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_425,fun_name_418));
                generics_fun_427=((struct sGenericsFun*)(__right_value338=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_426)));
                come_call_finalizer3(__right_value338,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                generics_fun_427) {
                    if(                    !create_generics_fun((char*)come_increment_ref_count(fun_name2_420),generics_fun_427,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_421=((struct sFun*)(__right_value339=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_420)));
                    come_call_finalizer3(__right_value339,sFun_finalize, 0, 1, 0, 0, (void*)0);
                }
                none_generics_name_425 = come_decrement_ref_count2(none_generics_name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_426 = come_decrement_ref_count2(generics_fun_name_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_431=128-1;            i_431>=1;            i_431--            ){
                new_fun_name_432=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_420,i_431));
                finalizer_421=((struct sFun*)(__right_value341=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_432)));
                come_call_finalizer3(__right_value341,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                finalizer_421) {
                    __dec_obj136=fun_name2_420;
                    fun_name2_420=(char*)come_increment_ref_count(__builtin_string(new_fun_name_432));
                    __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_432 = come_decrement_ref_count2(new_fun_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_432 = come_decrement_ref_count2(new_fun_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_421==((void*)0)) {
                finalizer_421=((struct sFun*)(__right_value343=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_420)));
                come_call_finalizer3(__right_value343,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        if(        finalizer_421==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodeph_length(type->mArrayNum)==0) {
            multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value344=create_finalizer_automatically(type,fun_name_418,info)));
            fun_433=multiple_assign_var1->v1;
            new_fun_name_434=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            come_call_finalizer3(__right_value344,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj138=fun_name2_420;
            fun_name2_420=(char*)come_increment_ref_count(new_fun_name_434);
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_421=fun_433;
            new_fun_name_434 = come_decrement_ref_count2(new_fun_name_434, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_421!=((void*)0)) {
            if(            klass_416->mProtocol&&type->mPointerNum==1) {
                type_name_435=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_415) {
                    add_come_last_code2(info,((char*)(__right_value354=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value346=string_to_string(fun_name2_420))),((char*)(__right_value347=string_to_string(c_value_415))),((char*)(__right_value348=string_to_string(c_value_415))),((char*)(__right_value349=string_to_string(type_name_435))),((char*)(__right_value350=string_to_string(c_value_415))),((char*)(__right_value351=string_to_string(c_value_415))),((char*)(__right_value352=string_to_string(type_name_435))),((char*)(__right_value353=string_to_string(c_value_415)))))),type->mAllocaValue,no_decrement_414,no_free,force_delete_);
                    __right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value354 = come_decrement_ref_count2(__right_value354, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
                type_name_435 = come_decrement_ref_count2(type_name_435, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_415) {
                    add_come_last_code2(info,((char*)(__right_value357=xsprintf("come_call_finalizer3(\%s,\%s, %%d, %%d, %%d, %%d, (void*)0)",((char*)(__right_value355=string_to_string(c_value_415))),((char*)(__right_value356=string_to_string(fun_name2_420)))))),type->mAllocaValue,no_decrement_414,no_free,force_delete_);
                    __right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value356 = come_decrement_ref_count2(__right_value356, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                    __right_value357 = come_decrement_ref_count2(__right_value357, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                }
            }
        }
        else {
            if(            klass_416->mProtocol&&type->mPointerNum==1) {
                type_name_436=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                str_437=(char*)come_increment_ref_count(xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, 0,0,0, (void*)0); }",((char*)(__right_value359=string_to_string(name_413))),((char*)(__right_value360=string_to_string(name_413))),((char*)(__right_value361=string_to_string(name_413))),((char*)(__right_value362=string_to_string(type_name_436))),((char*)(__right_value363=string_to_string(name_413))),((char*)(__right_value364=string_to_string(type_name_436))),((char*)(__right_value365=string_to_string(name_413)))));
                __right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value361 = come_decrement_ref_count2(__right_value361, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                add_come_last_code2(info,str_437);
                type_name_436 = come_decrement_ref_count2(type_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                str_437 = come_decrement_ref_count2(str_437, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                str_438=(char*)come_increment_ref_count(xsprintf("%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, 0,0,0, (void*)0)",name_413,name_413));
                add_come_last_code2(info,str_438);
                str_438 = come_decrement_ref_count2(str_438, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        c_value_415 = come_decrement_ref_count2(c_value_415, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_419,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_420 = come_decrement_ref_count2(fun_name2_420, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj139=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_410);
    come_call_finalizer3(__dec_obj139,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj140=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_409);
    come_call_finalizer3(__dec_obj140,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_409,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_422;
unsigned int hash_423;
unsigned int it_424;
struct sFun* __result264__;
struct sFun* __result265__;
struct sFun* __result266__;
struct sFun* __result267__;
default_value_422 = (void*)0;
    memset(&default_value_422,0,sizeof(struct sFun*));
    hash_423=charp_get_hash_key(((char*)key))%self->size;
    it_424=hash_423;
    while((_Bool)1) {
        if(        self->item_existance[it_424]) {
            if(            charp_equals(self->keys[it_424],key)) {
                __result264__ = gComeFunResultObject = __result_obj__ = self->items[it_424];
                come_call_finalizer3(default_value_422,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result264__;
            }
            it_424++;
            if(            it_424>=self->size) {
                it_424=0;
            }
            else if(            it_424==hash_423) {
                __result265__ = gComeFunResultObject = __result_obj__ = default_value_422;
                come_call_finalizer3(default_value_422,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
        }
        else {
            __result266__ = gComeFunResultObject = __result_obj__ = default_value_422;
            come_call_finalizer3(default_value_422,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result266__;
        }
    }
    __result267__ = gComeFunResultObject = __result_obj__ = default_value_422;
    come_call_finalizer3(default_value_422,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj109;
struct sType* __dec_obj110;
struct list$1sTypeph* __dec_obj111;
struct list$1charph* __dec_obj112;
struct list$1charph* __dec_obj113;
struct sType* __dec_obj114;
struct sBlock* __dec_obj115;
struct buffer* __dec_obj118;
struct buffer* __dec_obj119;
struct buffer* __dec_obj120;
struct buffer* __dec_obj121;
char* __dec_obj122;
char* __dec_obj123;
char* __dec_obj124;
char* __dec_obj125;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj109=self->mName;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj110=self->mResultType;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj111=self->mParamTypes;
            come_call_finalizer3(__dec_obj111,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj112=self->mParamNames;
            come_call_finalizer3(__dec_obj112,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj113=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj113,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj114=self->mLambdaType;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj115=self->mBlock;
            come_call_finalizer3(__dec_obj115,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj118=self->mSource;
            come_call_finalizer3(__dec_obj118,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj119=self->mSourceHead;
            come_call_finalizer3(__dec_obj119,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj120=self->mSourceHead2;
            come_call_finalizer3(__dec_obj120,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj121=self->mSourceDefer;
            come_call_finalizer3(__dec_obj121,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj122=self->mComeHeader;
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj123=self->mDeclareSName;
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj124=self->mAttribute;
            __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj125=self->mFunAttribute;
            __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj116;
struct sVarTable* __dec_obj117;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj116=self->mNodes;
            come_call_finalizer3(__dec_obj116,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj117=self->mVarTable;
            come_call_finalizer3(__dec_obj117,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sGenericsFun* map$2charphsGenericsFunphp_operator_load_element(struct map$2charphsGenericsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sGenericsFun* default_value_428;
unsigned int hash_429;
unsigned int it_430;
struct sGenericsFun* __result268__;
struct sGenericsFun* __result269__;
struct sGenericsFun* __result270__;
struct sGenericsFun* __result271__;
default_value_428 = (void*)0;
    memset(&default_value_428,0,sizeof(struct sGenericsFun*));
    hash_429=charp_get_hash_key(((char*)key))%self->size;
    it_430=hash_429;
    while((_Bool)1) {
        if(        self->item_existance[it_430]) {
            if(            charp_equals(self->keys[it_430],key)) {
                __result268__ = gComeFunResultObject = __result_obj__ = self->items[it_430];
                come_call_finalizer3(default_value_428,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result268__;
            }
            it_430++;
            if(            it_430>=self->size) {
                it_430=0;
            }
            else if(            it_430==hash_429) {
                __result269__ = gComeFunResultObject = __result_obj__ = default_value_428;
                come_call_finalizer3(default_value_428,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result269__;
            }
        }
        else {
            __result270__ = gComeFunResultObject = __result_obj__ = default_value_428;
            come_call_finalizer3(default_value_428,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result270__;
        }
    }
    __result271__ = gComeFunResultObject = __result_obj__ = default_value_428;
    come_call_finalizer3(default_value_428,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj126;
struct list$1charph* __dec_obj127;
struct list$1charph* __dec_obj128;
char* __dec_obj129;
struct sType* __dec_obj130;
struct list$1sTypeph* __dec_obj131;
struct list$1charph* __dec_obj132;
struct list$1charph* __dec_obj133;
char* __dec_obj134;
char* __dec_obj135;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj126=self->mImplType;
            come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj127=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj127,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj128=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj128,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj129=self->mName;
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj130=self->mResultType;
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj131=self->mParamTypes;
            come_call_finalizer3(__dec_obj131,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj132=self->mParamNames;
            come_call_finalizer3(__dec_obj132,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj133=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj133,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj134=self->mBlock;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj135=self->mGenericsSName;
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj137;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj137=self->v2;
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_439;
struct list_item$1sRightValueObjectph* prev_it_440;
    it_439=self->head;
    while(it_439!=((void*)0)) {
        prev_it_440=it_439;
        it_439=it_439->next;
        come_call_finalizer3(prev_it_440,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1CVALUEph_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_441;
struct list_item$1CVALUEph* prev_it_442;
    it_441=self->head;
    while(it_441!=((void*)0)) {
        prev_it_442=it_441;
        it_441=it_441->next;
        come_call_finalizer3(prev_it_442,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
struct CVALUE* __dec_obj141;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj141=self->item;
            come_call_finalizer3(__dec_obj141,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj142;
struct sType* __dec_obj143;
char* __dec_obj144;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj142=self->c_value;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj143=self->type;
            come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj144=self->c_value_without_right_value_objects;
            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
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

void free_object(struct sType* type, char* obj, _Bool no_decrement, _Bool no_free, struct sInfo* info, _Bool comma, _Bool ret_value, _Bool force_delete_){
struct list$1CVALUEph* stack_saved_445;
struct list$1sRightValueObjectph* right_value_objects_446;
struct sType* type_before_447;
_Bool alloca_value_448;
void* __right_value368 = (void*)0;
char* c_value_449;
struct sClass* klass_450;
char* class_name_451;
char* fun_name_452;
void* __right_value369 = (void*)0;
struct sType* type2_453;
void* __right_value370 = (void*)0;
char* fun_name2_454;
struct sFun* finalizer_455;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
char* none_generics_name_456;
void* __right_value373 = (void*)0;
char* generics_fun_name_457;
void* __right_value374 = (void*)0;
struct sGenericsFun* generics_fun_458;
void* __right_value375 = (void*)0;
int i_459;
void* __right_value376 = (void*)0;
char* new_fun_name_460;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
char* __dec_obj145;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun_461=0;
char* new_fun_name_462=0;
char* __dec_obj146;
void* __right_value381 = (void*)0;
char* type_name_463;
void* __right_value382 = (void*)0;
void* __right_value383 = (void*)0;
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
struct list$1tuple2$2charphsTypephph* o2_saved_464;
struct tuple2$2charphsTypeph* it_467;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_470=0;
struct sType* field_type_471=0;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
char* obj_472;
struct list$1tuple2$2charphsTypephph* o2_saved_475;
struct tuple2$2charphsTypeph* it_476;
struct tuple2$2charphsTypeph* multiple_assign_var4 = (void*)0;
char* name_477=0;
struct sType* field_type_478=0;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
char* obj_479;
void* __right_value426 = (void*)0;
char* type_name_480;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
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
struct list$1sRightValueObjectph* __dec_obj150;
struct list$1CVALUEph* __dec_obj151;
memset(&i_459, 0, sizeof(int));
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->no_output_come_code) {
        return;
    }
    stack_saved_445=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_446=info->right_value_objects;
    type_before_447=type;
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    if(    type->mNoSolvedGenericsType->v1) {
        alloca_value_448=type->mAllocaValue;
        type=type->mNoSolvedGenericsType->v1;
        type->mAllocaValue=alloca_value_448;
    }
    if(    type->mPointerNum>0||type->mClass->mProtocol||list$1sTypeph_length(type->mGenericsTypes)>0||(info->come_fun->mCloner&&ret_value)) {
        c_value_449=(char*)come_increment_ref_count(__builtin_string(obj));
        klass_450=type->mClass;
        class_name_451=klass_450->mName;
        fun_name_452="finalize";
        type2_453=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        type2_453->mHeap=(_Bool)0;
        fun_name2_454=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_452,info,(_Bool)1));
        finalizer_455=((void*)0);
        if(        list$1sTypeph_length(type->mGenericsTypes)>0) {
            finalizer_455=((struct sFun*)(__right_value371=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_454)));
            come_call_finalizer3(__right_value371,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_455==((void*)0)) {
                none_generics_name_456=(char*)come_increment_ref_count(get_none_generics_name(type2_453->mClass->mName));
                generics_fun_name_457=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_456,fun_name_452));
                generics_fun_458=((struct sGenericsFun*)(__right_value374=map$2charphsGenericsFunphp_operator_load_element(info->generics_funcs,generics_fun_name_457)));
                come_call_finalizer3(__right_value374,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                generics_fun_458) {
                    if(                    !create_generics_fun((char*)come_increment_ref_count(fun_name2_454),generics_fun_458,type,info)) {
                        printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                        exit(2);
                    }
                    finalizer_455=((struct sFun*)(__right_value375=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_454)));
                    come_call_finalizer3(__right_value375,sFun_finalize, 0, 1, 0, 0, (void*)0);
                }
                none_generics_name_456 = come_decrement_ref_count2(none_generics_name_456, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                generics_fun_name_457 = come_decrement_ref_count2(generics_fun_name_457, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            for(            i_459=128-1;            i_459>=1;            i_459--            ){
                new_fun_name_460=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_454,i_459));
                finalizer_455=((struct sFun*)(__right_value377=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_460)));
                come_call_finalizer3(__right_value377,sFun_finalize, 0, 1, 0, 0, (void*)0);
                if(                finalizer_455) {
                    __dec_obj145=fun_name2_454;
                    fun_name2_454=(char*)come_increment_ref_count(__builtin_string(new_fun_name_460));
                    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
                    new_fun_name_460 = come_decrement_ref_count2(new_fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                new_fun_name_460 = come_decrement_ref_count2(new_fun_name_460, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            finalizer_455==((void*)0)) {
                finalizer_455=((struct sFun*)(__right_value379=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_454)));
                come_call_finalizer3(__right_value379,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        if(        finalizer_455==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber&&list$1sNodeph_length(type->mArrayNum)==0) {
            multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value380=create_finalizer_automatically(type,fun_name_452,info)));
            fun_461=multiple_assign_var2->v1;
            new_fun_name_462=(char*)come_increment_ref_count(multiple_assign_var2->v2);
            come_call_finalizer3(__right_value380,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj146=fun_name2_454;
            fun_name2_454=(char*)come_increment_ref_count(new_fun_name_462);
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
            finalizer_455=fun_461;
            new_fun_name_462 = come_decrement_ref_count2(new_fun_name_462, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        finalizer_455!=((void*)0)) {
            if(            klass_450->mProtocol&&type->mPointerNum==1) {
                type_name_463=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                if(                c_value_449) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value390=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize :(void*)0, \%s ? ((\%s)\%s)->_protocol_obj :(void*)0, %%d, %%d, %%d, %%d, %%s),\n",((char*)(__right_value382=string_to_string(fun_name2_454))),((char*)(__right_value383=string_to_string(c_value_449))),((char*)(__right_value384=string_to_string(c_value_449))),((char*)(__right_value385=string_to_string(type_name_463))),((char*)(__right_value386=string_to_string(c_value_449))),((char*)(__right_value387=string_to_string(c_value_449))),((char*)(__right_value388=string_to_string(type_name_463))),((char*)(__right_value389=string_to_string(c_value_449)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            __right_value382 = come_decrement_ref_count2(__right_value382, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value383 = come_decrement_ref_count2(__right_value383, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value384 = come_decrement_ref_count2(__right_value384, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value386 = come_decrement_ref_count2(__right_value386, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value389 = come_decrement_ref_count2(__right_value389, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value390 = come_decrement_ref_count2(__right_value390, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value399=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, %%s);\n",((char*)(__right_value391=string_to_string(fun_name2_454))),((char*)(__right_value392=string_to_string(c_value_449))),((char*)(__right_value393=string_to_string(c_value_449))),((char*)(__right_value394=string_to_string(type_name_463))),((char*)(__right_value395=string_to_string(c_value_449))),((char*)(__right_value396=string_to_string(c_value_449))),((char*)(__right_value397=string_to_string(type_name_463))),((char*)(__right_value398=string_to_string(c_value_449)))))),type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value398 = come_decrement_ref_count2(__right_value398, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value399 = come_decrement_ref_count2(__right_value399, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value408=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0),\n",((char*)(__right_value400=string_to_string(fun_name2_454))),((char*)(__right_value401=string_to_string(c_value_449))),((char*)(__right_value402=string_to_string(c_value_449))),((char*)(__right_value403=string_to_string(type_name_463))),((char*)(__right_value404=string_to_string(c_value_449))),((char*)(__right_value405=string_to_string(c_value_449))),((char*)(__right_value406=string_to_string(type_name_463))),((char*)(__right_value407=string_to_string(c_value_449)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                            __right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value402 = come_decrement_ref_count2(__right_value402, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value403 = come_decrement_ref_count2(__right_value403, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value404 = come_decrement_ref_count2(__right_value404, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value405 = come_decrement_ref_count2(__right_value405, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value406 = come_decrement_ref_count2(__right_value406, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value407 = come_decrement_ref_count2(__right_value407, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value417=xsprintf("come_call_finalizer2(\%s, \%s, \%s ? ((\%s)\%s)->finalize:(void*)0, \%s ? ((\%s)\%s)->_protocol_obj:(void*)0, %%d, %%d, %%d, %%d, (void*)0);\n",((char*)(__right_value409=string_to_string(fun_name2_454))),((char*)(__right_value410=string_to_string(c_value_449))),((char*)(__right_value411=string_to_string(c_value_449))),((char*)(__right_value412=string_to_string(type_name_463))),((char*)(__right_value413=string_to_string(c_value_449))),((char*)(__right_value414=string_to_string(c_value_449))),((char*)(__right_value415=string_to_string(type_name_463))),((char*)(__right_value416=string_to_string(c_value_449)))))),type->mAllocaValue,no_decrement,no_free,force_delete_);
                            __right_value409 = come_decrement_ref_count2(__right_value409, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value413 = come_decrement_ref_count2(__right_value413, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value415 = come_decrement_ref_count2(__right_value415, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            __right_value417 = come_decrement_ref_count2(__right_value417, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
                type_name_463 = come_decrement_ref_count2(type_name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(                c_value_449) {
                    if(                    no_decrement) {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value418=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s),\n",c_value_449,fun_name2_454,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            __right_value418 = come_decrement_ref_count2(__right_value418, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value419=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, %s);\n",c_value_449,fun_name2_454,type->mAllocaValue,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__"))))));
                            __right_value419 = come_decrement_ref_count2(__right_value419, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                    else {
                        if(                        comma) {
                            add_come_code(info,((char*)(__right_value420=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0),\n",c_value_449,fun_name2_454,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                        else {
                            add_come_code(info,((char*)(__right_value421=xsprintf("come_call_finalizer3(%s,%s, %d, %d, %d, %d, (void*)0);\n",c_value_449,fun_name2_454,type->mAllocaValue,no_decrement,no_free,force_delete_))));
                            __right_value421 = come_decrement_ref_count2(__right_value421, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        }
                    }
                }
            }
        }
        else {
            if(            klass_450->mStruct&&type->mPointerNum==0) {
                for(                o2_saved_464=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_450->mFields)),it_467=list$1tuple2$2charphsTypephph_begin((o2_saved_464));                !list$1tuple2$2charphsTypephph_end((o2_saved_464));                it_467=list$1tuple2$2charphsTypephph_next((o2_saved_464))                ){
                    multiple_assign_var3=it_467;
                    name_470=(char*)come_increment_ref_count(multiple_assign_var3->v1);
                    field_type_471=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
                    if(                    field_type_471->mHeap&&field_type_471->mPointerNum>0) {
                        obj_472=(char*)come_increment_ref_count(xsprintf("(((%s)%s).%s)",((char*)(__right_value422=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_449,name_470));
                        __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_471,obj_472,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        obj_472 = come_decrement_ref_count2(obj_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    name_470 = come_decrement_ref_count2(name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_464,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            else if(            klass_450->mStruct&&type->mPointerNum==1) {
                for(                o2_saved_475=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_450->mFields)),it_476=list$1tuple2$2charphsTypephph_begin((o2_saved_475));                !list$1tuple2$2charphsTypephph_end((o2_saved_475));                it_476=list$1tuple2$2charphsTypephph_next((o2_saved_475))                ){
                    multiple_assign_var4=it_476;
                    name_477=(char*)come_increment_ref_count(multiple_assign_var4->v1);
                    field_type_478=(struct sType*)come_increment_ref_count(multiple_assign_var4->v2);
                    if(                    field_type_478->mHeap&&field_type_478->mPointerNum>0) {
                        obj_479=(char*)come_increment_ref_count(xsprintf("(((%s)%s)->%s)",((char*)(__right_value424=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),c_value_449,name_477));
                        __right_value424 = come_decrement_ref_count2(__right_value424, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                        free_object(field_type_478,obj_479,no_decrement,no_free,info,(_Bool)0,(_Bool)0,(_Bool)0);
                        obj_479 = come_decrement_ref_count2(obj_479, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                    name_477 = come_decrement_ref_count2(name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(field_type_478,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                come_call_finalizer3(o2_saved_475,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            if(            !type->mAllocaValue) {
                if(                klass_450->mProtocol&&type->mPointerNum==1) {
                    if(                    c_value_449) {
                        type_name_480=(char*)come_increment_ref_count(make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,((char*)(__right_value434=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d,%%d, %%s):0),\n",((char*)(__right_value427=string_to_string(c_value_449))),((char*)(__right_value428=string_to_string(c_value_449))),((char*)(__right_value429=string_to_string(c_value_449))),((char*)(__right_value430=string_to_string(type_name_480))),((char*)(__right_value431=string_to_string(c_value_449))),((char*)(__right_value432=string_to_string(type_name_480))),((char*)(__right_value433=string_to_string(c_value_449)))))),no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value431 = come_decrement_ref_count2(__right_value431, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value432 = come_decrement_ref_count2(__right_value432, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value434 = come_decrement_ref_count2(__right_value434, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value442=xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, %%s); } \n",((char*)(__right_value435=string_to_string(c_value_449))),((char*)(__right_value436=string_to_string(c_value_449))),((char*)(__right_value437=string_to_string(c_value_449))),((char*)(__right_value438=string_to_string(type_name_480))),((char*)(__right_value439=string_to_string(c_value_449))),((char*)(__right_value440=string_to_string(type_name_480))),((char*)(__right_value441=string_to_string(c_value_449)))))),no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                                __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value436 = come_decrement_ref_count2(__right_value436, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value442 = come_decrement_ref_count2(__right_value442, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,((char*)(__right_value450=xsprintf("((\%s) ? \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, (void*)0):0),\n",((char*)(__right_value443=string_to_string(c_value_449))),((char*)(__right_value444=string_to_string(c_value_449))),((char*)(__right_value445=string_to_string(c_value_449))),((char*)(__right_value446=string_to_string(type_name_480))),((char*)(__right_value447=string_to_string(c_value_449))),((char*)(__right_value448=string_to_string(type_name_480))),((char*)(__right_value449=string_to_string(c_value_449)))))),no_decrement,no_free,force_delete_);
                                __right_value443 = come_decrement_ref_count2(__right_value443, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value449 = come_decrement_ref_count2(__right_value449, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                            else {
                                add_come_code(info,((char*)(__right_value458=xsprintf("if(\%s) { \%s = come_decrement_ref_count2(\%s, ((\%s)\%s)->finalize, ((\%s)\%s)->_protocol_obj, %%d, %%d, %%d, (void*)0); } \n",((char*)(__right_value451=string_to_string(c_value_449))),((char*)(__right_value452=string_to_string(c_value_449))),((char*)(__right_value453=string_to_string(c_value_449))),((char*)(__right_value454=string_to_string(type_name_480))),((char*)(__right_value455=string_to_string(c_value_449))),((char*)(__right_value456=string_to_string(type_name_480))),((char*)(__right_value457=string_to_string(c_value_449)))))),no_decrement,no_free,force_delete_);
                                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value455 = come_decrement_ref_count2(__right_value455, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value456 = come_decrement_ref_count2(__right_value456, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value457 = come_decrement_ref_count2(__right_value457, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                                __right_value458 = come_decrement_ref_count2(__right_value458, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                            }
                        }
                        type_name_480 = come_decrement_ref_count2(type_name_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
                }
                else {
                    if(                    c_value_449) {
                        if(                        no_decrement) {
                            if(                            comma) {
                                add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s)),\n",c_value_449,c_value_449,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                            else {
                                add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, %s);\n",c_value_449,c_value_449,no_decrement,no_free,force_delete_,((info->come_fun->mNoResultType)?("(void*)0"):("__result_obj__")));
                            }
                        }
                        else {
                            if(                            comma) {
                                add_come_code(info,"(%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0)),\n",c_value_449,c_value_449,no_decrement,no_free,force_delete_);
                            }
                            else {
                                add_come_code(info,"%s = come_decrement_ref_count2(%s, (void*)0, (void*)0, %d, %d, %d, (void*)0);\n",c_value_449,c_value_449,no_decrement,no_free,force_delete_);
                            }
                        }
                    }
                }
            }
        }
        c_value_449 = come_decrement_ref_count2(c_value_449, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_453,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name2_454 = come_decrement_ref_count2(fun_name2_454, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj150=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_446);
    come_call_finalizer3(__dec_obj150,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj151=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_445);
    come_call_finalizer3(__dec_obj151,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_445,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_465;
struct tuple2$2charphsTypeph* __result272__;
struct tuple2$2charphsTypeph* __result273__;
struct tuple2$2charphsTypeph* result_466;
struct tuple2$2charphsTypeph* __result274__;
result_465 = (void*)0;
result_466 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_465,0,sizeof(struct tuple2$2charphsTypeph*));
        __result272__ = gComeFunResultObject = __result_obj__ = result_465;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    self->it=self->head;
    if(    self->it) {
        __result273__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    memset(&result_466,0,sizeof(struct tuple2$2charphsTypeph*));
    __result274__ = gComeFunResultObject = __result_obj__ = result_466;
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_468;
struct tuple2$2charphsTypeph* __result275__;
struct tuple2$2charphsTypeph* __result276__;
struct tuple2$2charphsTypeph* result_469;
struct tuple2$2charphsTypeph* __result277__;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_468,0,sizeof(struct tuple2$2charphsTypeph*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_468;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_469,0,sizeof(struct tuple2$2charphsTypeph*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_469;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_473;
struct list_item$1tuple2$2charphsTypephph* prev_it_474;
    it_473=self->head;
    while(it_473!=((void*)0)) {
        prev_it_474=it_473;
        it_473=it_473->next;
        come_call_finalizer3(prev_it_474,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj147;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj147=self->item;
            come_call_finalizer3(__dec_obj147,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj148;
struct sType* __dec_obj149;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj148=self->v1;
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj149=self->v2;
            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct tuple2$2sTypephcharph* clone_object(struct sType* type, char* obj, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool in_clone_object_481;
void* __right_value459 = (void*)0;
struct sType* type2_482;
char* result_483;
struct sType* result_type_484;
struct list$1CVALUEph* stack_saved_485;
struct list$1sRightValueObjectph* right_value_objects_486;
void* __right_value460 = (void*)0;
char* c_value_487;
struct sClass* klass_488;
char* class_name_489;
char* fun_name_490;
struct sFun* cloner_491;
char* fun_name2_492;
void* __right_value461 = (void*)0;
char* none_generics_name_493;
void* __right_value462 = (void*)0;
struct sType* obj_type_494;
void* __right_value463 = (void*)0;
char* __dec_obj152;
void* __right_value464 = (void*)0;
char* fun_name3_495;
void* __right_value465 = (void*)0;
struct sGenericsFun* generics_fun_496;
void* __right_value466 = (void*)0;
_Bool _if_conditional1;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct tuple2$2sTypephcharph* __result283__;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
char* __dec_obj157;
int i_499;
void* __right_value474 = (void*)0;
char* new_fun_name_500;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
char* __dec_obj158;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var5 = (void*)0;
struct sFun* fun_501=0;
char* new_fun_name_502=0;
char* __dec_obj159;
struct sType* __dec_obj160;
void* __right_value479 = (void*)0;
struct sType* __dec_obj161;
void* __right_value480 = (void*)0;
char* __dec_obj162;
void* __right_value481 = (void*)0;
char* __dec_obj163;
void* __right_value482 = (void*)0;
struct sType* __dec_obj164;
void* __right_value483 = (void*)0;
char* type_name_503;
void* __right_value484 = (void*)0;
char* finalizer_name_504;
void* __right_value485 = (void*)0;
char* cloner_name_505;
void* __right_value486 = (void*)0;
char* __dec_obj165;
void* __right_value487 = (void*)0;
char* __dec_obj166;
struct list$1sRightValueObjectph* __dec_obj167;
struct list$1CVALUEph* __dec_obj168;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct tuple2$2sTypephcharph* __result284__;
fun_name2_492 = (void*)0;
memset(&i_499, 0, sizeof(int));
    in_clone_object_481=info->in_clone_object;
    info->in_clone_object=(_Bool)1;
    type2_482=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_483=((void*)0);
    result_type_484=((void*)0);
    stack_saved_485=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_486=info->right_value_objects;
    c_value_487=(char*)come_increment_ref_count(__builtin_string(obj));
    klass_488=type->mClass;
    class_name_489=klass_488->mName;
    fun_name_490="clone";
    cloner_491=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_493=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_494=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj152=fun_name2_492;
        fun_name2_492=(char*)come_increment_ref_count(create_method_name(obj_type_494,(_Bool)0,fun_name_490,info,(_Bool)1));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_495=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_493,fun_name_490));
        generics_fun_496=((struct sGenericsFun*)(__right_value465=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_495,((void*)0))));
        come_call_finalizer3(__right_value465,sGenericsFun_finalize, 0, 1, 0, 0, __result_obj__);
        if(        generics_fun_496) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_492)),generics_fun_496,obj_type_494,info))),            _if_conditional1) {
                __result283__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value471=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 739, "struct tuple2$2sTypephcharph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "04heap.c", 739, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info)),(char*)come_increment_ref_count(__builtin_string("")))));
                none_generics_name_493 = come_decrement_ref_count2(none_generics_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_495 = come_decrement_ref_count2(fun_name3_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
                result_483 = come_decrement_ref_count2(result_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_485,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                c_value_487 = come_decrement_ref_count2(c_value_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_492 = come_decrement_ref_count2(fun_name2_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value471,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result283__;
            }
        }
        cloner_491=((struct sFun*)(__right_value472=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_492)));
        come_call_finalizer3(__right_value472,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        none_generics_name_493 = come_decrement_ref_count2(none_generics_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_494,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_495 = come_decrement_ref_count2(fun_name3_495, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj157=fun_name2_492;
        fun_name2_492=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_490,info,(_Bool)1));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_499=128-1;        i_499>=1;        i_499--        ){
            new_fun_name_500=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_492,i_499));
            cloner_491=((struct sFun*)(__right_value475=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_500)));
            come_call_finalizer3(__right_value475,sFun_finalize, 0, 1, 0, 0, __result_obj__);
            if(            cloner_491) {
                __dec_obj158=fun_name2_492;
                fun_name2_492=(char*)come_increment_ref_count(__builtin_string(new_fun_name_500));
                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_500 = come_decrement_ref_count2(new_fun_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_500 = come_decrement_ref_count2(new_fun_name_500, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_491==((void*)0)) {
            cloner_491=((struct sFun*)(__right_value477=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_492)));
            come_call_finalizer3(__right_value477,sFun_finalize, 0, 1, 0, 0, __result_obj__);
        }
    }
    if(    cloner_491==((void*)0)&&!type->mClass->mNumber) {
        multiple_assign_var5=((struct tuple2$2sFunpcharph*)(__right_value478=create_cloner_automatically(type,fun_name_490,info)));
        fun_501=multiple_assign_var5->v1;
        new_fun_name_502=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        come_call_finalizer3(__right_value478,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj159=fun_name2_492;
        fun_name2_492=(char*)come_increment_ref_count(new_fun_name_502);
        __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_491=fun_501;
        new_fun_name_502 = come_decrement_ref_count2(new_fun_name_502, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    cloner_491!=((void*)0)) {
        __dec_obj160=result_type_484;
        result_type_484=(struct sType*)come_increment_ref_count(cloner_491->mResultType);
        come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj161=result_type_484;
        result_type_484=(struct sType*)come_increment_ref_count(solve_generics(result_type_484,type,info));
        come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj162=result_483;
        result_483=(char*)come_increment_ref_count(xsprintf("come_call_cloner(%s, %s)",fun_name2_492,c_value_487));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj163=result_483;
            result_483=(char*)come_increment_ref_count(append_stackframe(result_483,result_type_484,info));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    else {
        __dec_obj164=result_type_484;
        result_type_484=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        come_call_finalizer3(__dec_obj164,sType_finalize, 0, 0, 0, 0, (void*)0);
        type2_482->mHeap=(_Bool)1;
        type_name_503=(char*)come_increment_ref_count(make_type_name_string(type2_482,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        finalizer_name_504=(char*)come_increment_ref_count(create_method_name(type2_482,(_Bool)0,"finalize",info,(_Bool)1));
        cloner_name_505=(char*)come_increment_ref_count(create_method_name(type2_482,(_Bool)0,"clone",info,(_Bool)1));
        __dec_obj165=result_483;
        result_483=(char*)come_increment_ref_count(xsprintf("(%s)come_memdup(%s, \"%s\", %d, \"%s\", \"%s\", \"%s\")",type_name_503,c_value_487,info->sname,info->sline,type_name_503,finalizer_name_504,cloner_name_505));
        __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        gComeDebug) {
            __dec_obj166=result_483;
            result_483=(char*)come_increment_ref_count(append_stackframe(result_483,result_type_484,info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        type_name_503 = come_decrement_ref_count2(type_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        finalizer_name_504 = come_decrement_ref_count2(finalizer_name_504, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        cloner_name_505 = come_decrement_ref_count2(cloner_name_505, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj167=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_486);
    come_call_finalizer3(__dec_obj167,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj168=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_485);
    come_call_finalizer3(__dec_obj168,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    info->in_clone_object=in_clone_object_481;
    __result284__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value489=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "04heap.c", 801, "struct tuple2$2sTypephcharph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_484),(char*)come_increment_ref_count(result_483))));
    come_call_finalizer3(type2_482,sType_finalize, 0, 0, 0, 0, (void*)0);
    result_483 = come_decrement_ref_count2(result_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_484,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_485,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    c_value_487 = come_decrement_ref_count2(c_value_487, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_name2_492 = come_decrement_ref_count2(fun_name2_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value489,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_497;
unsigned int it_498;
struct sGenericsFun* __result278__;
struct sGenericsFun* __result279__;
struct sGenericsFun* __result280__;
struct sGenericsFun* __result281__;
    hash_497=charp_get_hash_key(((char*)key))%self->size;
    it_498=hash_497;
    while((_Bool)1) {
        if(        self->item_existance[it_498]) {
            if(            charp_equals(self->keys[it_498],key)) {
                __result278__ = gComeFunResultObject = __result_obj__ = self->items[it_498];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result278__;
            }
            it_498++;
            if(            it_498>=self->size) {
                it_498=0;
            }
            else if(            it_498==hash_497) {
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

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj153;
char* __dec_obj154;
struct tuple2$2sTypephcharph* __result282__;
    __dec_obj153=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj154=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result282__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj155;
char* __dec_obj156;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj155=self->v1;
            come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj156=self->v2;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool create_equals_method(struct sType* type, struct sInfo* info){
char* result_506;
struct list$1CVALUEph* stack_saved_507;
struct list$1sRightValueObjectph* right_value_objects_508;
struct sClass* klass_509;
char* class_name_510;
char* fun_name_511;
void* __right_value490 = (void*)0;
struct sType* type2_512;
struct sFun* cloner_513;
char* fun_name2_514;
void* __right_value491 = (void*)0;
char* none_generics_name_515;
void* __right_value492 = (void*)0;
struct sType* obj_type_516;
void* __right_value493 = (void*)0;
char* __dec_obj169;
void* __right_value494 = (void*)0;
char* fun_name3_517;
void* __right_value495 = (void*)0;
struct sGenericsFun* generics_fun_518;
void* __right_value496 = (void*)0;
_Bool _if_conditional2;
_Bool __result285__;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
char* __dec_obj170;
int i_519;
void* __right_value499 = (void*)0;
char* new_fun_name_520;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __dec_obj171;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var6 = (void*)0;
struct sFun* fun_521=0;
char* new_fun_name_522=0;
char* __dec_obj172;
struct list$1sRightValueObjectph* __dec_obj173;
struct list$1CVALUEph* __dec_obj174;
_Bool __result286__;
fun_name2_514 = (void*)0;
memset(&i_519, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_506=((void*)0);
    stack_saved_507=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_508=info->right_value_objects;
    klass_509=type->mClass;
    class_name_510=klass_509->mName;
    fun_name_511="equals";
    type2_512=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_512->mHeap=(_Bool)0;
    cloner_513=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_515=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_516=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj169=fun_name2_514;
        fun_name2_514=(char*)come_increment_ref_count(create_method_name(obj_type_516,(_Bool)0,fun_name_511,info,(_Bool)1));
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_517=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_515,fun_name_511));
        generics_fun_518=((struct sGenericsFun*)(__right_value495=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_517,((void*)0))));
        come_call_finalizer3(__right_value495,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_518) {
            if(            (_if_conditional2=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_514)),generics_fun_518,obj_type_516,info))),            _if_conditional2) {
                __result285__ = (_Bool)0;
                none_generics_name_515 = come_decrement_ref_count2(none_generics_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_516,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_517 = come_decrement_ref_count2(fun_name3_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_506 = come_decrement_ref_count2(result_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_512,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_514 = come_decrement_ref_count2(fun_name2_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result285__;
            }
        }
        cloner_513=((struct sFun*)(__right_value497=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_514)));
        come_call_finalizer3(__right_value497,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_515 = come_decrement_ref_count2(none_generics_name_515, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_516,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_517 = come_decrement_ref_count2(fun_name3_517, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj170=fun_name2_514;
        fun_name2_514=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_511,info,(_Bool)1));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_519=128-1;        i_519>=1;        i_519--        ){
            new_fun_name_520=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_514,i_519));
            cloner_513=((struct sFun*)(__right_value500=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_520)));
            come_call_finalizer3(__right_value500,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_513) {
                __dec_obj171=fun_name2_514;
                fun_name2_514=(char*)come_increment_ref_count(__builtin_string(new_fun_name_520));
                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_520 = come_decrement_ref_count2(new_fun_name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_520 = come_decrement_ref_count2(new_fun_name_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_513==((void*)0)) {
            cloner_513=((struct sFun*)(__right_value502=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_514)));
            come_call_finalizer3(__right_value502,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_513==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var6=((struct tuple2$2sFunpcharph*)(__right_value503=create_equals_automatically(type,fun_name_511,info)));
        fun_521=multiple_assign_var6->v1;
        new_fun_name_522=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        come_call_finalizer3(__right_value503,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj172=fun_name2_514;
        fun_name2_514=(char*)come_increment_ref_count(new_fun_name_522);
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_513=fun_521;
        new_fun_name_522 = come_decrement_ref_count2(new_fun_name_522, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj173=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_508);
    come_call_finalizer3(__dec_obj173,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj174=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_507);
    come_call_finalizer3(__dec_obj174,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result286__ = (_Bool)1;
    result_506 = come_decrement_ref_count2(result_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_512,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_514 = come_decrement_ref_count2(fun_name2_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result286__;
}

_Bool create_operator_equals_method(struct sType* type, struct sInfo* info){
char* result_523;
struct list$1CVALUEph* stack_saved_524;
struct list$1sRightValueObjectph* right_value_objects_525;
struct sClass* klass_526;
char* class_name_527;
char* fun_name_528;
void* __right_value504 = (void*)0;
struct sType* type2_529;
struct sFun* cloner_530;
char* fun_name2_531;
void* __right_value505 = (void*)0;
char* none_generics_name_532;
void* __right_value506 = (void*)0;
struct sType* obj_type_533;
void* __right_value507 = (void*)0;
char* __dec_obj175;
void* __right_value508 = (void*)0;
char* fun_name3_534;
void* __right_value509 = (void*)0;
struct sGenericsFun* generics_fun_535;
void* __right_value510 = (void*)0;
_Bool _if_conditional3;
_Bool __result287__;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj176;
int i_536;
void* __right_value513 = (void*)0;
char* new_fun_name_537;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* __dec_obj177;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var7 = (void*)0;
struct sFun* fun_538=0;
char* new_fun_name_539=0;
char* __dec_obj178;
struct list$1sRightValueObjectph* __dec_obj179;
struct list$1CVALUEph* __dec_obj180;
_Bool __result288__;
fun_name2_531 = (void*)0;
memset(&i_536, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_523=((void*)0);
    stack_saved_524=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_525=info->right_value_objects;
    klass_526=type->mClass;
    class_name_527=klass_526->mName;
    fun_name_528="operator_equals";
    type2_529=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_529->mHeap=(_Bool)0;
    cloner_530=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_532=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_533=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj175=fun_name2_531;
        fun_name2_531=(char*)come_increment_ref_count(create_method_name(obj_type_533,(_Bool)0,fun_name_528,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_534=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_532,fun_name_528));
        generics_fun_535=((struct sGenericsFun*)(__right_value509=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_534,((void*)0))));
        come_call_finalizer3(__right_value509,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_535) {
            if(            (_if_conditional3=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_531)),generics_fun_535,obj_type_533,info))),            _if_conditional3) {
                __result287__ = (_Bool)0;
                none_generics_name_532 = come_decrement_ref_count2(none_generics_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_534 = come_decrement_ref_count2(fun_name3_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_523 = come_decrement_ref_count2(result_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_524,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_529,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_531 = come_decrement_ref_count2(fun_name2_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result287__;
            }
        }
        cloner_530=((struct sFun*)(__right_value511=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_531)));
        come_call_finalizer3(__right_value511,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_532 = come_decrement_ref_count2(none_generics_name_532, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_533,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_534 = come_decrement_ref_count2(fun_name3_534, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj176=fun_name2_531;
        fun_name2_531=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_528,info,(_Bool)1));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_536=128-1;        i_536>=1;        i_536--        ){
            new_fun_name_537=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_531,i_536));
            cloner_530=((struct sFun*)(__right_value514=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_537)));
            come_call_finalizer3(__right_value514,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_530) {
                __dec_obj177=fun_name2_531;
                fun_name2_531=(char*)come_increment_ref_count(__builtin_string(new_fun_name_537));
                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_537 = come_decrement_ref_count2(new_fun_name_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_537 = come_decrement_ref_count2(new_fun_name_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_530==((void*)0)) {
            cloner_530=((struct sFun*)(__right_value516=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_531)));
            come_call_finalizer3(__right_value516,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_530==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var7=((struct tuple2$2sFunpcharph*)(__right_value517=create_operator_equals_automatically(type,fun_name_528,info)));
        fun_538=multiple_assign_var7->v1;
        new_fun_name_539=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        come_call_finalizer3(__right_value517,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj178=fun_name2_531;
        fun_name2_531=(char*)come_increment_ref_count(new_fun_name_539);
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_530=fun_538;
        new_fun_name_539 = come_decrement_ref_count2(new_fun_name_539, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj179=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_525);
    come_call_finalizer3(__dec_obj179,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj180=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_524);
    come_call_finalizer3(__dec_obj180,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result288__ = (_Bool)1;
    result_523 = come_decrement_ref_count2(result_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_524,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_529,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_531 = come_decrement_ref_count2(fun_name2_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result288__;
}

_Bool create_operator_not_equals_method(struct sType* type, struct sInfo* info){
char* result_540;
struct list$1CVALUEph* stack_saved_541;
struct list$1sRightValueObjectph* right_value_objects_542;
struct sClass* klass_543;
char* class_name_544;
char* fun_name_545;
void* __right_value518 = (void*)0;
struct sType* type2_546;
struct sFun* cloner_547;
char* fun_name2_548;
void* __right_value519 = (void*)0;
char* none_generics_name_549;
void* __right_value520 = (void*)0;
struct sType* obj_type_550;
void* __right_value521 = (void*)0;
char* __dec_obj181;
void* __right_value522 = (void*)0;
char* fun_name3_551;
void* __right_value523 = (void*)0;
struct sGenericsFun* generics_fun_552;
void* __right_value524 = (void*)0;
_Bool _if_conditional4;
_Bool __result289__;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
char* __dec_obj182;
int i_553;
void* __right_value527 = (void*)0;
char* new_fun_name_554;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
char* __dec_obj183;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var8 = (void*)0;
struct sFun* fun_555=0;
char* new_fun_name_556=0;
char* __dec_obj184;
struct list$1sRightValueObjectph* __dec_obj185;
struct list$1CVALUEph* __dec_obj186;
_Bool __result290__;
fun_name2_548 = (void*)0;
memset(&i_553, 0, sizeof(int));
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    result_540=((void*)0);
    stack_saved_541=(struct list$1CVALUEph*)come_increment_ref_count(info->stack);
    right_value_objects_542=info->right_value_objects;
    klass_543=type->mClass;
    class_name_544=klass_543->mName;
    fun_name_545="operator_not_equals";
    type2_546=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_546->mHeap=(_Bool)0;
    cloner_547=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_549=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_550=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj181=fun_name2_548;
        fun_name2_548=(char*)come_increment_ref_count(create_method_name(obj_type_550,(_Bool)0,fun_name_545,info,(_Bool)1));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_551=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_549,fun_name_545));
        generics_fun_552=((struct sGenericsFun*)(__right_value523=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_551,((void*)0))));
        come_call_finalizer3(__right_value523,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_552) {
            if(            (_if_conditional4=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_548)),generics_fun_552,obj_type_550,info))),            _if_conditional4) {
                __result289__ = (_Bool)0;
                none_generics_name_549 = come_decrement_ref_count2(none_generics_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_551 = come_decrement_ref_count2(fun_name3_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                result_540 = come_decrement_ref_count2(result_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(stack_saved_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_546,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_548 = come_decrement_ref_count2(fun_name2_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result289__;
            }
        }
        cloner_547=((struct sFun*)(__right_value525=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_548)));
        come_call_finalizer3(__right_value525,sFun_finalize, 0, 1, 0, 0, (void*)0);
        none_generics_name_549 = come_decrement_ref_count2(none_generics_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_550,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_551 = come_decrement_ref_count2(fun_name3_551, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj182=fun_name2_548;
        fun_name2_548=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name_545,info,(_Bool)1));
        __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_553=128-1;        i_553>=1;        i_553--        ){
            new_fun_name_554=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_548,i_553));
            cloner_547=((struct sFun*)(__right_value528=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_554)));
            come_call_finalizer3(__right_value528,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_547) {
                __dec_obj183=fun_name2_548;
                fun_name2_548=(char*)come_increment_ref_count(__builtin_string(new_fun_name_554));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_554 = come_decrement_ref_count2(new_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_554 = come_decrement_ref_count2(new_fun_name_554, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        cloner_547==((void*)0)) {
            cloner_547=((struct sFun*)(__right_value530=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_548)));
            come_call_finalizer3(__right_value530,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    cloner_547==((void*)0)&&!type->mClass->mProtocol&&!type->mClass->mNumber) {
        multiple_assign_var8=((struct tuple2$2sFunpcharph*)(__right_value531=create_operator_not_equals_automatically(type,fun_name_545,info)));
        fun_555=multiple_assign_var8->v1;
        new_fun_name_556=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        come_call_finalizer3(__right_value531,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj184=fun_name2_548;
        fun_name2_548=(char*)come_increment_ref_count(new_fun_name_556);
        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
        cloner_547=fun_555;
        new_fun_name_556 = come_decrement_ref_count2(new_fun_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj185=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(right_value_objects_542);
    come_call_finalizer3(__dec_obj185,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj186=info->stack;
    info->stack=(struct list$1CVALUEph*)come_increment_ref_count(stack_saved_541);
    come_call_finalizer3(__dec_obj186,list$1CVALUEph_finalize, 0, 0, 0, 0, (void*)0);
    __result290__ = (_Bool)1;
    result_540 = come_decrement_ref_count2(result_540, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(stack_saved_541,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_546,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_548 = come_decrement_ref_count2(fun_name2_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result290__;
}

void free_right_value_objects(struct sInfo* info, _Bool comma){
_Bool free_right_value_557;
struct list$1sRightValueObjectph* right_value_objects_558;
int n_559;
struct list$1sRightValueObjectph* o2_saved_560;
struct sRightValueObject* it_561;
struct sType* type_562;
void* __right_value532 = (void*)0;
struct sType* type2_563;
void* __right_value533 = (void*)0;
struct sType* __dec_obj187;
    if(    gComeGC||gComeC) {
        return;
    }
    if(    info->comma_instead_of_semicolon) {
        comma=(_Bool)1;
    }
    free_right_value_557=(_Bool)0;
    right_value_objects_558=info->right_value_objects;
    n_559=0;
    for(    o2_saved_560=(right_value_objects_558),it_561=list$1sRightValueObjectph_begin((o2_saved_560));    !list$1sRightValueObjectph_end((o2_saved_560));    it_561=list$1sRightValueObjectph_next((o2_saved_560))    ){
        if(        it_561&&!it_561->mFreed) {
            if(            string_operator_equals(it_561->mFunName,info->come_fun->mName)&&it_561->mBlockLevel==info->block_level&&!it_561->mStored) {
                type_562=(struct sType*)come_increment_ref_count(it_561->mType);
                type2_563=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_562));
                if(                info->generics_type) {
                    __dec_obj187=type_562;
                    type_562=(struct sType*)come_increment_ref_count(solve_generics(type2_563,info->generics_type,info));
                    come_call_finalizer3(__dec_obj187,sType_finalize, 0, 0, 0, 0, (void*)0);
                }
                free_object(type_562,it_561->mVarName,!it_561->mDecrementRefCount,(_Bool)0,info,comma,(_Bool)0,(_Bool)0);
                it_561->mFreed=(_Bool)1;
                free_right_value_557=(_Bool)1;
                come_call_finalizer3(type_562,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type2_563,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        n_559++;
    }
}

struct sVar* get_variable_from_table(struct sVarTable* table, char* name){
void* __result_obj__=(void*)0;
struct sVarTable* it_564;
void* __right_value534 = (void*)0;
struct sVar* var__565;
struct sVar* __result295__;
struct sVar* __result296__;
    it_564=table;
    while(it_564) {
        var__565=((struct sVar*)(__right_value534=map$2charphsVarphp_operator_load_element(it_564->mVars,name)));
        come_call_finalizer3(__right_value534,sVar_finalize, 0, 1, 0, 0, __result_obj__);
        if(        var__565) {
            __result295__ = gComeFunResultObject = __result_obj__ = var__565;
            gComeFunResultObject = (void*)0;
            return __result295__;
        }
        it_564=it_564->mParent;
    }
    __result296__ = gComeFunResultObject = __result_obj__ = ((void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static struct sVar* map$2charphsVarphp_operator_load_element(struct map$2charphsVarph* self, char* key){
void* __result_obj__=(void*)0;
struct sVar* default_value_566;
unsigned int hash_567;
unsigned int it_568;
struct sVar* __result291__;
struct sVar* __result292__;
struct sVar* __result293__;
struct sVar* __result294__;
default_value_566 = (void*)0;
    memset(&default_value_566,0,sizeof(struct sVar*));
    hash_567=charp_get_hash_key(((char*)key))%self->size;
    it_568=hash_567;
    while((_Bool)1) {
        if(        self->item_existance[it_568]) {
            if(            charp_equals(self->keys[it_568],key)) {
                __result291__ = gComeFunResultObject = __result_obj__ = self->items[it_568];
                come_call_finalizer3(default_value_566,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result291__;
            }
            it_568++;
            if(            it_568>=self->size) {
                it_568=0;
            }
            else if(            it_568==hash_567) {
                __result292__ = gComeFunResultObject = __result_obj__ = default_value_566;
                come_call_finalizer3(default_value_566,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result292__;
            }
        }
        else {
            __result293__ = gComeFunResultObject = __result_obj__ = default_value_566;
            come_call_finalizer3(default_value_566,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
    }
    __result294__ = gComeFunResultObject = __result_obj__ = default_value_566;
    come_call_finalizer3(default_value_566,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj188;
char* __dec_obj189;
struct sType* __dec_obj190;
char* __dec_obj191;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj188=self->mName;
            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj189=self->mCValueName;
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj190=self->mType;
            come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj191=self->mFunName;
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_569;
char* it_572;
void* __right_value535 = (void*)0;
struct sVar* p_575;
struct sType* type_576;
struct sClass* klass_577;
void* __right_value536 = (void*)0;
char* c_value_578;
void* __right_value537 = (void*)0;
struct sType* type2_579;
    if(    gComeGC||gComeC) {
        return;
    }
    for(    o2_saved_569=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_572=map$2charphsVarph_begin((o2_saved_569));    !map$2charphsVarph_end((o2_saved_569));    it_572=map$2charphsVarph_next((o2_saved_569))    ){
        p_575=((struct sVar*)(__right_value535=map$2charphsVarphp_operator_load_element(table->mVars,it_572)));
        come_call_finalizer3(__right_value535,sVar_finalize, 0, 1, 0, 0, (void*)0);
        type_576=p_575->mType;
        klass_577=type_576->mClass;
        if(        type_576->mChannel) {
            add_come_code(info,"(%s[0]) ? close(%s[0]):0;\n",p_575->mCValueName,p_575->mCValueName);
            add_come_code(info,"(%s[1]) ? close(%s[1]):0;\n",p_575->mCValueName,p_575->mCValueName);
        }
        else if(        ret_value!=((void*)0)&&p_575->mCValueName!=((void*)0)&&string_operator_equals(p_575->mCValueName,ret_value->mCValueName)&&type_576->mHeap) {
            free_object(type_576,p_575->mCValueName,(_Bool)0,(_Bool)1,info,(_Bool)0,(_Bool)1,(_Bool)0);
        }
        else if(        type_576->mHeap&&p_575->mCValueName) {
            free_object(type_576,p_575->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
        }
        else if(        klass_577->mStruct&&p_575->mCValueName&&type_576->mAllocaValue&&!type_576->mNoCallingDestructor) {
            c_value_578=(char*)come_increment_ref_count(xsprintf("(&%s)",p_575->mCValueName));
            type2_579=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_576));
            type2_579->mPointerNum++;
            free_object(type2_579,c_value_578,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
            c_value_578 = come_decrement_ref_count2(c_value_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type2_579,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    come_call_finalizer3(o2_saved_569,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_570;
char* __result297__;
char* __result298__;
char* result_571;
char* __result299__;
result_570 = (void*)0;
result_571 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_570,0,sizeof(char*));
        __result297__ = gComeFunResultObject = __result_obj__ = result_570;
        gComeFunResultObject = (void*)0;
        return __result297__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result298__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    memset(&result_571,0,sizeof(char*));
    __result299__ = gComeFunResultObject = __result_obj__ = result_571;
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_573;
char* __result300__;
char* __result301__;
char* result_574;
char* __result302__;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_573,0,sizeof(char*));
        __result300__ = gComeFunResultObject = __result_obj__ = result_573;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result301__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    memset(&result_574,0,sizeof(char*));
    __result302__ = gComeFunResultObject = __result_obj__ = result_574;
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_580;
int i_581;
    for(    i_580=0;    i_580<self->size;    i_580++    ){
        if(        self->item_existance[i_580]) {
            if(            1) {
                come_call_finalizer3(self->items[i_580],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_581=0;    i_581<self->size;    i_581++    ){
        if(        self->item_existance[i_581]) {
            if(            1) {
                self->keys[i_581] = come_decrement_ref_count2(self->keys[i_581], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_582;
    if(    gComeGC||gComeC) {
        return;
    }
    it_582=info->lv_table;
    if(    it_582==info->come_fun->mBlock->mVarTable) {
        free_objects(it_582,ret_value,info);
    }
    else {
        while(it_582!=info->come_fun->mBlock->mVarTable) {
            free_objects(it_582,ret_value,info);
            it_582=it_582->mParent;
        }
        free_objects(it_582,ret_value,info);
    }
}

void free_objects_on_break(struct sInfo* info){
struct sVar* ret_value_583;
struct sVarTable* current_loop_vtable_584;
struct sVarTable* it_585;
    if(    gComeGC||gComeC) {
        return;
    }
    ret_value_583=((void*)0);
    current_loop_vtable_584=info->current_loop_vtable;
    if(    current_loop_vtable_584!=((void*)0)) {
        it_585=info->lv_table;
        while(it_585!=current_loop_vtable_584) {
            free_objects(it_585,ret_value_583,info);
            it_585=it_585->mParent;
        }
        free_objects(it_585,ret_value_583,info);
    }
}

char* append_stackframe(char* c_value, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
void* __right_value542 = (void*)0;
char* __result303__;
void* __right_value543 = (void*)0;
char* var_name_587;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
char* __result304__;
void* __right_value552 = (void*)0;
char* __result305__;
    if(    string_operator_equals(type->mClass->mName,"void")&&type->mPointerNum==0) {
        if(        gComeDebug||type->mRecord) {
            __result303__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value542=xsprintf("(come_push_stackframe(\"\%s\", \%s,\%s),\%s,come_pop_stackframe())",((char*)(__right_value538=string_to_string(info->sname))),((char*)(__right_value539=int_to_string(info->sline))),((char*)(__right_value540=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value541=charp_to_string(c_value))))));
            __right_value538 = come_decrement_ref_count2(__right_value538, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value540 = come_decrement_ref_count2(__right_value540, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            __right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result303__;
        }
    }
    else if(    gComeDebug||type->mRecord) {
        static int n_586=0;
        ++n_586;
        var_name_587=(char*)come_increment_ref_count(xsprintf("__exception_result_var_b%d",n_586));
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value544=make_define_var(type,var_name_587,(_Bool)0,info))));
        __right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value551=xsprintf("(come_push_stackframe(\"\%s\", \%s, \%s),\%s=\%s, come_pop_stackframe(), \%s)",((char*)(__right_value545=string_to_string(info->sname))),((char*)(__right_value546=int_to_string(info->sline))),((char*)(__right_value547=int_to_string(gComeDebugStackFrameID++))),((char*)(__right_value548=string_to_string(var_name_587))),((char*)(__right_value549=charp_to_string(c_value))),((char*)(__right_value550=string_to_string(var_name_587))))));
        var_name_587 = come_decrement_ref_count2(var_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value550 = come_decrement_ref_count2(__right_value550, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result304__;
        var_name_587 = come_decrement_ref_count2(var_name_587, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value552=__builtin_string(c_value)));
    __right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool existance_free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info){
struct map$2charphsVarph* o2_saved_588;
char* it_589;
void* __right_value553 = (void*)0;
struct sVar* p_590;
struct sType* type_591;
struct sClass* klass_592;
_Bool __result306__;
_Bool __result307__;
_Bool __result308__;
_Bool __result309__;
_Bool __result310__;
    if(    gComeGC||gComeC) {
        return (_Bool)1;
    }
    for(    o2_saved_588=(struct map$2charphsVarph*)come_increment_ref_count((table->mVars)),it_589=map$2charphsVarph_begin((o2_saved_588));    !map$2charphsVarph_end((o2_saved_588));    it_589=map$2charphsVarph_next((o2_saved_588))    ){
        p_590=((struct sVar*)(__right_value553=map$2charphsVarphp_operator_load_element(table->mVars,it_589)));
        come_call_finalizer3(__right_value553,sVar_finalize, 0, 1, 0, 0, (void*)0);
        type_591=p_590->mType;
        klass_592=type_591->mClass;
        if(        type_591->mChannel) {
            __result306__ = (_Bool)1;
            come_call_finalizer3(o2_saved_588,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result306__;
        }
        else if(        ret_value!=((void*)0)&&p_590->mCValueName!=((void*)0)&&string_operator_equals(p_590->mCValueName,ret_value->mCValueName)&&type_591->mHeap) {
            __result307__ = (_Bool)1;
            come_call_finalizer3(o2_saved_588,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result307__;
        }
        else if(        type_591->mHeap&&p_590->mCValueName) {
            if(            type_591->mFunctionParam) {
                __result308__ = (_Bool)1;
                come_call_finalizer3(o2_saved_588,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result308__;
            }
            else {
                __result309__ = (_Bool)1;
                come_call_finalizer3(o2_saved_588,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result309__;
            }
        }
        else if(        klass_592->mStruct&&p_590->mCValueName&&type_591->mAllocaValue&&!type_591->mNoCallingDestructor) {
            __result310__ = (_Bool)1;
            come_call_finalizer3(o2_saved_588,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result310__;
        }
    }
    come_call_finalizer3(o2_saved_588,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)0;
}

_Bool existance_free_objects_on_return(struct sBlock* current_block, struct sInfo* info, struct sVar* ret_value, _Bool top_block){
struct sVarTable* it_593;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    it_593=info->lv_table;
    if(    it_593==info->come_fun->mBlock->mVarTable) {
        if(        existance_free_objects(it_593,ret_value,info)) {
            return (_Bool)1;
        }
    }
    else {
        while(it_593!=info->come_fun->mBlock->mVarTable) {
            if(            existance_free_objects(it_593,ret_value,info)) {
                return (_Bool)1;
            }
            it_593=it_593->mParent;
        }
        if(        existance_free_objects(it_593,ret_value,info)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

_Bool existance_free_right_value_objects(struct sInfo* info){
struct list$1sRightValueObjectph* right_value_objects_594;
struct list$1sRightValueObjectph* o2_saved_595;
struct sRightValueObject* it_596;
    if(    gComeGC||gComeC) {
        return (_Bool)0;
    }
    right_value_objects_594=info->right_value_objects;
    for(    o2_saved_595=(right_value_objects_594),it_596=list$1sRightValueObjectph_begin((o2_saved_595));    !list$1sRightValueObjectph_end((o2_saved_595));    it_596=list$1sRightValueObjectph_next((o2_saved_595))    ){
        if(        it_596&&!it_596->mFreed) {
            if(            string_operator_equals(it_596->mFunName,info->come_fun->mName)&&it_596->mBlockLevel==info->block_level) {
                return (_Bool)1;
            }
        }
    }
    return (_Bool)0;
}

