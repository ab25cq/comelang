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
_Bool node_compile(struct sNode* node, struct sInfo* info);
_Bool node_condional_compile(struct sNode* node, struct sInfo* info);
int come_main_v2(int argc, char** argv);
void err_msg(struct sInfo* info, char* msg, ...);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
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
int come_main_v1(int argc, char** argv);
int main(int argc, char** argv);
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
struct CVALUE* CVALUE_initialize(struct CVALUE* self);
static void CVALUE_finalize(struct CVALUE* self);
struct sModule* sModule_initialize(struct sModule* self);
static void sModule_finalize(struct sModule* self);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
void sVarTable_finalize(struct sVarTable* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item);
static void map$2charphsClassph_rehash(struct map$2charphsClassph* self);
static char* map$2charphsClassph_begin(struct map$2charphsClassph* self);
static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self);
static char* map$2charphsClassph_next(struct map$2charphsClassph* self);
static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
static void sClassModule_finalize(struct sClassModule* self);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, char* attribute, char* fun_attribute);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
static void sBlock_finalize(struct sBlock* self);
static void sFun_finalize(struct sFun* self);
struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info);
_Bool sNodeBase_terminated(struct sNodeBase* self);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
// uniq global variable
void* gComeFunResultObject=((void*)0);

char* gComeStackFrameSName[128];

int gComeStackFrameSLine[128];

int gComeStackFrameID[128];

int gNumComeStackFrame=0;

char* gComeStackFrameBuffer=((void*)0);

void* wildcard;

struct sMemHeader* gAllocMem;

void* gComeResultObject=((void*)0);

_Bool gComeMallocLib=(_Bool)0;

_Bool gComeDebugLib=(_Bool)0;

_Bool gComeGCLib=(_Bool)0;

int gNumAlloc=0;

int gNumFree=0;

struct sHeapPage gHeapPages;

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
void come_push_stackframe(char* sname, int sline, int id){
    if(    gNumComeStackFrame<128) {
        gComeStackFrameSName[gNumComeStackFrame]=sname;
        gComeStackFrameSLine[gNumComeStackFrame]=sline;
        gComeStackFrameID[gNumComeStackFrame]=id;
        gNumComeStackFrame++;
    }
}

void come_pop_stackframe(){
    if(    gNumComeStackFrame>0) {
        gNumComeStackFrame--;
    }
}

void come_save_stackframe(char* sname, int sline){
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* buf_0;
int i_1;
void* __right_value2 = (void*)0;
    buf_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 169, "struct buffer*", (void*)0, (void*)0))));
    buffer_append_format(buf_0,"%s %d\n",sname,sline);
    for(    i_1=gNumComeStackFrame-2;    i_1>=0;    i_1--    ){
        buffer_append_format(buf_0,"%s %d #%d\n",gComeStackFrameSName[i_1],gComeStackFrameSLine[i_1],gComeStackFrameID[i_1]);
    }
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    gComeStackFrameBuffer=strdup(((char*)(__right_value2=buffer_to_string(buf_0))));
    __right_value2 = come_decrement_ref_count2(__right_value2, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_call_finalizer3(buf_0,buffer_finalize, 0, 0, 0, 0, (void*)0);
}

void stackframe(){
int i_2;
    for(    i_2=gNumComeStackFrame-1;    i_2>=0;    i_2--    ){
        printf("%s %d #%d\n",gComeStackFrameSName[i_2],gComeStackFrameSLine[i_2],gComeStackFrameID[i_2]);
    }
}

char* come_get_stackframe(){
void* __result_obj__=(void*)0;
void* __right_value3 = (void*)0;
char* __result1__;
    __result1__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value3=__builtin_string(gComeStackFrameBuffer)));
    __right_value3 = come_decrement_ref_count2(__right_value3, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result1__;
}

void* come_null_check(void* mem, char* sname, int sline, int id){
void* __result_obj__=(void*)0;
void* __result2__;
    if(    mem==((void*)0)) {
        printf("%s %d #%d: null check error\n",sname,sline,id);
        stackframe();
        exit(2);
    }
    __result2__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result2__;
}

void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline){
void* __result_obj__=(void*)0;
void* __result3__;
    if(    mem==((void*)0)) {
        printf("%s %d: null check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem<begin) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    if(    mem>=end) {
        printf("%s %d: range check error\n",sname,sline);
        stackframe();
        exit(2);
    }
    __result3__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result3__;
}

_Bool bool_expect(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

_Bool bool_value(_Bool self){
    return self;
}

int int_catch(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

int int_expect(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
        stackframe();
        exit(1);
    }
    return self;
}

int int_value(int self){
    return self;
}

int int_except(int self, void* parent, void (*block)(void*)){
    if(    self<0) {
        block(parent);
    }
    return self;
}

_Bool bool_except(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

_Bool bool_catch(_Bool self, void* parent, void (*block)(void*)){
    if(    !self) {
        block(parent);
    }
    return self;
}

void xassert(char* msg, _Bool test){
    printf("%s...",msg);
    if(    !test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void come_heap_init(int come_malloc, int come_debug, int come_gc){
int i_3;
    gComeMallocLib=come_malloc;
    gComeDebugLib=come_debug;
    gComeGCLib=come_gc;
    gComeStackFrameBuffer=((void*)0);
    memset(gComeStackFrameSName,0,sizeof(char*)*128);
    memset(gComeStackFrameSLine,0,sizeof(int)*128);
    memset(gComeStackFrameID,0,sizeof(int)*128);
    gHeapPages.mSizePages=4;
    gHeapPages.mPages=calloc(1,sizeof(char**)*gHeapPages.mSizePages);
    for(    i_3=0;    i_3<gHeapPages.mSizePages;    i_3++    ){
        gHeapPages.mPages[i_3]=calloc(1,sizeof(char)*2048*2);
    }
    gHeapPages.mTop=gHeapPages.mPages[0];
    gHeapPages.mCurrentPages=0;
    memset(gHeapPages.mFreeMem,0,sizeof(struct sMemHeaderTiny*)*2048*2);
    gAllocMem=((void*)0);
}

void come_heap_final(){
struct sMemHeader* it_4;
int n_5;
_Bool flag_6;
int i_7;
struct sMemHeaderTiny* it_8;
int n_9;
int i_10;
    if(    gComeStackFrameBuffer) {
        free(gComeStackFrameBuffer);
    }
    if(    gComeGCLib) {
    }
    else if(    gComeDebugLib) {
        it_4=gAllocMem;
        n_5=0;
        while(it_4) {
            n_5++;
            flag_6=(_Bool)0;
            printf("#%d ",n_5);
            if(            it_4->class_name) {
                printf("%p (%s): ",(char*)it_4+sizeof(struct sMemHeader)+sizeof(unsigned long  int)+sizeof(unsigned long  int),it_4->class_name);
            }
            for(            i_7=0;            i_7<16;            i_7++            ){
                if(                it_4->sname[i_7]) {
                    printf("%s %d #%d, ",it_4->sname[i_7],it_4->sline[i_7],it_4->id[i_7]);
                    flag_6=(_Bool)1;
                }
            }
            if(            flag_6) {
                puts("");
            }
            it_4=it_4->next;
        }
        printf("%d memory leaks. %d alloc, %d free.\n",n_5,gNumAlloc,gNumFree);
    }
    else {
        it_8=(struct sMemHeaderTiny*)gAllocMem;
        n_9=0;
        while(it_8) {
            n_9++;
            it_8=it_8->next;
        }
        if(        n_9>0) {
            printf("%d memory leaks. %d alloc, %d free.If you require debugging, copmpile with -cg option\n",n_9,gNumAlloc,gNumFree);
        }
    }
    for(    i_10=0;    i_10<gHeapPages.mSizePages;    i_10++    ){
        free(gHeapPages.mPages[i_10]);
    }
    free(gHeapPages.mPages);
}

void* alloc_from_pages(unsigned long  int size){
void* __result_obj__=(void*)0;
void* result_11;
unsigned long  int free_area_12;
int new_size_pages_13;
char** new_pages_14;
int i_15;
void* __result4__;
    result_11=((void*)0);
    if(    size<2048*2) {
        if(        gHeapPages.mFreeMem[size]) {
            result_11=gHeapPages.mFreeMem[size];
            gHeapPages.mFreeMem[size]=gHeapPages.mFreeMem[size]->free_next;
            memset(result_11,0,size);
        }
        if(        result_11==((void*)0)) {
            free_area_12=gHeapPages.mPages[gHeapPages.mCurrentPages]+2048*2-gHeapPages.mTop;
            if(            size>=free_area_12) {
                gHeapPages.mCurrentPages++;
                if(                gHeapPages.mCurrentPages==gHeapPages.mSizePages) {
                    new_size_pages_13=gHeapPages.mSizePages*2;
                    new_pages_14=calloc(1,sizeof(char*)*new_size_pages_13);
                    i_15=0;
                    for(                    ;                    i_15<gHeapPages.mSizePages;                    i_15++                    ){
                        new_pages_14[i_15]=gHeapPages.mPages[i_15];
                    }
                    for(                    ;                    i_15<new_size_pages_13;                    i_15++                    ){
                        new_pages_14[i_15]=calloc(1,sizeof(char)*2048*2);
                    }
                    free(gHeapPages.mPages);
                    gHeapPages.mPages=new_pages_14;
                    gHeapPages.mSizePages=new_size_pages_13;
                }
                gHeapPages.mTop=gHeapPages.mPages[gHeapPages.mCurrentPages];
            }
            result_11=gHeapPages.mTop;
            gHeapPages.mTop+=size;
        }
    }
    else {
        result_11=calloc(1,size);
    }
    __result4__ = gComeFunResultObject = __result_obj__ = result_11;
    gComeFunResultObject = (void*)0;
    return __result4__;
}

void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun){
void* __result_obj__=(void*)0;
void* result_16;
struct sMemHeader* it_17;
void* __result5__;
void* result_18;
struct sMemHeaderTiny* it_19;
void* __result6__;
    if(    gComeDebugLib) {
        result_16=alloc_from_pages(size+sizeof(struct sMemHeader));
        it_17=result_16;
        it_17->allocated=177783;
        it_17->size=size+sizeof(struct sMemHeader);
        it_17->free_next=((void*)0);
        come_push_stackframe(sname,sline,0);
        if(        gNumComeStackFrame<16) {
            memcpy(it_17->sname,gComeStackFrameSName,sizeof(char*)*gNumComeStackFrame);
            memcpy(it_17->sline,gComeStackFrameSLine,sizeof(int)*gNumComeStackFrame);
            memcpy(it_17->id,gComeStackFrameID,sizeof(int)*gNumComeStackFrame);
        }
        else {
            memcpy(it_17->sname,gComeStackFrameSName+gNumComeStackFrame-16-1,sizeof(char*)*16);
            memcpy(it_17->sline,gComeStackFrameSLine+gNumComeStackFrame-16-1,sizeof(int)*16);
            memcpy(it_17->id,gComeStackFrameID+gNumComeStackFrame-16-1,sizeof(int)*16);
        }
        come_pop_stackframe();
        it_17->next=gAllocMem;
        it_17->prev=((void*)0);
        it_17->class_name=class_name;
        it_17->finalizer_fun=finalizer_fun;
        it_17->cloner_fun=cloner_fun;
        if(        gAllocMem) {
            gAllocMem->prev=it_17;
        }
        gAllocMem=it_17;
        gNumAlloc++;
        __result5__ = gComeFunResultObject = __result_obj__ = (char*)result_16+sizeof(struct sMemHeader);
        gComeFunResultObject = (void*)0;
        return __result5__;
    }
    else {
        result_18=alloc_from_pages(size+sizeof(struct sMemHeaderTiny));
        it_19=result_18;
        it_19->allocated=177783;
        it_19->class_name=class_name;
        it_19->finalizer_fun=finalizer_fun;
        it_19->cloner_fun=cloner_fun;
        it_19->size=size+sizeof(struct sMemHeaderTiny);
        it_19->free_next=((void*)0);
        it_19->next=(struct sMemHeaderTiny*)gAllocMem;
        it_19->prev=((void*)0);
        if(        gAllocMem) {
            ((struct sMemHeaderTiny*)gAllocMem)->prev=it_19;
        }
        gAllocMem=(struct sMemHeader*)it_19;
        gNumAlloc++;
        __result6__ = gComeFunResultObject = __result_obj__ = (char*)result_18+sizeof(struct sMemHeaderTiny);
        gComeFunResultObject = (void*)0;
        return __result6__;
    }
}

void come_free_mem_of_heap_pool(void* mem){
struct sMemHeader* it_20;
struct sMemHeader* prev_it_21;
struct sMemHeader* next_it_22;
unsigned long  int size_23;
struct sMemHeaderTiny* it_24;
struct sMemHeaderTiny* prev_it_25;
struct sMemHeaderTiny* next_it_26;
unsigned long  int size_27;
    if(    mem) {
        if(        gComeGCLib) {
        }
        else if(        gComeDebugLib) {
            it_20=(struct sMemHeader*)((char*)mem-sizeof(struct sMemHeader));
            if(            it_20->allocated!=177783) {
                return;
            }
            it_20->allocated=0;
            prev_it_21=it_20->prev;
            next_it_22=it_20->next;
            if(            gAllocMem==it_20) {
                gAllocMem=next_it_22;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_21) {
                    prev_it_21->next=next_it_22;
                }
                if(                next_it_22) {
                    next_it_22->prev=prev_it_21;
                }
            }
            size_23=it_20->size;
            if(            size_23<2048*2) {
                if(                gHeapPages.mFreeMem[size_23]==((void*)0)) {
                    it_20->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_23]=(struct sMemHeaderTiny*)it_20;
                }
                else {
                    it_20->free_next=(struct sMemHeader*)gHeapPages.mFreeMem[size_23];
                    gHeapPages.mFreeMem[size_23]=(struct sMemHeaderTiny*)it_20;
                }
            }
            else {
                free(it_20);
            }
            gNumFree++;
        }
        else {
            it_24=(struct sMemHeaderTiny*)((char*)mem-sizeof(struct sMemHeaderTiny));
            if(            it_24->allocated!=177783) {
                return;
            }
            it_24->allocated=0;
            prev_it_25=it_24->prev;
            next_it_26=it_24->next;
            if(            gAllocMem==it_24) {
                gAllocMem=(struct sMemHeader*)next_it_26;
                if(                gAllocMem) {
                    gAllocMem->prev=((void*)0);
                }
            }
            else {
                if(                prev_it_25) {
                    prev_it_25->next=next_it_26;
                }
                if(                next_it_26) {
                    next_it_26->prev=prev_it_25;
                }
            }
            size_27=it_24->size;
            if(            size_27<2048*2) {
                if(                gHeapPages.mFreeMem[size_27]==((void*)0)) {
                    it_24->free_next=((void*)0);
                    gHeapPages.mFreeMem[size_27]=it_24;
                }
                else {
                    it_24->free_next=gHeapPages.mFreeMem[size_27];
                    gHeapPages.mFreeMem[size_27]=it_24;
                }
            }
            else {
                free(it_24);
            }
            gNumFree++;
        }
    }
}

char* come_dynamic_typeof(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_28;
char* __result7__;
struct sMemHeaderTiny* it_29;
char* __result8__;
    if(    gComeDebugLib) {
        it_28=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_28->allocated!=177783) {
            printf("invalid heap object(%p)(1)\n",it_28);
            exit(2);
        }
        __result7__ = gComeFunResultObject = __result_obj__ = it_28->class_name;
        gComeFunResultObject = (void*)0;
        return __result7__;
    }
    else {
        it_29=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_29->allocated!=177783) {
            printf("invalid heap object(%p)(2)\n",it_29);
            exit(2);
        }
        __result8__ = gComeFunResultObject = __result_obj__ = it_29->class_name;
        gComeFunResultObject = (void*)0;
        return __result8__;
    }
}

void* come_get_finalizer(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_30;
void* __result9__;
void* __result10__;
struct sMemHeaderTiny* it_31;
void* __result11__;
void* __result12__;
    if(    gComeDebugLib) {
        it_30=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_30->allocated!=177783) {
            __result9__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result9__;
        }
        __result10__ = gComeFunResultObject = __result_obj__ = it_30->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result10__;
    }
    else {
        it_31=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_31->allocated!=177783) {
            __result11__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result11__;
        }
        __result12__ = gComeFunResultObject = __result_obj__ = it_31->finalizer_fun;
        gComeFunResultObject = (void*)0;
        return __result12__;
    }
}

void* come_get_cloner(void* mem){
void* __result_obj__=(void*)0;
struct sMemHeader* it_32;
void* __result13__;
void* __result14__;
struct sMemHeaderTiny* it_33;
void* __result15__;
void* __result16__;
    if(    gComeDebugLib) {
        it_32=(struct sMemHeader*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeader));
        if(        it_32->allocated!=177783) {
            __result13__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result13__;
        }
        __result14__ = gComeFunResultObject = __result_obj__ = it_32->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result14__;
    }
    else {
        it_33=(struct sMemHeaderTiny*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int)-sizeof(struct sMemHeaderTiny));
        if(        it_33->allocated!=177783) {
            __result15__ = gComeFunResultObject = __result_obj__ = ((void*)0);
            gComeFunResultObject = (void*)0;
            return __result15__;
        }
        __result16__ = gComeFunResultObject = __result_obj__ = it_33->cloner_fun;
        gComeFunResultObject = (void*)0;
        return __result16__;
    }
}

void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name, void* finalizer_fun, char* cloner_fun){
void* __result_obj__=(void*)0;
char* mem_34;
unsigned long  int* ref_count_35;
unsigned long  int* size2_36;
void* __result17__;
    mem_34=come_alloc_mem_from_heap_pool(sizeof(unsigned long  int)+sizeof(unsigned long  int)+count*size,sname,sline,class_name,finalizer_fun,cloner_fun);
    ref_count_35=(unsigned long  int*)mem_34;
    *ref_count_35=0;
    size2_36=(unsigned long  int*)(mem_34+sizeof(unsigned long  int));
    *size2_36=size*count+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    __result17__ = gComeFunResultObject = __result_obj__ = mem_34+sizeof(unsigned long  int)+sizeof(unsigned long  int);
    gComeFunResultObject = (void*)0;
    return __result17__;
}

void come_free_object(void* mem){
unsigned long  int* ref_count_37;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_37=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_37);
}

void come_free(void* mem){
unsigned long  int* ref_count_38;
    if(    mem==((void*)0)) {
        return;
    }
    ref_count_38=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    come_free_mem_of_heap_pool((char*)ref_count_38);
}

void* come_memdup(void* block, char* sname, int sline, char* class_name, void* finalizer_fun, void* cloner_fun){
void* __result_obj__=(void*)0;
void* __result18__;
char* mem_39;
unsigned long  int* size_p_40;
unsigned long  int size_41;
void* result_42;
void* __result19__;
    if(    !block) {
        __result18__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result18__;
    }
    mem_39=(char*)block-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    size_p_40=(unsigned long  int*)(mem_39+sizeof(unsigned long  int));
    size_41=*size_p_40-sizeof(unsigned long  int)-sizeof(unsigned long  int);
    result_42=come_calloc(1,size_41,sname,sline,class_name,finalizer_fun,cloner_fun);
    memcpy(result_42,block,size_41);
    __result19__ = gComeFunResultObject = __result_obj__ = result_42;
    gComeFunResultObject = (void*)0;
    return __result19__;
}

void* come_increment_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result20__;
unsigned long  int* ref_count_43;
void* __result21__;
    if(    mem==((void*)0)) {
        __result20__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result20__;
    }
    ref_count_43=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    (*ref_count_43)++;
    __result21__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result21__;
}

void* come_print_ref_count(void* mem){
void* __result_obj__=(void*)0;
void* __result22__;
unsigned long  int* ref_count_44;
void* __result23__;
    if(    mem==((void*)0)) {
        __result22__ = gComeFunResultObject = __result_obj__ = mem;
        gComeFunResultObject = (void*)0;
        return __result22__;
    }
    ref_count_44=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    printf("ref_count %ld\n",*ref_count_44);
    __result23__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result23__;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_){
void* __result_obj__=(void*)0;
void* __result24__;
unsigned long  int* ref_count_45;
unsigned long  int count_46;
void (*finalizer_47)(void*);
void* __result25__;
void* __result26__;
memset(&finalizer_47, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        __result24__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result24__;
    }
    ref_count_45=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_45)--;
    }
    count_46=*ref_count_45;
    if(    !no_free&&(count_46<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_47=protocol_fun;
            finalizer_47(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result25__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result25__;
    }
    __result26__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result26__;
}

void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj){
void* __result_obj__=(void*)0;
void* __result27__;
void* __result28__;
unsigned long  int* ref_count_48;
unsigned long  int count_49;
void (*finalizer_50)(void*);
void* __result29__;
void* __result30__;
memset(&finalizer_50, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            __result27__ = gComeFunResultObject = __result_obj__ = mem;
            gComeFunResultObject = (void*)0;
            return __result27__;
        }
    }
    if(    mem==((void*)0)) {
        __result28__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result28__;
    }
    ref_count_48=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
    if(    !no_decrement) {
        (*ref_count_48)--;
    }
    count_49=*ref_count_48;
    if(    !no_free&&(count_49<=0||force_delete_)) {
        if(        protocol_obj&&protocol_fun) {
            finalizer_50=protocol_fun;
            finalizer_50(protocol_obj);
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        __result29__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result29__;
    }
    __result30__ = gComeFunResultObject = __result_obj__ = mem;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_){
void* fun2_51;
void (*finalizer_52)(void*);
void (*finalizer_53)(void*);
void (*finalizer_54)(void*);
void (*finalizer_55)(void*);
unsigned long  int* ref_count_56;
unsigned long  int count_57;
void* fun2_58;
void (*finalizer_59)(void*);
void (*finalizer_60)(void*);
void (*finalizer_61)(void*);
void (*finalizer_62)(void*);
memset(&finalizer_52, 0, sizeof(void (*)(void*)));
memset(&finalizer_53, 0, sizeof(void (*)(void*)));
memset(&finalizer_54, 0, sizeof(void (*)(void*)));
memset(&finalizer_55, 0, sizeof(void (*)(void*)));
memset(&finalizer_59, 0, sizeof(void (*)(void*)));
memset(&finalizer_60, 0, sizeof(void (*)(void*)));
memset(&finalizer_61, 0, sizeof(void (*)(void*)));
memset(&finalizer_62, 0, sizeof(void (*)(void*)));
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_51=come_get_finalizer(mem);
        if(        fun2_51) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_52=protocol_fun;
                finalizer_52(protocol_obj);
            }
            finalizer_53=fun2_51;
            finalizer_53(mem);
        }
        else if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_54=protocol_fun;
                finalizer_54(protocol_obj);
            }
            finalizer_55=fun;
            finalizer_55(mem);
        }
    }
    else {
        ref_count_56=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_56)--;
        }
        count_57=*ref_count_56;
        if(        !no_free&&(count_57<=0||force_delete_)) {
            if(            mem) {
                fun2_58=come_get_finalizer(mem);
                if(                fun2_58) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_59=protocol_fun;
                        finalizer_59(protocol_obj);
                    }
                    finalizer_60=fun2_58;
                    finalizer_60(mem);
                }
                else {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_61=protocol_fun;
                        finalizer_61(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_62=fun;
                        finalizer_62(mem);
                    }
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_63;
void (*finalizer_64)(void*);
void (*finalizer_65)(void*);
void (*finalizer_66)(void*);
void (*finalizer_67)(void*);
unsigned long  int* ref_count_68;
unsigned long  int count_69;
void* fun2_70;
void (*finalizer_71)(void*);
void (*finalizer_72)(void*);
void (*finalizer_73)(void*);
void (*finalizer_74)(void*);
memset(&finalizer_64, 0, sizeof(void (*)(void*)));
memset(&finalizer_65, 0, sizeof(void (*)(void*)));
memset(&finalizer_66, 0, sizeof(void (*)(void*)));
memset(&finalizer_67, 0, sizeof(void (*)(void*)));
memset(&finalizer_71, 0, sizeof(void (*)(void*)));
memset(&finalizer_72, 0, sizeof(void (*)(void*)));
memset(&finalizer_73, 0, sizeof(void (*)(void*)));
memset(&finalizer_74, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        fun2_63=come_get_finalizer(mem);
        if(        fun2_63) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_64=protocol_fun;
                finalizer_64(protocol_obj);
            }
            finalizer_65=fun2_63;
            finalizer_65(mem);
        }
        else if(        fun) {
            if(            protocol_obj&&protocol_fun) {
                finalizer_66=protocol_fun;
                finalizer_66(protocol_obj);
            }
            finalizer_67=fun;
            finalizer_67(mem);
        }
    }
    else {
        ref_count_68=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_68)--;
        }
        count_69=*ref_count_68;
        if(        !no_free&&(count_69<=0||force_delete_)) {
            if(            mem) {
                fun2_70=come_get_finalizer(mem);
                if(                fun2_70) {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_71=protocol_fun;
                        finalizer_71(protocol_obj);
                    }
                    finalizer_72=fun2_70;
                    finalizer_72(mem);
                }
                else {
                    if(                    protocol_obj&&protocol_fun) {
                        finalizer_73=protocol_fun;
                        finalizer_73(protocol_obj);
                        come_free_object(protocol_obj);
                    }
                    if(                    fun) {
                        finalizer_74=fun;
                        finalizer_74(mem);
                    }
                }
                come_free_object(mem);
            }
        }
    }
}

void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj){
void* fun2_75;
void (*finalizer_76)(void*);
void (*finalizer_77)(void*);
unsigned long  int* ref_count_78;
unsigned long  int count_79;
void* fun2_80;
void (*finalizer_81)(void*);
void (*finalizer_82)(void*);
memset(&finalizer_76, 0, sizeof(void (*)(void*)));
memset(&finalizer_77, 0, sizeof(void (*)(void*)));
memset(&finalizer_81, 0, sizeof(void (*)(void*)));
memset(&finalizer_82, 0, sizeof(void (*)(void*)));
    if(    result_obj) {
        if(        mem==result_obj) {
            return;
        }
    }
    if(    mem==((void*)0)) {
        return;
    }
    if(    call_finalizer_only) {
        if(        fun) {
            fun2_75=come_get_finalizer(mem);
            if(            fun2_75) {
                finalizer_76=fun2_75;
                finalizer_76(mem);
            }
            else {
                finalizer_77=fun;
                finalizer_77(mem);
            }
        }
    }
    else {
        ref_count_78=(unsigned long  int*)((char*)mem-sizeof(unsigned long  int)-sizeof(unsigned long  int));
        if(        !no_decrement) {
            (*ref_count_78)--;
        }
        count_79=*ref_count_78;
        if(        !no_free&&(count_79<=0||force_delete_)) {
            if(            mem) {
                fun2_80=come_get_finalizer(mem);
                if(                fun2_80) {
                    finalizer_81=fun2_80;
                    finalizer_81(mem);
                }
                else {
                    if(                    fun) {
                        finalizer_82=fun;
                        finalizer_82(mem);
                    }
                }
                come_free_object(mem);
            }
        }
    }
}

void* come_call_cloner(void* fun, void* mem){
void* __result_obj__=(void*)0;
void* __result31__;
void* fun2_83;
void* (*cloner_84)(void*);
void* __result32__;
void* (*cloner_85)(void*);
void* __result33__;
memset(&cloner_84, 0, sizeof(void* (*)(void*)));
memset(&cloner_85, 0, sizeof(void* (*)(void*)));
    if(    mem==((void*)0)) {
        __result31__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result31__;
    }
    fun2_83=come_get_cloner(mem);
    if(    fun2_83) {
        cloner_84=fun2_83;
        __result32__ = gComeFunResultObject = __result_obj__ = cloner_84(mem);
        gComeFunResultObject = (void*)0;
        return __result32__;
    }
    else {
        cloner_85=fun;
        __result33__ = gComeFunResultObject = __result_obj__ = cloner_85(mem);
        gComeFunResultObject = (void*)0;
        return __result33__;
    }
}

char* __builtin_string(char* str){
void* __result_obj__=(void*)0;
char* __result34__;
int len_86;
void* __right_value4 = (void*)0;
char* result_87;
char* __result35__;
    if(    str==((void*)0)) {
        __result34__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result34__;
    }
    len_86=strlen(str)+1;
    result_87=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_86)), "./comelang.h", 1128, "char*", (void*)0, (void*)0));
    strncpy(result_87,str,len_86);
    __result35__ = gComeFunResultObject = __result_obj__ = result_87;
    result_87 = come_decrement_ref_count2(result_87, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result35__;
}

_Bool come_is_contained_element(void** array, int len, void* element){
_Bool found_88;
int i_89;
    found_88=(_Bool)0;
    for(    i_89=0;    i_89<len;    i_89++    ){
        if(        array[i_89]==element) {
            found_88=(_Bool)1;
            break;
        }
    }
    return found_88;
}

struct buffer* buffer_initialize(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value5 = (void*)0;
char* __dec_obj1;
struct buffer* __result36__;
    self->size=128;
    __dec_obj1=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3433, "char*", (void*)0, (void*)0));
    __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result36__;
}

struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
char* __dec_obj2;
struct buffer* __result37__;
    self->size=128;
    __dec_obj2=self->buf;
    self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3443, "char*", (void*)0, (void*)0));
    __dec_obj2 = come_decrement_ref_count2(__dec_obj2, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->buf[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

void buffer_finalize(struct buffer* self){
    if(    self&&self->buf) {
        self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
}

struct buffer* buffer_clone(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result38__;
void* __right_value7 = (void*)0;
struct buffer* result_90;
void* __right_value8 = (void*)0;
char* __dec_obj3;
struct buffer* __result39__;
    if(    self==((void*)0)) {
        __result38__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result38__;
    }
    result_90=(struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3463, "struct buffer*", (void*)0, (void*)0));
    result_90->size=self->size;
    __dec_obj3=result_90->buf;
    result_90->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3466, "char*", (void*)0, (void*)0));
    __dec_obj3 = come_decrement_ref_count2(__dec_obj3, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_90->len=self->len;
    memcpy(result_90->buf,self->buf,self->len);
    __result39__ = gComeFunResultObject = __result_obj__ = result_90;
    come_call_finalizer3(result_90,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result39__;
}

int buffer_length(struct buffer* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void buffer_reset(struct buffer* self){
    if(    self==((void*)0)) {
        return;
    }
    self->buf[0]=0;
    self->len=0;
}

void buffer_trim(struct buffer* self, int len){
    if(    self==((void*)0)) {
        return;
    }
    self->len-=len;
    self->buf[self->len]=0;
}

struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size){
void* __result_obj__=(void*)0;
struct buffer* __result40__;
void* __right_value9 = (void*)0;
char* old_buf_91;
int old_len_92;
int new_size_93;
void* __right_value10 = (void*)0;
char* __dec_obj4;
struct buffer* __result41__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result40__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result40__;
    }
    if(    self->len+size+1+1>=self->size) {
        old_buf_91=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3505, "char*", (void*)0, (void*)0));
        memcpy(old_buf_91,self->buf,self->size);
        old_len_92=self->len;
        new_size_93=(self->size+size+1)*2;
        __dec_obj4=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_93)), "./comelang.h", 3509, "char*", (void*)0, (void*)0));
        __dec_obj4 = come_decrement_ref_count2(__dec_obj4, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_91,old_len_92);
        self->buf[old_len_92]=0;
        self->size=new_size_93;
        old_buf_91 = come_decrement_ref_count2(old_buf_91, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    self->buf[self->len]=0;
    __result41__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result41__;
}

struct buffer* buffer_append_char(struct buffer* self, char c){
void* __result_obj__=(void*)0;
struct buffer* __result42__;
void* __right_value11 = (void*)0;
char* old_buf_94;
int old_len_95;
int new_size_96;
void* __right_value12 = (void*)0;
char* __dec_obj5;
struct buffer* __result43__;
    if(    self==((void*)0)) {
        __result42__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result42__;
    }
    if(    self->len+1+1+1>=self->size) {
        old_buf_94=(char*)come_increment_ref_count((char*)come_memdup(self->buf, "./comelang.h", 3528, "char*", "charp_finalize", "charp_clone"));
        old_len_95=self->len;
        new_size_96=(self->size+10+1)*2;
        __dec_obj5=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_96)), "./comelang.h", 3532, "char*", (void*)0, (void*)0));
        __dec_obj5 = come_decrement_ref_count2(__dec_obj5, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_94,old_len_95);
        self->buf[old_len_95]=0;
        self->size=new_size_96;
        old_buf_94 = come_decrement_ref_count2(old_buf_94, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    self->buf[self->len]=c;
    self->len++;
    self->buf[self->len]=0;
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result43__;
}

struct buffer* buffer_append_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result44__;
int size_97;
void* __right_value13 = (void*)0;
char* old_buf_98;
int old_len_99;
int new_size_100;
void* __right_value14 = (void*)0;
char* __dec_obj6;
struct buffer* __result45__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result44__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result44__;
    }
    size_97=strlen(mem);
    if(    self->len+size_97+1+1>=self->size) {
        old_buf_98=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3554, "char*", (void*)0, (void*)0));
        memcpy(old_buf_98,self->buf,self->size);
        old_len_99=self->len;
        new_size_100=(self->size+size_97+1)*2;
        __dec_obj6=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_100)), "./comelang.h", 3558, "char*", (void*)0, (void*)0));
        __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_98,old_len_99);
        self->buf[old_len_99]=0;
        self->size=new_size_100;
        old_buf_98 = come_decrement_ref_count2(old_buf_98, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_97);
    self->len+=size_97;
    self->buf[self->len]=0;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

struct buffer* buffer_append_format(struct buffer* self, char* msg, ...){
void* __result_obj__=(void*)0;
struct buffer* __result46__;
va_list args_101;
char* result_102;
int len_103;
struct buffer* __result47__;
void* __right_value15 = (void*)0;
char* mem_104;
int size_105;
void* __right_value16 = (void*)0;
char* old_buf_106;
int old_len_107;
int new_size_108;
void* __right_value17 = (void*)0;
char* __dec_obj7;
struct buffer* __result48__;
memset(&args_101, 0, sizeof(va_list));
result_102 = (void*)0;
    if(    self==((void*)0)||msg==((void*)0)) {
        __result46__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result46__;
    }
    __builtin_va_start(args_101,msg);
    len_103=vasprintf(&result_102,msg,args_101);
    __builtin_va_end(args_101);
    if(    len_103<0) {
        __result47__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3((&args_101),va_list_finalize, 1, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result47__;
    }
    mem_104=(char*)come_increment_ref_count(__builtin_string(result_102));
    size_105=strlen(mem_104);
    if(    self->len+size_105+1+1>=self->size) {
        old_buf_106=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3591, "char*", (void*)0, (void*)0));
        memcpy(old_buf_106,self->buf,self->size);
        old_len_107=self->len;
        new_size_108=(self->size+size_105+1)*2;
        __dec_obj7=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_108)), "./comelang.h", 3595, "char*", (void*)0, (void*)0));
        __dec_obj7 = come_decrement_ref_count2(__dec_obj7, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_106,old_len_107);
        self->buf[old_len_107]=0;
        self->size=new_size_108;
        old_buf_106 = come_decrement_ref_count2(old_buf_106, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_104,size_105);
    self->len+=size_105;
    self->buf[self->len]=0;
    free(result_102);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3((&args_101),va_list_finalize, 1, 0, 0, 0, (void*)0);
    mem_104 = come_decrement_ref_count2(mem_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void va_list_finalize(va_list self){
}

struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* mem){
void* __result_obj__=(void*)0;
struct buffer* __result49__;
int size_109;
void* __right_value18 = (void*)0;
char* old_buf_110;
int old_len_111;
int new_size_112;
void* __right_value19 = (void*)0;
char* __dec_obj8;
struct buffer* __result50__;
    if(    self==((void*)0)||mem==((void*)0)) {
        __result49__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result49__;
    }
    size_109=strlen(mem)+1;
    if(    self->len+size_109+1+1+1>=self->size) {
        old_buf_110=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3617, "char*", (void*)0, (void*)0));
        memcpy(old_buf_110,self->buf,self->size);
        old_len_111=self->len;
        new_size_112=(self->size+size_109+1)*2;
        __dec_obj8=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_112)), "./comelang.h", 3621, "char*", (void*)0, (void*)0));
        __dec_obj8 = come_decrement_ref_count2(__dec_obj8, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_110,old_len_111);
        self->buf[old_len_111]=0;
        self->size=new_size_112;
        old_buf_110 = come_decrement_ref_count2(old_buf_110, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem,size_109);
    self->len+=size_109;
    self->buf[self->len]=0;
    self->len++;
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result50__;
}

struct buffer* buffer_append_int(struct buffer* self, int value){
void* __result_obj__=(void*)0;
struct buffer* __result51__;
int* mem_113;
int size_114;
void* __right_value20 = (void*)0;
char* old_buf_115;
int old_len_116;
int new_size_117;
void* __right_value21 = (void*)0;
char* __dec_obj9;
struct buffer* __result52__;
    if(    self==((void*)0)) {
        __result51__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result51__;
    }
    mem_113=&value;
    size_114=sizeof(int);
    if(    self->len+size_114+1+1>=self->size) {
        old_buf_115=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3644, "char*", (void*)0, (void*)0));
        memcpy(old_buf_115,self->buf,self->size);
        old_len_116=self->len;
        new_size_117=(self->size+size_114+1)*2;
        __dec_obj9=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_117)), "./comelang.h", 3648, "char*", (void*)0, (void*)0));
        __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_115,old_len_116);
        self->buf[old_len_116]=0;
        self->size=new_size_117;
        old_buf_115 = come_decrement_ref_count2(old_buf_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_113,size_114);
    self->len+=size_114;
    self->buf[self->len]=0;
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result52__;
}

struct buffer* buffer_append_long(struct buffer* self, long value){
void* __result_obj__=(void*)0;
long* mem_118;
int size_119;
void* __right_value22 = (void*)0;
char* old_buf_120;
int old_len_121;
int new_size_122;
void* __right_value23 = (void*)0;
char* __dec_obj10;
struct buffer* __result53__;
    mem_118=&value;
    size_119=sizeof(long);
    if(    self->len+size_119+1+1>=self->size) {
        old_buf_120=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3667, "char*", (void*)0, (void*)0));
        memcpy(old_buf_120,self->buf,self->size);
        old_len_121=self->len;
        new_size_122=(self->size+size_119+1)*2;
        __dec_obj10=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_122)), "./comelang.h", 3671, "char*", (void*)0, (void*)0));
        __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_120,old_len_121);
        self->buf[old_len_121]=0;
        self->size=new_size_122;
        old_buf_120 = come_decrement_ref_count2(old_buf_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_118,size_119);
    self->len+=size_119;
    self->buf[self->len]=0;
    __result53__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result53__;
}

struct buffer* buffer_append_short(struct buffer* self, short value){
void* __result_obj__=(void*)0;
struct buffer* __result54__;
short* mem_123;
int size_124;
void* __right_value24 = (void*)0;
char* old_buf_125;
int old_len_126;
int new_size_127;
void* __right_value25 = (void*)0;
char* __dec_obj11;
struct buffer* __result55__;
    if(    self==((void*)0)) {
        __result54__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result54__;
    }
    mem_123=&value;
    size_124=sizeof(short);
    if(    self->len+size_124+1+1>=self->size) {
        old_buf_125=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 3694, "char*", (void*)0, (void*)0));
        memcpy(old_buf_125,self->buf,self->size);
        old_len_126=self->len;
        new_size_127=(self->size+size_124+1)*2;
        __dec_obj11=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_127)), "./comelang.h", 3698, "char*", (void*)0, (void*)0));
        __dec_obj11 = come_decrement_ref_count2(__dec_obj11, (void*)0, (void*)0, 0,0,0, (void*)0);
        memcpy(self->buf,old_buf_125,old_len_126);
        self->buf[old_len_126]=0;
        self->size=new_size_127;
        old_buf_125 = come_decrement_ref_count2(old_buf_125, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    memcpy(self->buf+self->len,mem_123,size_124);
    self->len+=size_124;
    self->buf[self->len]=0;
    __result55__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result55__;
}

struct buffer* buffer_alignment(struct buffer* self){
void* __result_obj__=(void*)0;
struct buffer* __result56__;
int len_128;
int new_size_129;
void* __right_value26 = (void*)0;
char* __dec_obj12;
int i_130;
struct buffer* __result57__;
    if(    self==((void*)0)) {
        __result56__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result56__;
    }
    len_128=self->len;
    len_128=(len_128+3)&~3;
    if(    len_128>=self->size) {
        new_size_129=(self->size+1+1)*2;
        __dec_obj12=self->buf;
        self->buf=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(new_size_129)), "./comelang.h", 3722, "char*", (void*)0, (void*)0));
        __dec_obj12 = come_decrement_ref_count2(__dec_obj12, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->size=new_size_129;
    }
    for(    i_130=self->len;    i_130<len_128;    i_130++    ){
        self->buf[i_130]=0;
    }
    self->len=len_128;
    __result57__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result57__;
}

int buffer_compare(struct buffer* left, struct buffer* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left->buf,right->buf);
}

struct buffer* charp_to_buffer(char* self){
void* __result_obj__=(void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct buffer* result_131;
struct buffer* __result58__;
struct buffer* __result59__;
    result_131=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3752, "struct buffer*", (void*)0, (void*)0))));
    if(    self==((void*)0)) {
        __result58__ = gComeFunResultObject = __result_obj__ = result_131;
        come_call_finalizer3(result_131,buffer_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result58__;
    }
    buffer_append_str(result_131,self);
    __result59__ = gComeFunResultObject = __result_obj__ = result_131;
    come_call_finalizer3(result_131,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

char* buffer_to_string(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
char* __result60__;
void* __right_value30 = (void*)0;
char* __result61__;
    if(    self==((void*)0)) {
        __result60__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value29=__builtin_string("")));
        __right_value29 = come_decrement_ref_count2(__right_value29, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result60__;
    }
    __result61__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value30=__builtin_string(self->buf)));
    __right_value30 = come_decrement_ref_count2(__right_value30, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}

char* buffer_printable(struct buffer* self){
void* __result_obj__=(void*)0;
int len_140;
void* __right_value45 = (void*)0;
char* result_141;
int n_142;
int i_143;
unsigned char c_144;
char* __result70__;
    len_140=self->len;
    result_141=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_140*2+1)), "./comelang.h", 3831, "char*", (void*)0, (void*)0));
    n_142=0;
    for(    i_143=0;    i_143<len_140;    i_143++    ){
        c_144=self->buf[i_143];
        if(        (c_144>=0&&c_144<32)||c_144==127) {
            result_141[n_142++]=94;
            result_141[n_142++]=c_144+65-1;
        }
        else if(        c_144>127) {
            result_141[n_142++]=63;
        }
        else {
            result_141[n_142++]=c_144;
        }
    }
    result_141[n_142]=0;
    __result70__ = gComeFunResultObject = __result_obj__ = result_141;
    result_141 = come_decrement_ref_count2(result_141, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
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

_Bool bool_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_equals(char self, char right){
    return self==right;
}

_Bool short_equals(short self, short right){
    return self==right;
}

_Bool int_equals(int self, int right){
    return self==right;
}

_Bool long_equals(long self, long right){
    return self==right;
}

_Bool size_t_equals(unsigned long  int self, unsigned long  int right){
    return self==right;
}

_Bool float_equals(float self, float right){
    return self==right;
}

_Bool double_equals(double self, double right){
    return self==right;
}

_Bool bool_operator_equals(_Bool self, _Bool right){
    return self==right;
}

_Bool char_operator_equals(char self, char right){
    return self==right;
}

_Bool short_operator_equals(short self, short right){
    return self==right;
}

_Bool int_operator_equals(int self, int right){
    return self==right;
}

_Bool long_operator_equals(long self, long right){
    return self==right;
}

_Bool bool_operator_not_equals(_Bool self, _Bool right){
    return !(self==right);
}

_Bool char_operator_not_equals(char self, char right){
    return !(self==right);
}

_Bool short_operator_not_equals(short self, short right){
    return !(self==right);
}

_Bool int_operator_not_equals(int self, int right){
    return !(self==right);
}

_Bool long_operator_not_equals(long self, long right){
    return !(self==right);
}

_Bool charp_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_equals(void* self, void* right){
    return self==right;
}

_Bool string_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool charp_operator_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)1;
    }
    else if(    self==((void*)0)) {
        return (_Bool)0;
    }
    else if(    right==((void*)0)) {
        return (_Bool)0;
    }
    return strcmp(self,right)==0;
}

_Bool voidp_operator_equals(char* self, char* right){
    return self==right;
}

_Bool voidp_operator_not_equals(char* self, char* right){
    return !charp_operator_equals(self,right);
}

_Bool string_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

_Bool charp_operator_not_equals(char* self, char* right){
    if(    self==((void*)0)&&right==((void*)0)) {
        return (_Bool)0;
    }
    else if(    self==((void*)0)) {
        return (_Bool)1;
    }
    else if(    right==((void*)0)) {
        return (_Bool)1;
    }
    return strcmp(self,right)!=0;
}

char* charp_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
char* __result125__;
int len_201;
void* __right_value146 = (void*)0;
char* result_202;
char* __result126__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result125__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value145=__builtin_string("")));
        __right_value145 = come_decrement_ref_count2(__right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result125__;
    }
    len_201=strlen(self)+strlen(right);
    result_202=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_201+1)), "./comelang.h", 4512, "char*", (void*)0, (void*)0));
    strncpy(result_202,self,len_201+1);
    strncat(result_202,right,len_201+1);
    __result126__ = gComeFunResultObject = __result_obj__ = result_202;
    result_202 = come_decrement_ref_count2(result_202, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result126__;
}

char* string_operator_add(char* self, char* right){
void* __result_obj__=(void*)0;
void* __right_value147 = (void*)0;
char* __result127__;
int len_203;
void* __right_value148 = (void*)0;
char* result_204;
char* __result128__;
    if(    self==((void*)0)||right==((void*)0)) {
        __result127__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value147=__builtin_string("")));
        __right_value147 = come_decrement_ref_count2(__right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result127__;
    }
    len_203=strlen(self)+strlen(right);
    result_204=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_203+1)), "./comelang.h", 4527, "char*", (void*)0, (void*)0));
    strncpy(result_204,self,len_203+1);
    strncat(result_204,right,len_203+1);
    __result128__ = gComeFunResultObject = __result_obj__ = result_204;
    result_204 = come_decrement_ref_count2(result_204, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result128__;
}

char* charp_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value149 = (void*)0;
char* __result129__;
void* __right_value150 = (void*)0;
void* __right_value151 = (void*)0;
struct buffer* buf_205;
int i_206;
void* __right_value152 = (void*)0;
char* __result130__;
    if(    self==((void*)0)) {
        __result129__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value149=__builtin_string("")));
        __right_value149 = come_decrement_ref_count2(__right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result129__;
    }
    buf_205=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4540, "struct buffer*", (void*)0, (void*)0))));
    for(    i_206=0;    i_206<right;    i_206++    ){
        buffer_append_str(buf_205,self);
    }
    __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value152=buffer_to_string(buf_205)));
    come_call_finalizer3(buf_205,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

char* string_operator_mult(char* self, int right){
void* __result_obj__=(void*)0;
void* __right_value153 = (void*)0;
char* __result131__;
void* __right_value154 = (void*)0;
void* __right_value155 = (void*)0;
struct buffer* buf_207;
int i_208;
void* __right_value156 = (void*)0;
char* __result132__;
    if(    self==((void*)0)) {
        __result131__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value153=__builtin_string("")));
        __right_value153 = come_decrement_ref_count2(__right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result131__;
    }
    buf_207=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4554, "struct buffer*", (void*)0, (void*)0))));
    for(    i_208=0;    i_208<right;    i_208++    ){
        buffer_append_str(buf_207,self);
    }
    __result132__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value156=buffer_to_string(buf_207)));
    come_call_finalizer3(buf_207,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value156 = come_decrement_ref_count2(__right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result132__;
}

unsigned int bool_get_hash_key(_Bool value){
    return (int_get_hash_key(((int)value)));
}

unsigned int char_get_hash_key(char value){
    return value;
}

unsigned int short_get_hash_key(short int value){
    return value;
}

unsigned int int_get_hash_key(int value){
    return value;
}

unsigned int long_get_hash_key(long value){
    return value;
}

unsigned int size_t_get_hash_key(unsigned long  int value){
    return value;
}

unsigned int float_get_hash_key(float value){
    return (unsigned int)value;
}

unsigned int double_get_hash_key(double value){
    return (unsigned int)value;
}

unsigned int charp_get_hash_key(char* value){
int result_211;
char* p_212;
    if(    value==((void*)0)) {
        return 0;
    }
    result_211=0;
    p_212=value;
    while(*p_212) {
        result_211+=(*p_212);
        p_212++;
    }
    return result_211;
}

_Bool bool_clone(_Bool self){
    return self;
}

char char_clone(char self){
    return self;
}

short int short_clone(short self){
    return self;
}

int int_clone(int self){
    return self;
}

long  int long_clone(long self){
    return self;
}

unsigned long  int size_t_clone(unsigned long  int self){
    return self;
}

double double_clone(double self){
    return self;
}

float float_clone(float self){
    return self;
}

char* charp_clone(char* self){
void* __result_obj__=(void*)0;
char* __result133__;
void* __right_value157 = (void*)0;
char* __result134__;
    if(    self==((void*)0)) {
        __result133__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result133__;
    }
    __result134__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value157=__builtin_string(self)));
    __right_value157 = come_decrement_ref_count2(__right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result134__;
}

char* string_clone(char* self){
void* __result_obj__=(void*)0;
char* __result135__;
void* __right_value158 = (void*)0;
char* __result136__;
    if(    self==((void*)0)) {
        __result135__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result135__;
    }
    __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value158=__builtin_string(self)));
    __right_value158 = come_decrement_ref_count2(__right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

_Bool xiswalpha(unsigned int c){
_Bool result_213;
    result_213=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_213;
}

_Bool xiswblank(unsigned int c){
    return c==32||c==9;
}

_Bool xiswdigit(unsigned int c){
    return (c>=48&&c<=57);
}

_Bool xiswalnum(unsigned int c){
    return xiswalpha(c)||xiswdigit(c);
}

_Bool xisalpha(char c){
_Bool result_214;
    result_214=(c>=97&&c<=122)||(c>=65&&c<=90);
    return result_214;
}

_Bool xisblank(char c){
    return c==32||c==9;
}

_Bool xisdigit(char c){
    return (c>=48&&c<=57);
}

_Bool xisalnum(char c){
    return xisalpha(c)||xisdigit(c);
}

_Bool xisascii(char c){
_Bool result_215;
    result_215=(c>=32&&c<=126);
    return result_215;
}

_Bool xiswascii(unsigned int c){
_Bool result_216;
    result_216=(c>=32&&c<=126);
    return result_216;
}

int string_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

int charp_length(char* str){
    if(    str==((void*)0)) {
        return 0;
    }
    return strlen(str);
}

char* charp_reverse(char* str){
void* __result_obj__=(void*)0;
void* __right_value159 = (void*)0;
char* __result137__;
int len_217;
void* __right_value160 = (void*)0;
char* result_218;
int i_219;
char* __result138__;
    if(    str==((void*)0)) {
        __result137__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value159=__builtin_string("")));
        __right_value159 = come_decrement_ref_count2(__right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result137__;
    }
    len_217=strlen(str);
    result_218=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_217+1)), "./comelang.h", 4799, "char*", (void*)0, (void*)0));
    for(    i_219=0;    i_219<len_217;    i_219++    ){
        result_218[i_219]=str[len_217-i_219-1];
    }
    result_218[len_217]=0;
    __result138__ = gComeFunResultObject = __result_obj__ = result_218;
    result_218 = come_decrement_ref_count2(result_218, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result138__;
}

char* string_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value161 = (void*)0;
char* __result139__;
int len_220;
void* __right_value162 = (void*)0;
void* __right_value163 = (void*)0;
char* __result140__;
void* __right_value164 = (void*)0;
char* __result141__;
void* __right_value165 = (void*)0;
char* __result142__;
void* __right_value166 = (void*)0;
char* result_221;
char* __result143__;
    if(    str==((void*)0)) {
        __result139__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value161=__builtin_string("")));
        __right_value161 = come_decrement_ref_count2(__right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result139__;
    }
    len_220=strlen(str);
    if(    head<0) {
        head+=len_220;
    }
    if(    tail<0) {
        tail+=len_220+1;
    }
    if(    head>tail) {
        __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value163=charp_reverse(((char*)(__right_value162=charp_substring(str,tail,head))))));
        __right_value162 = come_decrement_ref_count2(__right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value163 = come_decrement_ref_count2(__right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result140__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_220) {
        tail=len_220;
    }
    if(    head==tail) {
        __result141__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value164=__builtin_string("")));
        __right_value164 = come_decrement_ref_count2(__right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result141__;
    }
    if(    tail-head+1<1) {
        __result142__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value165=__builtin_string("")));
        __right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result142__;
    }
    result_221=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4845, "char*", (void*)0, (void*)0));
    memcpy(result_221,str+head,tail-head);
    result_221[tail-head]=0;
    __result143__ = gComeFunResultObject = __result_obj__ = result_221;
    result_221 = come_decrement_ref_count2(result_221, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* charp_operator_load_range_element(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value167 = (void*)0;
char* __result144__;
int len_222;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
char* __result145__;
void* __right_value170 = (void*)0;
char* __result146__;
void* __right_value171 = (void*)0;
char* __result147__;
void* __right_value172 = (void*)0;
char* result_223;
char* __result148__;
    if(    str==((void*)0)) {
        __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value167=__builtin_string("")));
        __right_value167 = come_decrement_ref_count2(__right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result144__;
    }
    len_222=strlen(str);
    if(    head<0) {
        head+=len_222;
    }
    if(    tail<0) {
        tail+=len_222+1;
    }
    if(    head>tail) {
        __result145__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value169=charp_reverse(((char*)(__right_value168=charp_substring(str,tail,head))))));
        __right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value169 = come_decrement_ref_count2(__right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result145__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_222) {
        tail=len_222;
    }
    if(    head==tail) {
        __result146__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value170=__builtin_string("")));
        __right_value170 = come_decrement_ref_count2(__right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result146__;
    }
    if(    tail-head+1<1) {
        __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value171=__builtin_string("")));
        __right_value171 = come_decrement_ref_count2(__right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result147__;
    }
    result_223=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4888, "char*", (void*)0, (void*)0));
    memcpy(result_223,str+head,tail-head);
    result_223[tail-head]=0;
    __result148__ = gComeFunResultObject = __result_obj__ = result_223;
    result_223 = come_decrement_ref_count2(result_223, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result148__;
}

char* charp_substring(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value173 = (void*)0;
char* __result149__;
int len_224;
void* __right_value174 = (void*)0;
void* __right_value175 = (void*)0;
char* __result150__;
void* __right_value176 = (void*)0;
char* __result151__;
void* __right_value177 = (void*)0;
char* __result152__;
void* __right_value178 = (void*)0;
char* result_225;
char* __result153__;
    if(    str==((void*)0)) {
        __result149__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value173=__builtin_string("")));
        __right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result149__;
    }
    len_224=strlen(str);
    if(    head<0) {
        head+=len_224;
    }
    if(    tail<0) {
        tail+=len_224+1;
    }
    if(    head>tail) {
        __result150__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value175=charp_reverse(((char*)(__right_value174=charp_substring(str,tail,head))))));
        __right_value174 = come_decrement_ref_count2(__right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value175 = come_decrement_ref_count2(__right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result150__;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>=len_224) {
        tail=len_224;
    }
    if(    head==tail) {
        __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value176=__builtin_string("")));
        __right_value176 = come_decrement_ref_count2(__right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result151__;
    }
    if(    tail-head+1<1) {
        __result152__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value177=__builtin_string("")));
        __right_value177 = come_decrement_ref_count2(__right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result152__;
    }
    result_225=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail-head+1)), "./comelang.h", 4931, "char*", (void*)0, (void*)0));
    memcpy(result_225,str+head,tail-head);
    result_225[tail-head]=0;
    __result153__ = gComeFunResultObject = __result_obj__ = result_225;
    result_225 = come_decrement_ref_count2(result_225, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result153__;
}

char* xsprintf(char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value179 = (void*)0;
char* __result154__;
va_list args_226;
char* result_227;
int len_228;
void* __right_value180 = (void*)0;
char* __result155__;
void* __right_value181 = (void*)0;
char* result2_229;
char* __result156__;
memset(&args_226, 0, sizeof(va_list));
result_227 = (void*)0;
    if(    msg==((void*)0)) {
        __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value179=__builtin_string("")));
        __right_value179 = come_decrement_ref_count2(__right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result154__;
    }
    __builtin_va_start(args_226,msg);
    len_228=vasprintf(&result_227,msg,args_226);
    __builtin_va_end(args_226);
    if(    len_228<0) {
        __result155__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value180=__builtin_string("")));
        come_call_finalizer3((&args_226),va_list_finalize, 1, 0, 0, 0, (void*)0);
        __right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result155__;
    }
    result2_229=(char*)come_increment_ref_count(__builtin_string(result_227));
    free(result_227);
    __result156__ = gComeFunResultObject = __result_obj__ = result2_229;
    come_call_finalizer3((&args_226),va_list_finalize, 1, 0, 0, 0, (void*)0);
    result2_229 = come_decrement_ref_count2(result2_229, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

char* charp_delete(char* str, int head, int tail){
void* __result_obj__=(void*)0;
void* __right_value182 = (void*)0;
char* __result157__;
int len_230;
void* __right_value183 = (void*)0;
char* __result158__;
void* __right_value184 = (void*)0;
char* __result159__;
void* __right_value185 = (void*)0;
char* result_231;
char* __result160__;
    if(    str==((void*)0)) {
        __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value182=__builtin_string("")));
        __right_value182 = come_decrement_ref_count2(__right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result157__;
    }
    len_230=strlen(str);
    if(    strcmp(str,"")==0) {
        __result158__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value183=__builtin_string(str)));
        __right_value183 = come_decrement_ref_count2(__right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result158__;
    }
    if(    head<0) {
        head+=len_230;
    }
    if(    tail<0) {
        tail+=len_230+1;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail<0) {
        __result159__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value184=__builtin_string(str)));
        __right_value184 = come_decrement_ref_count2(__right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result159__;
    }
    if(    tail>=len_230) {
        tail=len_230;
    }
    result_231=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_230-(tail-head)+1)), "./comelang.h", 4993, "char*", (void*)0, (void*)0));
    memcpy(result_231,str,head);
    memcpy(result_231+head,str+tail,len_230-tail);
    result_231[len_230-(tail-head)]=0;
    __result160__ = gComeFunResultObject = __result_obj__ = result_231;
    result_231 = come_decrement_ref_count2(result_231, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

struct list$1charph* charp_split_char(char* self, char c){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
void* __right_value187 = (void*)0;
struct list$1charph* __result162__;
void* __right_value188 = (void*)0;
void* __right_value189 = (void*)0;
struct list$1charph* result_234;
void* __right_value190 = (void*)0;
void* __right_value191 = (void*)0;
struct buffer* str_235;
int i_236;
void* __right_value195 = (void*)0;
void* __right_value196 = (void*)0;
struct list$1charph* __result164__;
    if(    self==((void*)0)) {
        __result162__ = gComeFunResultObject = __result_obj__ = ((struct list$1charph*)(__right_value187=list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 5006, "struct list$1charph*", (void*)0, (void*)0)))));
        come_call_finalizer3(__right_value187,list$1charphp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result162__;
    }
    result_234=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 5009, "struct list$1charph*", (void*)0, (void*)0))));
    str_235=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5011, "struct buffer*", (void*)0, (void*)0))));
    for(    i_236=0;    i_236<charp_length(self);    i_236++    ){
        if(        self[i_236]==c) {
            list$1charph_push_back(result_234,(char*)come_increment_ref_count(__builtin_string(str_235->buf)));
            buffer_reset(str_235);
        }
        else {
            buffer_append_char(str_235,self[i_236]);
        }
    }
    if(    buffer_length(str_235)!=0) {
        list$1charph_push_back(result_234,(char*)come_increment_ref_count(__builtin_string(str_235->buf)));
    }
    __result164__ = gComeFunResultObject = __result_obj__ = result_234;
    come_call_finalizer3(result_234,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(str_235,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result164__;
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

char* charp_printable(char* str){
void* __result_obj__=(void*)0;
int len_240;
void* __right_value199 = (void*)0;
char* result_241;
int n_242;
int i_243;
char c_244;
char* __result167__;
    len_240=charp_length(str);
    result_241=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(len_240*2+1)), "./comelang.h", 5043, "char*", (void*)0, (void*)0));
    n_242=0;
    for(    i_243=0;    i_243<len_240;    i_243++    ){
        c_244=str[i_243];
        if(        (c_244>=0&&c_244<32)||c_244==127) {
            result_241[n_242++]=94;
            result_241[n_242++]=c_244+65-1;
        }
        else {
            result_241[n_242++]=c_244;
        }
    }
    result_241[n_242]=0;
    __result167__ = gComeFunResultObject = __result_obj__ = result_241;
    result_241 = come_decrement_ref_count2(result_241, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

char* charp_sub_plain(char* self, char* str, char* replace){
void* __result_obj__=(void*)0;
void* __right_value200 = (void*)0;
char* __result168__;
void* __right_value201 = (void*)0;
void* __right_value202 = (void*)0;
struct buffer* result_245;
char* p_246;
char* p2_247;
void* __right_value203 = (void*)0;
char* __result169__;
    if(    str==((void*)0)||replace==((void*)0)) {
        __result168__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value200=__builtin_string(self)));
        __right_value200 = come_decrement_ref_count2(__right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result168__;
    }
    result_245=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5071, "struct buffer*", (void*)0, (void*)0))));
    p_246=self;
    while((_Bool)1) {
        p2_247=strstr(p_246,str);
        if(        p2_247==((void*)0)) {
            p2_247=p_246;
            while(*p2_247) {
                p2_247++;
            }
            buffer_append(result_245,p_246,p2_247-p_246);
            break;
        }
        buffer_append(result_245,p_246,p2_247-p_246);
        buffer_append_str(result_245,replace);
        p_246=p2_247+strlen(str);
    }
    __result169__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value203=buffer_to_string(result_245)));
    come_call_finalizer3(result_245,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value203 = come_decrement_ref_count2(__right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result169__;
}

char* xbasename(char* path){
void* __result_obj__=(void*)0;
void* __right_value204 = (void*)0;
char* __result170__;
char* p_248;
void* __right_value205 = (void*)0;
char* __result171__;
void* __right_value206 = (void*)0;
char* __result172__;
void* __right_value207 = (void*)0;
char* __result173__;
    if(    path==((void*)0)) {
        __result170__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value204=__builtin_string("")));
        __right_value204 = come_decrement_ref_count2(__right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result170__;
    }
    p_248=path+strlen(path);
    while(p_248>=path) {
        if(        *p_248==47) {
            break;
        }
        else {
            p_248--;
        }
    }
    if(    p_248<path) {
        __result171__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value205=__builtin_string(path)));
        __right_value205 = come_decrement_ref_count2(__right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result171__;
    }
    else {
        __result172__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value206=__builtin_string(p_248+1)));
        __right_value206 = come_decrement_ref_count2(__right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result172__;
    }
    __result173__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=__builtin_string("")));
    __right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* xnoextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value208 = (void*)0;
char* __result174__;
void* __right_value209 = (void*)0;
char* path2_249;
char* p_250;
void* __right_value210 = (void*)0;
char* __result175__;
void* __right_value211 = (void*)0;
char* __result176__;
void* __right_value212 = (void*)0;
char* __result177__;
    if(    path==((void*)0)) {
        __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value208=__builtin_string("")));
        __right_value208 = come_decrement_ref_count2(__right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result174__;
    }
    path2_249=(char*)come_increment_ref_count(xbasename(path));
    p_250=path2_249+strlen(path2_249);
    while(p_250>=path2_249) {
        if(        *p_250==46) {
            break;
        }
        else {
            p_250--;
        }
    }
    if(    p_250<path2_249) {
        __result175__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value210=__builtin_string(path2_249)));
        path2_249 = come_decrement_ref_count2(path2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value210 = come_decrement_ref_count2(__right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result175__;
    }
    else {
        __result176__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value211=charp_substring(path2_249,0,p_250-path2_249)));
        path2_249 = come_decrement_ref_count2(path2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value211 = come_decrement_ref_count2(__right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result176__;
    }
    __result177__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value212=__builtin_string("")));
    path2_249 = come_decrement_ref_count2(path2_249, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    __right_value212 = come_decrement_ref_count2(__right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result177__;
}

char* xextname(char* path){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
char* __result178__;
char* p_251;
void* __right_value214 = (void*)0;
char* __result179__;
void* __right_value215 = (void*)0;
char* __result180__;
void* __right_value216 = (void*)0;
char* __result181__;
    if(    path==((void*)0)) {
        __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value213=__builtin_string("")));
        __right_value213 = come_decrement_ref_count2(__right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result178__;
    }
    p_251=path+strlen(path);
    while(p_251>=path) {
        if(        *p_251==46) {
            break;
        }
        else {
            p_251--;
        }
    }
    if(    p_251<path) {
        __result179__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value214=__builtin_string(path)));
        __right_value214 = come_decrement_ref_count2(__right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result179__;
    }
    else {
        __result180__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value215=__builtin_string(p_251+1)));
        __right_value215 = come_decrement_ref_count2(__right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result180__;
    }
    __result181__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value216=__builtin_string("")));
    __right_value216 = come_decrement_ref_count2(__right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* bool_to_string(_Bool self){
void* __result_obj__=(void*)0;
void* __right_value217 = (void*)0;
char* __result182__;
void* __right_value218 = (void*)0;
char* __result183__;
    if(    self) {
        __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value217=__builtin_string("true")));
        __right_value217 = come_decrement_ref_count2(__right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result182__;
    }
    else {
        __result183__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value218=__builtin_string("false")));
        __right_value218 = come_decrement_ref_count2(__right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result183__;
    }
}

char* char_to_string(char self){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
char* __result184__;
    __result184__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value219=xsprintf("%c",self)));
    __right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* short_to_string(short self){
void* __result_obj__=(void*)0;
void* __right_value220 = (void*)0;
char* __result185__;
    __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value220=xsprintf("%d",self)));
    __right_value220 = come_decrement_ref_count2(__right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

char* int_to_string(int self){
void* __result_obj__=(void*)0;
void* __right_value221 = (void*)0;
char* __result186__;
    __result186__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value221=xsprintf("%d",self)));
    __right_value221 = come_decrement_ref_count2(__right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result186__;
}

char* long_to_string(long self){
void* __result_obj__=(void*)0;
void* __right_value222 = (void*)0;
char* __result187__;
    __result187__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value222=xsprintf("%ld",self)));
    __right_value222 = come_decrement_ref_count2(__right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result187__;
}

char* size_t_to_string(unsigned long  int self){
void* __result_obj__=(void*)0;
void* __right_value223 = (void*)0;
char* __result188__;
    __result188__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value223=xsprintf("%ld",self)));
    __right_value223 = come_decrement_ref_count2(__right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result188__;
}

char* float_to_string(float self){
void* __result_obj__=(void*)0;
void* __right_value224 = (void*)0;
char* __result189__;
    __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value224=xsprintf("%f",self)));
    __right_value224 = come_decrement_ref_count2(__right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

char* double_to_string(double self){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
char* __result190__;
    __result190__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value225=xsprintf("%lf",self)));
    __right_value225 = come_decrement_ref_count2(__right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result190__;
}

char* string_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value226 = (void*)0;
char* __result191__;
void* __right_value227 = (void*)0;
char* __result192__;
    if(    self==((void*)0)) {
        __result191__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value226=__builtin_string("")));
        __right_value226 = come_decrement_ref_count2(__right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result191__;
    }
    __result192__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value227=__builtin_string(self)));
    __right_value227 = come_decrement_ref_count2(__right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

char* charp_to_string(char* self){
void* __result_obj__=(void*)0;
void* __right_value228 = (void*)0;
char* __result193__;
void* __right_value229 = (void*)0;
char* __result194__;
    if(    self==((void*)0)) {
        __result193__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value228=__builtin_string("")));
        __right_value228 = come_decrement_ref_count2(__right_value228, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result193__;
    }
    __result194__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value229=__builtin_string(self)));
    __right_value229 = come_decrement_ref_count2(__right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result194__;
}

int bool_compare(_Bool left, _Bool right){
    if(    !left&&right) {
        return -1;
    }
    else if(    left&&right) {
        return 0;
    }
    else if(    !left&&!right) {
        return 0;
    }
    else {
        return 1;
    }
    return 0;
}

int char_compare(char left, char right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int short_compare(short left, short right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int int_compare(int left, int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int long_compare(long left, long right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int size_t_compare(unsigned long  int left, unsigned long  int right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int float_compare(float left, float right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int double_compare(double left, double right){
    if(    left<right) {
        return -1;
    }
    else if(    left>right) {
        return 1;
    }
    else {
        return 0;
    }
    return 0;
}

int string_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

int charp_compare(char* left, char* right){
    if(    left==((void*)0)&&right==((void*)0)) {
        return 0;
    }
    else if(    left==((void*)0)) {
        return -1;
    }
    else if(    right==((void*)0)) {
        return 1;
    }
    return strcmp(left,right);
}

char* FILE_read(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
char* __result195__;
void* __right_value231 = (void*)0;
void* __right_value232 = (void*)0;
struct buffer* buf_252;
int size_254;
void* __right_value233 = (void*)0;
char* __result196__;
    if(    f==((void*)0)) {
        __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value230=__builtin_string("")));
        __right_value230 = come_decrement_ref_count2(__right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result195__;
    }
    buf_252=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5407, "struct buffer*", (void*)0, (void*)0))));
    while(1) {
        char buf2_253[1024];
        memset(&buf2_253, 0, sizeof(char)        *(1024)        );
        size_254=fread(buf2_253,1,1024,f);
        buffer_append(buf_252,buf2_253,size_254);
        if(        size_254<1024) {
            break;
        }
    }
    __result196__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value233=buffer_to_string(buf_252)));
    come_call_finalizer3(buf_252,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __right_value233 = come_decrement_ref_count2(__right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result196__;
}

int FILE_write(struct _IO_FILE* f, char* str){
    if(    f==((void*)0)||str==((void*)0)) {
        return -1;
    }
    return fwrite(str,strlen(str),1,f);
}

int FILE_fclose(struct _IO_FILE* f){
int result_255;
    if(    f==((void*)0)) {
        return -1;
    }
    result_255=fclose(f);
    if(    result_255<0) {
        return result_255;
    }
    return result_255;
}

struct _IO_FILE* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...){
void* __result_obj__=(void*)0;
struct _IO_FILE* __result197__;
va_list args_257;
int result_258;
struct _IO_FILE* __result198__;
struct _IO_FILE* __result199__;
memset(&args_257, 0, sizeof(va_list));
    if(    f==((void*)0)||msg==((void*)0)) {
        __result197__ = gComeFunResultObject = __result_obj__ = f;
        gComeFunResultObject = (void*)0;
        return __result197__;
    }
    char msg2_256[1024*2*2*2];
    memset(&msg2_256, 0, sizeof(char)    *(1024*2*2*2)    );
    __builtin_va_start(args_257,msg);
    vsnprintf(msg2_256,1024*2*2*2,msg,args_257);
    __builtin_va_end(args_257);
    result_258=fprintf(f,"%s",msg2_256);
    if(    result_258<0) {
        __result198__ = gComeFunResultObject = __result_obj__ = f;
        come_call_finalizer3((&args_257),va_list_finalize, 1, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    __result199__ = gComeFunResultObject = __result_obj__ = f;
    come_call_finalizer3((&args_257),va_list_finalize, 1, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

int charp_write(char* self, char* file_name, _Bool append){
struct _IO_FILE* f_259;
int result_260;
int result2_261;
f_259 = (void*)0;
    if(    self==((void*)0)||file_name==((void*)0)) {
        return -1;
    }
    if(    append) {
        f_259=fopen(file_name,"a");
    }
    else {
        f_259=fopen(file_name,"w");
    }
    if(    f_259==((void*)0)) {
        return -1;
    }
    result_260=fwrite(self,strlen(self),1,f_259);
    if(    result_260<0) {
        return result_260;
    }
    result2_261=fclose(f_259);
    if(    result2_261<0) {
        return result2_261;
    }
    return result_260;
}

char* charp_read(char* file_name){
void* __result_obj__=(void*)0;
void* __right_value234 = (void*)0;
char* __result200__;
struct _IO_FILE* f_262;
void* __right_value235 = (void*)0;
char* __result201__;
void* __right_value236 = (void*)0;
void* __right_value237 = (void*)0;
struct buffer* buf_263;
int size_265;
void* __right_value238 = (void*)0;
char* result_266;
int result2_267;
void* __right_value239 = (void*)0;
char* __result202__;
char* __result203__;
    if(    file_name==((void*)0)) {
        __result200__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value234=__builtin_string("")));
        __right_value234 = come_decrement_ref_count2(__right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    f_262=fopen(file_name,"r");
    if(    f_262==((void*)0)) {
        __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value235=__builtin_string("")));
        __right_value235 = come_decrement_ref_count2(__right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    buf_263=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 5515, "struct buffer*", (void*)0, (void*)0))));
    while(1) {
        char buf2_264[1024];
        memset(&buf2_264, 0, sizeof(char)        *(1024)        );
        size_265=fread(buf2_264,1,1024,f_262);
        buffer_append(buf_263,buf2_264,size_265);
        if(        size_265<1024) {
            break;
        }
    }
    result_266=(char*)come_increment_ref_count(buffer_to_string(buf_263));
    result2_267=fclose(f_262);
    if(    result2_267<0) {
        __result202__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value239=__builtin_string("")));
        come_call_finalizer3(buf_263,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value239 = come_decrement_ref_count2(__right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result202__;
    }
    __result203__ = gComeFunResultObject = __result_obj__ = result_266;
    come_call_finalizer3(buf_263,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_266 = come_decrement_ref_count2(result_266, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

struct list$1charph* FILE_readlines(struct _IO_FILE* f){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct list$1charph* result_268;
struct list$1charph* __result204__;
void* __right_value242 = (void*)0;
struct list$1charph* __result205__;
    result_268=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 5542, "struct list$1charph*", (void*)0, (void*)0))));
    if(    f==((void*)0)) {
        __result204__ = gComeFunResultObject = __result_obj__ = result_268;
        come_call_finalizer3(result_268,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    while(1) {
        char buf_269[1024];
        memset(&buf_269, 0, sizeof(char)        *(1024)        );
        if(        fgets(buf_269,1024,f)==((void*)0)) {
            break;
        }
        list$1charph_push_back(result_268,(char*)come_increment_ref_count(__builtin_string(buf_269)));
    }
    __result205__ = gComeFunResultObject = __result_obj__ = result_268;
    come_call_finalizer3(result_268,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result205__;
}

int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*)){
struct _IO_FILE* f_270;
    if(    path==((void*)0)||mode==((void*)0)) {
        return -1;
    }
    f_270=fopen(path,mode);
    if(    f_270) {
        block(parent,f_270);
        fclose(f_270);
        return 0;
    }
    return -1;
}

char* charp_puts(char* self){
void* __result_obj__=(void*)0;
void* __right_value243 = (void*)0;
char* __result206__;
void* __right_value244 = (void*)0;
char* __result207__;
    if(    self==((void*)0)) {
        __result206__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value243=__builtin_string("")));
        __right_value243 = come_decrement_ref_count2(__right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    puts(self);
    __result207__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value244=__builtin_string(self)));
    __right_value244 = come_decrement_ref_count2(__right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

char* charp_print(char* self){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
char* __result208__;
void* __right_value246 = (void*)0;
char* __result209__;
    if(    self==((void*)0)) {
        __result208__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value245=__builtin_string("")));
        __right_value245 = come_decrement_ref_count2(__right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    printf("%s",self);
    __result209__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value246=__builtin_string(self)));
    __right_value246 = come_decrement_ref_count2(__right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

char* charp_printf(char* self, ...){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result210__;
char* msg2_271;
va_list args_272;
void* __right_value248 = (void*)0;
char* __result211__;
msg2_271 = (void*)0;
memset(&args_272, 0, sizeof(va_list));
    if(    self==((void*)0)) {
        __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("")));
        __right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    __builtin_va_start(args_272,self);
    vasprintf(&msg2_271,self,args_272);
    __builtin_va_end(args_272);
    printf("%s",msg2_271);
    free(msg2_271);
    __result211__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value248=__builtin_string(self)));
    come_call_finalizer3((&args_272),va_list_finalize, 1, 0, 0, 0, (void*)0);
    __right_value248 = come_decrement_ref_count2(__right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

int int_printf(int self, char* msg){
    printf(msg,self);
    return self;
}

void int_times(int self, void* parent, void (*block)(void*,int)){
int i_273;
    for(    i_273=0;    i_273<self;    i_273++    ){
        block(parent,i_273);
    }
}

int assert_v2(int exp){
    if(    exp) {
    }
    else {
        puts("assert failure");
        stackframe();
        exit(2);
    }
}

int re_match(const char* pattern, const char* text, int* matchlength){
    return re_matchp(re_compile(pattern),text,matchlength);
}

int re_matchp(struct regex_t* pattern, const char* text, int* matchlength){
int idx_274;
    *matchlength=0;
    if(    pattern!=0) {
        if(        pattern[0].type==(2)) {
            return ((((matchpattern(&pattern[1],text,matchlength)))?(0):(-1)));
        }
        else {
            idx_274=-1;
            do {
                idx_274+=1;
                if(                matchpattern(pattern,text,matchlength)) {
                    if(                    text[0]==0) {
                        return -1;
                    }
                    return idx_274;
                }
            } while(*text++!=0);
        }
    }
    return -1;
}

struct regex_t* re_compile(const char* pattern){
void* __result_obj__=(void*)0;
int ccl_bufidx_277;
char c_278;
int i_279;
int j_280;
int buf_begin_281;
struct regex_t* __result212__;
struct regex_t* __result213__;
struct regex_t* __result214__;
struct regex_t* __result215__;
struct regex_t* __result216__;
struct regex_t* __result217__;
struct regex_t* __result218__;
memset(&c_278, 0, sizeof(char));
    static struct regex_t re_compiled_275[30];
    memset(&re_compiled_275, 0, sizeof(struct regex_t)    *(30)    );
    static unsigned char ccl_buf_276[40];
    memset(&ccl_buf_276, 0, sizeof(unsigned char)    *(40)    );
    ccl_bufidx_277=1;
    i_279=0;
    j_280=0;
    while(pattern[i_279]!=0&&(j_280+1<30)) {
        c_278=pattern[i_279];
        switch (c_278) {
            case 94:
            {
                re_compiled_275[j_280].type=(2);
            }
            break;
            case 36:
            {
                re_compiled_275[j_280].type=(3);
            }
            break;
            case 46:
            {
                re_compiled_275[j_280].type=(1);
            }
            break;
            case 42:
            {
                re_compiled_275[j_280].type=(5);
            }
            break;
            case 43:
            {
                re_compiled_275[j_280].type=(6);
            }
            break;
            case 63:
            {
                re_compiled_275[j_280].type=(4);
            }
            break;
            case 92:
            {
                if(                pattern[i_279+1]!=0) {
                    i_279+=1;
                    switch (pattern[i_279]) {
                        case 100:
                        {
                            re_compiled_275[j_280].type=(10);
                        }
                        break;
                        case 68:
                        {
                            re_compiled_275[j_280].type=(11);
                        }
                        break;
                        case 119:
                        {
                            re_compiled_275[j_280].type=(12);
                        }
                        break;
                        case 87:
                        {
                            re_compiled_275[j_280].type=(13);
                        }
                        break;
                        case 115:
                        {
                            re_compiled_275[j_280].type=(14);
                        }
                        break;
                        case 83:
                        {
                            re_compiled_275[j_280].type=(15);
                        }
                        break;
                        default:
                        {
                            re_compiled_275[j_280].type=(7);
                            re_compiled_275[j_280].u.ch=pattern[i_279];
                        }
                        break;
                    }
                }
            }
            break;
            case 91:
            {
                buf_begin_281=ccl_bufidx_277;
                if(                pattern[i_279+1]==94) {
                    re_compiled_275[j_280].type=(9);
                    i_279+=1;
                    if(                    pattern[i_279+1]==0) {
                        __result212__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result212__;
                    }
                }
                else {
                    re_compiled_275[j_280].type=(8);
                }
                while((pattern[++i_279]!=93)&&(pattern[i_279]!=0)) {
                    if(                    pattern[i_279]==92) {
                        if(                        ccl_bufidx_277>=40-1) {
                            __result213__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result213__;
                        }
                        if(                        pattern[i_279+1]==0) {
                            __result214__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                            gComeFunResultObject = (void*)0;
                            return __result214__;
                        }
                        ccl_buf_276[ccl_bufidx_277++]=pattern[i_279++];
                    }
                    else if(                    ccl_bufidx_277>=40) {
                        __result215__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                        gComeFunResultObject = (void*)0;
                        return __result215__;
                    }
                    ccl_buf_276[ccl_bufidx_277++]=pattern[i_279];
                }
                if(                ccl_bufidx_277>=40) {
                    __result216__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
                    gComeFunResultObject = (void*)0;
                    return __result216__;
                }
                ccl_buf_276[ccl_bufidx_277++]=0;
                re_compiled_275[j_280].u.ccl=&ccl_buf_276[buf_begin_281];
            }
            break;
            default:
            {
                re_compiled_275[j_280].type=(7);
                re_compiled_275[j_280].u.ch=c_278;
            }
            break;
        }
        if(        pattern[i_279]==0) {
            __result217__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)0;
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
        i_279+=1;
        j_280+=1;
    }
    re_compiled_275[j_280].type=(0);
    __result218__ = gComeFunResultObject = __result_obj__ = (struct regex_t*)re_compiled_275;
    gComeFunResultObject = (void*)0;
    return __result218__;
}

void re_print(struct regex_t* pattern){
int i_283;
int j_284;
char c_285;
memset(&i_283, 0, sizeof(int));
memset(&j_284, 0, sizeof(int));
memset(&c_285, 0, sizeof(char));
    const char* types_282[]={"UNUSED","DOT","BEGIN","END","QUESTIONMARK","STAR","PLUS","CHAR","CHAR_CLASS","INV_CHAR_CLASS","DIGIT","NOT_DIGIT","ALPHA","NOT_ALPHA","WHITESPACE","NOT_WHITESPACE","BRANCH"};
    for(    i_283=0;    i_283<30;    ++i_283    ){
        if(        pattern[i_283].type==(0)) {
            break;
        }
        printf("type: %s",types_282[pattern[i_283].type]);
        if(        pattern[i_283].type==(8)||pattern[i_283].type==(9)) {
            printf(" [");
            for(            j_284=0;            j_284<40;            ++j_284            ){
                c_285=pattern[i_283].u.ccl[j_284];
                if(                (c_285==0)||(c_285==93)) {
                    break;
                }
                printf("%c",c_285);
            }
            printf("]");
        }
        else if(        pattern[i_283].type==(7)) {
            printf(" '%c'",pattern[i_283].u.ch);
        }
        printf("\n");
    }
}

int matchdigit(char c){
    return (((0)?(isdigit(c)):(((unsigned int)(c)-48)<10)));
}

int matchalpha(char c){
    return (((0)?(isalpha(c)):((((unsigned int)(c)|32)-97)<26)));
}

int matchwhitespace(char c){
    return __isspace(c);
}

int matchalphanum(char c){
    return ((c==95)||matchalpha(c)||matchdigit(c));
}

int matchrange(char c, const char* str){
    return ((c!=45)&&(str[0]!=0)&&(str[0]!=45)&&(str[1]==45)&&(str[2]!=0)&&((c>=str[0])&&(c<=str[2])));
}

int matchdot(char c){
    (void)c;
    return 1;
}

int ismetachar(char c){
    return ((c==115)||(c==83)||(c==119)||(c==87)||(c==100)||(c==68));
}

int matchmetachar(char c, const char* str){
    switch (str[0]) {
        case 100:
        return matchdigit(c);
        case 68:
        return !matchdigit(c);
        case 119:
        return matchalphanum(c);
        case 87:
        return !matchalphanum(c);
        case 115:
        return matchwhitespace(c);
        case 83:
        return !matchwhitespace(c);
        default:
        return (c==str[0]);
    }
}

int matchcharclass(char c, const char* str){
    do {
        if(        matchrange(c,str)) {
            return 1;
        }
        else if(        str[0]==92) {
            str+=1;
            if(            matchmetachar(c,str)) {
                return 1;
            }
            else if(            (c==str[0])&&!ismetachar(c)) {
                return 1;
            }
        }
        else if(        c==str[0]) {
            if(            c==45) {
                return ((str[-1]==0)||(str[1]==0));
            }
            else {
                return 1;
            }
        }
    } while(*str++!=0);
    return 0;
}

int matchone(struct regex_t p, char c){
    switch (p.type) {
        case (1):
        return matchdot(c);
        case (8):
        return matchcharclass(c,(const char*)p.u.ccl);
        case (9):
        return !matchcharclass(c,(const char*)p.u.ccl);
        case (10):
        return matchdigit(c);
        case (11):
        return !matchdigit(c);
        case (12):
        return matchalphanum(c);
        case (13):
        return !matchalphanum(c);
        case (14):
        return matchwhitespace(c);
        case (15):
        return !matchwhitespace(c);
        default:
        return (p.u.ch==c);
    }
}

int matchstar(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
int prelen_286;
    prelen_286=*matchlength;
    const char* prepoint_287=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>=prepoint_287) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    *matchlength=prelen_286;
    return 0;
}

int matchplus(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    const char* prepoint_288=text;
    while((text[0]!=0)&&matchone(p,*text)) {
        text++;
        (*matchlength)++;
    }
    while(text>prepoint_288) {
        if(        matchpattern(pattern,text--,matchlength)) {
            return 1;
        }
        (*matchlength)--;
    }
    return 0;
}

int matchquestion(struct regex_t p, struct regex_t* pattern, const char* text, int* matchlength){
    if(    p.type==(0)) {
        return 1;
    }
    if(    matchpattern(pattern,text,matchlength)) {
        return 1;
    }
    if(    *text&&matchone(p,*text++)) {
        if(        matchpattern(pattern,text,matchlength)) {
            (*matchlength)++;
            return 1;
        }
    }
    return 0;
}

int matchpattern(struct regex_t* pattern, const char* text, int* matchlength){
int pre_289;
    pre_289=*matchlength;
    do {
        if(        (pattern[0].type==(0))||(pattern[1].type==(4))) {
            return matchquestion(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(5)) {
            return matchstar(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        pattern[1].type==(6)) {
            return matchplus(pattern[0],&pattern[2],text,matchlength);
        }
        else if(        (pattern[0].type==(3))&&pattern[1].type==(0)) {
            return (text[0]==0);
        }
        (*matchlength)++;
    } while((text[0]!=0)&&matchone(*pattern++,*text++));
    *matchlength=pre_289;
    return 0;
}

int come_main_v1(int argc, char** argv){
    puts("HELLO COMELANG");
    return 0;
}

int main(int argc, char** argv){
int __result219__;
    come_heap_init(0, 0, 0);
    setlocale(6,"");
    __result219__ = come_main_v2(argc,argv);
    come_call_finalizer3(gExceptionRightValueObjects,list$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    come_heap_final();
    return __result219__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_290;
struct list_item$1sRightValueObjectph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
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
char* __dec_obj54;
char* __dec_obj55;
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
            __dec_obj54=self->mVarName;
            __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
struct tuple1$1sTypeph* __dec_obj36;
struct sType* __dec_obj37;
char* __dec_obj38;
char* __dec_obj39;
struct list$1sTypeph* __dec_obj40;
struct list$1sNodeph* __dec_obj42;
struct list$1sTypeph* __dec_obj44;
struct list$1charph* __dec_obj45;
struct tuple1$1sTypeph* __dec_obj46;
struct sNode* __dec_obj47;
struct tuple1$1sTypeph* __dec_obj48;
struct sNode* __dec_obj49;
char* __dec_obj50;
char* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
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
            come_call_finalizer3(__dec_obj46,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj48,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_292;
struct list_item$1sTypeph* prev_it_293;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        prev_it_293=it_292;
        it_292=it_292->next;
        come_call_finalizer3(prev_it_293,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_294;
struct list_item$1sTypeph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

struct CVALUE* CVALUE_initialize(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result220__;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj56;
struct sType* __dec_obj57;
char* __dec_obj58;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj56=self->c_value;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj57=self->type;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj58=self->c_value_without_right_value_objects;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sModule* sModule_initialize(struct sModule* self){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct buffer* __dec_obj59;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct buffer* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
void* __right_value253 = (void*)0;
void* __right_value254 = (void*)0;
struct buffer* __dec_obj63;
struct sModule* __result221__;
    __dec_obj59=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 24, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj59,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj60=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 25, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj60,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj61=self->mLastCode;
    self->mLastCode=((void*)0);
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj62=self->mLastCode2;
    self->mLastCode2=((void*)0);
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj63=self->mHeader;
    self->mHeader=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 28, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj63,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sModule_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void sModule_finalize(struct sModule* self){
struct buffer* __dec_obj64;
struct buffer* __dec_obj65;
char* __dec_obj66;
char* __dec_obj67;
struct buffer* __dec_obj68;
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj64=self->mSourceHead;
            come_call_finalizer3(__dec_obj64,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj65=self->mSource;
            come_call_finalizer3(__dec_obj65,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode!=((void*)0)) {
        if(        self->mLastCode==gComeFunResultObject) {
            __dec_obj66=self->mLastCode;
            __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode = come_decrement_ref_count2(self->mLastCode, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLastCode2!=((void*)0)) {
        if(        self->mLastCode2==gComeFunResultObject) {
            __dec_obj67=self->mLastCode2;
            __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mLastCode2 = come_decrement_ref_count2(self->mLastCode2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mHeader!=((void*)0)) {
        if(        self->mHeader==gComeFunResultObject) {
            __dec_obj68=self->mHeader;
            come_call_finalizer3(__dec_obj68,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mHeader,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent){
void* __result_obj__=(void*)0;
void* __right_value255 = (void*)0;
void* __right_value261 = (void*)0;
struct map$2charphsVarph* __dec_obj74;
struct sVarTable* __result224__;
    __dec_obj74=self->mVars;
    self->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "01main.c", 35, "struct map$2charphsVarph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj74,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    self->mGlobal=global;
    self->mParent=parent;
    static int id_307=0;
    self->mID=++id_307;
    __result224__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result224__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
int i_302;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct list$1charp* __dec_obj69;
struct map$2charphsVarph* __result223__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value256=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2465, "char**", (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value257=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2466, "struct sVar**", (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value258=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2467, "_Bool*", (void*)0, (void*)0))));
    for(    i_302=0;    i_302<128;    i_302++    ){
        self->item_existance[i_302]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj69=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2477, "struct list$1charp*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj69,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result223__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result222__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_303;
int i_304;
    for(    i_303=0;    i_303<self->size;    i_303++    ){
        if(        self->item_existance[i_303]) {
            if(            1) {
                come_call_finalizer3(self->items[i_303],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_304=0;    i_304<self->size;    i_304++    ){
        if(        self->item_existance[i_304]) {
            if(            1) {
                self->keys[i_304] = come_decrement_ref_count2(self->keys[i_304], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj70;
char* __dec_obj71;
struct sType* __dec_obj72;
char* __dec_obj73;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj70=self->mName;
            __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj71=self->mCValueName;
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj72=self->mType;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj73=self->mFunName;
            __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_305;
int i_306;
    for(    i_305=0;    i_305<self->size;    i_305++    ){
        if(        self->item_existance[i_305]) {
            if(            1) {
                come_call_finalizer3(self->items[i_305],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_306=0;    i_306<self->size;    i_306++    ){
        if(        self->item_existance[i_306]) {
            if(            1) {
                self->keys[i_306] = come_decrement_ref_count2(self->keys[i_306], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

void sVarTable_finalize(struct sVarTable* self){
    come_call_finalizer3(self->mVars,map$2charphsVarphp_finalize, 0, 0, 0, 0, (void*)0);
}

struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info){
void* __result_obj__=(void*)0;
int pointer_num_308;
char* p_309;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
char* name2_310;
void* __right_value264 = (void*)0;
struct sClass* klass_311;
void* __right_value265 = (void*)0;
struct sClass* generics_class_319;
void* __right_value266 = (void*)0;
struct sClass* klass2_320;
void* __right_value267 = (void*)0;
char* __dec_obj83;
void* __right_value268 = (void*)0;
char* __dec_obj84;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
void* __right_value276 = (void*)0;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value281 = (void*)0;
void* __right_value282 = (void*)0;
struct list$1sTypeph* __dec_obj88;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sNodeph* __dec_obj89;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sTypeph* __dec_obj90;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct list$1charph* __dec_obj91;
struct tuple1$1sTypeph* __dec_obj92;
struct sNode* __dec_obj93;
void* __right_value289 = (void*)0;
char* __dec_obj94;
struct sType* __result253__;
    pointer_num_308=0;
    p_309=name;
    while(*p_309) {
        if(        xisalpha(*p_309)) {
            p_309++;
        }
        else {
            break;
        }
    }
    while(*p_309==42) {
        pointer_num_308++;
        p_309++;
    }
    name2_310=(char*)come_increment_ref_count(charp_substring(((char*)(__right_value262=__builtin_string(name))),0,-pointer_num_308-1));
    __right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    klass_311=((struct sClass*)(__right_value264=map$2charphsClassphp_operator_load_element(info->classes,name2_310)));
    come_call_finalizer3(__right_value264,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    generics_class_319=((struct sClass*)(__right_value265=map$2charphsClassphp_operator_load_element(info->generics_classes,name2_310)));
    come_call_finalizer3(__right_value265,sClass_finalize, 0, 1, 0, 0, __result_obj__);
    if(    klass_311==((void*)0)&&generics_class_319==((void*)0)) {
        printf("%s %d: class not found(%s)(1)\n",info->sname,info->sline,name2_310);
    }
    if(    klass_311) {
        self->mClass=klass_311;
    }
    else {
        klass2_320=(struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "01main.c", 79, "struct sClass*", (void*)0, (void*)0));
        __dec_obj83=klass2_320->mName;
        klass2_320->mName=(char*)come_increment_ref_count(__builtin_string(name));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj84=klass2_320->mDeclareSName;
        klass2_320->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(__builtin_string(name)),(struct sClass*)come_increment_ref_count(klass2_320));
        self->mClass=((struct sClass*)(__right_value276=map$2charphsClassphp_operator_load_element(info->classes,((char*)(__right_value275=__builtin_string(name))))));
        __right_value275 = come_decrement_ref_count2(__right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(__right_value276,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer3(klass2_320,sClass_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj86=self->mNoSolvedGenericsType;
    self->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "01main.c", 88, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),((void*)0)));
    come_call_finalizer3(__dec_obj86,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj87=self->mOriginalLoadVarType;
    self->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "01main.c", 89, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),((void*)0)));
    come_call_finalizer3(__dec_obj87,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj88=self->mGenericsTypes;
    self->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "01main.c", 90, "struct list$1sTypeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj88,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj89=self->mArrayNum;
    self->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "01main.c", 91, "struct list$1sNodeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj89,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mOmitArrayNum=(_Bool)0;
    __dec_obj90=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "01main.c", 93, "struct list$1sTypeph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj90,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj91=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "01main.c", 94, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mVarArgs=(_Bool)0;
    __dec_obj92=self->mResultType;
    self->mResultType=((void*)0);
    come_call_finalizer3(__dec_obj92,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    self->mUnsigned=(_Bool)0;
    self->mConstant=(_Bool)0;
    self->mRegister=(_Bool)0;
    self->mVolatile=(_Bool)0;
    self->mStatic=(_Bool)0;
    self->mRestrict=(_Bool)0;
    self->mImmutable=(_Bool)0;
    self->mLongLong=(_Bool)0;
    self->mHeap=heap;
    self->mNoHeap=(_Bool)0;
    self->mPointerNum=pointer_num_308;
    __dec_obj93=self->mSizeNum;
    self->mSizeNum=((void*)0);
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj94=self->mOriginalTypeName;
    self->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(""));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mOriginalPointerNum=0;
    self->mFunctionParam=(_Bool)0;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sType_finalize, 0, 0, 1, 0, (void*)0);
    name2_310 = come_decrement_ref_count2(name2_310, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_312;
unsigned int hash_313;
unsigned int it_314;
struct sClass* __result225__;
struct sClass* __result226__;
struct sClass* __result227__;
struct sClass* __result228__;
default_value_312 = (void*)0;
    memset(&default_value_312,0,sizeof(struct sClass*));
    hash_313=charp_get_hash_key(((char*)key))%self->size;
    it_314=hash_313;
    while((_Bool)1) {
        if(        self->item_existance[it_314]) {
            if(            charp_equals(self->keys[it_314],key)) {
                __result225__ = gComeFunResultObject = __result_obj__ = self->items[it_314];
                come_call_finalizer3(default_value_312,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
            it_314++;
            if(            it_314>=self->size) {
                it_314=0;
            }
            else if(            it_314==hash_313) {
                __result226__ = gComeFunResultObject = __result_obj__ = default_value_312;
                come_call_finalizer3(default_value_312,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result226__;
            }
        }
        else {
            __result227__ = gComeFunResultObject = __result_obj__ = default_value_312;
            come_call_finalizer3(default_value_312,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result227__;
        }
    }
    __result228__ = gComeFunResultObject = __result_obj__ = default_value_312;
    come_call_finalizer3(default_value_312,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj75;
struct list$1tuple2$2charphsTypephph* __dec_obj76;
char* __dec_obj80;
char* __dec_obj81;
char* __dec_obj82;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj75=self->mName;
            __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj76=self->mFields;
            come_call_finalizer3(__dec_obj76,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj80=self->mDeclareSName;
            __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj81=self->mParentClassName;
            __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj82=self->mAttribute;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_315;
struct list_item$1tuple2$2charphsTypephph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        come_call_finalizer3(prev_it_316,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj77;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj77=self->item;
            come_call_finalizer3(__dec_obj77,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj78;
struct sType* __dec_obj79;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj78=self->v1;
            __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj79=self->v2;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_317;
struct list_item$1tuple2$2charphsTypephph* prev_it_318;
    it_317=self->head;
    while(it_317!=((void*)0)) {
        prev_it_318=it_317;
        it_317=it_317->next;
        come_call_finalizer3(prev_it_318,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_338;
unsigned int it_339;
_Bool same_key_exist_356;
char* it2_359;
struct map$2charphsClassph* __result249__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_338=charp_get_hash_key(key)%self->size;
    it_339=hash_338;
    while((_Bool)1) {
        if(        self->item_existance[it_339]) {
            if(            charp_equals(self->keys[it_339],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_339]);
                    self->keys[it_339] = come_decrement_ref_count2(self->keys[it_339], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_339]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_339]);
                    self->keys[it_339]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_339],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_339]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_339]=item;
                }
                break;
            }
            it_339++;
            if(            it_339>=self->size) {
                it_339=0;
            }
            else if(            it_339==hash_338) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_339]=(_Bool)1;
            if(            1) {
                self->keys[it_339]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_339]=key;
            }
            if(            1) {
                self->items[it_339]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_339]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_356=(_Bool)0;
    for(    it2_359=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_359=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_359,key)) {
            same_key_exist_356=(_Bool)1;
        }
    }
    if(    !same_key_exist_356) {
        list$1charp_push_back(self->key_list,key);
    }
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_321;
void* __right_value269 = (void*)0;
char** keys_322;
void* __right_value270 = (void*)0;
struct sClass** items_323;
void* __right_value271 = (void*)0;
_Bool* item_existance_324;
int len_325;
char* it_328;
struct sClass* default_value_331;
void* __right_value272 = (void*)0;
struct sClass* it2_332;
unsigned int hash_335;
int n_336;
struct sClass* default_value_337;
void* __right_value273 = (void*)0;
default_value_331 = (void*)0;
default_value_337 = (void*)0;
    size_321=self->size*10;
    keys_322=(char**)come_increment_ref_count(((char**)(__right_value269=(char**)come_calloc(1, sizeof(char*)*(1*(size_321)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_323=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value270=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_321)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_324=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value271=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_321)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_325=0;
    for(    it_328=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_328=map$2charphsClassph_next(self)    ){
        memset(&default_value_331,0,sizeof(struct sClass*));
        it2_332=((struct sClass*)(__right_value272=map$2charphsClassph_at(self,it_328,default_value_331)));
        come_call_finalizer3(__right_value272,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_335=charp_get_hash_key(it_328)%size_321;
        n_336=hash_335;
        while((_Bool)1) {
            if(            item_existance_324[n_336]) {
                n_336++;
                if(                n_336>=size_321) {
                    n_336=0;
                }
                else if(                n_336==hash_335) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_324[n_336]=(_Bool)1;
                keys_322[n_336]=it_328;
                items_323[n_336]=((struct sClass*)(__right_value273=map$2charphsClassph_at(self,it_328,default_value_337)));
                come_call_finalizer3(__right_value273,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_325++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_322;
    self->items=items_323;
    self->item_existance=item_existance_324;
    self->size=size_321;
    self->len=len_325;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_326;
char* __result229__;
char* __result230__;
char* result_327;
char* __result231__;
result_326 = (void*)0;
result_327 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_326,0,sizeof(char*));
        __result229__ = gComeFunResultObject = __result_obj__ = result_326;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result230__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    memset(&result_327,0,sizeof(char*));
    __result231__ = gComeFunResultObject = __result_obj__ = result_327;
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_329;
char* __result232__;
char* __result233__;
char* result_330;
char* __result234__;
result_329 = (void*)0;
result_330 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_329,0,sizeof(char*));
        __result232__ = gComeFunResultObject = __result_obj__ = result_329;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result233__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    memset(&result_330,0,sizeof(char*));
    __result234__ = gComeFunResultObject = __result_obj__ = result_330;
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_333;
unsigned int it_334;
struct sClass* __result235__;
struct sClass* __result236__;
struct sClass* __result237__;
struct sClass* __result238__;
    hash_333=charp_get_hash_key(((char*)key))%self->size;
    it_334=hash_333;
    while((_Bool)1) {
        if(        self->item_existance[it_334]) {
            if(            charp_equals(self->keys[it_334],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_334];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_334++;
            if(            it_334>=self->size) {
                it_334=0;
            }
            else if(            it_334==hash_333) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_340;
struct list_item$1charp* it_341;
struct list$1charp* __result242__;
    it2_340=0;
    it_341=self->head;
    while(it_341!=((void*)0)) {
        if(        charp_equals(it_341->item,item)) {
            list$1charp_delete(self,it2_340,it2_340+1);
            break;
        }
        it2_340++;
        it_341=it_341->next;
    }
    __result242__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result242__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_342;
struct list$1charp* __result239__;
struct list_item$1charp* it_345;
int i_346;
struct list_item$1charp* prev_it_347;
struct list_item$1charp* it_348;
int i_349;
struct list_item$1charp* prev_it_350;
struct list_item$1charp* it_351;
struct list_item$1charp* head_prev_it_352;
struct list_item$1charp* tail_it_353;
int i_354;
struct list_item$1charp* prev_it_355;
struct list$1charp* __result241__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_342=tail;
        tail=head;
        head=tmp_342;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result239__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_345=self->head;
        i_346=0;
        while(it_345!=((void*)0)) {
            if(            i_346<tail) {
                prev_it_347=it_345;
                it_345=it_345->next;
                i_346++;
                come_call_finalizer3(prev_it_347,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_346==tail) {
                self->head=it_345;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_345=it_345->next;
                i_346++;
            }
        }
    }
    else if(    tail==self->len) {
        it_348=self->head;
        i_349=0;
        while(it_348!=((void*)0)) {
            if(            i_349==head) {
                self->tail=it_348->prev;
                self->tail->next=((void*)0);
            }
            if(            i_349>=head) {
                prev_it_350=it_348;
                it_348=it_348->next;
                i_349++;
                come_call_finalizer3(prev_it_350,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_348=it_348->next;
                i_349++;
            }
        }
    }
    else {
        it_351=self->head;
        head_prev_it_352=((void*)0);
        tail_it_353=((void*)0);
        i_354=0;
        while(it_351!=((void*)0)) {
            if(            i_354==head) {
                head_prev_it_352=it_351->prev;
            }
            if(            i_354==tail) {
                tail_it_353=it_351;
            }
            if(            i_354>=head&&i_354<tail) {
                prev_it_355=it_351;
                it_351=it_351->next;
                i_354++;
                come_call_finalizer3(prev_it_355,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_351=it_351->next;
                i_354++;
            }
        }
        if(        head_prev_it_352!=((void*)0)) {
            head_prev_it_352->next=tail_it_353;
        }
        if(        tail_it_353!=((void*)0)) {
            tail_it_353->prev=head_prev_it_352;
        }
    }
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_343;
struct list_item$1charp* prev_it_344;
struct list$1charp* __result240__;
    it_343=self->head;
    while(it_343!=((void*)0)) {
        prev_it_344=it_343;
        it_343=it_343->next;
        come_call_finalizer3(prev_it_344,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result240__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_357;
char* __result243__;
char* __result244__;
char* result_358;
char* __result245__;
result_357 = (void*)0;
result_358 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_357,0,sizeof(char*));
        __result243__ = gComeFunResultObject = __result_obj__ = result_357;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    self->it=self->head;
    if(    self->it) {
        __result244__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    memset(&result_358,0,sizeof(char*));
    __result245__ = gComeFunResultObject = __result_obj__ = result_358;
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_360;
char* __result246__;
char* __result247__;
char* result_361;
char* __result248__;
result_360 = (void*)0;
result_361 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_360,0,sizeof(char*));
        __result246__ = gComeFunResultObject = __result_obj__ = result_360;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result247__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result247__;
    }
    memset(&result_361,0,sizeof(char*));
    __result248__ = gComeFunResultObject = __result_obj__ = result_361;
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj85;
struct tuple1$1sTypeph* __result250__;
    __dec_obj85=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result252__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
char* __dec_obj95;
void* __right_value291 = (void*)0;
void* __right_value292 = (void*)0;
struct list$1tuple2$2charphsTypephph* __dec_obj96;
void* __right_value293 = (void*)0;
char* __dec_obj97;
struct sClass* __result255__;
    self->mNumber=number;
    self->mStruct=struct_;
    self->mUnion=union_;
    self->mGenerics=generics;
    self->mMethodGenerics=method_generics;
    self->mEnum=(_Bool)0;
    self->mProtocol=protocol_;
    self->mFloat=float_;
    self->mEnum=enum_;
    __dec_obj95=self->mName;
    self->mName=(char*)come_increment_ref_count(__builtin_string(name));
    __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsNum=generics_num;
    self->mMethodGenericsNum=method_generics_num;
    __dec_obj96=self->mFields;
    self->mFields=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count(list$1tuple2$2charphsTypephph_initialize((struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((struct list$1tuple2$2charphsTypephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsTypephph)*(1), "01main.c", 136, "struct list$1tuple2$2charphsTypephph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj96,list$1tuple2$2charphsTypephph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1tuple2$2charphsTypephph* list$1tuple2$2charphsTypephph_initialize(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsTypephph* __result254__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
char* __dec_obj98;
void* __right_value295 = (void*)0;
char* __dec_obj99;
void* __right_value296 = (void*)0;
void* __right_value297 = (void*)0;
struct list$1charph* __dec_obj100;
void* __right_value298 = (void*)0;
char* __dec_obj101;
struct sClassModule* __result256__;
    __dec_obj98=self->mName;
    self->mName=(char*)come_increment_ref_count(come_call_cloner(charp_clone, name));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj99=self->mText;
    self->mText=(char*)come_increment_ref_count(come_call_cloner(string_clone, text));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj100=self->mParams;
    self->mParams=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "01main.c", 147, "struct list$1charph*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj101=self->mSName;
    self->mSName=(char*)come_increment_ref_count(__builtin_string(sname));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=sline;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    text = come_decrement_ref_count2(text, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    sname = come_decrement_ref_count2(sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void sClassModule_finalize(struct sClassModule* self){
char* __dec_obj102;
char* __dec_obj103;
struct list$1charph* __dec_obj104;
char* __dec_obj105;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj102=self->mName;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        if(        self->mText==gComeFunResultObject) {
            __dec_obj103=self->mText;
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        if(        self->mParams==gComeFunResultObject) {
            __dec_obj104=self->mParams;
            come_call_finalizer3(__dec_obj104,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParams,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        if(        self->mSName==gComeFunResultObject) {
            __dec_obj105=self->mSName;
            __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_, char* attribute, char* fun_attribute){
void* __result_obj__=(void*)0;
char* __dec_obj106;
struct sType* __dec_obj107;
struct list$1sTypeph* __dec_obj108;
struct list$1charph* __dec_obj109;
struct list$1charph* __dec_obj110;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct sType* __dec_obj111;
struct list$1sTypeph* o2_saved_362;
struct sType* it_365;
void* __right_value344 = (void*)0;
struct list$1charph* o2_saved_389;
char* it_392;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
void* __right_value347 = (void*)0;
struct tuple1$1sTypeph* __dec_obj144;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
struct buffer* __dec_obj145;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct buffer* __dec_obj146;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct buffer* __dec_obj147;
void* __right_value354 = (void*)0;
void* __right_value355 = (void*)0;
struct buffer* __dec_obj148;
struct sBlock* __dec_obj149;
char* __dec_obj152;
void* __right_value356 = (void*)0;
char* __dec_obj153;
struct sType* result_395;
char* __dec_obj154;
char* __dec_obj155;
struct sFun* __result285__;
result_395 = (void*)0;
    __dec_obj106=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj107=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj108=self->mParamTypes;
    self->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj108,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj109=self->mParamNames;
    self->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj109,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj110=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1charph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj110,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->mExternal=external;
    self->mVarArgs=var_args;
    self->mStatic=static_;
    self->mInline=inline_;
    self->mUniq=uniq_;
    __dec_obj111=self->mLambdaType;
    self->mLambdaType=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "01main.c", 167, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
    come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_362=(struct list$1sTypeph*)come_increment_ref_count((param_types)),it_365=list$1sTypeph_begin((o2_saved_362));    !list$1sTypeph_end((o2_saved_362));    it_365=list$1sTypeph_next((o2_saved_362))    ){
        list$1sTypeph_push_back(self->mLambdaType->mParamTypes,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_365)));
    }
    come_call_finalizer3(o2_saved_362,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    for(    o2_saved_389=(struct list$1charph*)come_increment_ref_count((param_names)),it_392=list$1charph_begin((o2_saved_389));    !list$1charph_end((o2_saved_389));    it_392=list$1charph_next((o2_saved_389))    ){
        list$1charph_push_back(self->mLambdaType->mParamNames,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_392)));
    }
    come_call_finalizer3(o2_saved_389,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj144=self->mLambdaType->mResultType;
    self->mLambdaType->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "01main.c", 177, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type)));
    come_call_finalizer3(__dec_obj144,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    self->mLambdaType->mVarArgs=var_args;
    __dec_obj145=self->mSource;
    self->mSource=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 180, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj145,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj146=self->mSourceHead;
    self->mSourceHead=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 181, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj146,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj147=self->mSourceHead2;
    self->mSourceHead2=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 182, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj147,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj148=self->mSourceDefer;
    self->mSourceDefer=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "01main.c", 183, "struct buffer*", (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj148,buffer_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj149=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(block);
    come_call_finalizer3(__dec_obj149,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj152=self->mComeHeader;
    self->mComeHeader=(char*)come_increment_ref_count(come_header);
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj153=self->mDeclareSName;
    self->mDeclareSName=(char*)come_increment_ref_count(__builtin_string(declare_sname));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->no_output_come_code2=info->no_output_come_code2;
    if(    (string_operator_equals(result_type->mClass->mName,"void")||result_type->mClass->mNumber||string_operator_equals(result_type->mClass->mName,"double")||string_operator_equals(result_type->mClass->mName,"float")||result_type->mClass->mStruct)&&result_type->mPointerNum==0) {
        self->mNoResultType=(_Bool)1;
    }
    __dec_obj154=self->mAttribute;
    self->mAttribute=(char*)come_increment_ref_count(attribute);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj155=self->mFunAttribute;
    self->mFunAttribute=(char*)come_increment_ref_count(fun_attribute);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sFun_finalize, 0, 0, 1, 0, (void*)0);
    name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_header = come_decrement_ref_count2(come_header, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    declare_sname = come_decrement_ref_count2(declare_sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute = come_decrement_ref_count2(attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    fun_attribute = come_decrement_ref_count2(fun_attribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_363;
struct sType* __result257__;
struct sType* __result258__;
struct sType* result_364;
struct sType* __result259__;
result_363 = (void*)0;
result_364 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_363,0,sizeof(struct sType*));
        __result257__ = gComeFunResultObject = __result_obj__ = result_363;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    self->it=self->head;
    if(    self->it) {
        __result258__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    memset(&result_364,0,sizeof(struct sType*));
    __result259__ = gComeFunResultObject = __result_obj__ = result_364;
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_366;
struct sType* __result260__;
struct sType* __result261__;
struct sType* result_367;
struct sType* __result262__;
result_366 = (void*)0;
result_367 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_366,0,sizeof(struct sType*));
        __result260__ = gComeFunResultObject = __result_obj__ = result_366;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result261__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    memset(&result_367,0,sizeof(struct sType*));
    __result262__ = gComeFunResultObject = __result_obj__ = result_367;
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value301 = (void*)0;
struct list_item$1sTypeph* litem_368;
struct sType* __dec_obj112;
void* __right_value302 = (void*)0;
struct list_item$1sTypeph* litem_369;
struct sType* __dec_obj113;
void* __right_value303 = (void*)0;
struct list_item$1sTypeph* litem_370;
struct sType* __dec_obj114;
struct list$1sTypeph* __result263__;
    if(    self->len==0) {
        litem_368=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value301=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj112=litem_368->item;
        litem_368->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value302=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj113=litem_369->item;
        litem_369->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value303=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj114=litem_370->item;
        litem_370->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result264__;
void* __right_value304 = (void*)0;
struct sType* result_371;
void* __right_value307 = (void*)0;
struct tuple1$1sTypeph* __dec_obj117;
void* __right_value308 = (void*)0;
struct tuple1$1sTypeph* __dec_obj118;
void* __right_value309 = (void*)0;
struct tuple1$1sTypeph* __dec_obj119;
void* __right_value310 = (void*)0;
struct sType* __dec_obj120;
void* __right_value311 = (void*)0;
char* __dec_obj121;
void* __right_value312 = (void*)0;
char* __dec_obj122;
void* __right_value319 = (void*)0;
struct list$1sTypeph* __dec_obj126;
void* __right_value327 = (void*)0;
struct list$1sNodeph* __dec_obj130;
void* __right_value328 = (void*)0;
struct list$1sTypeph* __dec_obj131;
void* __right_value335 = (void*)0;
struct list$1charph* __dec_obj135;
void* __right_value336 = (void*)0;
struct tuple1$1sTypeph* __dec_obj136;
void* __right_value337 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value338 = (void*)0;
struct tuple1$1sTypeph* __dec_obj138;
void* __right_value339 = (void*)0;
struct sNode* __dec_obj139;
void* __right_value340 = (void*)0;
char* __dec_obj140;
void* __right_value341 = (void*)0;
char* __dec_obj141;
void* __right_value342 = (void*)0;
char* __dec_obj142;
void* __right_value343 = (void*)0;
char* __dec_obj143;
struct sType* __result278__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_371=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_371->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj117=result_371->mNoSolvedGenericsType;
        result_371->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj117,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj118=result_371->mOriginalLoadVarType;
        result_371->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj118,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj119=result_371->mRefferenceOriginalType;
        result_371->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj119,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj120=result_371->mAnyOriginalType;
        result_371->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj121=result_371->mInterfaceName;
        result_371->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj122=result_371->mGenericsName;
        result_371->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj126=result_371->mGenericsTypes;
        result_371->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj126,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj130=result_371->mArrayNum;
        result_371->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj130,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj131=result_371->mParamTypes;
        result_371->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj131,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj135=result_371->mParamNames;
        result_371->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj135,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj136=result_371->mResultType;
        result_371->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj136,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj137=result_371->mAlignas;
        result_371->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj138=result_371->mChannelType;
        result_371->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj138,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_371->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_371->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_371->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_371->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_371->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_371->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_371->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_371->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_371->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_371->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_371->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_371->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_371->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_371->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_371->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_371->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_371->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_371->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_371->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_371->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_371->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_371->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_371->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_371->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_371->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj139=result_371->mSizeNum;
        result_371->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_371->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj140=result_371->mOriginalTypeName;
        result_371->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_371->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_371->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_371->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_371->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_371->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_371->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_371->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj141=result_371->mAsmName;
        result_371->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_371->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_371->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_371->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_371->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_371->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj142=result_371->mTupleName;
        result_371->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj143=result_371->mAttribute;
        result_371->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_371->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_371;
    come_call_finalizer3(result_371,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result265__;
void* __right_value305 = (void*)0;
struct tuple1$1sTypeph* result_372;
void* __right_value306 = (void*)0;
struct sType* __dec_obj115;
struct tuple1$1sTypeph* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_372=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj115=result_372->v1;
        result_372->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_372;
    come_call_finalizer3(result_372,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj116;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj116=self->v1;
            come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result267__;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct list$1sTypeph* result_373;
struct list_item$1sTypeph* it_374;
void* __right_value318 = (void*)0;
struct list$1sTypeph* __result269__;
    if(    self==((void*)0)) {
        __result267__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_373=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        list$1sTypeph_add(result_373,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_374->item)));
        it_374=it_374->next;
    }
    __result269__ = gComeFunResultObject = __result_obj__ = result_373;
    come_call_finalizer3(result_373,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
struct list_item$1sTypeph* litem_375;
struct sType* __dec_obj123;
void* __right_value316 = (void*)0;
struct list_item$1sTypeph* litem_376;
struct sType* __dec_obj124;
void* __right_value317 = (void*)0;
struct list_item$1sTypeph* litem_377;
struct sType* __dec_obj125;
struct list$1sTypeph* __result268__;
    if(    self->len==0) {
        litem_375=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value315=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj123=litem_375->item;
        litem_375->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value316=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj124=litem_376->item;
        litem_376->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value317=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj125=litem_377->item;
        litem_377->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result270__;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct list$1sNodeph* result_378;
struct list_item$1sNodeph* it_379;
void* __right_value326 = (void*)0;
struct list$1sNodeph* __result274__;
    if(    self==((void*)0)) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_378=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_379=self->head;
    while(it_379!=((void*)0)) {
        list$1sNodeph_add(result_378,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_379->item)));
        it_379=it_379->next;
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_378;
    come_call_finalizer3(result_378,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
struct list_item$1sNodeph* litem_380;
struct sNode* __dec_obj127;
void* __right_value323 = (void*)0;
struct list_item$1sNodeph* litem_381;
struct sNode* __dec_obj128;
void* __right_value324 = (void*)0;
struct list_item$1sNodeph* litem_382;
struct sNode* __dec_obj129;
struct list$1sNodeph* __result271__;
    if(    self->len==0) {
        litem_380=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value322=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj127=litem_380->item;
        litem_380->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_380;
        self->head=litem_380;
    }
    else if(    self->len==1) {
        litem_381=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value323=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_381->prev=self->head;
        litem_381->next=((void*)0);
        __dec_obj128=litem_381->item;
        litem_381->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_381;
        self->head->next=litem_381;
    }
    else {
        litem_382=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value324=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_382->prev=self->tail;
        litem_382->next=((void*)0);
        __dec_obj129=litem_382->item;
        litem_382->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_382;
        self->tail=litem_382;
    }
    self->len++;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result272__;
void* __right_value325 = (void*)0;
struct sNode* result_383;
struct sNode* __result273__;
    if(    self==(void*)0) {
        __result272__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result272__;
    }
    result_383=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_383->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_383->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_383->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_383->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_383->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_383->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_383->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_383->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_383->kind=self->kind;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_383;
    if(result_383) { result_383 = come_decrement_ref_count2(result_383, ((struct sNode*)result_383)->finalize, ((struct sNode*)result_383)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result275__;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct list$1charph* result_384;
struct list_item$1charph* it_385;
void* __right_value334 = (void*)0;
struct list$1charph* __result277__;
    if(    self==((void*)0)) {
        __result275__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    result_384=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_385=self->head;
    while(it_385!=((void*)0)) {
        list$1charph_add(result_384,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_385->item)));
        it_385=it_385->next;
    }
    __result277__ = gComeFunResultObject = __result_obj__ = result_384;
    come_call_finalizer3(result_384,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
struct list_item$1charph* litem_386;
char* __dec_obj132;
void* __right_value332 = (void*)0;
struct list_item$1charph* litem_387;
char* __dec_obj133;
void* __right_value333 = (void*)0;
struct list_item$1charph* litem_388;
char* __dec_obj134;
struct list$1charph* __result276__;
    if(    self->len==0) {
        litem_386=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value331=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_386->prev=((void*)0);
        litem_386->next=((void*)0);
        __dec_obj132=litem_386->item;
        litem_386->item=(char*)come_increment_ref_count(item);
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_386;
        self->head=litem_386;
    }
    else if(    self->len==1) {
        litem_387=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value332=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_387->prev=self->head;
        litem_387->next=((void*)0);
        __dec_obj133=litem_387->item;
        litem_387->item=(char*)come_increment_ref_count(item);
        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_387;
        self->head->next=litem_387;
    }
    else {
        litem_388=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value333=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_388->prev=self->tail;
        litem_388->next=((void*)0);
        __dec_obj134=litem_388->item;
        litem_388->item=(char*)come_increment_ref_count(item);
        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_388;
        self->tail=litem_388;
    }
    self->len++;
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_390;
char* __result279__;
char* __result280__;
char* result_391;
char* __result281__;
result_390 = (void*)0;
result_391 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_390,0,sizeof(char*));
        __result279__ = gComeFunResultObject = __result_obj__ = result_390;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    self->it=self->head;
    if(    self->it) {
        __result280__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result280__;
    }
    memset(&result_391,0,sizeof(char*));
    __result281__ = gComeFunResultObject = __result_obj__ = result_391;
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_393;
char* __result282__;
char* __result283__;
char* result_394;
char* __result284__;
result_393 = (void*)0;
result_394 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_393,0,sizeof(char*));
        __result282__ = gComeFunResultObject = __result_obj__ = result_393;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result283__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    memset(&result_394,0,sizeof(char*));
    __result284__ = gComeFunResultObject = __result_obj__ = result_394;
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj150;
struct sVarTable* __dec_obj151;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj150=self->mNodes;
            come_call_finalizer3(__dec_obj150,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj151=self->mVarTable;
            come_call_finalizer3(__dec_obj151,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj156;
struct sType* __dec_obj157;
struct list$1sTypeph* __dec_obj158;
struct list$1charph* __dec_obj159;
struct list$1charph* __dec_obj160;
struct sType* __dec_obj161;
struct sBlock* __dec_obj162;
struct buffer* __dec_obj163;
struct buffer* __dec_obj164;
struct buffer* __dec_obj165;
struct buffer* __dec_obj166;
char* __dec_obj167;
char* __dec_obj168;
char* __dec_obj169;
char* __dec_obj170;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj156=self->mName;
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj157=self->mResultType;
            come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj158=self->mParamTypes;
            come_call_finalizer3(__dec_obj158,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj159=self->mParamNames;
            come_call_finalizer3(__dec_obj159,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj160=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj160,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj161=self->mLambdaType;
            come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj162=self->mBlock;
            come_call_finalizer3(__dec_obj162,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj163=self->mSource;
            come_call_finalizer3(__dec_obj163,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj164=self->mSourceHead;
            come_call_finalizer3(__dec_obj164,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj165=self->mSourceHead2;
            come_call_finalizer3(__dec_obj165,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj166=self->mSourceDefer;
            come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj167=self->mComeHeader;
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj168=self->mDeclareSName;
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj169=self->mAttribute;
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        if(        self->mFunAttribute==gComeFunResultObject) {
            __dec_obj170=self->mFunAttribute;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNodeBase* sNodeBase_initialize(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
char* __dec_obj171;
struct sNodeBase* __result286__;
    self->sline=info->sline;
    __dec_obj171=self->sname;
    self->sname=(char*)come_increment_ref_count(__builtin_string(info->sname));
    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->sline_real=info->sline_real;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNodeBase_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj172;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj172=self->sname;
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info){
    return self->sline;
}

int sNodeBase_sline_real(struct sNodeBase* self, struct sInfo* info){
    return self->sline_real;
}

_Bool sNodeBase_terminated(struct sNodeBase* self){
    return (_Bool)0;
}

char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result287__;
    __result287__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string(self->sname)));
    __right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

