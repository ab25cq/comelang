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
    char* sname;
    int sline;
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
    _Bool mDynamic;
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
    _Bool mDynamic;
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

struct list$1voidp
{
    struct list_item$1voidph* head;
    struct list_item$1voidph* tail;
    int len;
    struct list_item$1voidph* it;
};

struct map$2voidphvoidph
{
    void** keys;
    _Bool* item_existance;
    void** items;
    int size;
    int len;
    struct list$1voidp* key_list;
    int it;
};

struct sVarTable
{
    struct map$2voidphvoidph* mVars;
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
    struct map$2voidphvoidph* funcs;
    struct map$2voidphvoidph* generics_funcs;
    struct map$2voidphvoidph* classes;
    struct map$2voidphvoidph* modules;
    struct map$2voidphvoidph* types;
    struct map$2voidphvoidph* generics_classes;
    struct map$2voidphvoidph* struct_definition;
    struct map$2voidphvoidph* previous_struct_definition;
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
    struct map$2voidphvoidph* module_params;
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
    struct map$2voidphvoidph* uniq_definition;
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

struct tuple4$4charphcharphcharphcharph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct list_item$1sBlockph
{
    struct sBlock* item;
    struct list_item$1sBlockph* prev;
    struct list_item$1sBlockph* next;
};

struct list$1sBlockph
{
    struct list_item$1sBlockph* head;
    struct list_item$1sBlockph* tail;
    int len;
    struct list_item$1sBlockph* it;
};

struct sIfNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
    struct list$1sNodeph* mElifExpressionNodes;
    struct list$1sBlockph* mElifBlocks;
    int mElifNum;
    _Bool mGuard;
    struct sBlock* mElseBlock;
};

struct list_item$1voidp
{
    void* item;
    struct list_item$1voidp* prev;
    struct list_item$1voidp* next;
};

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
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

struct sIfMethodNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
};

struct sOrStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sAndStatmentNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mExpressionNode;
    struct sBlock* mIfBlock;
};

struct sMultipleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* multiple_node;
};

struct list$1voidph* gExceptionRightValueObjects=(void*)0;
struct sSaveRightValueObjects
{
    int sline;
    char* sname;
    int sline_real;
};

struct sRestoreRightValueObjects
{
    int sline;
    char* sname;
    int sline_real;
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
_Bool buffer_equals(struct buffer* left, struct buffer* right);
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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static void sBlock_finalize(struct sBlock* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static unsigned int sBlock_get_hash_key(struct sBlock* self);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool list$1sNodephp_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right);
static void* list$1voidpp_begin(struct list$1voidp* self);
static _Bool list$1voidpp_end(struct list$1voidp* self);
static void* list$1voidpp_next(struct list$1voidp* self);
static void* list$1voidpp_item(struct list$1voidp* self, int position, void* default_value);
static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_clone(struct map$2voidphvoidph* self);
static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self);
static void list$1voidpp_finalize(struct list$1voidp* self);
static void list_item$1voidpp_finalize(struct list_item$1voidp* self);
static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self);
static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self);
static void list$1voidp_finalize(struct list$1voidp* self);
static struct list$1voidp* list$1voidp_clone(struct list$1voidp* self);
static unsigned int list$1voidp_get_hash_key(struct list$1voidp* self);
static _Bool list$1voidp_equals(struct list$1voidp* left, struct list$1voidp* right);
static _Bool list_item$1voidph_equals(struct list_item$1voidph* left, struct list_item$1voidph* right);
static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self);
static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right);
static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self);
static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self);
static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self);
static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self);
static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item);
static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self);
static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item);
static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail);
static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self);
static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item);
static struct sVar* sVar_clone(struct sVar* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1voidph_finalize(struct list$1voidph* self);
static void list_item$1voidphp_finalize(struct list_item$1voidph* self);
static void list$1voidphp_finalize(struct list$1voidph* self);
static void list$1charph_finalize(struct list$1charph* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right);
static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right);
static struct sType* sType_clone(struct sType* self);
static unsigned int sType_get_hash_key(struct sType* self);
static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self);
static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self);
static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self);
static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item);
static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self);
static struct list$1charph* list$1charph_clone(struct list$1charph* self);
static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item);
static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static void sIfNode_finalize(struct sIfNode* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
static struct list$1sVarph* list$1sVarphp_initialize(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info);
_Bool sMultipleNode_terminated(struct sMultipleNode* self);
char* sMultipleNode_kind(struct sMultipleNode* self);
_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info);
static void sMultipleNode_finalize(struct sMultipleNode* self);
static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self);
static _Bool list$1sNodephp_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self);
static int list$1CVALUEphp_length(struct list$1CVALUEph* self);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info);
_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self);
char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self);
_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info);
static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static unsigned int list$1charph_get_hash_key(struct list$1charph* self);
static _Bool list$1charph_equals(struct list$1charph* left, struct list$1charph* right);
static _Bool list_item$1charph_equals(struct list_item$1charph* left, struct list_item$1charph* right);
static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static unsigned int sIfNode_get_hash_key(struct sIfNode* self);
static _Bool sIfNode_equals(struct sIfNode* left, struct sIfNode* right);
static _Bool list$1sBlockphp_equals(struct list$1sBlockph* left, struct list$1sBlockph* right);
static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self);
static unsigned int sSaveRightValueObjects_get_hash_key(struct sSaveRightValueObjects* self);
static _Bool sSaveRightValueObjects_equals(struct sSaveRightValueObjects* left, struct sSaveRightValueObjects* right);
static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self);
static unsigned int sRestoreRightValueObjects_get_hash_key(struct sRestoreRightValueObjects* self);
static _Bool sRestoreRightValueObjects_equals(struct sRestoreRightValueObjects* left, struct sRestoreRightValueObjects* right);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self);
static _Bool list$1sNodeph_equals(struct list$1sNodeph* left, struct list$1sNodeph* right);
static _Bool list_item$1sNodeph_equals(struct list_item$1sNodeph* left, struct list_item$1sNodeph* right);
static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self);
static unsigned int sMultipleNode_get_hash_key(struct sMultipleNode* self);
static _Bool sMultipleNode_equals(struct sMultipleNode* left, struct sMultipleNode* right);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sBlockph* list$1sBlockphp_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
static unsigned int sOrStatmentNode_get_hash_key(struct sOrStatmentNode* self);
static _Bool sOrStatmentNode_equals(struct sOrStatmentNode* left, struct sOrStatmentNode* right);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
static unsigned int sAndStatmentNode_get_hash_key(struct sAndStatmentNode* self);
static _Bool sAndStatmentNode_equals(struct sAndStatmentNode* left, struct sAndStatmentNode* right);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
static unsigned int sMatchNode_get_hash_key(struct sMatchNode* self);
static _Bool sMatchNode_equals(struct sMatchNode* left, struct sMatchNode* right);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
static unsigned int sIfMethodNode_get_hash_key(struct sIfMethodNode* self);
static _Bool sIfMethodNode_equals(struct sIfMethodNode* left, struct sIfMethodNode* right);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_153;
    result_153=0;
    result_153+=int_get_hash_key(((int)self->buf));
    result_153+=int_get_hash_key(((int)self->len));
    result_153+=int_get_hash_key(((int)self->size));
    return result_153;
}

static struct smart_pointer$1char* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1char* __result81__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
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
struct smart_pointer$1short* __result84__;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result84__;
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
struct smart_pointer$1int* __result86__;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result86__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result86__;
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
struct smart_pointer$1long* __result88__;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
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
struct smart_pointer$1charp* __result91__;
    __dec_obj21=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
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
struct smart_pointer$1float* __result96__;
    __dec_obj23=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result96__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result96__;
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
struct smart_pointer$1double* __result98__;
    __dec_obj25=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result98__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result98__;
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
int i_175;
struct list$1char* __result101__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_175=0;    i_175<num_value;    i_175++    ){
        list$1charp_push_back(self,values[i_175]);
    }
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static struct list$1char* list$1charp_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_176;
void* __right_value93 = (void*)0;
struct list_item$1char* litem_177;
void* __right_value94 = (void*)0;
struct list_item$1char* litem_178;
struct list$1char* __result100__;
    if(    self->len==0) {
        litem_176=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1452, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_176->prev=((void*)0);
        litem_176->next=((void*)0);
        litem_176->item=item;
        self->tail=litem_176;
        self->head=litem_176;
    }
    else if(    self->len==1) {
        litem_177=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value93=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1462, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_177->prev=self->head;
        litem_177->next=((void*)0);
        litem_177->item=item;
        self->tail=litem_177;
        self->head->next=litem_177;
    }
    else {
        litem_178=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value94=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1472, "struct list_item$1char*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_178->prev=self->tail;
        litem_178->next=((void*)0);
        litem_178->item=item;
        self->tail->next=litem_178;
        self->tail=litem_178;
    }
    self->len++;
    __result100__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result100__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_179;
struct list_item$1char* prev_it_180;
    it_179=self->head;
    while(it_179!=((void*)0)) {
        prev_it_180=it_179;
        it_179=it_179->next;
        come_call_finalizer3(prev_it_180,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charpp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_181;
struct list$1charp* __result104__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_181=0;    i_181<num_value;    i_181++    ){
        list$1charpp_push_back(self,values[i_181]);
    }
    __result104__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result104__;
}

static struct list$1charp* list$1charpp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_182;
void* __right_value98 = (void*)0;
struct list_item$1charp* litem_183;
void* __right_value99 = (void*)0;
struct list_item$1charp* litem_184;
struct list$1charp* __result103__;
    if(    self->len==0) {
        litem_182=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1452, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=((void*)0);
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head=litem_182;
    }
    else if(    self->len==1) {
        litem_183=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value98=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1462, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->head;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail=litem_183;
        self->head->next=litem_183;
    }
    else {
        litem_184=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value99=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1472, "struct list_item$1charp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_184->prev=self->tail;
        litem_184->next=((void*)0);
        litem_184->item=item;
        self->tail->next=litem_184;
        self->tail=litem_184;
    }
    self->len++;
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_185;
struct list_item$1charp* prev_it_186;
    it_185=self->head;
    while(it_185!=((void*)0)) {
        prev_it_186=it_185;
        it_185=it_185->next;
        come_call_finalizer3(prev_it_186,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1shortp_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_187;
struct list$1short* __result107__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_187=0;    i_187<num_value;    i_187++    ){
        list$1shortp_push_back(self,values[i_187]);
    }
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static struct list$1short* list$1shortp_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_188;
void* __right_value103 = (void*)0;
struct list_item$1short* litem_189;
void* __right_value104 = (void*)0;
struct list_item$1short* litem_190;
struct list$1short* __result106__;
    if(    self->len==0) {
        litem_188=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1452, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=((void*)0);
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head=litem_188;
    }
    else if(    self->len==1) {
        litem_189=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value103=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1462, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->head;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail=litem_189;
        self->head->next=litem_189;
    }
    else {
        litem_190=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value104=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1472, "struct list_item$1short*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_190->prev=self->tail;
        litem_190->next=((void*)0);
        litem_190->item=item;
        self->tail->next=litem_190;
        self->tail=litem_190;
    }
    self->len++;
    __result106__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result106__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_191;
struct list_item$1short* prev_it_192;
    it_191=self->head;
    while(it_191!=((void*)0)) {
        prev_it_192=it_191;
        it_191=it_191->next;
        come_call_finalizer3(prev_it_192,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1intp_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_193;
struct list$1int* __result110__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_193=0;    i_193<num_value;    i_193++    ){
        list$1intp_push_back(self,values[i_193]);
    }
    __result110__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

static struct list$1int* list$1intp_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_194;
void* __right_value108 = (void*)0;
struct list_item$1int* litem_195;
void* __right_value109 = (void*)0;
struct list_item$1int* litem_196;
struct list$1int* __result109__;
    if(    self->len==0) {
        litem_194=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1452, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=((void*)0);
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head=litem_194;
    }
    else if(    self->len==1) {
        litem_195=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value108=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1462, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->head;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail=litem_195;
        self->head->next=litem_195;
    }
    else {
        litem_196=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value109=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1472, "struct list_item$1int*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_196->prev=self->tail;
        litem_196->next=((void*)0);
        litem_196->item=item;
        self->tail->next=litem_196;
        self->tail=litem_196;
    }
    self->len++;
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_197;
struct list_item$1int* prev_it_198;
    it_197=self->head;
    while(it_197!=((void*)0)) {
        prev_it_198=it_197;
        it_197=it_197->next;
        come_call_finalizer3(prev_it_198,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1longp_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_199;
struct list$1long* __result113__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_199=0;    i_199<num_value;    i_199++    ){
        list$1longp_push_back(self,values[i_199]);
    }
    __result113__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct list$1long* list$1longp_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_200;
void* __right_value113 = (void*)0;
struct list_item$1long* litem_201;
void* __right_value114 = (void*)0;
struct list_item$1long* litem_202;
struct list$1long* __result112__;
    if(    self->len==0) {
        litem_200=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1452, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=((void*)0);
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head=litem_200;
    }
    else if(    self->len==1) {
        litem_201=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value113=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1462, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->head;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail=litem_201;
        self->head->next=litem_201;
    }
    else {
        litem_202=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value114=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1472, "struct list_item$1long*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_202->prev=self->tail;
        litem_202->next=((void*)0);
        litem_202->item=item;
        self->tail->next=litem_202;
        self->tail=litem_202;
    }
    self->len++;
    __result112__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result112__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_203;
struct list_item$1long* prev_it_204;
    it_203=self->head;
    while(it_203!=((void*)0)) {
        prev_it_204=it_203;
        it_203=it_203->next;
        come_call_finalizer3(prev_it_204,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1floatp_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_205;
struct list$1float* __result116__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_205=0;    i_205<num_value;    i_205++    ){
        list$1floatp_push_back(self,values[i_205]);
    }
    __result116__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result116__;
}

static struct list$1float* list$1floatp_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_206;
void* __right_value118 = (void*)0;
struct list_item$1float* litem_207;
void* __right_value119 = (void*)0;
struct list_item$1float* litem_208;
struct list$1float* __result115__;
    if(    self->len==0) {
        litem_206=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1452, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=((void*)0);
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head=litem_206;
    }
    else if(    self->len==1) {
        litem_207=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value118=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1462, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->head;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail=litem_207;
        self->head->next=litem_207;
    }
    else {
        litem_208=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value119=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1472, "struct list_item$1float*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_208->prev=self->tail;
        litem_208->next=((void*)0);
        litem_208->item=item;
        self->tail->next=litem_208;
        self->tail=litem_208;
    }
    self->len++;
    __result115__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result115__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_209;
struct list_item$1float* prev_it_210;
    it_209=self->head;
    while(it_209!=((void*)0)) {
        prev_it_210=it_209;
        it_209=it_209->next;
        come_call_finalizer3(prev_it_210,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1doublep_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_211;
struct list$1double* __result119__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_211=0;    i_211<num_value;    i_211++    ){
        list$1doublep_push_back(self,values[i_211]);
    }
    __result119__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result119__;
}

static struct list$1double* list$1doublep_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_212;
void* __right_value123 = (void*)0;
struct list_item$1double* litem_213;
void* __right_value124 = (void*)0;
struct list_item$1double* litem_214;
struct list$1double* __result118__;
    if(    self->len==0) {
        litem_212=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1452, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=((void*)0);
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head=litem_212;
    }
    else if(    self->len==1) {
        litem_213=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value123=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1462, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->head;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail=litem_213;
        self->head->next=litem_213;
    }
    else {
        litem_214=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value124=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1472, "struct list_item$1double*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_214->prev=self->tail;
        litem_214->next=((void*)0);
        litem_214->item=item;
        self->tail->next=litem_214;
        self->tail=litem_214;
    }
    self->len++;
    __result118__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result118__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_215;
struct list_item$1double* prev_it_216;
    it_215=self->head;
    while(it_215!=((void*)0)) {
        prev_it_216=it_215;
        it_215=it_215->next;
        come_call_finalizer3(prev_it_216,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1charp_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
struct vector$1char* __result121__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2244, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result121__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_217;
    if(    0) {
        for(        i_217=0;        i_217<self->len;        i_217++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charpp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
struct vector$1charp* __result123__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value130=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2244, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_218;
    if(    0) {
        for(        i_218=0;        i_218<self->len;        i_218++        ){
            self->items[i_218] = come_decrement_ref_count2(self->items[i_218], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1shortp_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct vector$1short* __result125__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value133=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2244, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result125__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result125__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_219;
    if(    0) {
        for(        i_219=0;        i_219<self->len;        i_219++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1intp_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
struct vector$1int* __result127__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value136=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2244, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result127__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result127__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_220;
    if(    0) {
        for(        i_220=0;        i_220<self->len;        i_220++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1longp_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
struct vector$1long* __result129__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value139=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2244, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_221;
    if(    0) {
        for(        i_221=0;        i_221<self->len;        i_221++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1floatp_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct vector$1float* __result131__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value142=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2244, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result131__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result131__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_222;
    if(    0) {
        for(        i_222=0;        i_222<self->len;        i_222++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1doublep_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value145 = (void*)0;
struct vector$1double* __result133__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value145=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2244, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result133__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result133__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_223;
    if(    0) {
        for(        i_223=0;        i_223<self->len;        i_223++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charphp_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result171__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result171__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_257;
struct list_item$1charph* prev_it_258;
    it_257=self->head;
    while(it_257!=((void*)0)) {
        prev_it_258=it_257;
        it_257=it_257->next;
        come_call_finalizer3(prev_it_258,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_262;
char* __dec_obj28;
void* __right_value195 = (void*)0;
struct list_item$1charph* litem_263;
char* __dec_obj29;
void* __right_value196 = (void*)0;
struct list_item$1charph* litem_264;
char* __dec_obj30;
struct list$1charph* __result173__;
    if(    self->len==0) {
        litem_262=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1452, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj28=litem_262->item;
        litem_262->item=(char*)come_increment_ref_count(item);
        __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value195=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1462, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj29=litem_263->item;
        litem_263->item=(char*)come_increment_ref_count(item);
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value196=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1472, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj30=litem_264->item;
        litem_264->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result173__;
}

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value252 = (void*)0;
void* __right_value254 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value326 = (void*)0;
struct sBlock* __dec_obj93;
void* __right_value327 = (void*)0;
struct list$1sNodeph* __dec_obj94;
void* __right_value334 = (void*)0;
struct list$1sBlockph* __dec_obj99;
void* __right_value335 = (void*)0;
struct sBlock* __dec_obj100;
struct sBlock* __dec_obj101;
struct sIfNode* __result288__;
    ((struct sNodeBase*)(__right_value252=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value252,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj32=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj93=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj93,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj94=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, elif_expression_nodes));
    come_call_finalizer3(__dec_obj94,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj99=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, elif_blocks));
    come_call_finalizer3(__dec_obj99,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj100=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, else_block));
        come_call_finalizer3(__dec_obj100,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj101=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer3(__dec_obj101,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result288__;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __result_obj__=(void*)0;
void* __right_value336 = (void*)0;
char* __result289__;
    __result289__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value336=__builtin_string("sIfNode")));
    __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_440;
int i_441;
void* __right_value337 = (void*)0;
_Bool _if_conditional1;
struct sBlock* else_block_445;
int elif_num_446;
_Bool guard__447;
char* if_result_var_name_448;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct sType* if_result_type_449;
void* __right_value340 = (void*)0;
char* __dec_obj108;
void* __right_value341 = (void*)0;
struct sVar* var__451;
void* __right_value342 = (void*)0;
struct sNode* expression_node_452;
int sline_453;
char* sname_454;
_Bool comma_instead_of_semicolon_before_455;
_Bool Value_456;
_Bool __result292__;
struct sBlock* if_block_457;
_Bool normal_if_458;
void* __right_value343 = (void*)0;
struct CVALUE* conditional_value_459;
struct sVar* var__460;
int num_if_conditional_stack_462;
void* __right_value344 = (void*)0;
struct CVALUE* conditional_value_463;
struct sVar* var__464;
int i_465;
void* __right_value345 = (void*)0;
struct sNode* expression_node2_466;
_Bool comma_instead_of_semicolon_before_470;
_Bool Value_471;
_Bool __result295__;
void* __right_value346 = (void*)0;
struct sBlock* elif_node_block_472;
_Bool normal_if_473;
void* __right_value347 = (void*)0;
struct CVALUE* conditional_value_474;
void* __right_value348 = (void*)0;
struct CVALUE* conditional_value_475;
int num_elif_conditional_stack_477;
struct sVar* var__478;
int __exception_result_var_b1;
void* __right_value349 = (void*)0;
struct sNode* result_node_479;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
struct sNode* __dec_obj113;
_Bool Value_480;
_Bool __result296__;
void* __right_value352 = (void*)0;
struct CVALUE* come_value2_481;
void* __right_value353 = (void*)0;
struct sType* __dec_obj114;
char* __dec_obj118;
_Bool __result298__;
    existance_of_result_value_440=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_440=(_Bool)0;
        }
        for(        i_441=0;        i_441<self->mElifNum;        i_441++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value337=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_441)))->mOmitSemicolon)),            come_call_finalizer3(__right_value337,sBlock_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                existance_of_result_value_440=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_440=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"In conditional operator comelang can't use if statment");
        return (_Bool)0;
    }
    else_block_445=self->mElseBlock;
    elif_num_446=self->mElifNum;
    guard__447=self->mGuard;
    if_result_var_name_448=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_440) {
        if_result_type_449=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 69, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),"void*",(_Bool)0,info));
        static int var_num_450=0;
        __dec_obj108=info->if_result_var_name;
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_450++));
        __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, if_result_type_449)),info);
        var__451=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value342=make_define_var(var__451->mType,var__451->mCValueName,(_Bool)0,info))));
        __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(if_result_type_449,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    expression_node_452=self->mExpressionNode;
    sline_453=info->sline;
    sname_454=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_455=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    Value_456=node_compile(expression_node_452,info);
    if(    !Value_456) {
        __result292__ = (_Bool)0;
        if_result_var_name_448 = come_decrement_ref_count2(if_result_var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result292__;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_455;
    if_block_457=self->mIfBlock;
    normal_if_458=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_458=(_Bool)0;
    }
    if(    normal_if_458) {
        conditional_value_459=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__447) {
            var__460=conditional_value_459->var;
            if(            var__460) {
                var__460->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_459->c_value);
        come_call_finalizer3(conditional_value_459,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        static int num_if_conditional_461=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_461);
        num_if_conditional_stack_462=num_if_conditional_461;
        conditional_value_463=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__447) {
            var__464=conditional_value_463->var;
            if(            var__464) {
                var__464->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_461,conditional_value_463->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_462);
        come_call_finalizer3(conditional_value_463,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_457,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_440);
    add_come_code(info,"}\n");
    if(    elif_num_446>0) {
        for(        i_465=0;        i_465<elif_num_446;        i_465++        ){
            expression_node2_466=((struct sNode*)(__right_value345=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_465)));
            if(__right_value345) { __right_value345 = come_decrement_ref_count2(__right_value345, ((struct sNode*)__right_value345)->finalize, ((struct sNode*)__right_value345)->_protocol_obj, 1, 0, 0, (void*)0); } 
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_470=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            Value_471=node_compile(expression_node2_466,info);
            if(            !Value_471) {
                __result295__ = (_Bool)0;
                if_result_var_name_448 = come_decrement_ref_count2(if_result_var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result295__;
            }
            else {
            }
            info->without_semicolon=(_Bool)0;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_470;
            elif_node_block_472=((struct sBlock*)(__right_value346=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_465)));
            come_call_finalizer3(__right_value346,sBlock_finalize, 0, 1, 0, 0, (void*)0);
            normal_if_473=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_473=(_Bool)0;
            }
            if(            normal_if_473) {
                conditional_value_474=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s) {\n",conditional_value_474->c_value);
                come_call_finalizer3(conditional_value_474,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_475=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                static int num_elif_conditional_476=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_476);
                num_elif_conditional_stack_477=num_elif_conditional_476;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_476,conditional_value_475->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_477);
                come_call_finalizer3(conditional_value_475,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_472,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_440);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_445) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_445,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_440);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_440) {
        var__478=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 207, 0),__exception_result_var_b1=assert_v2(var__478!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_479=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj113=result_node_479;
        result_node_479=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__478->mType)),(struct sNode*)come_increment_ref_count(result_node_479),info));
        if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); };
        Value_480=node_compile(result_node_479,info);
        if(        !Value_480) {
            __result296__ = (_Bool)0;
            if(result_node_479) { result_node_479 = come_decrement_ref_count2(result_node_479, ((struct sNode*)result_node_479)->finalize, ((struct sNode*)result_node_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if_result_var_name_448 = come_decrement_ref_count2(if_result_var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result296__;
        }
        else {
        }
        come_value2_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj114=come_value2_481->type;
        come_value2_481->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, var__478->mType));
        come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_481));
        if(result_node_479) { result_node_479 = come_decrement_ref_count2(result_node_479, ((struct sNode*)result_node_479)->finalize, ((struct sNode*)result_node_479)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value2_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj118=info->if_result_var_name;
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_448);
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result298__ = (_Bool)1;
    if_result_var_name_448 = come_decrement_ref_count2(if_result_var_name_448, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result298__;
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

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result230__;
void* __right_value253 = (void*)0;
struct sNode* result_317;
struct sNode* __result231__;
    if(    self==(void*)0) {
        __result230__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result230__;
    }
    result_317=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_317->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_317->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_317->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_317->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_317->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_317->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_317->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_317->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_317->kind=self->kind;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_317;
    come_call_finalizer2((void*)0, result_317, result_317 ? ((struct sNode*)result_317)->finalize:(void*)0, result_317 ? ((struct sNode*)result_317)->_protocol_obj:(void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result232__;
void* __right_value257 = (void*)0;
struct sBlock* result_341;
void* __right_value264 = (void*)0;
struct list$1sNodeph* __dec_obj39;
void* __right_value325 = (void*)0;
struct sVarTable* __dec_obj92;
struct sBlock* __result283__;
    if(    self==(void*)0) {
        __result232__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result232__;
    }
    result_341=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock", sBlock_finalize, sBlock_clone, sBlock_get_hash_key, sBlock_equals));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj39=result_341->mNodes;
        result_341->mNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mNodes));
        come_call_finalizer3(__dec_obj39,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj92=result_341->mVarTable;
        result_341->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj92,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_341->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result283__ = gComeFunResultObject = __result_obj__ = result_341;
    come_call_finalizer3(result_341,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj33;
struct sVarTable* __dec_obj35;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj33=self->mNodes;
            come_call_finalizer3(__dec_obj33,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj35=self->mVarTable;
            come_call_finalizer3(__dec_obj35,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_318;
struct list_item$1sNodeph* prev_it_319;
    it_318=self->head;
    while(it_318!=((void*)0)) {
        prev_it_319=it_318;
        it_318=it_318->next;
        come_call_finalizer3(prev_it_319,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_320;
struct list_item$1sNodeph* prev_it_321;
    it_320=self->head;
    while(it_320!=((void*)0)) {
        prev_it_321=it_320;
        it_320=it_320->next;
        come_call_finalizer3(prev_it_321,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sBlock_get_hash_key(struct sBlock* self){
unsigned int result_322;
    result_322=0;
    result_322+=int_get_hash_key(((int)self->mNodes));
    result_322+=int_get_hash_key(((int)self->mVarTable));
    result_322+=int_get_hash_key(((int)self->mOmitSemicolon));
    return result_322;
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

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2voidphvoidphp_equals(left->mVars,right->mVars)) {
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

static _Bool map$2voidphvoidphp_equals(struct map$2voidphvoidph* left, struct map$2voidphvoidph* right){
int n_325;
_Bool result_326;
char* it_329;
void* default_value_332;
void* it2_333;
void* default_value2_336;
void* __right_value255 = (void*)0;
void* item_337;
void* __right_value256 = (void*)0;
void* item2_340;
default_value_332 = (void*)0;
default_value2_336 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_325=0;
    result_326=(_Bool)1;
    for(    it_329=((char*)list$1voidpp_begin(left->key_list));    !list$1voidpp_end(left->key_list);    it_329=((char*)list$1voidpp_next(left->key_list))    ){
        memset(&default_value_332,0,sizeof(void*));
        it2_333=((char*)list$1voidpp_item(right->key_list,n_325,default_value_332));
        if(        come_call_equals((void*)0, it_329, it2_333)) {
            memset(&default_value2_336,0,sizeof(void*));
            item_337=((void*)(__right_value255=map$2voidphvoidphp_at(left,it_329,default_value2_336)));
            come_call_finalizer3(__right_value255,(void*)0, 0, 1, 0, 0, (void*)0);
            item2_340=((void*)(__right_value256=map$2voidphvoidphp_at(right,it2_333,default_value2_336)));
            come_call_finalizer3(__right_value256,(void*)0, 0, 1, 0, 0, (void*)0);
            if(            !come_call_equals((void*)0, item_337, item2_340)) {
                result_326=(_Bool)0;
            }
        }
        else {
            result_326=(_Bool)0;
        }
        n_325++;
    }
    return result_326;
}

static void* list$1voidpp_begin(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_327;
void* __result233__;
void* __result234__;
void* result_328;
void* __result235__;
result_327 = (void*)0;
result_328 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_327,0,sizeof(void*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_327;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->it=self->head;
    if(    self->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_328,0,sizeof(void*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_328;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static _Bool list$1voidpp_end(struct list$1voidp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static void* list$1voidpp_next(struct list$1voidp* self){
void* __result_obj__=(void*)0;
void* result_330;
void* __result236__;
void* __result237__;
void* result_331;
void* __result238__;
result_330 = (void*)0;
result_331 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_330,0,sizeof(void*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_330;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_331,0,sizeof(void*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_331;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void* list$1voidpp_item(struct list$1voidp* self, int position, void* default_value){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_334;
int i_335;
void* __result239__;
void* __result240__;
    if(    position<0) {
        position+=self->len;
    }
    it_334=self->head;
    i_335=0;
    while(it_334!=((void*)0)) {
        if(        position==i_335) {
            __result239__ = gComeFunResultObject = __result_obj__ = it_334->item;
            gComeFunResultObject = (void*)0;
            return __result239__;
        }
        it_334=it_334->next;
        i_335++;
    }
    __result240__ = gComeFunResultObject = __result_obj__ = default_value;
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static void* map$2voidphvoidphp_at(struct map$2voidphvoidph* self, void* key, void* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_338;
unsigned int it_339;
void* __result241__;
void* __result242__;
void* __result243__;
void* __result244__;
    hash_338=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_339=hash_338;
    while((_Bool)1) {
        if(        self->item_existance[it_339]) {
            if(            come_call_equals((void*)0, self->keys[it_339], key)) {
                __result241__ = gComeFunResultObject = __result_obj__ = self->items[it_339];
                come_call_finalizer3(default_value, (void*)0, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result241__;
            }
            it_339++;
            if(            it_339>=self->size) {
                it_339=0;
            }
            else if(            it_339==hash_338) {
                __result242__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result242__;
            }
        }
        else {
            __result243__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result243__;
        }
    }
    __result244__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value, (void*)0, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result245__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sNodeph* result_342;
struct list_item$1sNodeph* it_343;
void* __right_value263 = (void*)0;
struct list$1sNodeph* __result248__;
    if(    self==((void*)0)) {
        __result245__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result245__;
    }
    result_342=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_343=self->head;
    while(it_343!=((void*)0)) {
        list$1sNodephp_add(result_342,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_343->item)));
        it_343=it_343->next;
    }
    __result248__ = gComeFunResultObject = __result_obj__ = result_342;
    come_call_finalizer3(result_342,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

static struct list$1sNodeph* list$1sNodephp_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result246__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1sNodeph* list$1sNodephp_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sNodeph* litem_344;
struct sNode* __dec_obj36;
void* __right_value261 = (void*)0;
struct list_item$1sNodeph* litem_345;
struct sNode* __dec_obj37;
void* __right_value262 = (void*)0;
struct list_item$1sNodeph* litem_346;
struct sNode* __dec_obj38;
struct list$1sNodeph* __result247__;
    if(    self->len==0) {
        litem_344=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value260=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1382, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj36=litem_344->item;
        litem_344->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value261=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1392, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj37=litem_345->item;
        litem_345->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value262=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1402, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj38=litem_346->item;
        litem_346->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result249__;
void* __right_value265 = (void*)0;
struct sVarTable* result_348;
void* __right_value324 = (void*)0;
struct map$2voidphvoidph* __dec_obj91;
struct sVarTable* __result282__;
    if(    self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_348=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj91=result_348->mVars;
        result_348->mVars=(struct map$2voidphvoidph*)come_increment_ref_count(come_call_cloner(map$2voidphvoidphp_clone, self->mVars));
        come_call_finalizer3(__dec_obj91,map$2voidphvoidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_348->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_348->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_348->mID=self->mID;
    }
    __result282__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result282__;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_347;
    result_347=0;
    result_347+=int_get_hash_key(((int)self->mVars));
    result_347+=int_get_hash_key(((int)self->mGlobal));
    result_347+=int_get_hash_key(((int)self->mParent));
    result_347+=int_get_hash_key(((int)self->mID));
    return result_347;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_clone(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
struct map$2voidphvoidph* __result250__;
void* __right_value266 = (void*)0;
void* __right_value272 = (void*)0;
struct map$2voidphvoidph* result_357;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1voidp* __dec_obj41;
char* it_363;
void* default_value_366;
void* __right_value276 = (void*)0;
struct sVar* it2_367;
void* __right_value323 = (void*)0;
struct map$2voidphvoidph* __result281__;
default_value_366 = (void*)0;
    if(    self==((void*)0)) {
        __result250__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result250__;
    }
    result_357=(struct map$2voidphvoidph*)come_increment_ref_count(map$2voidphvoidphpp_initialize((struct map$2voidphvoidph*)come_increment_ref_count((struct map$2voidphvoidph*)come_calloc(1, sizeof(struct map$2voidphvoidph)*(1), "./comelang.h", 2698, "struct map$2voidphvoidph*", map$2voidphvoidphp_finalize, map$2voidphvoidphp_clone, map$2voidphvoidphp_get_hash_key, map$2voidphvoidphp_equals))));
    __dec_obj41=result_357->key_list;
    result_357->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidppp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2700, "struct list$1voidp*", list$1voidpp_finalize, list$1voidp_clone, list$1voidpp_get_hash_key, list$1voidpp_equals))));
    come_call_finalizer3(__dec_obj41,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_363=((char*)map$2voidphvoidphp_begin(self));    !map$2voidphvoidphp_end(self);    it_363=((char*)map$2voidphvoidphp_next(self))    ){
        memset(&default_value_366,0,sizeof(void*));
        it2_367=(struct sVar*)come_increment_ref_count(map$2voidphvoidphp_at(self,it_363,((struct sVar*)default_value_366)));
        map$2voidphvoidphp_put(result_357,it_363,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_367)));
        come_call_finalizer3(it2_367,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result281__ = gComeFunResultObject = __result_obj__ = result_357;
    come_call_finalizer3(result_357,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result281__;
}

static void map$2voidphvoidphp_finalize(struct map$2voidphvoidph* self){
int i_349;
int i_350;
    for(    i_349=0;    i_349<self->size;    i_349++    ){
        if(        self->item_existance[i_349]) {
            if(            1) {
                come_call_finalizer3(self->items[i_349], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_350=0;    i_350<self->size;    i_350++    ){
        if(        self->item_existance[i_350]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_350], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void list$1voidpp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_351;
struct list_item$1voidp* prev_it_352;
    it_351=self->head;
    while(it_351!=((void*)0)) {
        prev_it_352=it_351;
        it_351=it_351->next;
        come_call_finalizer3(prev_it_352,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidpp_finalize(struct list_item$1voidp* self){
}

static unsigned int map$2voidphvoidphp_get_hash_key(struct map$2voidphvoidph* self){
unsigned int result_353;
    result_353=0;
    result_353+=int_get_hash_key(((int)self->keys));
    result_353+=int_get_hash_key(((int)self->item_existance));
    result_353+=int_get_hash_key(((int)self->items));
    result_353+=int_get_hash_key(((int)self->size));
    result_353+=int_get_hash_key(((int)self->len));
    result_353+=int_get_hash_key(((int)self->key_list));
    result_353+=int_get_hash_key(((int)self->it));
    return result_353;
}

static struct map$2voidphvoidph* map$2voidphvoidphpp_initialize(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
void* __right_value269 = (void*)0;
int i_354;
void* __right_value270 = (void*)0;
void* __right_value271 = (void*)0;
struct list$1voidp* __dec_obj40;
struct map$2voidphvoidph* __result252__;
    self->keys=(void**)come_increment_ref_count(((void**)(__right_value267=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2627, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(void**)come_increment_ref_count(((void**)(__right_value268=(void**)come_calloc(1, sizeof(void*)*(1*(128)), "./comelang.h", 2628, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value269=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2629, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_354=0;    i_354<128;    i_354++    ){
        self->item_existance[i_354]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj40=self->key_list;
    self->key_list=(struct list$1voidp*)come_increment_ref_count(list$1voidpp_initialize((struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "./comelang.h", 2639, "struct list$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj40,list$1voidp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2voidphvoidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static struct list$1voidp* list$1voidpp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result251__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result251__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static void list$1voidp_finalize(struct list$1voidp* self){
struct list_item$1voidp* it_355;
struct list_item$1voidp* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1voidp* list$1voidp_clone(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result253__;
void* __right_value273 = (void*)0;
struct list$1voidp* result_359;
struct list$1voidp* __result254__;
    if(    self==(void*)0) {
        __result253__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result253__;
    }
    result_359=(struct list$1voidp*)come_increment_ref_count((struct list$1voidp*)come_calloc(1, sizeof(struct list$1voidp)*(1), "list$1voidp_clone", 3, "struct list$1voidp", list$1voidp_finalize, list$1voidp_clone, list$1voidp_get_hash_key, list$1voidp_equals));
    if(    self!=((void*)0)) {
        result_359->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_359->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_359->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_359->it=self->it;
    }
    __result254__ = gComeFunResultObject = __result_obj__ = result_359;
    come_call_finalizer3(result_359,list$1voidp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static unsigned int list$1voidp_get_hash_key(struct list$1voidp* self){
unsigned int result_358;
    result_358=0;
    result_358+=int_get_hash_key(((int)self->head));
    result_358+=int_get_hash_key(((int)self->tail));
    result_358+=int_get_hash_key(((int)self->len));
    result_358+=int_get_hash_key(((int)self->it));
    return result_358;
}

static _Bool list$1voidp_equals(struct list$1voidp* left, struct list$1voidp* right){
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

static unsigned int list$1voidpp_get_hash_key(struct list$1voidp* self){
unsigned int result_360;
    result_360=0;
    result_360+=int_get_hash_key(((int)self->head));
    result_360+=int_get_hash_key(((int)self->tail));
    result_360+=int_get_hash_key(((int)self->len));
    result_360+=int_get_hash_key(((int)self->it));
    return result_360;
}

static _Bool list$1voidpp_equals(struct list$1voidp* left, struct list$1voidp* right){
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

static struct list$1voidp* list$1voidppp_initialize(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list$1voidp* __result255__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static void* map$2voidphvoidphp_begin(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_361;
void* __result256__;
void* __result257__;
void* result_362;
void* __result258__;
result_361 = (void*)0;
result_362 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_361,0,sizeof(void*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_361;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_362,0,sizeof(void*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_362;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool map$2voidphvoidphp_end(struct map$2voidphvoidph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static void* map$2voidphvoidphp_next(struct map$2voidphvoidph* self){
void* __result_obj__=(void*)0;
void* result_364;
void* __result259__;
void* __result260__;
void* result_365;
void* __result261__;
result_364 = (void*)0;
result_365 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_364,0,sizeof(void*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_364;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_365,0,sizeof(void*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_365;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct map$2voidphvoidph* map$2voidphvoidphp_put(struct map$2voidphvoidph* self, void* key, void* item){
void* __result_obj__=(void*)0;
unsigned int hash_379;
int it_380;
_Bool same_key_exist_397;
char* it2_398;
struct map$2voidphvoidph* __result267__;
    if(    self->len*2>=self->size) {
        map$2voidphvoidphp_rehash(self);
    }
    hash_379=come_call_get_hash_key((void*)0, ((void*)key))%self->size;
    it_380=hash_379;
    while((_Bool)1) {
        if(        self->item_existance[it_380]) {
            if(            come_call_equals((void*)0, self->keys[it_380], key)) {
                if(                1) {
                    come_call_finalizer3(self->keys[it_380], (void*)0, 0, 0, 0, 0, (void*)0);
                    list$1voidpp_remove(self->key_list,self->keys[it_380]);
                    self->keys[it_380]=(void*)come_increment_ref_count(key);
                }
                else {
                    list$1voidpp_remove(self->key_list,self->keys[it_380]);
                    self->keys[it_380]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_380], (void*)0, 0, 0, 0, 0, (void*)0);
                    self->items[it_380]=(void*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_380]=item;
                }
                break;
            }
            it_380++;
            if(            it_380>=self->size) {
                it_380=0;
            }
            else if(            it_380==hash_379) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_380]=(_Bool)1;
            if(            1) {
                self->keys[it_380]=(void*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_380]=key;
            }
            if(            1) {
                self->items[it_380]=(void*)come_increment_ref_count(item);
            }
            else {
                self->items[it_380]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_397=(_Bool)0;
    for(    it2_398=((char*)list$1voidpp_begin(self->key_list));    !list$1voidpp_end(self->key_list);    it2_398=((char*)list$1voidpp_next(self->key_list))    ){
        if(        come_call_equals((void*)0, it2_398, key)) {
            same_key_exist_397=(_Bool)1;
        }
    }
    if(    !same_key_exist_397) {
        list$1voidpp_push_back(self->key_list,key);
    }
    __result267__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(key, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result267__;
}

static void map$2voidphvoidphp_rehash(struct map$2voidphvoidph* self){
int size_368;
void* __right_value277 = (void*)0;
void** keys_369;
void* __right_value278 = (void*)0;
void** items_370;
void* __right_value279 = (void*)0;
_Bool* item_existance_371;
int len_372;
void* it_373;
void* default_value_374;
void* __right_value280 = (void*)0;
void* it2_375;
unsigned int hash_376;
int n_377;
void* default_value_378;
void* __right_value281 = (void*)0;
default_value_374 = (void*)0;
default_value_378 = (void*)0;
    size_368=self->size*10;
    keys_369=(void**)come_increment_ref_count(((void**)(__right_value277=(void**)come_calloc(1, sizeof(void*)*(1*(size_368)), "./comelang.h", 2855, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_370=(void**)come_increment_ref_count(((void**)(__right_value278=(void**)come_calloc(1, sizeof(void*)*(1*(size_368)), "./comelang.h", 2856, "void**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_371=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value279=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_368)), "./comelang.h", 2857, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_372=0;
    for(    it_373=map$2voidphvoidphp_begin(self);    !map$2voidphvoidphp_end(self);    it_373=map$2voidphvoidphp_next(self)    ){
        memset(&default_value_374,0,sizeof(void*));
        it2_375=((void*)(__right_value280=map$2voidphvoidphp_at(self,it_373,default_value_374)));
        come_call_finalizer3(__right_value280,(void*)0, 0, 1, 0, 0, (void*)0);
        hash_376=come_call_get_hash_key((void*)0, ((void*)it_373))%size_368;
        n_377=hash_376;
        while((_Bool)1) {
            if(            item_existance_371[n_377]) {
                n_377++;
                if(                n_377>=size_368) {
                    n_377=0;
                }
                else if(                n_377==hash_376) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_371[n_377]=(_Bool)1;
                keys_369[n_377]=it_373;
                items_370[n_377]=((void*)(__right_value281=map$2voidphvoidphp_at(self,it_373,default_value_378)));
                come_call_finalizer3(__right_value281,(void*)0, 0, 1, 0, 0, (void*)0);
                len_372++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_369;
    self->items=items_370;
    self->item_existance=item_existance_371;
    self->size=size_368;
    self->len=len_372;
}

static struct list$1voidp* list$1voidpp_remove(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
int it2_381;
struct list_item$1voidp* it_382;
struct list$1voidp* __result265__;
    it2_381=0;
    it_382=self->head;
    while(it_382!=((void*)0)) {
        if(        come_call_equals((void*)0, it_382->item, item)) {
            list$1voidpp_delete(self,it2_381,it2_381+1);
            break;
        }
        it2_381++;
        it_382=it_382->next;
    }
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static struct list$1voidp* list$1voidpp_delete(struct list$1voidp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_383;
struct list$1voidp* __result262__;
struct list_item$1voidp* it_386;
int i_387;
struct list_item$1voidp* prev_it_388;
struct list_item$1voidp* it_389;
int i_390;
struct list_item$1voidp* prev_it_391;
struct list_item$1voidp* it_392;
struct list_item$1voidp* head_prev_it_393;
struct list_item$1voidp* tail_it_394;
int i_395;
struct list_item$1voidp* prev_it_396;
struct list$1voidp* __result264__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_383=tail;
        tail=head;
        head=tmp_383;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result262__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    if(    head==0&&tail==self->len) {
        list$1voidpp_reset(self);
    }
    else if(    head==0) {
        it_386=self->head;
        i_387=0;
        while(it_386!=((void*)0)) {
            if(            i_387<tail) {
                prev_it_388=it_386;
                it_386=it_386->next;
                i_387++;
                come_call_finalizer3(prev_it_388,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_387==tail) {
                self->head=it_386;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_386=it_386->next;
                i_387++;
            }
        }
    }
    else if(    tail==self->len) {
        it_389=self->head;
        i_390=0;
        while(it_389!=((void*)0)) {
            if(            i_390==head) {
                self->tail=it_389->prev;
                self->tail->next=((void*)0);
            }
            if(            i_390>=head) {
                prev_it_391=it_389;
                it_389=it_389->next;
                i_390++;
                come_call_finalizer3(prev_it_391,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_389=it_389->next;
                i_390++;
            }
        }
    }
    else {
        it_392=self->head;
        head_prev_it_393=((void*)0);
        tail_it_394=((void*)0);
        i_395=0;
        while(it_392!=((void*)0)) {
            if(            i_395==head) {
                head_prev_it_393=it_392->prev;
            }
            if(            i_395==tail) {
                tail_it_394=it_392;
            }
            if(            i_395>=head&&i_395<tail) {
                prev_it_396=it_392;
                it_392=it_392->next;
                i_395++;
                come_call_finalizer3(prev_it_396,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_392=it_392->next;
                i_395++;
            }
        }
        if(        head_prev_it_393!=((void*)0)) {
            head_prev_it_393->next=tail_it_394;
        }
        if(        tail_it_394!=((void*)0)) {
            tail_it_394->prev=head_prev_it_393;
        }
    }
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct list$1voidp* list$1voidpp_reset(struct list$1voidp* self){
void* __result_obj__=(void*)0;
struct list_item$1voidp* it_384;
struct list_item$1voidp* prev_it_385;
struct list$1voidp* __result263__;
    it_384=self->head;
    while(it_384!=((void*)0)) {
        prev_it_385=it_384;
        it_384=it_384->next;
        come_call_finalizer3(prev_it_385,list_item$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1voidp* list$1voidpp_push_back(struct list$1voidp* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value282 = (void*)0;
struct list_item$1voidp* litem_399;
void* __right_value283 = (void*)0;
struct list_item$1voidp* litem_400;
void* __right_value284 = (void*)0;
struct list_item$1voidp* litem_401;
struct list$1voidp* __result266__;
    if(    self->len==0) {
        litem_399=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value282=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1452, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_399->prev=((void*)0);
        litem_399->next=((void*)0);
        litem_399->item=item;
        self->tail=litem_399;
        self->head=litem_399;
    }
    else if(    self->len==1) {
        litem_400=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value283=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1462, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_400->prev=self->head;
        litem_400->next=((void*)0);
        litem_400->item=item;
        self->tail=litem_400;
        self->head->next=litem_400;
    }
    else {
        litem_401=(struct list_item$1voidp*)come_increment_ref_count(((struct list_item$1voidp*)(__right_value284=(struct list_item$1voidp*)come_calloc(1, sizeof(struct list_item$1voidp)*(1), "./comelang.h", 1472, "struct list_item$1voidp*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_401->prev=self->tail;
        litem_401->next=((void*)0);
        litem_401->item=item;
        self->tail->next=litem_401;
        self->tail=litem_401;
    }
    self->len++;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result268__;
void* __right_value285 = (void*)0;
struct sVar* result_413;
void* __right_value286 = (void*)0;
char* __dec_obj64;
void* __right_value287 = (void*)0;
char* __dec_obj65;
void* __right_value321 = (void*)0;
struct sType* __dec_obj89;
void* __right_value322 = (void*)0;
char* __dec_obj90;
struct sVar* __result280__;
    if(    self==(void*)0) {
        __result268__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    result_413=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj64=result_413->mName;
        result_413->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj65=result_413->mCValueName;
        result_413->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj89=result_413->mType;
        result_413->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_413->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_413->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_413->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_413->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj90=result_413->mFunName;
        result_413->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result280__ = gComeFunResultObject = __result_obj__ = result_413;
    come_call_finalizer3(result_413,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj42;
char* __dec_obj43;
struct sType* __dec_obj44;
char* __dec_obj63;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj42=self->mName;
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj43=self->mCValueName;
            __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj44=self->mType;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj63=self->mFunName;
            __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct sType* __dec_obj45;
struct sType* __dec_obj46;
struct sType* __dec_obj47;
char* __dec_obj48;
char* __dec_obj49;
struct list$1voidph* __dec_obj50;
struct list$1sNodeph* __dec_obj52;
struct list$1voidph* __dec_obj53;
struct list$1charph* __dec_obj54;
struct sType* __dec_obj55;
struct sNode* __dec_obj56;
struct sType* __dec_obj57;
struct sNode* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
char* __dec_obj62;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj45=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj46=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        if(        self->mAnyOriginalType==gComeFunResultObject) {
            __dec_obj47=self->mAnyOriginalType;
            come_call_finalizer3(__dec_obj47,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        if(        self->mInterfaceName==gComeFunResultObject) {
            __dec_obj48=self->mInterfaceName;
            __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mInterfaceName = come_decrement_ref_count2(self->mInterfaceName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj49=self->mGenericsName;
            __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj50=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj50,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj52=self->mArrayNum;
            come_call_finalizer3(__dec_obj52,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj53=self->mParamTypes;
            come_call_finalizer3(__dec_obj53,list$1voidph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj54=self->mParamNames;
            come_call_finalizer3(__dec_obj54,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj55=self->mResultType;
            come_call_finalizer3(__dec_obj55,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj56=self->mAlignas;
            if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, ((struct sNode*)__dec_obj56)->finalize, ((struct sNode*)__dec_obj56)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj57=self->mChannelType;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj58=self->mSizeNum;
            if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj59=self->mOriginalTypeName;
            __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj60=self->mAsmName;
            __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj61=self->mTupleName;
            __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        if(        self->mAttribute==gComeFunResultObject) {
            __dec_obj62=self->mAttribute;
            __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidph_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_402;
struct list_item$1voidph* prev_it_403;
    it_402=self->head;
    while(it_402!=((void*)0)) {
        prev_it_403=it_402;
        it_402=it_402->next;
        come_call_finalizer3(prev_it_403,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1voidphp_finalize(struct list_item$1voidph* self){
void* __dec_obj51;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj51=self->item;
            come_call_finalizer3(__dec_obj51,(void*)0, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item, (void*)0, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1voidphp_finalize(struct list$1voidph* self){
struct list_item$1voidph* it_404;
struct list_item$1voidph* prev_it_405;
    it_404=self->head;
    while(it_404!=((void*)0)) {
        prev_it_405=it_404;
        it_404=it_404->next;
        come_call_finalizer3(prev_it_405,list_item$1voidphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_406;
struct list_item$1charph* prev_it_407;
    it_406=self->head;
    while(it_406!=((void*)0)) {
        prev_it_407=it_406;
        it_406=it_406->next;
        come_call_finalizer3(prev_it_407,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_408;
    result_408=0;
    result_408+=int_get_hash_key(((int)self->mName));
    result_408+=int_get_hash_key(((int)self->mCValueName));
    result_408+=int_get_hash_key(((int)self->mType));
    result_408+=int_get_hash_key(((int)self->mBlockLevel));
    result_408+=int_get_hash_key(((int)self->mGlobal));
    result_408+=int_get_hash_key(((int)self->mAllocaValue));
    result_408+=int_get_hash_key(((int)self->mFunctionParam));
    result_408+=int_get_hash_key(((int)self->mNoFree));
    result_408+=int_get_hash_key(((int)self->mFunName));
    return result_408;
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
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1voidphp_equals(struct list$1voidph* left, struct list$1voidph* right){
struct list_item$1voidph* it_409;
struct list_item$1voidph* it2_410;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_409=left->head;
    it2_410=right->head;
    while(it_409!=((void*)0)) {
        if(        !come_call_equals((void*)0, it_409->item, it2_410->item)) {
            return (_Bool)0;
        }
        it_409=it_409->next;
        it2_410=it2_410->next;
    }
    return (_Bool)1;
}

static _Bool list$1charphp_equals(struct list$1charph* left, struct list$1charph* right){
struct list_item$1charph* it_411;
struct list_item$1charph* it2_412;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_411=left->head;
    it2_412=right->head;
    while(it_411!=((void*)0)) {
        if(        !string_equals(it_411->item,it2_412->item)) {
            return (_Bool)0;
        }
        it_411=it_411->next;
        it2_412=it2_412->next;
    }
    return (_Bool)1;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result269__;
void* __right_value288 = (void*)0;
struct sType* result_415;
void* __right_value289 = (void*)0;
struct sType* __dec_obj66;
void* __right_value290 = (void*)0;
struct sType* __dec_obj67;
void* __right_value291 = (void*)0;
struct sType* __dec_obj68;
void* __right_value292 = (void*)0;
char* __dec_obj69;
void* __right_value293 = (void*)0;
char* __dec_obj70;
void* __right_value300 = (void*)0;
struct list$1voidph* __dec_obj74;
void* __right_value304 = (void*)0;
struct list$1sNodeph* __dec_obj75;
void* __right_value305 = (void*)0;
struct list$1voidph* __dec_obj76;
void* __right_value312 = (void*)0;
struct list$1charph* __dec_obj80;
void* __right_value313 = (void*)0;
struct sType* __dec_obj81;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj82;
void* __right_value315 = (void*)0;
struct sType* __dec_obj83;
void* __right_value316 = (void*)0;
struct sNode* __dec_obj84;
void* __right_value317 = (void*)0;
char* __dec_obj85;
void* __right_value318 = (void*)0;
char* __dec_obj86;
void* __right_value319 = (void*)0;
char* __dec_obj87;
void* __right_value320 = (void*)0;
char* __dec_obj88;
struct sType* __result279__;
    if(    self==(void*)0) {
        __result269__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result269__;
    }
    result_415=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_415->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj66=result_415->mNoSolvedGenericsType;
        result_415->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj66,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj67=result_415->mOriginalLoadVarType;
        result_415->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj67,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj68=result_415->mAnyOriginalType;
        result_415->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mInterfaceName!=((void*)0)) {
        __dec_obj69=result_415->mInterfaceName;
        result_415->mInterfaceName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mInterfaceName));
        __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj70=result_415->mGenericsName;
        result_415->mGenericsName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsName));
        __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj74=result_415->mGenericsTypes;
        result_415->mGenericsTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidph_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj74,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj75=result_415->mArrayNum;
        result_415->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodeph_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj75,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj76=result_415->mParamTypes;
        result_415->mParamTypes=(struct list$1voidph*)come_increment_ref_count(come_call_cloner(list$1voidph_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj76,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj80=result_415->mParamNames;
        result_415->mParamNames=(struct list$1charph*)come_increment_ref_count(come_call_cloner(list$1charph_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj81=result_415->mResultType;
        result_415->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj81,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj82=result_415->mAlignas;
        result_415->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj83=result_415->mChannelType;
        result_415->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_415->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_415->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_415->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_415->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_415->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_415->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_415->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_415->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_415->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_415->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_415->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_415->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_415->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_415->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_415->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_415->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_415->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_415->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_415->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_415->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_415->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_415->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_415->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj84=result_415->mSizeNum;
        result_415->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_415->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj85=result_415->mOriginalTypeName;
        result_415->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_415->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_415->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_415->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_415->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_415->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_415->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_415->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj86=result_415->mAsmName;
        result_415->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_415->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_415->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_415->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_415->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_415->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj87=result_415->mTupleName;
        result_415->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj88=result_415->mAttribute;
        result_415->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_415->mGenericsNumBefore=self->mGenericsNumBefore;
    }
    if(    self!=((void*)0)) {
        result_415->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_415->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_415->mDynamic=self->mDynamic;
    }
    __result279__ = gComeFunResultObject = __result_obj__ = result_415;
    come_call_finalizer3(result_415,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_414;
    result_414=0;
    result_414+=int_get_hash_key(((int)self->mClass));
    result_414+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_414+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_414+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_414+=int_get_hash_key(((int)self->mAnyClass));
    result_414+=int_get_hash_key(((int)self->mInterfaceName));
    result_414+=int_get_hash_key(((int)self->mGenericsName));
    result_414+=int_get_hash_key(((int)self->mGenericsTypes));
    result_414+=int_get_hash_key(((int)self->mArrayNum));
    result_414+=int_get_hash_key(((int)self->mOmitArrayNum));
    result_414+=int_get_hash_key(((int)self->mParamTypes));
    result_414+=int_get_hash_key(((int)self->mParamNames));
    result_414+=int_get_hash_key(((int)self->mResultType));
    result_414+=int_get_hash_key(((int)self->mVarArgs));
    result_414+=int_get_hash_key(((int)self->mAlignas));
    result_414+=int_get_hash_key(((int)self->mChannelType));
    result_414+=int_get_hash_key(((int)self->mUnsigned));
    result_414+=int_get_hash_key(((int)self->mShort));
    result_414+=int_get_hash_key(((int)self->mLong));
    result_414+=int_get_hash_key(((int)self->mLongLong));
    result_414+=int_get_hash_key(((int)self->mConstant));
    result_414+=int_get_hash_key(((int)self->mAtomic));
    result_414+=int_get_hash_key(((int)self->mRegister));
    result_414+=int_get_hash_key(((int)self->mVolatile));
    result_414+=int_get_hash_key(((int)self->mStatic));
    result_414+=int_get_hash_key(((int)self->mUniq));
    result_414+=int_get_hash_key(((int)self->mRecord));
    result_414+=int_get_hash_key(((int)self->mExtern));
    result_414+=int_get_hash_key(((int)self->mRestrict));
    result_414+=int_get_hash_key(((int)self->mImmutable));
    result_414+=int_get_hash_key(((int)self->mHeap));
    result_414+=int_get_hash_key(((int)self->mChannel));
    result_414+=int_get_hash_key(((int)self->mNoHeap));
    result_414+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_414+=int_get_hash_key(((int)self->mException));
    result_414+=int_get_hash_key(((int)self->mPointerNum));
    result_414+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_414+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_414+=int_get_hash_key(((int)self->mNoArrayPointerNum));
    result_414+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_414+=int_get_hash_key(((int)self->mSizeNum));
    result_414+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_414+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_414+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_414+=int_get_hash_key(((int)self->mFunctionParam));
    result_414+=int_get_hash_key(((int)self->mAllocaValue));
    result_414+=int_get_hash_key(((int)self->mGenericsStruct));
    result_414+=int_get_hash_key(((int)self->mSolvedGenericsName));
    result_414+=int_get_hash_key(((int)self->mInline));
    result_414+=int_get_hash_key(((int)self->mNullValue));
    result_414+=int_get_hash_key(((int)self->mGuardValue));
    result_414+=int_get_hash_key(((int)self->mAsmName));
    result_414+=int_get_hash_key(((int)self->mArrayPointerType));
    result_414+=int_get_hash_key(((int)self->mLambdaArray));
    result_414+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_414+=int_get_hash_key(((int)self->mTypedef));
    result_414+=int_get_hash_key(((int)self->mMultipleTypes));
    result_414+=int_get_hash_key(((int)self->mOriginIsArray));
    result_414+=int_get_hash_key(((int)self->mTupleName));
    result_414+=int_get_hash_key(((int)self->mAttribute));
    result_414+=int_get_hash_key(((int)self->mGenericsNumBefore));
    result_414+=int_get_hash_key(((int)self->mGenerate));
    result_414+=int_get_hash_key(((int)self->mCreateVTable));
    result_414+=int_get_hash_key(((int)self->mDynamic));
    return result_414;
}

static struct list$1voidph* list$1voidph_clone(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result270__;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct list$1voidph* result_417;
struct list_item$1voidph* it_418;
void* __right_value299 = (void*)0;
struct list$1voidph* __result273__;
    if(    self==((void*)0)) {
        __result270__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_417=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "./comelang.h", 1368, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    it_418=self->head;
    while(it_418!=((void*)0)) {
        list$1voidphp_add(result_417,(void*)come_increment_ref_count(come_call_cloner((void*)0, it_418->item)));
        it_418=it_418->next;
    }
    __result273__ = gComeFunResultObject = __result_obj__ = result_417;
    come_call_finalizer3(result_417,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

static unsigned int list$1voidphp_get_hash_key(struct list$1voidph* self){
unsigned int result_416;
    result_416=0;
    result_416+=int_get_hash_key(((int)self->head));
    result_416+=int_get_hash_key(((int)self->tail));
    result_416+=int_get_hash_key(((int)self->len));
    result_416+=int_get_hash_key(((int)self->it));
    return result_416;
}

static struct list$1voidph* list$1voidphpp_initialize(struct list$1voidph* self){
void* __result_obj__=(void*)0;
struct list$1voidph* __result271__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result271__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1voidphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static struct list$1voidph* list$1voidphp_add(struct list$1voidph* self, void* item){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
struct list_item$1voidph* litem_419;
void* __dec_obj71;
void* __right_value297 = (void*)0;
struct list_item$1voidph* litem_420;
void* __dec_obj72;
void* __right_value298 = (void*)0;
struct list_item$1voidph* litem_421;
void* __dec_obj73;
struct list$1voidph* __result272__;
    if(    self->len==0) {
        litem_419=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value296=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1382, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_419->prev=((void*)0);
        litem_419->next=((void*)0);
        __dec_obj71=litem_419->item;
        litem_419->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_419;
        self->head=litem_419;
    }
    else if(    self->len==1) {
        litem_420=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value297=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1392, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_420->prev=self->head;
        litem_420->next=((void*)0);
        __dec_obj72=litem_420->item;
        litem_420->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail=litem_420;
        self->head->next=litem_420;
    }
    else {
        litem_421=(struct list_item$1voidph*)come_increment_ref_count(((struct list_item$1voidph*)(__right_value298=(struct list_item$1voidph*)come_calloc(1, sizeof(struct list_item$1voidph)*(1), "./comelang.h", 1402, "struct list_item$1voidph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_421->prev=self->tail;
        litem_421->next=((void*)0);
        __dec_obj73=litem_421->item;
        litem_421->item=(void*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,(void*)0, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_421;
        self->tail=litem_421;
    }
    self->len++;
    __result272__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item, (void*)0, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct list$1sNodeph* list$1sNodeph_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result274__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1sNodeph* result_422;
struct list_item$1sNodeph* it_423;
void* __right_value303 = (void*)0;
struct list$1sNodeph* __result275__;
    if(    self==((void*)0)) {
        __result274__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result274__;
    }
    result_422=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1368, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_423=self->head;
    while(it_423!=((void*)0)) {
        list$1sNodephp_add(result_422,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_423->item)));
        it_423=it_423->next;
    }
    __result275__ = gComeFunResultObject = __result_obj__ = result_422;
    come_call_finalizer3(result_422,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result275__;
}

static struct list$1charph* list$1charph_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result276__;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct list$1charph* result_424;
struct list_item$1charph* it_425;
void* __right_value311 = (void*)0;
struct list$1charph* __result278__;
    if(    self==((void*)0)) {
        __result276__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    result_424=(struct list$1charph*)come_increment_ref_count(list$1charphp_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1368, "struct list$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_425=self->head;
    while(it_425!=((void*)0)) {
        list$1charphp_add(result_424,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_425->item)));
        it_425=it_425->next;
    }
    __result278__ = gComeFunResultObject = __result_obj__ = result_424;
    come_call_finalizer3(result_424,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static struct list$1charph* list$1charphp_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value308 = (void*)0;
struct list_item$1charph* litem_426;
char* __dec_obj77;
void* __right_value309 = (void*)0;
struct list_item$1charph* litem_427;
char* __dec_obj78;
void* __right_value310 = (void*)0;
struct list_item$1charph* litem_428;
char* __dec_obj79;
struct list$1charph* __result277__;
    if(    self->len==0) {
        litem_426=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value308=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1382, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_426->prev=((void*)0);
        litem_426->next=((void*)0);
        __dec_obj77=litem_426->item;
        litem_426->item=(char*)come_increment_ref_count(item);
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_426;
        self->head=litem_426;
    }
    else if(    self->len==1) {
        litem_427=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value309=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1392, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_427->prev=self->head;
        litem_427->next=((void*)0);
        __dec_obj78=litem_427->item;
        litem_427->item=(char*)come_increment_ref_count(item);
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_427;
        self->head->next=litem_427;
    }
    else {
        litem_428=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value310=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1402, "struct list_item$1charph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_428->prev=self->tail;
        litem_428->next=((void*)0);
        __dec_obj79=litem_428->item;
        litem_428->item=(char*)come_increment_ref_count(item);
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_428;
        self->tail=litem_428;
    }
    self->len++;
    __result277__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static void map$2voidphvoidph_finalize(struct map$2voidphvoidph* self){
int i_429;
int i_430;
    for(    i_429=0;    i_429<self->size;    i_429++    ){
        if(        self->item_existance[i_429]) {
            if(            1) {
                come_call_finalizer3(self->items[i_429], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_430=0;    i_430<self->size;    i_430++    ){
        if(        self->item_existance[i_430]) {
            if(            1) {
                come_call_finalizer3(self->keys[i_430], (void*)0, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1voidpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result284__;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
struct list$1sBlockph* result_433;
struct list_item$1sBlockph* it_434;
void* __right_value333 = (void*)0;
struct list$1sBlockph* __result287__;
    if(    self==((void*)0)) {
        __result284__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    result_433=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1368, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_434=self->head;
    while(it_434!=((void*)0)) {
        list$1sBlockphp_add(result_433,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, it_434->item)));
        it_434=it_434->next;
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_433;
    come_call_finalizer3(result_433,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static struct list$1sBlockph* list$1sBlockphp_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result285__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result285__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result285__;
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_431;
struct list_item$1sBlockph* prev_it_432;
    it_431=self->head;
    while(it_431!=((void*)0)) {
        prev_it_432=it_431;
        it_431=it_431->next;
        come_call_finalizer3(prev_it_432,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj95;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj95=self->item;
            come_call_finalizer3(__dec_obj95,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockphp_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value330 = (void*)0;
struct list_item$1sBlockph* litem_435;
struct sBlock* __dec_obj96;
void* __right_value331 = (void*)0;
struct list_item$1sBlockph* litem_436;
struct sBlock* __dec_obj97;
void* __right_value332 = (void*)0;
struct list_item$1sBlockph* litem_437;
struct sBlock* __dec_obj98;
struct list$1sBlockph* __result286__;
    if(    self->len==0) {
        litem_435=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value330=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1382, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_435->prev=((void*)0);
        litem_435->next=((void*)0);
        __dec_obj96=litem_435->item;
        litem_435->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj96,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_435;
        self->head=litem_435;
    }
    else if(    self->len==1) {
        litem_436=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value331=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1392, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_436->prev=self->head;
        litem_436->next=((void*)0);
        __dec_obj97=litem_436->item;
        litem_436->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj97,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_436;
        self->head->next=litem_436;
    }
    else {
        litem_437=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value332=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1402, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_437->prev=self->tail;
        litem_437->next=((void*)0);
        __dec_obj98=litem_437->item;
        litem_437->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_437;
        self->tail=litem_437;
    }
    self->len++;
    __result286__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_438;
struct list_item$1sBlockph* prev_it_439;
    it_438=self->head;
    while(it_438!=((void*)0)) {
        prev_it_439=it_438;
        it_438=it_438->next;
        come_call_finalizer3(prev_it_439,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sIfNode_finalize(struct sIfNode* self){
char* __dec_obj102;
struct sNode* __dec_obj103;
struct sBlock* __dec_obj104;
struct list$1sNodeph* __dec_obj105;
struct list$1sBlockph* __dec_obj106;
struct sBlock* __dec_obj107;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj102=self->sname;
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj103=self->mExpressionNode;
            if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj104=self->mIfBlock;
            come_call_finalizer3(__dec_obj104,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        if(        self->mElifExpressionNodes==gComeFunResultObject) {
            __dec_obj105=self->mElifExpressionNodes;
            come_call_finalizer3(__dec_obj105,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElifExpressionNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        if(        self->mElifBlocks==gComeFunResultObject) {
            __dec_obj106=self->mElifBlocks;
            come_call_finalizer3(__dec_obj106,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElifBlocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        if(        self->mElseBlock==gComeFunResultObject) {
            __dec_obj107=self->mElseBlock;
            come_call_finalizer3(__dec_obj107,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_442;
int i_443;
struct sBlock* __result290__;
struct sBlock* default_value_444;
struct sBlock* __result291__;
default_value_444 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_442=self->head;
    i_443=0;
    while(it_442!=((void*)0)) {
        if(        position==i_443) {
            __result290__ = gComeFunResultObject = __result_obj__ = it_442->item;
            gComeFunResultObject = (void*)0;
            return __result290__;
        }
        it_442=it_442->next;
        i_443++;
    }
    memset(&default_value_444,0,sizeof(struct sBlock*));
    __result291__ = gComeFunResultObject = __result_obj__ = default_value_444;
    come_call_finalizer3(default_value_444,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj109;
struct sType* __dec_obj110;
char* __dec_obj111;
char* __dec_obj112;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj109=self->c_value;
            __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj110=self->type;
            come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj111=self->c_value_without_right_value_objects;
            __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        if(        self->c_value_without_cast_object_value==gComeFunResultObject) {
            __dec_obj112=self->c_value_without_cast_object_value;
            __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_467;
int i_468;
struct sNode* __result293__;
struct sNode* default_value_469;
struct sNode* __result294__;
default_value_469 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_467=self->head;
    i_468=0;
    while(it_467!=((void*)0)) {
        if(        position==i_468) {
            __result293__ = gComeFunResultObject = __result_obj__ = it_467->item;
            gComeFunResultObject = (void*)0;
            return __result293__;
        }
        it_467=it_467->next;
        i_468++;
    }
    memset(&default_value_469,0,sizeof(struct sNode*));
    __result294__ = gComeFunResultObject = __result_obj__ = default_value_469;
    if(default_value_469) { default_value_469 = come_decrement_ref_count2(default_value_469, ((struct sNode*)default_value_469)->finalize, ((struct sNode*)default_value_469)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1CVALUEph* list$1CVALUEphp_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value354 = (void*)0;
struct list_item$1CVALUEph* litem_482;
struct CVALUE* __dec_obj115;
void* __right_value355 = (void*)0;
struct list_item$1CVALUEph* litem_483;
struct CVALUE* __dec_obj116;
void* __right_value356 = (void*)0;
struct list_item$1CVALUEph* litem_484;
struct CVALUE* __dec_obj117;
struct list$1CVALUEph* __result297__;
    if(    self->len==0) {
        litem_482=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value354=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1452, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_482->prev=((void*)0);
        litem_482->next=((void*)0);
        __dec_obj115=litem_482->item;
        litem_482->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj115,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_482;
        self->head=litem_482;
    }
    else if(    self->len==1) {
        litem_483=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value355=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1462, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_483->prev=self->head;
        litem_483->next=((void*)0);
        __dec_obj116=litem_483->item;
        litem_483->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_483;
        self->head->next=litem_483;
    }
    else {
        litem_484=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value356=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1472, "struct list_item$1CVALUEph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_484->prev=self->tail;
        litem_484->next=((void*)0);
        __dec_obj117=litem_484->item;
        litem_484->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_484;
        self->tail=litem_484;
    }
    self->len++;
    __result297__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj119;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj120;
struct sMatchNode* __result299__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj120=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); };
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value360=__builtin_string("sMatch")));
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_485;
struct sNode* match_node_486;
_Bool Value_487;
_Bool __result301__;
void* __right_value361 = (void*)0;
struct CVALUE* come_value_488;
_Bool Value_489;
_Bool __result302__;
struct sVar* var__490;
int __exception_result_var_b2;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct list$1voidph* __dec_obj124;
void* __right_value364 = (void*)0;
_Bool __result303__;
    it_node_485=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_486=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_487=node_compile(it_node_485,info);
    if(    !Value_487) {
        __result301__ = (_Bool)0;
        if(it_node_485) { it_node_485 = come_decrement_ref_count2(it_node_485, ((struct sNode*)it_node_485)->finalize, ((struct sNode*)it_node_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_486) { match_node_486 = come_decrement_ref_count2(match_node_486, ((struct sNode*)match_node_486)->finalize, ((struct sNode*)match_node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result301__;
    }
    else {
    }
    come_value_488=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_488->c_value);
    dec_stack_ptr(1,info);
    Value_489=node_compile(match_node_486,info);
    if(    !Value_489) {
        __result302__ = (_Bool)0;
        if(it_node_485) { it_node_485 = come_decrement_ref_count2(it_node_485, ((struct sNode*)it_node_485)->finalize, ((struct sNode*)it_node_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_486) { match_node_486 = come_decrement_ref_count2(match_node_486, ((struct sNode*)match_node_486)->finalize, ((struct sNode*)match_node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result302__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__490=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 268, 1),__exception_result_var_b2=assert_v2(var__490!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj124=info->match_it_var;
            info->match_it_var=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "08if.c", 271, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
            come_call_finalizer3(__dec_obj124,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__490)));
    }
    __result303__ = (_Bool)1;
    if(it_node_485) { it_node_485 = come_decrement_ref_count2(it_node_485, ((struct sNode*)it_node_485)->finalize, ((struct sNode*)it_node_485)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_486) { match_node_486 = come_decrement_ref_count2(match_node_486, ((struct sNode*)match_node_486)->finalize, ((struct sNode*)match_node_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_488,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result303__;
}

static void sMatchNode_finalize(struct sMatchNode* self){
char* __dec_obj121;
struct sNode* __dec_obj122;
struct sNode* __dec_obj123;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj121=self->sname;
            __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj122=self->it_node;
            if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj123=self->match_node;
            if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj125;
void* __right_value367 = (void*)0;
struct sNode* __dec_obj126;
struct sIfMethodNode* __result304__;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value365,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj125=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_node));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj126=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, match_node));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); };
    __result304__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
char* __result305__;
    __result305__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value368=__builtin_string("sMatch")));
    __right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_491;
struct sNode* match_node_492;
_Bool Value_493;
_Bool __result306__;
void* __right_value369 = (void*)0;
struct CVALUE* come_value_494;
_Bool Value_495;
_Bool __result307__;
struct sVar* var__496;
int __exception_result_var_b3;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
struct list$1voidph* __dec_obj131;
void* __right_value372 = (void*)0;
_Bool __result309__;
    it_node_491=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_492=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_493=node_compile(it_node_491,info);
    if(    !Value_493) {
        __result306__ = (_Bool)0;
        if(it_node_491) { it_node_491 = come_decrement_ref_count2(it_node_491, ((struct sNode*)it_node_491)->finalize, ((struct sNode*)it_node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_492) { match_node_492 = come_decrement_ref_count2(match_node_492, ((struct sNode*)match_node_492)->finalize, ((struct sNode*)match_node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result306__;
    }
    else {
    }
    come_value_494=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_494->c_value);
    dec_stack_ptr(1,info);
    Value_495=node_compile(match_node_492,info);
    if(    !Value_495) {
        __result307__ = (_Bool)0;
        if(it_node_491) { it_node_491 = come_decrement_ref_count2(it_node_491, ((struct sNode*)it_node_491)->finalize, ((struct sNode*)it_node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_492) { match_node_492 = come_decrement_ref_count2(match_node_492, ((struct sNode*)match_node_492)->finalize, ((struct sNode*)match_node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(come_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result307__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__496=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 320, 2),__exception_result_var_b3=assert_v2(var__496!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj131=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarphp_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 323, "struct list$1sVarph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj131,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1voidphp_add(info->match_it_var,(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, var__496)));
    }
    __result309__ = (_Bool)1;
    if(it_node_491) { it_node_491 = come_decrement_ref_count2(it_node_491, ((struct sNode*)it_node_491)->finalize, ((struct sNode*)it_node_491)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_492) { match_node_492 = come_decrement_ref_count2(match_node_492, ((struct sNode*)match_node_492)->finalize, ((struct sNode*)match_node_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(come_value_494,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result309__;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
char* __dec_obj127;
struct sNode* __dec_obj128;
struct sNode* __dec_obj129;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj127=self->sname;
            __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj128=self->it_node;
            if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj129=self->match_node;
            if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1sVarph* list$1sVarphp_initialize(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct list$1sVarph* __result308__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result308__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_497;
struct list_item$1sVarph* prev_it_498;
    it_497=self->head;
    while(it_497!=((void*)0)) {
        prev_it_498=it_497;
        it_497=it_497->next;
        come_call_finalizer3(prev_it_498,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj130;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj130=self->item;
            come_call_finalizer3(__dec_obj130,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sNode* __dec_obj132;
void* __right_value375 = (void*)0;
struct sBlock* __dec_obj133;
struct sOrStatmentNode* __result310__;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj132=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj133=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj133,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result310__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value376 = (void*)0;
char* __result311__;
    __result311__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value376=__builtin_string("sOrStatmentNode")));
    __right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_499;
_Bool Value_500;
void* __right_value377 = (void*)0;
struct CVALUE* conditional_value_501;
struct sBlock* if_block_502;
int num_or_conditional_stack_504;
_Bool __result312__;
    expression_node_499=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_500=node_compile(expression_node_499,info);
    if(    !Value_500) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_501=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_502=self->mIfBlock;
    static int num_or_conditional_503=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_503);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_503,conditional_value_501->c_value);
    num_or_conditional_stack_504=num_or_conditional_503;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_504);
    transpile_block(if_block_502,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result312__ = (_Bool)1;
    come_call_finalizer3(conditional_value_501,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result312__;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __dec_obj134;
struct sNode* __dec_obj135;
struct sBlock* __dec_obj136;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj134=self->sname;
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj135=self->mExpressionNode;
            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj136=self->mIfBlock;
            come_call_finalizer3(__dec_obj136,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
struct sNode* __dec_obj137;
void* __right_value380 = (void*)0;
struct sBlock* __dec_obj138;
struct sAndStatmentNode* __result313__;
    ((struct sNodeBase*)(__right_value378=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value378,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj137=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, expression_node));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj138=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, if_block));
    come_call_finalizer3(__dec_obj138,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result313__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result314__;
    __result314__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sAndStatmentNode")));
    __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_505;
_Bool Value_506;
void* __right_value382 = (void*)0;
struct CVALUE* conditional_value_507;
struct sBlock* if_block_508;
int num_and_conditional_stack_510;
_Bool __result315__;
    expression_node_505=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_506=node_compile(expression_node_505,info);
    if(    !Value_506) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_507=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_508=self->mIfBlock;
    static int num_and_conditional_509=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_509);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_509,conditional_value_507->c_value);
    num_and_conditional_stack_510=num_and_conditional_509;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_510);
    transpile_block(if_block_508,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result315__ = (_Bool)1;
    come_call_finalizer3(conditional_value_507,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result315__;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __dec_obj139;
struct sNode* __dec_obj140;
struct sBlock* __dec_obj141;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj139=self->sname;
            __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj140=self->mExpressionNode;
            if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj141=self->mIfBlock;
            come_call_finalizer3(__dec_obj141,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct list$1sNodeph* __dec_obj142;
struct sMultipleNode* __result316__;
    ((struct sNodeBase*)(__right_value383=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value383,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj142=self->multiple_node;
    self->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, multiple_node));
    come_call_finalizer3(__dec_obj142,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result316__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
char* __result317__;
    __result317__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value385=__builtin_string("sMultipleNode")));
    __right_value385 = come_decrement_ref_count2(__right_value385, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result317__;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
struct list$1sNodeph* multiple_node_511;
struct CVALUE* come_value_512;
struct list$1sNodeph* o2_saved_513;
struct sNode* it_516;
_Bool Value_519;
_Bool __result324__;
void* __right_value386 = (void*)0;
struct CVALUE* __dec_obj145;
_Bool __result325__;
    multiple_node_511=(struct list$1sNodeph*)come_increment_ref_count(self->multiple_node);
    come_value_512=((void*)0);
    for(    o2_saved_513=(struct list$1sNodeph*)come_increment_ref_count((multiple_node_511)),it_516=list$1sNodephp_begin((o2_saved_513));    !list$1sNodephp_end((o2_saved_513));    it_516=list$1sNodephp_next((o2_saved_513))    ){
        Value_519=node_compile(it_516,info);
        if(        !Value_519) {
            __result324__ = (_Bool)0;
            come_call_finalizer3(o2_saved_513,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(multiple_node_511,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result324__;
        }
        else {
        }
        add_last_code_to_source(info);
        if(        list$1CVALUEphp_length(info->stack)>0) {
            __dec_obj145=come_value_512;
            come_value_512=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj145,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
    }
    come_call_finalizer3(o2_saved_513,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    come_value_512) {
        list$1CVALUEphp_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_512));
    }
    __result325__ = (_Bool)1;
    come_call_finalizer3(multiple_node_511,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_512,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result325__;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
char* __dec_obj143;
struct list$1sNodeph* __dec_obj144;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj143=self->sname;
            __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        if(        self->multiple_node==gComeFunResultObject) {
            __dec_obj144=self->multiple_node;
            come_call_finalizer3(__dec_obj144,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_514;
struct sNode* __result318__;
struct sNode* __result319__;
struct sNode* result_515;
struct sNode* __result320__;
result_514 = (void*)0;
result_515 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_514,0,sizeof(struct sNode*));
        __result318__ = gComeFunResultObject = __result_obj__ = result_514;
        gComeFunResultObject = (void*)0;
        return __result318__;
    }
    self->it=self->head;
    if(    self->it) {
        __result319__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    memset(&result_515,0,sizeof(struct sNode*));
    __result320__ = gComeFunResultObject = __result_obj__ = result_515;
    gComeFunResultObject = (void*)0;
    return __result320__;
}

static _Bool list$1sNodephp_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodephp_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_517;
struct sNode* __result321__;
struct sNode* __result322__;
struct sNode* result_518;
struct sNode* __result323__;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_517,0,sizeof(struct sNode*));
        __result321__ = gComeFunResultObject = __result_obj__ = result_517;
        gComeFunResultObject = (void*)0;
        return __result321__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result322__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    memset(&result_518,0,sizeof(struct sNode*));
    __result323__ = gComeFunResultObject = __result_obj__ = result_518;
    gComeFunResultObject = (void*)0;
    return __result323__;
}

static int list$1CVALUEphp_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct sSaveRightValueObjects* __result326__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result326__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result326__;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result327__;
    __result327__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string("sSaveRightValueObjects")));
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1voidph* __dec_obj147;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct list$1voidph* __dec_obj148;
    __dec_obj147=gExceptionRightValueObjects;
    gExceptionRightValueObjects=(struct list$1voidph*)come_increment_ref_count(info->right_value_objects);
    come_call_finalizer3(__dec_obj147,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj148=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(list$1voidphpp_initialize((struct list$1voidph*)come_increment_ref_count((struct list$1voidph*)come_calloc(1, sizeof(struct list$1voidph)*(1), "08if.c", 512, "struct list$1voidph*", list$1voidphp_finalize, list$1voidph_clone, list$1voidphp_get_hash_key, list$1voidphp_equals))));
    come_call_finalizer3(__dec_obj148,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
char* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj146=self->sname;
            __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
struct sRestoreRightValueObjects* __result328__;
    ((struct sNodeBase*)(__right_value391=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value391,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result328__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value392 = (void*)0;
char* __result329__;
    __result329__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value392=__builtin_string("sRestoreRightValueObjects")));
    __right_value392 = come_decrement_ref_count2(__right_value392, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result329__;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1voidph* __dec_obj150;
struct list$1voidph* __dec_obj151;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj150=info->right_value_objects;
    info->right_value_objects=(struct list$1voidph*)come_increment_ref_count(gExceptionRightValueObjects);
    come_call_finalizer3(__dec_obj150,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj151=gExceptionRightValueObjects;
    gExceptionRightValueObjects=((void*)0);
    come_call_finalizer3(__dec_obj151,list$1voidph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
char* __dec_obj149;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj149=self->sname;
            __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value393 = (void*)0;
char* sname_520;
int sline_521;
int var_num_stack_523;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
char* __list_values1___524[2];
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct list$1charph* multiple_assign_527;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sNode* get_return_value_528;
void* __right_value401 = (void*)0;
struct sBlock* if_block_529;
void* __right_value402 = (void*)0;
void* __right_value403 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_530;
int elif_num_531;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct list$1sBlockph* elif_blocks_532;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sBlock* else_block_533;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct sNode* expression_node2_537;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value425 = (void*)0;
struct sNode* if_node_538;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct sNode* _inf_value2;
struct sSaveRightValueObjects* _inf_obj_value2;
void* __right_value430 = (void*)0;
struct sNode* save_right_value_objects_543;
void* __right_value431 = (void*)0;
void* __right_value432 = (void*)0;
struct sNode* _inf_value3;
struct sRestoreRightValueObjects* _inf_obj_value3;
void* __right_value435 = (void*)0;
struct sNode* restore_right_value_objects_546;
struct sNode* __list_values2___550[2];
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct list$1sNodeph* multiple_node_549;
void* __right_value438 = (void*)0;
void* __right_value439 = (void*)0;
struct sNode* _inf_value4;
struct sMultipleNode* _inf_obj_value4;
void* __right_value443 = (void*)0;
struct sNode* __result341__;
    sname_520=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_521=info->sline;
    parse_sharp_v5(info);
    static int var_num_522=0;
    var_num_522++;
    var_num_stack_523=var_num_522;
    multiple_assign_527=(struct list$1charph*)come_increment_ref_count((__list_values1___524[0]=(char*)come_increment_ref_count(((char*)(__right_value395=xsprintf("come_exception_var_\%s",((char*)(__right_value394=int_to_string(var_num_stack_523))))))),
__list_values1___524[1]=(char*)come_increment_ref_count(((char*)(__right_value396=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 557, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values1___524)));
    __right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_528=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_527),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_529=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_530=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 564, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_531=0;
    elif_blocks_532=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 567, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    else_block_533=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 569, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    else_block_533->mOmitSemicolon=(_Bool)1;
    list$1sNodephp_push_back(else_block_533->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value412=xsprintf("come_exception_var_\%s",((char*)(__right_value411=int_to_string(var_num_stack_523)))))),info)));
    __right_value411 = come_decrement_ref_count2(__right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    expression_node2_537=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value414=xsprintf("Err"))),info));
    __right_value414 = come_decrement_ref_count2(__right_value414, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 575, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value417=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 575, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_537),if_block_529,elif_expression_nodes_530,elif_blocks_532,elif_num_531,else_block_533,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_538=(struct sNode*)come_increment_ref_count(_inf_value1);
    come_call_finalizer3(__right_value417,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 577, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value2=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value427=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 577, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value2->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value2->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value2->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_543=(struct sNode*)come_increment_ref_count(_inf_value2);
    come_call_finalizer3(__right_value427,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 578, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value432=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 578, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value3->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value3->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value3->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_546=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value432,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_549=(struct list$1sNodeph*)come_increment_ref_count((__list_values2___550[0]=(struct sNode*)come_increment_ref_count(get_return_value_528),
__list_values2___550[1]=(struct sNode*)come_increment_ref_count(if_node_538),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 580, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),2,__list_values2___550)));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 582, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value439=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 582, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_549),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMultipleNode_finalize;
    _inf_value4->clone=(void*)sMultipleNode_clone;
    _inf_value4->compile=(void*)sMultipleNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMultipleNode_terminated;
    _inf_value4->kind=(void*)sMultipleNode_kind;
    __result341__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value443=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_520 = come_decrement_ref_count2(sname_520, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_527,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_528) { get_return_value_528 = come_decrement_ref_count2(get_return_value_528, ((struct sNode*)get_return_value_528)->finalize, ((struct sNode*)get_return_value_528)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_529,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_530,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_532,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_533,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_537) { expression_node2_537 = come_decrement_ref_count2(expression_node2_537, ((struct sNode*)expression_node2_537)->finalize, ((struct sNode*)expression_node2_537)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_538) { if_node_538 = come_decrement_ref_count2(if_node_538, ((struct sNode*)if_node_538)->finalize, ((struct sNode*)if_node_538)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_543) { save_right_value_objects_543 = come_decrement_ref_count2(save_right_value_objects_543, ((struct sNode*)save_right_value_objects_543)->finalize, ((struct sNode*)save_right_value_objects_543)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_546) { restore_right_value_objects_546 = come_decrement_ref_count2(restore_right_value_objects_546, ((struct sNode*)restore_right_value_objects_546)->finalize, ((struct sNode*)restore_right_value_objects_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_549,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value439,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value443) { __right_value443 = come_decrement_ref_count2(__right_value443, ((struct sNode*)__right_value443)->finalize, ((struct sNode*)__right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result341__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_525;
struct list$1charph* __result330__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_525=0;    i_525<num_value;    i_525++    ){
        list$1charphp_push_back(self,values[i_525]);
    }
    __result330__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static unsigned int list$1charph_get_hash_key(struct list$1charph* self){
unsigned int result_526;
    result_526=0;
    result_526+=int_get_hash_key(((int)self->head));
    result_526+=int_get_hash_key(((int)self->tail));
    result_526+=int_get_hash_key(((int)self->len));
    result_526+=int_get_hash_key(((int)self->it));
    return result_526;
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

static struct list$1sNodeph* list$1sNodephp_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
struct list_item$1sNodeph* litem_534;
struct sNode* __dec_obj152;
void* __right_value409 = (void*)0;
struct list_item$1sNodeph* litem_535;
struct sNode* __dec_obj153;
void* __right_value410 = (void*)0;
struct list_item$1sNodeph* litem_536;
struct sNode* __dec_obj154;
struct list$1sNodeph* __result331__;
    if(    self->len==0) {
        litem_534=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value408=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1452, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_534->prev=((void*)0);
        litem_534->next=((void*)0);
        __dec_obj152=litem_534->item;
        litem_534->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_534;
        self->head=litem_534;
    }
    else if(    self->len==1) {
        litem_535=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value409=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1462, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_535->prev=self->head;
        litem_535->next=((void*)0);
        __dec_obj153=litem_535->item;
        litem_535->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_535;
        self->head->next=litem_535;
    }
    else {
        litem_536=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value410=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1472, "struct list_item$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_536->prev=self->tail;
        litem_536->next=((void*)0);
        __dec_obj154=litem_536->item;
        litem_536->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_536;
        self->tail=litem_536;
    }
    self->len++;
    __result331__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result331__;
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__=(void*)0;
struct sIfNode* __result332__;
void* __right_value418 = (void*)0;
struct sIfNode* result_542;
void* __right_value419 = (void*)0;
char* __dec_obj155;
void* __right_value420 = (void*)0;
struct sNode* __dec_obj156;
void* __right_value421 = (void*)0;
struct sBlock* __dec_obj157;
void* __right_value422 = (void*)0;
struct list$1sNodeph* __dec_obj158;
void* __right_value423 = (void*)0;
struct list$1sBlockph* __dec_obj159;
void* __right_value424 = (void*)0;
struct sBlock* __dec_obj160;
struct sIfNode* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_542=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "struct sIfNode", sIfNode_finalize, sIfNode_clone, sIfNode_get_hash_key, sIfNode_equals));
    if(    self!=((void*)0)) {
        result_542->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj155=result_542->sname;
        result_542->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_542->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj156=result_542->mExpressionNode;
        result_542->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj157=result_542->mIfBlock;
        result_542->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj157,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj158=result_542->mElifExpressionNodes;
        result_542->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->mElifExpressionNodes));
        come_call_finalizer3(__dec_obj158,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj159=result_542->mElifBlocks;
        result_542->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(come_call_cloner(list$1sBlockphp_clone, self->mElifBlocks));
        come_call_finalizer3(__dec_obj159,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_542->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_542->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj160=result_542->mElseBlock;
        result_542->mElseBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mElseBlock));
        come_call_finalizer3(__dec_obj160,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_542;
    come_call_finalizer3(result_542,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static unsigned int sIfNode_get_hash_key(struct sIfNode* self){
unsigned int result_539;
    result_539=0;
    result_539+=int_get_hash_key(((int)self->sline));
    result_539+=int_get_hash_key(((int)self->sname));
    result_539+=int_get_hash_key(((int)self->sline_real));
    result_539+=int_get_hash_key(((int)self->mExpressionNode));
    result_539+=int_get_hash_key(((int)self->mIfBlock));
    result_539+=int_get_hash_key(((int)self->mElifExpressionNodes));
    result_539+=int_get_hash_key(((int)self->mElifBlocks));
    result_539+=int_get_hash_key(((int)self->mElifNum));
    result_539+=int_get_hash_key(((int)self->mGuard));
    result_539+=int_get_hash_key(((int)self->mElseBlock));
    return result_539;
}

static _Bool sIfNode_equals(struct sIfNode* left, struct sIfNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mExpressionNode,right->mExpressionNode)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mIfBlock,right->mIfBlock)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->mElifExpressionNodes,right->mElifExpressionNodes)) {
        return (_Bool)0;
    }
    if(    !list$1sBlockphp_equals(left->mElifBlocks,right->mElifBlocks)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mElifNum,right->mElifNum)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGuard,right->mGuard)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mElseBlock,right->mElseBlock)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sBlockphp_equals(struct list$1sBlockph* left, struct list$1sBlockph* right){
struct list_item$1sBlockph* it_540;
struct list_item$1sBlockph* it2_541;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_540=left->head;
    it2_541=right->head;
    while(it_540!=((void*)0)) {
        if(        !sBlock_equals(it_540->item,it2_541->item)) {
            return (_Bool)0;
        }
        it_540=it_540->next;
        it2_541=it2_541->next;
    }
    return (_Bool)1;
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sSaveRightValueObjects* __result334__;
void* __right_value428 = (void*)0;
struct sSaveRightValueObjects* result_545;
void* __right_value429 = (void*)0;
char* __dec_obj161;
struct sSaveRightValueObjects* __result335__;
    if(    self==(void*)0) {
        __result334__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result334__;
    }
    result_545=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "struct sSaveRightValueObjects", sSaveRightValueObjects_finalize, sSaveRightValueObjects_clone, sSaveRightValueObjects_get_hash_key, sSaveRightValueObjects_equals));
    if(    self!=((void*)0)) {
        result_545->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj161=result_545->sname;
        result_545->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_545->sline_real=self->sline_real;
    }
    __result335__ = gComeFunResultObject = __result_obj__ = result_545;
    come_call_finalizer3(result_545,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result335__;
}

static unsigned int sSaveRightValueObjects_get_hash_key(struct sSaveRightValueObjects* self){
unsigned int result_544;
    result_544=0;
    result_544+=int_get_hash_key(((int)self->sline));
    result_544+=int_get_hash_key(((int)self->sname));
    result_544+=int_get_hash_key(((int)self->sline_real));
    return result_544;
}

static _Bool sSaveRightValueObjects_equals(struct sSaveRightValueObjects* left, struct sSaveRightValueObjects* right){
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

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sRestoreRightValueObjects* __result336__;
void* __right_value433 = (void*)0;
struct sRestoreRightValueObjects* result_548;
void* __right_value434 = (void*)0;
char* __dec_obj162;
struct sRestoreRightValueObjects* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_548=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "struct sRestoreRightValueObjects", sRestoreRightValueObjects_finalize, sRestoreRightValueObjects_clone, sRestoreRightValueObjects_get_hash_key, sRestoreRightValueObjects_equals));
    if(    self!=((void*)0)) {
        result_548->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj162=result_548->sname;
        result_548->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_548->sline_real=self->sline_real;
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_548;
    come_call_finalizer3(result_548,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static unsigned int sRestoreRightValueObjects_get_hash_key(struct sRestoreRightValueObjects* self){
unsigned int result_547;
    result_547=0;
    result_547+=int_get_hash_key(((int)self->sline));
    result_547+=int_get_hash_key(((int)self->sname));
    result_547+=int_get_hash_key(((int)self->sline_real));
    return result_547;
}

static _Bool sRestoreRightValueObjects_equals(struct sRestoreRightValueObjects* left, struct sRestoreRightValueObjects* right){
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

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_551;
struct list$1sNodeph* __result338__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_551=0;    i_551<num_value;    i_551++    ){
        list$1sNodephp_push_back(self,values[i_551]);
    }
    __result338__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result338__;
}

static unsigned int list$1sNodeph_get_hash_key(struct list$1sNodeph* self){
unsigned int result_552;
    result_552=0;
    result_552+=int_get_hash_key(((int)self->head));
    result_552+=int_get_hash_key(((int)self->tail));
    result_552+=int_get_hash_key(((int)self->len));
    result_552+=int_get_hash_key(((int)self->it));
    return result_552;
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

static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
struct sMultipleNode* __result339__;
void* __right_value440 = (void*)0;
struct sMultipleNode* result_554;
void* __right_value441 = (void*)0;
char* __dec_obj163;
void* __right_value442 = (void*)0;
struct list$1sNodeph* __dec_obj164;
struct sMultipleNode* __result340__;
    if(    self==(void*)0) {
        __result339__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result339__;
    }
    result_554=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "struct sMultipleNode", sMultipleNode_finalize, sMultipleNode_clone, sMultipleNode_get_hash_key, sMultipleNode_equals));
    if(    self!=((void*)0)) {
        result_554->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj163=result_554->sname;
        result_554->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_554->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj164=result_554->multiple_node;
        result_554->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(come_call_cloner(list$1sNodephp_clone, self->multiple_node));
        come_call_finalizer3(__dec_obj164,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result340__ = gComeFunResultObject = __result_obj__ = result_554;
    come_call_finalizer3(result_554,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result340__;
}

static unsigned int sMultipleNode_get_hash_key(struct sMultipleNode* self){
unsigned int result_553;
    result_553=0;
    result_553+=int_get_hash_key(((int)self->sline));
    result_553+=int_get_hash_key(((int)self->sname));
    result_553+=int_get_hash_key(((int)self->sline_real));
    result_553+=int_get_hash_key(((int)self->multiple_node));
    return result_553;
}

static _Bool sMultipleNode_equals(struct sMultipleNode* left, struct sMultipleNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !list$1sNodephp_equals(left->multiple_node,right->multiple_node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value444 = (void*)0;
char* sname_555;
int sline_556;
int var_num_stack_558;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
char* __list_values3___559[2];
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1charph* multiple_assign_560;
void* __right_value450 = (void*)0;
void* __right_value451 = (void*)0;
struct sNode* get_return_value_561;
struct buffer* source_562;
char* p_563;
char* head_564;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct buffer* buf_565;
struct buffer* __dec_obj165;
void* __right_value454 = (void*)0;
struct sBlock* if_block_566;
struct buffer* __dec_obj166;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_567;
int elif_num_568;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct list$1sBlockph* elif_blocks_569;
struct sBlock* else_block_570;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* expression_node2_571;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value5;
struct sIfNode* _inf_obj_value5;
void* __right_value463 = (void*)0;
struct sNode* if_node_572;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sNode* load_var_573;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct sNode* _inf_value6;
struct sSaveRightValueObjects* _inf_obj_value6;
void* __right_value469 = (void*)0;
struct sNode* save_right_value_objects_574;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
struct sNode* _inf_value7;
struct sRestoreRightValueObjects* _inf_obj_value7;
void* __right_value472 = (void*)0;
struct sNode* restore_right_value_objects_575;
struct sNode* __list_values4___577[5];
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct list$1sNodeph* multiple_node_576;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value8;
struct sMultipleNode* _inf_obj_value8;
void* __right_value477 = (void*)0;
struct sNode* __result342__;
    sname_555=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_556=info->sline;
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"can't be called exception_throw in conditional expression");
        exit(1);
    }
    parse_sharp_v5(info);
    static int var_num_557=0;
    var_num_557++;
    var_num_stack_558=var_num_557;
    multiple_assign_560=(struct list$1charph*)come_increment_ref_count((__list_values3___559[0]=(char*)come_increment_ref_count(((char*)(__right_value446=xsprintf("come_exception_var_b\%s",((char*)(__right_value445=int_to_string(var_num_stack_558))))))),
__list_values3___559[1]=(char*)come_increment_ref_count(((char*)(__right_value447=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 602, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values3___559)));
    __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value446 = come_decrement_ref_count2(__right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value447 = come_decrement_ref_count2(__right_value447, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_561=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_560),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_562=(struct buffer*)come_increment_ref_count(info->source);
    p_563=info->p;
    head_564=info->head;
    buf_565=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 611, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_format(buf_565,"{ return none(Err); }");
    __dec_obj165=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_565);
    come_call_finalizer3(__dec_obj165,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_556;
    if_block_566=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj166=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_562);
    come_call_finalizer3(__dec_obj166,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_563;
    info->head=head_564;
    info->sline=sline_556;
    elif_expression_nodes_567=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 627, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_568=0;
    elif_blocks_569=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 630, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    else_block_570=((void*)0);
    expression_node2_571=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value459=xsprintf("Err"))),info));
    __right_value459 = come_decrement_ref_count2(__right_value459, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 636, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value5=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value462=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 636, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node2_571),if_block_566,elif_expression_nodes_567,elif_blocks_569,elif_num_568,else_block_570,(_Bool)0,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sIfNode_finalize;
    _inf_value5->clone=(void*)sIfNode_clone;
    _inf_value5->compile=(void*)sIfNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sIfNode_terminated;
    _inf_value5->kind=(void*)sIfNode_kind;
    if_node_572=(struct sNode*)come_increment_ref_count(_inf_value5);
    come_call_finalizer3(__right_value462,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    load_var_573=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value465=xsprintf("come_exception_var_b\%s",((char*)(__right_value464=int_to_string(var_num_stack_558)))))),info));
    __right_value464 = come_decrement_ref_count2(__right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 639, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value6=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value468=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 639, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value6->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value6->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value6->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_574=(struct sNode*)come_increment_ref_count(_inf_value6);
    come_call_finalizer3(__right_value468,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 640, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value7=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value471=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 640, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value7->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value7->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value7->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_575=(struct sNode*)come_increment_ref_count(_inf_value7);
    come_call_finalizer3(__right_value471,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_576=(struct list$1sNodeph*)come_increment_ref_count((__list_values4___577[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_574),
__list_values4___577[1]=(struct sNode*)come_increment_ref_count(get_return_value_561),
__list_values4___577[2]=(struct sNode*)come_increment_ref_count(if_node_572),
__list_values4___577[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_575),
__list_values4___577[4]=(struct sNode*)come_increment_ref_count(load_var_573),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 642, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),5,__list_values4___577)));
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 644, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value8=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value476=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 644, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_576),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sMultipleNode_finalize;
    _inf_value8->clone=(void*)sMultipleNode_clone;
    _inf_value8->compile=(void*)sMultipleNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sMultipleNode_terminated;
    _inf_value8->kind=(void*)sMultipleNode_kind;
    __result342__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value477=_inf_value8));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_555 = come_decrement_ref_count2(sname_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_560,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_561) { get_return_value_561 = come_decrement_ref_count2(get_return_value_561, ((struct sNode*)get_return_value_561)->finalize, ((struct sNode*)get_return_value_561)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(source_562,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_565,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_566,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_567,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_569,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_570,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_571) { expression_node2_571 = come_decrement_ref_count2(expression_node2_571, ((struct sNode*)expression_node2_571)->finalize, ((struct sNode*)expression_node2_571)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_572) { if_node_572 = come_decrement_ref_count2(if_node_572, ((struct sNode*)if_node_572)->finalize, ((struct sNode*)if_node_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_573) { load_var_573 = come_decrement_ref_count2(load_var_573, ((struct sNode*)load_var_573)->finalize, ((struct sNode*)load_var_573)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_574) { save_right_value_objects_574 = come_decrement_ref_count2(save_right_value_objects_574, ((struct sNode*)save_right_value_objects_574)->finalize, ((struct sNode*)save_right_value_objects_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_575) { restore_right_value_objects_575 = come_decrement_ref_count2(restore_right_value_objects_575, ((struct sNode*)restore_right_value_objects_575)->finalize, ((struct sNode*)restore_right_value_objects_575)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_576,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value476,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value477) { __right_value477 = come_decrement_ref_count2(__right_value477, ((struct sNode*)__right_value477)->finalize, ((struct sNode*)__right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result342__;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value478 = (void*)0;
char* sname_578;
int sline_579;
int var_num_stack_581;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
char* __list_values5___582[2];
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct list$1charph* multiple_assign_583;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
struct sNode* get_return_value_584;
struct buffer* source_585;
char* p_586;
char* head_587;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct buffer* buf_588;
struct buffer* __dec_obj167;
_Bool no_comma_589;
void* __right_value488 = (void*)0;
struct sNode* exp_590;
struct buffer* __dec_obj168;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
struct sNode* expression_node2_591;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
struct sNode* cond_592;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
void* __right_value495 = (void*)0;
struct sNode* load_var_593;
void* __right_value496 = (void*)0;
void* __right_value497 = (void*)0;
struct sNode* _inf_value9;
struct sSaveRightValueObjects* _inf_obj_value9;
void* __right_value498 = (void*)0;
struct sNode* save_right_value_objects_594;
void* __right_value499 = (void*)0;
void* __right_value500 = (void*)0;
struct sNode* _inf_value10;
struct sRestoreRightValueObjects* _inf_obj_value10;
void* __right_value501 = (void*)0;
struct sNode* restore_right_value_objects_595;
struct sNode* __list_values6___597[5];
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sNodeph* multiple_node_596;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* _inf_value11;
struct sMultipleNode* _inf_obj_value11;
void* __right_value506 = (void*)0;
struct sNode* __result343__;
    sname_578=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_579=info->sline;
    parse_sharp_v5(info);
    static int var_num_580=0;
    var_num_580++;
    var_num_stack_581=var_num_580;
    multiple_assign_583=(struct list$1charph*)come_increment_ref_count((__list_values5___582[0]=(char*)come_increment_ref_count(((char*)(__right_value480=xsprintf("come_exception_var_c\%s",((char*)(__right_value479=int_to_string(var_num_stack_581))))))),
__list_values5___582[1]=(char*)come_increment_ref_count(((char*)(__right_value481=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph**)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 659, "struct list$1charph", list$1charph_finalize, list$1charph_clone, list$1charph_get_hash_key, list$1charph_equals)),2,__list_values5___582)));
    __right_value479 = come_decrement_ref_count2(__right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value480 = come_decrement_ref_count2(__right_value480, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value481 = come_decrement_ref_count2(__right_value481, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_584=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_583),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_585=(struct buffer*)come_increment_ref_count(info->source);
    p_586=info->p;
    head_587=info->head;
    buf_588=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 668, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    buffer_append_str(buf_588,"puts(Err), exit(0)");
    __dec_obj167=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_588);
    come_call_finalizer3(__dec_obj167,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_579;
    no_comma_589=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_590=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_589;
    __dec_obj168=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_585);
    come_call_finalizer3(__dec_obj168,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_586;
    info->head=head_587;
    info->sline=sline_579;
    expression_node2_591=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value489=xsprintf("Err"))),info));
    __right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cond_592=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_591),(struct sNode*)come_increment_ref_count(exp_590),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_593=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value494=xsprintf("come_exception_var_c\%s",((char*)(__right_value493=int_to_string(var_num_stack_581)))))),info));
    __right_value493 = come_decrement_ref_count2(__right_value493, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __right_value494 = come_decrement_ref_count2(__right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 692, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value9=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value497=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 692, "struct sSaveRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value9->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value9->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value9->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_594=(struct sNode*)come_increment_ref_count(_inf_value9);
    come_call_finalizer3(__right_value497,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 693, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value10=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value500=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 693, "struct sRestoreRightValueObjects*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value10->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value10->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value10->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_595=(struct sNode*)come_increment_ref_count(_inf_value10);
    come_call_finalizer3(__right_value500,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_596=(struct list$1sNodeph*)come_increment_ref_count((__list_values6___597[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_594),
__list_values6___597[1]=(struct sNode*)come_increment_ref_count(get_return_value_584),
__list_values6___597[2]=(struct sNode*)come_increment_ref_count(cond_592),
__list_values6___597[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_595),
__list_values6___597[4]=(struct sNode*)come_increment_ref_count(load_var_593),
list$1sNodeph_initialize_with_values((struct list$1sNodeph**)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 695, "struct list$1sNodeph", list$1sNodeph_finalize, list$1sNodeph_clone, list$1sNodeph_get_hash_key, list$1sNodeph_equals)),5,__list_values6___597)));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 697, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value11=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value505=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 697, "struct sMultipleNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_596),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sMultipleNode_finalize;
    _inf_value11->clone=(void*)sMultipleNode_clone;
    _inf_value11->compile=(void*)sMultipleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sMultipleNode_terminated;
    _inf_value11->kind=(void*)sMultipleNode_kind;
    __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value506=_inf_value11));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_578 = come_decrement_ref_count2(sname_578, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(multiple_assign_583,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_584) { get_return_value_584 = come_decrement_ref_count2(get_return_value_584, ((struct sNode*)get_return_value_584)->finalize, ((struct sNode*)get_return_value_584)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(source_585,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_588,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_590) { exp_590 = come_decrement_ref_count2(exp_590, ((struct sNode*)exp_590)->finalize, ((struct sNode*)exp_590)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(expression_node2_591) { expression_node2_591 = come_decrement_ref_count2(expression_node2_591, ((struct sNode*)expression_node2_591)->finalize, ((struct sNode*)expression_node2_591)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(cond_592) { cond_592 = come_decrement_ref_count2(cond_592, ((struct sNode*)cond_592)->finalize, ((struct sNode*)cond_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_593) { load_var_593 = come_decrement_ref_count2(load_var_593, ((struct sNode*)load_var_593)->finalize, ((struct sNode*)load_var_593)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_594) { save_right_value_objects_594 = come_decrement_ref_count2(save_right_value_objects_594, ((struct sNode*)save_right_value_objects_594)->finalize, ((struct sNode*)save_right_value_objects_594)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_595) { restore_right_value_objects_595 = come_decrement_ref_count2(restore_right_value_objects_595, ((struct sNode*)restore_right_value_objects_595)->finalize, ((struct sNode*)restore_right_value_objects_595)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(multiple_node_596,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value505,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value506) { __right_value506 = come_decrement_ref_count2(__right_value506, ((struct sNode*)__right_value506)->finalize, ((struct sNode*)__right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result343__;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value507 = (void*)0;
char* sname_598;
int sline_599;
int sline_real_600;
void* __right_value508 = (void*)0;
struct sNode* expression_node_601;
void* __right_value509 = (void*)0;
struct sBlock* if_block_602;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_603;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1sBlockph* elif_blocks_604;
int elif_num_605;
struct sBlock* else_block_606;
char* saved_p_607;
int saved_sline_608;
void* __right_value514 = (void*)0;
char* buf_609;
int sline_real_610;
void* __right_value515 = (void*)0;
struct sNode* expression_node_611;
void* __right_value516 = (void*)0;
struct sBlock* elif_block_612;
void* __right_value520 = (void*)0;
struct sBlock* __dec_obj172;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value523 = (void*)0;
struct sNode* result_616;
struct sNode* __result345__;
void* __right_value524 = (void*)0;
struct sNode* __result346__;
    if(    charp_operator_equals(buf,"if")) {
        sname_598=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        sline_599=info->sline;
        sline_real_600=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_601=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_602=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_603=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 720, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        elif_blocks_604=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 722, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        elif_num_605=0;
        else_block_606=((void*)0);
        while(1) {
            saved_p_607=info->p;
            saved_sline_608=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !xisalpha(*info->p)) {
                break;
            }
            parse_sharp_v5(info);
            buf_609=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_609,"else")) {
                sline_real_610=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_611=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodephp_push_back(elif_expression_nodes_603,(struct sNode*)come_increment_ref_count(expression_node_611));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_612=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlockphp_push_back(elif_blocks_604,(struct sBlock*)come_increment_ref_count(elif_block_612));
                    elif_num_605++;
                    if(expression_node_611) { expression_node_611 = come_decrement_ref_count2(expression_node_611, ((struct sNode*)expression_node_611)->finalize, ((struct sNode*)expression_node_611)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer3(elif_block_612,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj172=else_block_606;
                    else_block_606=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj172,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    buf_609 = come_decrement_ref_count2(buf_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                info->sline_real=sline_real_610;
            }
            else {
                info->p=saved_p_607;
                info->sline=saved_sline_608;
                buf_609 = come_decrement_ref_count2(buf_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            buf_609 = come_decrement_ref_count2(buf_609, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 785, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value522=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 785, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node_601),if_block_602,elif_expression_nodes_603,elif_blocks_604,elif_num_605,else_block_606,(_Bool)0,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sIfNode_finalize;
        _inf_value12->clone=(void*)sIfNode_clone;
        _inf_value12->compile=(void*)sIfNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sIfNode_terminated;
        _inf_value12->kind=(void*)sIfNode_kind;
        result_616=(struct sNode*)come_increment_ref_count(_inf_value12);
        come_call_finalizer3(__right_value522,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_600;
        __result345__ = gComeFunResultObject = __result_obj__ = result_616;
        sname_598 = come_decrement_ref_count2(sname_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_601) { expression_node_601 = come_decrement_ref_count2(expression_node_601, ((struct sNode*)expression_node_601)->finalize, ((struct sNode*)expression_node_601)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(if_block_602,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_603,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_604,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_606,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_616) { result_616 = come_decrement_ref_count2(result_616, ((struct sNode*)result_616)->finalize, ((struct sNode*)result_616)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result345__;
        sname_598 = come_decrement_ref_count2(sname_598, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_601) { expression_node_601 = come_decrement_ref_count2(expression_node_601, ((struct sNode*)expression_node_601)->finalize, ((struct sNode*)expression_node_601)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(if_block_602,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_expression_nodes_603,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(elif_blocks_604,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(else_block_606,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_616) { result_616 = come_decrement_ref_count2(result_616, ((struct sNode*)result_616)->finalize, ((struct sNode*)result_616)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result346__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value524=string_node_v7(buf,head,head_sline,info)));
    if(__right_value524) { __right_value524 = come_decrement_ref_count2(__right_value524, ((struct sNode*)__right_value524)->finalize, ((struct sNode*)__right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static struct list$1sBlockph* list$1sBlockphp_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value517 = (void*)0;
struct list_item$1sBlockph* litem_613;
struct sBlock* __dec_obj169;
void* __right_value518 = (void*)0;
struct list_item$1sBlockph* litem_614;
struct sBlock* __dec_obj170;
void* __right_value519 = (void*)0;
struct list_item$1sBlockph* litem_615;
struct sBlock* __dec_obj171;
struct list$1sBlockph* __result344__;
    if(    self->len==0) {
        litem_613=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value517=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1452, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_613->prev=((void*)0);
        litem_613->next=((void*)0);
        __dec_obj169=litem_613->item;
        litem_613->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj169,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_613;
        self->head=litem_613;
    }
    else if(    self->len==1) {
        litem_614=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value518=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1462, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_614->prev=self->head;
        litem_614->next=((void*)0);
        __dec_obj170=litem_614->item;
        litem_614->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj170,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_614;
        self->head->next=litem_614;
    }
    else {
        litem_615=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value519=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1472, "struct list_item$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_615->prev=self->tail;
        litem_615->next=((void*)0);
        __dec_obj171=litem_615->item;
        litem_615->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj171,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_615;
        self->tail=litem_615;
    }
    self->len++;
    __result344__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result344__;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value525 = (void*)0;
char* sname_617;
int sline_618;
void* __right_value526 = (void*)0;
struct sBlock* if_block_619;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct sNode* _inf_value13;
struct sOrStatmentNode* _inf_obj_value13;
void* __right_value533 = (void*)0;
struct sNode* __result349__;
    sname_617=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_618=info->sline;
    parse_sharp_v5(info);
    if_block_619=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 803, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value13=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value528=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 803, "struct sOrStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_619,info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value13->clone=(void*)sOrStatmentNode_clone;
    _inf_value13->compile=(void*)sOrStatmentNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value13->kind=(void*)sOrStatmentNode_kind;
    __result349__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value533=_inf_value13));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_617 = come_decrement_ref_count2(sname_617, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_619,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value528,sOrStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value533) { __right_value533 = come_decrement_ref_count2(__right_value533, ((struct sNode*)__right_value533)->finalize, ((struct sNode*)__right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
struct sOrStatmentNode* __result347__;
void* __right_value529 = (void*)0;
struct sOrStatmentNode* result_621;
void* __right_value530 = (void*)0;
char* __dec_obj173;
void* __right_value531 = (void*)0;
struct sNode* __dec_obj174;
void* __right_value532 = (void*)0;
struct sBlock* __dec_obj175;
struct sOrStatmentNode* __result348__;
    if(    self==(void*)0) {
        __result347__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result347__;
    }
    result_621=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "struct sOrStatmentNode", sOrStatmentNode_finalize, sOrStatmentNode_clone, sOrStatmentNode_get_hash_key, sOrStatmentNode_equals));
    if(    self!=((void*)0)) {
        result_621->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj173=result_621->sname;
        result_621->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_621->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj174=result_621->mExpressionNode;
        result_621->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj175=result_621->mIfBlock;
        result_621->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj175,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result348__ = gComeFunResultObject = __result_obj__ = result_621;
    come_call_finalizer3(result_621,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result348__;
}

static unsigned int sOrStatmentNode_get_hash_key(struct sOrStatmentNode* self){
unsigned int result_620;
    result_620=0;
    result_620+=int_get_hash_key(((int)self->sline));
    result_620+=int_get_hash_key(((int)self->sname));
    result_620+=int_get_hash_key(((int)self->sline_real));
    result_620+=int_get_hash_key(((int)self->mExpressionNode));
    result_620+=int_get_hash_key(((int)self->mIfBlock));
    return result_620;
}

static _Bool sOrStatmentNode_equals(struct sOrStatmentNode* left, struct sOrStatmentNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mExpressionNode,right->mExpressionNode)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mIfBlock,right->mIfBlock)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value534 = (void*)0;
char* sname_622;
int sline_623;
void* __right_value535 = (void*)0;
struct sBlock* if_block_624;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sNode* _inf_value14;
struct sAndStatmentNode* _inf_obj_value14;
void* __right_value542 = (void*)0;
struct sNode* __result352__;
    sname_622=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_623=info->sline;
    parse_sharp_v5(info);
    if_block_624=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 815, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value14=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value537=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 815, "struct sAndStatmentNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(expression_node),if_block_624,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value14->clone=(void*)sAndStatmentNode_clone;
    _inf_value14->compile=(void*)sAndStatmentNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value14->kind=(void*)sAndStatmentNode_kind;
    __result352__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value542=_inf_value14));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_622 = come_decrement_ref_count2(sname_622, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(if_block_624,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value537,sAndStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value542) { __right_value542 = come_decrement_ref_count2(__right_value542, ((struct sNode*)__right_value542)->finalize, ((struct sNode*)__right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
struct sAndStatmentNode* __result350__;
void* __right_value538 = (void*)0;
struct sAndStatmentNode* result_626;
void* __right_value539 = (void*)0;
char* __dec_obj176;
void* __right_value540 = (void*)0;
struct sNode* __dec_obj177;
void* __right_value541 = (void*)0;
struct sBlock* __dec_obj178;
struct sAndStatmentNode* __result351__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_626=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "struct sAndStatmentNode", sAndStatmentNode_finalize, sAndStatmentNode_clone, sAndStatmentNode_get_hash_key, sAndStatmentNode_equals));
    if(    self!=((void*)0)) {
        result_626->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj176=result_626->sname;
        result_626->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_626->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj177=result_626->mExpressionNode;
        result_626->mExpressionNode=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mExpressionNode));
        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj178=result_626->mIfBlock;
        result_626->mIfBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mIfBlock));
        come_call_finalizer3(__dec_obj178,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_626;
    come_call_finalizer3(result_626,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

static unsigned int sAndStatmentNode_get_hash_key(struct sAndStatmentNode* self){
unsigned int result_625;
    result_625=0;
    result_625+=int_get_hash_key(((int)self->sline));
    result_625+=int_get_hash_key(((int)self->sname));
    result_625+=int_get_hash_key(((int)self->sline_real));
    result_625+=int_get_hash_key(((int)self->mExpressionNode));
    result_625+=int_get_hash_key(((int)self->mIfBlock));
    return result_625;
}

static _Bool sAndStatmentNode_equals(struct sAndStatmentNode* left, struct sAndStatmentNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mExpressionNode,right->mExpressionNode)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mIfBlock,right->mIfBlock)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value543 = (void*)0;
char* sname_627;
int sline_628;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
struct sNode* it_node_629;
void* __right_value546 = (void*)0;
struct sNode* conditional_value_630;
void* __right_value547 = (void*)0;
struct sBlock* if_block_631;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_632;
void* __right_value550 = (void*)0;
void* __right_value551 = (void*)0;
struct list$1sBlockph* elif_blocks_633;
int elif_num_634;
struct sBlock* else_block_635;
void* __right_value552 = (void*)0;
struct sBlock* __dec_obj179;
void* __right_value553 = (void*)0;
struct sNode* conditional_value_636;
void* __right_value554 = (void*)0;
struct sBlock* elif_block_637;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sBlock* __dec_obj180;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
struct sNode* _inf_value16;
struct sMatchNode* _inf_obj_value16;
void* __right_value567 = (void*)0;
struct sNode* __result355__;
    sname_627=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_628=info->sline;
    expected_next_character(123,info);
    it_node_629=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_630=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_631=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_632=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 836, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_633=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 837, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_634=0;
    else_block_635=((void*)0);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj179=else_block_635;
            else_block_635=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer3(__dec_obj179,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_636=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodephp_add(elif_expression_nodes_632,(struct sNode*)come_increment_ref_count(conditional_value_636));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_637=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlockphp_add(elif_blocks_633,(struct sBlock*)come_increment_ref_count(elif_block_637));
            elif_num_634++;
            if(conditional_value_636) { conditional_value_636 = come_decrement_ref_count2(conditional_value_636, ((struct sNode*)conditional_value_636)->finalize, ((struct sNode*)conditional_value_636)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(elif_block_637,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_635==((void*)0)) {
        __dec_obj180=else_block_635;
        else_block_635=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 875, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj180,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_635->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_635->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value15=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value560=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 881, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_value_630),if_block_631,elif_expression_nodes_632,elif_blocks_633,elif_num_634,else_block_635,(_Bool)0,info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfNode_finalize;
    _inf_value15->clone=(void*)sIfNode_clone;
    _inf_value15->compile=(void*)sIfNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfNode_terminated;
    _inf_value15->kind=(void*)sIfNode_kind;
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value16=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value562=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 881, "struct sMatchNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_629),(struct sNode*)come_increment_ref_count(_inf_value15),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sMatchNode_finalize;
    _inf_value16->clone=(void*)sMatchNode_clone;
    _inf_value16->compile=(void*)sMatchNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sMatchNode_terminated;
    _inf_value16->kind=(void*)sMatchNode_kind;
    __result355__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value567=_inf_value16));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_627 = come_decrement_ref_count2(sname_627, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_629) { it_node_629 = come_decrement_ref_count2(it_node_629, ((struct sNode*)it_node_629)->finalize, ((struct sNode*)it_node_629)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_value_630) { conditional_value_630 = come_decrement_ref_count2(conditional_value_630, ((struct sNode*)conditional_value_630)->finalize, ((struct sNode*)conditional_value_630)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_631,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_632,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_633,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_635,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value560,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value562,sMatchNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value567) { __right_value567 = come_decrement_ref_count2(__right_value567, ((struct sNode*)__right_value567)->finalize, ((struct sNode*)__right_value567)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
void* __result_obj__=(void*)0;
struct sMatchNode* __result353__;
void* __right_value563 = (void*)0;
struct sMatchNode* result_639;
void* __right_value564 = (void*)0;
char* __dec_obj181;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj182;
void* __right_value566 = (void*)0;
struct sNode* __dec_obj183;
struct sMatchNode* __result354__;
    if(    self==(void*)0) {
        __result353__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result353__;
    }
    result_639=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "struct sMatchNode", sMatchNode_finalize, sMatchNode_clone, sMatchNode_get_hash_key, sMatchNode_equals));
    if(    self!=((void*)0)) {
        result_639->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj181=result_639->sname;
        result_639->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_639->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj182=result_639->it_node;
        result_639->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj183=result_639->match_node;
        result_639->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result354__ = gComeFunResultObject = __result_obj__ = result_639;
    come_call_finalizer3(result_639,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result354__;
}

static unsigned int sMatchNode_get_hash_key(struct sMatchNode* self){
unsigned int result_638;
    result_638=0;
    result_638+=int_get_hash_key(((int)self->sline));
    result_638+=int_get_hash_key(((int)self->sname));
    result_638+=int_get_hash_key(((int)self->sline_real));
    result_638+=int_get_hash_key(((int)self->it_node));
    result_638+=int_get_hash_key(((int)self->match_node));
    return result_638;
}

static _Bool sMatchNode_equals(struct sMatchNode* left, struct sMatchNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->it_node,right->it_node)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->match_node,right->match_node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value568 = (void*)0;
char* sname_640;
int sline_641;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sNode* it_node_642;
void* __right_value571 = (void*)0;
struct sNode* conditional_node_643;
void* __right_value572 = (void*)0;
struct sBlock* if_block_644;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_645;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct list$1sBlockph* elif_blocks_646;
int elif_num_647;
struct sBlock* else_block_648;
char* saved_p_649;
int saved_sline_650;
void* __right_value577 = (void*)0;
char* buf_651;
void* __right_value578 = (void*)0;
struct sNode* expression_node_652;
void* __right_value579 = (void*)0;
struct sBlock* elif_block_653;
void* __right_value580 = (void*)0;
struct sBlock* __dec_obj184;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
struct sBlock* __dec_obj185;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value17;
struct sIfNode* _inf_obj_value17;
void* __right_value587 = (void*)0;
void* __right_value588 = (void*)0;
struct sNode* _inf_value18;
struct sIfMethodNode* _inf_obj_value18;
void* __right_value593 = (void*)0;
struct sNode* result_654;
struct sNode* __result358__;
    sname_640=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_641=info->sline;
    it_node_642=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_643=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_644=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_645=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 897, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_646=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 899, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_647=0;
    else_block_648=((void*)0);
    while(1) {
        saved_p_649=info->p;
        saved_sline_650=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_651=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_651,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_652=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(elif_expression_nodes_645,(struct sNode*)come_increment_ref_count(expression_node_652));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_653=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockphp_push_back(elif_blocks_646,(struct sBlock*)come_increment_ref_count(elif_block_653));
                elif_num_647++;
                if(expression_node_652) { expression_node_652 = come_decrement_ref_count2(expression_node_652, ((struct sNode*)expression_node_652)->finalize, ((struct sNode*)expression_node_652)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_653,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj184=else_block_648;
                else_block_648=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj184,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_651 = come_decrement_ref_count2(buf_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_649;
            info->sline=saved_sline_650;
            buf_651 = come_decrement_ref_count2(buf_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_651 = come_decrement_ref_count2(buf_651, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_648==((void*)0)) {
        __dec_obj185=else_block_648;
        else_block_648=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 960, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj185,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_648->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_648->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value17=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value586=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 966, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node_643),if_block_644,elif_expression_nodes_645,elif_blocks_646,elif_num_647,else_block_648,(_Bool)0,info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sIfNode_finalize;
    _inf_value17->clone=(void*)sIfNode_clone;
    _inf_value17->compile=(void*)sIfNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sIfNode_terminated;
    _inf_value17->kind=(void*)sIfNode_kind;
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value18=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value588=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 966, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_642),(struct sNode*)come_increment_ref_count(_inf_value17),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfMethodNode_finalize;
    _inf_value18->clone=(void*)sIfMethodNode_clone;
    _inf_value18->compile=(void*)sIfMethodNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfMethodNode_terminated;
    _inf_value18->kind=(void*)sIfMethodNode_kind;
    result_654=(struct sNode*)come_increment_ref_count(_inf_value18);
    come_call_finalizer3(__right_value586,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value588,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result358__ = gComeFunResultObject = __result_obj__ = result_654;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_640 = come_decrement_ref_count2(sname_640, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_642) { it_node_642 = come_decrement_ref_count2(it_node_642, ((struct sNode*)it_node_642)->finalize, ((struct sNode*)it_node_642)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_643) { conditional_node_643 = come_decrement_ref_count2(conditional_node_643, ((struct sNode*)conditional_node_643)->finalize, ((struct sNode*)conditional_node_643)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_644,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_645,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_646,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_648,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_654) { result_654 = come_decrement_ref_count2(result_654, ((struct sNode*)result_654)->finalize, ((struct sNode*)result_654)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result358__;
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
struct sIfMethodNode* __result356__;
void* __right_value589 = (void*)0;
struct sIfMethodNode* result_656;
void* __right_value590 = (void*)0;
char* __dec_obj186;
void* __right_value591 = (void*)0;
struct sNode* __dec_obj187;
void* __right_value592 = (void*)0;
struct sNode* __dec_obj188;
struct sIfMethodNode* __result357__;
    if(    self==(void*)0) {
        __result356__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    result_656=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "struct sIfMethodNode", sIfMethodNode_finalize, sIfMethodNode_clone, sIfMethodNode_get_hash_key, sIfMethodNode_equals));
    if(    self!=((void*)0)) {
        result_656->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj186=result_656->sname;
        result_656->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_656->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj187=result_656->it_node;
        result_656->it_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->it_node));
        if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj188=result_656->match_node;
        result_656->match_node=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->match_node));
        if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result357__ = gComeFunResultObject = __result_obj__ = result_656;
    come_call_finalizer3(result_656,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result357__;
}

static unsigned int sIfMethodNode_get_hash_key(struct sIfMethodNode* self){
unsigned int result_655;
    result_655=0;
    result_655+=int_get_hash_key(((int)self->sline));
    result_655+=int_get_hash_key(((int)self->sname));
    result_655+=int_get_hash_key(((int)self->sline_real));
    result_655+=int_get_hash_key(((int)self->it_node));
    result_655+=int_get_hash_key(((int)self->match_node));
    return result_655;
}

static _Bool sIfMethodNode_equals(struct sIfMethodNode* left, struct sIfMethodNode* right){
    if(    !int_equals(left->sline,right->sline)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->sname,right->sname)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->sline_real,right->sline_real)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->it_node,right->it_node)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->match_node,right->match_node)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value594 = (void*)0;
char* sname_657;
int sline_658;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sNode* it_node_659;
void* __right_value597 = (void*)0;
struct sNode* conditional_node_660;
void* __right_value598 = (void*)0;
struct sNode* conditional_node2_661;
void* __right_value599 = (void*)0;
struct sBlock* if_block_662;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_663;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct list$1sBlockph* elif_blocks_664;
int elif_num_665;
struct sBlock* else_block_666;
char* saved_p_667;
int saved_sline_668;
void* __right_value604 = (void*)0;
char* buf_669;
void* __right_value605 = (void*)0;
struct sNode* expression_node_670;
void* __right_value606 = (void*)0;
struct sBlock* elif_block_671;
void* __right_value607 = (void*)0;
struct sBlock* __dec_obj189;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sBlock* __dec_obj190;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct sNode* _inf_value19;
struct sIfNode* _inf_obj_value19;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sNode* _inf_value20;
struct sIfMethodNode* _inf_obj_value20;
void* __right_value616 = (void*)0;
struct sNode* result_672;
struct sNode* __result359__;
    sname_657=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_658=info->sline;
    it_node_659=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_660=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_661=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_660),info));
    parse_sharp_v5(info);
    if_block_662=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_663=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 985, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_664=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 987, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_665=0;
    else_block_666=((void*)0);
    while(1) {
        saved_p_667=info->p;
        saved_sline_668=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_669=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_669,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_670=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(elif_expression_nodes_663,(struct sNode*)come_increment_ref_count(expression_node_670));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_671=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockphp_push_back(elif_blocks_664,(struct sBlock*)come_increment_ref_count(elif_block_671));
                elif_num_665++;
                if(expression_node_670) { expression_node_670 = come_decrement_ref_count2(expression_node_670, ((struct sNode*)expression_node_670)->finalize, ((struct sNode*)expression_node_670)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_671,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj189=else_block_666;
                else_block_666=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj189,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_669 = come_decrement_ref_count2(buf_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_667;
            info->sline=saved_sline_668;
            buf_669 = come_decrement_ref_count2(buf_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_669 = come_decrement_ref_count2(buf_669, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_666==((void*)0)) {
        __dec_obj190=else_block_666;
        else_block_666=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1048, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj190,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_666->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_666->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value19=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value613=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1054, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_661),if_block_662,elif_expression_nodes_663,elif_blocks_664,elif_num_665,else_block_666,(_Bool)0,info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sIfNode_finalize;
    _inf_value19->clone=(void*)sIfNode_clone;
    _inf_value19->compile=(void*)sIfNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sIfNode_terminated;
    _inf_value19->kind=(void*)sIfNode_kind;
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value20=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value615=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1054, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_659),(struct sNode*)come_increment_ref_count(_inf_value19),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfMethodNode_finalize;
    _inf_value20->clone=(void*)sIfMethodNode_clone;
    _inf_value20->compile=(void*)sIfMethodNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfMethodNode_terminated;
    _inf_value20->kind=(void*)sIfMethodNode_kind;
    result_672=(struct sNode*)come_increment_ref_count(_inf_value20);
    come_call_finalizer3(__right_value613,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value615,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result359__ = gComeFunResultObject = __result_obj__ = result_672;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_657 = come_decrement_ref_count2(sname_657, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_659) { it_node_659 = come_decrement_ref_count2(it_node_659, ((struct sNode*)it_node_659)->finalize, ((struct sNode*)it_node_659)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_660) { conditional_node_660 = come_decrement_ref_count2(conditional_node_660, ((struct sNode*)conditional_node_660)->finalize, ((struct sNode*)conditional_node_660)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_661) { conditional_node2_661 = come_decrement_ref_count2(conditional_node2_661, ((struct sNode*)conditional_node2_661)->finalize, ((struct sNode*)conditional_node2_661)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_662,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_663,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_664,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_666,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_672) { result_672 = come_decrement_ref_count2(result_672, ((struct sNode*)result_672)->finalize, ((struct sNode*)result_672)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result359__;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value617 = (void*)0;
char* sname_673;
int sline_674;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
struct sNode* it_node_675;
void* __right_value620 = (void*)0;
struct sNode* conditional_node_676;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sNode* conditional_node2_677;
void* __right_value623 = (void*)0;
struct sBlock* if_block_678;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_679;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1sBlockph* elif_blocks_680;
int elif_num_681;
struct sBlock* else_block_682;
char* saved_p_683;
int saved_sline_684;
void* __right_value628 = (void*)0;
char* buf_685;
void* __right_value629 = (void*)0;
struct sNode* expression_node_686;
void* __right_value630 = (void*)0;
struct sBlock* elif_block_687;
void* __right_value631 = (void*)0;
struct sBlock* __dec_obj191;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sBlock* __dec_obj192;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* _inf_value21;
struct sIfNode* _inf_obj_value21;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sNode* _inf_value22;
struct sIfMethodNode* _inf_obj_value22;
void* __right_value640 = (void*)0;
struct sNode* result_688;
struct sNode* __result360__;
    sname_673=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
    sline_674=info->sline;
    it_node_675=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_676=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_677=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_676),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_678=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_679=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 1073, "struct list$1sNodeph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_blocks_680=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 1075, "struct list$1sBlockph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    elif_num_681=0;
    else_block_682=((void*)0);
    while(1) {
        saved_p_683=info->p;
        saved_sline_684=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_685=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_685,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_686=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodephp_push_back(elif_expression_nodes_679,(struct sNode*)come_increment_ref_count(expression_node_686));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_687=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockphp_push_back(elif_blocks_680,(struct sBlock*)come_increment_ref_count(elif_block_687));
                elif_num_681++;
                if(expression_node_686) { expression_node_686 = come_decrement_ref_count2(expression_node_686, ((struct sNode*)expression_node_686)->finalize, ((struct sNode*)expression_node_686)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer3(elif_block_687,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj191=else_block_682;
                else_block_682=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj191,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                buf_685 = come_decrement_ref_count2(buf_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_683;
            info->sline=saved_sline_684;
            buf_685 = come_decrement_ref_count2(buf_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        buf_685 = come_decrement_ref_count2(buf_685, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_682==((void*)0)) {
        __dec_obj192=else_block_682;
        else_block_682=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1136, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
        come_call_finalizer3(__dec_obj192,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_682->mOmitSemicolon=(_Bool)1;
        list$1sNodephp_push_back(else_block_682->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value21=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value637=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1142, "struct sIfNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(conditional_node2_677),if_block_678,elif_expression_nodes_679,elif_blocks_680,elif_num_681,else_block_682,(_Bool)0,info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sIfNode_finalize;
    _inf_value21->clone=(void*)sIfNode_clone;
    _inf_value21->compile=(void*)sIfNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sline_real=(void*)sNodeBase_sline_real;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sIfNode_terminated;
    _inf_value21->kind=(void*)sIfNode_kind;
    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value22=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value639=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1142, "struct sIfMethodNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sNode*)come_increment_ref_count(it_node_675),(struct sNode*)come_increment_ref_count(_inf_value21),info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfMethodNode_finalize;
    _inf_value22->clone=(void*)sIfMethodNode_clone;
    _inf_value22->compile=(void*)sIfMethodNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfMethodNode_terminated;
    _inf_value22->kind=(void*)sIfMethodNode_kind;
    result_688=(struct sNode*)come_increment_ref_count(_inf_value22);
    come_call_finalizer3(__right_value637,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer3(__right_value639,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result360__ = gComeFunResultObject = __result_obj__ = result_688;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    sname_673 = come_decrement_ref_count2(sname_673, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_675) { it_node_675 = come_decrement_ref_count2(it_node_675, ((struct sNode*)it_node_675)->finalize, ((struct sNode*)it_node_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_676) { conditional_node_676 = come_decrement_ref_count2(conditional_node_676, ((struct sNode*)conditional_node_676)->finalize, ((struct sNode*)conditional_node_676)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_677) { conditional_node2_677 = come_decrement_ref_count2(conditional_node2_677, ((struct sNode*)conditional_node2_677)->finalize, ((struct sNode*)conditional_node2_677)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(if_block_678,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_expression_nodes_679,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(elif_blocks_680,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(else_block_682,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_688) { result_688 = come_decrement_ref_count2(result_688, ((struct sNode*)result_688)->finalize, ((struct sNode*)result_688)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result360__;
}

