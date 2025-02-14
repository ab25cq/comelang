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
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool
{
    struct list$1sTypeph* v1;
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
struct tuple2$2charphbool* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
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
_Bool is_type_name(char* buf, struct sInfo* info);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
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
static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self);
static _Bool list$1sTypephp_end(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_next(struct list$1sTypeph* self);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static struct sType* sType_clone(struct sType* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self);
static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4);
static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
static int list$1sTypephp_length(struct list$1sTypeph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static int list$1sNodephp_length(struct list$1sNodeph* self);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct tuple2$2sTypephcharph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self);
static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self);
static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
void skip_pointer_attribute(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self);
static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self);
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
static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item);
static struct list$1sTypeph* list$1sTypephp_replace(struct list$1sTypeph* self, int position, struct sType* item);
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

_Bool is_type_name(char* buf, struct sInfo* info){
void* __right_value249 = (void*)0;
struct sClass* klass_290;
void* __right_value250 = (void*)0;
struct sType* type_298;
void* __right_value251 = (void*)0;
struct sClass* generics_class_312;
void* __right_value252 = (void*)0;
_Bool generics_type_name_313;
void* __right_value253 = (void*)0;
_Bool mgenerics_type_name_319;
    klass_290=((struct sClass*)(__right_value249=map$2charphsClassphp_operator_load_element(info->classes,buf)));
    come_call_finalizer3(__right_value249,sClass_finalize, 0, 1, 0, 0, (void*)0);
    type_298=((struct sType*)(__right_value250=map$2charphsTypephp_operator_load_element(info->types,buf)));
    come_call_finalizer3(__right_value250,sType_finalize, 0, 1, 0, 0, (void*)0);
    generics_class_312=((struct sClass*)(__right_value251=map$2charphsClassphp_operator_load_element(info->generics_classes,buf)));
    come_call_finalizer3(__right_value251,sClass_finalize, 0, 1, 0, 0, (void*)0);
    generics_type_name_313=list$1charphp_contained(info->generics_type_names,((char*)(__right_value252=__builtin_string(buf))));
    __right_value252 = come_decrement_ref_count2(__right_value252, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    mgenerics_type_name_319=list$1charphp_contained(info->method_generics_type_names,((char*)(__right_value253=__builtin_string(buf))));
    __right_value253 = come_decrement_ref_count2(__right_value253, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    if(    gComeC) {
        return (type_298&&type_298->mTypedef)||(klass_290&&klass_290->mNumber)||(klass_290&&klass_290->mFloat)||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||charp_operator_equals(buf,"_Noreturn")||charp_operator_equals(buf,"__noreturn")||charp_operator_equals(buf,"_noreturn")||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||charp_operator_equals(buf,"void");
    }
    else {
        return generics_class_312||generics_type_name_313||mgenerics_type_name_319||klass_290||type_298||charp_operator_equals(buf,"const")||charp_operator_equals(buf,"register")||charp_operator_equals(buf,"static")||charp_operator_equals(buf,"volatile")||charp_operator_equals(buf,"unsigned")||charp_operator_equals(buf,"signed")||charp_operator_equals(buf,"struct")||charp_operator_equals(buf,"enum")||charp_operator_equals(buf,"union")||charp_operator_equals(buf,"extern")||info->in_top_level&&(charp_operator_equals(buf,"inline")||charp_operator_equals(buf,"__inline")||charp_operator_equals(buf,"__always_inline")||charp_operator_equals(buf,"__inline__")||charp_operator_equals(buf,"__forceinline"))||charp_operator_equals(buf,"__extension__")||(info->in_top_level&&charp_operator_equals(buf,"_Noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"__noreturn"))||(info->in_top_level&&charp_operator_equals(buf,"_noreturn"))||charp_operator_equals(buf,"__typeof__")||charp_operator_equals(buf,"_Nullable")||charp_operator_equals(buf,"__declspec")||charp_operator_equals(buf,"_Alignas")||charp_operator_equals(buf,"_Atomic")||((charp_operator_equals(buf,"__attribute")||charp_operator_equals(buf,"__attribute__"))&&*info->p==40)||(charp_operator_equals(buf,"immutable"))||(charp_operator_equals(buf,"generate"))||(charp_operator_equals(buf,"mutable"))||(charp_operator_equals(buf,"tup")&&(*info->p==58||*info->p==40))||(info->in_top_level&&charp_operator_equals(buf,"exception"))||(info->in_top_level&&charp_operator_equals(buf,"record"))||(info->in_top_level&&charp_operator_equals(buf,"uniq"));
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_291;
unsigned int hash_292;
unsigned int it_293;
struct sClass* __result220__;
struct sClass* __result221__;
struct sClass* __result222__;
struct sClass* __result223__;
default_value_291 = (void*)0;
    memset(&default_value_291,0,sizeof(struct sClass*));
    hash_292=charp_get_hash_key(((char*)key))%self->size;
    it_293=hash_292;
    while((_Bool)1) {
        if(        self->item_existance[it_293]) {
            if(            charp_equals(self->keys[it_293],key)) {
                __result220__ = gComeFunResultObject = __result_obj__ = self->items[it_293];
                come_call_finalizer3(default_value_291,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
            it_293++;
            if(            it_293>=self->size) {
                it_293=0;
            }
            else if(            it_293==hash_292) {
                __result221__ = gComeFunResultObject = __result_obj__ = default_value_291;
                come_call_finalizer3(default_value_291,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result221__;
            }
        }
        else {
            __result222__ = gComeFunResultObject = __result_obj__ = default_value_291;
            come_call_finalizer3(default_value_291,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result222__;
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = default_value_291;
    come_call_finalizer3(default_value_291,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
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
struct list_item$1voidph* it_294;
struct list_item$1voidph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        come_call_finalizer3(prev_it_295,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1voidph* it_296;
struct list_item$1voidph* prev_it_297;
    it_296=self->head;
    while(it_296!=((void*)0)) {
        prev_it_297=it_296;
        it_296=it_296->next;
        come_call_finalizer3(prev_it_297,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sType* map$2charphsTypephp_operator_load_element(struct map$2charphsTypeph* self, char* key){
void* __result_obj__=(void*)0;
struct sType* default_value_299;
unsigned int hash_300;
unsigned int it_301;
struct sType* __result224__;
struct sType* __result225__;
struct sType* __result226__;
struct sType* __result227__;
default_value_299 = (void*)0;
    memset(&default_value_299,0,sizeof(struct sType*));
    hash_300=charp_get_hash_key(((char*)key))%self->size;
    it_301=hash_300;
    while((_Bool)1) {
        if(        self->item_existance[it_301]) {
            if(            charp_equals(self->keys[it_301],key)) {
                __result224__ = gComeFunResultObject = __result_obj__ = self->items[it_301];
                come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result224__;
            }
            it_301++;
            if(            it_301>=self->size) {
                it_301=0;
            }
            else if(            it_301==hash_300) {
                __result225__ = gComeFunResultObject = __result_obj__ = default_value_299;
                come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result225__;
            }
        }
        else {
            __result226__ = gComeFunResultObject = __result_obj__ = default_value_299;
            come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result226__;
        }
    }
    __result227__ = gComeFunResultObject = __result_obj__ = default_value_299;
    come_call_finalizer3(default_value_299,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result227__;
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj37;
struct sType* __dec_obj38;
struct sType* __dec_obj39;
char* __dec_obj40;
char* __dec_obj41;
struct list$1sTypeph* __dec_obj42;
struct list$1sNodeph* __dec_obj44;
struct list$1sTypeph* __dec_obj46;
struct list$1charph* __dec_obj47;
struct sType* __dec_obj48;
struct sNode* __dec_obj49;
struct sType* __dec_obj50;
struct sNode* __dec_obj51;
char* __dec_obj52;
char* __dec_obj53;
char* __dec_obj54;
char* __dec_obj55;
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
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj50,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
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

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_302;
struct list_item$1sTypeph* prev_it_303;
    it_302=self->head;
    while(it_302!=((void*)0)) {
        prev_it_303=it_302;
        it_302=it_302->next;
        come_call_finalizer3(prev_it_303,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sTypeph* it_304;
struct list_item$1sTypeph* prev_it_305;
    it_304=self->head;
    while(it_304!=((void*)0)) {
        prev_it_305=it_304;
        it_304=it_304->next;
        come_call_finalizer3(prev_it_305,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_306;
struct list_item$1sNodeph* prev_it_307;
    it_306=self->head;
    while(it_306!=((void*)0)) {
        prev_it_307=it_306;
        it_306=it_306->next;
        come_call_finalizer3(prev_it_307,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_308;
struct list_item$1sNodeph* prev_it_309;
    it_308=self->head;
    while(it_308!=((void*)0)) {
        prev_it_309=it_308;
        it_308=it_308->next;
        come_call_finalizer3(prev_it_309,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_310;
struct list_item$1charph* prev_it_311;
    it_310=self->head;
    while(it_310!=((void*)0)) {
        prev_it_311=it_310;
        it_310=it_310->next;
        come_call_finalizer3(prev_it_311,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static _Bool list$1charphp_contained(struct list$1charph* self, char* item){
char* it_316;
    for(    it_316=list$1charphp_begin(self);    !list$1charphp_end(self);    it_316=list$1charphp_next(self)    ){
        if(        charp_equals(it_316,item)) {
            return (_Bool)1;
        }
    }
    return (_Bool)0;
}

static char* list$1charphp_begin(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_314;
char* __result228__;
char* __result229__;
char* result_315;
char* __result230__;
result_314 = (void*)0;
result_315 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_314,0,sizeof(char*));
        __result228__ = gComeFunResultObject = __result_obj__ = result_314;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    self->it=self->head;
    if(    self->it) {
        __result229__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result229__;
    }
    memset(&result_315,0,sizeof(char*));
    __result230__ = gComeFunResultObject = __result_obj__ = result_315;
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static _Bool list$1charphp_end(struct list$1charph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charphp_next(struct list$1charph* self){
void* __result_obj__=(void*)0;
char* result_317;
char* __result231__;
char* __result232__;
char* result_318;
char* __result233__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_317,0,sizeof(char*));
        __result231__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result232__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    memset(&result_318,0,sizeof(char*));
    __result233__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result233__;
}

void skip_paren(struct sInfo* info){
int nest_320;
    nest_320=0;
    while((_Bool)1) {
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_320++;
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            nest_320--;
            if(            nest_320==0) {
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
char c_321;
    if(    strlen(info->p)<strlen(str)) {
        return (_Bool)0;
    }
    c_321=*(info->p+strlen(str));
    return strmemcmp(info->p,str)&&(c_321==59||c_321==32||c_321==9||c_321==10||c_321==10||c_321==40);
}

char* parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value254 = (void*)0;
void* __right_value255 = (void*)0;
struct buffer* buf_322;
void* __right_value256 = (void*)0;
_Bool _if_conditional1;
void* __right_value257 = (void*)0;
char* __result234__;
void* __right_value258 = (void*)0;
char* result_323;
void* __right_value259 = (void*)0;
_Bool _if_conditional2;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
char* __result239__;
char* __result240__;
    buf_322=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 96, "struct buffer*", (void*)0, (void*)0))));
    parse_sharp_v5(info);
    while((*info->p>=97&&*info->p<=122)||(*info->p>=65&&*info->p<=90)||*info->p==95||(*info->p>=48&&*info->p<=57)||(*info->p==36)) {
        buffer_append_char(buf_322,*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    if(    (_if_conditional1=(string_length(((char*)(__right_value256=buffer_to_string(buf_322))))==0)),    (__right_value256 = come_decrement_ref_count2(__right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional1) {
        err_msg(info,"unexpected character(%c), expected word character, caller %s %d\n",*info->p,info->caller_sname,info->caller_line);
        __result234__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("")));
        come_call_finalizer3(buf_322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        __right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_323=(char*)come_increment_ref_count(buffer_to_string(buf_322));
    if(    (_if_conditional2=(info->module_params&&((char*)(__right_value259=map$2charphcharphp_operator_load_element(info->module_params,result_323))))),    (__right_value259 = come_decrement_ref_count2(__right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
    _if_conditional2) {
        __result239__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string(((char*)(__right_value260=map$2charphcharphp_operator_load_element(info->module_params,result_323))))));
        come_call_finalizer3(buf_322,buffer_finalize, 0, 0, 0, 0, (void*)0);
        result_323 = come_decrement_ref_count2(result_323, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        __right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = result_323;
    come_call_finalizer3(buf_322,buffer_finalize, 0, 0, 0, 0, (void*)0);
    result_323 = come_decrement_ref_count2(result_323, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static char* map$2charphcharphp_operator_load_element(struct map$2charphcharph* self, char* key){
void* __result_obj__=(void*)0;
char* default_value_324;
unsigned int hash_325;
unsigned int it_326;
char* __result235__;
char* __result236__;
char* __result237__;
char* __result238__;
default_value_324 = (void*)0;
    memset(&default_value_324,0,sizeof(char*));
    hash_325=charp_get_hash_key(((char*)key))%self->size;
    it_326=hash_325;
    while((_Bool)1) {
        if(        self->item_existance[it_326]) {
            if(            charp_equals(self->keys[it_326],key)) {
                __result235__ = gComeFunResultObject = __result_obj__ = self->items[it_326];
                default_value_324 = come_decrement_ref_count2(default_value_324, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result235__;
            }
            it_326++;
            if(            it_326>=self->size) {
                it_326=0;
            }
            else if(            it_326==hash_325) {
                __result236__ = gComeFunResultObject = __result_obj__ = default_value_324;
                default_value_324 = come_decrement_ref_count2(default_value_324, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result236__;
            }
        }
        else {
            __result237__ = gComeFunResultObject = __result_obj__ = default_value_324;
            default_value_324 = come_decrement_ref_count2(default_value_324, (void*)0, (void*)0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result237__;
        }
    }
    __result238__ = gComeFunResultObject = __result_obj__ = default_value_324;
    default_value_324 = come_decrement_ref_count2(default_value_324, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

char* backtrace_parse_word(struct sInfo* info){
void* __result_obj__=(void*)0;
char* p_327;
int sline_328;
char* buf_329;
void* __right_value262 = (void*)0;
char* __dec_obj56;
void* __right_value263 = (void*)0;
char* __dec_obj57;
char* __result241__;
buf_329 = (void*)0;
    p_327=info->p;
    sline_328=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        __dec_obj56=buf_329;
        buf_329=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj57=buf_329;
        buf_329=(char*)come_increment_ref_count(__builtin_string(""));
        __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    info->p=p_327;
    info->sline=sline_328;
    __result241__ = gComeFunResultObject = __result_obj__ = buf_329;
    buf_329 = come_decrement_ref_count2(buf_329, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
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
int line_330;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct buffer* fname_331;
void* __right_value266 = (void*)0;
char* __dec_obj58;
int nest_332;
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
                line_330=0;
                fname_331=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 195, "struct buffer*", (void*)0, (void*)0))));
                while(xisdigit(*info->p)) {
                    line_330=line_330*10+(*info->p-48);
                    info->p++;
                }
                skip_spaces_and_lf2(info);
                if(                *info->p==34) {
                    info->p++;
                    while(*info->p!=34) {
                        buffer_append_char(fname_331,*info->p);
                        info->p++;
                    }
                    while(*info->p!=10) {
                        info->p++;
                    }
                    info->p++;
                }
                info->sline=line_330;
                __dec_obj58=info->sname;
                info->sname=(char*)come_increment_ref_count(buffer_to_string(fname_331));
                __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
                skip_spaces_and_lf2(info);
                come_call_finalizer3(fname_331,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            nest_332=0;
            while(1) {
                if(                *info->p==47&&*(info->p+1)==42) {
                    info->p+=2;
                    nest_332++;
                }
                else if(                *info->p==42&&*(info->p+1)==47) {
                    info->p+=2;
                    nest_332--;
                    if(                    nest_332==0) {
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
struct list$1sTypeph* o2_saved_333;
struct sType* it_336;
_Bool __result248__;
    for(    o2_saved_333=(struct list$1sTypeph*)come_increment_ref_count((type->mGenericsTypes)),it_336=list$1sTypephp_begin((o2_saved_333));    !list$1sTypephp_end((o2_saved_333));    it_336=list$1sTypephp_next((o2_saved_333))    ){
        if(        is_contained_generics_class(it_336,info)) {
            __result248__ = (_Bool)1;
            come_call_finalizer3(o2_saved_333,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            return __result248__;
        }
    }
    come_call_finalizer3(o2_saved_333,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    type->mClass->mGenerics) {
        return (_Bool)1;
    }
    if(    type->mClass->mMethodGenerics) {
        return (_Bool)1;
    }
    return (_Bool)0;
}

static struct sType* list$1sTypephp_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_334;
struct sType* __result242__;
struct sType* __result243__;
struct sType* result_335;
struct sType* __result244__;
result_334 = (void*)0;
result_335 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_334,0,sizeof(struct sType*));
        __result242__ = gComeFunResultObject = __result_obj__ = result_334;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    self->it=self->head;
    if(    self->it) {
        __result243__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    memset(&result_335,0,sizeof(struct sType*));
    __result244__ = gComeFunResultObject = __result_obj__ = result_335;
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static _Bool list$1sTypephp_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypephp_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_337;
struct sType* __result245__;
struct sType* __result246__;
struct sType* result_338;
struct sType* __result247__;
result_337 = (void*)0;
result_338 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_337,0,sizeof(struct sType*));
        __result245__ = gComeFunResultObject = __result_obj__ = result_337;
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result246__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    memset(&result_338,0,sizeof(struct sType*));
    __result247__ = gComeFunResultObject = __result_obj__ = result_338;
    gComeFunResultObject = (void*)0;
    return __result247__;
}

struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1sTypeph* param_types_339;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1charph* param_names_340;
void* __right_value271 = (void*)0;
void* __right_value272 = (void*)0;
struct list$1charph* param_default_parametors_341;
_Bool var_args_342;
void* __right_value276 = (void*)0;
void* __right_value311 = (void*)0;
struct sType* type__346;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
_Bool void_param_361;
char* p_362;
int sline_363;
void* __right_value314 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var1 = (void*)0;
struct sType* param_type_364=0;
char* param_name_365=0;
_Bool err_366=0;
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result267__;
void* __right_value318 = (void*)0;
struct sType* param_type2_368;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
char* p_372;
_Bool no_comma_373;
void* __right_value324 = (void*)0;
struct sNode* node_374;
char* p2_375;
void* __right_value325 = (void*)0;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result272__;
    param_types_339=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 324, "struct list$1sTypeph*", (void*)0, (void*)0))));
    param_names_340=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 325, "struct list$1charph*", (void*)0, (void*)0))));
    param_default_parametors_341=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "05type.c", 326, "struct list$1charph*", (void*)0, (void*)0))));
    var_args_342=(_Bool)0;
    if(    in_constructor_) {
        list$1charphp_add(param_names_340,(char*)come_increment_ref_count(xsprintf("self")));
        type__346=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        type__346->mHeap=(_Bool)1;
        list$1sTypephp_add(param_types_339,(struct sType*)come_increment_ref_count(type__346));
        list$1charphp_add(param_default_parametors_341,((void*)0));
        come_call_finalizer3(type__346,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->in_class) {
        list$1charphp_add(param_names_340,(char*)come_increment_ref_count(xsprintf("self")));
        list$1sTypephp_add(param_types_339,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type)));
        list$1charphp_add(param_default_parametors_341,((void*)0));
    }
    expected_next_character(40,info);
    void_param_361=(_Bool)0;
    {
        p_362=info->p;
        sline_363=info->sline;
        if(        strmemcmp(info->p,"void")) {
            info->p+=strlen("void");
            skip_spaces_and_lf(info);
            if(            *info->p==41) {
                void_param_361=(_Bool)1;
            }
        }
        info->p=p_362;
        info->sline=sline_363;
    }
    if(    void_param_361) {
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
            multiple_assign_var1=((struct tuple3$3sTypephcharphbool*)(__right_value314=parse_type(info,(_Bool)1,(_Bool)0,(_Bool)1)));
            param_type_364=(struct sType*)come_increment_ref_count(multiple_assign_var1->v1);
            param_name_365=(char*)come_increment_ref_count(multiple_assign_var1->v2);
            err_366=multiple_assign_var1->v3;
            come_call_finalizer3(__right_value314,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_366) {
                printf("%s %d: failed to function parametor\n",info->sname,info->sline);
                __result267__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)(__right_value317=tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool**)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "05type.c", 388, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool", tuple4$4list$1sTypephplist$1charphplist$1charphpbool_finalize, tuple4$4list$1sTypephplist$1charphplist$1charphpbool_clone)),(struct list$1sTypeph*)((void*)0),(struct list$1charph*)((void*)0),(struct list$1charph*)((void*)0),(_Bool)0)));
                come_call_finalizer3(param_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_365 = come_decrement_ref_count2(param_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_types_339,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value317,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result267__;
            }
            param_type2_368=(struct sType*)come_increment_ref_count(solve_generics(param_type_364,info->generics_type,info));
            param_type2_368->mFunctionParam=(_Bool)1;
            list$1sTypephp_push_back(param_types_339,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type2_368)));
            list$1charphp_push_back(param_names_340,(char*)come_increment_ref_count(come_call_cloner(string_clone, param_name_365)));
            if(            *info->p==61&&*(info->p+1)!=62) {
                info->p++;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                p_372=info->p;
                no_comma_373=info->no_comma;
                info->no_comma=(_Bool)1;
                node_374=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_373;
                p2_375=info->p;
                char buf_376[p2_375-p_372+1];
                memset(&buf_376, 0, sizeof(char)                *(p2_375-p_372+1)                );
                memcpy(buf_376,p_372,p2_375-p_372);
                buf_376[p2_375-p_372]=0;
                list$1charphp_push_back(param_default_parametors_341,(char*)come_increment_ref_count(__builtin_string(buf_376)));
                if(node_374) { node_374 = come_decrement_ref_count2(node_374, ((struct sNode*)node_374)->finalize, ((struct sNode*)node_374)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                list$1charphp_push_back(param_default_parametors_341,((void*)0));
            }
            parse_sharp_v5(info);
            if(            *info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                strmemcmp(info->p,"...")) {
                    info->p+=strlen("...");
                    skip_spaces_and_lf(info);
                    var_args_342=(_Bool)1;
                    expected_next_character(41,info);
                    come_call_finalizer3(param_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                    param_name_365 = come_decrement_ref_count2(param_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(param_type2_368,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
            }
            else if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
                come_call_finalizer3(param_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
                param_name_365 = come_decrement_ref_count2(param_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_type2_368,sType_finalize, 0, 0, 0, 0, (void*)0);
                break;
            }
            come_call_finalizer3(param_type_364,sType_finalize, 0, 0, 0, 0, (void*)0);
            param_name_365 = come_decrement_ref_count2(param_name_365, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_type2_368,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    __result272__ = gComeFunResultObject = __result_obj__ = ((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value331=tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool**)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "05type.c", 448, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool", tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_clone)),(struct list$1sTypeph*)come_increment_ref_count(param_types_339),(struct list$1charph*)come_increment_ref_count(param_names_340),(struct list$1charph*)come_increment_ref_count(param_default_parametors_341),var_args_342)));
    come_call_finalizer3(param_types_339,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_340,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_341,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value331,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1sTypeph* list$1sTypephp_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result249__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value273 = (void*)0;
struct list_item$1charph* litem_343;
char* __dec_obj59;
void* __right_value274 = (void*)0;
struct list_item$1charph* litem_344;
char* __dec_obj60;
void* __right_value275 = (void*)0;
struct list_item$1charph* litem_345;
char* __dec_obj61;
struct list$1charph* __result250__;
    if(    self->len==0) {
        litem_343=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value273=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1220, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_343->prev=((void*)0);
        litem_343->next=((void*)0);
        __dec_obj59=litem_343->item;
        litem_343->item=(char*)come_increment_ref_count(item);
        __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_343;
        self->head=litem_343;
    }
    else if(    self->len==1) {
        litem_344=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value274=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1230, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_344->prev=self->head;
        litem_344->next=((void*)0);
        __dec_obj60=litem_344->item;
        litem_344->item=(char*)come_increment_ref_count(item);
        __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_344;
        self->head->next=litem_344;
    }
    else {
        litem_345=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value275=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1240, "struct list_item$1charph*", (void*)0, (void*)0))));
        litem_345->prev=self->tail;
        litem_345->next=((void*)0);
        __dec_obj61=litem_345->item;
        litem_345->item=(char*)come_increment_ref_count(item);
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_345;
        self->tail=litem_345;
    }
    self->len++;
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result251__;
void* __right_value277 = (void*)0;
struct sType* result_347;
void* __right_value278 = (void*)0;
struct sType* __dec_obj62;
void* __right_value279 = (void*)0;
struct sType* __dec_obj63;
void* __right_value280 = (void*)0;
struct sType* __dec_obj64;
void* __right_value281 = (void*)0;
char* __dec_obj65;
void* __right_value282 = (void*)0;
char* __dec_obj66;
void* __right_value289 = (void*)0;
struct list$1sTypeph* __dec_obj70;
void* __right_value297 = (void*)0;
struct list$1sNodeph* __dec_obj74;
void* __right_value298 = (void*)0;
struct list$1sTypeph* __dec_obj75;
void* __right_value302 = (void*)0;
struct list$1charph* __dec_obj76;
void* __right_value303 = (void*)0;
struct sType* __dec_obj77;
void* __right_value304 = (void*)0;
struct sNode* __dec_obj78;
void* __right_value305 = (void*)0;
struct sType* __dec_obj79;
void* __right_value306 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value307 = (void*)0;
char* __dec_obj81;
void* __right_value308 = (void*)0;
char* __dec_obj82;
void* __right_value309 = (void*)0;
char* __dec_obj83;
void* __right_value310 = (void*)0;
char* __dec_obj84;
struct sType* __result263__;
    if(    self==(void*)0) {
        __result251__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result251__;
    }
    result_347=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone));
    if(    self!=((void*)0)) {
        result_347->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj62=result_347->mNoSolvedGenericsType;
        result_347->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj62,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj63=result_347->mOriginalLoadVarType;
        result_347->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj64=result_347->mAnyOriginalType;
        result_347->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj64,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj65=result_347->mInterfaceName;
        result_347->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj66=result_347->mGenericsName;
        result_347->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj70=result_347->mGenericsTypes;
        result_347->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj70,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj74=result_347->mArrayNum;
        result_347->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj74,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj75=result_347->mParamTypes;
        result_347->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj75,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj76=result_347->mParamNames;
        result_347->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj76,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj77=result_347->mResultType;
        result_347->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj78=result_347->mAlignas;
        result_347->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj79=result_347->mChannelType;
        result_347->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_347->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_347->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_347->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_347->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_347->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_347->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_347->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_347->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_347->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_347->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_347->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_347->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_347->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_347->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_347->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_347->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_347->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_347->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_347->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_347->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_347->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_347->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_347->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj80=result_347->mSizeNum;
        result_347->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_347->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj81=result_347->mOriginalTypeName;
        result_347->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_347->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_347->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_347->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_347->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_347->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_347->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_347->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj82=result_347->mAsmName;
        result_347->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_347->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_347->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_347->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_347->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_347->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj83=result_347->mTupleName;
        result_347->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj84=result_347->mAttribute;
        result_347->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_347->mGenerate=self->mGenerate;
    }
    __result263__ = gComeFunResultObject = __result_obj__ = result_347;
    come_call_finalizer3(result_347,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result252__;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct list$1sTypeph* result_348;
struct list_item$1sTypeph* it_349;
void* __right_value288 = (void*)0;
struct list$1sTypeph* __result254__;
    if(    self==((void*)0)) {
        __result252__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_348=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1206, "struct list$1sTypeph*", (void*)0, (void*)0))));
    it_349=self->head;
    while(it_349!=((void*)0)) {
        list$1sTypephp_add(result_348,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_349->item)));
        it_349=it_349->next;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1sTypeph* list$1sTypephp_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value285 = (void*)0;
struct list_item$1sTypeph* litem_350;
struct sType* __dec_obj67;
void* __right_value286 = (void*)0;
struct list_item$1sTypeph* litem_351;
struct sType* __dec_obj68;
void* __right_value287 = (void*)0;
struct list_item$1sTypeph* litem_352;
struct sType* __dec_obj69;
struct list$1sTypeph* __result253__;
    if(    self->len==0) {
        litem_350=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value285=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1220, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_350->prev=((void*)0);
        litem_350->next=((void*)0);
        __dec_obj67=litem_350->item;
        litem_350->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_350;
        self->head=litem_350;
    }
    else if(    self->len==1) {
        litem_351=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value286=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1230, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_351->prev=self->head;
        litem_351->next=((void*)0);
        __dec_obj68=litem_351->item;
        litem_351->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_351;
        self->head->next=litem_351;
    }
    else {
        litem_352=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value287=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1240, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_352->prev=self->tail;
        litem_352->next=((void*)0);
        __dec_obj69=litem_352->item;
        litem_352->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_352;
        self->tail=litem_352;
    }
    self->len++;
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result255__;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNodeph* result_353;
struct list_item$1sNodeph* it_354;
void* __right_value296 = (void*)0;
struct list$1sNodeph* __result260__;
    if(    self==((void*)0)) {
        __result255__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_353=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1206, "struct list$1sNodeph*", (void*)0, (void*)0))));
    it_354=self->head;
    while(it_354!=((void*)0)) {
        list$1sNodephp_add(result_353,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_354->item)));
        it_354=it_354->next;
    }
    __result260__ = gComeFunResultObject = __result_obj__ = result_353;
    come_call_finalizer3(result_353,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result256__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value292 = (void*)0;
struct list_item$1sNodeph* litem_355;
struct sNode* __dec_obj71;
void* __right_value293 = (void*)0;
struct list_item$1sNodeph* litem_356;
struct sNode* __dec_obj72;
void* __right_value294 = (void*)0;
struct list_item$1sNodeph* litem_357;
struct sNode* __dec_obj73;
struct list$1sNodeph* __result257__;
    if(    self->len==0) {
        litem_355=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value292=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1220, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_355->prev=((void*)0);
        litem_355->next=((void*)0);
        __dec_obj71=litem_355->item;
        litem_355->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_355;
        self->head=litem_355;
    }
    else if(    self->len==1) {
        litem_356=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value293=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1230, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_356->prev=self->head;
        litem_356->next=((void*)0);
        __dec_obj72=litem_356->item;
        litem_356->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_356;
        self->head->next=litem_356;
    }
    else {
        litem_357=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value294=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1240, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_357->prev=self->tail;
        litem_357->next=((void*)0);
        __dec_obj73=litem_357->item;
        litem_357->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_357;
        self->tail=litem_357;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result257__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result258__;
void* __right_value295 = (void*)0;
struct sNode* result_358;
struct sNode* __result259__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_358=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_358->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_358->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_358->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_358->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_358->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_358->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_358->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_358->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_358->kind=self->kind;
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_358;
    come_call_finalizer2((void*)0, result_358, result_358 ? ((struct sNode*)result_358)->finalize:(void*)0, result_358 ? ((struct sNode*)result_358)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result261__;
void* __right_value299 = (void*)0;
void* __right_value300 = (void*)0;
struct list$1charph* result_359;
struct list_item$1charph* it_360;
void* __right_value301 = (void*)0;
struct list$1charph* __result262__;
    if(    self==((void*)0)) {
        __result261__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_359=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1206, "struct list$1charph*", (void*)0, (void*)0))));
    it_360=self->head;
    while(it_360!=((void*)0)) {
        list$1charphp_add(result_359,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_360->item)));
        it_360=it_360->next;
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj85;
char* __dec_obj86;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj85=self->v1;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj86=self->v2;
            __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpbool_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_clone(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result264__;
void* __right_value315 = (void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* result_367;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result265__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_367=(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_increment_ref_count((struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool)*(1), "tuple4$4list$1sTypephplist$1charphplist$1charphpbool_clone", 3, "struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool", tuple4$4list$1sTypephplist$1charphplist$1charphpbool_finalize, tuple4$4list$1sTypephplist$1charphplist$1charphpbool_clone));
    if(    self!=((void*)0)) {
        result_367->v1=self->v1;
    }
    if(    self!=((void*)0)) {
        result_367->v2=self->v2;
    }
    if(    self!=((void*)0)) {
        result_367->v3=self->v3;
    }
    if(    self!=((void*)0)) {
        result_367->v4=self->v4;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_367;
    come_call_finalizer3(result_367,tuple4$4list$1sTypephplist$1charphplist$1charphpbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* tuple4$4list$1sTypephplist$1charphplist$1charphpbool_initialize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* __result266__;
    self->v1=v1;
    self->v2=v2;
    self->v3=v3;
    self->v4=v4;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static void tuple4$4list$1sTypephplist$1charphplist$1charphpboolp_finalize(struct tuple4$4list$1sTypephplist$1charphplist$1charphpbool* self){
}

static struct list$1sTypeph* list$1sTypephp_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value319 = (void*)0;
struct list_item$1sTypeph* litem_369;
struct sType* __dec_obj87;
void* __right_value320 = (void*)0;
struct list_item$1sTypeph* litem_370;
struct sType* __dec_obj88;
void* __right_value321 = (void*)0;
struct list_item$1sTypeph* litem_371;
struct sType* __dec_obj89;
struct list$1sTypeph* __result268__;
    if(    self->len==0) {
        litem_369=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value319=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1290, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_369->prev=((void*)0);
        litem_369->next=((void*)0);
        __dec_obj87=litem_369->item;
        litem_369->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_369;
        self->head=litem_369;
    }
    else if(    self->len==1) {
        litem_370=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value320=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1300, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_370->prev=self->head;
        litem_370->next=((void*)0);
        __dec_obj88=litem_370->item;
        litem_370->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj88,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_370;
        self->head->next=litem_370;
    }
    else {
        litem_371=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value321=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1310, "struct list_item$1sTypeph*", (void*)0, (void*)0))));
        litem_371->prev=self->tail;
        litem_371->next=((void*)0);
        __dec_obj89=litem_371->item;
        litem_371->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_371;
        self->tail=litem_371;
    }
    self->len++;
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj90;
struct list$1charph* __dec_obj91;
struct list$1charph* __dec_obj92;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj90=self->v1;
            come_call_finalizer3(__dec_obj90,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            come_call_finalizer3(__dec_obj91,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj92=self->v3;
            come_call_finalizer3(__dec_obj92,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_clone(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
void* __result_obj__=(void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result269__;
void* __right_value326 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* result_377;
void* __right_value327 = (void*)0;
struct list$1sTypeph* __dec_obj93;
void* __right_value328 = (void*)0;
struct list$1charph* __dec_obj94;
void* __right_value329 = (void*)0;
struct list$1charph* __dec_obj95;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result270__;
    if(    self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_377=(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_increment_ref_count((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)come_calloc(1, sizeof(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool)*(1), "tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_clone", 3, "struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool", tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize, tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj93=result_377->v1;
        result_377->v1=(struct list$1sTypeph*)come_increment_ref_count(come_call_cloner(list$1sTypephp_clone, self->v1));
        come_call_finalizer3(__dec_obj93,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj94=result_377->v2;
        result_377->v2=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v2));
        come_call_finalizer3(__dec_obj94,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        __dec_obj95=result_377->v3;
        result_377->v3=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charphp_clone, self->v3));
        come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_377->v4=self->v4;
    }
    __result270__ = gComeFunResultObject = __result_obj__ = result_377;
    come_call_finalizer3(result_377,tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result270__;
}

static struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool_initialize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self, struct list$1sTypeph* v1, struct list$1charph* v2, struct list$1charph* v3, _Bool v4){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __dec_obj96;
struct list$1charph* __dec_obj97;
struct list$1charph* __dec_obj98;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* __result271__;
    __dec_obj96=self->v1;
    self->v1=(struct list$1sTypeph*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj96,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj97=self->v2;
    self->v2=(struct list$1charph*)come_increment_ref_count(v2);
    come_call_finalizer3(__dec_obj97,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj98=self->v3;
    self->v3=(struct list$1charph*)come_increment_ref_count(v3);
    come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    self->v4=v4;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize(struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* self){
struct list$1sTypeph* __dec_obj99;
struct list$1charph* __dec_obj100;
struct list$1charph* __dec_obj101;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj99=self->v1;
            come_call_finalizer3(__dec_obj99,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj100=self->v2;
            come_call_finalizer3(__dec_obj100,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v2,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        if(        self->v3==gComeFunResultObject) {
            __dec_obj101=self->v3;
            come_call_finalizer3(__dec_obj101,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v3,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info){
void* __right_value332 = (void*)0;
struct sType* right_type2_378;
struct sType* left_no_solved_generics_type_379;
struct sType* right_no_solved_generics_type_380;
struct sClass* left_class_381;
struct sClass* right_class_382;
_Bool parent_class_383;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
char* left_type_name_384;
void* __right_value335 = (void*)0;
char* __dec_obj102;
void* __right_value336 = (void*)0;
struct sType* __dec_obj103;
void* __right_value337 = (void*)0;
struct sType* __dec_obj104;
void* __right_value338 = (void*)0;
char* left_type_name_385;
void* __right_value339 = (void*)0;
char* __dec_obj105;
void* __right_value340 = (void*)0;
struct sType* __dec_obj106;
void* __right_value341 = (void*)0;
struct sType* __dec_obj107;
_Bool __result273__;
int i_386;
void* __right_value342 = (void*)0;
void* __right_value343 = (void*)0;
void* __right_value344 = (void*)0;
char* left_type_name_390;
void* __right_value345 = (void*)0;
char* __dec_obj108;
void* __right_value346 = (void*)0;
struct sType* __dec_obj109;
void* __right_value347 = (void*)0;
struct sType* __dec_obj110;
void* __right_value348 = (void*)0;
char* left_type_name_391;
void* __right_value349 = (void*)0;
char* __dec_obj111;
void* __right_value350 = (void*)0;
struct sType* __dec_obj112;
void* __right_value351 = (void*)0;
struct sType* __dec_obj113;
void* __right_value352 = (void*)0;
char* __dec_obj114;
void* __right_value353 = (void*)0;
struct sType* __dec_obj115;
void* __right_value354 = (void*)0;
struct sType* __dec_obj116;
void* __right_value355 = (void*)0;
char* left_type_name_392;
void* __right_value356 = (void*)0;
char* __dec_obj117;
void* __right_value357 = (void*)0;
struct sType* __dec_obj118;
void* __right_value358 = (void*)0;
struct sType* __dec_obj119;
void* __right_value359 = (void*)0;
char* left_type_name_393;
void* __right_value360 = (void*)0;
char* __dec_obj120;
void* __right_value361 = (void*)0;
struct sType* __dec_obj121;
void* __right_value362 = (void*)0;
struct sType* __dec_obj122;
_Bool __result276__;
_Bool __result277__;
_Bool __result278__;
_Bool __result279__;
_Bool __result280__;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct buffer* buf2_394;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
char* __dec_obj123;
void* __right_value371 = (void*)0;
struct sType* __dec_obj124;
void* __right_value372 = (void*)0;
struct sType* __dec_obj125;
_Bool __result281__;
_Bool __result282__;
_Bool __result283__;
_Bool __result284__;
void* __right_value373 = (void*)0;
char* tmp_395;
void* __right_value374 = (void*)0;
char* __dec_obj126;
void* __right_value375 = (void*)0;
struct sType* __dec_obj127;
void* __right_value376 = (void*)0;
struct sType* __dec_obj128;
_Bool __result285__;
_Bool __result286__;
void* __right_value377 = (void*)0;
char* tmp_396;
void* __right_value378 = (void*)0;
char* __dec_obj129;
void* __right_value379 = (void*)0;
struct sType* __dec_obj130;
_Bool __result287__;
int i_397;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
_Bool __result288__;
    right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, right_type));
    left_no_solved_generics_type_379=((void*)0);
    if(    left_type->mNoSolvedGenericsType) {
        left_no_solved_generics_type_379=left_type->mNoSolvedGenericsType;
    }
    right_no_solved_generics_type_380=((void*)0);
    if(    right_type2_378->mNoSolvedGenericsType) {
        right_no_solved_generics_type_380=right_type2_378->mNoSolvedGenericsType;
    }
    left_class_381=left_type->mClass;
    right_class_382=right_type2_378->mClass;
    parent_class_383=(_Bool)0;
    if(    string_operator_not_equals(left_class_381->mName,right_class_382->mName)) {
        while(left_class_381&&right_class_382) {
            if(            string_operator_equals(left_class_381->mName,right_class_382->mName)) {
                parent_class_383=(_Bool)1;
            }
            if(            right_class_382->mParentClassName) {
                right_class_382=((struct sClass*)(__right_value333=map$2charphsClassphp_operator_load_element(info->classes,right_class_382->mParentClassName)));
                come_call_finalizer3(__right_value333,sClass_finalize, 0, 1, 0, 0, (void*)0);
            }
            else {
                right_class_382=((void*)0);
            }
        }
    }
    if(    pointer_massive) {
        if(        left_type->mPointerNum>0&&right_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
        }
        else if(        right_type->mPointerNum>0&&left_type->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
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
                    printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                    exit(2);
                }
            }
        }
    }
    if(    left_no_solved_generics_type_379&&right_no_solved_generics_type_380) {
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
                    printf("(3)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes),left_no_solved_generics_type_379->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes),right_no_solved_generics_type_380->mClass->mName,right_type2_378->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_384=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj102=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_384,come_value->c_value));
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj103=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj103,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj104=right_type2_378;
                right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj104,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_384 = come_decrement_ref_count2(left_type_name_384, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    err_msg(info,"poinetr num err");
                    puts(msg);
                    printf("(2)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes),left_no_solved_generics_type_379->mClass->mName,left_type->mClass->mName);
                    printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes),right_no_solved_generics_type_380->mClass->mName,right_type2_378->mClass->mName);
                    exit(2);
                }
            }
            else {
                left_type_name_385=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
                __dec_obj105=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_385,come_value->c_value));
                __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj106=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj106,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj107=right_type2_378;
                right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 0, 0, (void*)0);
                left_type_name_385 = come_decrement_ref_count2(left_type_name_385, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_378->mClass->mName)&&left_type->mPointerNum==right_type2_378->mPointerNum) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,right_type2_378->mClass->mName)&&(left_type->mPointerNum!=right_type2_378->mPointerNum||left_type->mHeap!=right_type2_378->mHeap)) {
            err_msg(info,"poinetr num err");
            puts(msg);
            printf("(1)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes),left_no_solved_generics_type_379->mClass->mName,left_type->mClass->mName);
            printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes),right_no_solved_generics_type_380->mClass->mName,right_type2_378->mClass->mName);
            exit(2);
        }
        else if(        list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes)>0) {
            if(            (string_operator_equals(left_no_solved_generics_type_379->mClass->mName,"void")&&left_no_solved_generics_type_379->mPointerNum>0&&right_no_solved_generics_type_380->mPointerNum>0)||(string_operator_equals(right_no_solved_generics_type_380->mClass->mName,"void")&&right_no_solved_generics_type_380->mPointerNum>0&&left_no_solved_generics_type_379->mPointerNum>0)) {
            }
            else {
                if(                list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes)!=list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes)) {
                    if(                    print_err_msg) {
                        err_msg(info,"generics type parametor number error");
                        puts(msg);
                        printf("(4)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes),left_no_solved_generics_type_379->mClass->mName,left_type->mClass->mName);
                        printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes),right_no_solved_generics_type_380->mClass->mName,right_type2_378->mClass->mName);
                        exit(2);
                    }
                    __result273__ = (_Bool)0;
                    come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result273__;
                }
                for(                i_386=0;                i_386<list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes);                i_386++                ){
                    check_assign_type(msg,((struct sType*)(__right_value342=list$1sTypephp_operator_load_element(left_no_solved_generics_type_379->mGenericsTypes,i_386))),((struct sType*)(__right_value343=list$1sTypephp_operator_load_element(right_no_solved_generics_type_380->mGenericsTypes,i_386))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                    come_call_finalizer3(__right_value342,sType_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value343,sType_finalize, 0, 1, 0, 0, (void*)0);
                }
                check_assign_type(msg,left_no_solved_generics_type_379,right_no_solved_generics_type_380,come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
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
                printf("(5)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes),left_no_solved_generics_type_379->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes),right_no_solved_generics_type_380->mClass->mName,right_type2_378->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_390=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj108=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_390,come_value->c_value));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj109=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj109,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj110=right_type2_378;
            right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_390 = come_decrement_ref_count2(left_type_name_390, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                err_msg(info,"poinetr num err");
                puts(msg);
                printf("(6)left type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(left_no_solved_generics_type_379->mGenericsTypes),left_no_solved_generics_type_379->mClass->mName,left_type->mClass->mName);
                printf("right type generics type parametor number is %d(%s)(%s)\n",list$1sTypephp_length(right_no_solved_generics_type_380->mGenericsTypes),right_no_solved_generics_type_380->mClass->mName,right_type2_378->mClass->mName);
                exit(2);
            }
        }
        else {
            left_type_name_391=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj111=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_391,come_value->c_value));
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj112=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj112,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj113=right_type2_378;
            right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_391 = come_decrement_ref_count2(left_type_name_391, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    left_type->mHeap&&!right_type2_378->mHeap&&left_type->mPointerNum>0&&right_type2_378->mPointerNum>0&&string_operator_not_equals(right_type2_378->mClass->mName,"void")&&!info->in_generics_fun&&!left_type->mMultipleTypes&&!right_type->mMultipleTypes) {
        err_msg(info,"%s",msg);
        err_msg(info,"type error heap");
        printf("left type is %s pointer num %d heap %d\n",left_type->mClass->mName,left_type->mPointerNum,left_type->mHeap);
        printf("right type is %s pointer num %d heap %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum,right_type2_378->mHeap);
        exit(2);
    }
    else if(    parent_class_383&&left_type->mPointerNum==1&&right_type->mPointerNum==1) {
        __dec_obj114=come_value->c_value;
        come_value->c_value=(char*)come_increment_ref_count(xsprintf("(struct %s*)%s",left_type->mClass->mName,come_value->c_value));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj115=come_value->type;
        come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj115,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value->var=((void*)0);
        __dec_obj116=right_type2_378;
        right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mNumber&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_392=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj117=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",left_type_name_392,come_value->c_value));
            __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj118=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj118,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj119=right_type2_378;
            right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj119,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_392 = come_decrement_ref_count2(left_type_name_392, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    right_type->mPointerNum>0&&string_operator_equals(right_type->mClass->mName,"void")&&left_type->mClass->mFloat&&left_type->mPointerNum==0) {
        if(        pointer_massive) {
            if(            print_err_msg) {
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
        }
        else {
            left_type_name_393=(char*)come_increment_ref_count(make_type_name_string(left_type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
            __dec_obj120=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(xsprintf("(%s)(long)%s",left_type_name_393,come_value->c_value));
            __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj121=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj122=right_type2_378;
            right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj122,sType_finalize, 0, 0, 0, 0, (void*)0);
            left_type_name_393 = come_decrement_ref_count2(left_type_name_393, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    else if(    check_no_pointer) {
        if(        left_type->mPointerNum>0) {
            if(            right_type2_378->mPointerNum>0) {
                if(                string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_378->mClass->mName,"void")) {
                }
                else if(                string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_378->mClass->mName,"va_list")) {
                }
                else if(                string_operator_not_equals(left_type->mClass->mName,right_type2_378->mClass->mName)) {
                    if(                    print_err_msg) {
                        err_msg(info,"type error1");
                        printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                        printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                        exit(2);
                    }
                    __result276__ = (_Bool)0;
                    come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
                    return __result276__;
                }
            }
            else if(            right_type->mPointerNum==0) {
            }
            else {
                if(                print_err_msg) {
                    err_msg(info,"type error2");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                    exit(2);
                }
                __result277__ = (_Bool)0;
                come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result277__;
            }
        }
        else if(        left_type->mPointerNum==0&&right_type2_378->mPointerNum>0) {
            if(            print_err_msg) {
                err_msg(info,"type error3");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result278__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result278__;
        }
        else if(        left_type->mPointerNum>0&&right_type2_378->mPointerNum==0&&string_operator_equals(right_type2_378->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_378->mClass->mName)) {
            if(            print_err_msg) {
                err_msg(info,"type error4");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result279__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result279__;
        }
    }
    else if(    !left_type->mNullValue&&right_type2_378->mNullValue) {
        if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_378->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_378->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"void")&&right_type2_378->mPointerNum==0) {
            if(            print_err_msg) {
                err_msg(info,"type error6");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result280__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result280__;
        }
        else {
            buf2_394=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05type.c", 806, "struct buffer*", (void*)0, (void*)0))));
            buffer_append_str(buf2_394,((char*)(__right_value369=xsprintf("come_null_check(\%s, \"\%s\", \%s, \%s)",((char*)(__right_value365=string_to_string(come_value->c_value))),((char*)(__right_value366=string_to_string(info->sname))),((char*)(__right_value367=int_to_string(info->sline))),((char*)(__right_value368=int_to_string(gComeDebugStackFrameID++)))))));
            __right_value365 = come_decrement_ref_count2(__right_value365, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value366 = come_decrement_ref_count2(__right_value366, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value369 = come_decrement_ref_count2(__right_value369, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj123=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(buffer_to_string(buf2_394));
            __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj124=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_value->var=((void*)0);
            __dec_obj125=right_type2_378;
            right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj125,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_394,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"char")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_378->mClass->mName,"char")&&right_type2_378->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_378->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_378->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error10");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result281__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result281__;
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"void")&&right_type2_378->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error11");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result282__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result282__;
        }
        else if(        string_operator_not_equals(left_type->mClass->mName,right_type2_378->mClass->mName)&&!(left_type->mPointerNum>0&&right_type2_378->mPointerNum==0)) {
            if(            print_err_msg) {
                err_msg(info,"type error12");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result283__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result283__;
        }
    }
    else if(    string_operator_equals(left_type->mClass->mName,"void")&&left_type->mPointerNum==1) {
        if(        string_operator_equals(right_type2_378->mClass->mName,"void")&&right_type2_378->mPointerNum==1) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_378->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_378->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"lambda")) {
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"void")&&right_type2_378->mPointerNum>0) {
        }
        else if(        string_operator_equals(right_type2_378->mClass->mName,"void")) {
            if(            print_err_msg) {
                err_msg(info,"type error13");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result284__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result284__;
        }
        else if(        right_type2_378->mPointerNum==0) {
            if(            pointer_massive) {
                if(                print_err_msg) {
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                    exit(2);
                }
            }
            else {
                tmp_395=(char*)come_increment_ref_count(xsprintf("/*a*/(void*)%s",come_value->c_value));
                __dec_obj126=come_value->c_value;
                come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_395));
                __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj127=come_value->type;
                come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_value->var=((void*)0);
                __dec_obj128=right_type2_378;
                right_type2_378=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
                come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
                tmp_395 = come_decrement_ref_count2(tmp_395, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    else if(    left_type->mPointerNum>0||(left_type->mPointerNum==0&&left_type->mClass->mStruct)) {
        if(        right_type2_378->mPointerNum>0||(right_type2_378->mPointerNum==0&&right_type2_378->mClass->mStruct)) {
            if(            string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_378->mClass->mName,"void")) {
            }
            else if(            string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_378->mClass->mName,"va_list")) {
            }
            else if(            string_operator_not_equals(left_type->mClass->mName,right_type2_378->mClass->mName)) {
                if(                print_err_msg) {
                    puts(msg);
                    err_msg(info,"type error14");
                    printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                    printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                    exit(2);
                }
                __result285__ = (_Bool)0;
                come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result285__;
            }
            else if(            int_operator_not_equals(left_type->mPointerNum,right_type2_378->mPointerNum)) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
            }
            else if(            list$1sNodephp_length(right_type2_378->mArrayNum)>0) {
                printf("%s %d: warning invalid pointer number\n",info->sname,info->sline);
                printf("left type is %s pointer num %d array dimetion num %d\n",left_type->mClass->mName,left_type->mPointerNum,list$1sNodephp_length(left_type->mArrayNum));
                printf("right type is %s pointer num %d array dimetion num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum,list$1sNodephp_length(right_type2_378->mArrayNum));
            }
        }
        else if(        string_operator_equals(left_type->mClass->mName,"void")||string_operator_equals(right_type2_378->mClass->mName,"void")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"va_list")||string_operator_equals(right_type2_378->mClass->mName,"va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"__builtin_va_list")||string_operator_equals(right_type2_378->mClass->mName,"__builtin_va_list")) {
        }
        else if(        string_operator_equals(left_type->mClass->mName,"lambda")&&string_operator_equals(right_type2_378->mClass->mName,"lambda")) {
        }
        else if(        left_type->mPointerNum>0&&right_type2_378->mPointerNum==0&&string_operator_equals(right_type2_378->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda")) {
            if(            print_err_msg) {
                err_msg(info,"type error15");
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            __result286__ = (_Bool)0;
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result286__;
        }
        else if(        left_type->mPointerNum>0&&!(string_operator_equals(right_type2_378->mClass->mName,"lambda")&&string_operator_equals(left_type->mClass->mName,"lambda"))&&right_type2_378->mPointerNum==0) {
            tmp_396=(char*)come_increment_ref_count(xsprintf("/*b*/(void*)%s",come_value->c_value));
            __dec_obj129=come_value->c_value;
            come_value->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, tmp_396));
            __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj130=come_value->type;
            come_value->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, left_type));
            come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
            __result287__ = (_Bool)1;
            tmp_396 = come_decrement_ref_count2(tmp_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result287__;
            tmp_396 = come_decrement_ref_count2(tmp_396, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        list$1sTypephp_length(left_type->mGenericsTypes)>0) {
            if(            list$1sTypephp_length(left_type->mGenericsTypes)!=list$1sTypephp_length(right_type2_378->mGenericsTypes)) {
                err_msg(info,"generics type number error");
                puts(msg);
                printf("left type is %s pointer num %d\n",left_type->mClass->mName,left_type->mPointerNum);
                printf("right type is %s pointer num %d\n",right_type2_378->mClass->mName,right_type2_378->mPointerNum);
                exit(2);
            }
            for(            i_397=0;            i_397<list$1sTypephp_length(left_type->mGenericsTypes);            i_397++            ){
                check_assign_type(msg,((struct sType*)(__right_value380=list$1sTypephp_operator_load_element(left_type->mGenericsTypes,i_397))),((struct sType*)(__right_value381=list$1sTypephp_operator_load_element(right_type2_378->mGenericsTypes,i_397))),come_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
                come_call_finalizer3(__right_value380,sType_finalize, 0, 1, 0, 0, (void*)0);
                come_call_finalizer3(__right_value381,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
    }
    __result288__ = (_Bool)1;
    come_call_finalizer3(right_type2_378,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static int list$1sTypephp_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_387;
int i_388;
struct sType* __result274__;
struct sType* default_value_389;
struct sType* __result275__;
default_value_389 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_387=self->head;
    i_388=0;
    while(it_387!=((void*)0)) {
        if(        position==i_388) {
            __result274__ = gComeFunResultObject = __result_obj__ = it_387->item;
            gComeFunResultObject = (void*)0;
            return __result274__;
        }
        it_387=it_387->next;
        i_388++;
    }
    memset(&default_value_389,0,sizeof(struct sType*));
    __result275__ = gComeFunResultObject = __result_obj__ = default_value_389;
    come_call_finalizer3(default_value_389,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
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
void* __right_value382 = (void*)0;
struct sType* result_type_398;
char* var_name_399;
char* p_400;
int sline_401;
void* __right_value383 = (void*)0;
char* word_402;
_Bool between_brace_403;
char* p_404;
int sline_405;
void* __right_value384 = (void*)0;
char* word_406;
void* __right_value385 = (void*)0;
char* __dec_obj131;
void* __right_value386 = (void*)0;
char* __dec_obj132;
_Bool no_comma_408;
void* __right_value387 = (void*)0;
struct sNode* node_409;
struct sNode* __dec_obj133;
char* p_410;
int sline_411;
void* __right_value388 = (void*)0;
char* word_412;
void* __right_value389 = (void*)0;
struct sNode* node_413;
void* __right_value393 = (void*)0;
char* attribute_417;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
char* __dec_obj137;
char* __dec_obj138;
void* __right_value396 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
struct tuple2$2sTypephcharph* __result293__;
    result_type_398=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, base_type_name));
    if(    !first) {
        result_type_398->mPointerNum=result_type_398->mTypedefOriginalPointerNum;
    }
    var_name_399=((void*)0);
    {
        p_400=info->p;
        sline_401=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            word_402=(char*)come_increment_ref_count(parse_word(info));
            if(            string_operator_equals(word_402,"const")||string_operator_equals(word_402,"__restrict")||string_operator_equals(word_402,"restrict")||string_operator_equals(word_402,"__user")||string_operator_equals(word_402,"volatile")||string_operator_equals(word_402,"_Nonnull")||string_operator_equals(word_402,"_Nullable")||string_operator_equals(word_402,"_Null_unspecified")||string_operator_equals(word_402,"__user")||string_operator_equals(word_402,"_Addr")) {
            }
            else {
                info->p=p_400;
                info->sline=sline_401;
            }
            word_402 = come_decrement_ref_count2(word_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            info->p=p_400;
            info->sline=sline_401;
        }
    }
    between_brace_403=(_Bool)0;
    {
        p_404=info->p;
        sline_405=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_406=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_406,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        between_brace_403=(_Bool)1;
                    }
                }
                word_406 = come_decrement_ref_count2(word_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_404;
        info->sline=sline_405;
    }
    parse_sharp_v5(info);
    while(*info->p==42) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        result_type_398->mPointerNum++;
    }
    parse_sharp_v5(info);
    if(    between_brace_403&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    xisalnum(*info->p)||*info->p==95) {
        __dec_obj131=var_name_399;
        var_name_399=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        static int num_anonymous_var_name_407=0;
        num_anonymous_var_name_407++;
        __dec_obj132=var_name_399;
        var_name_399=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameYYY%d",num_anonymous_var_name_407));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    between_brace_403&&*info->p==41) {
        info->p++;
        skip_spaces_and_lf(info);
    }
    if(    *info->p==58) {
        info->p++;
        skip_spaces_and_lf(info);
        no_comma_408=info->no_comma;
        info->no_comma=(_Bool)1;
        node_409=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_408;
        __dec_obj133=result_type_398->mSizeNum;
        result_type_398->mSizeNum=(struct sNode*)come_increment_ref_count(node_409);
        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); };
        if(node_409) { node_409 = come_decrement_ref_count2(node_409, ((struct sNode*)node_409)->finalize, ((struct sNode*)node_409)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    while(*info->p==91) {
        info->p++;
        skip_spaces_and_lf(info);
        parse_sharp_v5(info);
        {
            p_410=info->p;
            sline_411=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_412=(char*)come_increment_ref_count(parse_word(info));
                if(                string_operator_equals(word_412,"const")||string_operator_equals(word_412,"__restrict")||string_operator_equals(word_412,"restrict")||string_operator_equals(word_412,"__user")||string_operator_equals(word_412,"volatile")||string_operator_equals(word_412,"_Nonnull")||string_operator_equals(word_412,"_Nullable")||string_operator_equals(word_412,"_Null_unspecified")||string_operator_equals(word_412,"__user")||string_operator_equals(word_412,"_Addr")) {
                }
                else {
                    info->p=p_410;
                    info->sline=sline_411;
                }
                word_412 = come_decrement_ref_count2(word_412, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                info->p=p_410;
                info->sline=sline_411;
            }
        }
        if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            result_type_398->mArrayPointerType=(_Bool)1;
            result_type_398->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_413=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(result_type_398->mArrayNum,(struct sNode*)come_increment_ref_count(node_413));
        parse_sharp_v5(info);
        result_type_398->mOriginIsArray=(_Bool)1;
        expected_next_character(93,info);
        if(node_413) { node_413 = come_decrement_ref_count2(node_413, ((struct sNode*)node_413)->finalize, ((struct sNode*)node_413)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    attribute_417=(char*)come_increment_ref_count(parse_struct_attribute(info));
    if(    string_operator_not_equals(attribute_417,"")) {
        if(        result_type_398->mAttribute) {
            __dec_obj137=result_type_398->mAttribute;
            result_type_398->mAttribute=(char*)come_increment_ref_count(string_operator_add(result_type_398->mAttribute,((char*)(__right_value394=charp_operator_add(" ",attribute_417)))));
            __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj138=result_type_398->mAttribute;
            result_type_398->mAttribute=(char*)come_increment_ref_count(attribute_417);
            __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
    }
    ((struct tuple2$2charphcharph*)(__right_value396=parse_attribute(info,(_Bool)0)));
    come_call_finalizer3(__right_value396,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    __result293__ = gComeFunResultObject = __result_obj__ = ((struct tuple2$2sTypephcharph*)(__right_value401=tuple2$2sTypephcharph_initialize((struct tuple2$2sTypephcharph**)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "05type.c", 1130, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone)),(struct sType*)come_increment_ref_count(result_type_398),(char*)come_increment_ref_count(var_name_399))));
    come_call_finalizer3(base_type_name,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_398,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_399 = come_decrement_ref_count2(var_name_399, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute_417 = come_decrement_ref_count2(attribute_417, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value401,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct list_item$1sNodeph* litem_414;
struct sNode* __dec_obj134;
void* __right_value391 = (void*)0;
struct list_item$1sNodeph* litem_415;
struct sNode* __dec_obj135;
void* __right_value392 = (void*)0;
struct list_item$1sNodeph* litem_416;
struct sNode* __dec_obj136;
struct list$1sNodeph* __result289__;
    if(    self->len==0) {
        litem_414=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value390=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1290, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_414->prev=((void*)0);
        litem_414->next=((void*)0);
        __dec_obj134=litem_414->item;
        litem_414->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_414;
        self->head=litem_414;
    }
    else if(    self->len==1) {
        litem_415=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value391=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1300, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_415->prev=self->head;
        litem_415->next=((void*)0);
        __dec_obj135=litem_415->item;
        litem_415->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_415;
        self->head->next=litem_415;
    }
    else {
        litem_416=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value392=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1310, "struct list_item$1sNodeph*", (void*)0, (void*)0))));
        litem_416->prev=self->tail;
        litem_416->next=((void*)0);
        __dec_obj136=litem_416->item;
        litem_416->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_416;
        self->tail=litem_416;
    }
    self->len++;
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static void tuple2$2charphcharphp_finalize(struct tuple2$2charphcharph* self){
char* __dec_obj139;
char* __dec_obj140;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj139=self->v1;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj140=self->v2;
            __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2sTypephcharph_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj141;
char* __dec_obj142;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj141=self->v1;
            come_call_finalizer3(__dec_obj141,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj142=self->v2;
            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_clone(struct tuple2$2sTypephcharph* self){
void* __result_obj__=(void*)0;
struct tuple2$2sTypephcharph* __result290__;
void* __right_value397 = (void*)0;
struct tuple2$2sTypephcharph* result_418;
void* __right_value398 = (void*)0;
struct sType* __dec_obj143;
void* __right_value399 = (void*)0;
char* __dec_obj144;
struct tuple2$2sTypephcharph* __result291__;
    if(    self==(void*)0) {
        __result290__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result290__;
    }
    result_418=(struct tuple2$2sTypephcharph*)come_increment_ref_count((struct tuple2$2sTypephcharph*)come_calloc(1, sizeof(struct tuple2$2sTypephcharph)*(1), "tuple2$2sTypephcharph_clone", 3, "struct tuple2$2sTypephcharph", tuple2$2sTypephcharph_finalize, tuple2$2sTypephcharph_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj143=result_418->v1;
        result_418->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj144=result_418->v2;
        result_418->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result291__ = gComeFunResultObject = __result_obj__ = result_418;
    come_call_finalizer3(result_418,tuple2$2sTypephcharph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static struct tuple2$2sTypephcharph* tuple2$2sTypephcharph_initialize(struct tuple2$2sTypephcharph* self, struct sType* v1, char* v2){
void* __result_obj__=(void*)0;
struct sType* __dec_obj145;
char* __dec_obj146;
struct tuple2$2sTypephcharph* __result292__;
    __dec_obj145=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj146=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple2$2sTypephcharphp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
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

void skip_pointer_attribute(struct sInfo* info){
char* p_419;
int sline_420;
void* __right_value402 = (void*)0;
char* word_421;
int nest_422;
    p_419=info->p;
    sline_420=info->sline;
    if(    xisalpha(*info->p)||*info->p==95) {
        word_421=(char*)come_increment_ref_count(parse_word(info));
        if(        (string_operator_equals(word_421,"__attribute")||string_operator_equals(word_421,"__attribute__"))&&*info->p==40) {
            nest_422=0;
            while(1) {
                if(                *info->p==40) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_422++;
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    nest_422--;
                    if(                    nest_422==0) {
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
        else if(        string_operator_equals(word_421,"const")||string_operator_equals(word_421,"__restrict")||string_operator_equals(word_421,"restrict")||string_operator_equals(word_421,"__user")||string_operator_equals(word_421,"volatile")||string_operator_equals(word_421,"_Nonnull")||string_operator_equals(word_421,"_Nullable")||string_operator_equals(word_421,"__nonnull")||string_operator_equals(word_421,"_Null_unspecified")||string_operator_equals(word_421,"__user")||string_operator_equals(word_421,"_Addr")||string_operator_equals(word_421,"__noreturn")||string_operator_equals(word_421,"_noreturn")||string_operator_equals(word_421,"_Noreturn")) {
        }
        else {
            info->p=p_419;
            info->sline=sline_420;
        }
        word_421 = come_decrement_ref_count2(word_421, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        info->p=p_419;
        info->sline=sline_420;
    }
}

struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool no_output_err_423;
void* __right_value403 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var2 = (void*)0;
struct sType* type_424=0;
char* name_425=0;
_Bool err_426=0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
struct tuple3$3sTypephcharphbool* __result297__;
    no_output_err_423=info->no_output_err;
    info->no_output_err=(_Bool)1;
    multiple_assign_var2=((struct tuple3$3sTypephcharphbool*)(__right_value403=parse_type(info,parse_variable_name,(_Bool)1,(_Bool)0)));
    type_424=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
    name_425=(char*)come_increment_ref_count(multiple_assign_var2->v2);
    err_426=multiple_assign_var2->v3;
    come_call_finalizer3(__right_value403,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    info->no_output_err=(_Bool)0;
    info->no_output_err=no_output_err_423;
    __result297__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value408=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1187, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count(type_424),(char*)come_increment_ref_count(name_425),err_426)));
    come_call_finalizer3(type_424,sType_finalize, 0, 0, 0, 0, (void*)0);
    name_425 = come_decrement_ref_count2(name_425, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value408,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

static void tuple3$3sTypephcharphbool_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj149;
char* __dec_obj150;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj149=self->v1;
            come_call_finalizer3(__dec_obj149,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj150=self->v2;
            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_clone(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__=(void*)0;
struct tuple3$3sTypephcharphbool* __result294__;
void* __right_value404 = (void*)0;
struct tuple3$3sTypephcharphbool* result_427;
void* __right_value405 = (void*)0;
struct sType* __dec_obj151;
void* __right_value406 = (void*)0;
char* __dec_obj152;
struct tuple3$3sTypephcharphbool* __result295__;
    if(    self==(void*)0) {
        __result294__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result294__;
    }
    result_427=(struct tuple3$3sTypephcharphbool*)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "tuple3$3sTypephcharphbool_clone", 3, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj151=result_427->v1;
        result_427->v1=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->v1));
        come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj152=result_427->v2;
        result_427->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_427->v3=self->v3;
    }
    __result295__ = gComeFunResultObject = __result_obj__ = result_427;
    come_call_finalizer3(result_427,tuple3$3sTypephcharphbool_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct tuple3$3sTypephcharphbool* tuple3$3sTypephcharphbool_initialize(struct tuple3$3sTypephcharphbool* self, struct sType* v1, char* v2, _Bool v3){
void* __result_obj__=(void*)0;
struct sType* __dec_obj153;
char* __dec_obj154;
struct tuple3$3sTypephcharphbool* __result296__;
    __dec_obj153=self->v1;
    self->v1=(struct sType*)come_increment_ref_count(v1);
    come_call_finalizer3(__dec_obj153,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj154=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v3=v3;
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,tuple3$3sTypephcharphboolp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

struct tuple3$3sTypephcharphbool* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor){
void* __result_obj__=(void*)0;
char* head_428;
int head_sline_429;
void* __right_value409 = (void*)0;
char* type_name_430;
_Bool record__431;
_Bool exception__432;
_Bool constant_433;
_Bool static__434;
_Bool volatile__435;
_Bool register__436;
_Bool unsigned__437;
_Bool long__438;
_Bool long_long_439;
_Bool short__440;
_Bool restrict__441;
_Bool struct__442;
_Bool union__443;
_Bool enum__444;
_Bool no_heap_445;
_Bool extern__446;
_Bool inline__447;
_Bool uniq__448;
_Bool tuple__449;
_Bool generate__450;
struct sNode* alignas__451;
_Bool anonymous_type_452;
_Bool anonymous_name_453;
_Bool atomic__454;
_Bool object_interface_455;
void* __right_value410 = (void*)0;
char* __dec_obj155;
void* __right_value411 = (void*)0;
char* __dec_obj156;
void* __right_value412 = (void*)0;
char* __dec_obj157;
int brace_num_456;
void* __right_value413 = (void*)0;
char* __dec_obj158;
int brace_num_457;
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
struct sNode* exp_458;
struct sNode* __dec_obj164;
void* __right_value420 = (void*)0;
char* __dec_obj165;
void* __right_value421 = (void*)0;
char* __dec_obj166;
void* __right_value422 = (void*)0;
char* __dec_obj167;
void* __right_value423 = (void*)0;
char* __dec_obj168;
void* __right_value424 = (void*)0;
char* __dec_obj169;
void* __right_value425 = (void*)0;
char* __dec_obj170;
void* __right_value426 = (void*)0;
char* __dec_obj171;
void* __right_value427 = (void*)0;
char* __dec_obj172;
void* __right_value428 = (void*)0;
char* __dec_obj173;
void* __right_value429 = (void*)0;
char* __dec_obj174;
char* p_459;
int sline_460;
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
char* __dec_obj175;
void* __right_value432 = (void*)0;
char* __dec_obj176;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
char* __dec_obj177;
char* p_461;
int sline_462;
void* __right_value435 = (void*)0;
void* __right_value436 = (void*)0;
struct tuple3$3sTypephcharphbool* __result298__;
char* p_463;
int sline_464;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct tuple3$3sTypephcharphbool* __result299__;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sNode* node_465;
_Bool Value_466;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct tuple3$3sTypephcharphbool* __result300__;
char* p_467;
int sline_468;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __dec_obj178;
void* __right_value448 = (void*)0;
char* __dec_obj179;
void* __right_value449 = (void*)0;
char* __dec_obj180;
char* p_469;
int sline_470;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct tuple3$3sTypephcharphbool* __result301__;
void* __right_value453 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var3 = (void*)0;
struct sType* type_471=0;
char* name_472=0;
_Bool err_473=0;
char* p_474;
int sline_475;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct tuple3$3sTypephcharphbool* __result302__;
void* __right_value458 = (void*)0;
char* __dec_obj181;
void* __right_value459 = (void*)0;
char* __dec_obj182;
void* __right_value460 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var4 = (void*)0;
struct sType* type_476=0;
char* name_477=0;
_Bool err_478=0;
char* p_479;
int sline_480;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct tuple3$3sTypephcharphbool* __result303__;
char* p_481;
int sline_482;
void* __right_value464 = (void*)0;
char* __dec_obj183;
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
char* p_483;
int sline_484;
void* __right_value471 = (void*)0;
char* __dec_obj190;
char* p_485;
int sline_486;
void* __right_value472 = (void*)0;
char* __dec_obj191;
void* __right_value473 = (void*)0;
char* __dec_obj192;
void* __right_value474 = (void*)0;
char* __dec_obj193;
char* p_487;
int sline_488;
void* __right_value475 = (void*)0;
char* __dec_obj194;
void* __right_value476 = (void*)0;
char* __dec_obj195;
void* __right_value477 = (void*)0;
char* __dec_obj196;
void* __right_value478 = (void*)0;
char* __dec_obj197;
void* __right_value479 = (void*)0;
char* __dec_obj198;
void* __right_value480 = (void*)0;
char* __dec_obj199;
void* __right_value481 = (void*)0;
char* __dec_obj200;
void* __right_value482 = (void*)0;
char* __dec_obj201;
void* __right_value483 = (void*)0;
char* __dec_obj202;
void* __right_value484 = (void*)0;
char* __dec_obj203;
void* __right_value485 = (void*)0;
char* __dec_obj204;
char* p_489;
int sline_490;
void* __right_value486 = (void*)0;
char* __dec_obj205;
void* __right_value487 = (void*)0;
char* __dec_obj206;
void* __right_value488 = (void*)0;
char* attribute_491;
int pointer_num_492;
_Bool heap_493;
_Bool refference_494;
_Bool no_refference_495;
_Bool channel_496;
_Bool any_class_497;
char* tuple_name_498;
void* __right_value489 = (void*)0;
char* __dec_obj207;
_Bool lambda_flag_499;
char* pX_500;
int slineX_501;
void* __right_value490 = (void*)0;
struct sType* type_502;
char* var_name_503;
_Bool function_pointer_flag_504;
char* p_505;
int sline_506;
void* __right_value491 = (void*)0;
char* word_507;
_Bool var_name_between_brace_508;
char* p_509;
int sline_510;
void* __right_value492 = (void*)0;
char* word_511;
void* __right_value493 = (void*)0;
char* __dec_obj208;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* node_513;
_Bool Value_514;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct tuple3$3sTypephcharphbool* __result304__;
int pointer_num_515;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* __dec_obj209;
void* __right_value500 = (void*)0;
char* __dec_obj210;
void* __right_value501 = (void*)0;
struct sNode* node_516;
_Bool Value_517;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct tuple3$3sTypephcharphbool* __result305__;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sType* __dec_obj211;
void* __right_value506 = (void*)0;
char* __dec_obj212;
void* __right_value507 = (void*)0;
struct sNode* node_518;
_Bool Value_519;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct tuple3$3sTypephcharphbool* __result306__;
int pointer_num_520;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct sType* __dec_obj213;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct tuple3$3sTypephcharphbool* __result307__;
void* __right_value514 = (void*)0;
char* attribute_521;
char* __dec_obj214;
void* __right_value515 = (void*)0;
char* __dec_obj215;
void* __right_value516 = (void*)0;
char* __dec_obj216;
void* __right_value517 = (void*)0;
char* __dec_obj217;
void* __right_value518 = (void*)0;
char* __dec_obj218;
_Bool no_comma_524;
void* __right_value519 = (void*)0;
struct sNode* node_525;
struct sNode* __dec_obj219;
void* __right_value520 = (void*)0;
char* attribute2_526;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
char* __dec_obj220;
char* __dec_obj221;
struct sType* result_type_527;
void* __right_value523 = (void*)0;
_Bool _if_conditional3;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sType* __dec_obj222;
void* __right_value526 = (void*)0;
int i_528;
void* __right_value527 = (void*)0;
_Bool _if_conditional4;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
struct sType* __dec_obj223;
int i_532;
void* __right_value531 = (void*)0;
_Bool _if_conditional5;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
struct sType* __dec_obj224;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sType* __dec_obj225;
struct sNode* __dec_obj226;
void* __right_value537 = (void*)0;
char* __dec_obj227;
void* __right_value538 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var5 = (void*)0;
struct list$1sTypeph* param_types_533=0;
struct list$1charph* param_names_534=0;
struct list$1charph* param_default_parametors_535=0;
_Bool var_args_536=0;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
struct sType* __dec_obj228;
struct sType* __dec_obj229;
struct list$1sTypeph* __dec_obj230;
struct list$1charph* __dec_obj231;
int function_pointer_num_537;
struct sType* result_type_538;
void* __right_value541 = (void*)0;
_Bool _if_conditional6;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sType* __dec_obj232;
void* __right_value544 = (void*)0;
int i_539;
void* __right_value545 = (void*)0;
_Bool _if_conditional7;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct sType* __dec_obj233;
int i_540;
void* __right_value549 = (void*)0;
_Bool _if_conditional8;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct sType* __dec_obj234;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct sType* __dec_obj235;
struct sNode* __dec_obj236;
void* __right_value555 = (void*)0;
char* __dec_obj237;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct tuple3$3sTypephcharphbool* __result310__;
void* __right_value558 = (void*)0;
char* __dec_obj238;
_Bool function_pointer_array_542;
int function_pointer_array_num_543;
int n_544;
void* __right_value559 = (void*)0;
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* multiple_assign_var6 = (void*)0;
struct list$1sTypeph* param_types_545=0;
struct list$1charph* param_names_546=0;
struct list$1charph* param_default_parametors_547=0;
_Bool var_args_548=0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* __dec_obj239;
void* __right_value562 = (void*)0;
struct sType* __dec_obj240;
struct list$1sTypeph* __dec_obj241;
struct list$1charph* __dec_obj242;
void* __right_value563 = (void*)0;
struct sNode* exp_549;
_Bool Value_550;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
struct tuple3$3sTypephcharphbool* __result311__;
void* __right_value566 = (void*)0;
struct CVALUE* come_value_551;
void* __right_value567 = (void*)0;
struct sType* __dec_obj243;
void* __right_value568 = (void*)0;
char* attribute_552;
char* __dec_obj244;
void* __right_value569 = (void*)0;
char* __dec_obj245;
void* __right_value570 = (void*)0;
char* __dec_obj246;
void* __right_value571 = (void*)0;
char* __dec_obj247;
void* __right_value572 = (void*)0;
char* __dec_obj248;
_Bool no_comma_555;
void* __right_value573 = (void*)0;
struct sNode* node_556;
struct sNode* __dec_obj249;
void* __right_value574 = (void*)0;
char* attribute2_557;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
char* __dec_obj250;
char* __dec_obj251;
void* __right_value577 = (void*)0;
_Bool _if_conditional9;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sType* __dec_obj256;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
char* __dec_obj257;
struct sNode* __dec_obj258;
char* __dec_obj259;
int i_558;
void* __right_value582 = (void*)0;
_Bool _if_conditional10;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct sType* __dec_obj260;
struct sNode* __dec_obj261;
char* __dec_obj262;
int i_559;
void* __right_value586 = (void*)0;
_Bool _if_conditional11;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct sType* __dec_obj263;
struct sNode* __dec_obj264;
char* __dec_obj265;
void* __right_value590 = (void*)0;
_Bool _if_conditional12;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct tuple3$3sTypephcharphbool* __result312__;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
struct sType* __dec_obj266;
void* __right_value595 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* generics_type_560=0;
char* var_name_561=0;
_Bool err_562=0;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
struct tuple3$3sTypephcharphbool* __result313__;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct tuple3$3sTypephcharphbool* __result314__;
void* __right_value600 = (void*)0;
struct sType* __dec_obj267;
void* __right_value601 = (void*)0;
char* new_name_563;
struct sNode* __dec_obj268;
char* __dec_obj269;
char* __dec_obj270;
void* __right_value602 = (void*)0;
struct sClass* klass_564;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sClass* klass_606;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
struct sType* __dec_obj271;
struct sNode* __dec_obj272;
char* __dec_obj273;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct list$1sTypeph* types_607;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* type2_608=0;
char* name_609=0;
_Bool err_610=0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct tuple3$3sTypephcharphbool* __result336__;
void* __right_value621 = (void*)0;
int num_tuples_611;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* __dec_obj274;
struct list$1sTypeph* o2_saved_612;
struct sType* it_613;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct sType* __dec_obj275;
void* __right_value627 = (void*)0;
char* new_name_614;
char* __dec_obj276;
void* __right_value628 = (void*)0;
char* attribute_615;
char* __dec_obj277;
void* __right_value629 = (void*)0;
char* __dec_obj278;
void* __right_value630 = (void*)0;
char* __dec_obj279;
void* __right_value631 = (void*)0;
char* __dec_obj280;
void* __right_value632 = (void*)0;
char* __dec_obj281;
_Bool no_comma_618;
void* __right_value633 = (void*)0;
struct sNode* node_619;
struct sNode* __dec_obj282;
void* __right_value634 = (void*)0;
char* attribute2_620;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
char* __dec_obj283;
char* __dec_obj284;
void* __right_value637 = (void*)0;
struct sNode* node_621;
void* __right_value638 = (void*)0;
struct tuple2$2charphcharph* multiple_assign_var9 = (void*)0;
char* asm_name_622=0;
char* attribute2_623=0;
char* __dec_obj285;
char* __dec_obj286;
void* __right_value639 = (void*)0;
struct sType* type_before_624;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
struct sType* __dec_obj287;
void* __right_value642 = (void*)0;
struct sNode* __list_values1___625[1];
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct list$1sNodeph* __dec_obj288;
struct sType* __dec_obj289;
void* __right_value646 = (void*)0;
struct sType* type_before_628;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sType* __dec_obj290;
struct sType* __dec_obj291;
void* __right_value649 = (void*)0;
void* __right_value650 = (void*)0;
struct sType* type2_629;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
struct sType* type3_635;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct sType* type4_636;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct tuple3$3sTypephcharphbool* __result342__;
char* __dec_obj293;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
struct tuple3$3sTypephcharphbool* __result343__;
type_502 = (void*)0;
var_name_503 = (void*)0;
result_type_527 = (void*)0;
result_type_538 = (void*)0;
    head_428=info->p;
    head_sline_429=info->sline;
    info->define_struct=(_Bool)0;
    type_name_430=(char*)come_increment_ref_count(parse_word(info));
    record__431=(_Bool)0;
    exception__432=(_Bool)0;
    constant_433=(_Bool)0;
    static__434=(_Bool)0;
    volatile__435=(_Bool)0;
    register__436=(_Bool)0;
    unsigned__437=(_Bool)0;
    long__438=(_Bool)0;
    long_long_439=(_Bool)0;
    short__440=(_Bool)0;
    restrict__441=(_Bool)0;
    struct__442=(_Bool)0;
    union__443=(_Bool)0;
    enum__444=(_Bool)0;
    no_heap_445=(_Bool)0;
    extern__446=(_Bool)0;
    inline__447=(_Bool)0;
    uniq__448=(_Bool)0;
    tuple__449=(_Bool)0;
    generate__450=(_Bool)0;
    alignas__451=((void*)0);
    anonymous_type_452=(_Bool)0;
    anonymous_name_453=(_Bool)0;
    atomic__454=(_Bool)0;
    object_interface_455=(_Bool)0;
    while((_Bool)1) {
        if(        string_operator_equals(type_name_430,"object")&&*info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            object_interface_455=(_Bool)1;
            __dec_obj155=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"_Atomic")) {
            expected_next_character(40,info);
            __dec_obj156=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
            atomic__454=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_430,"__extension__")) {
            __dec_obj157=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"__attribute__")) {
            if(            *info->p==40) {
                brace_num_456=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_456++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_456--;
                        if(                        brace_num_456==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj158=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"__declspec")) {
            if(            *info->p==40) {
                brace_num_457=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_457++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_457--;
                        if(                        brace_num_457==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            __dec_obj159=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"_Noreturn")) {
            __dec_obj160=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"__noreturn")) {
            __dec_obj161=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"_Nullable")) {
            __dec_obj162=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"_noreturn")) {
            __dec_obj163=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"_Alignas")) {
            expected_next_character(40,info);
            exp_458=(struct sNode*)come_increment_ref_count(expression_v13(info));
            __dec_obj164=alignas__451;
            alignas__451=(struct sNode*)come_increment_ref_count(exp_458);
            if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); };
            expected_next_character(41,info);
            __dec_obj165=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(exp_458) { exp_458 = come_decrement_ref_count2(exp_458, ((struct sNode*)exp_458)->finalize, ((struct sNode*)exp_458)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        string_operator_equals(type_name_430,"const")) {
            constant_433=(_Bool)1;
            __dec_obj166=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"static")) {
            static__434=(_Bool)1;
            __dec_obj167=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"uniq")) {
            uniq__448=(_Bool)1;
            __dec_obj168=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"record")) {
            record__431=(_Bool)1;
            __dec_obj169=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"exception")) {
            exception__432=(_Bool)1;
            __dec_obj170=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"extern")) {
            extern__446=(_Bool)1;
            __dec_obj171=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"inline")||string_operator_equals(type_name_430,"__inline")||string_operator_equals(type_name_430,"__inline__")||string_operator_equals(type_name_430,"__always_inline")||string_operator_equals(type_name_430,"__forceinline")) {
            inline__447=(_Bool)1;
            __dec_obj172=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"volatile")) {
            volatile__435=(_Bool)1;
            __dec_obj173=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"generate")) {
            generate__450=(_Bool)1;
            __dec_obj174=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"struct")) {
            struct__442=(_Bool)1;
            if(            *info->p==123) {
                p_459=info->p;
                sline_460=info->sline;
                ((char*)(__right_value430=skip_block(info)));
                __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    anonymous_name_453=(_Bool)1;
                    anonymous_type_452=(_Bool)1;
                    __dec_obj175=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_459;
                    info->sline=sline_460;
                    break;
                }
                else {
                    anonymous_type_452=(_Bool)1;
                    __dec_obj176=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_459;
                    info->sline=sline_460;
                    break;
                }
            }
            parse_sharp_v5(info);
            if(            *info->p!=62) {
                (void)((char*)(__right_value433=parse_struct_attribute(info)));
                __right_value433 = come_decrement_ref_count2(__right_value433, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __dec_obj177=type_name_430;
                type_name_430=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
                parse_sharp_v5(info);
                if(                *info->p==60) {
                    p_461=info->p;
                    sline_462=info->sline;
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==123) {
                            }
                            else {
                                info->p=p_461;
                                info->sline=sline_462;
                            }
                            break;
                        }
                        else if(                        *info->p==0) {
                            err_msg(info,"invalid struct definition");
                            __result298__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value436=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1422, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value436,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result298__;
                        }
                        else {
                            info->p++;
                        }
                    }
                }
                if(                *info->p==123) {
                    p_463=info->p;
                    sline_464=info->sline;
                    ((char*)(__right_value437=skip_block(info)));
                    __right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    (void)((char*)(__right_value438=parse_struct_attribute(info)));
                    __right_value438 = come_decrement_ref_count2(__right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    if(                    *info->p==59) {
                        info->p=head_428;
                        info->sline=head_sline_429;
                        info->define_struct=(_Bool)1;
                        __result299__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value440=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1442, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                        type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer3(__right_value440,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                        gComeFunResultObject = (void*)0;
                        return __result299__;
                    }
                    else {
                        info->p=p_463;
                        info->sline=sline_464;
                        node_465=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_430),(char*)come_increment_ref_count(xsprintf("")),info));
                        Value_466=node_compile(node_465,info);
                        if(                        !Value_466) {
                            __result300__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value444=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1454, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                            if(node_465) { node_465 = come_decrement_ref_count2(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer3(__right_value444,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                            gComeFunResultObject = (void*)0;
                            return __result300__;
                        }
                        else {
                        }
                        if(node_465) { node_465 = come_decrement_ref_count2(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                        if(node_465) { node_465 = come_decrement_ref_count2(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_430,"union")) {
            union__443=(_Bool)1;
            if(            *info->p==123) {
                p_467=info->p;
                sline_468=info->sline;
                ((char*)(__right_value445=skip_block(info)));
                __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value446=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value446,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_428;
                    info->sline=head_sline_429;
                    info->define_struct=(_Bool)0;
                    anonymous_type_452=(_Bool)1;
                    __dec_obj178=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_467;
                    info->sline=sline_468;
                    break;
                }
                else {
                    anonymous_type_452=(_Bool)1;
                    __dec_obj179=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_467;
                    info->sline=sline_468;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj180=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_469=info->p;
                sline_470=info->sline;
                ((char*)(__right_value450=skip_block(info)));
                __right_value450 = come_decrement_ref_count2(__right_value450, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_428;
                    info->sline=head_sline_429;
                    info->define_struct=(_Bool)1;
                    __result301__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value452=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1511, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value452,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result301__;
                }
                else {
                    anonymous_type_452=(_Bool)1;
                    info->p=p_469;
                    info->sline=sline_470;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_430,"enum")) {
            enum__444=(_Bool)1;
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var3=((struct tuple3$3sTypephcharphbool*)(__right_value453=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_471=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                name_472=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                err_473=multiple_assign_var3->v3;
                come_call_finalizer3(__right_value453,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_472 = come_decrement_ref_count2(name_472, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_474=info->p;
                sline_475=info->sline;
                ((char*)(__right_value454=skip_block(info)));
                __right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                strlen(info->p)>=strlen("__attribute__")&&memcmp(info->p,"__attribute__",strlen("__attribute__"))==0) {
                    ((struct tuple2$2charphcharph*)(__right_value455=parse_attribute(info,(_Bool)0)));
                    come_call_finalizer3(__right_value455,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==59) {
                    info->p=head_428;
                    info->sline=head_sline_429;
                    info->define_struct=(_Bool)1;
                    __result302__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value457=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1549, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value457,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result302__;
                }
                else {
                    anonymous_type_452=(_Bool)1;
                    __dec_obj181=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string(""));
                    __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_474;
                    info->sline=sline_475;
                    break;
                }
            }
            parse_sharp_v5(info);
            __dec_obj182=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_sharp_v5(info);
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(__right_value460=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
                type_476=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
                name_477=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                err_478=multiple_assign_var4->v3;
                come_call_finalizer3(__right_value460,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer3(type_476,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_477 = come_decrement_ref_count2(name_477, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            *info->p==123) {
                p_479=info->p;
                sline_480=info->sline;
                ((char*)(__right_value461=skip_block(info)));
                __right_value461 = come_decrement_ref_count2(__right_value461, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                if(                *info->p==59) {
                    info->p=head_428;
                    info->sline=head_sline_429;
                    info->define_struct=(_Bool)1;
                    __result303__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value463=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1585, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(__right_value463,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result303__;
                }
                else {
                    anonymous_type_452=(_Bool)1;
                    info->p=p_479;
                    info->sline=sline_480;
                    break;
                }
            }
        }
        else if(        string_operator_equals(type_name_430,"long")) {
            {
                p_481=info->p;
                sline_482=info->sline;
                if(                !xisalpha(*info->p)) {
                    info->p=p_481;
                    info->sline=sline_482;
                    __dec_obj183=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string("long"));
                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                    break;
                }
                else {
                    __dec_obj184=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                    if(                    string_operator_equals(type_name_430,"unsigned")) {
                        __dec_obj185=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_430,"int")) {
                            long__438=(_Bool)1;
                            unsigned__437=(_Bool)1;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_430,"signed")) {
                        __dec_obj186=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(type_name_430,"int")) {
                            long__438=(_Bool)1;
                            unsigned__437=(_Bool)0;
                            break;
                        }
                    }
                    else if(                    string_operator_equals(type_name_430,"long")) {
                        p_481=info->p;
                        sline_482=info->sline;
                        if(                        xisalpha(*info->p)) {
                            long_long_439=(_Bool)1;
                            __dec_obj187=type_name_430;
                            type_name_430=(char*)come_increment_ref_count(parse_word(info));
                            __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                        }
                        else {
                            long__438=(_Bool)1;
                            break;
                        }
                        if(                        string_operator_equals(type_name_430,"int")) {
                            long_long_439=(_Bool)1;
                            break;
                        }
                        else if(                        !is_type_name(type_name_430,info)) {
                            __dec_obj188=type_name_430;
                            type_name_430=(char*)come_increment_ref_count(__builtin_string("long"));
                            __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                            long_long_439=(_Bool)1;
                            info->p=p_481;
                            info->sline=sline_482;
                            break;
                        }
                    }
                    else if(                    is_type_name(type_name_430,info)) {
                        if(                        long__438) {
                            long_long_439=(_Bool)1;
                            long__438=(_Bool)0;
                        }
                        else {
                            long__438=(_Bool)1;
                        }
                        break;
                    }
                    else {
                        info->p=p_481;
                        info->sline=sline_482;
                        __dec_obj189=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(__builtin_string("long"));
                        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
            }
        }
        else if(        string_operator_equals(type_name_430,"unsigned")) {
            unsigned__437=(_Bool)1;
            if(            xisalpha(*info->p)||*info->p==95) {
                p_483=info->p;
                sline_484=info->sline;
                __dec_obj190=type_name_430;
                type_name_430=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_430,"short")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_485=info->p;
                        sline_486=info->sline;
                        __dec_obj191=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_430,info)) {
                            short__440=(_Bool)1;
                        }
                        else {
                            short__440=(_Bool)1;
                            __dec_obj192=type_name_430;
                            type_name_430=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_485;
                            info->sline=sline_486;
                        }
                    }
                    else {
                        short__440=(_Bool)1;
                        __dec_obj193=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                string_operator_equals(type_name_430,"long")) {
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        p_487=info->p;
                        sline_488=info->sline;
                        __dec_obj194=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        is_type_name(type_name_430,info)) {
                            long__438=(_Bool)1;
                        }
                        else {
                            long__438=(_Bool)1;
                            __dec_obj195=type_name_430;
                            type_name_430=(char*)come_increment_ref_count(__builtin_string("int"));
                            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                            info->p=p_487;
                            info->sline=sline_488;
                        }
                    }
                    else {
                        long__438=(_Bool)1;
                        __dec_obj196=type_name_430;
                        type_name_430=(char*)come_increment_ref_count(__builtin_string("int"));
                        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                        break;
                    }
                }
                else if(                !is_type_name(type_name_430,info)) {
                    __dec_obj197=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string("int"));
                    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_483;
                    info->sline=sline_484;
                    break;
                }
            }
            else {
                __dec_obj198=type_name_430;
                type_name_430=(char*)come_increment_ref_count(__builtin_string("int"));
                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                break;
            }
        }
        else if(        string_operator_equals(type_name_430,"signed")||string_operator_equals(type_name_430,"__signed__")) {
            unsigned__437=(_Bool)0;
            __dec_obj199=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"register")) {
            register__436=(_Bool)1;
            __dec_obj200=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"restrict")) {
            restrict__441=(_Bool)1;
            __dec_obj201=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"_Addr")) {
            __dec_obj202=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"__restrict")) {
            restrict__441=(_Bool)1;
            __dec_obj203=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        string_operator_equals(type_name_430,"tup")) {
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                expected_next_character(58,info);
            }
            __dec_obj204=type_name_430;
            type_name_430=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
            parse_multiple_type=(_Bool)1;
            tuple__449=(_Bool)1;
        }
        else if(        string_operator_equals(type_name_430,"short")) {
            short__440=(_Bool)0;
            if(            *info->p==58) {
                break;
            }
            else if(            xisalnum(*info->p)) {
                p_489=info->p;
                sline_490=info->sline;
                __dec_obj205=type_name_430;
                type_name_430=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(type_name_430,"int")) {
                    short__440=(_Bool)1;
                    break;
                }
                else if(                string_operator_equals(type_name_430,"short")) {
                    short__440=(_Bool)1;
                    break;
                }
                else if(                is_type_name(type_name_430,info)) {
                    info->p=p_489;
                    info->sline=sline_490;
                }
                else {
                    __dec_obj206=type_name_430;
                    type_name_430=(char*)come_increment_ref_count(__builtin_string("short"));
                    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
                    info->p=p_489;
                    info->sline=sline_490;
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
    attribute_491=(char*)come_increment_ref_count(parse_struct_attribute(info));
    skip_pointer_attribute(info);
    pointer_num_492=0;
    heap_493=(_Bool)0;
    refference_494=(_Bool)0;
    no_refference_495=(_Bool)0;
    channel_496=(_Bool)0;
    any_class_497=(_Bool)0;
    while(1) {
        if(        *info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            pointer_num_492++;
        }
        else if(        *info->p==126) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            any_class_497=(_Bool)1;
        }
        else if(        *info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
            heap_493=(_Bool)1;
        }
        else if(        gComePthread&&*info->p==64) {
            info->p++;
            skip_spaces_and_lf(info);
            channel_496=(_Bool)1;
        }
        else {
            break;
        }
    }
    skip_pointer_attribute(info);
    tuple_name_498=((void*)0);
    if(    *info->p==58&&*(info->p+1)!=58&&tuple__449) {
        info->p++;
        skip_spaces_and_lf(info);
        __dec_obj207=tuple_name_498;
        tuple_name_498=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    atomic__454) {
        expected_next_character(41,info);
    }
    lambda_flag_499=(_Bool)0;
    {
        pX_500=info->p;
        slineX_501=info->sline;
        if(        xisalpha(*info->p)||*info->p==95) {
            (void)((char*)(__right_value490=parse_word(info)));
            __right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            if(            *info->p==40&&info->in_typedef) {
                lambda_flag_499=(_Bool)1;
            }
        }
        info->p=pX_500;
        info->sline=slineX_501;
    }
    function_pointer_flag_504=(_Bool)0;
    {
        p_505=info->p;
        sline_506=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            *info->p==42||*info->p==94) {
                function_pointer_flag_504=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                word_507=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p==40) {
                        function_pointer_flag_504=(_Bool)1;
                    }
                }
                word_507 = come_decrement_ref_count2(word_507, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_505;
        info->sline=sline_506;
    }
    var_name_between_brace_508=(_Bool)0;
    {
        p_509=info->p;
        sline_510=info->sline;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            if(            xisalpha(*info->p)||*info->p==95) {
                word_511=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_511,info)) {
                }
                else if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    *info->p!=40) {
                        var_name_between_brace_508=(_Bool)1;
                    }
                }
                word_511 = come_decrement_ref_count2(word_511, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        info->p=p_509;
        info->sline=sline_510;
    }
    if(    anonymous_type_452&&*info->p==123) {
        static int anonymous_num_512=0;
        if(        struct__442) {
            if(            string_operator_equals(type_name_430,"")) {
                __dec_obj208=type_name_430;
                type_name_430=(char*)come_increment_ref_count(xsprintf("anonymous_typeX%d",++anonymous_num_512));
                __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_513=(struct sNode*)come_increment_ref_count(parse_struct((char*)come_increment_ref_count(type_name_430),(char*)come_increment_ref_count(xsprintf("")),info));
            Value_514=node_compile(node_513,info);
            if(            !Value_514) {
                err_msg(info,"parse_struct is failed");
                __result304__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value497=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 1990, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_513) { node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value497,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result304__;
            }
            else {
            }
            pointer_num_515=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_515++;
            }
            __dec_obj209=type_502;
            type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2003, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_502->mPointerNum=pointer_num_515;
            if(node_513) { node_513 = come_decrement_ref_count2(node_513, ((struct sNode*)node_513)->finalize, ((struct sNode*)node_513)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        enum__444) {
            if(            string_operator_equals(type_name_430,"")) {
                __dec_obj210=type_name_430;
                type_name_430=(char*)come_increment_ref_count(xsprintf("anonymous_typeY%d",++anonymous_num_512));
                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_516=(struct sNode*)come_increment_ref_count(parse_enum((char*)come_increment_ref_count(type_name_430),info));
            if(            !info->no_output_err) {
                Value_517=node_compile(node_516,info);
                if(                !Value_517) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    __result305__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value503=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2017, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value503,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result305__;
                }
                else {
                }
            }
            __dec_obj211=type_502;
            type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2021, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj211,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(node_516) { node_516 = come_decrement_ref_count2(node_516, ((struct sNode*)node_516)->finalize, ((struct sNode*)node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        union__443) {
            if(            string_operator_equals(type_name_430,"")) {
                __dec_obj212=type_name_430;
                type_name_430=(char*)come_increment_ref_count(xsprintf("anonymous_typeZ%d",++anonymous_num_512));
                __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            node_518=(struct sNode*)come_increment_ref_count(parse_union((char*)come_increment_ref_count(type_name_430),info));
            Value_519=node_compile(node_518,info);
            if(            !Value_519) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                __result306__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value509=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2033, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
                type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value509,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result306__;
            }
            else {
            }
            pointer_num_520=0;
            while(*info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                pointer_num_520++;
            }
            __dec_obj213=type_502;
            type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2047, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj213,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_502->mPointerNum=pointer_num_520;
            if(node_518) { node_518 = come_decrement_ref_count2(node_518, ((struct sNode*)node_518)->finalize, ((struct sNode*)node_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            err_msg(info,"unexpected { character");
            __result307__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value513=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2053, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value513,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result307__;
        }
        attribute_521=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_521,"")) {
            __dec_obj214=type_502->mAttribute;
            type_502->mAttribute=(char*)come_increment_ref_count(attribute_521);
            __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_508&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj215=var_name_503;
                var_name_503=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_453) {
                static int num_anonymous_var_name_522=0;
                num_anonymous_var_name_522++;
                __dec_obj216=var_name_503;
                var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZ%d",num_anonymous_var_name_522));
                __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj217=var_name_503;
                var_name_503=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_523=0;
                num_anonymous_var_name_523++;
                __dec_obj218=var_name_503;
                var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameY%d",num_anonymous_var_name_523));
                __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_508&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_524=info->no_comma;
                info->no_comma=(_Bool)1;
                node_525=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_524;
                __dec_obj219=type_502->mSizeNum;
                type_502->mSizeNum=(struct sNode*)come_increment_ref_count(node_525);
                if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_525) { node_525 = come_decrement_ref_count2(node_525, ((struct sNode*)node_525)->finalize, ((struct sNode*)node_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_526=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_521,"")&&string_operator_not_equals(attribute2_526,"")) {
                __dec_obj220=type_502->mAttribute;
                type_502->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_521,((char*)(__right_value521=charp_operator_add(" ",attribute2_526)))));
                __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value521 = come_decrement_ref_count2(__right_value521, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_526,"")) {
                __dec_obj221=type_502->mAttribute;
                type_502->mAttribute=(char*)come_increment_ref_count(attribute2_526);
                __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_526 = come_decrement_ref_count2(attribute2_526, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_521 = come_decrement_ref_count2(attribute_521, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    lambda_flag_499) {
        if(        (_if_conditional3=(((struct sType*)(__right_value523=map$2charphsTypephp_operator_load_element(info->types,type_name_430))))),        come_call_finalizer3(__right_value523,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional3) {
            __dec_obj222=result_type_527;
            result_type_527=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value524=map$2charphsTypephp_operator_load_element(info->types,type_name_430)))));
            come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_527->mClass=((struct sClass*)(__right_value526=map$2charphsClassphp_operator_load_element(info->classes,result_type_527->mClass->mName)));
            come_call_finalizer3(__right_value526,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_430)) {
            for(            i_528=0;            i_528<list$1charphp_length(info->generics_type_names);            i_528++            ){
                if(                (_if_conditional4=(string_operator_equals(((char*)(__right_value527=list$1charphp_operator_load_element(info->generics_type_names,i_528))),type_name_430))),                (__right_value527 = come_decrement_ref_count2(__right_value527, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional4) {
                    __dec_obj223=result_type_527;
                    result_type_527=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2121, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value529=xsprintf("generics_type%d",i_528))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj223,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value529 = come_decrement_ref_count2(__right_value529, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_430)) {
            for(            i_532=0;            i_532<list$1charphp_length(info->method_generics_type_names);            i_532++            ){
                if(                (_if_conditional5=(string_operator_equals(((char*)(__right_value531=list$1charphp_operator_load_element(info->method_generics_type_names,i_532))),type_name_430))),                (__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional5) {
                    __dec_obj224=result_type_527;
                    result_type_527=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2128, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value533=xsprintf("mgenerics_type%d",i_532))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value533 = come_decrement_ref_count2(__right_value533, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj225=result_type_527;
            result_type_527=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2133, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_527->mAtomic=result_type_527->mAtomic||atomic__454;
        result_type_527->mConstant=result_type_527->mConstant||constant_433;
        __dec_obj226=result_type_527->mAlignas;
        result_type_527->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_527->mRegister=register__436;
        result_type_527->mUnsigned=result_type_527->mUnsigned||unsigned__437;
        result_type_527->mVolatile=volatile__435;
        result_type_527->mGenerate=generate__450;
        result_type_527->mRecord=result_type_527->mRecord||record__431;
        result_type_527->mUniq=result_type_527->mUniq||uniq__448;
        result_type_527->mStatic=(result_type_527->mStatic||static__434)&&!result_type_527->mUniq;
        result_type_527->mException=result_type_527->mException||exception__432;
        result_type_527->mExtern=result_type_527->mExtern||extern__446;
        result_type_527->mInline=result_type_527->mInline||inline__447;
        result_type_527->mRestrict=result_type_527->mRestrict||restrict__441;
        result_type_527->mLongLong=result_type_527->mLongLong||long_long_439;
        result_type_527->mLong=result_type_527->mLong||long__438;
        result_type_527->mShort=result_type_527->mShort||short__440;
        result_type_527->mPointerNum=pointer_num_492;
        result_type_527->mHeap=result_type_527->mHeap||heap_493;
        result_type_527->mChannel=result_type_527->mChannel||channel_496;
        result_type_527->mAnyClass=result_type_527->mAnyClass||any_class_497;
        __dec_obj227=var_name_503;
        var_name_503=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        multiple_assign_var5=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value538=parse_params(info,(_Bool)0)));
        param_types_533=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var5->v1);
        param_names_534=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v2);
        param_default_parametors_535=(struct list$1charph*)come_increment_ref_count(multiple_assign_var5->v3);
        var_args_536=multiple_assign_var5->v4;
        come_call_finalizer3(__right_value538,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj228=type_502;
        type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2162, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj228,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj229=type_502->mResultType;
        type_502->mResultType=(struct sType*)come_increment_ref_count(result_type_527);
        come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj230=type_502->mParamTypes;
        type_502->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_533);
        come_call_finalizer3(__dec_obj230,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj231=type_502->mParamNames;
        type_502->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_534);
        come_call_finalizer3(__dec_obj231,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_502->mVarArgs=var_args_536;
        type_502->mExtern=extern__446;
        come_call_finalizer3(result_type_527,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_533,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_534,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_535,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    function_pointer_flag_504) {
        info->p++;
        skip_spaces_and_lf(info);
        skip_pointer_attribute(info);
        function_pointer_num_537=0;
        while(*info->p==42||*info->p==94) {
            info->p++;
            skip_spaces_and_lf(info);
            skip_pointer_attribute(info);
            function_pointer_num_537++;
        }
        skip_pointer_attribute(info);
        if(        (_if_conditional6=(((struct sType*)(__right_value541=map$2charphsTypephp_operator_load_element(info->types,type_name_430))))),        come_call_finalizer3(__right_value541,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional6) {
            __dec_obj232=result_type_538;
            result_type_538=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value542=map$2charphsTypephp_operator_load_element(info->types,type_name_430)))));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value542,sType_finalize, 0, 1, 0, 0, __result_obj__);
            result_type_538->mClass=((struct sClass*)(__right_value544=map$2charphsClassphp_operator_load_element(info->classes,result_type_538->mClass->mName)));
            come_call_finalizer3(__right_value544,sClass_finalize, 0, 1, 0, 0, __result_obj__);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_430)) {
            for(            i_539=0;            i_539<list$1charphp_length(info->generics_type_names);            i_539++            ){
                if(                (_if_conditional7=(string_operator_equals(((char*)(__right_value545=list$1charphp_operator_load_element(info->generics_type_names,i_539))),type_name_430))),                (__right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional7) {
                    __dec_obj233=result_type_538;
                    result_type_538=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2195, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value547=xsprintf("generics_type%d",i_539))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj233,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_430)) {
            for(            i_540=0;            i_540<list$1charphp_length(info->method_generics_type_names);            i_540++            ){
                if(                (_if_conditional8=(string_operator_equals(((char*)(__right_value549=list$1charphp_operator_load_element(info->method_generics_type_names,i_540))),type_name_430))),                (__right_value549 = come_decrement_ref_count2(__right_value549, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional8) {
                    __dec_obj234=result_type_538;
                    result_type_538=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2202, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value551=xsprintf("mgenerics_type%d",i_540))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj234,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value551 = come_decrement_ref_count2(__right_value551, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
        }
        else {
            __dec_obj235=result_type_538;
            result_type_538=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2207, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        result_type_538->mConstant=result_type_538->mConstant||constant_433;
        result_type_538->mAtomic=result_type_538->mAtomic||atomic__454;
        __dec_obj236=result_type_538->mAlignas;
        result_type_538->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
        if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        result_type_538->mRegister=register__436;
        result_type_538->mUnsigned=result_type_538->mUnsigned||unsigned__437;
        result_type_538->mVolatile=volatile__435;
        result_type_538->mGenerate=generate__450;
        result_type_538->mUniq=result_type_538->mUniq||uniq__448;
        result_type_538->mStatic=(result_type_538->mStatic||static__434)&&!result_type_538->mUniq;
        result_type_538->mRecord=result_type_538->mRecord||record__431;
        result_type_538->mException=result_type_538->mException||exception__432;
        result_type_538->mExtern=result_type_538->mExtern||extern__446;
        result_type_538->mInline=result_type_538->mInline||inline__447;
        result_type_538->mRestrict=result_type_538->mRestrict||restrict__441;
        result_type_538->mLongLong=result_type_538->mLongLong||long_long_439;
        result_type_538->mLong=result_type_538->mLong||long__438;
        result_type_538->mShort=result_type_538->mShort||short__440;
        result_type_538->mPointerNum+=pointer_num_492;
        result_type_538->mHeap=result_type_538->mHeap||heap_493;
        result_type_538->mChannel=result_type_538->mChannel||channel_496;
        result_type_538->mAnyClass=result_type_538->mAnyClass||any_class_497;
        if(        xisalnum(*info->p)||*info->p==95) {
            __dec_obj237=var_name_503;
            var_name_503=(char*)come_increment_ref_count(parse_word(info));
            __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            *info->p==40) {
                __result310__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value557=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2235, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count(result_type_538),(char*)come_increment_ref_count(var_name_503),(_Bool)0)));
                come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
                type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value557,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result310__;
            }
        }
        else {
            static int num_anonymous_var_name_541=0;
            num_anonymous_var_name_541++;
            __dec_obj238=var_name_503;
            var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_lambda_var_nameZ%d",num_anonymous_var_name_541));
            __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        function_pointer_array_542=(_Bool)0;
        function_pointer_array_num_543=0;
        if(        *info->p==91) {
            info->p++;
            skip_spaces_and_lf(info);
            n_544=0;
            while(xisdigit(*info->p)) {
                n_544=n_544*10+*info->p-48;
                info->p++;
            }
            skip_spaces_and_lf(info);
            function_pointer_array_num_543=n_544;
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                function_pointer_array_542=(_Bool)1;
            }
        }
        expected_next_character(41,info);
        multiple_assign_var6=((struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool*)(__right_value559=parse_params(info,(_Bool)0)));
        param_types_545=(struct list$1sTypeph*)come_increment_ref_count(multiple_assign_var6->v1);
        param_names_546=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v2);
        param_default_parametors_547=(struct list$1charph*)come_increment_ref_count(multiple_assign_var6->v3);
        var_args_548=multiple_assign_var6->v4;
        come_call_finalizer3(__right_value559,tuple4$4list$1sTypephphlist$1charphphlist$1charphphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        __dec_obj239=type_502;
        type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2267, "struct sType*", (void*)0, (void*)0)),"lambda",(_Bool)0,info));
        come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj240=type_502->mResultType;
        type_502->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, result_type_538));
        come_call_finalizer3(__dec_obj240,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj241=type_502->mParamTypes;
        type_502->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(param_types_545);
        come_call_finalizer3(__dec_obj241,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj242=type_502->mParamNames;
        type_502->mParamNames=(struct list$1charph*)come_increment_ref_count(param_names_546);
        come_call_finalizer3(__dec_obj242,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
        type_502->mVarArgs=var_args_548;
        type_502->mExtern=extern__446;
        if(        function_pointer_array_542) {
            type_502->mLambdaArray=(_Bool)1;
            type_502->mLambdaArrayNum=function_pointer_array_num_543;
        }
        type_502->mFunctionPointerNum=function_pointer_num_537;
        come_call_finalizer3(result_type_538,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_545,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_546,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_547,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    string_operator_equals(type_name_430,"__typeof__")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        exp_549=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        Value_550=node_compile(exp_549,info);
        if(        !Value_550) {
            err_msg(info,"invalid __typeof__ expression");
            __result311__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value565=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2291, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
            if(exp_549) { exp_549 = come_decrement_ref_count2(exp_549, ((struct sNode*)exp_549)->finalize, ((struct sNode*)exp_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
            type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
            attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
            var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value565,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            gComeFunResultObject = (void*)0;
            return __result311__;
        }
        else {
        }
        come_value_551=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj243=type_502;
        type_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_551->type));
        come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
        attribute_552=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_552,"")) {
            __dec_obj244=type_502->mAttribute;
            type_502->mAttribute=(char*)come_increment_ref_count(attribute_552);
            __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_508&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj245=var_name_503;
                var_name_503=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_453) {
                static int num_anonymous_var_name_553=0;
                num_anonymous_var_name_553++;
                __dec_obj246=var_name_503;
                var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZL%d",num_anonymous_var_name_553));
                __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj247=var_name_503;
                var_name_503=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_554=0;
                num_anonymous_var_name_554++;
                __dec_obj248=var_name_503;
                var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_554));
                __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_508&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_555=info->no_comma;
                info->no_comma=(_Bool)1;
                node_556=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_555;
                __dec_obj249=type_502->mSizeNum;
                type_502->mSizeNum=(struct sNode*)come_increment_ref_count(node_556);
                if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_556) { node_556 = come_decrement_ref_count2(node_556, ((struct sNode*)node_556)->finalize, ((struct sNode*)node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_557=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_552,"")&&string_operator_not_equals(attribute2_557,"")) {
                __dec_obj250=type_502->mAttribute;
                type_502->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_552,((char*)(__right_value575=charp_operator_add(" ",attribute2_557)))));
                __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value575 = come_decrement_ref_count2(__right_value575, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_557,"")) {
                __dec_obj251=type_502->mAttribute;
                type_502->mAttribute=(char*)come_increment_ref_count(attribute2_557);
                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_557 = come_decrement_ref_count2(attribute2_557, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(exp_549) { exp_549 = come_decrement_ref_count2(exp_549, ((struct sNode*)exp_549)->finalize, ((struct sNode*)exp_549)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_551,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        attribute_552 = come_decrement_ref_count2(attribute_552, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(        (_if_conditional9=(((struct sType*)(__right_value577=map$2charphsTypephp_operator_load_element(info->types,type_name_430))))),        come_call_finalizer3(__right_value577,sType_finalize, 0, 1, 0, 0, __result_obj__),
        _if_conditional9) {
            __dec_obj256=type_502;
            type_502=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, ((struct sType*)(__right_value578=map$2charphsTypephp_operator_load_element(info->types,type_name_430)))));
            come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, __result_obj__);
            type_502->mTypedefOriginalPointerNum=type_502->mPointerNum;
            type_502->mClass=((struct sClass*)(__right_value580=map$2charphsClassphp_operator_load_element(info->classes,type_502->mClass->mName)));
            come_call_finalizer3(__right_value580,sClass_finalize, 0, 1, 0, 0, __result_obj__);
            __dec_obj257=type_502->mOriginalTypeName;
            type_502->mOriginalTypeName=(char*)come_increment_ref_count(__builtin_string(type_name_430));
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
            type_502->mOriginalTypeNamePointerNum=pointer_num_492;
            type_502->mOriginalTypeNameHeap=heap_493;
            type_502->mConstant=type_502->mConstant||constant_433;
            type_502->mAtomic=type_502->mAtomic||atomic__454;
            __dec_obj258=type_502->mAlignas;
            type_502->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
            if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
            type_502->mRegister=register__436;
            type_502->mUnsigned=type_502->mUnsigned||unsigned__437;
            type_502->mVolatile=volatile__435;
            type_502->mGenerate=generate__450;
            type_502->mUniq=type_502->mUniq||uniq__448;
            type_502->mStatic=(type_502->mStatic||static__434)&&!type_502->mUniq;
            type_502->mRecord=type_502->mRecord||record__431;
            type_502->mException=type_502->mException||exception__432;
            type_502->mExtern=type_502->mExtern||extern__446;
            type_502->mInline=type_502->mInline||inline__447;
            type_502->mRestrict=type_502->mRestrict||restrict__441;
            type_502->mLongLong=type_502->mLongLong||long_long_439;
            type_502->mLong=type_502->mLong||long__438;
            type_502->mShort=type_502->mShort||short__440;
            type_502->mPointerNum+=pointer_num_492;
            type_502->mHeap=type_502->mHeap||heap_493;
            type_502->mChannel=type_502->mChannel||channel_496;
            type_502->mAnyClass=type_502->mAnyClass||any_class_497;
            __dec_obj259=type_502->mTupleName;
            type_502->mTupleName=(char*)come_increment_ref_count(tuple_name_498);
            __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->generics_type_names,type_name_430)) {
            for(            i_558=0;            i_558<list$1charphp_length(info->generics_type_names);            i_558++            ){
                if(                (_if_conditional10=(string_operator_equals(((char*)(__right_value582=list$1charphp_operator_load_element(info->generics_type_names,i_558))),type_name_430))),                (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional10) {
                    __dec_obj260=type_502;
                    type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2390, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value584=xsprintf("generics_type%d",i_558))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj260,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value584 = come_decrement_ref_count2(__right_value584, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_502->mConstant=type_502->mConstant||constant_433;
            type_502->mAtomic=type_502->mAtomic||atomic__454;
            __dec_obj261=type_502->mAlignas;
            type_502->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
            if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
            type_502->mRegister=register__436;
            type_502->mUnsigned=type_502->mUnsigned||unsigned__437;
            type_502->mVolatile=volatile__435;
            type_502->mGenerate=generate__450;
            type_502->mUniq=type_502->mUniq||uniq__448;
            type_502->mStatic=(type_502->mStatic||static__434)&&!type_502->mUniq;
            type_502->mRecord=type_502->mRecord||record__431;
            type_502->mException=type_502->mException||exception__432;
            type_502->mExtern=type_502->mExtern||extern__446;
            type_502->mInline=type_502->mInline||inline__447;
            type_502->mRestrict=type_502->mRestrict||restrict__441;
            type_502->mLongLong=type_502->mLongLong||long_long_439;
            type_502->mLong=type_502->mLong||long__438;
            type_502->mShort=type_502->mShort||short__440;
            type_502->mPointerNum+=pointer_num_492;
            type_502->mHeap=type_502->mHeap||heap_493;
            type_502->mChannel=type_502->mChannel||channel_496;
            type_502->mAnyClass=type_502->mAnyClass||any_class_497;
            __dec_obj262=type_502->mTupleName;
            type_502->mTupleName=(char*)come_increment_ref_count(tuple_name_498);
            __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        list$1charphp_contained(info->method_generics_type_names,type_name_430)) {
            for(            i_559=0;            i_559<list$1charphp_length(info->method_generics_type_names);            i_559++            ){
                if(                (_if_conditional11=(string_operator_equals(((char*)(__right_value586=list$1charphp_operator_load_element(info->method_generics_type_names,i_559))),type_name_430))),                (__right_value586 = come_decrement_ref_count2(__right_value586, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                _if_conditional11) {
                    __dec_obj263=type_502;
                    type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2420, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value588=xsprintf("mgenerics_type%d",i_559))),(_Bool)0,info));
                    come_call_finalizer3(__dec_obj263,sType_finalize, 0, 0, 0, 0, (void*)0);
                    __right_value588 = come_decrement_ref_count2(__right_value588, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
            }
            type_502->mConstant=type_502->mConstant||constant_433;
            type_502->mAtomic=type_502->mAtomic||atomic__454;
            __dec_obj264=type_502->mAlignas;
            type_502->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
            if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
            type_502->mRegister=register__436;
            type_502->mUnsigned=type_502->mUnsigned||unsigned__437;
            type_502->mVolatile=volatile__435;
            type_502->mGenerate=generate__450;
            type_502->mUniq=type_502->mUniq||uniq__448;
            type_502->mStatic=(type_502->mStatic||static__434)&&!type_502->mUniq;
            type_502->mRecord=type_502->mRecord||record__431;
            type_502->mException=type_502->mException||exception__432;
            type_502->mExtern=type_502->mExtern||extern__446;
            type_502->mInline=type_502->mInline||inline__447;
            type_502->mRestrict=type_502->mRestrict||restrict__441;
            type_502->mLongLong=type_502->mLongLong||long_long_439;
            type_502->mLong=type_502->mLong||long__438;
            type_502->mShort=type_502->mShort||short__440;
            type_502->mPointerNum+=pointer_num_492;
            type_502->mHeap=type_502->mHeap||heap_493;
            type_502->mChannel=type_502->mChannel||channel_496;
            type_502->mAnyClass=type_502->mAnyClass||any_class_497;
            __dec_obj265=type_502->mTupleName;
            type_502->mTupleName=(char*)come_increment_ref_count(tuple_name_498);
            __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            (_if_conditional12=(((struct sClass*)(__right_value590=map$2charphsClassphp_operator_load_element(info->generics_classes,type_name_430)))==((void*)0))),            come_call_finalizer3(__right_value590,sClass_finalize, 0, 1, 0, 0, __result_obj__),
            _if_conditional12) {
                __result312__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value592=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2453, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__right_value592,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                gComeFunResultObject = (void*)0;
                return __result312__;
            }
            __dec_obj266=type_502;
            type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2456, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj266,sType_finalize, 0, 0, 0, 0, (void*)0);
            while((_Bool)1) {
                multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value595=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                generics_type_560=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                var_name_561=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                err_562=multiple_assign_var7->v3;
                come_call_finalizer3(__right_value595,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_562) {
                    __result313__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value597=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2462, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_561 = come_decrement_ref_count2(var_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value597,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result313__;
                }
                list$1sTypephp_push_back(type_502->mGenericsTypes,(struct sType*)come_increment_ref_count(generics_type_560));
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    come_call_finalizer3(generics_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_561 = come_decrement_ref_count2(var_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid generics type(%c)(%c)(%c)\n",*info->p,*(info->p+1),*(info->p+2));
                    __result314__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value599=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2479, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(generics_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_561 = come_decrement_ref_count2(var_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value599,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result314__;
                }
                come_call_finalizer3(generics_type_560,sType_finalize, 0, 0, 0, 0, (void*)0);
                var_name_561 = come_decrement_ref_count2(var_name_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            is_contained_generics_class(type_502,info)) {
                __dec_obj267=type_502;
                type_502=(struct sType*)come_increment_ref_count(solve_generics(type_502,info->generics_type,info));
                come_call_finalizer3(__dec_obj267,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_502,type_502,info)) {
                    new_name_563=(char*)come_increment_ref_count(create_generics_name(type_502,info));
                    printf("%s %d: output generics is failed(%s)\n",info->sname,info->sline,new_name_563);
                    exit(7);
                    new_name_563 = come_decrement_ref_count2(new_name_563, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_502->mConstant=type_502->mConstant||constant_433;
            type_502->mAtomic=type_502->mAtomic||atomic__454;
            __dec_obj268=type_502->mAlignas;
            type_502->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
            if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); };
            type_502->mRegister=register__436;
            type_502->mUnsigned=type_502->mUnsigned||unsigned__437;
            type_502->mVolatile=volatile__435;
            type_502->mGenerate=generate__450;
            type_502->mUniq=type_502->mUniq||uniq__448;
            type_502->mStatic=(type_502->mStatic||static__434)&&!type_502->mUniq;
            type_502->mRecord=type_502->mRecord||record__431;
            type_502->mException=type_502->mException||exception__432;
            type_502->mExtern=type_502->mExtern||extern__446;
            type_502->mInline=type_502->mInline||inline__447;
            type_502->mRestrict=type_502->mRestrict||restrict__441;
            type_502->mLongLong=type_502->mLongLong||long_long_439;
            type_502->mLong=type_502->mLong||long__438;
            type_502->mShort=type_502->mShort||short__440;
            type_502->mPointerNum+=pointer_num_492;
            type_502->mHeap=type_502->mHeap||heap_493;
            type_502->mChannel=type_502->mChannel||channel_496;
            type_502->mAnyClass=type_502->mAnyClass||any_class_497;
            __dec_obj269=type_502->mTupleName;
            type_502->mTupleName=(char*)come_increment_ref_count(tuple_name_498);
            __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj270=type_name_430;
            type_name_430=(char*)come_increment_ref_count(type_502->mClass->mName);
            __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            if(            struct__442) {
                klass_564=((struct sClass*)(__right_value602=map$2charphsClassphp_operator_load_element(info->classes,type_name_430)));
                come_call_finalizer3(__right_value602,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_564==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_430),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2525, "struct sClass*", (void*)0, (void*)0)),type_name_430,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)1,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            if(            union__443) {
                klass_606=((struct sClass*)(__right_value610=map$2charphsClassphp_operator_load_element(info->classes,type_name_430)));
                come_call_finalizer3(__right_value610,sClass_finalize, 0, 1, 0, 0, __result_obj__);
                if(                klass_606==((void*)0)&&*info->p!=60) {
                    map$2charphsClassphp_insert(info->classes,(char*)come_increment_ref_count(type_name_430),(struct sClass*)come_increment_ref_count(sClass_initialize((struct sClass*)come_increment_ref_count((struct sClass*)come_calloc(1, sizeof(struct sClass)*(1), "05type.c", 2532, "struct sClass*", (void*)0, (void*)0)),type_name_430,(_Bool)0,(_Bool)1,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0,-1,-1,(_Bool)0,info)));
                }
            }
            __dec_obj271=type_502;
            type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2536, "struct sType*", (void*)0, (void*)0)),type_name_430,(_Bool)0,info));
            come_call_finalizer3(__dec_obj271,sType_finalize, 0, 0, 0, 0, (void*)0);
            type_502->mConstant=type_502->mConstant||constant_433;
            type_502->mAtomic=type_502->mAtomic||atomic__454;
            __dec_obj272=type_502->mAlignas;
            type_502->mAlignas=(struct sNode*)come_increment_ref_count(alignas__451);
            if(__dec_obj272) { __dec_obj272 = come_decrement_ref_count2(__dec_obj272, ((struct sNode*)__dec_obj272)->finalize, ((struct sNode*)__dec_obj272)->_protocol_obj, 0,0,0, (void*)0); };
            type_502->mRegister=register__436;
            type_502->mUnsigned=type_502->mUnsigned||unsigned__437;
            type_502->mVolatile=volatile__435;
            type_502->mGenerate=generate__450;
            type_502->mUniq=type_502->mUniq||uniq__448;
            type_502->mStatic=(type_502->mStatic||static__434)&&!type_502->mUniq;
            type_502->mRecord=type_502->mRecord||record__431;
            type_502->mException=type_502->mException||exception__432;
            type_502->mExtern=type_502->mExtern||extern__446;
            type_502->mInline=type_502->mInline||inline__447;
            type_502->mRestrict=type_502->mRestrict||restrict__441;
            type_502->mLongLong=type_502->mLongLong||long_long_439;
            type_502->mLong=type_502->mLong||long__438;
            type_502->mShort=type_502->mShort||short__440;
            type_502->mPointerNum+=pointer_num_492;
            type_502->mHeap=type_502->mHeap||heap_493;
            type_502->mChannel=type_502->mChannel||channel_496;
            type_502->mAnyClass=type_502->mAnyClass||any_class_497;
            __dec_obj273=type_502->mTupleName;
            type_502->mTupleName=(char*)come_increment_ref_count(tuple_name_498);
            __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        skip_pointer_attribute(info);
        while(1) {
            if(            *info->p==42) {
                info->p++;
                skip_spaces_and_lf(info);
                skip_pointer_attribute(info);
                type_502->mPointerNum++;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_502->mHeap=(_Bool)1;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==38) {
                info->p++;
                skip_spaces_and_lf(info);
                type_502->mNoHeap=(_Bool)1;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mHeap=(_Bool)0;
                }
            }
            else if(            *info->p==63) {
                info->p++;
                if(                *info->p==63) {
                    info->p++;
                    type_502->mGuardValue=(_Bool)1;
                }
                else {
                    type_502->mNullValue=(_Bool)1;
                }
                skip_spaces_and_lf(info);
            }
            else if(            *info->p==96) {
                info->p++;
                skip_spaces_and_lf(info);
                type_502->mNoCallingDestructor=(_Bool)1;
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
                type_502->mPointerNum++;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mPointerNum++;
                }
            }
            else if(            *info->p==37) {
                info->p++;
                skip_spaces_and_lf(info);
                type_502->mHeap=(_Bool)1;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mHeap=(_Bool)1;
                }
            }
            else if(            *info->p==126) {
                info->p++;
                skip_spaces_and_lf(info);
                type_502->mAnyClass=(_Bool)1;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                }
            }
            else if(            gComePthread&&*info->p==64) {
                info->p++;
                skip_spaces_and_lf(info);
                type_502->mChannel=(_Bool)1;
                if(                type_502->mNoSolvedGenericsType) {
                    type_502->mNoSolvedGenericsType->mChannel=(_Bool)1;
                }
            }
            else {
                break;
            }
        }
        if(        parse_multiple_type&&*info->p==44) {
            types_607=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "05type.c", 2667, "struct list$1sTypeph*", (void*)0, (void*)0))));
            list$1sTypephp_push_back(types_607,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_502)));
            while(*info->p==44) {
                info->p++;
                skip_spaces_and_lf(info);
                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value618=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                type2_608=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                name_609=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                err_610=multiple_assign_var8->v3;
                come_call_finalizer3(__right_value618,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                if(                !err_610) {
                    __result336__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value620=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2678, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count((struct sType*)((void*)0)),(char*)come_increment_ref_count((char*)((void*)0)),(_Bool)0)));
                    come_call_finalizer3(type2_608,sType_finalize, 0, 0, 0, 0, (void*)0);
                    name_609 = come_decrement_ref_count2(name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(types_607,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
                    var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__right_value620,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
                    gComeFunResultObject = (void*)0;
                    return __result336__;
                }
                list$1sTypephp_push_back(types_607,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type2_608)));
                come_call_finalizer3(type2_608,sType_finalize, 0, 0, 0, 0, (void*)0);
                name_609 = come_decrement_ref_count2(name_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            num_tuples_611=list$1sTypephp_length(types_607);
            __dec_obj274=type_502;
            type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2691, "struct sType*", (void*)0, (void*)0)),((char*)(__right_value623=xsprintf("tuple%d",num_tuples_611))),(_Bool)0,info));
            come_call_finalizer3(__dec_obj274,sType_finalize, 0, 0, 0, 0, (void*)0);
            __right_value623 = come_decrement_ref_count2(__right_value623, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            type_502->mPointerNum++;
            type_502->mHeap=(_Bool)1;
            for(            o2_saved_612=(struct list$1sTypeph*)come_increment_ref_count((types_607)),it_613=list$1sTypephp_begin((o2_saved_612));            !list$1sTypephp_end((o2_saved_612));            it_613=list$1sTypephp_next((o2_saved_612))            ){
                list$1sTypephp_push_back(type_502->mGenericsTypes,(struct sType*)come_increment_ref_count((((struct sType*)(__right_value625=come_call_cloner(sType_clone, it_613))))));
                come_call_finalizer3(__right_value625,sType_finalize, 0, 1, 0, 0, __result_obj__);
            }
            come_call_finalizer3(o2_saved_612,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            while(1) {
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    skip_pointer_attribute(info);
                    type_502->mPointerNum++;
                    if(                    type_502->mNoSolvedGenericsType) {
                        type_502->mNoSolvedGenericsType->mPointerNum++;
                    }
                }
                else if(                *info->p==37) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_502->mHeap=(_Bool)1;
                    if(                    type_502->mNoSolvedGenericsType) {
                        type_502->mNoSolvedGenericsType->mHeap=(_Bool)1;
                    }
                }
                else if(                *info->p==126) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_502->mAnyClass=(_Bool)1;
                    if(                    type_502->mNoSolvedGenericsType) {
                        type_502->mNoSolvedGenericsType->mAnyClass=(_Bool)1;
                    }
                }
                else if(                gComePthread&&*info->p==64) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    type_502->mChannel=(_Bool)1;
                    if(                    type_502->mNoSolvedGenericsType) {
                        type_502->mNoSolvedGenericsType->mChannel=(_Bool)1;
                    }
                }
                else {
                    break;
                }
            }
            if(            is_contained_generics_class(type_502,info)) {
                __dec_obj275=type_502;
                type_502=(struct sType*)come_increment_ref_count(solve_generics(type_502,info->generics_type,info));
                come_call_finalizer3(__dec_obj275,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                if(                !output_generics_struct(type_502,type_502,info)) {
                    new_name_614=(char*)come_increment_ref_count(create_generics_name(type_502,info));
                    printf("output generics is failed(%s)\n",new_name_614);
                    exit(9);
                    new_name_614 = come_decrement_ref_count2(new_name_614, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
            }
            type_502->mMultipleTypes=(_Bool)1;
            __dec_obj276=type_name_430;
            type_name_430=(char*)come_increment_ref_count(type_502->mClass->mName);
            __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(types_607,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
        attribute_615=(char*)come_increment_ref_count(parse_struct_attribute(info));
        if(        string_operator_not_equals(attribute_615,"")) {
            __dec_obj277=type_502->mAttribute;
            type_502->mAttribute=(char*)come_increment_ref_count(attribute_615);
            __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        if(        parse_variable_name) {
            if(            var_name_between_brace_508&&*info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                __dec_obj278=var_name_503;
                var_name_503=(char*)come_increment_ref_count(__builtin_string(""));
                __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            anonymous_name_453) {
                static int num_anonymous_var_name_616=0;
                num_anonymous_var_name_616++;
                __dec_obj279=var_name_503;
                var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameXYZLO%d",num_anonymous_var_name_616));
                __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj280=var_name_503;
                var_name_503=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            else {
                static int num_anonymous_var_name_617=0;
                num_anonymous_var_name_617++;
                __dec_obj281=var_name_503;
                var_name_503=(char*)come_increment_ref_count(xsprintf("anonymous_var_nameX%d",num_anonymous_var_name_617));
                __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            if(            var_name_between_brace_508&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            *info->p==58) {
                info->p++;
                skip_spaces_and_lf(info);
                no_comma_618=info->no_comma;
                info->no_comma=(_Bool)1;
                node_619=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_618;
                __dec_obj282=type_502->mSizeNum;
                type_502->mSizeNum=(struct sNode*)come_increment_ref_count(node_619);
                if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); };
                if(node_619) { node_619 = come_decrement_ref_count2(node_619, ((struct sNode*)node_619)->finalize, ((struct sNode*)node_619)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            attribute2_620=(char*)come_increment_ref_count(parse_struct_attribute(info));
            if(            string_operator_not_equals(attribute_615,"")&&string_operator_not_equals(attribute2_620,"")) {
                __dec_obj283=type_502->mAttribute;
                type_502->mAttribute=(char*)come_increment_ref_count(string_operator_add(attribute_615,((char*)(__right_value635=charp_operator_add(" ",attribute2_620)))));
                __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
                __right_value635 = come_decrement_ref_count2(__right_value635, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            else if(            string_operator_not_equals(attribute2_620,"")) {
                __dec_obj284=type_502->mAttribute;
                type_502->mAttribute=(char*)come_increment_ref_count(attribute2_620);
                __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            attribute2_620 = come_decrement_ref_count2(attribute2_620, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        attribute_615 = come_decrement_ref_count2(attribute_615, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
            type_502->mArrayPointerType=(_Bool)1;
            type_502->mPointerNum++;
            break;
        }
        parse_sharp_v5(info);
        node_621=(struct sNode*)come_increment_ref_count(expression_v13(info));
        list$1sNodephp_push_back(type_502->mArrayNum,(struct sNode*)come_increment_ref_count(node_621));
        parse_sharp_v5(info);
        expected_next_character(93,info);
        if(node_621) { node_621 = come_decrement_ref_count2(node_621, ((struct sNode*)node_621)->finalize, ((struct sNode*)node_621)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    multiple_assign_var9=((struct tuple2$2charphcharph*)(__right_value638=parse_attribute(info,(_Bool)0)));
    asm_name_622=(char*)come_increment_ref_count(multiple_assign_var9->v1);
    attribute2_623=(char*)come_increment_ref_count(multiple_assign_var9->v2);
    come_call_finalizer3(__right_value638,tuple2$2charphcharphp_finalize, 0, 1, 0, 0, __result_obj__);
    if(    string_operator_not_equals(attribute2_623,"")) {
        __dec_obj285=type_502->mAttribute;
        type_502->mAttribute=(char*)come_increment_ref_count(attribute2_623);
        __dec_obj285 = come_decrement_ref_count2(__dec_obj285, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj286=type_502->mAsmName;
    type_502->mAsmName=(char*)come_increment_ref_count(asm_name_622);
    __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
    parse_sharp_v5(info);
    if(    type_502->mChannel) {
        type_before_624=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_502));
        __dec_obj287=type_502;
        type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2853, "struct sType*", (void*)0, (void*)0)),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj287,sType_finalize, 0, 0, 0, 0, (void*)0);
        __dec_obj288=type_502->mArrayNum;
        type_502->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count((__list_values1___625[0]=(struct sNode*)come_increment_ref_count(((struct sNode*)(__right_value642=create_int_node(2,info)))),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05type.c", 2854, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone)),1,__list_values1___625)));
        come_call_finalizer3(__dec_obj288,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
        if(__right_value642) { __right_value642 = come_decrement_ref_count2(__right_value642, ((struct sNode*)__right_value642)->finalize, ((struct sNode*)__right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        __dec_obj289=type_502->mChannelType;
        type_502->mChannelType=(struct sType*)come_increment_ref_count(type_before_624);
        come_call_finalizer3(__dec_obj289,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_502->mChannel=(_Bool)1;
        come_call_finalizer3(type_before_624,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_502->mAnyClass&&!type_502->mClass->mProtocol) {
        type_before_628=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_502));
        type_before_628->mHeap=(_Bool)1;
        type_before_628->mPointerNum=1;
        __dec_obj290=type_502;
        type_502=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2862, "struct sType*", (void*)0, (void*)0)),"void",(_Bool)0,info));
        come_call_finalizer3(__dec_obj290,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_502->mHeap=(_Bool)1;
        type_502->mPointerNum=1;
        __dec_obj291=type_502->mAnyOriginalType;
        type_502->mAnyOriginalType=(struct sType*)come_increment_ref_count(type_before_628);
        come_call_finalizer3(__dec_obj291,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_502->mAnyClass=(_Bool)1;
        come_call_finalizer3(type_before_628,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    type_502->mException) {
        type2_629=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2869, "struct sType*", (void*)0, (void*)0)),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type2_629->mGenericsTypes,0,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2870, "struct sType*", (void*)0, (void*)0)),"generics_type0",(_Bool)0,info)));
        list$1sTypephp_operator_store_element(type2_629->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2871, "struct sType*", (void*)0, (void*)0)),"generics_type1",(_Bool)0,info)));
        type2_629->mPointerNum=1;
        type2_629->mHeap=(_Bool)1;
        type3_635=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2875, "struct sType*", (void*)0, (void*)0)),"tuple2",(_Bool)0,info));
        list$1sTypephp_operator_store_element(type3_635->mGenericsTypes,0,(struct sType*)come_increment_ref_count(type_502));
        list$1sTypephp_operator_store_element(type3_635->mGenericsTypes,1,(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05type.c", 2877, "struct sType*", (void*)0, (void*)0)),"char*",(_Bool)0,info)));
        ((struct sType*)(__right_value659=list$1sTypephp_operator_load_element(type3_635->mGenericsTypes,1)))->mHeap=(_Bool)1;
        come_call_finalizer3(__right_value659,sType_finalize, 0, 1, 0, 0, __result_obj__);
        type4_636=(struct sType*)come_increment_ref_count(solve_generics(type2_629,type3_635,info));
        type4_636->mException=(_Bool)1;
        type4_636->mUniq=type_502->mUniq;
        __result342__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value662=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2885, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count(type4_636),(char*)come_increment_ref_count(var_name_503),(_Bool)1)));
        come_call_finalizer3(type2_629,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_636,sType_finalize, 0, 0, 0, 0, (void*)0);
        type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
        attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
        var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        asm_name_622 = come_decrement_ref_count2(asm_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        attribute2_623 = come_decrement_ref_count2(attribute2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value662,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        gComeFunResultObject = (void*)0;
        return __result342__;
        come_call_finalizer3(type2_629,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_635,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type4_636,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    string_operator_not_equals(attribute_491,"")) {
        __dec_obj293=type_502->mAttribute;
        type_502->mAttribute=(char*)come_increment_ref_count(attribute_491);
        __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = ((struct tuple3$3sTypephcharphbool*)(__right_value664=tuple3$3sTypephcharphbool_initialize((struct tuple3$3sTypephcharphbool**)come_increment_ref_count((struct tuple3$3sTypephcharphbool*)come_calloc(1, sizeof(struct tuple3$3sTypephcharphbool)*(1), "05type.c", 2892, "struct tuple3$3sTypephcharphbool", tuple3$3sTypephcharphbool_finalize, tuple3$3sTypephcharphbool_clone)),(struct sType*)come_increment_ref_count(type_502),(char*)come_increment_ref_count(var_name_503),(_Bool)1)));
    type_name_430 = come_decrement_ref_count2(type_name_430, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(alignas__451) { alignas__451 = come_decrement_ref_count2(alignas__451, ((struct sNode*)alignas__451)->finalize, ((struct sNode*)alignas__451)->_protocol_obj, 0, 0, 0, (void*)0); } 
    attribute_491 = come_decrement_ref_count2(attribute_491, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    tuple_name_498 = come_decrement_ref_count2(tuple_name_498, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_502,sType_finalize, 0, 0, 0, 0, (void*)0);
    var_name_503 = come_decrement_ref_count2(var_name_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    asm_name_622 = come_decrement_ref_count2(asm_name_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    attribute2_623 = come_decrement_ref_count2(attribute2_623, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value664,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static int list$1charphp_length(struct list$1charph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static char* list$1charphp_operator_load_element(struct list$1charph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1charph* it_529;
int i_530;
char* __result308__;
char* default_value_531;
char* __result309__;
default_value_531 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_529=self->head;
    i_530=0;
    while(it_529!=((void*)0)) {
        if(        position==i_530) {
            __result308__ = gComeFunResultObject = __result_obj__ = it_529->item;
            gComeFunResultObject = (void*)0;
            return __result308__;
        }
        it_529=it_529->next;
        i_530++;
    }
    memset(&default_value_531,0,sizeof(char*));
    __result309__ = gComeFunResultObject = __result_obj__ = default_value_531;
    default_value_531 = come_decrement_ref_count2(default_value_531, (void*)0, (void*)0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj252;
struct sType* __dec_obj253;
char* __dec_obj254;
char* __dec_obj255;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj252=self->c_value;
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj253=self->type;
            come_call_finalizer3(__dec_obj253,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj254=self->c_value_without_right_value_objects;
            __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj255=self->c_value_without_cast_object_value;
            __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct map$2charphsClassph* map$2charphsClassphp_insert(struct map$2charphsClassph* self, char* key, struct sClass* item){
void* __result_obj__=(void*)0;
unsigned int hash_582;
unsigned int it_583;
_Bool same_key_exist_600;
char* it2_603;
struct map$2charphsClassph* __result335__;
    if(    self->len*10>=self->size) {
        map$2charphsClassphp_rehash(self);
    }
    hash_582=charp_get_hash_key(key)%self->size;
    it_583=hash_582;
    while((_Bool)1) {
        if(        self->item_existance[it_583]) {
            if(            charp_equals(self->keys[it_583],key)) {
                if(                1) {
                    list$1charpp_remove(self->key_list,self->keys[it_583]);
                    self->keys[it_583] = come_decrement_ref_count2(self->keys[it_583], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    self->keys[it_583]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charpp_remove(self->key_list,self->keys[it_583]);
                    self->keys[it_583]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_583],sClass_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_583]=(struct sClass*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_583]=item;
                }
                break;
            }
            it_583++;
            if(            it_583>=self->size) {
                it_583=0;
            }
            else if(            it_583==hash_582) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_583]=(_Bool)1;
            if(            1) {
                self->keys[it_583]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_583]=key;
            }
            if(            1) {
                self->items[it_583]=(struct sClass*)come_increment_ref_count(item);
            }
            else {
                self->items[it_583]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_600=(_Bool)0;
    for(    it2_603=list$1charpp_begin(self->key_list);    !list$1charpp_end(self->key_list);    it2_603=list$1charpp_next(self->key_list)    ){
        if(        charp_equals(it2_603,key)) {
            same_key_exist_600=(_Bool)1;
        }
    }
    if(    !same_key_exist_600) {
        list$1charpp_push_back(self->key_list,key);
    }
    __result335__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sClass_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static void map$2charphsClassphp_rehash(struct map$2charphsClassph* self){
int size_565;
void* __right_value603 = (void*)0;
char** keys_566;
void* __right_value604 = (void*)0;
struct sClass** items_567;
void* __right_value605 = (void*)0;
_Bool* item_existance_568;
int len_569;
char* it_572;
struct sClass* default_value_575;
void* __right_value606 = (void*)0;
struct sClass* it2_576;
unsigned int hash_579;
int n_580;
struct sClass* default_value_581;
void* __right_value607 = (void*)0;
default_value_575 = (void*)0;
default_value_581 = (void*)0;
    size_565=self->size*10;
    keys_566=(char**)come_increment_ref_count(((char**)(__right_value603=(char**)come_calloc(1, sizeof(char*)*(1*(size_565)), "./comelang.h", 2693, "char**", (void*)0, (void*)0))));
    items_567=(struct sClass**)come_increment_ref_count(((struct sClass**)(__right_value604=(struct sClass**)come_calloc(1, sizeof(struct sClass*)*(1*(size_565)), "./comelang.h", 2694, "struct sClass**", (void*)0, (void*)0))));
    item_existance_568=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value605=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_565)), "./comelang.h", 2695, "_Bool*", (void*)0, (void*)0))));
    len_569=0;
    for(    it_572=map$2charphsClassphp_begin(self);    !map$2charphsClassphp_end(self);    it_572=map$2charphsClassphp_next(self)    ){
        memset(&default_value_575,0,sizeof(struct sClass*));
        it2_576=((struct sClass*)(__right_value606=map$2charphsClassphp_at(self,it_572,default_value_575)));
        come_call_finalizer3(__right_value606,sClass_finalize, 0, 1, 0, 0, (void*)0);
        hash_579=charp_get_hash_key(it_572)%size_565;
        n_580=hash_579;
        while((_Bool)1) {
            if(            item_existance_568[n_580]) {
                n_580++;
                if(                n_580>=size_565) {
                    n_580=0;
                }
                else if(                n_580==hash_579) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_568[n_580]=(_Bool)1;
                keys_566[n_580]=it_572;
                items_567[n_580]=((struct sClass*)(__right_value607=map$2charphsClassphp_at(self,it_572,default_value_581)));
                come_call_finalizer3(__right_value607,sClass_finalize, 0, 1, 0, 0, (void*)0);
                len_569++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_566;
    self->items=items_567;
    self->item_existance=item_existance_568;
    self->size=size_565;
    self->len=len_569;
}

static char* map$2charphsClassphp_begin(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_570;
char* __result315__;
char* __result316__;
char* result_571;
char* __result317__;
result_570 = (void*)0;
result_571 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_570,0,sizeof(char*));
        __result315__ = gComeFunResultObject = __result_obj__ = result_570;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result316__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result316__;
    }
    memset(&result_571,0,sizeof(char*));
    __result317__ = gComeFunResultObject = __result_obj__ = result_571;
    gComeFunResultObject = (void*)0;
    return __result317__;
}

static _Bool map$2charphsClassphp_end(struct map$2charphsClassph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsClassphp_next(struct map$2charphsClassph* self){
void* __result_obj__=(void*)0;
char* result_573;
char* __result318__;
char* __result319__;
char* result_574;
char* __result320__;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_573,0,sizeof(char*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_573;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_574,0,sizeof(char*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_574;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static struct sClass* map$2charphsClassphp_at(struct map$2charphsClassph* self, char* key, struct sClass* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_577;
unsigned int it_578;
struct sClass* __result321__;
struct sClass* __result322__;
struct sClass* __result323__;
struct sClass* __result324__;
    hash_577=charp_get_hash_key(((char*)key))%self->size;
    it_578=hash_577;
    while((_Bool)1) {
        if(        self->item_existance[it_578]) {
            if(            charp_equals(self->keys[it_578],key)) {
                __result321__ = gComeFunResultObject = __result_obj__ = self->items[it_578];
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result321__;
            }
            it_578++;
            if(            it_578>=self->size) {
                it_578=0;
            }
            else if(            it_578==hash_577) {
                __result322__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result322__;
            }
        }
        else {
            __result323__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result323__;
        }
    }
    __result324__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static struct list$1charp* list$1charpp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_584;
struct list_item$1charp* it_585;
struct list$1charp* __result328__;
    it2_584=0;
    it_585=self->head;
    while(it_585!=((void*)0)) {
        if(        charp_equals(it_585->item,item)) {
            list$1charpp_delete(self,it2_584,it2_584+1);
            break;
        }
        it2_584++;
        it_585=it_585->next;
    }
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result328__;
}

static struct list$1charp* list$1charpp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_586;
struct list$1charp* __result325__;
struct list_item$1charp* it_589;
int i_590;
struct list_item$1charp* prev_it_591;
struct list_item$1charp* it_592;
int i_593;
struct list_item$1charp* prev_it_594;
struct list_item$1charp* it_595;
struct list_item$1charp* head_prev_it_596;
struct list_item$1charp* tail_it_597;
int i_598;
struct list_item$1charp* prev_it_599;
struct list$1charp* __result327__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_586=tail;
        tail=head;
        head=tmp_586;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result325__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result325__;
    }
    if(    head==0&&tail==self->len) {
        list$1charpp_reset(self);
    }
    else if(    head==0) {
        it_589=self->head;
        i_590=0;
        while(it_589!=((void*)0)) {
            if(            i_590<tail) {
                prev_it_591=it_589;
                it_589=it_589->next;
                i_590++;
                come_call_finalizer3(prev_it_591,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_590==tail) {
                self->head=it_589;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_589=it_589->next;
                i_590++;
            }
        }
    }
    else if(    tail==self->len) {
        it_592=self->head;
        i_593=0;
        while(it_592!=((void*)0)) {
            if(            i_593==head) {
                self->tail=it_592->prev;
                self->tail->next=((void*)0);
            }
            if(            i_593>=head) {
                prev_it_594=it_592;
                it_592=it_592->next;
                i_593++;
                come_call_finalizer3(prev_it_594,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_592=it_592->next;
                i_593++;
            }
        }
    }
    else {
        it_595=self->head;
        head_prev_it_596=((void*)0);
        tail_it_597=((void*)0);
        i_598=0;
        while(it_595!=((void*)0)) {
            if(            i_598==head) {
                head_prev_it_596=it_595->prev;
            }
            if(            i_598==tail) {
                tail_it_597=it_595;
            }
            if(            i_598>=head&&i_598<tail) {
                prev_it_599=it_595;
                it_595=it_595->next;
                i_598++;
                come_call_finalizer3(prev_it_599,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_595=it_595->next;
                i_598++;
            }
        }
        if(        head_prev_it_596!=((void*)0)) {
            head_prev_it_596->next=tail_it_597;
        }
        if(        tail_it_597!=((void*)0)) {
            tail_it_597->prev=head_prev_it_596;
        }
    }
    __result327__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static struct list$1charp* list$1charpp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_587;
struct list_item$1charp* prev_it_588;
struct list$1charp* __result326__;
    it_587=self->head;
    while(it_587!=((void*)0)) {
        prev_it_588=it_587;
        it_587=it_587->next;
        come_call_finalizer3(prev_it_588,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static char* list$1charpp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_601;
char* __result329__;
char* __result330__;
char* result_602;
char* __result331__;
result_601 = (void*)0;
result_602 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_601,0,sizeof(char*));
        __result329__ = gComeFunResultObject = __result_obj__ = result_601;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    self->it=self->head;
    if(    self->it) {
        __result330__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    memset(&result_602,0,sizeof(char*));
    __result331__ = gComeFunResultObject = __result_obj__ = result_602;
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static _Bool list$1charpp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charpp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_604;
char* __result332__;
char* __result333__;
char* result_605;
char* __result334__;
result_604 = (void*)0;
result_605 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_604,0,sizeof(char*));
        __result332__ = gComeFunResultObject = __result_obj__ = result_604;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result333__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result333__;
    }
    memset(&result_605,0,sizeof(char*));
    __result334__ = gComeFunResultObject = __result_obj__ = result_605;
    gComeFunResultObject = (void*)0;
    return __result334__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_626;
struct list$1sNodeph* __result337__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_626=0;    i_626<num_value;    i_626++    ){
        list$1sNodephp_push_back(self,values[i_626]);
    }
    __result337__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result338__;
void* __right_value643 = (void*)0;
struct list$1sNodeph* result_627;
struct list$1sNodeph* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_627=(struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "list$1sNodeph_clone", 3, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone));
    if(    self!=((void*)0)) {
        result_627->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_627->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_627->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_627->it=self->it;
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_627;
    come_call_finalizer3(result_627,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void list$1sTypephp_operator_store_element(struct list$1sTypeph* self, int position, struct sType* item){
    list$1sTypephp_replace(self,position,(struct sType*)come_increment_ref_count(item));
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypephp_replace(struct list$1sTypeph* self, int position, struct sType* item){
void* __result_obj__=(void*)0;
int len_630;
int i_631;
struct sType* default_value_632;
struct list$1sTypeph* __result340__;
struct list_item$1sTypeph* it_633;
int i_634;
struct sType* __dec_obj292;
struct list$1sTypeph* __result341__;
default_value_632 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    if(    position<0) {
        position=0;
    }
    if(    self->len==0||position>=self->len) {
        len_630=self->len;
        for(        i_631=0;        i_631<position-len_630;        i_631++        ){
            memset(&default_value_632,0,sizeof(struct sType*));
            list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(default_value_632));
            come_call_finalizer3(default_value_632,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sTypephp_push_back(self,(struct sType*)come_increment_ref_count(item));
        __result340__ = gComeFunResultObject = __result_obj__ = self;
        come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
        gComeFunResultObject = (void*)0;
        return __result340__;
    }
    it_633=self->head;
    i_634=0;
    while(it_633!=((void*)0)) {
        if(        position==i_634) {
            __dec_obj292=it_633->item;
            it_633->item=(struct sType*)come_increment_ref_count(item);
            come_call_finalizer3(__dec_obj292,sType_finalize, 0, 0, 0, 0, (void*)0);
            break;
        }
        it_633=it_633->next;
        i_634++;
    }
    __result341__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result341__;
}

