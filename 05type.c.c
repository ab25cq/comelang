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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
    struct list$1charph* v2;
    struct list$1charph* v3;
    _Bool v4;
};

struct tuple3$3sTypepcharphbool
{
    struct sType* v1;
    char* v2;
    _Bool v3;
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
char* skip_block(struct sInfo* info);
int expected_next_character(char c, struct sInfo* info);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
_Bool create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static void sType_finalize(struct sType* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static _Bool list$1charph_contained(struct list$1charph* self, char* item);
static char* list$1charph_begin(struct list$1charph* self);
static _Bool list$1charph_end(struct list$1charph* self);
static char* list$1charph_next(struct list$1charph* self);
void skip_paren(struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
void skip_spaces_and_lf2(struct sInfo* info);
void parse_sharp_v5(struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodeph_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3);
struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
static int list$1charph_length(struct list$1charph* self);
static char* list$1charphp_operator_load_element(struct list$1charph* self, int position);
static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1);
static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3);
static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self);
static void CVALUE_finalize(struct CVALUE* self);
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
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value249 = (void*)0;
struct sClass* klass_280;
void* __right_value250 = (void*)0;
struct sType* type_298;
void* __right_value251 = (void*)0;
struct sClass* generics_class_302;
void* __right_value252 = (void*)0;
_Bool generics_type_name_303;
void* __right_value253 = (void*)0;
_Bool mgenerics_type_name_309;
    klass_280=((struct sClass*)(__right_value249=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value249,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_298=((struct sType*)(__right_value250=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_302=((struct sClass*)(__right_value251=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer3(__right_value251,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_303=list$1charph_contained(info->generics_type_names,((char*)(__right_value252=__builtin_string(buf))));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_309=list$1charph_contained(info->method_generics_type_names,((char*)(__right_value253=__builtin_string(buf))));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_298&&type_298->mTypedef)||(klass_280&&klass_280->mNumber)||(klass_280&&klass_280->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_302||generics_type_name_303||mgenerics_type_name_309||klass_280||type_298||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_281;
unsigned int hash_282;
unsigned int it_283;
struct sClass* __result219__;
struct sClass* __result220__;
struct sClass* __result221__;
struct sClass* __result222__;
default_value_281 = (void*)0;
    memset(&default_value_281,0,sizeof(struct sClass*));
    hash_282=charp_get_hash_key(((char*)key))%self->size;
    it_283=hash_282;
    while((_Bool)1) {
        if(        self->item_existance[it_283]) {
            if(            charp_equals(self->keys[it_283],key)) {
                __result219__ = gComeFunResultObject = __result_obj__ = self->items[it_283];
                come_call_finalizer3(default_value_281,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result219__;
            }
            it_283++;
            if(            it_283>=self->size) {
                it_283=0;
            }
            else if(            it_283==hash_282) {
                __result220__ = gComeFunResultObject = __result_obj__ = default_value_281;
                come_call_finalizer3(default_value_281,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
        }
        else {
            __result221__ = gComeFunResultObject = __result_obj__ = default_value_281;
            come_call_finalizer3(default_value_281,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result221__;
        }
    }
    __result222__ = gComeFunResultObject = __result_obj__ = default_value_281;
    come_call_finalizer3(default_value_281,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj31;
struct list$1tuple2$2charphsTypephph* __dec_obj32;
char* __dec_obj56;
char* __dec_obj57;
char* __dec_obj58;
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
            come_call_finalizer3(__dec_obj32,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj56=self->mDeclareSName;
            __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj57=self->mParentClassName;
            __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj58=self->mAttribute;
            __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_284;
struct list_item$1tuple2$2charphsTypephph* prev_it_285;
    it_284=self->head;
    while(it_284!=((void*)0)) {
        prev_it_285=it_284;
        it_284=it_284->next;
        come_call_finalizer3(prev_it_285,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj33;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj33=self->item;
            come_call_finalizer3(__dec_obj33,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj34;
struct sType* __dec_obj35;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj34=self->v1;
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj35=self->v2;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_296;
struct list_item$1tuple2$2charphsTypephph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_299;
unsigned int hash_300;
unsigned int it_301;
struct sType* __result223__;
struct sType* __result224__;
struct sType* __result225__;
struct sType* __result226__;
default_value_299 = (void*)0;
    memset(&default_value_299,0,sizeof(struct sType*));
    hash_300=charp_get_hash_key(((char*)key))%self->size;
    it_301=hash_300;
    while((_Bool)1) {
        if(        self->item_existance[it_301]) {
            if(            charp_equals(self->keys[it_301],key)) {
                __result223__ = gComeFunResultObject = __result_obj__ = self->items[it_301];
                come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result223__;
            }
            it_301++;
            if(            it_301>=self->size) {
                it_301=0;
            }
            else if(            it_301==hash_300) {
                __result224__ = gComeFunResultObject = __result_obj__ = default_value_299;
                come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
        }
        else {
            __result225__ = gComeFunResultObject = __result_obj__ = default_value_299;
            come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result225__;
        }
    }
    __result226__ = gComeFunResultObject = __result_obj__ = default_value_299;
    come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static _Bool list$1charph_contained(struct list$1charph* self, char* item){
char* it_306;
    for(    it_306=list$1charph_begin(self);    !list$1charph_end(self);    it_306=list$1charph_next(self)    ){
        if(        charp_equals(it_306,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charph_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_304;
char* __result227__;
char* __result228__;
char* result_305;
char* __result229__;
result_304 = (void*)0;
result_305 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_304,0,sizeof(char*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_304;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->head;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_305,0,sizeof(char*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_305;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static _Bool list$1charph_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charph_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_307;
char* __result230__;
char* __result231__;
char* result_308;
char* __result232__;
result_307 = (void*)0;
result_308 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_307,0,sizeof(char*));
        __result230__ = gComeFunResultObject = __result_obj__ = result_307;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result231__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    memset(&result_308,0,sizeof(char*));
    __result232__ = gComeFunResultObject = __result_obj__ = result_308;
    gComeFunResultObject = (void*)0;
    return __result232__;
}

void skip_paren(struct sInfo* info){
int nest_310;
    nest_310=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_310++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_310--;
            if(            nest_310==0) {
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
char c_311;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_311=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_311==59||c_311==32||c_311==9||c_311==10||c_311==10||c_311==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* buf_312;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
void* __right_value257 = (void*)0;
char* __result233__;
void* __right_value258 = (void*)0;
char* result_313;
void* __right_value259 = (void*)0;
_Bool _if_conditional2;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __result238__;
char* __result239__;
    buf_312=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 95, "struct buffer*", (void*)0, (void*)0))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_312,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value256=buffer_to_string(buf_312))))==0)),    (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result233__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("")));
        come_call_finalizer3(buf_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_313=(char*)come_increment_ref_count(buffer_to_string(buf_312));
    if(    (_if_conditional2=(info->module_params&&((char*)(__right_value259=map$2charphcharphp_operator_load_element(info->module_params,result_313))))),    (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional2) {
        __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(((char*)come_null_check(((char*)(__right_value260=map$2charphcharphp_operator_load_element(info->module_params,result_313))), "05type.c", 113, 0)))));
        come_call_finalizer3(buf_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_313 = come_decrement_ref_count2(result_313, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result238__;
    }
    __result239__ = gComeFunResultObject = __result_obj__ = result_313;
    come_call_finalizer3(buf_312,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_313 = come_decrement_ref_count2(result_313, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_314;
unsigned int hash_315;
unsigned int it_316;
char* __result234__;
char* __result235__;
char* __result236__;
char* __result237__;
default_value_314 = (void*)0;
    memset(&default_value_314,0,sizeof(char*));
    hash_315=charp_get_hash_key(((char*)key))%self->size;
    it_316=hash_315;
    while((_Bool)1) {
        if(        self->item_existance[it_316]) {
            if(            charp_equals(self->keys[it_316],key)) {
                __result234__ = gComeFunResultObject = __result_obj__ = self->items[it_316];
                default_value_314 = come_decrement_ref_count2(default_value_314, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result234__;
            }
            it_316++;
            if(            it_316>=self->size) {
                it_316=0;
            }
            else if(            it_316==hash_315) {
                __result235__ = gComeFunResultObject = __result_obj__ = default_value_314;
                default_value_314 = come_decrement_ref_count2(default_value_314, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
        }
        else {
            __result236__ = gComeFunResultObject = __result_obj__ = default_value_314;
            default_value_314 = come_decrement_ref_count2(default_value_314, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result236__;
        }
    }
    __result237__ = gComeFunResultObject = __result_obj__ = default_value_314;
    default_value_314 = come_decrement_ref_count2(default_value_314, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result237__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_317;
int sline_318;
char* buf_319;
void* __right_value262 = (void*)0;
char* __dec_obj59;
void* __right_value263 = (void*)0;
char* __dec_obj60;
char* __result240__;
buf_319 = (void*)0;
    p_317=info->p;
    sline_318=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj59=buf_319;
        buf_319=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj60=buf_319;
        buf_319=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_317;
    info->sline=sline_318;
    __result240__ = gComeFunResultObject = __result_obj__ = buf_319;
    buf_319 = come_decrement_ref_count2(buf_319, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
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
int line_320;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* fname_321;
void* __right_value266 = (void*)0;
char* __dec_obj61;
int nest_322;
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
                line_320=0;
                fname_321=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 194, "struct buffer*", (void*)0, (void*)0))));
                while(xisdigit(*info->p)) {
                    line_320=line_320*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_321,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_320;
                __dec_obj61=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_321));
                __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_321,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            nest_322=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_322++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_322--;
                    if(                    nest_322==0) {
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
struct list$1sTypeph* o2_saved_323;
struct sType* it_326;
_Bool __result247__;
    for(    o2_saved_323=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_326=list$1sTypeph_begin((o2_saved_323));    !list$1sTypeph_end((o2_saved_323));    it_326=list$1sTypeph_next((o2_saved_323))    ){
        if(        is_contained_generics_class(it_326,info)) {
            __result247__ = (_Bool)1;
            come_call_finalizer3(o2_saved_323,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result247__;
        }
    }
    come_call_finalizer3(o2_saved_323,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_324;
struct sType* __result241__;
struct sType* __result242__;
struct sType* result_325;
struct sType* __result243__;
result_324 = (void*)0;
result_325 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_324,0,sizeof(struct sType*));
        __result241__ = gComeFunResultObject = __result_obj__ = result_324;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    self->it=self->head;
    if(    self->it) {
        __result242__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    memset(&result_325,0,sizeof(struct sType*));
    __result243__ = gComeFunResultObject = __result_obj__ = result_325;
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_327;
struct sType* __result244__;
struct sType* __result245__;
struct sType* result_328;
struct sType* __result246__;
result_327 = (void*)0;
result_328 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_327,0,sizeof(struct sType*));
        __result244__ = gComeFunResultObject = __result_obj__ = result_327;
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result245__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    memset(&result_328,0,sizeof(struct sType*));
    __result246__ = gComeFunResultObject = __result_obj__ = result_328;
    gComeFunResultObject = (void*)0;
    return __result246__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* param_types_329;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1charph* param_names_330;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* param_default_parametors_331;
_Bool var_args_332;
void* __right_value276 = (void*)0;
void* __right_value313 = (void*)0;
struct sType* type__336;
void* __right_value314 = (void*)0;
void* __right_value315 = (void*)0;
_Bool void_param_352;
char* p_353;
int sline_354;
void* __right_value316 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_355=0;
char* param_name_356=0;
_Bool err_357=0;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result266__;
void* __right_value319 = (void*)0;
struct sType* param_type2_358;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
char* p_362;
_Bool no_comma_363;
void* __right_value325 = (void*)0;
struct sNode* node_364;
char* p2_365;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result269__;
    param_types_329=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 323, "struct list$1sTypeph*", (void*)0, (void*)0))));
    param_names_330=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 324, "struct list$1charph*", (void*)0, (void*)0))));
    param_default_parametors_331=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 325, "struct list$1charph*", (void*)0, (void*)0))));
    var_args_332=(_Bool)0;
    if(    in_constructor_) {
        list$1charph_add(param_names_330,(char*)come_increment_ref_count(xsprintf("self")));
        type__336=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__336->mHeap=(_Bool)1;
        list$1sTypeph_add(param_types_329,(struct sType*)come_increment_ref_count(type__336));
        list$1charph_add(param_default_parametors_331,((void*)0));
        come_call_finalizer3(type__336,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charph_add(param_names_330,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sTypeph_add(param_types_329,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1charph_add(param_default_parametors_331,((void*)0));
    }
    expected_next_character(40,info);
    void_param_352=(_Bool)0;
    {
        p_353=info->p;
        sline_354=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_352=(_Bool)1;
            }
        }
        info->p=p_353;
        info->sline=sline_354;
    }
    if(    void_param_352) {
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
            param_type_355=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_356=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_357=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value316,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_357) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result266__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value318=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 387, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool", (void*)0, (void*)0)),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_356 = come_decrement_ref_count2(param_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_329,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_330,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value318,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
            param_type2_358=(struct sType*)come_increment_ref_count(solve_generics(param_type_355,info->generics_type,info));
            param_type2_358->mFunctionParam=(_Bool)1;
            list$1sTypeph_push_back(param_types_329,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_358)));
            list$1charph_push_back(param_names_330,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_356)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_362=info->p;
                no_comma_363=info->no_comma;
                info->no_comma=(_Bool)1;
                node_364=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_363;
                p2_365=info->p;
                char buf_366[p2_365-p_362+1];
                memset(&buf_366, 0, sizeof(char)                *(p2_365-p_362+1)                );
                memcpy(buf_366,p_362,p2_365-p_362);
                buf_366[p2_365-p_362]=0;
                list$1charph_push_back(param_default_parametors_331,(char*)come_increment_ref_count(__builtin_string(buf_366)));
                if(node_364) { node_364 = come_decrement_ref_count2(node_364, ((struct sNode*)node_364)->finalize, ((struct sNode*)node_364)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charph_push_back(param_default_parametors_331,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_332=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_356 = come_decrement_ref_count2(param_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_356 = come_decrement_ref_count2(param_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_355,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_356 = come_decrement_ref_count2(param_name_356, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result269__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value328=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 447, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool", (void*)0, (void*)0)),(struct list$1sTypeph*)come_increment_ref_count(param_types_329),(struct list$1charph*)come_increment_ref_count(param_names_330),(struct list$1charph*)come_increment_ref_count(param_default_parametors_331),var_args_332)));
    come_call_finalizer3(param_types_329,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_330,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_331,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value328,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result248__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result248__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1charph* litem_333;
char* __dec_obj62;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_334;
char* __dec_obj63;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_335;
char* __dec_obj64;
struct list$1charph* __result249__;
    if(    self->len==0) {
        litem_333=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value273=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1234, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_333->prev=((void*)0);
        litem_333->next=((void*)0);
        __dec_obj62=litem_333->item;
        litem_333->item=(char*)come_increment_ref_count(item);
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_333;
        self->head=litem_333;
    }
    else if(    self->len==1) {
        litem_334=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1244, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_334->prev=self->head;
        litem_334->next=((void*)0);
        __dec_obj63=litem_334->item;
        litem_334->item=(char*)come_increment_ref_count(item);
        __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_334;
        self->head->next=litem_334;
    }
    else {
        litem_335=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1254, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_335->prev=self->tail;
        litem_335->next=((void*)0);
        __dec_obj64=litem_335->item;
        litem_335->item=(char*)come_increment_ref_count(item);
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_335;
        self->tail=litem_335;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result250__;
void* __right_value277 = (void*)0;
struct sType* result_337;
void* __right_value280 = (void*)0;
struct tuple1$1sTypeph* __dec_obj67;
void* __right_value281 = (void*)0;
struct tuple1$1sTypeph* __dec_obj68;
void* __right_value282 = (void*)0;
struct tuple1$1sTypeph* __dec_obj69;
void* __right_value283 = (void*)0;
char* __dec_obj70;
void* __right_value284 = (void*)0;
char* __dec_obj71;
void* __right_value291 = (void*)0;
struct list$1sTypeph* __dec_obj75;
void* __right_value299 = (void*)0;
struct list$1sNodeph* __dec_obj79;
void* __right_value300 = (void*)0;
struct list$1sTypeph* __dec_obj80;
void* __right_value304 = (void*)0;
struct list$1charph* __dec_obj81;
void* __right_value305 = (void*)0;
struct tuple1$1sTypeph* __dec_obj82;
void* __right_value306 = (void*)0;
struct sNode* __dec_obj83;
void* __right_value307 = (void*)0;
struct tuple1$1sTypeph* __dec_obj84;
void* __right_value308 = (void*)0;
struct sNode* __dec_obj85;
void* __right_value309 = (void*)0;
char* __dec_obj86;
void* __right_value310 = (void*)0;
char* __dec_obj87;
void* __right_value311 = (void*)0;
char* __dec_obj88;
void* __right_value312 = (void*)0;
char* __dec_obj89;
struct sType* __result264__;
    if(    self==(void*)0) {
        __result250__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_337=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_337->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj67=result_337->mNoSolvedGenericsType;
        result_337->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj67,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj68=result_337->mOriginalLoadVarType;
        result_337->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj68,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mRefferenceOriginalType!=((void*)0)) {
        __dec_obj69=result_337->mRefferenceOriginalType;
        result_337->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mRefferenceOriginalType));
        come_call_finalizer3(__dec_obj69,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj70=result_337->mInterfaceName;
        result_337->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj71=result_337->mGenericsName;
        result_337->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj75=result_337->mGenericsTypes;
        result_337->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj79=result_337->mArrayNum;
        result_337->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj79,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_337->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj80=result_337->mParamTypes;
        result_337->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj80,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj81=result_337->mParamNames;
        result_337->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj82=result_337->mResultType;
        result_337->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mResultType));
        come_call_finalizer3(__dec_obj82,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_337->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj83=result_337->mAlignas;
        result_337->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj84=result_337->mChannelType;
        result_337->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(come_call_cloner(tuple1$1sTypephp_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj84,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_337->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_337->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_337->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_337->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_337->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_337->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_337->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_337->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_337->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_337->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_337->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_337->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_337->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_337->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_337->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_337->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_337->mNoRefference=self->mNoRefference;
    }
    if(    self!=((void*)0)) {
        result_337->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_337->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_337->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_337->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_337->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_337->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_337->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_337->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_337->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj85=result_337->mSizeNum;
        result_337->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_337->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj86=result_337->mOriginalTypeName;
        result_337->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_337->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_337->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_337->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_337->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_337->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_337->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_337->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_337->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj87=result_337->mAsmName;
        result_337->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_337->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_337->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_337->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_337->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_337->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_337->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj88=result_337->mTupleName;
        result_337->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj89=result_337->mAttribute;
        result_337->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_337->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    __result264__ = gComeFunResultObject = __result_obj__ = result_337;
    come_call_finalizer3(result_337,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result251__;
void* __right_value278 = (void*)0;
struct tuple1$1sTypeph* result_338;
void* __right_value279 = (void*)0;
struct sType* __dec_obj65;
struct tuple1$1sTypeph* __result252__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_338=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj65=result_338->v1;
        result_338->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj65,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result252__ = gComeFunResultObject = __result_obj__ = result_338;
    come_call_finalizer3(result_338,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj66;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj66=self->v1;
            come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result253__;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sTypeph* result_339;
struct list_item$1sTypeph* it_340;
void* __right_value290 = (void*)0;
struct list$1sTypeph* __result255__;
    if(    self==((void*)0)) {
        __result253__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_339=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1220, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_340=self->head;
    while(it_340!=((void*)0)) {
        list$1sTypeph_add(result_339,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_340->item)));
        it_340=it_340->next;
    }
    __result255__ = gComeFunResultObject = __result_obj__ = result_339;
    come_call_finalizer3(result_339,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value287 = (void*)0;
struct list_item$1sTypeph* litem_341;
struct sType* __dec_obj72;
void* __right_value288 = (void*)0;
struct list_item$1sTypeph* litem_342;
struct sType* __dec_obj73;
void* __right_value289 = (void*)0;
struct list_item$1sTypeph* litem_343;
struct sType* __dec_obj74;
struct list$1sTypeph* __result254__;
    if(    self->len==0) {
        litem_341=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value287=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1234, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_341->prev=((void*)0);
        litem_341->next=((void*)0);
        __dec_obj72=litem_341->item;
        litem_341->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_341;
        self->head=litem_341;
    }
    else if(    self->len==1) {
        litem_342=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value288=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1244, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_342->prev=self->head;
        litem_342->next=((void*)0);
        __dec_obj73=litem_342->item;
        litem_342->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_342;
        self->head->next=litem_342;
    }
    else {
        litem_343=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value289=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1254, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_343->prev=self->tail;
        litem_343->next=((void*)0);
        __dec_obj74=litem_343->item;
        litem_343->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_343;
        self->tail=litem_343;
    }
    self->len++;
    __result254__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result256__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sNodeph* result_344;
struct list_item$1sNodeph* it_345;
void* __right_value298 = (void*)0;
struct list$1sNodeph* __result261__;
    if(    self==((void*)0)) {
        __result256__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    result_344=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1220, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_345=self->head;
    while(it_345!=((void*)0)) {
        list$1sNodeph_add(result_344,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_345->item)));
        it_345=it_345->next;
    }
    __result261__ = gComeFunResultObject = __result_obj__ = result_344;
    come_call_finalizer3(result_344,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result257__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj76;
void* __right_value295 = (void*)0;
struct list_item$1sNodeph* litem_347;
struct sNode* __dec_obj77;
void* __right_value296 = (void*)0;
struct list_item$1sNodeph* litem_348;
struct sNode* __dec_obj78;
struct list$1sNodeph* __result258__;
    if(    self->len==0) {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1234, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_346->prev=((void*)0);
        litem_346->next=((void*)0);
        __dec_obj76=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_346;
        self->head=litem_346;
    }
    else if(    self->len==1) {
        litem_347=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value295=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1244, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_347->prev=self->head;
        litem_347->next=((void*)0);
        __dec_obj77=litem_347->item;
        litem_347->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_347;
        self->head->next=litem_347;
    }
    else {
        litem_348=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value296=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1254, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_348->prev=self->tail;
        litem_348->next=((void*)0);
        __dec_obj78=litem_348->item;
        litem_348->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_348;
        self->tail=litem_348;
    }
    self->len++;
    __result258__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result259__;
void* __right_value297 = (void*)0;
struct sNode* result_349;
struct sNode* __result260__;
    if(    self==(void*)0) {
        __result259__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    result_349=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_349->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_349->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_349->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_349->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_349->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_349->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_349->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_349->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_349->kind=self->kind;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_349;
    if(result_349) { result_349 = come_decrement_ref_count2(result_349, ((struct sNode*)result_349)->finalize, ((struct sNode*)result_349)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result262__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* result_350;
struct list_item$1charph* it_351;
void* __right_value303 = (void*)0;
struct list$1charph* __result263__;
    if(    self==((void*)0)) {
        __result262__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_350=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1220, "struct list$1charph*", (void*)0, (void*)0))));
    it_351=self->head;
    while(it_351!=((void*)0)) {
        list$1charph_add(result_350,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_351->item)));
        it_351=it_351->next;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_350;
    come_call_finalizer3(result_350,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj90;
char* __dec_obj91;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result265__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value320 = (void*)0;
struct list_item$1sTypeph* litem_359;
struct sType* __dec_obj92;
void* __right_value321 = (void*)0;
struct list_item$1sTypeph* litem_360;
struct sType* __dec_obj93;
void* __right_value322 = (void*)0;
struct list_item$1sTypeph* litem_361;
struct sType* __dec_obj94;
struct list$1sTypeph* __result267__;
    if(    self->len==0) {
        litem_359=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value320=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1304, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_359->prev=((void*)0);
        litem_359->next=((void*)0);
        __dec_obj92=litem_359->item;
        litem_359->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj92,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_359;
        self->head=litem_359;
    }
    else if(    self->len==1) {
        litem_360=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value321=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1314, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_360->prev=self->head;
        litem_360->next=((void*)0);
        __dec_obj93=litem_360->item;
        litem_360->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_360;
        self->head->next=litem_360;
    }
    else {
        litem_361=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value322=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1324, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_361->prev=self->tail;
        litem_361->next=((void*)0);
        __dec_obj94=litem_361->item;
        litem_361->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj94,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_361;
        self->tail=litem_361;
    }
    self->len++;
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result268__;
    __dec_obj95=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj95,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj96=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj98;
struct list$1charph* __dec_obj99;
struct list$1charph* __dec_obj100;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj98=self->v1;
            come_call_finalizer3(__dec_obj98,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value329 = (void*)0;
struct sType* right_type2_367;
struct sType* left_no_solved_generics_type_368;
struct sType* right_no_solved_generics_type_369;
struct sClass* left_class_370;
struct sClass* right_class_371;
_Bool parent_class_372;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
char* left_type_name_373;
void* __right_value332 = (void*)0;
char* __dec_obj101;
void* __right_value333 = (void*)0;
struct sType* __dec_obj102;
void* __right_value334 = (void*)0;
struct sType* __dec_obj103;
void* __right_value335 = (void*)0;
char* left_type_name_374;
void* __right_value336 = (void*)0;
char* __dec_obj104;
void* __right_value337 = (void*)0;
struct sType* __dec_obj105;
void* __right_value338 = (void*)0;
struct sType* __dec_obj106;
_Bool __result270__;
int i_375;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
char* left_type_name_379;
void* __right_value342 = (void*)0;
char* __dec_obj107;
void* __right_value343 = (void*)0;
struct sType* __dec_obj108;
void* __right_value344 = (void*)0;
struct sType* __dec_obj109;
void* __right_value345 = (void*)0;
char* left_type_name_380;
void* __right_value346 = (void*)0;
char* __dec_obj110;
void* __right_value347 = (void*)0;
struct sType* __dec_obj111;
void* __right_value348 = (void*)0;
struct sType* __dec_obj112;
void* __right_value349 = (void*)0;
char* __dec_obj113;
void* __right_value350 = (void*)0;
struct sType* __dec_obj114;
void* __right_value351 = (void*)0;
struct sType* __dec_obj115;
void* __right_value352 = (void*)0;
char* left_type_name_381;
void* __right_value353 = (void*)0;
char* __dec_obj116;
void* __right_value354 = (void*)0;
struct sType* __dec_obj117;
void* __right_value355 = (void*)0;
struct sType* __dec_obj118;
void* __right_value356 = (void*)0;
char* left_type_name_382;
void* __right_value357 = (void*)0;
char* __dec_obj119;
void* __right_value358 = (void*)0;
struct sType* __dec_obj120;
void* __right_value359 = (void*)0;
struct sType* __dec_obj121;
_Bool __result273__;
_Bool __result274__;
_Bool __result275__;
_Bool __result276__;
_Bool __result277__;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct buffer* buf2_383;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
char* __dec_obj122;
void* __right_value368 = (void*)0;
struct sType* __dec_obj123;
void* __right_value369 = (void*)0;
struct sType* __dec_obj124;
_Bool __result278__;
_Bool __result279__;
_Bool __result280__;
_Bool __result281__;
void* __right_value370 = (void*)0;
char* tmp_384;
void* __right_value371 = (void*)0;
char* __dec_obj125;
void* __right_value372 = (void*)0;
struct sType* __dec_obj126;
void* __right_value373 = (void*)0;
struct sType* __dec_obj127;
_Bool __result282__;
_Bool __result283__;
void* __right_value374 = (void*)0;
char* tmp_385;
void* __right_value375 = (void*)0;
char* __dec_obj128;
void* __right_value376 = (void*)0;
struct sType* __dec_obj129;
_Bool __result284__;
int i_386;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
_Bool __result285__;
    right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_368=((void*)0);
    if(    left_type->mNoSolvedGenericsType) {
        left_no_solved_generics_type_368=left_type->mNoSolvedGenericsType->v1;
    }
    right_no_solved_generics_type_369=((void*)0);
    if(    right_type2_367->mNoSolvedGenericsType) {
        right_no_solved_generics_type_369=right_type2_367->mNoSolvedGenericsType->v1;
    }
    left_class_370=left_type->mClass;
    right_class_371=right_type2_367->mClass;
    parent_class_372=(_Bool)0;
    if(    string_operator_not_equals(left_class_370->mName,right_class_371->mName)) {
        while(left_class_370&&right_class_371) {
            if(            string_operator_equals(left_class_370->mName,right_class_371->mName)) {
                parent_class_372=(_Bool)1;
            }
            if(            right_class_371->mParentClassName) {
                right_class_371=((struct sClass*)(__right_value330=map$2charphsClassphp_operator_load_element(info->classes,right_class_371->mParentClassName)));
                come_call_finalizer3(__right_value330,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_371=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
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
                    printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_368&&right_no_solved_generics_type_369) {
        if(        right_type->mPointerNum==0&&left_type->mPointerNum>0) {
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes),left_no_solved_generics_type_368->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes),right_no_solved_generics_type_369->mClass->mName,right_type2_367->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_373=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj101=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_373,come_value->c_value));
                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj102=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj102,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj103=right_type2_367;
                right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_373 = come_decrement_ref_count2(left_type_name_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes),left_no_solved_generics_type_368->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes),right_no_solved_generics_type_369->mClass->mName,right_type2_367->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_374=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj104=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_374,come_value->c_value));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj105=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj105,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj106=right_type2_367;
                right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_374 = come_decrement_ref_count2(left_type_name_374, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_367->mClass->mName)&&left_type->mPointerNum==right_type2_367->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_367->mClass->mName)&&(left_type->mPointerNum!=right_type2_367->mPointerNum||left_type->mHeap!=right_type2_367->mHeap)) {
            err_msg(info,"poinetr num err");
            puts(msg);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes),left_no_solved_generics_type_368->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes),right_no_solved_generics_type_369->mClass->mName,right_type2_367->mClass->mName);
            exit(2);
        }
        else if(        list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_368->mClass->mName,"void")&&left_no_solved_generics_type_368->mPointerNum>0&&right_no_solved_generics_type_369->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_369->mClass->mName,"void")&&right_no_solved_generics_type_369->mPointerNum>0&&left_no_solved_generics_type_368->mPointerNum>0)) {
            }
            else {
                if(                list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes)!=list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        puts(msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes),left_no_solved_generics_type_368->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes),right_no_solved_generics_type_369->mClass->mName,right_type2_367->mClass->mName);
                        exit(2);
                    }
                    __result270__ = (_Bool)0;
                    come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result270__;
                }
                for(                i_375=0;                i_375<list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes);                i_375++                ){
                    check_assign_type(msg,((struct sType*)come_null_check(((struct sType*)(__right_value339=list$1sTypephp_operator_load_element(left_no_solved_generics_type_368->mGenericsTypes,i_375))), "05type.c", 581, 1)),((struct sType*)come_null_check(((struct sType*)(__right_value340=list$1sTypephp_operator_load_element(right_no_solved_generics_type_369->mGenericsTypes,i_375))), "05type.c", 581, 2)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    come_call_finalizer3(__right_value339,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value340,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_368,right_no_solved_generics_type_369,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
            }
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes),left_no_solved_generics_type_368->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes),right_no_solved_generics_type_369->mClass->mName,right_type2_367->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_379=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj107=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_379,come_value->c_value));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj108=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj108,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj109=right_type2_367;
            right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_379 = come_decrement_ref_count2(left_type_name_379, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(left_no_solved_generics_type_368->mGenericsTypes),left_no_solved_generics_type_368->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypeph_length(right_no_solved_generics_type_369->mGenericsTypes),right_no_solved_generics_type_369->mClass->mName,right_type2_367->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_380=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj110=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_380,come_value->c_value));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj111=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj111,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj112=right_type2_367;
            right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_380 = come_decrement_ref_count2(left_type_name_380, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_367->mHeap&&left_type->mPointerNum>0&&right_type2_367->mPointerNum>0&&string_operator_not_equals(right_type2_367->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum,right_type2_367->mHeap);
        exit(2);
    }
    else if(    parent_class_372&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj113=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj114=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj115=right_type2_367;
        right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_381=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj116=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_381,come_value->c_value));
            __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj117=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj118=right_type2_367;
            right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_381 = come_decrement_ref_count2(left_type_name_381, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_382=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj119=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_382,come_value->c_value));
            __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj120=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj120,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj121=right_type2_367;
            right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_382 = come_decrement_ref_count2(left_type_name_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_367->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_367->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_367->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_367->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                        exit(2);
                    }
                    __result273__ = (_Bool)0;
                    come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result273__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                    exit(2);
                }
                __result274__ = (_Bool)0;
                come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result274__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_367->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result275__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result275__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_367->mPointerNum==0&&string_operator_equals(right_type2_367->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_367->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result276__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result276__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_367->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_367->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_367->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"void")&&right_type2_367->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result277__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result277__;
        }
        else {
            buf2_383=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 741, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(buf2_383,((char*)(__right_value366=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value362=string_to_string(come_value->c_value))),((char*)(__right_value363=string_to_string(info->sname))),((char*)(__right_value364=int_to_string(info->sline))),((char*)(__right_value365=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value362 = come_decrement_ref_count2(__right_value362, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value364 = come_decrement_ref_count2(__right_value364, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj122=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_383));
            __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj123=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj124=right_type2_367;
            right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_383,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_367->mClass->mName,"char")&&right_type2_367->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_367->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_367->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result278__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result278__;
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"void")&&right_type2_367->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result279__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result279__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_367->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_367->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result280__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result280__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_367->mClass->mName,"void")&&right_type2_367->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_367->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_367->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"void")&&right_type2_367->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_367->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result281__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result281__;
        }
        else if(        right_type2_367->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_384=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj125=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_384));
                __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj126=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj127=right_type2_367;
                right_type2_367=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_384 = come_decrement_ref_count2(tmp_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_367->mPointerNum>0||(right_type2_367->mPointerNum==0&&right_type2_367->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_367->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_367->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_367->mClass->mName)) {
                if(                print_err_msg) {
                    puts(msg);
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                    exit(2);
                }
                __result282__ = (_Bool)0;
                come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result282__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_367->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
            }
            else if(            list$1sNodeph_length(right_type2_367->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodeph_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum,list$1sNodeph_length(right_type2_367->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_367->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_367->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_367->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_367->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_367->mPointerNum==0&&string_operator_equals(right_type2_367->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            __result283__ = (_Bool)0;
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result283__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_367->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_367->mPointerNum==0) {
            tmp_385=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj128=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_385));
            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj129=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj129,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result284__ = (_Bool)1;
            tmp_385 = come_decrement_ref_count2(tmp_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result284__;
            tmp_385 = come_decrement_ref_count2(tmp_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1sTypeph_length(left_type->mGenericsTypes)>0) {
            if(            list$1sTypeph_length(left_type->mGenericsTypes)!=list$1sTypeph_length(right_type2_367->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                puts(msg);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_367->mClass->mName,right_type2_367->mPointerNum);
                exit(2);
            }
            for(            i_386=0;            i_386<list$1sTypeph_length(left_type->mGenericsTypes);            i_386++            ){
                check_assign_type(msg,((struct sType*)come_null_check(((struct sType*)(__right_value377=list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_386))), "05type.c", 898, 3)),((struct sType*)come_null_check(((struct sType*)(__right_value378=list$1sTypephp_operator_load_element(right_type2_367->mGenericsTypes,i_386))), "05type.c", 898, 4)),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                come_call_finalizer3(__right_value377,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value378,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result285__ = (_Bool)1;
    come_call_finalizer3(right_type2_367,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result285__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_376;
int i_377;
struct sType* __result271__;
struct sType* default_value_378;
struct sType* __result272__;
default_value_378 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_376=self->head;
    i_377=0;
    while(it_376!=((void*)0)) {
        if(        position==i_377) {
            __result271__ = gComeFunResultObject = __result_obj__ = it_376->item;
            gComeFunResultObject = (void*)0;
            return __result271__;
        }
        it_376=it_376->next;
        i_377++;
    }
    memset(&default_value_378,0,sizeof(struct sType*));
    __result272__ = gComeFunResultObject = __result_obj__ = default_value_378;
    come_call_finalizer3(default_value_378,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info){
}

struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
struct sType* result_type_387;
char* var_name_388;
char* p_389;
int sline_390;
void* __right_value380 = (void*)0;
char* word_391;
_Bool between_brace_392;
char* p_393;
int sline_394;
void* __right_value381 = (void*)0;
char* word_395;
void* __right_value382 = (void*)0;
char* __dec_obj130;
void* __right_value383 = (void*)0;
char* __dec_obj131;
_Bool no_comma_397;
void* __right_value384 = (void*)0;
struct sNode* node_398;
struct sNode* __dec_obj132;
char* p_399;
int sline_400;
void* __right_value385 = (void*)0;
char* word_401;
void* __right_value386 = (void*)0;
struct sNode* node_402;
void* __right_value390 = (void*)0;
char* attribute_406;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
char* __dec_obj136;
char* __dec_obj137;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
struct tuple2$2sTypephcharph* __result288__;
    result_type_387=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_387->mPointerNum=result_type_387->mTypedefOriginalPointerNum;
    }
    var_name_388=((void*)0);
    {
        p_389=info->p;
        sline_390=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_391=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_391,"const")||string_operator_equals(word_391,"__restrict")||string_operator_equals(word_391,"restrict")||string_operator_equals(word_391,"__user")||string_operator_equals(word_391,"volatile")||string_operator_equals(word_391,"_Nonnull")||string_operator_equals(word_391,"_Nullable")||string_operator_equals(word_391,"_Null_unspecified")||string_operator_equals(word_391,"__user")||string_operator_equals(word_391,"_Addr")) {
            }
            else {
                info->p=p_389;
                info->sline=sline_390;
            }
            word_391 = come_decrement_ref_count2(word_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_389;
            info->sline=sline_390;
        }
    }
    between_brace_392=(_Bool)0;
    {
        p_393=info->p;
        sline_394=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_395=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_395,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_392=(_Bool)1;
                    }
                }
                word_395 = come_decrement_ref_count2(word_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_393;
        info->sline=sline_394;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_387->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_392&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj130=var_name_388;
        var_name_388=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_396=0;
        num_anonymous_var_name_396++;
        __dec_obj131=var_name_388;
        var_name_388=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_396));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_392&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_397=info->no_comma;
        info->no_comma=(_Bool)1;
        node_398=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_397;
        __dec_obj132=result_type_387->mSizeNum;
        result_type_387->mSizeNum=(struct sNode*)come_increment_ref_count(node_398);
        if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_398) { node_398 = come_decrement_ref_count2(node_398, ((struct sNode*)node_398)->finalize, ((struct sNode*)node_398)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_399=info->p;
            sline_400=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_401=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_401,"const")||string_operator_equals(word_401,"__restrict")||string_operator_equals(word_401,"restrict")||string_operator_equals(word_401,"__user")||string_operator_equals(word_401,"volatile")||string_operator_equals(word_401,"_Nonnull")||string_operator_equals(word_401,"_Nullable")||string_operator_equals(word_401,"_Null_unspecified")||string_operator_equals(word_401,"__user")||string_operator_equals(word_401,"_Addr")) {
                }
                else {
                    info->p=p_399;
                    info->sline=sline_400;
                }
                word_401 = come_decrement_ref_count2(word_401, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_399;
                info->sline=sline_400;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_387->mArrayPointerType=(_Bool)1;
            result_type_387->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_402=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(result_type_387->mArrayNum,(struct sNode*)come_increment_ref_count(node_402));
        parse_sharp_v5(info);
        result_type_387->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_402) { node_402 = come_decrement_ref_count2(node_402, ((struct sNode*)node_402)->finalize, ((struct sNode*)node_402)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_406=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_406,"")) {
        if(        result_type_387->mAttribute) {
            __dec_obj136=result_type_387->mAttribute;
            result_type_387->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_387->mAttribute,((char*)(__right_value391=charp_operator_add(" ",attribute_406)))));
            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj137=result_type_387->mAttribute;
            result_type_387->mAttribute=(char*)come_increment_ref_count(attribute_406);
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value393=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value393,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result288__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value395=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1065, "struct tuple2$2sTypephcharph", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_387),(char*)come_increment_ref_count(var_name_388))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_387,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_388 = come_decrement_ref_count2(var_name_388, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_406 = come_decrement_ref_count2(attribute_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value395,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct list_item$1sNodeph* litem_403;
struct sNode* __dec_obj133;
void* __right_value388 = (void*)0;
struct list_item$1sNodeph* litem_404;
struct sNode* __dec_obj134;
void* __right_value389 = (void*)0;
struct list_item$1sNodeph* litem_405;
struct sNode* __dec_obj135;
struct list$1sNodeph* __result286__;
    if(    self->len==0) {
        litem_403=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value387=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1304, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_403->prev=((void*)0);
        litem_403->next=((void*)0);
        __dec_obj133=litem_403->item;
        litem_403->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_403;
        self->head=litem_403;
    }
    else if(    self->len==1) {
        litem_404=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value388=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1314, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_404->prev=self->head;
        litem_404->next=((void*)0);
        __dec_obj134=litem_404->item;
        litem_404->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_404;
        self->head->next=litem_404;
    }
    else {
        litem_405=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value389=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1324, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_405->prev=self->tail;
        litem_405->next=((void*)0);
        __dec_obj135=litem_405->item;
        litem_405->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_405;
        self->tail=litem_405;
    }
    self->len++;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result286__;
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

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj140;
char* __dec_obj141;
struct tuple2$2sTypephcharph* __result287__;
    __dec_obj140=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj140,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj141=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj142;
char* __dec_obj143;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj142=self->v1;
            come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj143=self->v2;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

void skip_pointer_attribute(struct sInfo* info){
char* p_407;
int sline_408;
void* __right_value396 = (void*)0;
char* word_409;
int nest_410;
    p_407=info->p;
    sline_408=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_409=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_409,"__attribute")||string_operator_equals(word_409,"__attribute__"))&&*info->p==40) {
            nest_410=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_410++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_410--;
                    if(                    nest_410==0) {
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
        else if(        string_operator_equals(word_409,"const")||string_operator_equals(word_409,"__restrict")||string_operator_equals(word_409,"restrict")||string_operator_equals(word_409,"__user")||string_operator_equals(word_409,"volatile")||string_operator_equals(word_409,"_Nonnull")||string_operator_equals(word_409,"_Nullable")||string_operator_equals(word_409,"__nonnull")||string_operator_equals(word_409,"_Null_unspecified")||string_operator_equals(word_409,"__user")||string_operator_equals(word_409,"_Addr")||string_operator_equals(word_409,"__noreturn")||string_operator_equals(word_409,"_noreturn")||string_operator_equals(word_409,"_Noreturn")) {
        }
        else {
            info->p=p_407;
            info->sline=sline_408;
        }
        word_409 = come_decrement_ref_count2(word_409, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_407;
        info->sline=sline_408;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_411;
void* __right_value397 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_412=0;
char* name_413=0;
_Bool err_414=0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct tuple3$3sTypephcharphbool* __result290__;
    no_output_err_411=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value397=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_412=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_413=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_414=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value397,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_411;
    __result290__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value399=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1122, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_412),(char*)come_increment_ref_count(name_413),err_414)));
    come_call_finalizer3(type_412,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_413 = come_decrement_ref_count2(name_413, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value399,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj144;
char* __dec_obj145;
struct tuple3$3sTypephcharphbool* __result289__;
    __dec_obj144=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj145=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_415;
int head_sline_416;
void* __right_value400 = (void*)0;
char* type_name_417;
_Bool record__418;
_Bool exception__419;
_Bool constant_420;
_Bool static__421;
_Bool volatile__422;
_Bool register__423;
_Bool unsigned__424;
_Bool long__425;
_Bool long_long_426;
_Bool short__427;
_Bool restrict__428;
_Bool struct__429;
_Bool union__430;
_Bool enum__431;
_Bool no_heap_432;
_Bool extern__433;
_Bool inline__434;
_Bool uniq__435;
_Bool tuple__436;
struct sNode* alignas__437;
_Bool anonymous_type_438;
_Bool anonymous_name_439;
_Bool atomic__440;
_Bool object_interface_441;
void* __right_value401 = (void*)0;
char* __dec_obj146;
void* __right_value402 = (void*)0;
char* __dec_obj147;
void* __right_value403 = (void*)0;
char* __dec_obj148;
int brace_num_442;
void* __right_value404 = (void*)0;
char* __dec_obj149;
int brace_num_443;
void* __right_value405 = (void*)0;
char* __dec_obj150;
void* __right_value406 = (void*)0;
char* __dec_obj151;
void* __right_value407 = (void*)0;
char* __dec_obj152;
void* __right_value408 = (void*)0;
char* __dec_obj153;
void* __right_value409 = (void*)0;
char* __dec_obj154;
void* __right_value410 = (void*)0;
struct sNode* exp_444;
struct sNode* __dec_obj155;
void* __right_value411 = (void*)0;
char* __dec_obj156;
void* __right_value412 = (void*)0;
char* __dec_obj157;
void* __right_value413 = (void*)0;
char* __dec_obj158;
void* __right_value414 = (void*)0;
char* __dec_obj159;
void* __right_value415 = (void*)0;
char* __dec_obj160;
void* __right_value416 = (void*)0;
char* __dec_obj161;
void* __right_value417 = (void*)0;
char* __dec_obj162;
void* __right_value418 = (void*)0;
char* __dec_obj163;
void* __right_value419 = (void*)0;
char* __dec_obj164;
char* p_445;
int sline_446;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
char* __dec_obj165;
void* __right_value422 = (void*)0;
char* __dec_obj166;
void* __right_value423 = (void*)0;
void* __right_value424 = (void*)0;
char* __dec_obj167;
char* p_447;
int sline_448;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
struct tuple3$3sTypephcharphbool* __result291__;
char* p_449;
int sline_450;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct tuple3$3sTypephcharphbool* __result292__;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* node_451;
_Bool Value_452;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
struct tuple3$3sTypephcharphbool* __result293__;
char* p_453;
int sline_454;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
char* __dec_obj168;
void* __right_value438 = (void*)0;
char* __dec_obj169;
void* __right_value439 = (void*)0;
char* __dec_obj170;
char* p_455;
int sline_456;
void* __right_value440 = (void*)0;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct tuple3$3sTypephcharphbool* __result294__;
void* __right_value443 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_457=0;
char* name_458=0;
_Bool err_459=0;
char* p_460;
int sline_461;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct tuple3$3sTypephcharphbool* __result295__;
void* __right_value448 = (void*)0;
char* __dec_obj171;
void* __right_value449 = (void*)0;
char* __dec_obj172;
void* __right_value450 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_462=0;
char* name_463=0;
_Bool err_464=0;
char* p_465;
int sline_466;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct tuple3$3sTypephcharphbool* __result296__;
char* p_467;
int sline_468;
void* __right_value454 = (void*)0;
char* __dec_obj173;
void* __right_value455 = (void*)0;
char* __dec_obj174;
void* __right_value456 = (void*)0;
char* __dec_obj175;
void* __right_value457 = (void*)0;
char* __dec_obj176;
void* __right_value458 = (void*)0;
char* __dec_obj177;
void* __right_value459 = (void*)0;
char* __dec_obj178;
void* __right_value460 = (void*)0;
char* __dec_obj179;
char* p_469;
int sline_470;
void* __right_value461 = (void*)0;
char* __dec_obj180;
char* p_471;
int sline_472;
void* __right_value462 = (void*)0;
char* __dec_obj181;
void* __right_value463 = (void*)0;
char* __dec_obj182;
void* __right_value464 = (void*)0;
char* __dec_obj183;
char* p_473;
int sline_474;
void* __right_value465 = (void*)0;
char* __dec_obj184;
void* __right_value466 = (void*)0;
char* __dec_obj185;
void* __right_value467 = (void*)0;
char* __dec_obj186;
void* __right_value468 = (void*)0;
char* __dec_obj187;
void* __right_value469 = (void*)0;
char* __dec_obj188;
void* __right_value470 = (void*)0;
char* __dec_obj189;
void* __right_value471 = (void*)0;
char* __dec_obj190;
void* __right_value472 = (void*)0;
char* __dec_obj191;
void* __right_value473 = (void*)0;
char* __dec_obj192;
void* __right_value474 = (void*)0;
char* __dec_obj193;
void* __right_value475 = (void*)0;
char* __dec_obj194;
char* p_475;
int sline_476;
void* __right_value476 = (void*)0;
char* __dec_obj195;
void* __right_value477 = (void*)0;
char* __dec_obj196;
void* __right_value478 = (void*)0;
char* attribute_477;
int pointer_num_478;
_Bool heap_479;
_Bool refference_480;
_Bool no_refference_481;
_Bool channel_482;
char* tuple_name_483;
void* __right_value479 = (void*)0;
char* __dec_obj197;
_Bool lambda_flag_484;
char* pX_485;
int slineX_486;
void* __right_value480 = (void*)0;
struct sType* type_487;
char* var_name_488;
_Bool function_pointer_flag_489;
char* p_490;
int sline_491;
void* __right_value481 = (void*)0;
char* word_492;
_Bool var_name_between_brace_493;
char* p_494;
int sline_495;
void* __right_value482 = (void*)0;
char* word_496;
void* __right_value483 = (void*)0;
char* __dec_obj198;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* node_498;
_Bool Value_499;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct tuple3$3sTypephcharphbool* __result297__;
int pointer_num_500;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sType* __dec_obj199;
void* __right_value490 = (void*)0;
char* __dec_obj200;
void* __right_value491 = (void*)0;
struct sNode* node_501;
_Bool Value_502;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct tuple3$3sTypephcharphbool* __result298__;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sType* __dec_obj201;
void* __right_value496 = (void*)0;
char* __dec_obj202;
void* __right_value497 = (void*)0;
struct sNode* node_503;
_Bool Value_504;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct tuple3$3sTypephcharphbool* __result299__;
int pointer_num_505;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sType* __dec_obj203;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple3$3sTypephcharphbool* __result300__;
void* __right_value504 = (void*)0;
char* attribute_506;
char* __dec_obj204;
void* __right_value505 = (void*)0;
char* __dec_obj205;
void* __right_value506 = (void*)0;
char* __dec_obj206;
void* __right_value507 = (void*)0;
char* __dec_obj207;
void* __right_value508 = (void*)0;
char* __dec_obj208;
_Bool no_comma_509;
void* __right_value509 = (void*)0;
struct sNode* node_510;
struct sNode* __dec_obj209;
void* __right_value510 = (void*)0;
char* attribute2_511;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
char* __dec_obj210;
char* __dec_obj211;
struct sType* result_type_512;
void* __right_value513 = (void*)0;
_Bool _if_conditional3;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sType* __dec_obj212;
void* __right_value516 = (void*)0;
int i_513;
void* __right_value517 = (void*)0;
_Bool _if_conditional4;
void* __right_value518 = (void*)0;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
struct sType* __dec_obj213;
int i_517;
void* __right_value521 = (void*)0;
_Bool _if_conditional5;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
struct sType* __dec_obj214;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct sType* __dec_obj215;
struct sNode* __dec_obj216;
void* __right_value527 = (void*)0;
char* __dec_obj217;
void* __right_value528 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1sTypeph* param_types_518=0;
struct list$1charph* param_names_519=0;
struct list$1charph* param_default_parametors_520=0;
_Bool var_args_521=0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj218;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
struct tuple1$1sTypeph* __dec_obj220;
struct list$1sTypeph* __dec_obj221;
struct list$1charph* __dec_obj222;
int function_pointer_num_522;
struct sType* result_type_523;
void* __right_value533 = (void*)0;
_Bool _if_conditional6;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
struct sType* __dec_obj223;
void* __right_value536 = (void*)0;
int i_524;
void* __right_value537 = (void*)0;
_Bool _if_conditional7;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj224;
int i_525;
void* __right_value541 = (void*)0;
_Bool _if_conditional8;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
struct sType* __dec_obj225;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct sType* __dec_obj226;
struct sNode* __dec_obj227;
void* __right_value547 = (void*)0;
char* __dec_obj228;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct tuple3$3sTypephcharphbool* __result304__;
void* __right_value550 = (void*)0;
char* __dec_obj229;
_Bool function_pointer_array_527;
int function_pointer_array_num_528;
int n_529;
void* __right_value551 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1sTypeph* param_types_530=0;
struct list$1charph* param_names_531=0;
struct list$1charph* param_default_parametors_532=0;
_Bool var_args_533=0;
void* __right_value552 = (void*)0;
void* __right_value553 = (void*)0;
struct sType* __dec_obj230;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct tuple1$1sTypeph* __dec_obj231;
struct list$1sTypeph* __dec_obj232;
struct list$1charph* __dec_obj233;
void* __right_value557 = (void*)0;
struct sNode* exp_534;
_Bool Value_535;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct tuple3$3sTypephcharphbool* __result306__;
void* __right_value560 = (void*)0;
struct CVALUE* come_value_536;
void* __right_value561 = (void*)0;
struct sType* __dec_obj236;
void* __right_value562 = (void*)0;
char* attribute_537;
char* __dec_obj237;
void* __right_value563 = (void*)0;
char* __dec_obj238;
void* __right_value564 = (void*)0;
char* __dec_obj239;
void* __right_value565 = (void*)0;
char* __dec_obj240;
void* __right_value566 = (void*)0;
char* __dec_obj241;
_Bool no_comma_540;
void* __right_value567 = (void*)0;
struct sNode* node_541;
struct sNode* __dec_obj242;
void* __right_value568 = (void*)0;
char* attribute2_542;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
char* __dec_obj243;
char* __dec_obj244;
void* __right_value571 = (void*)0;
_Bool _if_conditional9;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct sType* __dec_obj248;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
char* __dec_obj249;
struct sNode* __dec_obj250;
char* __dec_obj251;
int i_543;
void* __right_value576 = (void*)0;
_Bool _if_conditional10;
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj252;
struct sNode* __dec_obj253;
char* __dec_obj254;
int i_544;
void* __right_value580 = (void*)0;
_Bool _if_conditional11;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
struct sType* __dec_obj255;
struct sNode* __dec_obj256;
char* __dec_obj257;
void* __right_value584 = (void*)0;
_Bool _if_conditional12;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct tuple3$3sTypephcharphbool* __result307__;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sType* __dec_obj258;
void* __right_value589 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_545=0;
char* var_name_546=0;
_Bool err_547=0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct tuple3$3sTypephcharphbool* __result308__;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct tuple3$3sTypephcharphbool* __result309__;
void* __right_value594 = (void*)0;
struct sType* __dec_obj259;
void* __right_value595 = (void*)0;
char* new_name_548;
struct sNode* __dec_obj260;
char* __dec_obj261;
char* __dec_obj262;
void* __right_value596 = (void*)0;
struct sClass* klass_549;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sClass* klass_591;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sType* __dec_obj263;
struct sNode* __dec_obj264;
char* __dec_obj265;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct list$1sTypeph* types_592;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_593=0;
char* name_594=0;
_Bool err_595=0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct tuple3$3sTypephcharphbool* __result331__;
void* __right_value615 = (void*)0;
int num_tuples_596;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sType* __dec_obj266;
struct list$1sTypeph* o2_saved_597;
struct sType* it_598;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sType* __dec_obj267;
void* __right_value621 = (void*)0;
char* new_name_599;
char* __dec_obj268;
void* __right_value622 = (void*)0;
char* attribute_600;
char* __dec_obj269;
void* __right_value623 = (void*)0;
char* __dec_obj270;
void* __right_value624 = (void*)0;
char* __dec_obj271;
void* __right_value625 = (void*)0;
char* __dec_obj272;
void* __right_value626 = (void*)0;
char* __dec_obj273;
_Bool no_comma_603;
void* __right_value627 = (void*)0;
struct sNode* node_604;
struct sNode* __dec_obj274;
void* __right_value628 = (void*)0;
char* attribute2_605;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
char* __dec_obj275;
char* __dec_obj276;
void* __right_value631 = (void*)0;
struct sNode* node_606;
void* __right_value632 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_607=0;
char* attribute2_608=0;
char* __dec_obj277;
char* __dec_obj278;
void* __right_value633 = (void*)0;
struct sType* type_before_609;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct sType* __dec_obj279;
void* __right_value636 = (void*)0;
struct sNode* __list_values1___610[1];
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
struct list$1sNodeph* __dec_obj280;
void* __right_value639 = (void*)0;
struct tuple1$1sTypeph* __dec_obj281;
struct sType* __dec_obj282;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* type2_612;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* type3_618;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
struct sType* type4_619;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct tuple3$3sTypephcharphbool* __result335__;
struct sType* refference_type_620;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sType* __dec_obj284;
void* __right_value656 = (void*)0;
struct tuple1$1sTypeph* __dec_obj285;
struct sType* __dec_obj286;
char* __dec_obj287;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct tuple3$3sTypephcharphbool* __result336__;
type_487 = (void*)0;
var_name_488 = (void*)0;
result_type_512 = (void*)0;
result_type_523 = (void*)0;
    head_415=info->p;
    head_sline_416=info->sline;
    info->define_struct=(_Bool)0;
    type_name_417=(char*)come_increment_ref_count(parse_word(info));
    record__418=(_Bool)0;
    exception__419=(_Bool)0;
    constant_420=(_Bool)0;
    static__421=(_Bool)0;
    volatile__422=(_Bool)0;
    register__423=(_Bool)0;
    unsigned__424=(_Bool)0;
    long__425=(_Bool)0;
    long_long_426=(_Bool)0;
    short__427=(_Bool)0;
    restrict__428=(_Bool)0;
    struct__429=(_Bool)0;
    union__430=(_Bool)0;
    enum__431=(_Bool)0;
    no_heap_432=(_Bool)0;
    extern__433=(_Bool)0;
    inline__434=(_Bool)0;
    uniq__435=(_Bool)0;
    tuple__436=(_Bool)0;
    alignas__437=((void*)0);
    anonymous_type_438=(_Bool)0;
    anonymous_name_439=(_Bool)0;
    atomic__440=(_Bool)0;
    object_interface_441=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_417,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_441=(_Bool)1;
            __dec_obj146=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj147=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__440=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_417,"__extension__")) {
            __dec_obj148=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_442=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_442++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_442--;
                        if(                        brace_num_442==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj149=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"__declspec")) {
            if(            *info->p==40) {
                brace_num_443=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_443++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_443--;
                        if(                        brace_num_443==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj150=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"_Noreturn")) {
            __dec_obj151=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"__noreturn")) {
            __dec_obj152=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"_Nullable")) {
            __dec_obj153=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"_noreturn")) {
            __dec_obj154=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"_Alignas")) {
            expected_next_character(40,info);
            exp_444=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj155=alignas__437;
            alignas__437=(struct sNode*)come_increment_ref_count(exp_444);
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj156=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_444) { exp_444 = come_decrement_ref_count2(exp_444, ((struct sNode*)exp_444)->finalize, ((struct sNode*)exp_444)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_417,"const")) {
            constant_420=(_Bool)1;
            __dec_obj157=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"static")) {
            static__421=(_Bool)1;
            __dec_obj158=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"uniq")) {
            uniq__435=(_Bool)1;
            __dec_obj159=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"record")) {
            record__418=(_Bool)1;
            __dec_obj160=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"exception")) {
            exception__419=(_Bool)1;
            __dec_obj161=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"extern")) {
            extern__433=(_Bool)1;
            __dec_obj162=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"inline")||string_operator_equals(type_name_417,"__inline")||string_operator_equals(type_name_417,"__inline__")||string_operator_equals(type_name_417,"__always_inline")||string_operator_equals(type_name_417,"__forceinline")) {
            inline__434=(_Bool)1;
            __dec_obj163=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"volatile")) {
            volatile__422=(_Bool)1;
            __dec_obj164=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"struct")) {
            struct__429=(_Bool)1;
            if(            *info->p==123) {
                p_445=info->p;
                sline_446=info->sline;
                ((char*)(__right_value420=skip_block(info)));
                __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_439=(_Bool)1;
                    anonymous_type_438=(_Bool)1;
                    __dec_obj165=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_445;
                    info->sline=sline_446;
                    break;
                }
                else {
                    anonymous_type_438=(_Bool)1;
                    __dec_obj166=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_445;
                    info->sline=sline_446;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value423=parse_struct_attribute(info)));
                __right_value423 = come_decrement_ref_count2(__right_value423, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj167=type_name_417;
                type_name_417=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_447=info->p;
                    sline_448=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_447;
                                info->sline=sline_448;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result291__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value426=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1351, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value426,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result291__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_449=info->p;
                    sline_450=info->sline;
                    ((char*)(__right_value427=skip_block(info)));
                    __right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value428=parse_struct_attribute(info)));
                    __right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_415;
                        info->sline=head_sline_416;
                        info->define_struct=(_Bool)1;
                        __result292__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value430=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1371, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value430,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result292__;
                    }
                    else {
                        info->p=p_449;
                        info->sline=sline_450;
                        node_451=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_417),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_452=node_compile(node_451,info);
                        if(                        !Value_452) {
                            __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value434=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1383, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value434,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result293__;
                        }
                        else {
                        }
                        if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_451) { node_451 = come_decrement_ref_count2(node_451, ((struct sNode*)node_451)->finalize, ((struct sNode*)node_451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_417,"union")) {
            union__430=(_Bool)1;
            if(            *info->p==123) {
                p_453=info->p;
                sline_454=info->sline;
                ((char*)(__right_value435=skip_block(info)));
                __right_value435 = come_decrement_ref_count2(__right_value435, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value436=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value436,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_415;
                    info->sline=head_sline_416;
                    info->define_struct=(_Bool)0;
                    anonymous_type_438=(_Bool)1;
                    __dec_obj168=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_453;
                    info->sline=sline_454;
                    break;
                }
                else {
                    anonymous_type_438=(_Bool)1;
                    __dec_obj169=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_453;
                    info->sline=sline_454;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj170=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_455=info->p;
                sline_456=info->sline;
                ((char*)(__right_value440=skip_block(info)));
                __right_value440 = come_decrement_ref_count2(__right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_415;
                    info->sline=head_sline_416;
                    info->define_struct=(_Bool)1;
                    __result294__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value442=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1440, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value442,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result294__;
                }
                else {
                    anonymous_type_438=(_Bool)1;
                    info->p=p_455;
                    info->sline=sline_456;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_417,"enum")) {
            enum__431=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value443=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_457=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_458=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_459=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value443,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_457,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_458 = come_decrement_ref_count2(name_458, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_460=info->p;
                sline_461=info->sline;
                ((char*)(__right_value444=skip_block(info)));
                __right_value444 = come_decrement_ref_count2(__right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value445=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value445,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_415;
                    info->sline=head_sline_416;
                    info->define_struct=(_Bool)1;
                    __result295__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value447=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1478, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value447,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result295__;
                }
                else {
                    anonymous_type_438=(_Bool)1;
                    __dec_obj171=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_460;
                    info->sline=sline_461;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj172=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value450=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_462=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_463=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_464=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value450,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_463 = come_decrement_ref_count2(name_463, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_465=info->p;
                sline_466=info->sline;
                ((char*)(__right_value451=skip_block(info)));
                __right_value451 = come_decrement_ref_count2(__right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_415;
                    info->sline=head_sline_416;
                    info->define_struct=(_Bool)1;
                    __result296__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value453=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1514, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value453,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result296__;
                }
                else {
                    anonymous_type_438=(_Bool)1;
                    info->p=p_465;
                    info->sline=sline_466;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_417,"long")) {
            {
                p_467=info->p;
                sline_468=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_467;
                    info->sline=sline_468;
                    __dec_obj173=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj174=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_417,"unsigned")) {
                        __dec_obj175=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_417,"int")) {
                            long__425=(_Bool)1;
                            unsigned__424=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_417,"signed")) {
                        __dec_obj176=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_417,"int")) {
                            long__425=(_Bool)1;
                            unsigned__424=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_417,"long")) {
                        p_467=info->p;
                        sline_468=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_426=(_Bool)1;
                            __dec_obj177=type_name_417;
                            type_name_417=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__425=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_417,"int")) {
                            long_long_426=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_417,info)) {
                            __dec_obj178=type_name_417;
                            type_name_417=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_426=(_Bool)1;
                            info->p=p_467;
                            info->sline=sline_468;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_417,info)) {
                        if(                        long__425) {
                            long_long_426=(_Bool)1;
                            long__425=(_Bool)0;
                        }
                        else {
                            long__425=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_467;
                        info->sline=sline_468;
                        __dec_obj179=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_417,"unsigned")) {
            unsigned__424=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_469=info->p;
                sline_470=info->sline;
                __dec_obj180=type_name_417;
                type_name_417=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_417,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_471=info->p;
                        sline_472=info->sline;
                        __dec_obj181=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_417,info)) {
                            short__427=(_Bool)1;
                        }
                        else {
                            short__427=(_Bool)1;
                            __dec_obj182=type_name_417;
                            type_name_417=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_471;
                            info->sline=sline_472;
                        }
                    }
                    else {
                        short__427=(_Bool)1;
                        __dec_obj183=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_417,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_473=info->p;
                        sline_474=info->sline;
                        __dec_obj184=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_417,info)) {
                            long__425=(_Bool)1;
                        }
                        else {
                            long__425=(_Bool)1;
                            __dec_obj185=type_name_417;
                            type_name_417=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_473;
                            info->sline=sline_474;
                        }
                    }
                    else {
                        long__425=(_Bool)1;
                        __dec_obj186=type_name_417;
                        type_name_417=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_417,info)) {
                    __dec_obj187=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_469;
                    info->sline=sline_470;
                    break;
                }
            }
            else {
                __dec_obj188=type_name_417;
                type_name_417=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_417,"signed")||string_operator_equals(type_name_417,"__signed__")) {
            unsigned__424=(_Bool)0;
            __dec_obj189=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"register")) {
            register__423=(_Bool)1;
            __dec_obj190=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"restrict")) {
            restrict__428=(_Bool)1;
            __dec_obj191=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"_Addr")) {
            __dec_obj192=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"__restrict")) {
            restrict__428=(_Bool)1;
            __dec_obj193=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_417,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj194=type_name_417;
            type_name_417=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__436=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_417,"short")) {
            short__427=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_475=info->p;
                sline_476=info->sline;
                __dec_obj195=type_name_417;
                type_name_417=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_417,"int")) {
                    short__427=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_417,"short")) {
                    short__427=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_417,info)) {
                    info->p=p_475;
                    info->sline=sline_476;
                }
                else {
                    __dec_obj196=type_name_417;
                    type_name_417=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_475;
                    info->sline=sline_476;
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
    attribute_477=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_478=0;
    heap_479=(_Bool)0;
    refference_480=(_Bool)0;
    no_refference_481=(_Bool)0;
    channel_482=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_478++;
        }
        else if(        *info->p==126&&*(info->p+1)==126) {
            info->p+=2;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            no_refference_481=(_Bool)1;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            refference_480=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_479=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_482=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_483=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__436) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj197=tuple_name_483;
        tuple_name_483=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__440) {
        expected_next_character(41,info);
    }
    lambda_flag_484=(_Bool)0;
    {
        pX_485=info->p;
        slineX_486=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value480=parse_word(info)));
            __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_484=(_Bool)1;
            }
        }
        info->p=pX_485;
        info->sline=slineX_486;
    }
    function_pointer_flag_489=(_Bool)0;
    {
        p_490=info->p;
        sline_491=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_489=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_492=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_489=(_Bool)1;
                    }
                }
                word_492 = come_decrement_ref_count2(word_492, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_490;
        info->sline=sline_491;
    }
    var_name_between_brace_493=(_Bool)0;
    {
        p_494=info->p;
        sline_495=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_496=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_496,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_493=(_Bool)1;
                    }
                }
                word_496 = come_decrement_ref_count2(word_496, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_494;
        info->sline=sline_495;
    }
    if(    anonymous_type_438&&*info->p==123) {
        static int anonymous_num_497=0;
        if(        struct__429) {
            if(            string_operator_equals(type_name_417,"")) {
                __dec_obj198=type_name_417;
                type_name_417=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_497));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_498=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_417),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_499=node_compile(node_498,info);
            if(            !Value_499) {
                err_msg(info,"parse_struct is failed");
                __result297__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value487=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1926, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_498) { node_498 = come_decrement_ref_count2(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value487,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result297__;
            }
            else {
            }
            pointer_num_500=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_500++;
            }
            __dec_obj199=type_487;
            type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1939, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_487->mPointerNum=pointer_num_500;
            if(node_498) { node_498 = come_decrement_ref_count2(node_498, ((struct sNode*)node_498)->finalize, ((struct sNode*)node_498)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__431) {
            if(            string_operator_equals(type_name_417,"")) {
                __dec_obj200=type_name_417;
                type_name_417=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_497));
                __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_501=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_417),info));
            if(            !info->no_output_err) {
                Value_502=node_compile(node_501,info);
                if(                !Value_502) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value493=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1953, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_501) { node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value493,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result298__;
                }
                else {
                }
            }
            __dec_obj201=type_487;
            type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1957, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_501) { node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__430) {
            if(            string_operator_equals(type_name_417,"")) {
                __dec_obj202=type_name_417;
                type_name_417=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_497));
                __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_503=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_417),info));
            Value_504=node_compile(node_503,info);
            if(            !Value_504) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value499=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1969, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_503) { node_503 = come_decrement_ref_count2(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value499,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result299__;
            }
            else {
            }
            pointer_num_505=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_505++;
            }
            __dec_obj203=type_487;
            type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 1983, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj203,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_487->mPointerNum=pointer_num_505;
            if(node_503) { node_503 = come_decrement_ref_count2(node_503, ((struct sNode*)node_503)->finalize, ((struct sNode*)node_503)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value503=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1989, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value503,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result300__;
        }
        attribute_506=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_506,"")) {
            __dec_obj204=type_487->mAttribute;
            type_487->mAttribute=(char*)come_increment_ref_count(attribute_506);
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_493&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj205=var_name_488;
                var_name_488=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_439) {
                static int num_anonymous_var_name_507=0;
                num_anonymous_var_name_507++;
                __dec_obj206=var_name_488;
                var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_507));
                __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj207=var_name_488;
                var_name_488=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_508=0;
                num_anonymous_var_name_508++;
                __dec_obj208=var_name_488;
                var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_508));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_493&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_509=info->no_comma;
                info->no_comma=(_Bool)1;
                node_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_509;
                __dec_obj209=type_487->mSizeNum;
                type_487->mSizeNum=(struct sNode*)come_increment_ref_count(node_510);
                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_510) { node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_511=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_506,"")&&string_operator_not_equals(attribute2_511,"")) {
                __dec_obj210=type_487->mAttribute;
                type_487->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_506,((char*)(__right_value511=charp_operator_add(" ",attribute2_511)))));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value511 = come_decrement_ref_count2(__right_value511, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_511,"")) {
                __dec_obj211=type_487->mAttribute;
                type_487->mAttribute=(char*)come_increment_ref_count(attribute2_511);
                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_511 = come_decrement_ref_count2(attribute2_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_506 = come_decrement_ref_count2(attribute_506, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_484) {
        if(        (_if_conditional3=(((struct sType*)(__right_value513=map$2charphsTypephp_operator_load_element(info->types,type_name_417))))),        come_call_finalizer3(__right_value513,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj212=result_type_512;
            result_type_512=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value514=map$2charphsTypephp_operator_load_element(info->types,type_name_417)))));
            come_call_finalizer3(__dec_obj212,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value514,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_512->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value516=map$2charphsClassphp_operator_load_element(info->classes,result_type_512->mClass->mName))), "05type.c", 2052, 5));
            come_call_finalizer3(__right_value516,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_417)) {
            for(            i_513=0;            i_513<list$1charph_length(info->generics_type_names);            i_513++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)come_null_check(((char*)(__right_value517=list$1charphp_operator_load_element(info->generics_type_names,i_513))), "05type.c", 2056, 6)),type_name_417))),                (__right_value517 = come_decrement_ref_count2(__right_value517, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj213=result_type_512;
                    result_type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2057, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value519=xsprintf("generics_type%d",i_513))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value519 = come_decrement_ref_count2(__right_value519, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_417)) {
            for(            i_517=0;            i_517<list$1charph_length(info->method_generics_type_names);            i_517++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)come_null_check(((char*)(__right_value521=list$1charphp_operator_load_element(info->method_generics_type_names,i_517))), "05type.c", 2063, 7)),type_name_417))),                (__right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj214=result_type_512;
                    result_type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2064, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value523=xsprintf("mgenerics_type%d",i_517))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value523 = come_decrement_ref_count2(__right_value523, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj215=result_type_512;
            result_type_512=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2069, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj215,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_512->mAtomic=result_type_512->mAtomic||atomic__440;
        result_type_512->mConstant=result_type_512->mConstant||constant_420;
        __dec_obj216=result_type_512->mAlignas;
        result_type_512->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
        if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_512->mRegister=register__423;
        result_type_512->mUnsigned=result_type_512->mUnsigned||unsigned__424;
        result_type_512->mVolatile=volatile__422;
        result_type_512->mRecord=result_type_512->mRecord||record__418;
        result_type_512->mUniq=result_type_512->mUniq||uniq__435;
        result_type_512->mStatic=(result_type_512->mStatic||static__421)&&!result_type_512->mUniq;
        result_type_512->mException=result_type_512->mException||exception__419;
        result_type_512->mExtern=result_type_512->mExtern||extern__433;
        result_type_512->mInline=result_type_512->mInline||inline__434;
        result_type_512->mRestrict=result_type_512->mRestrict||restrict__428;
        result_type_512->mLongLong=result_type_512->mLongLong||long_long_426;
        result_type_512->mLong=result_type_512->mLong||long__425;
        result_type_512->mShort=result_type_512->mShort||short__427;
        result_type_512->mPointerNum=pointer_num_478;
        result_type_512->mHeap=result_type_512->mHeap||heap_479;
        result_type_512->mRefference=result_type_512->mRefference||refference_480;
        result_type_512->mNoRefference=result_type_512->mNoRefference||no_refference_481;
        result_type_512->mChannel=result_type_512->mChannel||channel_482;
        __dec_obj217=var_name_488;
        var_name_488=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value528=parse_params(info,(_Bool)0)));
        param_types_518=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_519=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_520=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_521=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value528,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj218=type_487;
        type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2098, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj220=type_487->mResultType;
        type_487->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2100, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_512)));
        come_call_finalizer3(__dec_obj220,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj221=type_487->mParamTypes;
        type_487->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_518);
        come_call_finalizer3(__dec_obj221,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj222=type_487->mParamNames;
        type_487->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_519);
        come_call_finalizer3(__dec_obj222,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_487->mVarArgs=var_args_521;
        type_487->mExtern=extern__433;
        come_call_finalizer3(result_type_512,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_518,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_519,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_520,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_489) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_522=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_522++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)(__right_value533=map$2charphsTypephp_operator_load_element(info->types,type_name_417))))),        come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj223=result_type_523;
            result_type_523=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value534=map$2charphsTypephp_operator_load_element(info->types,type_name_417)))));
            come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value534,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_523->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value536=map$2charphsClassphp_operator_load_element(info->classes,result_type_523->mClass->mName))), "05type.c", 2125, 8));
            come_call_finalizer3(__right_value536,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_417)) {
            for(            i_524=0;            i_524<list$1charph_length(info->generics_type_names);            i_524++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)come_null_check(((char*)(__right_value537=list$1charphp_operator_load_element(info->generics_type_names,i_524))), "05type.c", 2130, 9)),type_name_417))),                (__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj224=result_type_523;
                    result_type_523=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2131, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value539=xsprintf("generics_type%d",i_524))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_417)) {
            for(            i_525=0;            i_525<list$1charph_length(info->method_generics_type_names);            i_525++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)come_null_check(((char*)(__right_value541=list$1charphp_operator_load_element(info->method_generics_type_names,i_525))), "05type.c", 2137, 10)),type_name_417))),                (__right_value541 = come_decrement_ref_count2(__right_value541, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj225=result_type_523;
                    result_type_523=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2138, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value543=xsprintf("mgenerics_type%d",i_525))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj226=result_type_523;
            result_type_523=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2143, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_523->mConstant=result_type_523->mConstant||constant_420;
        result_type_523->mAtomic=result_type_523->mAtomic||atomic__440;
        __dec_obj227=result_type_523->mAlignas;
        result_type_523->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_523->mRegister=register__423;
        result_type_523->mUnsigned=result_type_523->mUnsigned||unsigned__424;
        result_type_523->mVolatile=volatile__422;
        result_type_523->mUniq=result_type_523->mUniq||uniq__435;
        result_type_523->mStatic=(result_type_523->mStatic||static__421)&&!result_type_523->mUniq;
        result_type_523->mRecord=result_type_523->mRecord||record__418;
        result_type_523->mException=result_type_523->mException||exception__419;
        result_type_523->mExtern=result_type_523->mExtern||extern__433;
        result_type_523->mInline=result_type_523->mInline||inline__434;
        result_type_523->mRestrict=result_type_523->mRestrict||restrict__428;
        result_type_523->mLongLong=result_type_523->mLongLong||long_long_426;
        result_type_523->mLong=result_type_523->mLong||long__425;
        result_type_523->mShort=result_type_523->mShort||short__427;
        result_type_523->mPointerNum+=pointer_num_478;
        result_type_523->mHeap=result_type_523->mHeap||heap_479;
        result_type_523->mRefference=result_type_523->mRefference||refference_480;
        result_type_523->mNoRefference=result_type_523->mNoRefference||no_refference_481;
        result_type_523->mChannel=result_type_523->mChannel||channel_482;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj228=var_name_488;
            var_name_488=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value549=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2171, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(result_type_523),(char*)come_increment_ref_count(var_name_488),(_Bool)0)));
                come_call_finalizer3(result_type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value549,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
        }
        else {
            static int num_anonymous_var_name_526=0;
            num_anonymous_var_name_526++;
            __dec_obj229=var_name_488;
            var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_526));
            __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_527=(_Bool)0;
        function_pointer_array_num_528=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_529=0;
            while(xisdigit(*info->p)) {
                n_529=n_529*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_528=n_529;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_527=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value551=parse_params(info,(_Bool)0)));
        param_types_530=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_531=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_532=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_533=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value551,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj230=type_487;
        type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2203, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj230,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj231=type_487->mResultType;
        type_487->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypeph_initialize((struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2205, "struct tuple1$1sTypeph*", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_523))));
        come_call_finalizer3(__dec_obj231,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj232=type_487->mParamTypes;
        type_487->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_530);
        come_call_finalizer3(__dec_obj232,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj233=type_487->mParamNames;
        type_487->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_531);
        come_call_finalizer3(__dec_obj233,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_487->mVarArgs=var_args_533;
        type_487->mExtern=extern__433;
        if(        function_pointer_array_527) {
            type_487->mLambdaArray=(_Bool)1;
            type_487->mLambdaArrayNum=function_pointer_array_num_528;
        }
        type_487->mFunctionPointerNum=function_pointer_num_522;
        come_call_finalizer3(result_type_523,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_530,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_531,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_532,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_417,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_534=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_535=node_compile(exp_534,info);
        if(        !Value_535) {
            err_msg(info,"invalid __typeof__ expression");
            __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypepcharphbool*)(__right_value559=tuple3$3sTypepcharphbool_initialize((struct tuple3$3sTypepcharphbool*)come_increment_ref_count((struct tuple3$3sTypepcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypepcharphbool)*(1), "05type.c", 2227, "struct tuple3$3sTypepcharphbool", (void*)0, (void*)0)),(struct sType*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_534) { exp_534 = come_decrement_ref_count2(exp_534, ((struct sNode*)exp_534)->finalize, ((struct sNode*)exp_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value559,tuple3$3sTypepcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result306__;
        }
        else {
        }
        come_value_536=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj236=type_487;
        type_487=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_536->type));
        come_call_finalizer3(__dec_obj236,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_537=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_537,"")) {
            __dec_obj237=type_487->mAttribute;
            type_487->mAttribute=(char*)come_increment_ref_count(attribute_537);
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_493&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj238=var_name_488;
                var_name_488=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_439) {
                static int num_anonymous_var_name_538=0;
                num_anonymous_var_name_538++;
                __dec_obj239=var_name_488;
                var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_538));
                __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj240=var_name_488;
                var_name_488=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_539=0;
                num_anonymous_var_name_539++;
                __dec_obj241=var_name_488;
                var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_539));
                __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_493&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_540=info->no_comma;
                info->no_comma=(_Bool)1;
                node_541=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_540;
                __dec_obj242=type_487->mSizeNum;
                type_487->mSizeNum=(struct sNode*)come_increment_ref_count(node_541);
                if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_541) { node_541 = come_decrement_ref_count2(node_541, ((struct sNode*)node_541)->finalize, ((struct sNode*)node_541)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_542=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_537,"")&&string_operator_not_equals(attribute2_542,"")) {
                __dec_obj243=type_487->mAttribute;
                type_487->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_537,((char*)(__right_value569=charp_operator_add(" ",attribute2_542)))));
                __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value569 = come_decrement_ref_count2(__right_value569, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_542,"")) {
                __dec_obj244=type_487->mAttribute;
                type_487->mAttribute=(char*)come_increment_ref_count(attribute2_542);
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_542 = come_decrement_ref_count2(attribute2_542, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_534) { exp_534 = come_decrement_ref_count2(exp_534, ((struct sNode*)exp_534)->finalize, ((struct sNode*)exp_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_537 = come_decrement_ref_count2(attribute_537, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)(__right_value571=map$2charphsTypephp_operator_load_element(info->types,type_name_417))))),        come_call_finalizer3(__right_value571,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj248=type_487;
            type_487=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value572=map$2charphsTypephp_operator_load_element(info->types,type_name_417)))));
            come_call_finalizer3(__dec_obj248,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_487->mTypedefOriginalPointerNum=type_487->mPointerNum;
            type_487->mClass=((struct sClass*)come_null_check(((struct sClass*)(__right_value574=map$2charphsClassphp_operator_load_element(info->classes,type_487->mClass->mName))), "05type.c", 2295, 11));
            come_call_finalizer3(__right_value574,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj249=type_487->mOriginalTypeName;
            type_487->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_417));
            __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_487->mOriginalTypeNamePointerNum=pointer_num_478;
            type_487->mOriginalTypeNameHeap=heap_479;
            type_487->mConstant=type_487->mConstant||constant_420;
            type_487->mAtomic=type_487->mAtomic||atomic__440;
            __dec_obj250=type_487->mAlignas;
            type_487->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
            if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
            type_487->mRegister=register__423;
            type_487->mUnsigned=type_487->mUnsigned||unsigned__424;
            type_487->mVolatile=volatile__422;
            type_487->mUniq=type_487->mUniq||uniq__435;
            type_487->mStatic=(type_487->mStatic||static__421)&&!type_487->mUniq;
            type_487->mRecord=type_487->mRecord||record__418;
            type_487->mException=type_487->mException||exception__419;
            type_487->mExtern=type_487->mExtern||extern__433;
            type_487->mInline=type_487->mInline||inline__434;
            type_487->mRestrict=type_487->mRestrict||restrict__428;
            type_487->mLongLong=type_487->mLongLong||long_long_426;
            type_487->mLong=type_487->mLong||long__425;
            type_487->mShort=type_487->mShort||short__427;
            type_487->mPointerNum+=pointer_num_478;
            type_487->mHeap=type_487->mHeap||heap_479;
            type_487->mRefference=type_487->mRefference||refference_480;
            type_487->mNoRefference=type_487->mNoRefference||no_refference_481;
            type_487->mChannel=type_487->mChannel||channel_482;
            __dec_obj251=type_487->mTupleName;
            type_487->mTupleName=(char*)come_increment_ref_count(tuple_name_483);
            __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->generics_type_names,type_name_417)) {
            for(            i_543=0;            i_543<list$1charph_length(info->generics_type_names);            i_543++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)come_null_check(((char*)(__right_value576=list$1charphp_operator_load_element(info->generics_type_names,i_543))), "05type.c", 2325, 12)),type_name_417))),                (__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj252=type_487;
                    type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2326, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value578=xsprintf("generics_type%d",i_543))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj252,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value578 = come_decrement_ref_count2(__right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_487->mConstant=type_487->mConstant||constant_420;
            type_487->mAtomic=type_487->mAtomic||atomic__440;
            __dec_obj253=type_487->mAlignas;
            type_487->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
            type_487->mRegister=register__423;
            type_487->mUnsigned=type_487->mUnsigned||unsigned__424;
            type_487->mVolatile=volatile__422;
            type_487->mUniq=type_487->mUniq||uniq__435;
            type_487->mStatic=(type_487->mStatic||static__421)&&!type_487->mUniq;
            type_487->mRecord=type_487->mRecord||record__418;
            type_487->mException=type_487->mException||exception__419;
            type_487->mExtern=type_487->mExtern||extern__433;
            type_487->mInline=type_487->mInline||inline__434;
            type_487->mRestrict=type_487->mRestrict||restrict__428;
            type_487->mLongLong=type_487->mLongLong||long_long_426;
            type_487->mLong=type_487->mLong||long__425;
            type_487->mShort=type_487->mShort||short__427;
            type_487->mPointerNum+=pointer_num_478;
            type_487->mHeap=type_487->mHeap||heap_479;
            type_487->mRefference=type_487->mRefference||refference_480;
            type_487->mNoRefference=type_487->mNoRefference||no_refference_481;
            type_487->mChannel=type_487->mChannel||channel_482;
            __dec_obj254=type_487->mTupleName;
            type_487->mTupleName=(char*)come_increment_ref_count(tuple_name_483);
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charph_contained(info->method_generics_type_names,type_name_417)) {
            for(            i_544=0;            i_544<list$1charph_length(info->method_generics_type_names);            i_544++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)come_null_check(((char*)(__right_value580=list$1charphp_operator_load_element(info->method_generics_type_names,i_544))), "05type.c", 2355, 13)),type_name_417))),                (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj255=type_487;
                    type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2356, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value582=xsprintf("mgenerics_type%d",i_544))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj255,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_487->mConstant=type_487->mConstant||constant_420;
            type_487->mAtomic=type_487->mAtomic||atomic__440;
            __dec_obj256=type_487->mAlignas;
            type_487->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
            if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); };
            type_487->mRegister=register__423;
            type_487->mUnsigned=type_487->mUnsigned||unsigned__424;
            type_487->mVolatile=volatile__422;
            type_487->mUniq=type_487->mUniq||uniq__435;
            type_487->mStatic=(type_487->mStatic||static__421)&&!type_487->mUniq;
            type_487->mRecord=type_487->mRecord||record__418;
            type_487->mException=type_487->mException||exception__419;
            type_487->mExtern=type_487->mExtern||extern__433;
            type_487->mInline=type_487->mInline||inline__434;
            type_487->mRestrict=type_487->mRestrict||restrict__428;
            type_487->mLongLong=type_487->mLongLong||long_long_426;
            type_487->mLong=type_487->mLong||long__425;
            type_487->mShort=type_487->mShort||short__427;
            type_487->mPointerNum+=pointer_num_478;
            type_487->mHeap=type_487->mHeap||heap_479;
            type_487->mRefference=type_487->mRefference||refference_480;
            type_487->mNoRefference=type_487->mNoRefference||no_refference_481;
            type_487->mChannel=type_487->mChannel||channel_482;
            __dec_obj257=type_487->mTupleName;
            type_487->mTupleName=(char*)come_increment_ref_count(tuple_name_483);
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)(__right_value584=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_417)))==((void*)0))),            come_call_finalizer3(__right_value584,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result307__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value586=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2389, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value586,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result307__;
            }
            __dec_obj258=type_487;
            type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2392, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj258,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value589=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_545=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_546=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_547=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value589,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_547) {
                    __result308__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value591=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2398, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_546 = come_decrement_ref_count2(var_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value591,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result308__;
                }
                list$1sTypeph_push_back(type_487->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_545));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_546 = come_decrement_ref_count2(var_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result309__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value593=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2415, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_546 = come_decrement_ref_count2(var_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value593,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result309__;
                }
                come_call_finalizer3(generics_type_545,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_546 = come_decrement_ref_count2(var_name_546, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_487,info)) {
                __dec_obj259=type_487;
                type_487=(struct sType*)come_increment_ref_count(solve_generics(type_487,info->generics_type,info));
                come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_487,type_487,info)) {
                    new_name_548=(char*)come_increment_ref_count(create_generics_name(type_487,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_548);
                    exit(7);
                    new_name_548 = come_decrement_ref_count2(new_name_548, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_487->mConstant=type_487->mConstant||constant_420;
            type_487->mAtomic=type_487->mAtomic||atomic__440;
            __dec_obj260=type_487->mAlignas;
            type_487->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
            if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
            type_487->mRegister=register__423;
            type_487->mUnsigned=type_487->mUnsigned||unsigned__424;
            type_487->mVolatile=volatile__422;
            type_487->mUniq=type_487->mUniq||uniq__435;
            type_487->mStatic=(type_487->mStatic||static__421)&&!type_487->mUniq;
            type_487->mRecord=type_487->mRecord||record__418;
            type_487->mException=type_487->mException||exception__419;
            type_487->mExtern=type_487->mExtern||extern__433;
            type_487->mInline=type_487->mInline||inline__434;
            type_487->mRestrict=type_487->mRestrict||restrict__428;
            type_487->mLongLong=type_487->mLongLong||long_long_426;
            type_487->mLong=type_487->mLong||long__425;
            type_487->mShort=type_487->mShort||short__427;
            type_487->mPointerNum+=pointer_num_478;
            type_487->mHeap=type_487->mHeap||heap_479;
            type_487->mRefference=type_487->mRefference||refference_480;
            type_487->mNoRefference=type_487->mNoRefference||no_refference_481;
            type_487->mChannel=type_487->mChannel||channel_482;
            __dec_obj261=type_487->mTupleName;
            type_487->mTupleName=(char*)come_increment_ref_count(tuple_name_483);
            __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj262=type_name_417;
            type_name_417=(char*)come_increment_ref_count(type_487->mClass->mName);
            __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__429) {
                klass_549=((struct sClass*)(__right_value596=map$2charphsClassphp_operator_load_element(info->classes,type_name_417)));
                come_call_finalizer3(__right_value596,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_549==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_417),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2461, "struct sClass*", (void*)0, (void*)0)),type_name_417,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__430) {
                klass_591=((struct sClass*)(__right_value604=map$2charphsClassphp_operator_load_element(info->classes,type_name_417)));
                come_call_finalizer3(__right_value604,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_591==((void*)0)&&*info->p!=60) {
                    map$2charphsClassph_insert(info->classes,(char*)come_increment_ref_count(type_name_417),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2468, "struct sClass*", (void*)0, (void*)0)),type_name_417,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj263=type_487;
            type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2472, "struct sType*", (void*)0, (void*)0)),type_name_417,(_Bool)0,info));
            come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_487->mConstant=type_487->mConstant||constant_420;
            type_487->mAtomic=type_487->mAtomic||atomic__440;
            __dec_obj264=type_487->mAlignas;
            type_487->mAlignas=(struct sNode*)come_increment_ref_count(alignas__437);
            if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
            type_487->mRegister=register__423;
            type_487->mUnsigned=type_487->mUnsigned||unsigned__424;
            type_487->mVolatile=volatile__422;
            type_487->mUniq=type_487->mUniq||uniq__435;
            type_487->mStatic=(type_487->mStatic||static__421)&&!type_487->mUniq;
            type_487->mRecord=type_487->mRecord||record__418;
            type_487->mException=type_487->mException||exception__419;
            type_487->mExtern=type_487->mExtern||extern__433;
            type_487->mInline=type_487->mInline||inline__434;
            type_487->mRestrict=type_487->mRestrict||restrict__428;
            type_487->mLongLong=type_487->mLongLong||long_long_426;
            type_487->mLong=type_487->mLong||long__425;
            type_487->mShort=type_487->mShort||short__427;
            type_487->mPointerNum+=pointer_num_478;
            type_487->mHeap=type_487->mHeap||heap_479;
            type_487->mRefference=type_487->mRefference||refference_480;
            type_487->mNoRefference=type_487->mNoRefference||no_refference_481;
            type_487->mChannel=type_487->mChannel||channel_482;
            __dec_obj265=type_487->mTupleName;
            type_487->mTupleName=(char*)come_increment_ref_count(tuple_name_483);
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_487->mPointerNum++;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mHeap=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                type_487->mNoRefference=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mNoRefference=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mRefference=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mNoHeap=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_487->mGuardValue=(_Bool)1;
                }
                else {
                    type_487->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mNoCallingDestructor=(_Bool)1;
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
                type_487->mPointerNum++;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mHeap=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126&&*(info->p+1)==126) {
                info->p+=2;
                skip_spaces_and_lf(info);
                type_487->mNoRefference=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mNoRefference=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mRefference=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_487->mChannel=(_Bool)1;
                if(                type_487->mNoSolvedGenericsType->v1) {
                    type_487->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_592=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2630, "struct list$1sTypeph*", (void*)0, (void*)0))));
            list$1sTypeph_push_back(types_592,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_487)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value612=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_593=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_594=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_595=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value612,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_595) {
                    __result331__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value614=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2641, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_592,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value614,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result331__;
                }
                list$1sTypeph_push_back(types_592,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_593)));
                come_call_finalizer3(type2_593,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_594 = come_decrement_ref_count2(name_594, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_596=list$1sTypeph_length(types_592);
            __dec_obj266=type_487;
            type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2654, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value617=xsprintf("tuple%d",num_tuples_596))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value617 = come_decrement_ref_count2(__right_value617, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_487->mPointerNum++;
            type_487->mHeap=(_Bool)1;
            for(            o2_saved_597=(struct list$1sTypeph*)come_increment_ref_count((types_592)),it_598=list$1sTypeph_begin((o2_saved_597));            !list$1sTypeph_end((o2_saved_597));            it_598=list$1sTypeph_next((o2_saved_597))            ){
                list$1sTypeph_push_back(type_487->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value619=come_call_cloner(sType_clone, it_598))))));
                come_call_finalizer3(__right_value619,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_597,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_487->mPointerNum++;
                    if(                    type_487->mNoSolvedGenericsType->v1) {
                        type_487->mNoSolvedGenericsType->v1->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_487->mHeap=(_Bool)1;
                    if(                    type_487->mNoSolvedGenericsType->v1) {
                        type_487->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126&&*(info->p+1)==126) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    type_487->mNoRefference=(_Bool)1;
                    if(                    type_487->mNoSolvedGenericsType->v1) {
                        type_487->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_487->mRefference=(_Bool)1;
                    if(                    type_487->mNoSolvedGenericsType->v1) {
                        type_487->mNoSolvedGenericsType->v1->mRefference=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_487->mChannel=(_Bool)1;
                    if(                    type_487->mNoSolvedGenericsType->v1) {
                        type_487->mNoSolvedGenericsType->v1->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_487,info)) {
                __dec_obj267=type_487;
                type_487=(struct sType*)come_increment_ref_count(solve_generics(type_487,info->generics_type,info));
                come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_487,type_487,info)) {
                    new_name_599=(char*)come_increment_ref_count(create_generics_name(type_487,info));
                    printf("output generics is failed(%s)\n",new_name_599);
                    exit(9);
                    new_name_599 = come_decrement_ref_count2(new_name_599, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_487->mMultipleTypes=(_Bool)1;
            __dec_obj268=type_name_417;
            type_name_417=(char*)come_increment_ref_count(type_487->mClass->mName);
            __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_592,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_600=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_600,"")) {
            __dec_obj269=type_487->mAttribute;
            type_487->mAttribute=(char*)come_increment_ref_count(attribute_600);
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_493&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj270=var_name_488;
                var_name_488=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_439) {
                static int num_anonymous_var_name_601=0;
                num_anonymous_var_name_601++;
                __dec_obj271=var_name_488;
                var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_601));
                __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj272=var_name_488;
                var_name_488=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_602=0;
                num_anonymous_var_name_602++;
                __dec_obj273=var_name_488;
                var_name_488=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_602));
                __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_493&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_603=info->no_comma;
                info->no_comma=(_Bool)1;
                node_604=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_603;
                __dec_obj274=type_487->mSizeNum;
                type_487->mSizeNum=(struct sNode*)come_increment_ref_count(node_604);
                if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_604) { node_604 = come_decrement_ref_count2(node_604, ((struct sNode*)node_604)->finalize, ((struct sNode*)node_604)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_605=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_600,"")&&string_operator_not_equals(attribute2_605,"")) {
                __dec_obj275=type_487->mAttribute;
                type_487->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_600,((char*)(__right_value629=charp_operator_add(" ",attribute2_605)))));
                __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_605,"")) {
                __dec_obj276=type_487->mAttribute;
                type_487->mAttribute=(char*)come_increment_ref_count(attribute2_605);
                __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_605 = come_decrement_ref_count2(attribute2_605, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_600 = come_decrement_ref_count2(attribute_600, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            type_487->mArrayPointerType=(_Bool)1;
            type_487->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_606=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodeph_push_back(type_487->mArrayNum,(struct sNode*)come_increment_ref_count(node_606));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_606) { node_606 = come_decrement_ref_count2(node_606, ((struct sNode*)node_606)->finalize, ((struct sNode*)node_606)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value632=parse_attribute(info,(_Bool)0)));
    asm_name_607=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_608=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value632,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_608,"")) {
        __dec_obj277=type_487->mAttribute;
        type_487->mAttribute=(char*)come_increment_ref_count(attribute2_608);
        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj278=type_487->mAsmName;
    type_487->mAsmName=(char*)come_increment_ref_count(asm_name_607);
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_487->mChannel) {
        type_before_609=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_487));
        __dec_obj279=type_487;
        type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2825, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj279,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj280=type_487->mArrayNum;
        type_487->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___610[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value636=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2826, "struct list$1sNodeph", (void*)0, (void*)0)),1,__list_values1___610)));
        come_call_finalizer3(__dec_obj280,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value636) { __right_value636 = come_decrement_ref_count2(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj281=type_487->mChannelType;
        type_487->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2827, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
        come_call_finalizer3(__dec_obj281,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj282=type_487->mChannelType->v1;
        type_487->mChannelType->v1=(struct sType*)come_increment_ref_count(type_before_609);
        come_call_finalizer3(__dec_obj282,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_487->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_609,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_487->mException) {
        type2_612=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2832, "struct sType*", (void*)0, (void*)0)),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type2_612->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2833, "struct sType*", (void*)0, (void*)0)),"generics_type0",(_Bool)0,info)));
        list$1sTypephp_operator_store_element(type2_612->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2834, "struct sType*", (void*)0, (void*)0)),"generics_type1",(_Bool)0,info)));
        type2_612->mPointerNum=1;
        type2_612->mHeap=(_Bool)1;
        type3_618=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2838, "struct sType*", (void*)0, (void*)0)),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type3_618->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_487));
        list$1sTypephp_operator_store_element(type3_618->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2840, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)));
        ((struct sType*)come_null_check(((struct sType*)(__right_value650=list$1sTypephp_operator_load_element(type3_618->mGenericsTypes,1))), "05type.c", 2841, 14))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value650,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type4_619=(struct sType*)come_increment_ref_count(solve_generics(type2_612,type3_618,info));
        type4_619->mException=(_Bool)1;
        type4_619->mUniq=type_487->mUniq;
        __result335__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value653=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2848, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type4_619),(char*)come_increment_ref_count(var_name_488),(_Bool)1)));
        come_call_finalizer3(type2_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_619,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_607 = come_decrement_ref_count2(asm_name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_608 = come_decrement_ref_count2(attribute2_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value653,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result335__;
        come_call_finalizer3(type2_612,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_618,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_619,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    object_interface_441) {
        refference_type_620=(struct sType*)come_increment_ref_count(type_487);
        __dec_obj284=type_487;
        type_487=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2853, "struct sType*", (void*)0, (void*)0)),"object",(_Bool)0,info));
        come_call_finalizer3(__dec_obj284,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_487->mPointerNum++;
        type_487->mHeap=(_Bool)1;
        __dec_obj285=type_487->mRefferenceOriginalType;
        type_487->mRefferenceOriginalType=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "05type.c", 2857, "struct tuple1$1sTypeph*", (void*)0, (void*)0));
        come_call_finalizer3(__dec_obj285,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj286=type_487->mRefferenceOriginalType->v1;
        type_487->mRefferenceOriginalType->v1=(struct sType*)come_increment_ref_count(refference_type_620);
        come_call_finalizer3(__dec_obj286,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(refference_type_620,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_477,"")) {
        __dec_obj287=type_487->mAttribute;
        type_487->mAttribute=(char*)come_increment_ref_count(attribute_477);
        __dec_obj287 = come_decrement_ref_count2(__dec_obj287, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result336__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value658=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2872, "struct tuple3$3sTypephcharphbool", (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(type_487),(char*)come_increment_ref_count(var_name_488),(_Bool)1)));
    type_name_417 = come_decrement_ref_count2(type_name_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__437) { alignas__437 = come_decrement_ref_count2(alignas__437, ((struct sNode*)alignas__437)->finalize, ((struct sNode*)alignas__437)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_477 = come_decrement_ref_count2(attribute_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_483 = come_decrement_ref_count2(tuple_name_483, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_487,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_488 = come_decrement_ref_count2(var_name_488, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_607 = come_decrement_ref_count2(asm_name_607, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_608 = come_decrement_ref_count2(attribute2_608, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value658,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static int list$1charph_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_514;
int i_515;
char* __result301__;
char* default_value_516;
char* __result302__;
default_value_516 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_514=self->head;
    i_515=0;
    while(it_514!=((void*)0)) {
        if(        position==i_515) {
            __result301__ = gComeFunResultObject = __result_obj__ = it_514->item;
            gComeFunResultObject = (void*)0;
            return __result301__;
        }
        it_514=it_514->next;
        i_515++;
    }
    memset(&default_value_516,0,sizeof(char*));
    __result302__ = gComeFunResultObject = __result_obj__ = default_value_516;
    default_value_516 = come_decrement_ref_count2(default_value_516, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static struct tuple1$1sTypeph* tuple1$1sTypeph_initialize(struct tuple1$1sTypeph* self, struct sType* v1){
void* __result_obj__=(void*)0;
struct sType* __dec_obj219;
struct tuple1$1sTypeph* __result303__;
    __dec_obj219=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj219,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

static struct tuple3$3sTypepcharphbool* tuple3$3sTypepcharphbool_initialize(struct tuple3$3sTypepcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
char* __dec_obj234;
struct tuple3$3sTypepcharphbool* __result305__;
    self->v1=v1;
    __dec_obj234=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result305__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypepcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void tuple3$3sTypepcharphboolp_finalize(struct tuple3$3sTypepcharphbool* self){
char* __dec_obj235;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj235=self->v2;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj245;
struct sType* __dec_obj246;
char* __dec_obj247;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj245=self->c_value;
            __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj246=self->type;
            come_call_finalizer3(__dec_obj246,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj247=self->c_value_without_right_value_objects;
            __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassph_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_567;
unsigned int it_568;
_Bool same_key_exist_585;
char* it2_588;
struct map$2charphsClassph* __result330__;
    if(    self->len*10>=self->size) {
        map$2charphsClassph_rehash(self);
    }
    hash_567=charp_get_hash_key(key)%self->size;
    it_568=hash_567;
    while((_Bool)1) {
        if(        self->item_existance[it_568]) {
            if(            charp_equals(self->keys[it_568],key)) {
                if(                1) {
                    list$1charp_remove(self->key_list,self->keys[it_568]);
                    self->keys[it_568] = come_decrement_ref_count2(self->keys[it_568], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_568]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_568]);
                    self->keys[it_568]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_568],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_568]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_568]=item;
                }
                break;
            }
            it_568++;
            if(            it_568>=self->size) {
                it_568=0;
            }
            else if(            it_568==hash_567) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_568]=(_Bool)1;
            if(            1) {
                self->keys[it_568]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_568]=key;
            }
            if(            1) {
                self->items[it_568]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_568]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_585=(_Bool)0;
    for(    it2_588=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_588=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_588,key)) {
            same_key_exist_585=(_Bool)1;
        }
    }
    if(    !same_key_exist_585) {
        list$1charp_push_back(self->key_list,key);
    }
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void map$2charphsClassph_rehash(struct map$2charphsClassph* self){
int size_550;
void* __right_value597 = (void*)0;
char** keys_551;
void* __right_value598 = (void*)0;
struct sClass** items_552;
void* __right_value599 = (void*)0;
_Bool* item_existance_553;
int len_554;
char* it_557;
struct sClass* default_value_560;
void* __right_value600 = (void*)0;
struct sClass* it2_561;
unsigned int hash_564;
int n_565;
struct sClass* default_value_566;
void* __right_value601 = (void*)0;
default_value_560 = (void*)0;
default_value_566 = (void*)0;
    size_550=self->size*10;
    keys_551=(char**)come_increment_ref_count(((char**)(__right_value597=(char**)come_calloc(1, sizeof(char*)*(1*(size_550)), "./comelang.h", 2707, "char**", (void*)0, (void*)0))));
    items_552=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value598=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_550)), "./comelang.h", 2708, "struct sClass**", (void*)0, (void*)0))));
    item_existance_553=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value599=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_550)), "./comelang.h", 2709, "_Bool*", (void*)0, (void*)0))));
    len_554=0;
    for(    it_557=map$2charphsClassph_begin(self);    !map$2charphsClassph_end(self);    it_557=map$2charphsClassph_next(self)    ){
        memset(&default_value_560,0,sizeof(struct sClass*));
        it2_561=((struct sClass*)(__right_value600=map$2charphsClassph_at(self,it_557,default_value_560)));
        come_call_finalizer3(__right_value600,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_564=charp_get_hash_key(it_557)%size_550;
        n_565=hash_564;
        while((_Bool)1) {
            if(            item_existance_553[n_565]) {
                n_565++;
                if(                n_565>=size_550) {
                    n_565=0;
                }
                else if(                n_565==hash_564) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_553[n_565]=(_Bool)1;
                keys_551[n_565]=it_557;
                items_552[n_565]=((struct sClass*)(__right_value601=map$2charphsClassph_at(self,it_557,default_value_566)));
                come_call_finalizer3(__right_value601,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_554++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_551;
    self->items=items_552;
    self->item_existance=item_existance_553;
    self->size=size_550;
    self->len=len_554;
}

static char* map$2charphsClassph_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_555;
char* __result310__;
char* __result311__;
char* result_556;
char* __result312__;
result_555 = (void*)0;
result_556 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_555,0,sizeof(char*));
        __result310__ = gComeFunResultObject = __result_obj__ = result_555;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result311__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result311__;
    }
    memset(&result_556,0,sizeof(char*));
    __result312__ = gComeFunResultObject = __result_obj__ = result_556;
    gComeFunResultObject = (void*)0;
    return __result312__;
}

static _Bool map$2charphsClassph_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassph_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_558;
char* __result313__;
char* __result314__;
char* result_559;
char* __result315__;
result_558 = (void*)0;
result_559 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_558,0,sizeof(char*));
        __result313__ = gComeFunResultObject = __result_obj__ = result_558;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result314__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result314__;
    }
    memset(&result_559,0,sizeof(char*));
    __result315__ = gComeFunResultObject = __result_obj__ = result_559;
    gComeFunResultObject = (void*)0;
    return __result315__;
}

static struct sClass* map$2charphsClassph_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_562;
unsigned int it_563;
struct sClass* __result316__;
struct sClass* __result317__;
struct sClass* __result318__;
struct sClass* __result319__;
    hash_562=charp_get_hash_key(((char*)key))%self->size;
    it_563=hash_562;
    while((_Bool)1) {
        if(        self->item_existance[it_563]) {
            if(            charp_equals(self->keys[it_563],key)) {
                __result316__ = gComeFunResultObject = __result_obj__ = self->items[it_563];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result316__;
            }
            it_563++;
            if(            it_563>=self->size) {
                it_563=0;
            }
            else if(            it_563==hash_562) {
                __result317__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result317__;
            }
        }
        else {
            __result318__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
    }
    __result319__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result319__;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_569;
struct list_item$1charp* it_570;
struct list$1charp* __result323__;
    it2_569=0;
    it_570=self->head;
    while(it_570!=((void*)0)) {
        if(        charp_equals(it_570->item,item)) {
            list$1charp_delete(self,it2_569,it2_569+1);
            break;
        }
        it2_569++;
        it_570=it_570->next;
    }
    __result323__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_571;
struct list$1charp* __result320__;
struct list_item$1charp* it_574;
int i_575;
struct list_item$1charp* prev_it_576;
struct list_item$1charp* it_577;
int i_578;
struct list_item$1charp* prev_it_579;
struct list_item$1charp* it_580;
struct list_item$1charp* head_prev_it_581;
struct list_item$1charp* tail_it_582;
int i_583;
struct list_item$1charp* prev_it_584;
struct list$1charp* __result322__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_571=tail;
        tail=head;
        head=tmp_571;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result320__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_574=self->head;
        i_575=0;
        while(it_574!=((void*)0)) {
            if(            i_575<tail) {
                prev_it_576=it_574;
                it_574=it_574->next;
                i_575++;
                come_call_finalizer3(prev_it_576,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_575==tail) {
                self->head=it_574;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_574=it_574->next;
                i_575++;
            }
        }
    }
    else if(    tail==self->len) {
        it_577=self->head;
        i_578=0;
        while(it_577!=((void*)0)) {
            if(            i_578==head) {
                self->tail=it_577->prev;
                self->tail->next=((void*)0);
            }
            if(            i_578>=head) {
                prev_it_579=it_577;
                it_577=it_577->next;
                i_578++;
                come_call_finalizer3(prev_it_579,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_577=it_577->next;
                i_578++;
            }
        }
    }
    else {
        it_580=self->head;
        head_prev_it_581=((void*)0);
        tail_it_582=((void*)0);
        i_583=0;
        while(it_580!=((void*)0)) {
            if(            i_583==head) {
                head_prev_it_581=it_580->prev;
            }
            if(            i_583==tail) {
                tail_it_582=it_580;
            }
            if(            i_583>=head&&i_583<tail) {
                prev_it_584=it_580;
                it_580=it_580->next;
                i_583++;
                come_call_finalizer3(prev_it_584,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_580=it_580->next;
                i_583++;
            }
        }
        if(        head_prev_it_581!=((void*)0)) {
            head_prev_it_581->next=tail_it_582;
        }
        if(        tail_it_582!=((void*)0)) {
            tail_it_582->prev=head_prev_it_581;
        }
    }
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result322__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_572;
struct list_item$1charp* prev_it_573;
struct list$1charp* __result321__;
    it_572=self->head;
    while(it_572!=((void*)0)) {
        prev_it_573=it_572;
        it_572=it_572->next;
        come_call_finalizer3(prev_it_573,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result321__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_586;
char* __result324__;
char* __result325__;
char* result_587;
char* __result326__;
result_586 = (void*)0;
result_587 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_586,0,sizeof(char*));
        __result324__ = gComeFunResultObject = __result_obj__ = result_586;
        gComeFunResultObject = (void*)0;
        return __result324__;
    }
    self->it=self->head;
    if(    self->it) {
        __result325__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    memset(&result_587,0,sizeof(char*));
    __result326__ = gComeFunResultObject = __result_obj__ = result_587;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_589;
char* __result327__;
char* __result328__;
char* result_590;
char* __result329__;
result_589 = (void*)0;
result_590 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_589,0,sizeof(char*));
        __result327__ = gComeFunResultObject = __result_obj__ = result_589;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result328__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result328__;
    }
    memset(&result_590,0,sizeof(char*));
    __result329__ = gComeFunResultObject = __result_obj__ = result_590;
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_611;
struct list$1sNodeph* __result332__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_611=0;    i_611<num_value;    i_611++    ){
        list$1sNodeph_push_back(self,values[i_611]);
    }
    __result332__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypeph_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_613;
int i_614;
struct sType* default_value_615;
struct list$1sTypeph* __result333__;
struct list_item$1sTypeph* it_616;
int i_617;
struct sType* __dec_obj283;
struct list$1sTypeph* __result334__;
default_value_615 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_613=self->len;
        for(        i_614=0;        i_614<position-len_613;        i_614++        ){
            memset(&default_value_615,0,sizeof(struct sType*));
            list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(default_value_615));
            come_call_finalizer3(default_value_615,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypeph_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result333__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    it_616=self->head;
    i_617=0;
    while(it_616!=((void*)0)) {
        if(        position==i_617) {
            __dec_obj283=it_616->item;
            it_616->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj283,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_616=it_616->next;
        i_617++;
    }
    __result334__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result334__;
}

