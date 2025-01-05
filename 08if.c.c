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
};

struct sMemHeader
{
    unsigned long  int size;
    int allocated;
    struct sMemHeader* next;
    struct sMemHeader* prev;
    struct sMemHeader* free_next;
    char* class_name;
    char* sname[16];
    int sline[16];
    int id[16];
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

struct sMatchNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* it_node;
    struct sNode* match_node;
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

struct list$1sRightValueObjectph* gExceptionRightValueObjects=(void*)0;
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
void come_push_stackframe(char* sname, int sline, int id);
void come_pop_stackframe();
void come_save_stackframe(char* sname, int sline);
static void buffer_finalize(struct buffer* self);
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
void* come_alloc_mem_from_heap_pool(unsigned long  int size, char* sname, int sline, char* class_name);
void come_free_mem_of_heap_pool(void* mem);
char* come_dynamic_typeof(void* mem);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
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
char* __builtin_string(char* str);
_Bool come_is_contained_element(void** array, int len, void* element);
struct buffer* buffer_initialize(struct buffer* self);
struct buffer* buffer_initialize_with_value(struct buffer* self, char* mem, unsigned long  int size);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info, _Bool inline_, _Bool uniq_);
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
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
_Bool check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
char* parse_attribute(struct sInfo* info, _Bool parse_function_attribute);
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
struct sNode* create_nothing_node(struct sInfo* info);
_Bool is_contained_method_generics_types(struct sType* type, struct sInfo* info);
_Bool is_contained_generics_types(struct sType* type, struct sInfo* info);
struct sNode* string_node_v14(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* parse_struct(char* type_name, struct sInfo* info);
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
struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info);
_Bool sIfNode_terminated(struct sIfNode* self);
char* sIfNode_kind(struct sIfNode* self);
_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static char* map$2charphsVarph_begin(struct map$2charphsVarph* self);
static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self);
static char* map$2charphsVarph_next(struct map$2charphsVarph* self);
static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value);
static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item);
static void map$2charphsVarph_rehash(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item);
static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail);
static struct list$1charp* list$1charp_reset(struct list$1charp* self);
static char* list$1charp_begin(struct list$1charp* self);
static _Bool list$1charp_end(struct list$1charp* self);
static char* list$1charp_next(struct list$1charp* self);
static void map$2charphsVarph_finalize(struct map$2charphsVarph* self);
static void sBlock_finalize(struct sBlock* self);
static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self);
static void list$1sBlockphp_finalize(struct list$1sBlockph* self);
static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self);
static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item);
static void list$1sBlockph_finalize(struct list$1sBlockph* self);
static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sMatchNode_terminated(struct sMatchNode* self);
char* sMatchNode_kind(struct sMatchNode* self);
_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info);
static struct list$1sVarph* list$1sVarph_initialize(struct list$1sVarph* self);
static void list$1sVarphp_finalize(struct list$1sVarph* self);
static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self);
static void list$1sVarph_finalize(struct list$1sVarph* self);
static struct list$1sVarph* list$1sVarph_add(struct list$1sVarph* self, struct sVar* item);
static struct sVar* sVar_clone(struct sVar* self);
struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info);
_Bool sIfMethodNode_terminated(struct sIfMethodNode* self);
char* sIfMethodNode_kind(struct sIfMethodNode* self);
_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info);
struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self);
char* sOrStatmentNode_kind(struct sOrStatmentNode* self);
_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info);
struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info);
_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self);
char* sAndStatmentNode_kind(struct sAndStatmentNode* self);
_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info);
struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info);
_Bool sMultipleNode_terminated(struct sMultipleNode* self);
char* sMultipleNode_kind(struct sMultipleNode* self);
_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info);
_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self);
char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self);
_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info);
static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self);
static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self);
static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self);
struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info);
_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self);
char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self);
_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info);
struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info);
static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values);
struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info);
struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info);
static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self);
static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self);
static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self);
static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self);
static void sMultipleNode_finalize(struct sMultipleNode* self);
static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self);
struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info);
static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item);
struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info);
static void sOrStatmentNode_finalize(struct sOrStatmentNode* self);
static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self);
struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info);
static void sAndStatmentNode_finalize(struct sAndStatmentNode* self);
static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self);
struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info);
static void sMatchNode_finalize(struct sMatchNode* self);
static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self);
struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info);
struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info);
static void sIfNode_finalize(struct sIfNode* self);
static struct sIfNode* sIfNode_clone(struct sIfNode* self);
static void sIfMethodNode_finalize(struct sIfMethodNode* self);
static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self);
// uniq global variable
// inline function
static _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static unsigned char* buffer_head_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
unsigned char* __result50__;
    __result50__ = gComeFunResultObject = __result_obj__ = self->buf;
    gComeFunResultObject = (void*)0;
    return __result50__;
}
static struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct buffer* result_108;
struct buffer* __result51__;
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3635, "buffer"))));
    buffer_append(result_108,self,sizeof(char)*len);
    __result51__ = gComeFunResultObject = __result_obj__ = result_108;
    /*i*/come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* result_109;
int i_110;
struct buffer* __result52__;
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3642, "buffer"))));
    for(    i_110=0;    i_110<len;    i_110++    ){
        buffer_append(result_109,self[i_110],strlen(self[i_110]));
    }
    __result52__ = gComeFunResultObject = __result_obj__ = result_109;
    /*i*/come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}
static struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct buffer* result_111;
struct buffer* __result53__;
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3651, "buffer"))));
    buffer_append(result_111,(char*)self,sizeof(short)*len);
    __result53__ = gComeFunResultObject = __result_obj__ = result_111;
    /*i*/come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* result_112;
struct buffer* __result54__;
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3658, "buffer"))));
    buffer_append(result_112,(char*)self,sizeof(int)*len);
    __result54__ = gComeFunResultObject = __result_obj__ = result_112;
    /*i*/come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}
static struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct buffer* result_113;
struct buffer* __result55__;
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3665, "buffer"))));
    buffer_append(result_113,(char*)self,sizeof(long)*len);
    __result55__ = gComeFunResultObject = __result_obj__ = result_113;
    /*i*/come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* result_114;
struct buffer* __result56__;
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3672, "buffer"))));
    buffer_append(result_114,(char*)self,sizeof(float)*len);
    __result56__ = gComeFunResultObject = __result_obj__ = result_114;
    /*i*/come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}
static struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct buffer* result_115;
struct buffer* __result57__;
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3679, "buffer"))));
    buffer_append(result_115,(char*)self,sizeof(double)*len);
    __result57__ = gComeFunResultObject = __result_obj__ = result_115;
    /*i*/come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value46 = (void*)0;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1char* __result60__;
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4007, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result60__;
}
static struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
void* __right_value51 = (void*)0;
struct smart_pointer$1char* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4012, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value52 = (void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct smart_pointer$1short* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4017, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
void* __right_value57 = (void*)0;
struct smart_pointer$1int* __result65__;
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4022, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result65__;
}
static struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
void* __right_value59 = (void*)0;
void* __right_value60 = (void*)0;
struct smart_pointer$1long* __result67__;
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4027, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result67__;
}
static struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value61 = (void*)0;
void* __right_value62 = (void*)0;
struct buffer* buf_121;
void* __right_value63 = (void*)0;
void* __right_value64 = (void*)0;
struct smart_pointer$1char* __result68__;
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4060, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4062, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
    /*i*/come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result68__;
}
static struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value65 = (void*)0;
void* __right_value66 = (void*)0;
struct buffer* buf_122;
void* __right_value67 = (void*)0;
void* __right_value68 = (void*)0;
struct smart_pointer$1charp* __result70__;
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4067, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4069, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
    /*i*/come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result70__;
}
static struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value69 = (void*)0;
void* __right_value70 = (void*)0;
struct buffer* buf_123;
void* __right_value71 = (void*)0;
void* __right_value72 = (void*)0;
struct smart_pointer$1short* __result71__;
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4074, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4076, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
    /*i*/come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result71__;
}
static struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
void* __right_value74 = (void*)0;
struct buffer* buf_124;
void* __right_value75 = (void*)0;
void* __right_value76 = (void*)0;
struct smart_pointer$1int* __result72__;
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4081, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4083, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
    /*i*/come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result72__;
}
static struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value78 = (void*)0;
struct buffer* buf_125;
void* __right_value79 = (void*)0;
void* __right_value80 = (void*)0;
struct smart_pointer$1long* __result73__;
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4088, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4090, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
    /*i*/come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result73__;
}
static struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value81 = (void*)0;
void* __right_value82 = (void*)0;
struct buffer* buf_126;
void* __right_value83 = (void*)0;
void* __right_value84 = (void*)0;
struct smart_pointer$1float* __result75__;
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4095, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4097, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
    /*i*/come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result75__;
}
static struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value85 = (void*)0;
void* __right_value86 = (void*)0;
struct buffer* buf_127;
void* __right_value87 = (void*)0;
void* __right_value88 = (void*)0;
struct smart_pointer$1double* __result77__;
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4102, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4104, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
    /*i*/come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4109, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4114, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4119, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4124, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4129, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4134, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4139, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4144, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4149, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4154, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4159, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4164, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4169, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4174, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result112__;
}
static unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_185;
int i_186;
    result_185=(_Bool)0;
    for(    i_186=0;    i_186<len;    i_186++    ){
        if(        strncmp(self[i_186],str,strlen(self[i_186]))==0) {
            result_185=(_Bool)1;
            break;
        }
    }
    return result_185;
}
static unsigned long  int shortpa_length(short* self, unsigned long  int len){
    return len;
}
static unsigned long  int intpa_length(int* self, unsigned long  int len){
    return len;
}
static unsigned long  int longpa_length(long* self, unsigned long  int len){
    return len;
}
static unsigned long  int floatpa_length(float* self, unsigned long  int len){
    return len;
}
static unsigned long  int doublepa_length(double* self, unsigned long  int len){
    return len;
}
static char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value197 = (void*)0;
char* __result153__;
    __result153__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value197=xsprintf(msg,self)));
    /* U11 */__right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    /* U11 */__right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            /*G*/ __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void va_list_finalize(va_list self){
}

static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj14;
struct smart_pointer$1char* __result59__;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result59__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result59__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj15;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj15=self->memory;
            come_call_finalizer3(__dec_obj15,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj16;
struct smart_pointer$1short* __result62__;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result62__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result62__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj17;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj17=self->memory;
            come_call_finalizer3(__dec_obj17,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj18;
struct smart_pointer$1int* __result64__;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result64__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj19;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj19=self->memory;
            come_call_finalizer3(__dec_obj19,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj20;
struct smart_pointer$1long* __result66__;
    __dec_obj20=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj20,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result66__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result66__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj21;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj21=self->memory;
            come_call_finalizer3(__dec_obj21,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj22;
struct smart_pointer$1charp* __result69__;
    __dec_obj22=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj22,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj23;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj23=self->memory;
            come_call_finalizer3(__dec_obj23,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj24;
struct smart_pointer$1float* __result74__;
    __dec_obj24=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj24,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj25;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj25=self->memory;
            come_call_finalizer3(__dec_obj25,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj26;
struct smart_pointer$1double* __result76__;
    __dec_obj26=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj26,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result76__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj27;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj27=self->memory;
            come_call_finalizer3(__dec_obj27,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_128;
struct list$1char* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_128=0;    i_128<num_value;    i_128++    ){
        list$1char_push_back(self,values[i_128]);
    }
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value90 = (void*)0;
struct list_item$1char* litem_129;
void* __right_value91 = (void*)0;
struct list_item$1char* litem_130;
void* __right_value92 = (void*)0;
struct list_item$1char* litem_131;
struct list$1char* __result78__;
    if(    self->len==0) {
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1142, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1152, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1162, "list_item$1char"))));
        litem_131->prev=self->tail;
        litem_131->next=((void*)0);
        litem_131->item=item;
        self->tail->next=litem_131;
        self->tail=litem_131;
    }
    self->len++;
    __result78__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result78__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_132;
struct list_item$1char* prev_it_133;
    it_132=self->head;
    while(it_132!=((void*)0)) {
        prev_it_133=it_132;
        it_132=it_132->next;
        /*i*/come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}

static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_134;
struct list$1charp* __result82__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_134=0;    i_134<num_value;    i_134++    ){
        list$1charp_push_back(self,values[i_134]);
    }
    __result82__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
struct list_item$1charp* litem_135;
void* __right_value96 = (void*)0;
struct list_item$1charp* litem_136;
void* __right_value97 = (void*)0;
struct list_item$1charp* litem_137;
struct list$1charp* __result81__;
    if(    self->len==0) {
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1142, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1152, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1162, "list_item$1charp"))));
        litem_137->prev=self->tail;
        litem_137->next=((void*)0);
        litem_137->item=item;
        self->tail->next=litem_137;
        self->tail=litem_137;
    }
    self->len++;
    __result81__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_138;
struct list_item$1charp* prev_it_139;
    it_138=self->head;
    while(it_138!=((void*)0)) {
        prev_it_139=it_138;
        it_138=it_138->next;
        /*i*/come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}

static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_140;
struct list$1short* __result85__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_140=0;    i_140<num_value;    i_140++    ){
        list$1short_push_back(self,values[i_140]);
    }
    __result85__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result85__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value100 = (void*)0;
struct list_item$1short* litem_141;
void* __right_value101 = (void*)0;
struct list_item$1short* litem_142;
void* __right_value102 = (void*)0;
struct list_item$1short* litem_143;
struct list$1short* __result84__;
    if(    self->len==0) {
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1142, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1152, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1162, "list_item$1short"))));
        litem_143->prev=self->tail;
        litem_143->next=((void*)0);
        litem_143->item=item;
        self->tail->next=litem_143;
        self->tail=litem_143;
    }
    self->len++;
    __result84__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result84__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_144;
struct list_item$1short* prev_it_145;
    it_144=self->head;
    while(it_144!=((void*)0)) {
        prev_it_145=it_144;
        it_144=it_144->next;
        /*i*/come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}

static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_146;
struct list$1int* __result88__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_146=0;    i_146<num_value;    i_146++    ){
        list$1int_push_back(self,values[i_146]);
    }
    __result88__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result88__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct list_item$1int* litem_147;
void* __right_value106 = (void*)0;
struct list_item$1int* litem_148;
void* __right_value107 = (void*)0;
struct list_item$1int* litem_149;
struct list$1int* __result87__;
    if(    self->len==0) {
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1142, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1152, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1162, "list_item$1int"))));
        litem_149->prev=self->tail;
        litem_149->next=((void*)0);
        litem_149->item=item;
        self->tail->next=litem_149;
        self->tail=litem_149;
    }
    self->len++;
    __result87__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_150;
struct list_item$1int* prev_it_151;
    it_150=self->head;
    while(it_150!=((void*)0)) {
        prev_it_151=it_150;
        it_150=it_150->next;
        /*i*/come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}

static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_152;
struct list$1long* __result91__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_152=0;    i_152<num_value;    i_152++    ){
        list$1long_push_back(self,values[i_152]);
    }
    __result91__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result91__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
struct list_item$1long* litem_153;
void* __right_value111 = (void*)0;
struct list_item$1long* litem_154;
void* __right_value112 = (void*)0;
struct list_item$1long* litem_155;
struct list$1long* __result90__;
    if(    self->len==0) {
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1142, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1152, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1162, "list_item$1long"))));
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

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_156;
struct list_item$1long* prev_it_157;
    it_156=self->head;
    while(it_156!=((void*)0)) {
        prev_it_157=it_156;
        it_156=it_156->next;
        /*i*/come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}

static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_158;
struct list$1float* __result94__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_158=0;    i_158<num_value;    i_158++    ){
        list$1float_push_back(self,values[i_158]);
    }
    __result94__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result94__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
struct list_item$1float* litem_159;
void* __right_value116 = (void*)0;
struct list_item$1float* litem_160;
void* __right_value117 = (void*)0;
struct list_item$1float* litem_161;
struct list$1float* __result93__;
    if(    self->len==0) {
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1142, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1152, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1162, "list_item$1float"))));
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

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_162;
struct list_item$1float* prev_it_163;
    it_162=self->head;
    while(it_162!=((void*)0)) {
        prev_it_163=it_162;
        it_162=it_162->next;
        /*i*/come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}

static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_164;
struct list$1double* __result97__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_164=0;    i_164<num_value;    i_164++    ){
        list$1double_push_back(self,values[i_164]);
    }
    __result97__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result97__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value120 = (void*)0;
struct list_item$1double* litem_165;
void* __right_value121 = (void*)0;
struct list_item$1double* litem_166;
void* __right_value122 = (void*)0;
struct list_item$1double* litem_167;
struct list$1double* __result96__;
    if(    self->len==0) {
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1142, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1152, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1162, "list_item$1double"))));
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

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_168;
struct list_item$1double* prev_it_169;
    it_168=self->head;
    while(it_168!=((void*)0)) {
        prev_it_169=it_168;
        it_168=it_168->next;
        /*i*/come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}

static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value125 = (void*)0;
struct vector$1char* __result99__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1936, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result99__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result99__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_170;
    if(    0) {
        for(        i_170=0;        i_170<self->len;        i_170++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value128 = (void*)0;
struct vector$1charp* __result101__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1936, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result101__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            /* U13 */self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value131 = (void*)0;
struct vector$1short* __result103__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1936, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result103__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result103__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_172;
    if(    0) {
        for(        i_172=0;        i_172<self->len;        i_172++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value134 = (void*)0;
struct vector$1int* __result105__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1936, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result105__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_173;
    if(    0) {
        for(        i_173=0;        i_173<self->len;        i_173++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value137 = (void*)0;
struct vector$1long* __result107__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1936, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_174;
    if(    0) {
        for(        i_174=0;        i_174<self->len;        i_174++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value140 = (void*)0;
struct vector$1float* __result109__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1936, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_175;
    if(    0) {
        for(        i_175=0;        i_175<self->len;        i_175++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value143 = (void*)0;
struct vector$1double* __result111__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1936, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result111__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result111__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_176;
    if(    0) {
        for(        i_176=0;        i_176<self->len;        i_176++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result149__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result149__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result149__;
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_208;
struct list_item$1charph* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        /*i*/come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            /*G*/ __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1charph* list$1charph_push_back(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value192 = (void*)0;
struct list_item$1charph* litem_213;
char* __dec_obj29;
void* __right_value193 = (void*)0;
struct list_item$1charph* litem_214;
char* __dec_obj30;
void* __right_value194 = (void*)0;
struct list_item$1charph* litem_215;
char* __dec_obj31;
struct list$1charph* __result151__;
    if(    self->len==0) {
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1142, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1162, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

struct sIfNode* sIfNode_initialize(struct sIfNode* self, struct sNode* expression_node, struct sBlock* if_block, struct list$1sNodeph* elif_expression_nodes, struct list$1sBlockph* elif_blocks, int elif_num, struct sBlock* else_block, _Bool guard_, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
void* __right_value247 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value271 = (void*)0;
struct sBlock* __dec_obj68;
void* __right_value272 = (void*)0;
struct list$1sNodeph* __dec_obj69;
void* __right_value279 = (void*)0;
struct list$1sBlockph* __dec_obj74;
void* __right_value280 = (void*)0;
struct sBlock* __dec_obj75;
struct sBlock* __dec_obj76;
struct sIfNode* __result237__;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    /* U1 */ if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj68=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer3(__dec_obj68,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj69=self->mElifExpressionNodes;
    self->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(elif_expression_nodes));
    come_call_finalizer3(__dec_obj69,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj74=self->mElifBlocks;
    self->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(elif_blocks));
    come_call_finalizer3(__dec_obj74,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    self->mElifNum=elif_num;
    self->mGuard=guard_;
    ((void*)0);
    if(    else_block) {
        __dec_obj75=self->mElseBlock;
        self->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(else_block));
        come_call_finalizer3(__dec_obj75,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj76=self->mElseBlock;
        self->mElseBlock=((void*)0);
        come_call_finalizer3(__dec_obj76,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result237__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result237__;
}

_Bool sIfNode_terminated(struct sIfNode* self){
    return (_Bool)1;
}

char* sIfNode_kind(struct sIfNode* self){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
char* __result238__;
    __result238__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value281=__builtin_string("sIfNode")));
    /* U11 */__right_value281 = come_decrement_ref_count2(__right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

_Bool sIfNode_compile(struct sIfNode* self, struct sInfo* info){
_Bool existance_of_result_value_324;
int i_325;
void* __right_value282 = (void*)0;
_Bool _if_conditional1;
struct sBlock* else_block_329;
int elif_num_330;
_Bool guard__331;
char* if_result_var_name_332;
void* __right_value283 = (void*)0;
void* __right_value284 = (void*)0;
struct sType* if_result_type_333;
void* __right_value285 = (void*)0;
char* __dec_obj83;
void* __right_value315 = (void*)0;
struct sVar* var__347;
void* __right_value316 = (void*)0;
struct sNode* expression_node_348;
int sline_349;
char* sname_350;
_Bool comma_instead_of_semicolon_before_351;
_Bool Value_352;
_Bool __result252__;
struct sBlock* if_block_353;
_Bool normal_if_354;
void* __right_value317 = (void*)0;
struct CVALUE* conditional_value_355;
struct sVar* var__356;
int num_if_conditional_stack_358;
void* __right_value318 = (void*)0;
struct CVALUE* conditional_value_359;
struct sVar* var__360;
int i_361;
void* __right_value319 = (void*)0;
struct sNode* expression_node2_362;
_Bool comma_instead_of_semicolon_before_366;
_Bool Value_367;
_Bool __result255__;
void* __right_value320 = (void*)0;
struct sBlock* elif_node_block_368;
_Bool normal_if_369;
void* __right_value321 = (void*)0;
struct CVALUE* conditional_value_370;
void* __right_value322 = (void*)0;
struct CVALUE* conditional_value_371;
int num_elif_conditional_stack_373;
struct sVar* var__374;
int __exception_result_var_b1;
void* __right_value323 = (void*)0;
struct sNode* result_node_375;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct sNode* __dec_obj109;
_Bool Value_376;
_Bool __result256__;
void* __right_value326 = (void*)0;
struct CVALUE* come_value2_377;
void* __right_value327 = (void*)0;
struct sType* __dec_obj110;
char* __dec_obj114;
_Bool __result258__;
    existance_of_result_value_324=(_Bool)1;
    {
        if(        !self->mIfBlock->mOmitSemicolon) {
            existance_of_result_value_324=(_Bool)0;
        }
        for(        i_325=0;        i_325<self->mElifNum;        i_325++        ){
            if(            (_if_conditional1=(!((struct sBlock*)(__right_value282=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_325)))->mOmitSemicolon)),            /*f*/come_call_finalizer3(__right_value282,sBlock_finalize, 0, 1, 0, 0, (void*)0),
            _if_conditional1) {
                existance_of_result_value_324=(_Bool)0;
            }
        }
        if(        self->mElseBlock&&!self->mElseBlock->mOmitSemicolon) {
            existance_of_result_value_324=(_Bool)0;
        }
    }
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"In conditional operator comelang can't use if statment");
        return (_Bool)0;
    }
    else_block_329=self->mElseBlock;
    elif_num_330=self->mElifNum;
    guard__331=self->mGuard;
    if_result_var_name_332=(char*)come_increment_ref_count(info->if_result_var_name);
    if(    existance_of_result_value_324) {
        if_result_type_333=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "08if.c", 69, "sType")),"void*",(_Bool)0,info));
        static int var_num_334=0;
        __dec_obj83=info->if_result_var_name;
        info->if_result_var_name=(char*)come_increment_ref_count(xsprintf("__if_result__%d",var_num_334++));
        /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_variable_to_table(info->if_result_var_name,(struct sType*)come_increment_ref_count(sType_clone(if_result_type_333)),info);
        var__347=get_variable_from_table(info->lv_table,info->if_result_var_name);
        add_come_code_at_function_head(info,"%s = (void*)0;\n",((char*)(__right_value316=make_define_var(var__347->mType,var__347->mCValueName,(_Bool)0,info))));
        /* U11 */__right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(if_result_type_333,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    expression_node_348=self->mExpressionNode;
    sline_349=info->sline;
    sname_350=info->sname;
    add_come_code(info,"if(");
    comma_instead_of_semicolon_before_351=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)1;
    info->without_semicolon=(_Bool)1;
    Value_352=node_compile(expression_node_348,info);
    if(    !Value_352) {
        __result252__ = (_Bool)0;
        /* U13 */if_result_var_name_332 = come_decrement_ref_count2(if_result_var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        return __result252__;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_351;
    if_block_353=self->mIfBlock;
    normal_if_354=(_Bool)1;
    if(    existance_free_right_value_objects(info)) {
        normal_if_354=(_Bool)0;
    }
    if(    normal_if_354) {
        conditional_value_355=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__331) {
            var__356=conditional_value_355->var;
            if(            var__356) {
                var__356->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"%s) {\n",conditional_value_355->c_value);
        /*i*/come_call_finalizer3(conditional_value_355,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        static int num_if_conditional_357=0;
        add_come_code_at_function_head(info,"_Bool _if_conditional%d;\n",++num_if_conditional_357);
        num_if_conditional_stack_358=num_if_conditional_357;
        conditional_value_359=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        guard__331) {
            var__360=conditional_value_359->var;
            if(            var__360) {
                var__360->mType->mGuardValue=(_Bool)0;
            }
        }
        add_come_code(info,"(_if_conditional%d=(%s)),",num_if_conditional_357,conditional_value_359->c_value);
        free_right_value_objects(info,(_Bool)1);
        add_come_code(info,"_if_conditional%d) {\n",num_if_conditional_stack_358);
        /*i*/come_call_finalizer3(conditional_value_359,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_block(if_block_353,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_324);
    add_come_code(info,"}\n");
    if(    elif_num_330>0) {
        for(        i_361=0;        i_361<elif_num_330;        i_361++        ){
            expression_node2_362=((struct sNode*)come_null_check(((struct sNode*)(__right_value319=list$1sNodephp_operator_load_element(self->mElifExpressionNodes,i_361))), "08if.c", 147, 0));
            if(__right_value319) { __right_value319 = come_decrement_ref_count2(__right_value319, ((struct sNode*)__right_value319)->finalize, ((struct sNode*)__right_value319)->_protocol_obj, 1, 0, 0, (void*)0); } 
            add_come_code(info,"else if(");
            comma_instead_of_semicolon_before_366=info->comma_instead_of_semicolon;
            info->comma_instead_of_semicolon=(_Bool)1;
            info->without_semicolon=(_Bool)1;
            Value_367=node_compile(expression_node2_362,info);
            if(            !Value_367) {
                __result255__ = (_Bool)0;
                /* U13 */if_result_var_name_332 = come_decrement_ref_count2(if_result_var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result255__;
            }
            else {
            }
            info->without_semicolon=(_Bool)0;
            info->comma_instead_of_semicolon=comma_instead_of_semicolon_before_366;
            elif_node_block_368=((struct sBlock*)come_null_check(((struct sBlock*)(__right_value320=list$1sBlockphp_operator_load_element(self->mElifBlocks,i_361))), "08if.c", 160, 1));
            /*g*/come_call_finalizer3(__right_value320,sBlock_finalize, 0, 1, 0, 0, (void*)0);
            normal_if_369=(_Bool)1;
            if(            existance_free_right_value_objects(info)) {
                normal_if_369=(_Bool)0;
            }
            if(            normal_if_369) {
                conditional_value_370=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                add_come_code(info,"%s) {\n",conditional_value_370->c_value);
                /*i*/come_call_finalizer3(conditional_value_370,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                conditional_value_371=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                dec_stack_ptr(1,info);
                static int num_elif_conditional_372=0;
                add_come_code_at_function_head(info,"_Bool _elif_conditional%d;\n",++num_elif_conditional_372);
                num_elif_conditional_stack_373=num_elif_conditional_372;
                add_come_code(info,"(_elif_conditional%d=(%s)),",num_elif_conditional_372,conditional_value_371->c_value);
                free_right_value_objects(info,(_Bool)1);
                add_come_code(info,"_elif_conditional%d) {\n",num_elif_conditional_stack_373);
                /*i*/come_call_finalizer3(conditional_value_371,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            }
            transpile_block(elif_node_block_368,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_324);
            add_come_code(info,"}\n");
        }
    }
    if(    else_block_329) {
        add_come_code(info,"else {\n");
        transpile_block(else_block_329,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,existance_of_result_value_324);
        add_come_code(info,"}\n");
    }
    transpiler_clear_last_code(info);
    if(    existance_of_result_value_324) {
        var__374=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 207, 2),__exception_result_var_b1=assert_v2(var__374!=((void*)0)), come_pop_stackframe(), __exception_result_var_b1);
        result_node_375=(struct sNode*)come_increment_ref_count(create_load_var(info->if_result_var_name,info));
        __dec_obj109=result_node_375;
        result_node_375=(struct sNode*)come_increment_ref_count(cast_node((struct sType*)come_increment_ref_count(sType_clone(var__374->mType)),(struct sNode*)come_increment_ref_count(result_node_375),info));
        /* U1 */ if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); };
        Value_376=node_compile(result_node_375,info);
        if(        !Value_376) {
            __result256__ = (_Bool)0;
            if(result_node_375) { result_node_375 = come_decrement_ref_count2(result_node_375, ((struct sNode*)result_node_375)->finalize, ((struct sNode*)result_node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /* U13 */if_result_var_name_332 = come_decrement_ref_count2(if_result_var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result256__;
        }
        else {
        }
        come_value2_377=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        __dec_obj110=come_value2_377->type;
        come_value2_377->type=(struct sType*)come_increment_ref_count(sType_clone(var__374->mType));
        come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_377));
        if(result_node_375) { result_node_375 = come_decrement_ref_count2(result_node_375, ((struct sNode*)result_node_375)->finalize, ((struct sNode*)result_node_375)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value2_377,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __dec_obj114=info->if_result_var_name;
    info->if_result_var_name=(char*)come_increment_ref_count(if_result_var_name_332);
    /*G*/ __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result258__ = (_Bool)1;
    /* U13 */if_result_var_name_332 = come_decrement_ref_count2(if_result_var_name_332, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result258__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj32;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj32=self->sname;
            /*G*/ __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result198__;
void* __right_value246 = (void*)0;
struct sNode* result_247;
struct sNode* __result199__;
    if(    self==(void*)0) {
        __result198__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    result_247=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_247->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_247->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_247->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_247->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_247->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_247->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_247->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_247->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_247->kind=self->kind;
    }
    __result199__ = gComeFunResultObject = __result_obj__ = result_247;
    if(result_247) { result_247 = come_decrement_ref_count2(result_247, ((struct sNode*)result_247)->finalize, ((struct sNode*)result_247)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result199__;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result200__;
void* __right_value248 = (void*)0;
struct sBlock* result_248;
void* __right_value255 = (void*)0;
struct list$1sNodeph* __dec_obj38;
void* __right_value270 = (void*)0;
struct sVarTable* __dec_obj65;
struct sBlock* __result232__;
    if(    self==(void*)0) {
        __result200__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result200__;
    }
    result_248=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj38=result_248->mNodes;
        result_248->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj38,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj65=result_248->mVarTable;
        result_248->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj65,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_248;
    /*i*/come_call_finalizer3(result_248,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result201__;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct list$1sNodeph* result_251;
struct list_item$1sNodeph* it_252;
void* __right_value254 = (void*)0;
struct list$1sNodeph* __result204__;
    if(    self==((void*)0)) {
        __result201__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    result_251=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_252=self->head;
    while(it_252!=((void*)0)) {
        list$1sNodeph_add(result_251,(struct sNode*)come_increment_ref_count(sNode_clone(it_252->item)));
        it_252=it_252->next;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_251;
    /*i*/come_call_finalizer3(result_251,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result202__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_249;
struct list_item$1sNodeph* prev_it_250;
    it_249=self->head;
    while(it_249!=((void*)0)) {
        prev_it_250=it_249;
        it_249=it_249->next;
        /*i*/come_call_finalizer3(prev_it_250,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj34;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj34=self->item;
            /* U1 */ if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, ((struct sNode*)__dec_obj34)->finalize, ((struct sNode*)__dec_obj34)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
struct list_item$1sNodeph* litem_253;
struct sNode* __dec_obj35;
void* __right_value252 = (void*)0;
struct list_item$1sNodeph* litem_254;
struct sNode* __dec_obj36;
void* __right_value253 = (void*)0;
struct list_item$1sNodeph* litem_255;
struct sNode* __dec_obj37;
struct list$1sNodeph* __result203__;
    if(    self->len==0) {
        litem_253=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value251=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1072, "list_item$1sNodeph"))));
        litem_253->prev=((void*)0);
        litem_253->next=((void*)0);
        __dec_obj35=litem_253->item;
        litem_253->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, ((struct sNode*)__dec_obj35)->finalize, ((struct sNode*)__dec_obj35)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_253;
        self->head=litem_253;
    }
    else if(    self->len==1) {
        litem_254=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value252=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1082, "list_item$1sNodeph"))));
        litem_254->prev=self->head;
        litem_254->next=((void*)0);
        __dec_obj36=litem_254->item;
        litem_254->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_254;
        self->head->next=litem_254;
    }
    else {
        litem_255=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value253=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1092, "list_item$1sNodeph"))));
        litem_255->prev=self->tail;
        litem_255->next=((void*)0);
        __dec_obj37=litem_255->item;
        litem_255->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_255;
        self->tail=litem_255;
    }
    self->len++;
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_256;
struct list_item$1sNodeph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*i*/come_call_finalizer3(prev_it_257,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result205__;
void* __right_value256 = (void*)0;
struct sVarTable* result_258;
void* __right_value269 = (void*)0;
struct map$2charphsVarph* __dec_obj64;
struct sVarTable* __result231__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_258=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj64=result_258->mVars;
        result_258->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj64,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_258->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_258->mParent=self->mParent;
    }
    if(    self!=((void*)0)) {
        result_258->mID=self->mID;
    }
    __result231__ = gComeFunResultObject = __result_obj__ = result_258;
    /*i*/come_call_finalizer3(result_258,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result206__;
void* __right_value257 = (void*)0;
void* __right_value263 = (void*)0;
struct map$2charphsVarph* result_268;
void* __right_value264 = (void*)0;
void* __right_value265 = (void*)0;
struct list$1charp* __dec_obj63;
char* it_271;
struct sVar* default_value_274;
struct sVar* it2_277;
struct map$2charphsVarph* __result230__;
default_value_274 = (void*)0;
    if(    self==((void*)0)) {
        __result206__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result206__;
    }
    result_268=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2390, "map$2charphsVarph"))));
    __dec_obj63=result_268->key_list;
    result_268->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2392, "list$1charp"))));
    come_call_finalizer3(__dec_obj63,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_271=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_271=map$2charphsVarph_next(self)    ){
        memset(&default_value_274,0,sizeof(struct sVar*));
        it2_277=map$2charphsVarph_at(self,it_271,default_value_274);
        map$2charphsVarph_put(result_268,it_271,it2_277);
    }
    __result230__ = gComeFunResultObject = __result_obj__ = result_268;
    /*i*/come_call_finalizer3(result_268,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
int i_259;
void* __right_value261 = (void*)0;
void* __right_value262 = (void*)0;
struct list$1charp* __dec_obj39;
struct map$2charphsVarph* __result208__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value258=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2319, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value259=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2320, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value260=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2321, "bool"))));
    for(    i_259=0;    i_259<128;    i_259++    ){
        self->item_existance[i_259]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj39=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj39,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result207__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_260;
int i_267;
    for(    i_260=0;    i_260<self->size;    i_260++    ){
        if(        self->item_existance[i_260]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_260],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_267=0;    i_267<self->size;    i_267++    ){
        if(        self->item_existance[i_267]) {
            if(            1) {
                /* U13 */self->keys[i_267] = come_decrement_ref_count2(self->keys[i_267], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj40;
char* __dec_obj41;
struct sType* __dec_obj42;
char* __dec_obj62;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj40=self->mName;
            /*G*/ __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj41=self->mCValueName;
            /*G*/ __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj42=self->mType;
            come_call_finalizer3(__dec_obj42,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj62=self->mFunName;
            /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj43;
struct tuple1$1sTypeph* __dec_obj45;
char* __dec_obj47;
struct list$1sTypeph* __dec_obj48;
struct list$1sNodeph* __dec_obj50;
struct list$1sTypeph* __dec_obj51;
struct list$1charph* __dec_obj52;
struct tuple1$1sTypeph* __dec_obj53;
struct sNode* __dec_obj55;
struct tuple1$1sTypeph* __dec_obj56;
struct sNode* __dec_obj58;
char* __dec_obj59;
char* __dec_obj60;
char* __dec_obj61;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj43=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj43,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj45=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj45,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj47=self->mGenericsName;
            /*G*/ __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj48=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj48,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj50=self->mArrayNum;
            come_call_finalizer3(__dec_obj50,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj51=self->mParamTypes;
            come_call_finalizer3(__dec_obj51,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj52=self->mParamNames;
            come_call_finalizer3(__dec_obj52,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj53=self->mResultType;
            come_call_finalizer3(__dec_obj53,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj55=self->mAlignas;
            /* U1 */ if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count2(__dec_obj55, ((struct sNode*)__dec_obj55)->finalize, ((struct sNode*)__dec_obj55)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj56=self->mChannelType;
            come_call_finalizer3(__dec_obj56,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj58=self->mSizeNum;
            /* U1 */ if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj59=self->mOriginalTypeName;
            /*G*/ __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj60=self->mAsmName;
            /*G*/ __dec_obj60 = come_decrement_ref_count2(__dec_obj60, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj61=self->mTupleName;
            /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_261;
struct list_item$1sTypeph* prev_it_262;
    it_261=self->head;
    while(it_261!=((void*)0)) {
        prev_it_262=it_261;
        it_261=it_261->next;
        /*i*/come_call_finalizer3(prev_it_262,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj49;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj49=self->item;
            come_call_finalizer3(__dec_obj49,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_263;
struct list_item$1sTypeph* prev_it_264;
    it_263=self->head;
    while(it_263!=((void*)0)) {
        prev_it_264=it_263;
        it_263=it_263->next;
        /*i*/come_call_finalizer3(prev_it_264,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_265;
struct list_item$1charph* prev_it_266;
    it_265=self->head;
    while(it_265!=((void*)0)) {
        prev_it_266=it_265;
        it_265=it_265->next;
        /*i*/come_call_finalizer3(prev_it_266,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj57;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj57=self->v1;
            come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_269;
char* __result209__;
char* __result210__;
char* result_270;
char* __result211__;
result_269 = (void*)0;
result_270 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_269,0,sizeof(char*));
        __result209__ = gComeFunResultObject = __result_obj__ = result_269;
        gComeFunResultObject = (void*)0;
        return __result209__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result210__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result210__;
    }
    memset(&result_270,0,sizeof(char*));
    __result211__ = gComeFunResultObject = __result_obj__ = result_270;
    gComeFunResultObject = (void*)0;
    return __result211__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_272;
char* __result212__;
char* __result213__;
char* result_273;
char* __result214__;
result_272 = (void*)0;
result_273 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_272,0,sizeof(char*));
        __result212__ = gComeFunResultObject = __result_obj__ = result_272;
        gComeFunResultObject = (void*)0;
        return __result212__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result213__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result213__;
    }
    memset(&result_273,0,sizeof(char*));
    __result214__ = gComeFunResultObject = __result_obj__ = result_273;
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_275;
unsigned int it_276;
struct sVar* __result215__;
struct sVar* __result216__;
struct sVar* __result217__;
struct sVar* __result218__;
    hash_275=charp_get_hash_key(((char*)key))%self->size;
    it_276=hash_275;
    while((_Bool)1) {
        if(        self->item_existance[it_276]) {
            if(            charp_equals(self->keys[it_276],key)) {
                __result215__ = gComeFunResultObject = __result_obj__ = self->items[it_276];
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
            it_276++;
            if(            it_276>=self->size) {
                it_276=0;
            }
            else if(            it_276==hash_275) {
                __result216__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result216__;
            }
        }
        else {
            __result217__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_289;
int it_290;
_Bool same_key_exist_307;
char* it2_310;
struct map$2charphsVarph* __result229__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_289=charp_get_hash_key(key)%self->size;
    it_290=hash_289;
    while((_Bool)1) {
        if(        self->item_existance[it_290]) {
            if(            charp_equals(self->keys[it_290],key)) {
                if(                1) {
                    /* U13 */self->keys[it_290] = come_decrement_ref_count2(self->keys[it_290], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_290]);
                    self->keys[it_290]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_290]);
                    self->keys[it_290]=key;
                }
                if(                1) {
                    /*i*/come_call_finalizer3(self->items[it_290],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_290]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_290]=item;
                }
                break;
            }
            it_290++;
            if(            it_290>=self->size) {
                it_290=0;
            }
            else if(            it_290==hash_289) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_290]=(_Bool)1;
            if(            1) {
                self->keys[it_290]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_290]=key;
            }
            if(            1) {
                self->items[it_290]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_290]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_307=(_Bool)0;
    for(    it2_310=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_310=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_310,key)) {
            same_key_exist_307=(_Bool)1;
        }
    }
    if(    !same_key_exist_307) {
        list$1charp_push_back(self->key_list,key);
    }
    __result229__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_278;
void* __right_value266 = (void*)0;
char** keys_279;
void* __right_value267 = (void*)0;
struct sVar** items_280;
void* __right_value268 = (void*)0;
_Bool* item_existance_281;
int len_282;
char* it_283;
struct sVar* default_value_284;
struct sVar* it2_285;
unsigned int hash_286;
int n_287;
struct sVar* default_value_288;
default_value_284 = (void*)0;
default_value_288 = (void*)0;
    size_278=self->size*10;
    keys_279=(char**)come_increment_ref_count(((char**)(__right_value266=(char**)come_calloc(1, sizeof(char*)*(1*(size_278)), "./comelang.h", 2547, "char*%"))));
    items_280=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value267=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_278)), "./comelang.h", 2548, "sVar*%"))));
    item_existance_281=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value268=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_278)), "./comelang.h", 2549, "bool"))));
    len_282=0;
    for(    it_283=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_283=map$2charphsVarph_next(self)    ){
        memset(&default_value_284,0,sizeof(struct sVar*));
        it2_285=map$2charphsVarph_at(self,it_283,default_value_284);
        hash_286=charp_get_hash_key(it_283)%size_278;
        n_287=hash_286;
        while((_Bool)1) {
            if(            item_existance_281[n_287]) {
                n_287++;
                if(                n_287>=size_278) {
                    n_287=0;
                }
                else if(                n_287==hash_286) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_281[n_287]=(_Bool)1;
                keys_279[n_287]=it_283;
                items_280[n_287]=map$2charphsVarph_at(self,it_283,default_value_288);
                len_282++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_279;
    self->items=items_280;
    self->item_existance=item_existance_281;
    self->size=size_278;
    self->len=len_282;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_291;
struct list_item$1charp* it_292;
struct list$1charp* __result222__;
    it2_291=0;
    it_292=self->head;
    while(it_292!=((void*)0)) {
        if(        charp_equals(it_292->item,item)) {
            list$1charp_delete(self,it2_291,it2_291+1);
            break;
        }
        it2_291++;
        it_292=it_292->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_293;
struct list$1charp* __result219__;
struct list_item$1charp* it_296;
int i_297;
struct list_item$1charp* prev_it_298;
struct list_item$1charp* it_299;
int i_300;
struct list_item$1charp* prev_it_301;
struct list_item$1charp* it_302;
struct list_item$1charp* head_prev_it_303;
struct list_item$1charp* tail_it_304;
int i_305;
struct list_item$1charp* prev_it_306;
struct list$1charp* __result221__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_293=tail;
        tail=head;
        head=tmp_293;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result219__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result219__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_296=self->head;
        i_297=0;
        while(it_296!=((void*)0)) {
            if(            i_297<tail) {
                prev_it_298=it_296;
                it_296=it_296->next;
                i_297++;
                /*i*/come_call_finalizer3(prev_it_298,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_297==tail) {
                self->head=it_296;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_296=it_296->next;
                i_297++;
            }
        }
    }
    else if(    tail==self->len) {
        it_299=self->head;
        i_300=0;
        while(it_299!=((void*)0)) {
            if(            i_300==head) {
                self->tail=it_299->prev;
                self->tail->next=((void*)0);
            }
            if(            i_300>=head) {
                prev_it_301=it_299;
                it_299=it_299->next;
                i_300++;
                /*i*/come_call_finalizer3(prev_it_301,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_299=it_299->next;
                i_300++;
            }
        }
    }
    else {
        it_302=self->head;
        head_prev_it_303=((void*)0);
        tail_it_304=((void*)0);
        i_305=0;
        while(it_302!=((void*)0)) {
            if(            i_305==head) {
                head_prev_it_303=it_302->prev;
            }
            if(            i_305==tail) {
                tail_it_304=it_302;
            }
            if(            i_305>=head&&i_305<tail) {
                prev_it_306=it_302;
                it_302=it_302->next;
                i_305++;
                /*i*/come_call_finalizer3(prev_it_306,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_302=it_302->next;
                i_305++;
            }
        }
        if(        head_prev_it_303!=((void*)0)) {
            head_prev_it_303->next=tail_it_304;
        }
        if(        tail_it_304!=((void*)0)) {
            tail_it_304->prev=head_prev_it_303;
        }
    }
    __result221__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_294;
struct list_item$1charp* prev_it_295;
struct list$1charp* __result220__;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*i*/come_call_finalizer3(prev_it_295,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result220__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_308;
char* __result223__;
char* __result224__;
char* result_309;
char* __result225__;
result_308 = (void*)0;
result_309 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_308,0,sizeof(char*));
        __result223__ = gComeFunResultObject = __result_obj__ = result_308;
        gComeFunResultObject = (void*)0;
        return __result223__;
    }
    self->it=self->head;
    if(    self->it) {
        __result224__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    memset(&result_309,0,sizeof(char*));
    __result225__ = gComeFunResultObject = __result_obj__ = result_309;
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_311;
char* __result226__;
char* __result227__;
char* result_312;
char* __result228__;
result_311 = (void*)0;
result_312 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_311,0,sizeof(char*));
        __result226__ = gComeFunResultObject = __result_obj__ = result_311;
        gComeFunResultObject = (void*)0;
        return __result226__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result227__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    memset(&result_312,0,sizeof(char*));
    __result228__ = gComeFunResultObject = __result_obj__ = result_312;
    gComeFunResultObject = (void*)0;
    return __result228__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_313;
int i_314;
    for(    i_313=0;    i_313<self->size;    i_313++    ){
        if(        self->item_existance[i_313]) {
            if(            1) {
                /*i*/come_call_finalizer3(self->items[i_313],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_314=0;    i_314<self->size;    i_314++    ){
        if(        self->item_existance[i_314]) {
            if(            1) {
                /* U13 */self->keys[i_314] = come_decrement_ref_count2(self->keys[i_314], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    /*i*/come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj66;
struct sVarTable* __dec_obj67;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj66=self->mNodes;
            come_call_finalizer3(__dec_obj66,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj67=self->mVarTable;
            come_call_finalizer3(__dec_obj67,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockphp_clone(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result233__;
void* __right_value273 = (void*)0;
void* __right_value274 = (void*)0;
struct list$1sBlockph* result_317;
struct list_item$1sBlockph* it_318;
void* __right_value278 = (void*)0;
struct list$1sBlockph* __result236__;
    if(    self==((void*)0)) {
        __result233__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    result_317=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "./comelang.h", 1058, "list$1sBlockph"))));
    it_318=self->head;
    while(it_318!=((void*)0)) {
        list$1sBlockph_add(result_317,(struct sBlock*)come_increment_ref_count(sBlock_clone(it_318->item)));
        it_318=it_318->next;
    }
    __result236__ = gComeFunResultObject = __result_obj__ = result_317;
    /*i*/come_call_finalizer3(result_317,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

static struct list$1sBlockph* list$1sBlockph_initialize(struct list$1sBlockph* self){
void* __result_obj__=(void*)0;
struct list$1sBlockph* __result234__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result234__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sBlockphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result234__;
}

static void list$1sBlockphp_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_315;
struct list_item$1sBlockph* prev_it_316;
    it_315=self->head;
    while(it_315!=((void*)0)) {
        prev_it_316=it_315;
        it_315=it_315->next;
        /*i*/come_call_finalizer3(prev_it_316,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sBlockphp_finalize(struct list_item$1sBlockph* self){
struct sBlock* __dec_obj70;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj70=self->item;
            come_call_finalizer3(__dec_obj70,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sBlockph* list$1sBlockph_add(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value275 = (void*)0;
struct list_item$1sBlockph* litem_319;
struct sBlock* __dec_obj71;
void* __right_value276 = (void*)0;
struct list_item$1sBlockph* litem_320;
struct sBlock* __dec_obj72;
void* __right_value277 = (void*)0;
struct list_item$1sBlockph* litem_321;
struct sBlock* __dec_obj73;
struct list$1sBlockph* __result235__;
    if(    self->len==0) {
        litem_319=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value275=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1072, "list_item$1sBlockph"))));
        litem_319->prev=((void*)0);
        litem_319->next=((void*)0);
        __dec_obj71=litem_319->item;
        litem_319->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj71,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_319;
        self->head=litem_319;
    }
    else if(    self->len==1) {
        litem_320=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value276=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1082, "list_item$1sBlockph"))));
        litem_320->prev=self->head;
        litem_320->next=((void*)0);
        __dec_obj72=litem_320->item;
        litem_320->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj72,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_320;
        self->head->next=litem_320;
    }
    else {
        litem_321=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value277=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1092, "list_item$1sBlockph"))));
        litem_321->prev=self->tail;
        litem_321->next=((void*)0);
        __dec_obj73=litem_321->item;
        litem_321->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_321;
        self->tail=litem_321;
    }
    self->len++;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void list$1sBlockph_finalize(struct list$1sBlockph* self){
struct list_item$1sBlockph* it_322;
struct list_item$1sBlockph* prev_it_323;
    it_322=self->head;
    while(it_322!=((void*)0)) {
        prev_it_323=it_322;
        it_322=it_322->next;
        /*i*/come_call_finalizer3(prev_it_323,list_item$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sBlock* list$1sBlockphp_operator_load_element(struct list$1sBlockph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sBlockph* it_326;
int i_327;
struct sBlock* __result239__;
struct sBlock* default_value_328;
struct sBlock* __result240__;
default_value_328 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_326=self->head;
    i_327=0;
    while(it_326!=((void*)0)) {
        if(        position==i_327) {
            __result239__ = gComeFunResultObject = __result_obj__ = it_326->item;
            gComeFunResultObject = (void*)0;
            return __result239__;
        }
        it_326=it_326->next;
        i_327++;
    }
    memset(&default_value_328,0,sizeof(struct sBlock*));
    __result240__ = gComeFunResultObject = __result_obj__ = default_value_328;
    /*i*/come_call_finalizer3(default_value_328,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result240__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result241__;
void* __right_value286 = (void*)0;
struct sType* result_335;
void* __right_value289 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value290 = (void*)0;
struct tuple1$1sTypeph* __dec_obj87;
void* __right_value291 = (void*)0;
char* __dec_obj88;
void* __right_value298 = (void*)0;
struct list$1sTypeph* __dec_obj92;
void* __right_value299 = (void*)0;
struct list$1sNodeph* __dec_obj93;
void* __right_value300 = (void*)0;
struct list$1sTypeph* __dec_obj94;
void* __right_value307 = (void*)0;
struct list$1charph* __dec_obj98;
void* __right_value308 = (void*)0;
struct tuple1$1sTypeph* __dec_obj99;
void* __right_value309 = (void*)0;
struct sNode* __dec_obj100;
void* __right_value310 = (void*)0;
struct tuple1$1sTypeph* __dec_obj101;
void* __right_value311 = (void*)0;
struct sNode* __dec_obj102;
void* __right_value312 = (void*)0;
char* __dec_obj103;
void* __right_value313 = (void*)0;
char* __dec_obj104;
void* __right_value314 = (void*)0;
char* __dec_obj105;
struct sType* __result251__;
    if(    self==(void*)0) {
        __result241__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result241__;
    }
    result_335=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_335->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj86=result_335->mNoSolvedGenericsType;
        result_335->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj87=result_335->mOriginalLoadVarType;
        result_335->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj87,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj88=result_335->mGenericsName;
        result_335->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj92=result_335->mGenericsTypes;
        result_335->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj92,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj93=result_335->mArrayNum;
        result_335->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj93,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj94=result_335->mParamTypes;
        result_335->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj94,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj98=result_335->mParamNames;
        result_335->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj98,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj99=result_335->mResultType;
        result_335->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj99,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj100=result_335->mAlignas;
        result_335->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj101=result_335->mChannelType;
        result_335->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj101,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_335->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_335->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_335->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_335->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_335->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_335->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_335->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_335->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_335->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_335->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_335->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_335->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_335->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_335->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_335->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_335->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_335->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_335->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj102=result_335->mSizeNum;
        result_335->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj103=result_335->mOriginalTypeName;
        result_335->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_335->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_335->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_335->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_335->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_335->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_335->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj104=result_335->mAsmName;
        result_335->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_335->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_335->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_335->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_335->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_335->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj105=result_335->mTupleName;
        result_335->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result251__ = gComeFunResultObject = __result_obj__ = result_335;
    /*i*/come_call_finalizer3(result_335,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result242__;
void* __right_value287 = (void*)0;
struct tuple1$1sTypeph* result_336;
void* __right_value288 = (void*)0;
struct sType* __dec_obj84;
struct tuple1$1sTypeph* __result243__;
    if(    self==(void*)0) {
        __result242__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result242__;
    }
    result_336=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj84=result_336->v1;
        result_336->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj84,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result243__ = gComeFunResultObject = __result_obj__ = result_336;
    /*i*/come_call_finalizer3(result_336,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result243__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj85;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj85=self->v1;
            come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result244__;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct list$1sTypeph* result_337;
struct list_item$1sTypeph* it_338;
void* __right_value297 = (void*)0;
struct list$1sTypeph* __result247__;
    if(    self==((void*)0)) {
        __result244__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result244__;
    }
    result_337=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1058, "list$1sTypeph"))));
    it_338=self->head;
    while(it_338!=((void*)0)) {
        list$1sTypeph_add(result_337,(struct sType*)come_increment_ref_count(sType_clone(it_338->item)));
        it_338=it_338->next;
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_337;
    /*i*/come_call_finalizer3(result_337,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result245__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result245__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
struct list_item$1sTypeph* litem_339;
struct sType* __dec_obj89;
void* __right_value295 = (void*)0;
struct list_item$1sTypeph* litem_340;
struct sType* __dec_obj90;
void* __right_value296 = (void*)0;
struct list_item$1sTypeph* litem_341;
struct sType* __dec_obj91;
struct list$1sTypeph* __result246__;
    if(    self->len==0) {
        litem_339=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value294=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1072, "list_item$1sTypeph"))));
        litem_339->prev=((void*)0);
        litem_339->next=((void*)0);
        __dec_obj89=litem_339->item;
        litem_339->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj89,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_339;
        self->head=litem_339;
    }
    else if(    self->len==1) {
        litem_340=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value295=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1082, "list_item$1sTypeph"))));
        litem_340->prev=self->head;
        litem_340->next=((void*)0);
        __dec_obj90=litem_340->item;
        litem_340->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj90,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_340;
        self->head->next=litem_340;
    }
    else {
        litem_341=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value296=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1092, "list_item$1sTypeph"))));
        litem_341->prev=self->tail;
        litem_341->next=((void*)0);
        __dec_obj91=litem_341->item;
        litem_341->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj91,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_341;
        self->tail=litem_341;
    }
    self->len++;
    __result246__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result246__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result248__;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct list$1charph* result_342;
struct list_item$1charph* it_343;
void* __right_value306 = (void*)0;
struct list$1charph* __result250__;
    if(    self==((void*)0)) {
        __result248__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result248__;
    }
    result_342=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1058, "list$1charph"))));
    it_343=self->head;
    while(it_343!=((void*)0)) {
        list$1charph_add(result_342,(char*)come_increment_ref_count(string_clone(it_343->item)));
        it_343=it_343->next;
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_342;
    /*i*/come_call_finalizer3(result_342,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
struct list_item$1charph* litem_344;
char* __dec_obj95;
void* __right_value304 = (void*)0;
struct list_item$1charph* litem_345;
char* __dec_obj96;
void* __right_value305 = (void*)0;
struct list_item$1charph* litem_346;
char* __dec_obj97;
struct list$1charph* __result249__;
    if(    self->len==0) {
        litem_344=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value303=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1072, "list_item$1charph"))));
        litem_344->prev=((void*)0);
        litem_344->next=((void*)0);
        __dec_obj95=litem_344->item;
        litem_344->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_344;
        self->head=litem_344;
    }
    else if(    self->len==1) {
        litem_345=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value304=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1082, "list_item$1charph"))));
        litem_345->prev=self->head;
        litem_345->next=((void*)0);
        __dec_obj96=litem_345->item;
        litem_345->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_345;
        self->head->next=litem_345;
    }
    else {
        litem_346=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value305=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1092, "list_item$1charph"))));
        litem_346->prev=self->tail;
        litem_346->next=((void*)0);
        __dec_obj97=litem_346->item;
        litem_346->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_346;
        self->tail=litem_346;
    }
    self->len++;
    __result249__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result249__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj106;
struct sType* __dec_obj107;
char* __dec_obj108;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj106=self->c_value;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj107=self->type;
            come_call_finalizer3(__dec_obj107,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj108=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_363;
int i_364;
struct sNode* __result253__;
struct sNode* default_value_365;
struct sNode* __result254__;
default_value_365 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_363=self->head;
    i_364=0;
    while(it_363!=((void*)0)) {
        if(        position==i_364) {
            __result253__ = gComeFunResultObject = __result_obj__ = it_363->item;
            gComeFunResultObject = (void*)0;
            return __result253__;
        }
        it_363=it_363->next;
        i_364++;
    }
    memset(&default_value_365,0,sizeof(struct sNode*));
    __result254__ = gComeFunResultObject = __result_obj__ = default_value_365;
    if(default_value_365) { default_value_365 = come_decrement_ref_count2(default_value_365, ((struct sNode*)default_value_365)->finalize, ((struct sNode*)default_value_365)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result254__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
struct list_item$1CVALUEph* litem_378;
struct CVALUE* __dec_obj111;
void* __right_value329 = (void*)0;
struct list_item$1CVALUEph* litem_379;
struct CVALUE* __dec_obj112;
void* __right_value330 = (void*)0;
struct list_item$1CVALUEph* litem_380;
struct CVALUE* __dec_obj113;
struct list$1CVALUEph* __result257__;
    if(    self->len==0) {
        litem_378=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value328=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_378->prev=((void*)0);
        litem_378->next=((void*)0);
        __dec_obj111=litem_378->item;
        litem_378->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj111,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_378;
        self->head=litem_378;
    }
    else if(    self->len==1) {
        litem_379=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value329=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_379->prev=self->head;
        litem_379->next=((void*)0);
        __dec_obj112=litem_379->item;
        litem_379->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_379;
        self->head->next=litem_379;
    }
    else {
        litem_380=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value330=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_380->prev=self->tail;
        litem_380->next=((void*)0);
        __dec_obj113=litem_380->item;
        litem_380->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_380;
        self->tail=litem_380;
    }
    self->len++;
    __result257__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

struct sMatchNode* sMatchNode_initialize(struct sMatchNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value331 = (void*)0;
void* __right_value332 = (void*)0;
struct sNode* __dec_obj115;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj116;
struct sMatchNode* __result259__;
    ((struct sNodeBase*)(__right_value331=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value331,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj115=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    /* U1 */ if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj116=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    /* U1 */ if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); };
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result259__;
}

_Bool sMatchNode_terminated(struct sMatchNode* self){
    return (_Bool)1;
}

char* sMatchNode_kind(struct sMatchNode* self){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
char* __result260__;
    __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value334=__builtin_string("sMatch")));
    /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

_Bool sMatchNode_compile(struct sMatchNode* self, struct sInfo* info){
struct sNode* it_node_381;
struct sNode* match_node_382;
_Bool Value_383;
_Bool __result261__;
void* __right_value335 = (void*)0;
struct CVALUE* come_value_384;
_Bool Value_385;
_Bool __result262__;
struct sVar* var__386;
int __exception_result_var_b2;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct list$1sVarph* __dec_obj121;
void* __right_value346 = (void*)0;
_Bool __result267__;
    it_node_381=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_382=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_383=node_compile(it_node_381,info);
    if(    !Value_383) {
        __result261__ = (_Bool)0;
        if(it_node_381) { it_node_381 = come_decrement_ref_count2(it_node_381, ((struct sNode*)it_node_381)->finalize, ((struct sNode*)it_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_382) { match_node_382 = come_decrement_ref_count2(match_node_382, ((struct sNode*)match_node_382)->finalize, ((struct sNode*)match_node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result261__;
    }
    else {
    }
    come_value_384=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_384->c_value);
    dec_stack_ptr(1,info);
    Value_385=node_compile(match_node_382,info);
    if(    !Value_385) {
        __result262__ = (_Bool)0;
        if(it_node_381) { it_node_381 = come_decrement_ref_count2(it_node_381, ((struct sNode*)it_node_381)->finalize, ((struct sNode*)it_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_382) { match_node_382 = come_decrement_ref_count2(match_node_382, ((struct sNode*)match_node_382)->finalize, ((struct sNode*)match_node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result262__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__386=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 268, 3),__exception_result_var_b2=assert_v2(var__386!=((void*)0)), come_pop_stackframe(), __exception_result_var_b2);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj121=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarph_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 271, "list$1sVarph"))));
            come_call_finalizer3(__dec_obj121,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sVarph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__386)));
    }
    __result267__ = (_Bool)1;
    if(it_node_381) { it_node_381 = come_decrement_ref_count2(it_node_381, ((struct sNode*)it_node_381)->finalize, ((struct sNode*)it_node_381)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_382) { match_node_382 = come_decrement_ref_count2(match_node_382, ((struct sNode*)match_node_382)->finalize, ((struct sNode*)match_node_382)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_384,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result267__;
}

static struct list$1sVarph* list$1sVarph_initialize(struct list$1sVarph* self){
void* __result_obj__=(void*)0;
struct list$1sVarph* __result263__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result263__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static void list$1sVarphp_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_387;
struct list_item$1sVarph* prev_it_388;
    it_387=self->head;
    while(it_387!=((void*)0)) {
        prev_it_388=it_387;
        it_387=it_387->next;
        /*i*/come_call_finalizer3(prev_it_388,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVarphp_finalize(struct list_item$1sVarph* self){
struct sVar* __dec_obj120;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj120=self->item;
            come_call_finalizer3(__dec_obj120,sVar_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sVarph_finalize(struct list$1sVarph* self){
struct list_item$1sVarph* it_389;
struct list_item$1sVarph* prev_it_390;
    it_389=self->head;
    while(it_389!=((void*)0)) {
        prev_it_390=it_389;
        it_389=it_389->next;
        /*i*/come_call_finalizer3(prev_it_390,list_item$1sVarphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1sVarph* list$1sVarph_add(struct list$1sVarph* self, struct sVar* item){
void* __result_obj__=(void*)0;
void* __right_value338 = (void*)0;
struct list_item$1sVarph* litem_391;
struct sVar* __dec_obj122;
void* __right_value339 = (void*)0;
struct list_item$1sVarph* litem_392;
struct sVar* __dec_obj123;
void* __right_value340 = (void*)0;
struct list_item$1sVarph* litem_393;
struct sVar* __dec_obj124;
struct list$1sVarph* __result264__;
    if(    self->len==0) {
        litem_391=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value338=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "./comelang.h", 1072, "list_item$1sVarph"))));
        litem_391->prev=((void*)0);
        litem_391->next=((void*)0);
        __dec_obj122=litem_391->item;
        litem_391->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj122,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_391;
        self->head=litem_391;
    }
    else if(    self->len==1) {
        litem_392=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value339=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "./comelang.h", 1082, "list_item$1sVarph"))));
        litem_392->prev=self->head;
        litem_392->next=((void*)0);
        __dec_obj123=litem_392->item;
        litem_392->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj123,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_392;
        self->head->next=litem_392;
    }
    else {
        litem_393=(struct list_item$1sVarph*)come_increment_ref_count(((struct list_item$1sVarph*)(__right_value340=(struct list_item$1sVarph*)come_calloc(1, sizeof(struct list_item$1sVarph)*(1), "./comelang.h", 1092, "list_item$1sVarph"))));
        litem_393->prev=self->tail;
        litem_393->next=((void*)0);
        __dec_obj124=litem_393->item;
        litem_393->item=(struct sVar*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj124,sVar_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_393;
        self->tail=litem_393;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct sVar* sVar_clone(struct sVar* self){
void* __result_obj__=(void*)0;
struct sVar* __result265__;
void* __right_value341 = (void*)0;
struct sVar* result_394;
void* __right_value342 = (void*)0;
char* __dec_obj125;
void* __right_value343 = (void*)0;
char* __dec_obj126;
void* __right_value344 = (void*)0;
struct sType* __dec_obj127;
void* __right_value345 = (void*)0;
char* __dec_obj128;
struct sVar* __result266__;
    if(    self==(void*)0) {
        __result265__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result265__;
    }
    result_394=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "sVar"));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj125=result_394->mName;
        result_394->mName=(char*)come_increment_ref_count(string_clone(self->mName));
        /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj126=result_394->mCValueName;
        result_394->mCValueName=(char*)come_increment_ref_count(string_clone(self->mCValueName));
        /*G*/ __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj127=result_394->mType;
        result_394->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj127,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_394->mBlockLevel=self->mBlockLevel;
    }
    if(    self!=((void*)0)) {
        result_394->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_394->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_394->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_394->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj128=result_394->mFunName;
        result_394->mFunName=(char*)come_increment_ref_count(string_clone(self->mFunName));
        /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result266__ = gComeFunResultObject = __result_obj__ = result_394;
    /*i*/come_call_finalizer3(result_394,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

struct sIfMethodNode* sIfMethodNode_initialize(struct sIfMethodNode* self, struct sNode* it_node, struct sNode* match_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sNode* __dec_obj129;
void* __right_value349 = (void*)0;
struct sNode* __dec_obj130;
struct sIfMethodNode* __result268__;
    ((struct sNodeBase*)(__right_value347=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value347,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj129=self->it_node;
    self->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(it_node));
    /* U1 */ if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj130=self->match_node;
    self->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(match_node));
    /* U1 */ if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); };
    __result268__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    if(it_node) { it_node = come_decrement_ref_count2(it_node, ((struct sNode*)it_node)->finalize, ((struct sNode*)it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node) { match_node = come_decrement_ref_count2(match_node, ((struct sNode*)match_node)->finalize, ((struct sNode*)match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result268__;
}

_Bool sIfMethodNode_terminated(struct sIfMethodNode* self){
    return (_Bool)1;
}

char* sIfMethodNode_kind(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
void* __right_value350 = (void*)0;
char* __result269__;
    __result269__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value350=__builtin_string("sMatch")));
    /* U11 */__right_value350 = come_decrement_ref_count2(__right_value350, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result269__;
}

_Bool sIfMethodNode_compile(struct sIfMethodNode* self, struct sInfo* info){
struct sNode* it_node_395;
struct sNode* match_node_396;
_Bool Value_397;
_Bool __result270__;
void* __right_value351 = (void*)0;
struct CVALUE* come_value_398;
_Bool Value_399;
_Bool __result271__;
struct sVar* var__400;
int __exception_result_var_b3;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct list$1sVarph* __dec_obj134;
void* __right_value354 = (void*)0;
_Bool __result272__;
    it_node_395=(struct sNode*)come_increment_ref_count(self->it_node);
    match_node_396=(struct sNode*)come_increment_ref_count(self->match_node);
    Value_397=node_compile(it_node_395,info);
    if(    !Value_397) {
        __result270__ = (_Bool)0;
        if(it_node_395) { it_node_395 = come_decrement_ref_count2(it_node_395, ((struct sNode*)it_node_395)->finalize, ((struct sNode*)it_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_396) { match_node_396 = come_decrement_ref_count2(match_node_396, ((struct sNode*)match_node_396)->finalize, ((struct sNode*)match_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result270__;
    }
    else {
    }
    come_value_398=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    add_come_code(info,"%s;\n",come_value_398->c_value);
    dec_stack_ptr(1,info);
    Value_399=node_compile(match_node_396,info);
    if(    !Value_399) {
        __result271__ = (_Bool)0;
        if(it_node_395) { it_node_395 = come_decrement_ref_count2(it_node_395, ((struct sNode*)it_node_395)->finalize, ((struct sNode*)it_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(match_node_396) { match_node_396 = come_decrement_ref_count2(match_node_396, ((struct sNode*)match_node_396)->finalize, ((struct sNode*)match_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result271__;
    }
    else {
    }
    if(    info->if_result_var_name) {
        var__400=get_variable_from_table(info->lv_table,info->if_result_var_name);
        (come_push_stackframe("08if.c", 320, 4),__exception_result_var_b3=assert_v2(var__400!=((void*)0)), come_pop_stackframe(), __exception_result_var_b3);
        if(        info->match_it_var==((void*)0)) {
            __dec_obj134=info->match_it_var;
            info->match_it_var=(struct list$1sVarph*)come_increment_ref_count(list$1sVarph_initialize((struct list$1sVarph*)come_increment_ref_count((struct list$1sVarph*)come_calloc(1, sizeof(struct list$1sVarph)*(1), "08if.c", 323, "list$1sVarph"))));
            come_call_finalizer3(__dec_obj134,list$1sVarph_finalize, 0, 0, 0, 0, (void*)0);
        }
        list$1sVarph_add(info->match_it_var,(struct sVar*)come_increment_ref_count(sVar_clone(var__400)));
    }
    __result272__ = (_Bool)1;
    if(it_node_395) { it_node_395 = come_decrement_ref_count2(it_node_395, ((struct sNode*)it_node_395)->finalize, ((struct sNode*)it_node_395)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(match_node_396) { match_node_396 = come_decrement_ref_count2(match_node_396, ((struct sNode*)match_node_396)->finalize, ((struct sNode*)match_node_396)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_398,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

struct sOrStatmentNode* sOrStatmentNode_initialize(struct sOrStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct sNode* __dec_obj135;
void* __right_value357 = (void*)0;
struct sBlock* __dec_obj136;
struct sOrStatmentNode* __result273__;
    ((struct sNodeBase*)(__right_value355=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value355,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj135=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    /* U1 */ if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj136=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer3(__dec_obj136,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result273__;
}

_Bool sOrStatmentNode_terminated(struct sOrStatmentNode* self){
    return (_Bool)1;
}

char* sOrStatmentNode_kind(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value358 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value358=__builtin_string("sOrStatmentNode")));
    /* U11 */__right_value358 = come_decrement_ref_count2(__right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sOrStatmentNode_compile(struct sOrStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_401;
_Bool Value_402;
void* __right_value359 = (void*)0;
struct CVALUE* conditional_value_403;
struct sBlock* if_block_404;
int num_or_conditional_stack_406;
_Bool __result275__;
    expression_node_401=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_402=node_compile(expression_node_401,info);
    if(    !Value_402) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_403=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_404=self->mIfBlock;
    static int num_or_conditional_405=0;
    add_come_code_at_function_head(info,"_Bool _or_conditional%d;\n",++num_or_conditional_405);
    add_come_code(info,"if((_or_conditional%d=(%s)),",num_or_conditional_405,conditional_value_403->c_value);
    num_or_conditional_stack_406=num_or_conditional_405;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_or_conditional%d == 0) {\n",num_or_conditional_stack_406);
    transpile_block(if_block_404,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result275__ = (_Bool)1;
    /*i*/come_call_finalizer3(conditional_value_403,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result275__;
}

struct sAndStatmentNode* sAndStatmentNode_initialize(struct sAndStatmentNode* self, struct sNode* expression_node, struct sBlock* if_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* __dec_obj140;
void* __right_value362 = (void*)0;
struct sBlock* __dec_obj141;
struct sAndStatmentNode* __result276__;
    ((struct sNodeBase*)(__right_value360=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value360,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj140=self->mExpressionNode;
    self->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(expression_node));
    /* U1 */ if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj141=self->mIfBlock;
    self->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(if_block));
    come_call_finalizer3(__dec_obj141,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    __result276__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result276__;
}

_Bool sAndStatmentNode_terminated(struct sAndStatmentNode* self){
    return (_Bool)1;
}

char* sAndStatmentNode_kind(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
void* __right_value363 = (void*)0;
char* __result277__;
    __result277__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value363=__builtin_string("sAndStatmentNode")));
    /* U11 */__right_value363 = come_decrement_ref_count2(__right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result277__;
}

_Bool sAndStatmentNode_compile(struct sAndStatmentNode* self, struct sInfo* info){
struct sNode* expression_node_407;
_Bool Value_408;
void* __right_value364 = (void*)0;
struct CVALUE* conditional_value_409;
struct sBlock* if_block_410;
int num_and_conditional_stack_412;
_Bool __result278__;
    expression_node_407=self->mExpressionNode;
    info->without_semicolon=(_Bool)1;
    Value_408=node_compile(expression_node_407,info);
    if(    !Value_408) {
        return (_Bool)0;
    }
    else {
    }
    info->without_semicolon=(_Bool)0;
    conditional_value_409=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if_block_410=self->mIfBlock;
    static int num_and_conditional_411=0;
    add_come_code_at_function_head(info,"_Bool _and_conditional%d;\n",++num_and_conditional_411);
    add_come_code(info,"if((_and_conditional%d=(%s)),",num_and_conditional_411,conditional_value_409->c_value);
    num_and_conditional_stack_412=num_and_conditional_411;
    add_last_code_to_source_with_comma(info);
    free_right_value_objects(info,(_Bool)1);
    add_come_code(info,"_and_conditional%d != 0) {\n",num_and_conditional_stack_412);
    transpile_block(if_block_410,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    add_come_code(info,"}\n");
    transpiler_clear_last_code(info);
    __result278__ = (_Bool)1;
    /*i*/come_call_finalizer3(conditional_value_409,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result278__;
}

struct sMultipleNode* sMultipleNode_initialize(struct sMultipleNode* self, struct list$1sNodeph* multiple_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
struct list$1sNodeph* __dec_obj145;
struct sMultipleNode* __result279__;
    ((struct sNodeBase*)(__right_value365=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value365,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj145=self->multiple_node;
    self->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(multiple_node));
    come_call_finalizer3(__dec_obj145,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result279__;
}

_Bool sMultipleNode_terminated(struct sMultipleNode* self){
    return (_Bool)1;
}

char* sMultipleNode_kind(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* __result280__;
    __result280__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=__builtin_string("sMultipleNode")));
    /* U11 */__right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result280__;
}

_Bool sMultipleNode_compile(struct sMultipleNode* self, struct sInfo* info){
struct list$1sNodeph* multiple_node_413;
struct CVALUE* come_value_414;
struct list$1sNodeph* o2_saved_415;
struct sNode* it_418;
_Bool Value_421;
_Bool __result287__;
void* __right_value368 = (void*)0;
struct CVALUE* __dec_obj148;
_Bool __result288__;
    multiple_node_413=(struct list$1sNodeph*)come_increment_ref_count(self->multiple_node);
    come_value_414=((void*)0);
    for(    o2_saved_415=(struct list$1sNodeph*)come_increment_ref_count((multiple_node_413)),it_418=list$1sNodeph_begin((o2_saved_415));    !list$1sNodeph_end((o2_saved_415));    it_418=list$1sNodeph_next((o2_saved_415))    ){
        Value_421=node_compile(it_418,info);
        if(        !Value_421) {
            __result287__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_415,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(multiple_node_413,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            return __result287__;
        }
        else {
        }
        add_last_code_to_source(info);
        if(        list$1CVALUEph_length(info->stack)>0) {
            __dec_obj148=come_value_414;
            come_value_414=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            come_call_finalizer3(__dec_obj148,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            dec_stack_ptr(1,info);
        }
    }
    /*i*/come_call_finalizer3(o2_saved_415,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    come_value_414) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_414));
    }
    __result288__ = (_Bool)1;
    /*i*/come_call_finalizer3(multiple_node_413,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_414,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result288__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_416;
struct sNode* __result281__;
struct sNode* __result282__;
struct sNode* result_417;
struct sNode* __result283__;
result_416 = (void*)0;
result_417 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_416,0,sizeof(struct sNode*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_416;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->it=self->head;
    if(    self->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_417,0,sizeof(struct sNode*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_417;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_419;
struct sNode* __result284__;
struct sNode* __result285__;
struct sNode* result_420;
struct sNode* __result286__;
result_419 = (void*)0;
result_420 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_419,0,sizeof(struct sNode*));
        __result284__ = gComeFunResultObject = __result_obj__ = result_419;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result285__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    memset(&result_420,0,sizeof(struct sNode*));
    __result286__ = gComeFunResultObject = __result_obj__ = result_420;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sSaveRightValueObjects* sSaveRightValueObjects_initialize(struct sSaveRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value369 = (void*)0;
struct sSaveRightValueObjects* __result289__;
    ((struct sNodeBase*)(__right_value369=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value369,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result289__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

_Bool sSaveRightValueObjects_terminated(struct sSaveRightValueObjects* self){
    return (_Bool)0;
}

char* sSaveRightValueObjects_kind(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value370 = (void*)0;
char* __result290__;
    __result290__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value370=__builtin_string("sSaveRightValueObjects")));
    /* U11 */__right_value370 = come_decrement_ref_count2(__right_value370, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

_Bool sSaveRightValueObjects_compile(struct sSaveRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObjectph* __dec_obj150;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct list$1sRightValueObjectph* __dec_obj155;
    __dec_obj150=gExceptionRightValueObjects;
    gExceptionRightValueObjects=(struct list$1sRightValueObjectph*)come_increment_ref_count(info->right_value_objects);
    come_call_finalizer3(__dec_obj150,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj155=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(list$1sRightValueObjectph_initialize((struct list$1sRightValueObjectph*)come_increment_ref_count((struct list$1sRightValueObjectph*)come_calloc(1, sizeof(struct list$1sRightValueObjectph)*(1), "08if.c", 512, "list$1sRightValueObjectph"))));
    come_call_finalizer3(__dec_obj155,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

static void list$1sRightValueObjectph_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_422;
struct list_item$1sRightValueObjectph* prev_it_423;
    it_422=self->head;
    while(it_422!=((void*)0)) {
        prev_it_423=it_422;
        it_422=it_422->next;
        /*i*/come_call_finalizer3(prev_it_423,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObjectphp_finalize(struct list_item$1sRightValueObjectph* self){
struct sRightValueObject* __dec_obj151;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj151=self->item;
            come_call_finalizer3(__dec_obj151,sRightValueObject_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
struct sType* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj152=self->mType;
            come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        if(        self->mVarName==gComeFunResultObject) {
            __dec_obj153=self->mVarName;
            /*G*/ __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj154=self->mFunName;
            /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sRightValueObjectph* list$1sRightValueObjectph_initialize(struct list$1sRightValueObjectph* self){
void* __result_obj__=(void*)0;
struct list$1sRightValueObjectph* __result291__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sRightValueObjectphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

static void list$1sRightValueObjectphp_finalize(struct list$1sRightValueObjectph* self){
struct list_item$1sRightValueObjectph* it_424;
struct list_item$1sRightValueObjectph* prev_it_425;
    it_424=self->head;
    while(it_424!=((void*)0)) {
        prev_it_425=it_424;
        it_424=it_424->next;
        /*i*/come_call_finalizer3(prev_it_425,list_item$1sRightValueObjectphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sRestoreRightValueObjects* sRestoreRightValueObjects_initialize(struct sRestoreRightValueObjects* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
struct sRestoreRightValueObjects* __result292__;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result292__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sRestoreRightValueObjects_terminated(struct sRestoreRightValueObjects* self){
    return (_Bool)0;
}

char* sRestoreRightValueObjects_kind(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result293__;
    __result293__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string("sRestoreRightValueObjects")));
    /* U11 */__right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

_Bool sRestoreRightValueObjects_compile(struct sRestoreRightValueObjects* self, struct sInfo* info){
struct list$1sRightValueObjectph* __dec_obj157;
struct list$1sRightValueObjectph* __dec_obj158;
    free_right_value_objects(info,(_Bool)0);
    __dec_obj157=info->right_value_objects;
    info->right_value_objects=(struct list$1sRightValueObjectph*)come_increment_ref_count(gExceptionRightValueObjects);
    come_call_finalizer3(__dec_obj157,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj158=gExceptionRightValueObjects;
    gExceptionRightValueObjects=((void*)0);
    come_call_finalizer3(__dec_obj158,list$1sRightValueObjectph_finalize, 0, 0, 0, 0, (void*)0);
    return (_Bool)1;
}

struct sNode* parse_rescue_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
char* sname_426;
int sline_427;
int var_num_stack_429;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
char* __list_values1___430[2];
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct list$1charph* multiple_assign_432;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct sNode* get_return_value_433;
void* __right_value383 = (void*)0;
struct sBlock* if_block_434;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_435;
int elif_num_436;
void* __right_value386 = (void*)0;
void* __right_value387 = (void*)0;
struct list$1sBlockph* elif_blocks_437;
void* __right_value388 = (void*)0;
void* __right_value389 = (void*)0;
struct sBlock* else_block_438;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
void* __right_value395 = (void*)0;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct sNode* expression_node2_442;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct sNode* _inf_value1;
struct sIfNode* _inf_obj_value1;
void* __right_value407 = (void*)0;
struct sNode* if_node_443;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct sNode* _inf_value2;
struct sSaveRightValueObjects* _inf_obj_value2;
void* __right_value412 = (void*)0;
struct sNode* save_right_value_objects_445;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct sNode* _inf_value3;
struct sRestoreRightValueObjects* _inf_obj_value3;
void* __right_value417 = (void*)0;
struct sNode* restore_right_value_objects_447;
struct sNode* __list_values2___450[2];
void* __right_value418 = (void*)0;
void* __right_value419 = (void*)0;
struct list$1sNodeph* multiple_node_449;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct sNode* _inf_value4;
struct sMultipleNode* _inf_obj_value4;
void* __right_value425 = (void*)0;
struct sNode* __result305__;
    sname_426=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_427=info->sline;
    parse_sharp_v5(info);
    static int var_num_428=0;
    var_num_428++;
    var_num_stack_429=var_num_428;
    multiple_assign_432=(struct list$1charph*)come_increment_ref_count((__list_values1___430[0]=(char*)come_increment_ref_count(((char*)(__right_value377=xsprintf("come_exception_var_\%s",((char*)(__right_value376=int_to_string(var_num_stack_429))))))),
__list_values1___430[1]=(char*)come_increment_ref_count(((char*)(__right_value378=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 557, "struct list$1charph")),2,__list_values1___430)));
    /* U11 */__right_value376 = come_decrement_ref_count2(__right_value376, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value378 = come_decrement_ref_count2(__right_value378, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_433=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_432),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    if_block_434=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_435=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 564, "list$1sNodeph"))));
    elif_num_436=0;
    elif_blocks_437=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 567, "list$1sBlockph"))));
    else_block_438=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 569, "sBlock")),info));
    else_block_438->mOmitSemicolon=(_Bool)1;
    list$1sNodeph_push_back(else_block_438->mNodes,(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value394=xsprintf("come_exception_var_\%s",((char*)(__right_value393=int_to_string(var_num_stack_429)))))),info)));
    /* U11 */__right_value393 = come_decrement_ref_count2(__right_value393, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value394 = come_decrement_ref_count2(__right_value394, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    expression_node2_442=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value396=xsprintf("Err"))),info));
    /* U11 */__right_value396 = come_decrement_ref_count2(__right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 575, "struct sNode");
    _inf_obj_value1=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value399=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 575, "sIfNode")),(struct sNode*)come_increment_ref_count(expression_node2_442),if_block_434,elif_expression_nodes_435,elif_blocks_437,elif_num_436,else_block_438,(_Bool)0,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sIfNode_finalize;
    _inf_value1->clone=(void*)sIfNode_clone;
    _inf_value1->compile=(void*)sIfNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sIfNode_terminated;
    _inf_value1->kind=(void*)sIfNode_kind;
    if_node_443=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value399,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 577, "struct sNode");
    _inf_obj_value2=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value409=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 577, "sSaveRightValueObjects")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value2->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value2->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value2->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_445=(struct sNode*)come_increment_ref_count(_inf_value2);
    /*g*/come_call_finalizer3(__right_value409,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 578, "struct sNode");
    _inf_obj_value3=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value414=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 578, "sRestoreRightValueObjects")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value3->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value3->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value3->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_447=(struct sNode*)come_increment_ref_count(_inf_value3);
    /*g*/come_call_finalizer3(__right_value414,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_449=(struct list$1sNodeph*)come_increment_ref_count((__list_values2___450[0]=(struct sNode*)come_increment_ref_count(get_return_value_433),
__list_values2___450[1]=(struct sNode*)come_increment_ref_count(if_node_443),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 580, "struct list$1sNodeph")),2,__list_values2___450)));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 582, "struct sNode");
    _inf_obj_value4=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value421=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 582, "sMultipleNode")),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_449),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sMultipleNode_finalize;
    _inf_value4->clone=(void*)sMultipleNode_clone;
    _inf_value4->compile=(void*)sMultipleNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sMultipleNode_terminated;
    _inf_value4->kind=(void*)sMultipleNode_kind;
    __result305__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value425=_inf_value4));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_426 = come_decrement_ref_count2(sname_426, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign_432,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_433) { get_return_value_433 = come_decrement_ref_count2(get_return_value_433, ((struct sNode*)get_return_value_433)->finalize, ((struct sNode*)get_return_value_433)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_434,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_435,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_437,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_438,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_442) { expression_node2_442 = come_decrement_ref_count2(expression_node2_442, ((struct sNode*)expression_node2_442)->finalize, ((struct sNode*)expression_node2_442)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_443) { if_node_443 = come_decrement_ref_count2(if_node_443, ((struct sNode*)if_node_443)->finalize, ((struct sNode*)if_node_443)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_445) { save_right_value_objects_445 = come_decrement_ref_count2(save_right_value_objects_445, ((struct sNode*)save_right_value_objects_445)->finalize, ((struct sNode*)save_right_value_objects_445)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_447) { restore_right_value_objects_447 = come_decrement_ref_count2(restore_right_value_objects_447, ((struct sNode*)restore_right_value_objects_447)->finalize, ((struct sNode*)restore_right_value_objects_447)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(multiple_node_449,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value421,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value425) { __right_value425 = come_decrement_ref_count2(__right_value425, ((struct sNode*)__right_value425)->finalize, ((struct sNode*)__right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static struct list$1charph* list$1charph_initialize_with_values(struct list$1charph* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_431;
struct list$1charph* __result294__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_431=0;    i_431<num_value;    i_431++    ){
        list$1charph_push_back(self,values[i_431]);
    }
    __result294__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value390 = (void*)0;
struct list_item$1sNodeph* litem_439;
struct sNode* __dec_obj159;
void* __right_value391 = (void*)0;
struct list_item$1sNodeph* litem_440;
struct sNode* __dec_obj160;
void* __right_value392 = (void*)0;
struct list_item$1sNodeph* litem_441;
struct sNode* __dec_obj161;
struct list$1sNodeph* __result295__;
    if(    self->len==0) {
        litem_439=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value390=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1142, "list_item$1sNodeph"))));
        litem_439->prev=((void*)0);
        litem_439->next=((void*)0);
        __dec_obj159=litem_439->item;
        litem_439->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_439;
        self->head=litem_439;
    }
    else if(    self->len==1) {
        litem_440=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value391=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1152, "list_item$1sNodeph"))));
        litem_440->prev=self->head;
        litem_440->next=((void*)0);
        __dec_obj160=litem_440->item;
        litem_440->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_440;
        self->head->next=litem_440;
    }
    else {
        litem_441=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value392=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1162, "list_item$1sNodeph"))));
        litem_441->prev=self->tail;
        litem_441->next=((void*)0);
        __dec_obj161=litem_441->item;
        litem_441->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_441;
        self->tail=litem_441;
    }
    self->len++;
    __result295__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result295__;
}

static struct list$1sNodeph* list$1sNodeph_initialize_with_values(struct list$1sNodeph* self, int num_value, struct sNode** values){
void* __result_obj__=(void*)0;
int i_451;
struct list$1sNodeph* __result302__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_451=0;    i_451<num_value;    i_451++    ){
        list$1sNodeph_push_back(self,values[i_451]);
    }
    __result302__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

struct sNode* create_exception_throw(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value426 = (void*)0;
char* sname_453;
int sline_454;
int var_num_stack_456;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
char* __list_values3___457[2];
void* __right_value430 = (void*)0;
void* __right_value431 = (void*)0;
struct list$1charph* multiple_assign_458;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct sNode* get_return_value_459;
struct buffer* source_460;
char* p_461;
char* head_462;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct buffer* buf_463;
struct buffer* __dec_obj182;
void* __right_value436 = (void*)0;
struct sBlock* if_block_464;
struct buffer* __dec_obj183;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_465;
int elif_num_466;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
struct list$1sBlockph* elif_blocks_467;
struct sBlock* else_block_468;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sNode* expression_node2_469;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct sNode* _inf_value5;
struct sIfNode* _inf_obj_value5;
void* __right_value452 = (void*)0;
struct sNode* if_node_470;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct sNode* load_var_472;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* _inf_value6;
struct sSaveRightValueObjects* _inf_obj_value6;
void* __right_value460 = (void*)0;
struct sNode* save_right_value_objects_473;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value7;
struct sRestoreRightValueObjects* _inf_obj_value7;
void* __right_value465 = (void*)0;
struct sNode* restore_right_value_objects_475;
struct sNode* __list_values4___478[5];
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sNodeph* multiple_node_477;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* _inf_value8;
struct sMultipleNode* _inf_obj_value8;
void* __right_value473 = (void*)0;
struct sNode* __result314__;
    sname_453=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_454=info->sline;
    if(    info->comma_instead_of_semicolon) {
        err_msg(info,"can't be called exception_throw in conditional expression");
        exit(1);
    }
    parse_sharp_v5(info);
    static int var_num_455=0;
    var_num_455++;
    var_num_stack_456=var_num_455;
    multiple_assign_458=(struct list$1charph*)come_increment_ref_count((__list_values3___457[0]=(char*)come_increment_ref_count(((char*)(__right_value428=xsprintf("come_exception_var_b\%s",((char*)(__right_value427=int_to_string(var_num_stack_456))))))),
__list_values3___457[1]=(char*)come_increment_ref_count(((char*)(__right_value429=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 602, "struct list$1charph")),2,__list_values3___457)));
    /* U11 */__right_value427 = come_decrement_ref_count2(__right_value427, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value428 = come_decrement_ref_count2(__right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value429 = come_decrement_ref_count2(__right_value429, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_459=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_458),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_460=(struct buffer*)come_increment_ref_count(info->source);
    p_461=info->p;
    head_462=info->head;
    buf_463=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 611, "buffer"))));
    buffer_append_format(buf_463,"{ return none(Err); }");
    __dec_obj182=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_463);
    come_call_finalizer3(__dec_obj182,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_454;
    if_block_464=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    __dec_obj183=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_460);
    come_call_finalizer3(__dec_obj183,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_461;
    info->head=head_462;
    info->sline=sline_454;
    elif_expression_nodes_465=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 627, "list$1sNodeph"))));
    elif_num_466=0;
    elif_blocks_467=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 630, "list$1sBlockph"))));
    else_block_468=((void*)0);
    expression_node2_469=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value441=xsprintf("Err"))),info));
    /* U11 */__right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 636, "struct sNode");
    _inf_obj_value5=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value444=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 636, "sIfNode")),(struct sNode*)come_increment_ref_count(expression_node2_469),if_block_464,elif_expression_nodes_465,elif_blocks_467,elif_num_466,else_block_468,(_Bool)0,info))));
    _inf_value5->_protocol_obj=_inf_obj_value5;
    _inf_value5->finalize=(void*)sIfNode_finalize;
    _inf_value5->clone=(void*)sIfNode_clone;
    _inf_value5->compile=(void*)sIfNode_compile;
    _inf_value5->sline=(void*)sNodeBase_sline;
    _inf_value5->sline_real=(void*)sNodeBase_sline_real;
    _inf_value5->sname=(void*)sNodeBase_sname;
    _inf_value5->terminated=(void*)sIfNode_terminated;
    _inf_value5->kind=(void*)sIfNode_kind;
    if_node_470=(struct sNode*)come_increment_ref_count(_inf_value5);
    /*g*/come_call_finalizer3(__right_value444,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    load_var_472=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value454=xsprintf("come_exception_var_b\%s",((char*)(__right_value453=int_to_string(var_num_stack_456)))))),info));
    /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value454 = come_decrement_ref_count2(__right_value454, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 639, "struct sNode");
    _inf_obj_value6=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value457=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 639, "sSaveRightValueObjects")),info))));
    _inf_value6->_protocol_obj=_inf_obj_value6;
    _inf_value6->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value6->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value6->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value6->sline=(void*)sNodeBase_sline;
    _inf_value6->sline_real=(void*)sNodeBase_sline_real;
    _inf_value6->sname=(void*)sNodeBase_sname;
    _inf_value6->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value6->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_473=(struct sNode*)come_increment_ref_count(_inf_value6);
    /*g*/come_call_finalizer3(__right_value457,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 640, "struct sNode");
    _inf_obj_value7=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value462=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 640, "sRestoreRightValueObjects")),info))));
    _inf_value7->_protocol_obj=_inf_obj_value7;
    _inf_value7->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value7->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value7->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value7->sline=(void*)sNodeBase_sline;
    _inf_value7->sline_real=(void*)sNodeBase_sline_real;
    _inf_value7->sname=(void*)sNodeBase_sname;
    _inf_value7->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value7->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_475=(struct sNode*)come_increment_ref_count(_inf_value7);
    /*g*/come_call_finalizer3(__right_value462,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_477=(struct list$1sNodeph*)come_increment_ref_count((__list_values4___478[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_473),
__list_values4___478[1]=(struct sNode*)come_increment_ref_count(get_return_value_459),
__list_values4___478[2]=(struct sNode*)come_increment_ref_count(if_node_470),
__list_values4___478[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_475),
__list_values4___478[4]=(struct sNode*)come_increment_ref_count(load_var_472),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 642, "struct list$1sNodeph")),5,__list_values4___478)));
    _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 644, "struct sNode");
    _inf_obj_value8=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value469=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 644, "sMultipleNode")),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_477),info))));
    _inf_value8->_protocol_obj=_inf_obj_value8;
    _inf_value8->finalize=(void*)sMultipleNode_finalize;
    _inf_value8->clone=(void*)sMultipleNode_clone;
    _inf_value8->compile=(void*)sMultipleNode_compile;
    _inf_value8->sline=(void*)sNodeBase_sline;
    _inf_value8->sline_real=(void*)sNodeBase_sline_real;
    _inf_value8->sname=(void*)sNodeBase_sname;
    _inf_value8->terminated=(void*)sMultipleNode_terminated;
    _inf_value8->kind=(void*)sMultipleNode_kind;
    __result314__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value473=_inf_value8));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_453 = come_decrement_ref_count2(sname_453, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign_458,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_459) { get_return_value_459 = come_decrement_ref_count2(get_return_value_459, ((struct sNode*)get_return_value_459)->finalize, ((struct sNode*)get_return_value_459)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(source_460,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_463,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(if_block_464,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_465,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_467,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_468,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(expression_node2_469) { expression_node2_469 = come_decrement_ref_count2(expression_node2_469, ((struct sNode*)expression_node2_469)->finalize, ((struct sNode*)expression_node2_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(if_node_470) { if_node_470 = come_decrement_ref_count2(if_node_470, ((struct sNode*)if_node_470)->finalize, ((struct sNode*)if_node_470)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_472) { load_var_472 = come_decrement_ref_count2(load_var_472, ((struct sNode*)load_var_472)->finalize, ((struct sNode*)load_var_472)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_473) { save_right_value_objects_473 = come_decrement_ref_count2(save_right_value_objects_473, ((struct sNode*)save_right_value_objects_473)->finalize, ((struct sNode*)save_right_value_objects_473)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_475) { restore_right_value_objects_475 = come_decrement_ref_count2(restore_right_value_objects_475, ((struct sNode*)restore_right_value_objects_475)->finalize, ((struct sNode*)restore_right_value_objects_475)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(multiple_node_477,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value469,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value473) { __right_value473 = come_decrement_ref_count2(__right_value473, ((struct sNode*)__right_value473)->finalize, ((struct sNode*)__right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result314__;
}

struct sNode* create_exception_value(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value474 = (void*)0;
char* sname_480;
int sline_481;
int var_num_stack_483;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __list_values5___484[2];
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
struct list$1charph* multiple_assign_485;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* get_return_value_486;
struct buffer* source_487;
char* p_488;
char* head_489;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
struct buffer* buf_490;
struct buffer* __dec_obj204;
_Bool no_comma_491;
void* __right_value484 = (void*)0;
struct sNode* exp_492;
struct buffer* __dec_obj205;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
struct sNode* expression_node2_493;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
struct sNode* cond_494;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
struct sNode* load_var_495;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sNode* _inf_value9;
struct sSaveRightValueObjects* _inf_obj_value9;
void* __right_value496 = (void*)0;
struct sNode* save_right_value_objects_496;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
struct sNode* _inf_value10;
struct sRestoreRightValueObjects* _inf_obj_value10;
void* __right_value501 = (void*)0;
struct sNode* restore_right_value_objects_498;
struct sNode* __list_values6___501[5];
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
struct list$1sNodeph* multiple_node_500;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
struct sNode* _inf_value11;
struct sMultipleNode* _inf_obj_value11;
void* __right_value509 = (void*)0;
struct sNode* __result321__;
    sname_480=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_481=info->sline;
    parse_sharp_v5(info);
    static int var_num_482=0;
    var_num_482++;
    var_num_stack_483=var_num_482;
    multiple_assign_485=(struct list$1charph*)come_increment_ref_count((__list_values5___484[0]=(char*)come_increment_ref_count(((char*)(__right_value476=xsprintf("come_exception_var_c\%s",((char*)(__right_value475=int_to_string(var_num_stack_483))))))),
__list_values5___484[1]=(char*)come_increment_ref_count(((char*)(__right_value477=xsprintf("Err")))),
list$1charph_initialize_with_values((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "08if.c", 659, "struct list$1charph")),2,__list_values5___484)));
    /* U11 */__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    get_return_value_486=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("var")),(struct list$1charph*)come_increment_ref_count(multiple_assign_485),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    source_487=(struct buffer*)come_increment_ref_count(info->source);
    p_488=info->p;
    head_489=info->head;
    buf_490=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "08if.c", 668, "buffer"))));
    buffer_append_str(buf_490,"puts(Err), exit(0)");
    __dec_obj204=info->source;
    info->source=(struct buffer*)come_increment_ref_count(buf_490);
    come_call_finalizer3(__dec_obj204,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    info->sline=sline_481;
    no_comma_491=info->no_comma;
    info->no_comma=(_Bool)0;
    exp_492=(struct sNode*)come_increment_ref_count(expression_v13(info));
    info->no_comma=no_comma_491;
    __dec_obj205=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_487);
    come_call_finalizer3(__dec_obj205,buffer_finalize, 0, 0, 0, 0, (void*)0);
    info->p=p_488;
    info->head=head_489;
    info->sline=sline_481;
    expression_node2_493=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value485=xsprintf("Err"))),info));
    /* U11 */__right_value485 = come_decrement_ref_count2(__right_value485, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    cond_494=(struct sNode*)come_increment_ref_count(conditional_node((struct sNode*)come_increment_ref_count(expression_node2_493),(struct sNode*)come_increment_ref_count(exp_492),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    load_var_495=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value490=xsprintf("come_exception_var_c\%s",((char*)(__right_value489=int_to_string(var_num_stack_483)))))),info));
    /* U11 */__right_value489 = come_decrement_ref_count2(__right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    /* U11 */__right_value490 = come_decrement_ref_count2(__right_value490, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 692, "struct sNode");
    _inf_obj_value9=(struct sSaveRightValueObjects*)come_increment_ref_count(((struct sSaveRightValueObjects*)(__right_value493=sSaveRightValueObjects_initialize((struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "08if.c", 692, "sSaveRightValueObjects")),info))));
    _inf_value9->_protocol_obj=_inf_obj_value9;
    _inf_value9->finalize=(void*)sSaveRightValueObjects_finalize;
    _inf_value9->clone=(void*)sSaveRightValueObjects_clone;
    _inf_value9->compile=(void*)sSaveRightValueObjects_compile;
    _inf_value9->sline=(void*)sNodeBase_sline;
    _inf_value9->sline_real=(void*)sNodeBase_sline_real;
    _inf_value9->sname=(void*)sNodeBase_sname;
    _inf_value9->terminated=(void*)sSaveRightValueObjects_terminated;
    _inf_value9->kind=(void*)sSaveRightValueObjects_kind;
    save_right_value_objects_496=(struct sNode*)come_increment_ref_count(_inf_value9);
    /*g*/come_call_finalizer3(__right_value493,sSaveRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 693, "struct sNode");
    _inf_obj_value10=(struct sRestoreRightValueObjects*)come_increment_ref_count(((struct sRestoreRightValueObjects*)(__right_value498=sRestoreRightValueObjects_initialize((struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "08if.c", 693, "sRestoreRightValueObjects")),info))));
    _inf_value10->_protocol_obj=_inf_obj_value10;
    _inf_value10->finalize=(void*)sRestoreRightValueObjects_finalize;
    _inf_value10->clone=(void*)sRestoreRightValueObjects_clone;
    _inf_value10->compile=(void*)sRestoreRightValueObjects_compile;
    _inf_value10->sline=(void*)sNodeBase_sline;
    _inf_value10->sline_real=(void*)sNodeBase_sline_real;
    _inf_value10->sname=(void*)sNodeBase_sname;
    _inf_value10->terminated=(void*)sRestoreRightValueObjects_terminated;
    _inf_value10->kind=(void*)sRestoreRightValueObjects_kind;
    restore_right_value_objects_498=(struct sNode*)come_increment_ref_count(_inf_value10);
    /*g*/come_call_finalizer3(__right_value498,sRestoreRightValueObjects_finalize, 0, 1, 0, 0, __result_obj__);
    multiple_node_500=(struct list$1sNodeph*)come_increment_ref_count((__list_values6___501[0]=(struct sNode*)come_increment_ref_count(save_right_value_objects_496),
__list_values6___501[1]=(struct sNode*)come_increment_ref_count(get_return_value_486),
__list_values6___501[2]=(struct sNode*)come_increment_ref_count(cond_494),
__list_values6___501[3]=(struct sNode*)come_increment_ref_count(restore_right_value_objects_498),
__list_values6___501[4]=(struct sNode*)come_increment_ref_count(load_var_495),
list$1sNodeph_initialize_with_values((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 695, "struct list$1sNodeph")),5,__list_values6___501)));
    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 697, "struct sNode");
    _inf_obj_value11=(struct sMultipleNode*)come_increment_ref_count(((struct sMultipleNode*)(__right_value505=sMultipleNode_initialize((struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "08if.c", 697, "sMultipleNode")),(struct list$1sNodeph*)come_increment_ref_count(multiple_node_500),info))));
    _inf_value11->_protocol_obj=_inf_obj_value11;
    _inf_value11->finalize=(void*)sMultipleNode_finalize;
    _inf_value11->clone=(void*)sMultipleNode_clone;
    _inf_value11->compile=(void*)sMultipleNode_compile;
    _inf_value11->sline=(void*)sNodeBase_sline;
    _inf_value11->sline_real=(void*)sNodeBase_sline_real;
    _inf_value11->sname=(void*)sNodeBase_sname;
    _inf_value11->terminated=(void*)sMultipleNode_terminated;
    _inf_value11->kind=(void*)sMultipleNode_kind;
    __result321__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value509=_inf_value11));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_480 = come_decrement_ref_count2(sname_480, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(multiple_assign_485,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    if(get_return_value_486) { get_return_value_486 = come_decrement_ref_count2(get_return_value_486, ((struct sNode*)get_return_value_486)->finalize, ((struct sNode*)get_return_value_486)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(source_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_490,buffer_finalize, 0, 0, 0, 0, (void*)0);
    if(exp_492) { exp_492 = come_decrement_ref_count2(exp_492, ((struct sNode*)exp_492)->finalize, ((struct sNode*)exp_492)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(expression_node2_493) { expression_node2_493 = come_decrement_ref_count2(expression_node2_493, ((struct sNode*)expression_node2_493)->finalize, ((struct sNode*)expression_node2_493)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(cond_494) { cond_494 = come_decrement_ref_count2(cond_494, ((struct sNode*)cond_494)->finalize, ((struct sNode*)cond_494)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(load_var_495) { load_var_495 = come_decrement_ref_count2(load_var_495, ((struct sNode*)load_var_495)->finalize, ((struct sNode*)load_var_495)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(save_right_value_objects_496) { save_right_value_objects_496 = come_decrement_ref_count2(save_right_value_objects_496, ((struct sNode*)save_right_value_objects_496)->finalize, ((struct sNode*)save_right_value_objects_496)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(restore_right_value_objects_498) { restore_right_value_objects_498 = come_decrement_ref_count2(restore_right_value_objects_498, ((struct sNode*)restore_right_value_objects_498)->finalize, ((struct sNode*)restore_right_value_objects_498)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(multiple_node_500,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value505,sMultipleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value509) { __right_value509 = come_decrement_ref_count2(__right_value509, ((struct sNode*)__right_value509)->finalize, ((struct sNode*)__right_value509)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void sSaveRightValueObjects_finalize(struct sSaveRightValueObjects* self){
char* __dec_obj206;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj206=self->sname;
            /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSaveRightValueObjects* sSaveRightValueObjects_clone(struct sSaveRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sSaveRightValueObjects* __result315__;
void* __right_value494 = (void*)0;
struct sSaveRightValueObjects* result_497;
void* __right_value495 = (void*)0;
char* __dec_obj207;
struct sSaveRightValueObjects* __result316__;
    if(    self==(void*)0) {
        __result315__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result315__;
    }
    result_497=(struct sSaveRightValueObjects*)come_increment_ref_count((struct sSaveRightValueObjects*)come_calloc(1, sizeof(struct sSaveRightValueObjects)*(1), "sSaveRightValueObjects_clone", 3, "sSaveRightValueObjects"));
    if(    self!=((void*)0)) {
        result_497->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj207=result_497->sname;
        result_497->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_497->sline_real=self->sline_real;
    }
    __result316__ = gComeFunResultObject = __result_obj__ = result_497;
    /*i*/come_call_finalizer3(result_497,sSaveRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void sRestoreRightValueObjects_finalize(struct sRestoreRightValueObjects* self){
char* __dec_obj208;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj208=self->sname;
            /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sRestoreRightValueObjects* sRestoreRightValueObjects_clone(struct sRestoreRightValueObjects* self){
void* __result_obj__=(void*)0;
struct sRestoreRightValueObjects* __result317__;
void* __right_value499 = (void*)0;
struct sRestoreRightValueObjects* result_499;
void* __right_value500 = (void*)0;
char* __dec_obj209;
struct sRestoreRightValueObjects* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_499=(struct sRestoreRightValueObjects*)come_increment_ref_count((struct sRestoreRightValueObjects*)come_calloc(1, sizeof(struct sRestoreRightValueObjects)*(1), "sRestoreRightValueObjects_clone", 3, "sRestoreRightValueObjects"));
    if(    self!=((void*)0)) {
        result_499->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj209=result_499->sname;
        result_499->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_499->sline_real=self->sline_real;
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_499;
    /*i*/come_call_finalizer3(result_499,sRestoreRightValueObjects_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void sMultipleNode_finalize(struct sMultipleNode* self){
char* __dec_obj210;
struct list$1sNodeph* __dec_obj211;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj210=self->sname;
            /*G*/ __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        if(        self->multiple_node==gComeFunResultObject) {
            __dec_obj211=self->multiple_node;
            come_call_finalizer3(__dec_obj211,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->multiple_node,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMultipleNode* sMultipleNode_clone(struct sMultipleNode* self){
void* __result_obj__=(void*)0;
struct sMultipleNode* __result319__;
void* __right_value506 = (void*)0;
struct sMultipleNode* result_502;
void* __right_value507 = (void*)0;
char* __dec_obj212;
void* __right_value508 = (void*)0;
struct list$1sNodeph* __dec_obj213;
struct sMultipleNode* __result320__;
    if(    self==(void*)0) {
        __result319__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result319__;
    }
    result_502=(struct sMultipleNode*)come_increment_ref_count((struct sMultipleNode*)come_calloc(1, sizeof(struct sMultipleNode)*(1), "sMultipleNode_clone", 3, "sMultipleNode"));
    if(    self!=((void*)0)) {
        result_502->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj212=result_502->sname;
        result_502->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_502->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->multiple_node!=((void*)0)) {
        __dec_obj213=result_502->multiple_node;
        result_502->multiple_node=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->multiple_node));
        come_call_finalizer3(__dec_obj213,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result320__ = gComeFunResultObject = __result_obj__ = result_502;
    /*i*/come_call_finalizer3(result_502,sMultipleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

struct sNode* string_node_v8(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value510 = (void*)0;
char* sname_503;
int sline_504;
int sline_real_505;
void* __right_value511 = (void*)0;
struct sNode* expression_node_506;
void* __right_value512 = (void*)0;
struct sBlock* if_block_507;
void* __right_value513 = (void*)0;
void* __right_value514 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_508;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
struct list$1sBlockph* elif_blocks_509;
int elif_num_510;
struct sBlock* else_block_511;
char* saved_p_512;
int saved_sline_513;
void* __right_value517 = (void*)0;
char* buf_514;
int sline_real_515;
void* __right_value518 = (void*)0;
struct sNode* expression_node_516;
void* __right_value519 = (void*)0;
struct sBlock* elif_block_517;
void* __right_value523 = (void*)0;
struct sBlock* __dec_obj217;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
struct sNode* _inf_value12;
struct sIfNode* _inf_obj_value12;
void* __right_value533 = (void*)0;
struct sNode* result_521;
struct sNode* __result325__;
void* __right_value534 = (void*)0;
struct sNode* __result326__;
    if(    charp_operator_equals(buf,"if")) {
        sname_503=(char*)come_increment_ref_count(string_clone(info->sname));
        sline_504=info->sline;
        sline_real_505=info->sline_real;
        info->sline_real=info->sline;
        parse_sharp_v5(info);
        expected_next_character(40,info);
        expression_node_506=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        parse_sharp_v5(info);
        if_block_507=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        elif_expression_nodes_508=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 720, "list$1sNodeph"))));
        elif_blocks_509=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 722, "list$1sBlockph"))));
        elif_num_510=0;
        else_block_511=((void*)0);
        while(1) {
            saved_p_512=info->p;
            saved_sline_513=info->sline;
            parse_sharp_v5(info);
            if(            *info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            if(            !xisalpha(*info->p)) {
                break;
            }
            parse_sharp_v5(info);
            buf_514=(char*)come_increment_ref_count(parse_word(info));
            parse_sharp_v5(info);
            if(            string_operator_equals(buf_514,"else")) {
                sline_real_515=info->sline_real;
                info->sline_real=info->sline;
                if(                parsecmp("if",info)) {
                    parse_sharp_v5(info);
                    info->p+=strlen("if");
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    expected_next_character(40,info);
                    expression_node_516=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_push_back(elif_expression_nodes_508,(struct sNode*)come_increment_ref_count(expression_node_516));
                    expected_next_character(41,info);
                    parse_sharp_v5(info);
                    elif_block_517=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    list$1sBlockph_push_back(elif_blocks_509,(struct sBlock*)come_increment_ref_count(elif_block_517));
                    elif_num_510++;
                    if(expression_node_516) { expression_node_516 = come_decrement_ref_count2(expression_node_516, ((struct sNode*)expression_node_516)->finalize, ((struct sNode*)expression_node_516)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    /*i*/come_call_finalizer3(elif_block_517,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                }
                else {
                    __dec_obj217=else_block_511;
                    else_block_511=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                    come_call_finalizer3(__dec_obj217,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */buf_514 = come_decrement_ref_count2(buf_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                info->sline_real=sline_real_515;
            }
            else {
                info->p=saved_p_512;
                info->sline=saved_sline_513;
                /* U13 */buf_514 = come_decrement_ref_count2(buf_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            /* U13 */buf_514 = come_decrement_ref_count2(buf_514, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 785, "struct sNode");
        _inf_obj_value12=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value525=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 785, "sIfNode")),(struct sNode*)come_increment_ref_count(expression_node_506),if_block_507,elif_expression_nodes_508,elif_blocks_509,elif_num_510,else_block_511,(_Bool)0,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sIfNode_finalize;
        _inf_value12->clone=(void*)sIfNode_clone;
        _inf_value12->compile=(void*)sIfNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sIfNode_terminated;
        _inf_value12->kind=(void*)sIfNode_kind;
        result_521=(struct sNode*)come_increment_ref_count(_inf_value12);
        /*g*/come_call_finalizer3(__right_value525,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
        info->sline_real=sline_real_505;
        __result325__ = gComeFunResultObject = __result_obj__ = result_521;
        /* U13 */sname_503 = come_decrement_ref_count2(sname_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_506) { expression_node_506 = come_decrement_ref_count2(expression_node_506, ((struct sNode*)expression_node_506)->finalize, ((struct sNode*)expression_node_506)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(if_block_507,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_expression_nodes_508,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_blocks_509,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(else_block_511,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_521) { result_521 = come_decrement_ref_count2(result_521, ((struct sNode*)result_521)->finalize, ((struct sNode*)result_521)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result325__;
        /* U13 */sname_503 = come_decrement_ref_count2(sname_503, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(expression_node_506) { expression_node_506 = come_decrement_ref_count2(expression_node_506, ((struct sNode*)expression_node_506)->finalize, ((struct sNode*)expression_node_506)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(if_block_507,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_expression_nodes_508,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(elif_blocks_509,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(else_block_511,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        if(result_521) { result_521 = come_decrement_ref_count2(result_521, ((struct sNode*)result_521)->finalize, ((struct sNode*)result_521)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result326__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value534=string_node_v7(buf,head,head_sline,info)));
    if(__right_value534) { __right_value534 = come_decrement_ref_count2(__right_value534, ((struct sNode*)__right_value534)->finalize, ((struct sNode*)__right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result326__;
}

static struct list$1sBlockph* list$1sBlockph_push_back(struct list$1sBlockph* self, struct sBlock* item){
void* __result_obj__=(void*)0;
void* __right_value520 = (void*)0;
struct list_item$1sBlockph* litem_518;
struct sBlock* __dec_obj214;
void* __right_value521 = (void*)0;
struct list_item$1sBlockph* litem_519;
struct sBlock* __dec_obj215;
void* __right_value522 = (void*)0;
struct list_item$1sBlockph* litem_520;
struct sBlock* __dec_obj216;
struct list$1sBlockph* __result322__;
    if(    self->len==0) {
        litem_518=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value520=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1142, "list_item$1sBlockph"))));
        litem_518->prev=((void*)0);
        litem_518->next=((void*)0);
        __dec_obj214=litem_518->item;
        litem_518->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj214,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_518;
        self->head=litem_518;
    }
    else if(    self->len==1) {
        litem_519=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value521=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1152, "list_item$1sBlockph"))));
        litem_519->prev=self->head;
        litem_519->next=((void*)0);
        __dec_obj215=litem_519->item;
        litem_519->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj215,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_519;
        self->head->next=litem_519;
    }
    else {
        litem_520=(struct list_item$1sBlockph*)come_increment_ref_count(((struct list_item$1sBlockph*)(__right_value522=(struct list_item$1sBlockph*)come_calloc(1, sizeof(struct list_item$1sBlockph)*(1), "./comelang.h", 1162, "list_item$1sBlockph"))));
        litem_520->prev=self->tail;
        litem_520->next=((void*)0);
        __dec_obj216=litem_520->item;
        litem_520->item=(struct sBlock*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj216,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_520;
        self->tail=litem_520;
    }
    self->len++;
    __result322__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result322__;
}

struct sNode* parse_or_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value535 = (void*)0;
char* sname_523;
int sline_524;
void* __right_value536 = (void*)0;
struct sBlock* if_block_525;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
struct sNode* _inf_value13;
struct sOrStatmentNode* _inf_obj_value13;
void* __right_value543 = (void*)0;
struct sNode* __result329__;
    sname_523=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_524=info->sline;
    parse_sharp_v5(info);
    if_block_525=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 803, "struct sNode");
    _inf_obj_value13=(struct sOrStatmentNode*)come_increment_ref_count(((struct sOrStatmentNode*)(__right_value538=sOrStatmentNode_initialize((struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "08if.c", 803, "sOrStatmentNode")),(struct sNode*)come_increment_ref_count(expression_node),if_block_525,info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sOrStatmentNode_finalize;
    _inf_value13->clone=(void*)sOrStatmentNode_clone;
    _inf_value13->compile=(void*)sOrStatmentNode_compile;
    _inf_value13->sline=(void*)sNodeBase_sline;
    _inf_value13->sline_real=(void*)sNodeBase_sline_real;
    _inf_value13->sname=(void*)sNodeBase_sname;
    _inf_value13->terminated=(void*)sOrStatmentNode_terminated;
    _inf_value13->kind=(void*)sOrStatmentNode_kind;
    __result329__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value543=_inf_value13));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_523 = come_decrement_ref_count2(sname_523, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(if_block_525,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value538,sOrStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value543) { __right_value543 = come_decrement_ref_count2(__right_value543, ((struct sNode*)__right_value543)->finalize, ((struct sNode*)__right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result329__;
}

static void sOrStatmentNode_finalize(struct sOrStatmentNode* self){
char* __dec_obj230;
struct sNode* __dec_obj231;
struct sBlock* __dec_obj232;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj230=self->sname;
            /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj231=self->mExpressionNode;
            /* U1 */ if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj232=self->mIfBlock;
            come_call_finalizer3(__dec_obj232,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sOrStatmentNode* sOrStatmentNode_clone(struct sOrStatmentNode* self){
void* __result_obj__=(void*)0;
struct sOrStatmentNode* __result327__;
void* __right_value539 = (void*)0;
struct sOrStatmentNode* result_526;
void* __right_value540 = (void*)0;
char* __dec_obj233;
void* __right_value541 = (void*)0;
struct sNode* __dec_obj234;
void* __right_value542 = (void*)0;
struct sBlock* __dec_obj235;
struct sOrStatmentNode* __result328__;
    if(    self==(void*)0) {
        __result327__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result327__;
    }
    result_526=(struct sOrStatmentNode*)come_increment_ref_count((struct sOrStatmentNode*)come_calloc(1, sizeof(struct sOrStatmentNode)*(1), "sOrStatmentNode_clone", 3, "sOrStatmentNode"));
    if(    self!=((void*)0)) {
        result_526->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_526->sname;
        result_526->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_526->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj234=result_526->mExpressionNode;
        result_526->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        /* U1 */ if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj235=result_526->mIfBlock;
        result_526->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer3(__dec_obj235,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result328__ = gComeFunResultObject = __result_obj__ = result_526;
    /*i*/come_call_finalizer3(result_526,sOrStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result328__;
}

struct sNode* parse_and_statment(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value544 = (void*)0;
char* sname_527;
int sline_528;
void* __right_value545 = (void*)0;
struct sBlock* if_block_529;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sNode* _inf_value14;
struct sAndStatmentNode* _inf_obj_value14;
void* __right_value552 = (void*)0;
struct sNode* __result332__;
    sname_527=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_528=info->sline;
    parse_sharp_v5(info);
    if_block_529=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 815, "struct sNode");
    _inf_obj_value14=(struct sAndStatmentNode*)come_increment_ref_count(((struct sAndStatmentNode*)(__right_value547=sAndStatmentNode_initialize((struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "08if.c", 815, "sAndStatmentNode")),(struct sNode*)come_increment_ref_count(expression_node),if_block_529,info))));
    _inf_value14->_protocol_obj=_inf_obj_value14;
    _inf_value14->finalize=(void*)sAndStatmentNode_finalize;
    _inf_value14->clone=(void*)sAndStatmentNode_clone;
    _inf_value14->compile=(void*)sAndStatmentNode_compile;
    _inf_value14->sline=(void*)sNodeBase_sline;
    _inf_value14->sline_real=(void*)sNodeBase_sline_real;
    _inf_value14->sname=(void*)sNodeBase_sname;
    _inf_value14->terminated=(void*)sAndStatmentNode_terminated;
    _inf_value14->kind=(void*)sAndStatmentNode_kind;
    __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value552=_inf_value14));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_527 = come_decrement_ref_count2(sname_527, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(if_block_529,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value547,sAndStatmentNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value552) { __right_value552 = come_decrement_ref_count2(__right_value552, ((struct sNode*)__right_value552)->finalize, ((struct sNode*)__right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result332__;
}

static void sAndStatmentNode_finalize(struct sAndStatmentNode* self){
char* __dec_obj236;
struct sNode* __dec_obj237;
struct sBlock* __dec_obj238;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj236=self->sname;
            /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj237=self->mExpressionNode;
            /* U1 */ if(__dec_obj237) { __dec_obj237 = come_decrement_ref_count2(__dec_obj237, ((struct sNode*)__dec_obj237)->finalize, ((struct sNode*)__dec_obj237)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj238=self->mIfBlock;
            come_call_finalizer3(__dec_obj238,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAndStatmentNode* sAndStatmentNode_clone(struct sAndStatmentNode* self){
void* __result_obj__=(void*)0;
struct sAndStatmentNode* __result330__;
void* __right_value548 = (void*)0;
struct sAndStatmentNode* result_530;
void* __right_value549 = (void*)0;
char* __dec_obj239;
void* __right_value550 = (void*)0;
struct sNode* __dec_obj240;
void* __right_value551 = (void*)0;
struct sBlock* __dec_obj241;
struct sAndStatmentNode* __result331__;
    if(    self==(void*)0) {
        __result330__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result330__;
    }
    result_530=(struct sAndStatmentNode*)come_increment_ref_count((struct sAndStatmentNode*)come_calloc(1, sizeof(struct sAndStatmentNode)*(1), "sAndStatmentNode_clone", 3, "sAndStatmentNode"));
    if(    self!=((void*)0)) {
        result_530->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj239=result_530->sname;
        result_530->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_530->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj240=result_530->mExpressionNode;
        result_530->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        /* U1 */ if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj241=result_530->mIfBlock;
        result_530->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer3(__dec_obj241,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result331__ = gComeFunResultObject = __result_obj__ = result_530;
    /*i*/come_call_finalizer3(result_530,sAndStatmentNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result331__;
}

struct sNode* parse_match(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value553 = (void*)0;
char* sname_531;
int sline_532;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct sNode* it_node_533;
void* __right_value556 = (void*)0;
struct sNode* conditional_value_534;
void* __right_value557 = (void*)0;
struct sBlock* if_block_535;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_536;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct list$1sBlockph* elif_blocks_537;
int elif_num_538;
struct sBlock* else_block_539;
void* __right_value562 = (void*)0;
struct sBlock* __dec_obj242;
void* __right_value563 = (void*)0;
struct sNode* conditional_value_540;
void* __right_value564 = (void*)0;
struct sBlock* elif_block_541;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sBlock* __dec_obj243;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
struct sNode* _inf_value15;
struct sIfNode* _inf_obj_value15;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
struct sNode* _inf_value16;
struct sMatchNode* _inf_obj_value16;
void* __right_value584 = (void*)0;
struct sNode* __result337__;
    sname_531=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_532=info->sline;
    expected_next_character(123,info);
    it_node_533=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    expected_next_character(40,info);
    conditional_value_534=(struct sNode*)come_increment_ref_count(expression_v13(info));
    expected_next_character(41,info);
    parse_sharp_v5(info);
    if_block_535=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_536=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 836, "list$1sNodeph"))));
    elif_blocks_537=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 837, "list$1sBlockph"))));
    elif_num_538=0;
    else_block_539=((void*)0);
    while((_Bool)1) {
        parse_sharp_v5(info);
        if(        strncmp(info->p,"else",strlen("else"))==0) {
            info->p+=strlen("else");
            skip_spaces_and_lf(info);
            __dec_obj242=else_block_539;
            else_block_539=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            come_call_finalizer3(__dec_obj242,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            expected_next_character(40,info);
            conditional_value_540=(struct sNode*)come_increment_ref_count(expression_v13(info));
            list$1sNodeph_add(elif_expression_nodes_536,(struct sNode*)come_increment_ref_count(conditional_value_540));
            expected_next_character(41,info);
            parse_sharp_v5(info);
            elif_block_541=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            list$1sBlockph_add(elif_blocks_537,(struct sBlock*)come_increment_ref_count(elif_block_541));
            elif_num_538++;
            if(conditional_value_540) { conditional_value_540 = come_decrement_ref_count2(conditional_value_540, ((struct sNode*)conditional_value_540)->finalize, ((struct sNode*)conditional_value_540)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(elif_block_541,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        *info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            break;
        }
    }
    if(    else_block_539==((void*)0)) {
        __dec_obj243=else_block_539;
        else_block_539=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 875, "sBlock")),info));
        come_call_finalizer3(__dec_obj243,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_539->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_539->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode");
    _inf_obj_value15=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value570=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 881, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_value_534),if_block_535,elif_expression_nodes_536,elif_blocks_537,elif_num_538,else_block_539,(_Bool)0,info))));
    _inf_value15->_protocol_obj=_inf_obj_value15;
    _inf_value15->finalize=(void*)sIfNode_finalize;
    _inf_value15->clone=(void*)sIfNode_clone;
    _inf_value15->compile=(void*)sIfNode_compile;
    _inf_value15->sline=(void*)sNodeBase_sline;
    _inf_value15->sline_real=(void*)sNodeBase_sline_real;
    _inf_value15->sname=(void*)sNodeBase_sname;
    _inf_value15->terminated=(void*)sIfNode_terminated;
    _inf_value15->kind=(void*)sIfNode_kind;
    _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 881, "struct sNode");
    _inf_obj_value16=(struct sMatchNode*)come_increment_ref_count(((struct sMatchNode*)(__right_value579=sMatchNode_initialize((struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "08if.c", 881, "sMatchNode")),(struct sNode*)come_increment_ref_count(it_node_533),(struct sNode*)come_increment_ref_count(_inf_value15),info))));
    _inf_value16->_protocol_obj=_inf_obj_value16;
    _inf_value16->finalize=(void*)sMatchNode_finalize;
    _inf_value16->clone=(void*)sMatchNode_clone;
    _inf_value16->compile=(void*)sMatchNode_compile;
    _inf_value16->sline=(void*)sNodeBase_sline;
    _inf_value16->sline_real=(void*)sNodeBase_sline_real;
    _inf_value16->sname=(void*)sNodeBase_sname;
    _inf_value16->terminated=(void*)sMatchNode_terminated;
    _inf_value16->kind=(void*)sMatchNode_kind;
    __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value584=_inf_value16));
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_531 = come_decrement_ref_count2(sname_531, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_533) { it_node_533 = come_decrement_ref_count2(it_node_533, ((struct sNode*)it_node_533)->finalize, ((struct sNode*)it_node_533)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_value_534) { conditional_value_534 = come_decrement_ref_count2(conditional_value_534, ((struct sNode*)conditional_value_534)->finalize, ((struct sNode*)conditional_value_534)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_535,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_536,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_537,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_539,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value570,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value579,sMatchNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value584) { __right_value584 = come_decrement_ref_count2(__right_value584, ((struct sNode*)__right_value584)->finalize, ((struct sNode*)__right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void sMatchNode_finalize(struct sMatchNode* self){
char* __dec_obj256;
struct sNode* __dec_obj257;
struct sNode* __dec_obj258;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj256=self->sname;
            /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj257=self->it_node;
            /* U1 */ if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj258=self->match_node;
            /* U1 */ if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMatchNode* sMatchNode_clone(struct sMatchNode* self){
void* __result_obj__=(void*)0;
struct sMatchNode* __result335__;
void* __right_value580 = (void*)0;
struct sMatchNode* result_543;
void* __right_value581 = (void*)0;
char* __dec_obj259;
void* __right_value582 = (void*)0;
struct sNode* __dec_obj260;
void* __right_value583 = (void*)0;
struct sNode* __dec_obj261;
struct sMatchNode* __result336__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_543=(struct sMatchNode*)come_increment_ref_count((struct sMatchNode*)come_calloc(1, sizeof(struct sMatchNode)*(1), "sMatchNode_clone", 3, "sMatchNode"));
    if(    self!=((void*)0)) {
        result_543->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj259=result_543->sname;
        result_543->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_543->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj260=result_543->it_node;
        result_543->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        /* U1 */ if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj261=result_543->match_node;
        result_543->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        /* U1 */ if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_543;
    /*i*/come_call_finalizer3(result_543,sMatchNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

struct sNode* parse_if_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
char* sname_544;
int sline_545;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sNode* it_node_546;
void* __right_value588 = (void*)0;
struct sNode* conditional_node_547;
void* __right_value589 = (void*)0;
struct sBlock* if_block_548;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_549;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct list$1sBlockph* elif_blocks_550;
int elif_num_551;
struct sBlock* else_block_552;
char* saved_p_553;
int saved_sline_554;
void* __right_value594 = (void*)0;
char* buf_555;
void* __right_value595 = (void*)0;
struct sNode* expression_node_556;
void* __right_value596 = (void*)0;
struct sBlock* elif_block_557;
void* __right_value597 = (void*)0;
struct sBlock* __dec_obj262;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sBlock* __dec_obj263;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value17;
struct sIfNode* _inf_obj_value17;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
struct sNode* _inf_value18;
struct sIfMethodNode* _inf_obj_value18;
void* __right_value617 = (void*)0;
struct sNode* result_558;
struct sNode* __result342__;
    sname_544=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_545=info->sline;
    it_node_546=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_547=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    parse_sharp_v5(info);
    if_block_548=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_549=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 897, "list$1sNodeph"))));
    elif_blocks_550=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 899, "list$1sBlockph"))));
    elif_num_551=0;
    else_block_552=((void*)0);
    while(1) {
        saved_p_553=info->p;
        saved_sline_554=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_555=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_555,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_556=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_549,(struct sNode*)come_increment_ref_count(expression_node_556));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_557=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_550,(struct sBlock*)come_increment_ref_count(elif_block_557));
                elif_num_551++;
                if(expression_node_556) { expression_node_556 = come_decrement_ref_count2(expression_node_556, ((struct sNode*)expression_node_556)->finalize, ((struct sNode*)expression_node_556)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(elif_block_557,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj262=else_block_552;
                else_block_552=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj262,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */buf_555 = come_decrement_ref_count2(buf_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_553;
            info->sline=saved_sline_554;
            /* U13 */buf_555 = come_decrement_ref_count2(buf_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */buf_555 = come_decrement_ref_count2(buf_555, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_552==((void*)0)) {
        __dec_obj263=else_block_552;
        else_block_552=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 960, "sBlock")),info));
        come_call_finalizer3(__dec_obj263,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_552->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_552->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode");
    _inf_obj_value17=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value603=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 966, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_node_547),if_block_548,elif_expression_nodes_549,elif_blocks_550,elif_num_551,else_block_552,(_Bool)0,info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sIfNode_finalize;
    _inf_value17->clone=(void*)sIfNode_clone;
    _inf_value17->compile=(void*)sIfNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sIfNode_terminated;
    _inf_value17->kind=(void*)sIfNode_kind;
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 966, "struct sNode");
    _inf_obj_value18=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value612=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 966, "sIfMethodNode")),(struct sNode*)come_increment_ref_count(it_node_546),(struct sNode*)come_increment_ref_count(_inf_value17),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sIfMethodNode_finalize;
    _inf_value18->clone=(void*)sIfMethodNode_clone;
    _inf_value18->compile=(void*)sIfMethodNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sIfMethodNode_terminated;
    _inf_value18->kind=(void*)sIfMethodNode_kind;
    result_558=(struct sNode*)come_increment_ref_count(_inf_value18);
    /*g*/come_call_finalizer3(__right_value603,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value612,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result342__ = gComeFunResultObject = __result_obj__ = result_558;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_544 = come_decrement_ref_count2(sname_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_546) { it_node_546 = come_decrement_ref_count2(it_node_546, ((struct sNode*)it_node_546)->finalize, ((struct sNode*)it_node_546)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_547) { conditional_node_547 = come_decrement_ref_count2(conditional_node_547, ((struct sNode*)conditional_node_547)->finalize, ((struct sNode*)conditional_node_547)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_548,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_549,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_550,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_552,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_558) { result_558 = come_decrement_ref_count2(result_558, ((struct sNode*)result_558)->finalize, ((struct sNode*)result_558)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result342__;
}

struct sNode* parse_elif_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value618 = (void*)0;
char* sname_561;
int sline_562;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
struct sNode* it_node_563;
void* __right_value621 = (void*)0;
struct sNode* conditional_node_564;
void* __right_value622 = (void*)0;
struct sNode* conditional_node2_565;
void* __right_value623 = (void*)0;
struct sBlock* if_block_566;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_567;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct list$1sBlockph* elif_blocks_568;
int elif_num_569;
struct sBlock* else_block_570;
char* saved_p_571;
int saved_sline_572;
void* __right_value628 = (void*)0;
char* buf_573;
void* __right_value629 = (void*)0;
struct sNode* expression_node_574;
void* __right_value630 = (void*)0;
struct sBlock* elif_block_575;
void* __right_value631 = (void*)0;
struct sBlock* __dec_obj282;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct sBlock* __dec_obj283;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct sNode* _inf_value19;
struct sIfNode* _inf_obj_value19;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
struct sNode* _inf_value20;
struct sIfMethodNode* _inf_obj_value20;
void* __right_value651 = (void*)0;
struct sNode* result_576;
struct sNode* __result347__;
    sname_561=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_562=info->sline;
    it_node_563=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_564=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_565=(struct sNode*)come_increment_ref_count(craete_logical_denial((struct sNode*)come_increment_ref_count(conditional_node_564),info));
    parse_sharp_v5(info);
    if_block_566=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_567=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 985, "list$1sNodeph"))));
    elif_blocks_568=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 987, "list$1sBlockph"))));
    elif_num_569=0;
    else_block_570=((void*)0);
    while(1) {
        saved_p_571=info->p;
        saved_sline_572=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_573=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_573,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_574=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_567,(struct sNode*)come_increment_ref_count(expression_node_574));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_575=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_568,(struct sBlock*)come_increment_ref_count(elif_block_575));
                elif_num_569++;
                if(expression_node_574) { expression_node_574 = come_decrement_ref_count2(expression_node_574, ((struct sNode*)expression_node_574)->finalize, ((struct sNode*)expression_node_574)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(elif_block_575,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj282=else_block_570;
                else_block_570=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj282,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */buf_573 = come_decrement_ref_count2(buf_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_571;
            info->sline=saved_sline_572;
            /* U13 */buf_573 = come_decrement_ref_count2(buf_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */buf_573 = come_decrement_ref_count2(buf_573, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_570==((void*)0)) {
        __dec_obj283=else_block_570;
        else_block_570=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1048, "sBlock")),info));
        come_call_finalizer3(__dec_obj283,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_570->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_570->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode");
    _inf_obj_value19=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value637=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1054, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_node2_565),if_block_566,elif_expression_nodes_567,elif_blocks_568,elif_num_569,else_block_570,(_Bool)0,info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sIfNode_finalize;
    _inf_value19->clone=(void*)sIfNode_clone;
    _inf_value19->compile=(void*)sIfNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sIfNode_terminated;
    _inf_value19->kind=(void*)sIfNode_kind;
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1054, "struct sNode");
    _inf_obj_value20=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value646=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1054, "sIfMethodNode")),(struct sNode*)come_increment_ref_count(it_node_563),(struct sNode*)come_increment_ref_count(_inf_value19),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sIfMethodNode_finalize;
    _inf_value20->clone=(void*)sIfMethodNode_clone;
    _inf_value20->compile=(void*)sIfMethodNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sIfMethodNode_terminated;
    _inf_value20->kind=(void*)sIfMethodNode_kind;
    result_576=(struct sNode*)come_increment_ref_count(_inf_value20);
    /*g*/come_call_finalizer3(__right_value637,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value646,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result347__ = gComeFunResultObject = __result_obj__ = result_576;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_561 = come_decrement_ref_count2(sname_561, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_563) { it_node_563 = come_decrement_ref_count2(it_node_563, ((struct sNode*)it_node_563)->finalize, ((struct sNode*)it_node_563)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_564) { conditional_node_564 = come_decrement_ref_count2(conditional_node_564, ((struct sNode*)conditional_node_564)->finalize, ((struct sNode*)conditional_node_564)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_565) { conditional_node2_565 = come_decrement_ref_count2(conditional_node2_565, ((struct sNode*)conditional_node2_565)->finalize, ((struct sNode*)conditional_node2_565)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_566,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_567,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_568,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_570,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_576) { result_576 = come_decrement_ref_count2(result_576, ((struct sNode*)result_576)->finalize, ((struct sNode*)result_576)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result347__;
}

struct sNode* parse_less_method_call(struct sNode* expression_node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value652 = (void*)0;
char* sname_579;
int sline_580;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct sNode* it_node_581;
void* __right_value655 = (void*)0;
struct sNode* conditional_node_582;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
struct sNode* conditional_node2_583;
void* __right_value658 = (void*)0;
struct sBlock* if_block_584;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1sNodeph* elif_expression_nodes_585;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
struct list$1sBlockph* elif_blocks_586;
int elif_num_587;
struct sBlock* else_block_588;
char* saved_p_589;
int saved_sline_590;
void* __right_value663 = (void*)0;
char* buf_591;
void* __right_value664 = (void*)0;
struct sNode* expression_node_592;
void* __right_value665 = (void*)0;
struct sBlock* elif_block_593;
void* __right_value666 = (void*)0;
struct sBlock* __dec_obj302;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
struct sBlock* __dec_obj303;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
struct sNode* _inf_value21;
struct sIfNode* _inf_obj_value21;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct sNode* _inf_value22;
struct sIfMethodNode* _inf_obj_value22;
void* __right_value686 = (void*)0;
struct sNode* result_594;
struct sNode* __result352__;
    sname_579=(char*)come_increment_ref_count(string_clone(info->sname));
    sline_580=info->sline;
    it_node_581=(struct sNode*)come_increment_ref_count(store_var((char*)come_increment_ref_count(xsprintf("Value")),((void*)0),((void*)0),((void*)0),(_Bool)1,(struct sNode*)come_increment_ref_count(expression_node),info));
    conditional_node_582=(struct sNode*)come_increment_ref_count(create_load_var("Value",info));
    conditional_node2_583=(struct sNode*)come_increment_ref_count(create_less((struct sNode*)come_increment_ref_count(conditional_node_582),(struct sNode*)come_increment_ref_count(create_int_node(0,info)),info));
    parse_sharp_v5(info);
    if_block_584=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    elif_expression_nodes_585=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "08if.c", 1073, "list$1sNodeph"))));
    elif_blocks_586=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockph_initialize((struct list$1sBlockph*)come_increment_ref_count((struct list$1sBlockph*)come_calloc(1, sizeof(struct list$1sBlockph)*(1), "08if.c", 1075, "list$1sBlockph"))));
    elif_num_587=0;
    else_block_588=((void*)0);
    while(1) {
        saved_p_589=info->p;
        saved_sline_590=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        !xisalpha(*info->p)) {
            break;
        }
        parse_sharp_v5(info);
        buf_591=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        string_operator_equals(buf_591,"else")) {
            if(            parsecmp("if",info)) {
                parse_sharp_v5(info);
                info->p+=strlen("if");
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                expected_next_character(40,info);
                expression_node_592=(struct sNode*)come_increment_ref_count(expression_v13(info));
                list$1sNodeph_push_back(elif_expression_nodes_585,(struct sNode*)come_increment_ref_count(expression_node_592));
                expected_next_character(41,info);
                parse_sharp_v5(info);
                elif_block_593=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                list$1sBlockph_push_back(elif_blocks_586,(struct sBlock*)come_increment_ref_count(elif_block_593));
                elif_num_587++;
                if(expression_node_592) { expression_node_592 = come_decrement_ref_count2(expression_node_592, ((struct sNode*)expression_node_592)->finalize, ((struct sNode*)expression_node_592)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(elif_block_593,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            }
            else {
                __dec_obj302=else_block_588;
                else_block_588=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
                come_call_finalizer3(__dec_obj302,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */buf_591 = come_decrement_ref_count2(buf_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
        }
        else {
            info->p=saved_p_589;
            info->sline=saved_sline_590;
            /* U13 */buf_591 = come_decrement_ref_count2(buf_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            break;
        }
        /* U13 */buf_591 = come_decrement_ref_count2(buf_591, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    if(    else_block_588==((void*)0)) {
        __dec_obj303=else_block_588;
        else_block_588=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "08if.c", 1136, "sBlock")),info));
        come_call_finalizer3(__dec_obj303,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        else_block_588->mOmitSemicolon=(_Bool)1;
        list$1sNodeph_push_back(else_block_588->mNodes,(struct sNode*)come_increment_ref_count(create_load_var("Value",info)));
    }
    _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode");
    _inf_obj_value21=(struct sIfNode*)come_increment_ref_count(((struct sIfNode*)(__right_value672=sIfNode_initialize((struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "08if.c", 1142, "sIfNode")),(struct sNode*)come_increment_ref_count(conditional_node2_583),if_block_584,elif_expression_nodes_585,elif_blocks_586,elif_num_587,else_block_588,(_Bool)0,info))));
    _inf_value21->_protocol_obj=_inf_obj_value21;
    _inf_value21->finalize=(void*)sIfNode_finalize;
    _inf_value21->clone=(void*)sIfNode_clone;
    _inf_value21->compile=(void*)sIfNode_compile;
    _inf_value21->sline=(void*)sNodeBase_sline;
    _inf_value21->sline_real=(void*)sNodeBase_sline_real;
    _inf_value21->sname=(void*)sNodeBase_sname;
    _inf_value21->terminated=(void*)sIfNode_terminated;
    _inf_value21->kind=(void*)sIfNode_kind;
    _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "08if.c", 1142, "struct sNode");
    _inf_obj_value22=(struct sIfMethodNode*)come_increment_ref_count(((struct sIfMethodNode*)(__right_value681=sIfMethodNode_initialize((struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "08if.c", 1142, "sIfMethodNode")),(struct sNode*)come_increment_ref_count(it_node_581),(struct sNode*)come_increment_ref_count(_inf_value21),info))));
    _inf_value22->_protocol_obj=_inf_obj_value22;
    _inf_value22->finalize=(void*)sIfMethodNode_finalize;
    _inf_value22->clone=(void*)sIfMethodNode_clone;
    _inf_value22->compile=(void*)sIfMethodNode_compile;
    _inf_value22->sline=(void*)sNodeBase_sline;
    _inf_value22->sline_real=(void*)sNodeBase_sline_real;
    _inf_value22->sname=(void*)sNodeBase_sname;
    _inf_value22->terminated=(void*)sIfMethodNode_terminated;
    _inf_value22->kind=(void*)sIfMethodNode_kind;
    result_594=(struct sNode*)come_increment_ref_count(_inf_value22);
    /*g*/come_call_finalizer3(__right_value672,sIfNode_finalize, 0, 1, 0, 0, __result_obj__);
    /*g*/come_call_finalizer3(__right_value681,sIfMethodNode_finalize, 0, 1, 0, 0, __result_obj__);
    __result352__ = gComeFunResultObject = __result_obj__ = result_594;
    if(expression_node) { expression_node = come_decrement_ref_count2(expression_node, ((struct sNode*)expression_node)->finalize, ((struct sNode*)expression_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /* U13 */sname_579 = come_decrement_ref_count2(sname_579, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(it_node_581) { it_node_581 = come_decrement_ref_count2(it_node_581, ((struct sNode*)it_node_581)->finalize, ((struct sNode*)it_node_581)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node_582) { conditional_node_582 = come_decrement_ref_count2(conditional_node_582, ((struct sNode*)conditional_node_582)->finalize, ((struct sNode*)conditional_node_582)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(conditional_node2_583) { conditional_node2_583 = come_decrement_ref_count2(conditional_node2_583, ((struct sNode*)conditional_node2_583)->finalize, ((struct sNode*)conditional_node2_583)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(if_block_584,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_expression_nodes_585,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(elif_blocks_586,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(else_block_588,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    if(result_594) { result_594 = come_decrement_ref_count2(result_594, ((struct sNode*)result_594)->finalize, ((struct sNode*)result_594)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void sIfNode_finalize(struct sIfNode* self){
char* __dec_obj304;
struct sNode* __dec_obj305;
struct sBlock* __dec_obj306;
struct list$1sNodeph* __dec_obj307;
struct list$1sBlockph* __dec_obj308;
struct sBlock* __dec_obj309;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj304=self->sname;
            /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        if(        self->mExpressionNode==gComeFunResultObject) {
            __dec_obj305=self->mExpressionNode;
            /* U1 */ if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mExpressionNode) { self->mExpressionNode = come_decrement_ref_count2(self->mExpressionNode, ((struct sNode*)self->mExpressionNode)->finalize, ((struct sNode*)self->mExpressionNode)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        if(        self->mIfBlock==gComeFunResultObject) {
            __dec_obj306=self->mIfBlock;
            come_call_finalizer3(__dec_obj306,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mIfBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        if(        self->mElifExpressionNodes==gComeFunResultObject) {
            __dec_obj307=self->mElifExpressionNodes;
            come_call_finalizer3(__dec_obj307,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mElifExpressionNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        if(        self->mElifBlocks==gComeFunResultObject) {
            __dec_obj308=self->mElifBlocks;
            come_call_finalizer3(__dec_obj308,list$1sBlockph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mElifBlocks,list$1sBlockphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        if(        self->mElseBlock==gComeFunResultObject) {
            __dec_obj309=self->mElseBlock;
            come_call_finalizer3(__dec_obj309,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mElseBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIfNode* sIfNode_clone(struct sIfNode* self){
void* __result_obj__=(void*)0;
struct sIfNode* __result348__;
void* __right_value673 = (void*)0;
struct sIfNode* result_595;
void* __right_value674 = (void*)0;
char* __dec_obj310;
void* __right_value675 = (void*)0;
struct sNode* __dec_obj311;
void* __right_value676 = (void*)0;
struct sBlock* __dec_obj312;
void* __right_value677 = (void*)0;
struct list$1sNodeph* __dec_obj313;
void* __right_value678 = (void*)0;
struct list$1sBlockph* __dec_obj314;
void* __right_value679 = (void*)0;
struct sBlock* __dec_obj315;
struct sIfNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_595=(struct sIfNode*)come_increment_ref_count((struct sIfNode*)come_calloc(1, sizeof(struct sIfNode)*(1), "sIfNode_clone", 3, "sIfNode"));
    if(    self!=((void*)0)) {
        result_595->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj310=result_595->sname;
        result_595->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_595->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mExpressionNode!=((void*)0)) {
        __dec_obj311=result_595->mExpressionNode;
        result_595->mExpressionNode=(struct sNode*)come_increment_ref_count(sNode_clone(self->mExpressionNode));
        /* U1 */ if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mIfBlock!=((void*)0)) {
        __dec_obj312=result_595->mIfBlock;
        result_595->mIfBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mIfBlock));
        come_call_finalizer3(__dec_obj312,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifExpressionNodes!=((void*)0)) {
        __dec_obj313=result_595->mElifExpressionNodes;
        result_595->mElifExpressionNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mElifExpressionNodes));
        come_call_finalizer3(__dec_obj313,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mElifBlocks!=((void*)0)) {
        __dec_obj314=result_595->mElifBlocks;
        result_595->mElifBlocks=(struct list$1sBlockph*)come_increment_ref_count(list$1sBlockphp_clone(self->mElifBlocks));
        come_call_finalizer3(__dec_obj314,list$1sBlockph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_595->mElifNum=self->mElifNum;
    }
    if(    self!=((void*)0)) {
        result_595->mGuard=self->mGuard;
    }
    if(    self!=((void*)0)&&self->mElseBlock!=((void*)0)) {
        __dec_obj315=result_595->mElseBlock;
        result_595->mElseBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mElseBlock));
        come_call_finalizer3(__dec_obj315,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_595;
    /*i*/come_call_finalizer3(result_595,sIfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sIfMethodNode_finalize(struct sIfMethodNode* self){
char* __dec_obj316;
struct sNode* __dec_obj317;
struct sNode* __dec_obj318;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj316=self->sname;
            /*G*/ __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        if(        self->it_node==gComeFunResultObject) {
            __dec_obj317=self->it_node;
            /* U1 */ if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->it_node) { self->it_node = come_decrement_ref_count2(self->it_node, ((struct sNode*)self->it_node)->finalize, ((struct sNode*)self->it_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        if(        self->match_node==gComeFunResultObject) {
            __dec_obj318=self->match_node;
            /* U1 */ if(__dec_obj318) { __dec_obj318 = come_decrement_ref_count2(__dec_obj318, ((struct sNode*)__dec_obj318)->finalize, ((struct sNode*)__dec_obj318)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->match_node) { self->match_node = come_decrement_ref_count2(self->match_node, ((struct sNode*)self->match_node)->finalize, ((struct sNode*)self->match_node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sIfMethodNode* sIfMethodNode_clone(struct sIfMethodNode* self){
void* __result_obj__=(void*)0;
struct sIfMethodNode* __result350__;
void* __right_value682 = (void*)0;
struct sIfMethodNode* result_596;
void* __right_value683 = (void*)0;
char* __dec_obj319;
void* __right_value684 = (void*)0;
struct sNode* __dec_obj320;
void* __right_value685 = (void*)0;
struct sNode* __dec_obj321;
struct sIfMethodNode* __result351__;
    if(    self==(void*)0) {
        __result350__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result350__;
    }
    result_596=(struct sIfMethodNode*)come_increment_ref_count((struct sIfMethodNode*)come_calloc(1, sizeof(struct sIfMethodNode)*(1), "sIfMethodNode_clone", 3, "sIfMethodNode"));
    if(    self!=((void*)0)) {
        result_596->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj319=result_596->sname;
        result_596->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj319 = come_decrement_ref_count2(__dec_obj319, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_596->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->it_node!=((void*)0)) {
        __dec_obj320=result_596->it_node;
        result_596->it_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->it_node));
        /* U1 */ if(__dec_obj320) { __dec_obj320 = come_decrement_ref_count2(__dec_obj320, ((struct sNode*)__dec_obj320)->finalize, ((struct sNode*)__dec_obj320)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->match_node!=((void*)0)) {
        __dec_obj321=result_596->match_node;
        result_596->match_node=(struct sNode*)come_increment_ref_count(sNode_clone(self->match_node));
        /* U1 */ if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result351__ = gComeFunResultObject = __result_obj__ = result_596;
    /*i*/come_call_finalizer3(result_596,sIfMethodNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result351__;
}

