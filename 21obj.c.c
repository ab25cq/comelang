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

typedef void* any;

typedef char* string;

struct buffer
{
    char* buf;
    int len;
    int size;
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

struct integer
{
    long value;
};

struct floating
{
    double value;
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

struct sNodeBase
{
    int sline;
    char* sname;
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
    struct tuple1$1sTypeph* mNoExceptionType;
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
    _Bool mDummyHeap;
    _Bool mDelegate;
    _Bool mShare;
    _Bool mClone;
    _Bool mNoHeap;
    _Bool mNoCallingDestructor;
    _Bool mRefference;
    _Bool mException;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mNoArrayPointerNum;
    int mTypedefOriginalPointerNum;
    struct sNode* mSizeNum;
    int mFunctionPointerNum;
    unsigned int mDynamicArrayNum;
    unsigned int mTypeOfExpression;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mFunctionParam;
    _Bool mAllocaValue;
    _Bool mGenericsStruct;
    _Bool mSolvedGenericsName;
    _Bool mComeMemCore;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    _Bool mNoNumberArray;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
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
    struct buffer* mSourceHead2;
    struct buffer* mSourceHead3;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    char* mLastCode3;
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
    struct list$1int* sline_stack;
    int sline_top;
    _Bool new_;
    struct sFun* calling_fun;
    struct map$2charphint* outputed_class;
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

struct sNewNode
{
    int sline;
    char* sname;
    struct sType* type;
    struct list$1tuple2$2charphsNodephph* initializer;
};

struct sImplementsNode
{
    int sline;
    char* sname;
    struct sNode* obj_exp;
    struct sType* inf_type;
};

struct sTrueNode
{
    int sline;
    char* sname;
};

struct sFalseNode
{
    int sline;
    char* sname;
};

struct sSizeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sSizeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};

struct sTypeOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sTypeOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};

struct sDynamicTypeOfNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};

struct sAlignOfNode
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sAlignOfExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};

struct sAlignOfNode2
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sAlignOfExpNode2
{
    int sline;
    char* sname;
    struct sNode* exp;
};

struct sAlignAsNode
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sAlignAsExpNode
{
    int sline;
    char* sname;
    struct sNode* exp;
};

struct sDeleteNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sDelegateNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sShareNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sBorrowNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sCloneNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sDupeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sDummyHeapNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sGCIncNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sGCDecNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sGCDecNoFreeNode
{
    int sline;
    char* sname;
    struct sNode* node;
};

struct sIsHeap
{
    int sline;
    char* sname;
    struct sType* type;
};

struct sIsPointer
{
    int sline;
    char* sname;
    struct sType* type;
};

// source head
extern struct _IO_FILE* stdin;
extern struct _IO_FILE* stdout;
extern struct _IO_FILE* stderr;
extern char* program_invocation_short_name;
extern char* program_invocation_name;
extern void* wildcard;
extern _Bool gComeGCLib;
extern void* gComeFunResultObject;
extern _Bool gComeDebug;
extern _Bool gComeGC;
extern _Bool gComeC;
extern _Bool gComeStr;
extern _Bool gComePthread;
extern _Bool gComeNet;
extern _Bool gComeMalloc;
extern _Bool gCommonHeader;
extern int gComeDebugStackFrameID;
struct sNode
{
    void* _protocol_obj;
    void (*finalize)(void*);
    void* (*clone)(void*);
    _Bool (*compile)(void*,struct sInfo*);
    int (*sline)(void*);
    char* (*sname)(void*);
    _Bool (*terminated)(void*);
    char* (*kind)(void*);
};
extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;

// header function
void come_heap_init(int come_malloc, int come_debug, int come_gc);
void come_heap_final();
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
void stackframe();
void come_save_stackframe(char* sname, int sline);
void* come_null_check(void* mem, char* sname, int sline, int id);
void* come_range_check(void* mem, void* begin, void* end, char* sname, int sline);
_Bool bool_expect(_Bool self, void* parent, void (*block)(void*));
_Bool bool_catch(_Bool self, void* parent, void (*block)(void*));
_Bool bool_value(_Bool self, void* parent, void (*block)(void*));
int int_expect(int self, void* parent, void (*block)(void*));
int int_catch(int self, void* parent, void (*block)(void*));
int int_value(int self, void* parent, void (*block)(void*));
int int_except(int self, void* parent, void (*block)(void*));
_Bool bool_except(_Bool self, void* parent, void (*block)(void*));
void xassert(char* msg, _Bool test);
void* come_calloc(unsigned long  int count, unsigned long  int size, char* sname, int sline, char* class_name);
void* come_increment_ref_count(void* mem);
void* come_print_ref_count(void* mem);
void* come_dynamic_typeof(void* mem);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_);
void come_call_finalizer2(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void come_call_finalizer3(void* mem, void* fun, int call_finalizer_only, int no_decrement, int no_free, int force_delete_, void* result_obj);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_);
void* come_decrement_ref_count2(void* mem, void* protocol_fun, void* protocol_obj, _Bool no_decrement, _Bool no_free, _Bool force_delete_, void* result_obj);
void come_free_object(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, char* class_name);
char* __builtin_string(char* str);
struct buffer* buffer_initialize(struct buffer* self);
void buffer_finalize(struct buffer* self);
struct buffer* buffer_clone(struct buffer* self);
int buffer_length(struct buffer* self);
void buffer_reset(struct buffer* self);
void buffer_trim(struct buffer* self, int len);
struct buffer* buffer_append(struct buffer* self, char* mem, unsigned long  int size);
struct buffer* buffer_append_char(struct buffer* self, char c);
struct buffer* buffer_append_str(struct buffer* self, char* str);
struct buffer* buffer_append_format(struct buffer* self, char* str, ...);
struct buffer* buffer_append_nullterminated_str(struct buffer* self, char* str);
struct buffer* buffer_append_int(struct buffer* self, int value);
struct buffer* buffer_append_long(struct buffer* self, long value);
struct buffer* buffer_append_short(struct buffer* self, short value);
struct buffer* buffer_alignment(struct buffer* self);
int buffer_compare(struct buffer* left, struct buffer* right);
struct buffer* string_to_buffer(char* self);
struct buffer* charp_to_buffer(char* self);
char* buffer_to_string(struct buffer* self);
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
_Bool int_equals(int self, int right);
_Bool short_equals(short self, short right);
_Bool long_equals(long self, long right);
_Bool size_t_equals(long self, unsigned long  int right);
_Bool float_equals(float self, float right);
_Bool double_equals(double self, double right);
_Bool charp_equals(char* self, char* right);
_Bool string_equals(char* self, char* right);
_Bool voidp_equals(void* self, void* right);
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
_Bool string_operator_equals(char* self, char* right);
_Bool charp_operator_equals(char* self, char* right);
_Bool voidp_operator_equals(void* self, void* right);
_Bool string_operator_not_equals(char* self, char* right);
_Bool charp_operator_not_equals(char* self, char* right);
_Bool voidp_operator_not_equals(void* self, void* right);
char* charp_operator_add(char* self, char* right);
char* string_operator_add(char* self, char* right);
char* charp_operator_mult(char* self, int right);
char* string_operator_mult(char* self, int right);
unsigned int bool_get_hash_key(_Bool value);
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(long value);
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int string_get_hash_key(char* value);
unsigned int charp_get_hash_key(char* value);
_Bool bool_clone(char self);
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  int size_t_clone(long self);
double double_clone(double self);
float float_clone(float self);
char* charp_clone(char* self);
char* string_clone(char* self);
_Bool xiswascii(unsigned int c);
_Bool xiswalpha(unsigned int c);
_Bool xiswblank(unsigned int c);
_Bool xiswdigit(unsigned int c);
_Bool xiswalnum(unsigned int c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xisalpha(char c);
int string_length(char* str);
int charp_length(char* str);
char* charp_substring(char* str, int head, int tail);
char* string_substring(char* str, int head, int tail);
char* string_operator_load_range_element(char* str, int head, int tail);
char* charp_operator_load_range_element(char* str, int head, int tail);
char* charp_reverse(char* str);
char* string_reverse(char* str);
char* xsprintf(char* msg, ...);
char* charp_delete(char* str, int head, int tail);
char* string_delete(char* str, int head, int tail);
struct list$1charph* string_split_char(char* self, char c);
struct list$1charph* charp_split_char(char* self, char c);
char* xbasename(char* path);
char* xextname(char* path);
char* xnoextname(char* path);
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
int float_compare(float left, float right);
int double_compare(float left, float right);
int size_t_compare(long left, long right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
int FILE_write(struct _IO_FILE* f, char* str);
char* FILE_read(struct _IO_FILE* f);
int FILE_fclose(struct _IO_FILE* f);
int* FILE_fprintf(struct _IO_FILE* f, const char* msg, ...);
struct list$1charph* FILE_readlines(struct _IO_FILE* f);
int fopen_block(const char* path, const char* mode, void* parent, void (*block)(void*,struct _IO_FILE*));
int string_write(char* self, char* file_name, _Bool append);
int charp_write(char* self, char* file_name, _Bool append);
char* charp_read(char* file_name);
char* string_read(char* file_name);
char* charp_puts(char* self);
char* string_puts(char* self);
int int_printf(int self, char* msg);
char* string_printf(char* self, ...);
char* charp_printf(char* self, ...);
char* charp_print(char* self);
void int_times(int self, void* parent, void (*block)(void*,int));
struct integer* integer_initialize(struct integer* self, long value);
struct integer* bool_to_integer(long self);
struct integer* char_to_integer(long self);
struct integer* short_to_integer(long self);
struct integer* int_to_integer(long self);
struct integer* long_to_integer(long self);
int integer_to_int(struct integer* self);
char* integer_to_string(struct integer* self);
_Bool integer_equals(struct integer* self, struct integer* right);
_Bool integer_operator_equals(struct integer* self, struct integer* right);
_Bool integer_operator_not_equals(struct integer* self, struct integer* right);
int integer_operator_add(struct integer* left, struct integer* right);
int integer_operator_sub(struct integer* left, struct integer* right);
int integer_operator_mult(struct integer* left, struct integer* right);
int integer_operator_div(struct integer* left, struct integer* right);
int integer_operator_mod(struct integer* left, struct integer* right);
int integer_operator_lshift(struct integer* left, struct integer* right);
int integer_operator_rshift(struct integer* left, struct integer* right);
int integer_operator_gteq(struct integer* left, struct integer* right);
int integer_operator_lteq(struct integer* left, struct integer* right);
int integer_operator_lt(struct integer* left, struct integer* right);
int integer_operator_gt(struct integer* left, struct integer* right);
int integer_operator_and(struct integer* left, struct integer* right);
int integer_operator_xor(struct integer* left, struct integer* right);
int integer_operator_or(struct integer* left, struct integer* right);
struct floating* floating_initialize(struct floating* self, double value);
struct floating* float_to_floating(float self);
struct floating* double_to_floating(double self);
double floating_to_double(struct floating* self);
char* floating_to_string(struct floating* self);
_Bool floating_equals(struct floating* self, struct floating* right);
int integer_compare(struct floating* self, struct floating* right);
_Bool floating_operator_equals(struct floating* self, struct floating* right);
_Bool floating_operator_not_equals(struct floating* self, struct floating* right);
double floating_operator_add(struct floating* left, struct floating* right);
double floating_operator_sub(struct floating* left, struct floating* right);
double floating_operator_mult(struct floating* left, struct floating* right);
double floating_operator_div(struct floating* left, struct floating* right);
double floating_operator_gteq(struct floating* left, struct floating* right);
double floating_operator_lteq(struct floating* left, struct floating* right);
double floating_operator_lt(struct floating* left, struct floating* right);
double floating_operator_gt(struct floating* left, struct floating* right);
int assert_v2(int exp);
int sNodeBase_sline(struct sNodeBase* self, struct sInfo* info);
char* sNodeBase_sname(struct sNodeBase* self, struct sInfo* info);
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
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sTypeph* param_types, struct list$1charph* param_names, struct list$1charph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, char* come_header, char* declare_sname, struct sInfo* info);
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
void add_come_code_at_source_head(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head3(struct sInfo* info, const char* msg, ...);
void add_come_code_at_source_head2(struct sInfo* info, const char* msg, ...);
void add_come_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code(struct sInfo* info, const char* msg, ...);
void add_come_last_code2(struct sInfo* info, const char* msg, ...);
void add_come_last_code3(struct sInfo* info, const char* msg, ...);
void add_last_code_to_source_with_comma(struct sInfo* info);
void dec_stack_ptr(int value, struct sInfo* info);
struct CVALUE* get_value_from_stack(int offset, struct sInfo* info);
char* make_define_var(struct sType* type, char* name, _Bool in_header, struct sInfo* info);
void transpiler_clear_last_code(struct sInfo* info);
_Bool output_header_file(struct sInfo* info);
struct sType* solve_method_generics(struct sType* type, struct sInfo* info);
void free_exception_right_value_objects(struct sInfo* info, _Bool comma);
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
char* parse_attribute(struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sTypephphlist$1charphphlist$1charphphbool* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFunpcharph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFunpcharph* create_force_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
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
char* create_non_method_name(struct sType* obj_type, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
char* create_method_name_using_class(struct sClass* obj_class, _Bool no_pointer_name, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* expression_node_v96(struct sInfo* info);
struct sNode* parse_tuple(struct sInfo* info);
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
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info);
char* sNewNode_kind(struct sNewNode* self);
_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static struct sType* sType_clone(struct sType* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1charph* list$1charphp_clone(struct list$1charph* self);
static struct list$1charph* list$1charph_initialize(struct list$1charph* self);
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self);
static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self);
static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self);
static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);
char* sImplementsNode_kind(struct sImplementsNode* self);
_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);
char* sTrueNode_kind(struct sTrueNode* self);
_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);
char* sFalseNode_kind(struct sFalseNode* self);
_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);
char* sSizeOfNode_kind(struct sSizeOfNode* self);
_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);
struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self);
_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);
struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);
char* sTypeOfNode_kind(struct sTypeOfNode* self);
_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);
struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self);
_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);
struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);
char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self);
_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);
static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode_kind(struct sAlignOfNode* self);
_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);
struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self);
_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);
struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);
char* sAlignOfNode2_kind(struct sAlignOfNode2* self);
_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);
struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);
char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self);
_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);
struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);
char* sAlignAsNode_kind(struct sAlignAsNode* self);
_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);
struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);
char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self);
_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);
struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);
char* sDeleteNode_kind(struct sDeleteNode* self);
_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);
struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);
char* sDelegateNode_kind(struct sDelegateNode* self);
_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);
struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);
char* sShareNode_kind(struct sShareNode* self);
_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);
struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);
char* sBorrowNode_kind(struct sBorrowNode* self);
_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);
struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);
char* sCloneNode_kind(struct sCloneNode* self);
_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);
static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);
char* sDupeNode_kind(struct sDupeNode* self);
_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);
struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);
char* sDummyHeapNode_kind(struct sDummyHeapNode* self);
_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);
struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);
char* sGCIncNode_kind(struct sGCIncNode* self);
_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);
struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNode_kind(struct sGCDecNode* self);
_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);
struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info);
char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self);
_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info);
struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);
char* sIsHeap_kind(struct sIsHeap* self);
_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);
struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info);
char* sIsPointer_kind(struct sIsPointer* self);
_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self);
static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sIsPointer_finalize(struct sIsPointer* self);
static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
// uniq global variable
// source head3

// inline function
static inline _Bool die(char* msg){
    perror(msg);
    stackframe();
    exit(4);
    return (_Bool)0;
}
static inline struct buffer* charpa_to_buffer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value0 = (void*)0;
void* __right_value1 = (void*)0;
struct buffer* result_0;
struct buffer* __result1__;
    result_0=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2392, "buffer"))));
    buffer_append(result_0,self,sizeof(char)*len);
    __result1__ = gComeFunResultObject = __result_obj__ = result_0;
    /*i*/come_call_finalizer3(result_0,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result1__;
}
static inline struct buffer* charppa_to_buffer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value2 = (void*)0;
void* __right_value3 = (void*)0;
struct buffer* result_1;
int i_2;
struct buffer* __result2__;
    result_1=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2399, "buffer"))));
    for(    i_2=0;    i_2<len;    i_2++    ){
        buffer_append(result_1,self[i_2],strlen(self[i_2]));
    }
    __result2__ = gComeFunResultObject = __result_obj__ = result_1;
    /*i*/come_call_finalizer3(result_1,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result2__;
}
static inline struct buffer* shortpa_to_buffer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value4 = (void*)0;
void* __right_value5 = (void*)0;
struct buffer* result_3;
struct buffer* __result3__;
    result_3=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2408, "buffer"))));
    buffer_append(result_3,(char*)self,sizeof(short)*len);
    __result3__ = gComeFunResultObject = __result_obj__ = result_3;
    /*i*/come_call_finalizer3(result_3,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result3__;
}
static inline struct buffer* intpa_to_buffer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value6 = (void*)0;
void* __right_value7 = (void*)0;
struct buffer* result_4;
struct buffer* __result4__;
    result_4=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2415, "buffer"))));
    buffer_append(result_4,(char*)self,sizeof(int)*len);
    __result4__ = gComeFunResultObject = __result_obj__ = result_4;
    /*i*/come_call_finalizer3(result_4,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result4__;
}
static inline struct buffer* longpa_to_buffer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value8 = (void*)0;
void* __right_value9 = (void*)0;
struct buffer* result_5;
struct buffer* __result5__;
    result_5=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2422, "buffer"))));
    buffer_append(result_5,(char*)self,sizeof(long)*len);
    __result5__ = gComeFunResultObject = __result_obj__ = result_5;
    /*i*/come_call_finalizer3(result_5,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result5__;
}
static inline struct buffer* floatpa_to_buffer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value10 = (void*)0;
void* __right_value11 = (void*)0;
struct buffer* result_6;
struct buffer* __result6__;
    result_6=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2429, "buffer"))));
    buffer_append(result_6,(char*)self,sizeof(float)*len);
    __result6__ = gComeFunResultObject = __result_obj__ = result_6;
    /*i*/come_call_finalizer3(result_6,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result6__;
}
static inline struct buffer* doublepa_to_buffer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value12 = (void*)0;
void* __right_value13 = (void*)0;
struct buffer* result_7;
struct buffer* __result7__;
    result_7=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2436, "buffer"))));
    buffer_append(result_7,(char*)self,sizeof(double)*len);
    __result7__ = gComeFunResultObject = __result_obj__ = result_7;
    /*i*/come_call_finalizer3(result_7,buffer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result7__;
}
static inline struct smart_pointer$1char* buffer_to_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value14 = (void*)0;
void* __right_value15 = (void*)0;
void* __right_value16 = (void*)0;
struct smart_pointer$1char* __result9__;
    __result9__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value16=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2736, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value16,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result9__;
}
static inline struct smart_pointer$1char* buffer_to_char_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value17 = (void*)0;
void* __right_value18 = (void*)0;
void* __right_value19 = (void*)0;
struct smart_pointer$1char* __result10__;
    __result10__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value19=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2741, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value19,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result10__;
}
static inline struct smart_pointer$1short* buffer_to_short_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value20 = (void*)0;
void* __right_value21 = (void*)0;
void* __right_value22 = (void*)0;
struct smart_pointer$1short* __result12__;
    __result12__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value22=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2746, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value22,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result12__;
}
static inline struct smart_pointer$1int* buffer_to_int_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value23 = (void*)0;
void* __right_value24 = (void*)0;
void* __right_value25 = (void*)0;
struct smart_pointer$1int* __result14__;
    __result14__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value25=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2751, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value25,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result14__;
}
static inline struct smart_pointer$1long* buffer_to_long_pointer(struct buffer* self){
void* __result_obj__=(void*)0;
void* __right_value26 = (void*)0;
void* __right_value27 = (void*)0;
void* __right_value28 = (void*)0;
struct smart_pointer$1long* __result16__;
    __result16__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value28=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2756, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
    /*g*/come_call_finalizer3(__right_value28,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result16__;
}
static inline struct smart_pointer$1char* charpa_to_pointer(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value29 = (void*)0;
void* __right_value30 = (void*)0;
struct buffer* buf_8;
void* __right_value31 = (void*)0;
void* __right_value32 = (void*)0;
struct smart_pointer$1char* __result17__;
    buf_8=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2789, "buffer"))));
    buffer_append(buf_8,(char*)self,sizeof(char)*len);
    __result17__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value32=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 2791, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_8))));
    /*i*/come_call_finalizer3(buf_8,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value32,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result17__;
}
static inline struct smart_pointer$1charp* charppa_to_pointer(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value33 = (void*)0;
void* __right_value34 = (void*)0;
struct buffer* buf_9;
void* __right_value35 = (void*)0;
void* __right_value36 = (void*)0;
struct smart_pointer$1charp* __result19__;
    buf_9=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2796, "buffer"))));
    buffer_append(buf_9,(char*)self,sizeof(char*)*len);
    __result19__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value36=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 2798, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_9))));
    /*i*/come_call_finalizer3(buf_9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value36,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result19__;
}
static inline struct smart_pointer$1short* shortpa_to_pointer(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value37 = (void*)0;
void* __right_value38 = (void*)0;
struct buffer* buf_10;
void* __right_value39 = (void*)0;
void* __right_value40 = (void*)0;
struct smart_pointer$1short* __result20__;
    buf_10=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2803, "buffer"))));
    buffer_append(buf_10,(char*)self,sizeof(short)*len);
    __result20__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value40=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 2805, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_10))));
    /*i*/come_call_finalizer3(buf_10,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value40,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result20__;
}
static inline struct smart_pointer$1int* intpa_to_pointer(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value41 = (void*)0;
void* __right_value42 = (void*)0;
struct buffer* buf_11;
void* __right_value43 = (void*)0;
void* __right_value44 = (void*)0;
struct smart_pointer$1int* __result21__;
    buf_11=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2810, "buffer"))));
    buffer_append(buf_11,(char*)self,sizeof(int)*len);
    __result21__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value44=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 2812, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_11))));
    /*i*/come_call_finalizer3(buf_11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value44,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result21__;
}
static inline struct smart_pointer$1long* longpa_to_pointer(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value45 = (void*)0;
void* __right_value46 = (void*)0;
struct buffer* buf_12;
void* __right_value47 = (void*)0;
void* __right_value48 = (void*)0;
struct smart_pointer$1long* __result22__;
    buf_12=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2817, "buffer"))));
    buffer_append(buf_12,(char*)self,sizeof(long)*len);
    __result22__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value48=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 2819, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_12))));
    /*i*/come_call_finalizer3(buf_12,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value48,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result22__;
}
static inline struct smart_pointer$1float* floatpa_to_pointer(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value49 = (void*)0;
void* __right_value50 = (void*)0;
struct buffer* buf_13;
void* __right_value51 = (void*)0;
void* __right_value52 = (void*)0;
struct smart_pointer$1float* __result24__;
    buf_13=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2824, "buffer"))));
    buffer_append(buf_13,(char*)self,sizeof(float)*len);
    __result24__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value52=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 2826, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_13))));
    /*i*/come_call_finalizer3(buf_13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value52,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result24__;
}
static inline struct smart_pointer$1double* doublepa_to_pointer(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value53 = (void*)0;
void* __right_value54 = (void*)0;
struct buffer* buf_14;
void* __right_value55 = (void*)0;
void* __right_value56 = (void*)0;
struct smart_pointer$1double* __result26__;
    buf_14=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 2831, "buffer"))));
    buffer_append(buf_14,(char*)self,sizeof(double)*len);
    __result26__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value56=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 2833, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_14))));
    /*i*/come_call_finalizer3(buf_14,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value56,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result26__;
}
static inline struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value57 = (void*)0;
void* __right_value61 = (void*)0;
struct list$1char* __result29__;
    __result29__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value61=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 2838, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value61,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result29__;
}
static inline struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value62 = (void*)0;
void* __right_value66 = (void*)0;
struct list$1charp* __result32__;
    __result32__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value66=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2843, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value66,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result32__;
}
static inline struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value67 = (void*)0;
void* __right_value71 = (void*)0;
struct list$1short* __result35__;
    __result35__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value71=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 2848, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value71,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result35__;
}
static inline struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value72 = (void*)0;
void* __right_value76 = (void*)0;
struct list$1int* __result38__;
    __result38__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value76=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 2853, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value76,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result38__;
}
static inline struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value77 = (void*)0;
void* __right_value81 = (void*)0;
struct list$1long* __result41__;
    __result41__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value81=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 2858, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value81,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result41__;
}
static inline struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value82 = (void*)0;
void* __right_value86 = (void*)0;
struct list$1float* __result44__;
    __result44__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value86=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 2863, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value86,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result44__;
}
static inline struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value87 = (void*)0;
void* __right_value91 = (void*)0;
struct list$1double* __result47__;
    __result47__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value91=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 2868, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value91,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result47__;
}
static inline struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value92 = (void*)0;
void* __right_value94 = (void*)0;
struct vector$1char* __result49__;
    __result49__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value94=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 2873, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value94,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result49__;
}
static inline struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value95 = (void*)0;
void* __right_value97 = (void*)0;
struct vector$1charp* __result51__;
    __result51__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value97=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 2878, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value97,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result51__;
}
static inline struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value98 = (void*)0;
void* __right_value100 = (void*)0;
struct vector$1short* __result53__;
    __result53__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value100=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 2883, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value100,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result53__;
}
static inline struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value101 = (void*)0;
void* __right_value103 = (void*)0;
struct vector$1int* __result55__;
    __result55__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value103=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 2888, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result55__;
}
static inline struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value106 = (void*)0;
struct vector$1long* __result57__;
    __result57__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value106=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 2893, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value106,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result57__;
}
static inline struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value107 = (void*)0;
void* __right_value109 = (void*)0;
struct vector$1float* __result59__;
    __result59__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value109=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 2898, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value109,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result59__;
}
static inline struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value110 = (void*)0;
void* __right_value112 = (void*)0;
struct vector$1double* __result61__;
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value112=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 2903, "vector$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value112,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result61__;
}
static inline unsigned long  int charpa_length(char* self, unsigned long  int len){
    return len;
}
static inline _Bool charppa_contained(char** self, unsigned long  int len, char* str){
_Bool result_64;
int i_65;
    result_64=(_Bool)0;
    for(    i_65=0;    i_65<len;    i_65++    ){
        if(        strncmp(self[i_65],str,strlen(self[i_65]))==0) {
            result_64=(_Bool)1;
            break;
        }
    }
    return result_64;
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
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value113 = (void*)0;
char* __result62__;
    __result62__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value113=xsprintf(msg,self)));
    /* U11 */__right_value113 = come_decrement_ref_count2(__right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result62__;
}
static inline char* charp_xsprintf(char* self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
char* __result63__;
    __result63__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value114=xsprintf(msg,self)));
    /* U11 */__right_value114 = come_decrement_ref_count2(__right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result63__;
}
static inline char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value115 = (void*)0;
char* __result64__;
    __result64__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value115=xsprintf(msg,self)));
    /* U11 */__right_value115 = come_decrement_ref_count2(__right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result64__;
}

// body function









static struct smart_pointer$1char* smart_pointer$1char_initialize_with_value(struct smart_pointer$1char* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj1;
struct smart_pointer$1char* __result8__;
    __dec_obj1=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj1,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char*)value->buf;
    __result8__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result8__;
}

static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
struct buffer* __dec_obj2;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj2=self->memory;
            come_call_finalizer3(__dec_obj2,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1short* smart_pointer$1short_initialize_with_value(struct smart_pointer$1short* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj3;
struct smart_pointer$1short* __result11__;
    __dec_obj3=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj3,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(short*)value->buf;
    __result11__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result11__;
}

static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
struct buffer* __dec_obj4;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj4=self->memory;
            come_call_finalizer3(__dec_obj4,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1int* smart_pointer$1int_initialize_with_value(struct smart_pointer$1int* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj5;
struct smart_pointer$1int* __result13__;
    __dec_obj5=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj5,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(int*)value->buf;
    __result13__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result13__;
}

static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
struct buffer* __dec_obj6;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj6=self->memory;
            come_call_finalizer3(__dec_obj6,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1long* smart_pointer$1long_initialize_with_value(struct smart_pointer$1long* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj7;
struct smart_pointer$1long* __result15__;
    __dec_obj7=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj7,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(long*)value->buf;
    __result15__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result15__;
}

static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
struct buffer* __dec_obj8;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj8=self->memory;
            come_call_finalizer3(__dec_obj8,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}



static struct smart_pointer$1charp* smart_pointer$1charp_initialize_with_value(struct smart_pointer$1charp* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj9;
struct smart_pointer$1charp* __result18__;
    __dec_obj9=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj9,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(char**)value->buf;
    __result18__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result18__;
}

static void smart_pointer$1charpp_finalize(struct smart_pointer$1charp* self){
struct buffer* __dec_obj10;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj10=self->memory;
            come_call_finalizer3(__dec_obj10,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}





static struct smart_pointer$1float* smart_pointer$1float_initialize_with_value(struct smart_pointer$1float* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj11;
struct smart_pointer$1float* __result23__;
    __dec_obj11=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj11,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(float*)value->buf;
    __result23__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result23__;
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
struct buffer* __dec_obj12;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj12=self->memory;
            come_call_finalizer3(__dec_obj12,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct smart_pointer$1double* smart_pointer$1double_initialize_with_value(struct smart_pointer$1double* self, struct buffer* value){
void* __result_obj__=(void*)0;
struct buffer* __dec_obj13;
struct smart_pointer$1double* __result25__;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->p=(double*)value->buf;
    __result25__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result25__;
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
struct buffer* __dec_obj14;
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        if(        self->memory==gComeFunResultObject) {
            __dec_obj14=self->memory;
            come_call_finalizer3(__dec_obj14,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}


static struct list$1char* list$1char_initialize_with_values(struct list$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
int i_15;
struct list$1char* __result28__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_15=0;    i_15<num_value;    i_15++    ){
        list$1char_push_back(self,values[i_15]);
    }
    __result28__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result28__;
}

static struct list$1char* list$1char_push_back(struct list$1char* self, char item){
void* __result_obj__=(void*)0;
void* __right_value58 = (void*)0;
struct list_item$1char* litem_16;
void* __right_value59 = (void*)0;
struct list_item$1char* litem_17;
void* __right_value60 = (void*)0;
struct list_item$1char* litem_18;
struct list$1char* __result27__;
    if(    self->len==0) {
        litem_16=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value58=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 219, "list_item$1char"))));
        litem_16->prev=((void*)0);
        litem_16->next=((void*)0);
        litem_16->item=item;
        self->tail=litem_16;
        self->head=litem_16;
    }
    else if(    self->len==1) {
        litem_17=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value59=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 229, "list_item$1char"))));
        litem_17->prev=self->head;
        litem_17->next=((void*)0);
        litem_17->item=item;
        self->tail=litem_17;
        self->head->next=litem_17;
    }
    else {
        litem_18=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value60=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 239, "list_item$1char"))));
        litem_18->prev=self->tail;
        litem_18->next=((void*)0);
        litem_18->item=item;
        self->tail->next=litem_18;
        self->tail=litem_18;
    }
    self->len++;
    __result27__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result27__;
}

static void list$1charp_finalize(struct list$1char* self){
struct list_item$1char* it_19;
struct list_item$1char* prev_it_20;
    it_19=self->head;
    while(it_19!=((void*)0)) {
        prev_it_20=it_19;
        it_19=it_19->next;
        /*i*/come_call_finalizer3(prev_it_20,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charp_finalize(struct list_item$1char* self){
}


static struct list$1charp* list$1charp_initialize_with_values(struct list$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
int i_21;
struct list$1charp* __result31__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_21=0;    i_21<num_value;    i_21++    ){
        list$1charp_push_back(self,values[i_21]);
    }
    __result31__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result31__;
}

static struct list$1charp* list$1charp_push_back(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value63 = (void*)0;
struct list_item$1charp* litem_22;
void* __right_value64 = (void*)0;
struct list_item$1charp* litem_23;
void* __right_value65 = (void*)0;
struct list_item$1charp* litem_24;
struct list$1charp* __result30__;
    if(    self->len==0) {
        litem_22=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value63=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 219, "list_item$1charp"))));
        litem_22->prev=((void*)0);
        litem_22->next=((void*)0);
        litem_22->item=item;
        self->tail=litem_22;
        self->head=litem_22;
    }
    else if(    self->len==1) {
        litem_23=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value64=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 229, "list_item$1charp"))));
        litem_23->prev=self->head;
        litem_23->next=((void*)0);
        litem_23->item=item;
        self->tail=litem_23;
        self->head->next=litem_23;
    }
    else {
        litem_24=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value65=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 239, "list_item$1charp"))));
        litem_24->prev=self->tail;
        litem_24->next=((void*)0);
        litem_24->item=item;
        self->tail->next=litem_24;
        self->tail=litem_24;
    }
    self->len++;
    __result30__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result30__;
}

static void list$1charpp_finalize(struct list$1charp* self){
struct list_item$1charp* it_25;
struct list_item$1charp* prev_it_26;
    it_25=self->head;
    while(it_25!=((void*)0)) {
        prev_it_26=it_25;
        it_25=it_25->next;
        /*i*/come_call_finalizer3(prev_it_26,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charpp_finalize(struct list_item$1charp* self){
}


static struct list$1short* list$1short_initialize_with_values(struct list$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
int i_27;
struct list$1short* __result34__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_27=0;    i_27<num_value;    i_27++    ){
        list$1short_push_back(self,values[i_27]);
    }
    __result34__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result34__;
}

static struct list$1short* list$1short_push_back(struct list$1short* self, short item){
void* __result_obj__=(void*)0;
void* __right_value68 = (void*)0;
struct list_item$1short* litem_28;
void* __right_value69 = (void*)0;
struct list_item$1short* litem_29;
void* __right_value70 = (void*)0;
struct list_item$1short* litem_30;
struct list$1short* __result33__;
    if(    self->len==0) {
        litem_28=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value68=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 219, "list_item$1short"))));
        litem_28->prev=((void*)0);
        litem_28->next=((void*)0);
        litem_28->item=item;
        self->tail=litem_28;
        self->head=litem_28;
    }
    else if(    self->len==1) {
        litem_29=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value69=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 229, "list_item$1short"))));
        litem_29->prev=self->head;
        litem_29->next=((void*)0);
        litem_29->item=item;
        self->tail=litem_29;
        self->head->next=litem_29;
    }
    else {
        litem_30=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value70=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 239, "list_item$1short"))));
        litem_30->prev=self->tail;
        litem_30->next=((void*)0);
        litem_30->item=item;
        self->tail->next=litem_30;
        self->tail=litem_30;
    }
    self->len++;
    __result33__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result33__;
}

static void list$1shortp_finalize(struct list$1short* self){
struct list_item$1short* it_31;
struct list_item$1short* prev_it_32;
    it_31=self->head;
    while(it_31!=((void*)0)) {
        prev_it_32=it_31;
        it_31=it_31->next;
        /*i*/come_call_finalizer3(prev_it_32,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1shortp_finalize(struct list_item$1short* self){
}


static struct list$1int* list$1int_initialize_with_values(struct list$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
int i_33;
struct list$1int* __result37__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_33=0;    i_33<num_value;    i_33++    ){
        list$1int_push_back(self,values[i_33]);
    }
    __result37__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result37__;
}

static struct list$1int* list$1int_push_back(struct list$1int* self, int item){
void* __result_obj__=(void*)0;
void* __right_value73 = (void*)0;
struct list_item$1int* litem_34;
void* __right_value74 = (void*)0;
struct list_item$1int* litem_35;
void* __right_value75 = (void*)0;
struct list_item$1int* litem_36;
struct list$1int* __result36__;
    if(    self->len==0) {
        litem_34=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value73=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 219, "list_item$1int"))));
        litem_34->prev=((void*)0);
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head=litem_34;
    }
    else if(    self->len==1) {
        litem_35=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value74=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 229, "list_item$1int"))));
        litem_35->prev=self->head;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail=litem_35;
        self->head->next=litem_35;
    }
    else {
        litem_36=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value75=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 239, "list_item$1int"))));
        litem_36->prev=self->tail;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail->next=litem_36;
        self->tail=litem_36;
    }
    self->len++;
    __result36__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result36__;
}

static void list$1intp_finalize(struct list$1int* self){
struct list_item$1int* it_37;
struct list_item$1int* prev_it_38;
    it_37=self->head;
    while(it_37!=((void*)0)) {
        prev_it_38=it_37;
        it_37=it_37->next;
        /*i*/come_call_finalizer3(prev_it_38,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1intp_finalize(struct list_item$1int* self){
}


static struct list$1long* list$1long_initialize_with_values(struct list$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
int i_39;
struct list$1long* __result40__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_39=0;    i_39<num_value;    i_39++    ){
        list$1long_push_back(self,values[i_39]);
    }
    __result40__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result40__;
}

static struct list$1long* list$1long_push_back(struct list$1long* self, long item){
void* __result_obj__=(void*)0;
void* __right_value78 = (void*)0;
struct list_item$1long* litem_40;
void* __right_value79 = (void*)0;
struct list_item$1long* litem_41;
void* __right_value80 = (void*)0;
struct list_item$1long* litem_42;
struct list$1long* __result39__;
    if(    self->len==0) {
        litem_40=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value78=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 219, "list_item$1long"))));
        litem_40->prev=((void*)0);
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head=litem_40;
    }
    else if(    self->len==1) {
        litem_41=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value79=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 229, "list_item$1long"))));
        litem_41->prev=self->head;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail=litem_41;
        self->head->next=litem_41;
    }
    else {
        litem_42=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value80=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 239, "list_item$1long"))));
        litem_42->prev=self->tail;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail->next=litem_42;
        self->tail=litem_42;
    }
    self->len++;
    __result39__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result39__;
}

static void list$1longp_finalize(struct list$1long* self){
struct list_item$1long* it_43;
struct list_item$1long* prev_it_44;
    it_43=self->head;
    while(it_43!=((void*)0)) {
        prev_it_44=it_43;
        it_43=it_43->next;
        /*i*/come_call_finalizer3(prev_it_44,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1longp_finalize(struct list_item$1long* self){
}


static struct list$1float* list$1float_initialize_with_values(struct list$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
int i_45;
struct list$1float* __result43__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_45=0;    i_45<num_value;    i_45++    ){
        list$1float_push_back(self,values[i_45]);
    }
    __result43__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result43__;
}

static struct list$1float* list$1float_push_back(struct list$1float* self, float item){
void* __result_obj__=(void*)0;
void* __right_value83 = (void*)0;
struct list_item$1float* litem_46;
void* __right_value84 = (void*)0;
struct list_item$1float* litem_47;
void* __right_value85 = (void*)0;
struct list_item$1float* litem_48;
struct list$1float* __result42__;
    if(    self->len==0) {
        litem_46=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value83=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 219, "list_item$1float"))));
        litem_46->prev=((void*)0);
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head=litem_46;
    }
    else if(    self->len==1) {
        litem_47=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value84=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 229, "list_item$1float"))));
        litem_47->prev=self->head;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail=litem_47;
        self->head->next=litem_47;
    }
    else {
        litem_48=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value85=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 239, "list_item$1float"))));
        litem_48->prev=self->tail;
        litem_48->next=((void*)0);
        litem_48->item=item;
        self->tail->next=litem_48;
        self->tail=litem_48;
    }
    self->len++;
    __result42__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result42__;
}

static void list$1floatp_finalize(struct list$1float* self){
struct list_item$1float* it_49;
struct list_item$1float* prev_it_50;
    it_49=self->head;
    while(it_49!=((void*)0)) {
        prev_it_50=it_49;
        it_49=it_49->next;
        /*i*/come_call_finalizer3(prev_it_50,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1floatp_finalize(struct list_item$1float* self){
}


static struct list$1double* list$1double_initialize_with_values(struct list$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
int i_51;
struct list$1double* __result46__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_51=0;    i_51<num_value;    i_51++    ){
        list$1double_push_back(self,values[i_51]);
    }
    __result46__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result46__;
}

static struct list$1double* list$1double_push_back(struct list$1double* self, double item){
void* __result_obj__=(void*)0;
void* __right_value88 = (void*)0;
struct list_item$1double* litem_52;
void* __right_value89 = (void*)0;
struct list_item$1double* litem_53;
void* __right_value90 = (void*)0;
struct list_item$1double* litem_54;
struct list$1double* __result45__;
    if(    self->len==0) {
        litem_52=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value88=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 219, "list_item$1double"))));
        litem_52->prev=((void*)0);
        litem_52->next=((void*)0);
        litem_52->item=item;
        self->tail=litem_52;
        self->head=litem_52;
    }
    else if(    self->len==1) {
        litem_53=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value89=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 229, "list_item$1double"))));
        litem_53->prev=self->head;
        litem_53->next=((void*)0);
        litem_53->item=item;
        self->tail=litem_53;
        self->head->next=litem_53;
    }
    else {
        litem_54=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value90=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 239, "list_item$1double"))));
        litem_54->prev=self->tail;
        litem_54->next=((void*)0);
        litem_54->item=item;
        self->tail->next=litem_54;
        self->tail=litem_54;
    }
    self->len++;
    __result45__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result45__;
}

static void list$1doublep_finalize(struct list$1double* self){
struct list_item$1double* it_55;
struct list_item$1double* prev_it_56;
    it_55=self->head;
    while(it_55!=((void*)0)) {
        prev_it_56=it_55;
        it_55=it_55->next;
        /*i*/come_call_finalizer3(prev_it_56,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1doublep_finalize(struct list_item$1double* self){
}


static struct vector$1char* vector$1char_initialize_with_values(struct vector$1char* self, int num_value, char* values){
void* __result_obj__=(void*)0;
void* __right_value93 = (void*)0;
struct vector$1char* __result48__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value93=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1013, "char")));
    memcpy(self->items,values,sizeof(char)*self->len);
    __result48__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result48__;
}

static void vector$1charp_finalize(struct vector$1char* self){
int i_57;
    if(    0) {
        for(        i_57=0;        i_57<self->len;        i_57++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1charp* vector$1charp_initialize_with_values(struct vector$1charp* self, int num_value, char** values){
void* __result_obj__=(void*)0;
void* __right_value96 = (void*)0;
struct vector$1charp* __result50__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value96=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1013, "char*")));
    memcpy(self->items,values,sizeof(char*)*self->len);
    __result50__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result50__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_58;
    if(    0) {
        for(        i_58=0;        i_58<self->len;        i_58++        ){
            /* U13 */self->items[i_58] = come_decrement_ref_count2(self->items[i_58], (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1short* vector$1short_initialize_with_values(struct vector$1short* self, int num_value, short* values){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
struct vector$1short* __result52__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value99=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1013, "short")));
    memcpy(self->items,values,sizeof(short)*self->len);
    __result52__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result52__;
}

static void vector$1shortp_finalize(struct vector$1short* self){
int i_59;
    if(    0) {
        for(        i_59=0;        i_59<self->len;        i_59++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1int* vector$1int_initialize_with_values(struct vector$1int* self, int num_value, int* values){
void* __result_obj__=(void*)0;
void* __right_value102 = (void*)0;
struct vector$1int* __result54__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value102=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1013, "int")));
    memcpy(self->items,values,sizeof(int)*self->len);
    __result54__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result54__;
}

static void vector$1intp_finalize(struct vector$1int* self){
int i_60;
    if(    0) {
        for(        i_60=0;        i_60<self->len;        i_60++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1long* vector$1long_initialize_with_values(struct vector$1long* self, int num_value, long* values){
void* __result_obj__=(void*)0;
void* __right_value105 = (void*)0;
struct vector$1long* __result56__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value105=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1013, "long")));
    memcpy(self->items,values,sizeof(long)*self->len);
    __result56__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result56__;
}

static void vector$1longp_finalize(struct vector$1long* self){
int i_61;
    if(    0) {
        for(        i_61=0;        i_61<self->len;        i_61++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1float* vector$1float_initialize_with_values(struct vector$1float* self, int num_value, float* values){
void* __result_obj__=(void*)0;
void* __right_value108 = (void*)0;
struct vector$1float* __result58__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value108=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1013, "float")));
    memcpy(self->items,values,sizeof(float)*self->len);
    __result58__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result58__;
}

static void vector$1floatp_finalize(struct vector$1float* self){
int i_62;
    if(    0) {
        for(        i_62=0;        i_62<self->len;        i_62++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}


static struct vector$1double* vector$1double_initialize_with_values(struct vector$1double* self, int num_value, double* values){
void* __result_obj__=(void*)0;
void* __right_value111 = (void*)0;
struct vector$1double* __result60__;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value111=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1013, "double")));
    memcpy(self->items,values,sizeof(double)*self->len);
    __result60__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result60__;
}

static void vector$1doublep_finalize(struct vector$1double* self){
int i_63;
    if(    0) {
        for(        i_63=0;        i_63<self->len;        i_63++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}











struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct list$1tuple2$2charphsNodephph* initializer, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value116 = (void*)0;
void* __right_value153 = (void*)0;
struct sType* __dec_obj63;
struct list$1tuple2$2charphsNodephph* __dec_obj64;
struct sNewNode* __result83__;
    ((struct sNodeBase*)(__right_value116=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value116,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj63=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj63,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj64=self->initializer;
    self->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer);
    come_call_finalizer3(__dec_obj64,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result83__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result83__;
}

char* sNewNode_kind(struct sNewNode* self){
void* __result_obj__=(void*)0;
void* __right_value154 = (void*)0;
char* __result84__;
    __result84__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value154=__builtin_string("sNewNode")));
    /* U11 */__right_value154 = come_decrement_ref_count2(__right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result84__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
struct sType* type_100;
struct list$1tuple2$2charphsNodephph* initializer_101;
void* __right_value155 = (void*)0;
void* __right_value156 = (void*)0;
struct CVALUE* come_value_102;
void* __right_value157 = (void*)0;
void* __right_value158 = (void*)0;
struct buffer* num_string_103;
struct list$1sNodeph* o2_saved_104;
struct sNode* it_107;
_Bool __result91__;
void* __right_value159 = (void*)0;
struct CVALUE* cvalue_110;
void* __right_value160 = (void*)0;
struct sType* type2_111;
void* __right_value161 = (void*)0;
char* type_name_114;
void* __right_value162 = (void*)0;
char* type_name2_115;
void* __right_value163 = (void*)0;
char* var_name_117;
void* __right_value164 = (void*)0;
struct sType* type3_118;
void* __right_value165 = (void*)0;
void* __right_value166 = (void*)0;
void* __right_value167 = (void*)0;
struct buffer* buf_119;
void* __right_value168 = (void*)0;
void* __right_value169 = (void*)0;
char* obj_120;
struct sClass* klass_121;
int i_122;
struct list$1tuple2$2charphsNodephph* o2_saved_123;
struct tuple2$2charphsNodeph* it_126;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* name_129=0;
struct sNode* exp_130=0;
_Bool __result99__;
void* __right_value170 = (void*)0;
struct CVALUE* come_value2_131;
struct sType* left_type_132;
struct list$1tuple2$2charphsTypephph* o2_saved_133;
struct tuple2$2charphsTypeph* it2_136;
struct tuple2$2charphsTypeph* multiple_assign_var2 = (void*)0;
char* field_name_139=0;
struct sType* field_type_140=0;
void* __right_value171 = (void*)0;
struct sType* __dec_obj74;
_Bool __result106__;
struct sType* right_type_143;
void* __right_value172 = (void*)0;
void* __right_value173 = (void*)0;
struct sType* __dec_obj78;
void* __right_value174 = (void*)0;
char* c_value_144;
void* __right_value175 = (void*)0;
char* __dec_obj79;
void* __right_value176 = (void*)0;
struct sType* __dec_obj80;
void* __right_value180 = (void*)0;
void* __right_value181 = (void*)0;
char* __dec_obj84;
void* __right_value182 = (void*)0;
struct sType* __dec_obj85;
_Bool __result108__;
    type_100=self->type;
    initializer_101=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(self->initializer);
    come_value_102=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 23, "CVALUE"))));
    num_string_103=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 25, "buffer"))));
    buffer_append_str(num_string_103,"1");
    for(    o2_saved_104=(struct list$1sNodeph*)come_increment_ref_count((type_100->mArrayNum)),it_107=list$1sNodeph_begin((o2_saved_104));    !list$1sNodeph_end((o2_saved_104));    it_107=list$1sNodeph_next((o2_saved_104))    ){
        if(        !node_compile(it_107,info)) {
            __result91__ = (_Bool)0;
            /*i*/come_call_finalizer3(o2_saved_104,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
            return __result91__;
        }
        cvalue_110=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        buffer_append_format(num_string_103,"*(%s)",cvalue_110->c_value);
        /*i*/come_call_finalizer3(cvalue_110,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_104,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    type2_111=(struct sType*)come_increment_ref_count(solve_generics(type_100,info->generics_type,info));
    list$1sNodeph_reset(type2_111->mArrayNum);
    type_name_114=(char*)come_increment_ref_count(make_type_name_string(type2_111,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)1));
    type_name2_115=(char*)come_increment_ref_count(make_come_type_name_string(type2_111,info));
    if(    initializer_101) {
        static int var_num_116=1;
        var_num_116++;
        var_name_117=(char*)come_increment_ref_count(xsprintf("__new_obj__%d",var_num_116));
        type3_118=(struct sType*)come_increment_ref_count(sType_clone(type2_111));
        type3_118->mPointerNum++;
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value165=make_define_var(type3_118,var_name_117,(_Bool)0,info))));
        /* U11 */__right_value165 = come_decrement_ref_count2(__right_value165, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buf_119=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 64, "buffer"))));
        buffer_append_str(buf_119,"(");
        obj_120=(char*)come_increment_ref_count(xsprintf("%s = (%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",var_name_117,type_name_114,type_name_114,((char*)(__right_value168=buffer_to_string(num_string_103))),info->sname,info->sline,type_name2_115));
        /* U11 */__right_value168 = come_decrement_ref_count2(__right_value168, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        buffer_append_str(buf_119,obj_120);
        buffer_append_str(buf_119,",");
        klass_121=type3_118->mClass;
        i_122=0;
        for(        o2_saved_123=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((initializer_101)),it_126=list$1tuple2$2charphsNodephph_begin((o2_saved_123));        !list$1tuple2$2charphsNodephph_end((o2_saved_123));        it_126=list$1tuple2$2charphsNodephph_next((o2_saved_123))        ){
            multiple_assign_var1=it_126;
            name_129=(char*)come_increment_ref_count(multiple_assign_var1->v1);
            exp_130=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
            if(            !node_compile(exp_130,info)) {
                __result99__ = (_Bool)0;
                /* U13 */name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_117 = come_decrement_ref_count2(var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type3_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */obj_120 = come_decrement_ref_count2(obj_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_111,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */type_name_114 = come_decrement_ref_count2(type_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */type_name2_115 = come_decrement_ref_count2(type_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result99__;
            }
            come_value2_131=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            left_type_132=((void*)0);
            for(            o2_saved_133=(struct list$1tuple2$2charphsTypephph*)come_increment_ref_count((klass_121->mFields)),it2_136=list$1tuple2$2charphsTypephph_begin((o2_saved_133));            !list$1tuple2$2charphsTypephph_end((o2_saved_133));            it2_136=list$1tuple2$2charphsTypephph_next((o2_saved_133))            ){
                multiple_assign_var2=it2_136;
                field_name_139=(char*)come_increment_ref_count(multiple_assign_var2->v1);
                field_type_140=(struct sType*)come_increment_ref_count(multiple_assign_var2->v2);
                if(                string_operator_equals(name_129,field_name_139)) {
                    __dec_obj74=left_type_132;
                    left_type_132=(struct sType*)come_increment_ref_count(sType_clone(field_type_140));
                    come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(field_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
                    break;
                }
                /* U13 */field_name_139 = come_decrement_ref_count2(field_name_139, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(field_type_140,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            /*i*/come_call_finalizer3(o2_saved_133,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_132==((void*)0)) {
                err_msg(info,"field %s is not defined",name_129);
                __result106__ = (_Bool)0;
                /* U13 */name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(left_type_132,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */var_name_117 = come_decrement_ref_count2(var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type3_118,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */obj_120 = come_decrement_ref_count2(obj_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type2_111,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */type_name_114 = come_decrement_ref_count2(type_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /* U13 */type_name2_115 = come_decrement_ref_count2(type_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result106__;
            }
            right_type_143=(struct sType*)come_increment_ref_count(come_value2_131->type);
            check_assign_type(((char*)(__right_value173=xsprintf("\%s is assining to",((char*)(__right_value172=string_to_string(name_129)))))),left_type_132,right_type_143,come_value2_131,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value172 = come_decrement_ref_count2(__right_value172, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /* U11 */__right_value173 = come_decrement_ref_count2(__right_value173, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj78=right_type_143;
            right_type_143=(struct sType*)come_increment_ref_count(come_value2_131->type);
            come_call_finalizer3(__dec_obj78,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(            left_type_132->mHeap&&right_type_143->mHeap&&left_type_132->mPointerNum>0&&right_type_143->mPointerNum>0) {
                c_value_144=(char*)come_increment_ref_count(increment_ref_count_object(left_type_132,come_value2_131->c_value,info));
                buffer_append_format(buf_119,"%s->%s = %s",var_name_117,name_129,c_value_144);
                /* U13 */c_value_144 = come_decrement_ref_count2(c_value_144, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                buffer_append_format(buf_119,"%s->%s = %s",var_name_117,name_129,come_value2_131->c_value);
            }
            buffer_append_str(buf_119,",");
            i_122++;
            /* U13 */name_129 = come_decrement_ref_count2(name_129, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(exp_130) { exp_130 = come_decrement_ref_count2(exp_130, ((struct sNode*)exp_130)->finalize, ((struct sNode*)exp_130)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value2_131,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_132,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(right_type_143,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_123,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(buf_119,var_name_117);
        buffer_append_str(buf_119,")");
        __dec_obj79=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_119));
        /*G*/ __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_111->mHeap=(_Bool)1;
        type2_111->mPointerNum++;
        if(        type2_111->mNoSolvedGenericsType->v1) {
            type2_111->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_111->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj80=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(sType_clone(type2_111));
        come_call_finalizer3(__dec_obj80,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_102->var=((void*)0);
        append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(type2_111),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
        /* U13 */var_name_117 = come_decrement_ref_count2(var_name_117, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type3_118,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_119,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */obj_120 = come_decrement_ref_count2(obj_120, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj84=come_value_102->c_value;
        come_value_102->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_114,type_name_114,((char*)(__right_value180=buffer_to_string(num_string_103))),info->sname,info->sline,type_name2_115));
        /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value180 = come_decrement_ref_count2(__right_value180, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        type2_111->mHeap=(_Bool)1;
        type2_111->mPointerNum++;
        if(        type2_111->mNoSolvedGenericsType->v1) {
            type2_111->mNoSolvedGenericsType->v1->mPointerNum++;
            type2_111->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
        }
        __dec_obj85=come_value_102->type;
        come_value_102->type=(struct sType*)come_increment_ref_count(sType_clone(type2_111));
        come_call_finalizer3(__dec_obj85,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_102->var=((void*)0);
        append_object_to_right_values2(come_value_102,(struct sType*)come_increment_ref_count(type2_111),info,(_Bool)0);
        add_come_last_code(info,"%s",come_value_102->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    }
    __result108__ = (_Bool)1;
    /*i*/come_call_finalizer3(initializer_101,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_102,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_103,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_111,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_114 = come_decrement_ref_count2(type_name_114, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */type_name2_115 = come_decrement_ref_count2(type_name2_115, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result108__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj15;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj15=self->sname;
            /*G*/ __dec_obj15 = come_decrement_ref_count2(__dec_obj15, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result65__;
void* __right_value117 = (void*)0;
struct sType* result_66;
void* __right_value120 = (void*)0;
struct tuple1$1sTypeph* __dec_obj40;
void* __right_value121 = (void*)0;
struct tuple1$1sTypeph* __dec_obj41;
void* __right_value122 = (void*)0;
struct tuple1$1sTypeph* __dec_obj42;
void* __right_value123 = (void*)0;
char* __dec_obj43;
void* __right_value130 = (void*)0;
struct list$1sTypeph* __dec_obj47;
void* __right_value138 = (void*)0;
struct list$1sNodeph* __dec_obj51;
void* __right_value139 = (void*)0;
struct list$1sTypeph* __dec_obj52;
void* __right_value146 = (void*)0;
struct list$1charph* __dec_obj56;
void* __right_value147 = (void*)0;
struct tuple1$1sTypeph* __dec_obj57;
void* __right_value148 = (void*)0;
struct sNode* __dec_obj58;
void* __right_value149 = (void*)0;
struct tuple1$1sTypeph* __dec_obj59;
void* __right_value150 = (void*)0;
struct sNode* __dec_obj60;
void* __right_value151 = (void*)0;
char* __dec_obj61;
void* __right_value152 = (void*)0;
char* __dec_obj62;
struct sType* __result82__;
    if(    self==(void*)0) {
        __result65__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result65__;
    }
    result_66=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_66->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj40=result_66->mNoSolvedGenericsType;
        result_66->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj40,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj41=result_66->mOriginalLoadVarType;
        result_66->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj41,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        __dec_obj42=result_66->mNoExceptionType;
        result_66->mNoExceptionType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoExceptionType));
        come_call_finalizer3(__dec_obj42,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj43=result_66->mGenericsName;
        result_66->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj47=result_66->mGenericsTypes;
        result_66->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj51=result_66->mArrayNum;
        result_66->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj51,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj52=result_66->mParamTypes;
        result_66->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj52,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj56=result_66->mParamNames;
        result_66->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj56,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj57=result_66->mResultType;
        result_66->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj57,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj58=result_66->mAlignas;
        result_66->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj59=result_66->mChannelType;
        result_66->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj59,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_66->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_66->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_66->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_66->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_66->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_66->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_66->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_66->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_66->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_66->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_66->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_66->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_66->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_66->mDummyHeap=self->mDummyHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mDelegate=self->mDelegate;
    }
    if(    self!=((void*)0)) {
        result_66->mShare=self->mShare;
    }
    if(    self!=((void*)0)) {
        result_66->mClone=self->mClone;
    }
    if(    self!=((void*)0)) {
        result_66->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_66->mRefference=self->mRefference;
    }
    if(    self!=((void*)0)) {
        result_66->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_66->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_66->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj60=result_66->mSizeNum;
        result_66->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_66->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mDynamicArrayNum=self->mDynamicArrayNum;
    }
    if(    self!=((void*)0)) {
        result_66->mTypeOfExpression=self->mTypeOfExpression;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj61=result_66->mOriginalTypeName;
        result_66->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_66->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_66->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_66->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_66->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_66->mComeMemCore=self->mComeMemCore;
    }
    if(    self!=((void*)0)) {
        result_66->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_66->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_66->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj62=result_66->mAsmName;
        result_66->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_66->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_66->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_66->mNoNumberArray=self->mNoNumberArray;
    }
    if(    self!=((void*)0)) {
        result_66->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_66->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_66->mOriginIsArray=self->mOriginIsArray;
    }
    __result82__ = gComeFunResultObject = __result_obj__ = result_66;
    /*i*/come_call_finalizer3(result_66,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result82__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result66__;
void* __right_value118 = (void*)0;
struct tuple1$1sTypeph* result_67;
void* __right_value119 = (void*)0;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result67__;
    if(    self==(void*)0) {
        __result66__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result66__;
    }
    result_67=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj16=result_67->v1;
        result_67->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj16,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result67__ = gComeFunResultObject = __result_obj__ = result_67;
    /*i*/come_call_finalizer3(result_67,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result67__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj17;
struct tuple1$1sTypeph* __dec_obj19;
struct tuple1$1sTypeph* __dec_obj21;
char* __dec_obj23;
struct list$1sTypeph* __dec_obj24;
struct list$1sNodeph* __dec_obj26;
struct list$1sTypeph* __dec_obj28;
struct list$1charph* __dec_obj29;
struct tuple1$1sTypeph* __dec_obj31;
struct sNode* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj34;
struct sNode* __dec_obj36;
char* __dec_obj37;
char* __dec_obj38;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj17=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj17,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj19=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj19,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mNoExceptionType!=((void*)0)) {
        if(        self->mNoExceptionType==gComeFunResultObject) {
            __dec_obj21=self->mNoExceptionType;
            come_call_finalizer3(__dec_obj21,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoExceptionType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj23=self->mGenericsName;
            /*G*/ __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj24=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj24,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj26=self->mArrayNum;
            come_call_finalizer3(__dec_obj26,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj28=self->mParamTypes;
            come_call_finalizer3(__dec_obj28,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj29=self->mParamNames;
            come_call_finalizer3(__dec_obj29,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj31=self->mResultType;
            come_call_finalizer3(__dec_obj31,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj33=self->mAlignas;
            /* U1 */ if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj34=self->mChannelType;
            come_call_finalizer3(__dec_obj34,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj36=self->mSizeNum;
            /* U1 */ if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, ((struct sNode*)__dec_obj36)->finalize, ((struct sNode*)__dec_obj36)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj37=self->mOriginalTypeName;
            /*G*/ __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj38=self->mAsmName;
            /*G*/ __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_68;
struct list_item$1sTypeph* prev_it_69;
    it_68=self->head;
    while(it_68!=((void*)0)) {
        prev_it_69=it_68;
        it_68=it_68->next;
        /*i*/come_call_finalizer3(prev_it_69,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj25;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj25=self->item;
            come_call_finalizer3(__dec_obj25,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_70;
struct list_item$1sTypeph* prev_it_71;
    it_70=self->head;
    while(it_70!=((void*)0)) {
        prev_it_71=it_70;
        it_70=it_70->next;
        /*i*/come_call_finalizer3(prev_it_71,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_72;
struct list_item$1sNodeph* prev_it_73;
    it_72=self->head;
    while(it_72!=((void*)0)) {
        prev_it_73=it_72;
        it_72=it_72->next;
        /*i*/come_call_finalizer3(prev_it_73,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj27;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj27=self->item;
            /* U1 */ if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, ((struct sNode*)__dec_obj27)->finalize, ((struct sNode*)__dec_obj27)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_74;
struct list_item$1sNodeph* prev_it_75;
    it_74=self->head;
    while(it_74!=((void*)0)) {
        prev_it_75=it_74;
        it_74=it_74->next;
        /*i*/come_call_finalizer3(prev_it_75,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_76;
struct list_item$1charph* prev_it_77;
    it_76=self->head;
    while(it_76!=((void*)0)) {
        prev_it_77=it_76;
        it_76=it_76->next;
        /*i*/come_call_finalizer3(prev_it_77,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj30;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj30=self->item;
            /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1charphp_finalize(struct list$1charph* self){
struct list_item$1charph* it_78;
struct list_item$1charph* prev_it_79;
    it_78=self->head;
    while(it_78!=((void*)0)) {
        prev_it_79=it_78;
        it_78=it_78->next;
        /*i*/come_call_finalizer3(prev_it_79,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj35;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj35=self->v1;
            come_call_finalizer3(__dec_obj35,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj39;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj39=self->v1;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result68__;
void* __right_value124 = (void*)0;
void* __right_value125 = (void*)0;
struct list$1sTypeph* result_80;
struct list_item$1sTypeph* it_81;
void* __right_value129 = (void*)0;
struct list$1sTypeph* __result71__;
    if(    self==((void*)0)) {
        __result68__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result68__;
    }
    result_80=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 135, "list$1sTypeph"))));
    it_81=self->head;
    while(it_81!=((void*)0)) {
        list$1sTypeph_add(result_80,(struct sType*)come_increment_ref_count(sType_clone(it_81->item)));
        it_81=it_81->next;
    }
    __result71__ = gComeFunResultObject = __result_obj__ = result_80;
    /*i*/come_call_finalizer3(result_80,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result71__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result69__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result69__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result69__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value126 = (void*)0;
struct list_item$1sTypeph* litem_82;
struct sType* __dec_obj44;
void* __right_value127 = (void*)0;
struct list_item$1sTypeph* litem_83;
struct sType* __dec_obj45;
void* __right_value128 = (void*)0;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj46;
struct list$1sTypeph* __result70__;
    if(    self->len==0) {
        litem_82=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value126=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 149, "list_item$1sTypeph"))));
        litem_82->prev=((void*)0);
        litem_82->next=((void*)0);
        __dec_obj44=litem_82->item;
        litem_82->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_82;
        self->head=litem_82;
    }
    else if(    self->len==1) {
        litem_83=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value127=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 159, "list_item$1sTypeph"))));
        litem_83->prev=self->head;
        litem_83->next=((void*)0);
        __dec_obj45=litem_83->item;
        litem_83->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj45,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_83;
        self->head->next=litem_83;
    }
    else {
        litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value128=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 169, "list_item$1sTypeph"))));
        litem_84->prev=self->tail;
        litem_84->next=((void*)0);
        __dec_obj46=litem_84->item;
        litem_84->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj46,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_84;
        self->tail=litem_84;
    }
    self->len++;
    __result70__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result70__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result72__;
void* __right_value131 = (void*)0;
void* __right_value132 = (void*)0;
struct list$1sNodeph* result_85;
struct list_item$1sNodeph* it_86;
void* __right_value137 = (void*)0;
struct list$1sNodeph* __result77__;
    if(    self==((void*)0)) {
        __result72__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result72__;
    }
    result_85=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 135, "list$1sNodeph"))));
    it_86=self->head;
    while(it_86!=((void*)0)) {
        list$1sNodeph_add(result_85,(struct sNode*)come_increment_ref_count(sNode_clone(it_86->item)));
        it_86=it_86->next;
    }
    __result77__ = gComeFunResultObject = __result_obj__ = result_85;
    /*i*/come_call_finalizer3(result_85,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result77__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result73__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result73__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result73__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
struct list_item$1sNodeph* litem_87;
struct sNode* __dec_obj48;
void* __right_value134 = (void*)0;
struct list_item$1sNodeph* litem_88;
struct sNode* __dec_obj49;
void* __right_value135 = (void*)0;
struct list_item$1sNodeph* litem_89;
struct sNode* __dec_obj50;
struct list$1sNodeph* __result74__;
    if(    self->len==0) {
        litem_87=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value133=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 149, "list_item$1sNodeph"))));
        litem_87->prev=((void*)0);
        litem_87->next=((void*)0);
        __dec_obj48=litem_87->item;
        litem_87->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, ((struct sNode*)__dec_obj48)->finalize, ((struct sNode*)__dec_obj48)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_87;
        self->head=litem_87;
    }
    else if(    self->len==1) {
        litem_88=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value134=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 159, "list_item$1sNodeph"))));
        litem_88->prev=self->head;
        litem_88->next=((void*)0);
        __dec_obj49=litem_88->item;
        litem_88->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count2(__dec_obj49, ((struct sNode*)__dec_obj49)->finalize, ((struct sNode*)__dec_obj49)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_88;
        self->head->next=litem_88;
    }
    else {
        litem_89=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value135=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 169, "list_item$1sNodeph"))));
        litem_89->prev=self->tail;
        litem_89->next=((void*)0);
        __dec_obj50=litem_89->item;
        litem_89->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count2(__dec_obj50, ((struct sNode*)__dec_obj50)->finalize, ((struct sNode*)__dec_obj50)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_89;
        self->tail=litem_89;
    }
    self->len++;
    __result74__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result74__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result75__;
void* __right_value136 = (void*)0;
struct sNode* result_90;
struct sNode* __result76__;
    if(    self==(void*)0) {
        __result75__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result75__;
    }
    result_90=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_90->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_90->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_90->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_90->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_90->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_90->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_90->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_90->kind=self->kind;
    }
    __result76__ = gComeFunResultObject = __result_obj__ = result_90;
    if(result_90) { result_90 = come_decrement_ref_count2(result_90, ((struct sNode*)result_90)->finalize, ((struct sNode*)result_90)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result76__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result78__;
void* __right_value140 = (void*)0;
void* __right_value141 = (void*)0;
struct list$1charph* result_91;
struct list_item$1charph* it_92;
void* __right_value145 = (void*)0;
struct list$1charph* __result81__;
    if(    self==((void*)0)) {
        __result78__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result78__;
    }
    result_91=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 135, "list$1charph"))));
    it_92=self->head;
    while(it_92!=((void*)0)) {
        list$1charph_add(result_91,(char*)come_increment_ref_count(string_clone(it_92->item)));
        it_92=it_92->next;
    }
    __result81__ = gComeFunResultObject = __result_obj__ = result_91;
    /*i*/come_call_finalizer3(result_91,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result81__;
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result79__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result79__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result79__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
struct list_item$1charph* litem_93;
char* __dec_obj53;
void* __right_value143 = (void*)0;
struct list_item$1charph* litem_94;
char* __dec_obj54;
void* __right_value144 = (void*)0;
struct list_item$1charph* litem_95;
char* __dec_obj55;
struct list$1charph* __result80__;
    if(    self->len==0) {
        litem_93=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value142=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 149, "list_item$1charph"))));
        litem_93->prev=((void*)0);
        litem_93->next=((void*)0);
        __dec_obj53=litem_93->item;
        litem_93->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj53 = come_decrement_ref_count2(__dec_obj53, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_93;
        self->head=litem_93;
    }
    else if(    self->len==1) {
        litem_94=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value143=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 159, "list_item$1charph"))));
        litem_94->prev=self->head;
        litem_94->next=((void*)0);
        __dec_obj54=litem_94->item;
        litem_94->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_94;
        self->head->next=litem_94;
    }
    else {
        litem_95=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value144=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 169, "list_item$1charph"))));
        litem_95->prev=self->tail;
        litem_95->next=((void*)0);
        __dec_obj55=litem_95->item;
        litem_95->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_95;
        self->tail=litem_95;
    }
    self->len++;
    __result80__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result80__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_96;
struct list_item$1tuple2$2charphsNodephph* prev_it_97;
    it_96=self->head;
    while(it_96!=((void*)0)) {
        prev_it_97=it_96;
        it_96=it_96->next;
        /*i*/come_call_finalizer3(prev_it_97,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj65;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj65=self->item;
            come_call_finalizer3(__dec_obj65,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_98;
struct list_item$1tuple2$2charphsNodephph* prev_it_99;
    it_98=self->head;
    while(it_98!=((void*)0)) {
        prev_it_99=it_98;
        it_98=it_98->next;
        /*i*/come_call_finalizer3(prev_it_99,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_105;
struct sNode* __result85__;
struct sNode* __result86__;
struct sNode* result_106;
struct sNode* __result87__;
result_105 = (void*)0;
result_106 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_105,0,sizeof(struct sNode*));
        __result85__ = gComeFunResultObject = __result_obj__ = result_105;
        gComeFunResultObject = (void*)0;
        return __result85__;
    }
    self->it=self->head;
    if(    self->it) {
        __result86__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result86__;
    }
    memset(&result_106,0,sizeof(struct sNode*));
    __result87__ = gComeFunResultObject = __result_obj__ = result_106;
    gComeFunResultObject = (void*)0;
    return __result87__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_108;
struct sNode* __result88__;
struct sNode* __result89__;
struct sNode* result_109;
struct sNode* __result90__;
result_108 = (void*)0;
result_109 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_108,0,sizeof(struct sNode*));
        __result88__ = gComeFunResultObject = __result_obj__ = result_108;
        gComeFunResultObject = (void*)0;
        return __result88__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result89__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result89__;
    }
    memset(&result_109,0,sizeof(struct sNode*));
    __result90__ = gComeFunResultObject = __result_obj__ = result_109;
    gComeFunResultObject = (void*)0;
    return __result90__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj71;
struct sType* __dec_obj72;
char* __dec_obj73;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj71=self->c_value;
            /*G*/ __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj72=self->type;
            come_call_finalizer3(__dec_obj72,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj73=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_112;
struct list_item$1sNodeph* prev_it_113;
struct list$1sNodeph* __result92__;
    it_112=self->head;
    while(it_112!=((void*)0)) {
        prev_it_113=it_112;
        it_112=it_112->next;
        /*i*/come_call_finalizer3(prev_it_113,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result92__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result92__;
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_124;
struct tuple2$2charphsNodeph* __result93__;
struct tuple2$2charphsNodeph* __result94__;
struct tuple2$2charphsNodeph* result_125;
struct tuple2$2charphsNodeph* __result95__;
result_124 = (void*)0;
result_125 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_124,0,sizeof(struct tuple2$2charphsNodeph*));
        __result93__ = gComeFunResultObject = __result_obj__ = result_124;
        gComeFunResultObject = (void*)0;
        return __result93__;
    }
    self->it=self->head;
    if(    self->it) {
        __result94__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result94__;
    }
    memset(&result_125,0,sizeof(struct tuple2$2charphsNodeph*));
    __result95__ = gComeFunResultObject = __result_obj__ = result_125;
    gComeFunResultObject = (void*)0;
    return __result95__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_127;
struct tuple2$2charphsNodeph* __result96__;
struct tuple2$2charphsNodeph* __result97__;
struct tuple2$2charphsNodeph* result_128;
struct tuple2$2charphsNodeph* __result98__;
result_127 = (void*)0;
result_128 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_127,0,sizeof(struct tuple2$2charphsNodeph*));
        __result96__ = gComeFunResultObject = __result_obj__ = result_127;
        gComeFunResultObject = (void*)0;
        return __result96__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result97__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result97__;
    }
    memset(&result_128,0,sizeof(struct tuple2$2charphsNodeph*));
    __result98__ = gComeFunResultObject = __result_obj__ = result_128;
    gComeFunResultObject = (void*)0;
    return __result98__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_begin(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_134;
struct tuple2$2charphsTypeph* __result100__;
struct tuple2$2charphsTypeph* __result101__;
struct tuple2$2charphsTypeph* result_135;
struct tuple2$2charphsTypeph* __result102__;
result_134 = (void*)0;
result_135 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_134,0,sizeof(struct tuple2$2charphsTypeph*));
        __result100__ = gComeFunResultObject = __result_obj__ = result_134;
        gComeFunResultObject = (void*)0;
        return __result100__;
    }
    self->it=self->head;
    if(    self->it) {
        __result101__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result101__;
    }
    memset(&result_135,0,sizeof(struct tuple2$2charphsTypeph*));
    __result102__ = gComeFunResultObject = __result_obj__ = result_135;
    gComeFunResultObject = (void*)0;
    return __result102__;
}

static _Bool list$1tuple2$2charphsTypephph_end(struct list$1tuple2$2charphsTypephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephph_next(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsTypeph* result_137;
struct tuple2$2charphsTypeph* __result103__;
struct tuple2$2charphsTypeph* __result104__;
struct tuple2$2charphsTypeph* result_138;
struct tuple2$2charphsTypeph* __result105__;
result_137 = (void*)0;
result_138 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_137,0,sizeof(struct tuple2$2charphsTypeph*));
        __result103__ = gComeFunResultObject = __result_obj__ = result_137;
        gComeFunResultObject = (void*)0;
        return __result103__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result104__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result104__;
    }
    memset(&result_138,0,sizeof(struct tuple2$2charphsTypeph*));
    __result105__ = gComeFunResultObject = __result_obj__ = result_138;
    gComeFunResultObject = (void*)0;
    return __result105__;
}

static void list$1tuple2$2charphsTypephphp_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_141;
struct list_item$1tuple2$2charphsTypephph* prev_it_142;
    it_141=self->head;
    while(it_141!=((void*)0)) {
        prev_it_142=it_141;
        it_141=it_141->next;
        /*i*/come_call_finalizer3(prev_it_142,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsTypephphp_finalize(struct list_item$1tuple2$2charphsTypephph* self){
struct tuple2$2charphsTypeph* __dec_obj75;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj75=self->item;
            come_call_finalizer3(__dec_obj75,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
char* __dec_obj76;
struct sType* __dec_obj77;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj76=self->v1;
            /*G*/ __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj77=self->v2;
            come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value177 = (void*)0;
struct list_item$1CVALUEph* litem_145;
struct CVALUE* __dec_obj81;
void* __right_value178 = (void*)0;
struct list_item$1CVALUEph* litem_146;
struct CVALUE* __dec_obj82;
void* __right_value179 = (void*)0;
struct list_item$1CVALUEph* litem_147;
struct CVALUE* __dec_obj83;
struct list$1CVALUEph* __result107__;
    if(    self->len==0) {
        litem_145=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value177=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 219, "list_item$1CVALUEph"))));
        litem_145->prev=((void*)0);
        litem_145->next=((void*)0);
        __dec_obj81=litem_145->item;
        litem_145->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj81,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_145;
        self->head=litem_145;
    }
    else if(    self->len==1) {
        litem_146=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value178=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 229, "list_item$1CVALUEph"))));
        litem_146->prev=self->head;
        litem_146->next=((void*)0);
        __dec_obj82=litem_146->item;
        litem_146->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj82,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_146;
        self->head->next=litem_146;
    }
    else {
        litem_147=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value179=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 239, "list_item$1CVALUEph"))));
        litem_147->prev=self->tail;
        litem_147->next=((void*)0);
        __dec_obj83=litem_147->item;
        litem_147->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj83,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_147;
        self->tail=litem_147;
    }
    self->len++;
    __result107__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result107__;
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value183 = (void*)0;
void* __right_value184 = (void*)0;
struct sNode* __dec_obj86;
void* __right_value185 = (void*)0;
struct sType* __dec_obj87;
struct sImplementsNode* __result109__;
    ((struct sNodeBase*)(__right_value183=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value183,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj86=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(obj_exp));
    /* U1 */ if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); };
    __dec_obj87=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(sType_clone(inf_type));
    come_call_finalizer3(__dec_obj87,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result109__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result109__;
}

char* sImplementsNode_kind(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
void* __right_value186 = (void*)0;
char* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value186=__builtin_string("sImplementsNode")));
    /* U11 */__right_value186 = come_decrement_ref_count2(__right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __right_value187 = (void*)0;
struct sNode* obj_exp_148;
void* __right_value188 = (void*)0;
struct sType* inf_type_149;
_Bool __result111__;
void* __right_value189 = (void*)0;
struct CVALUE* come_value_150;
void* __right_value190 = (void*)0;
struct sType* type_151;
struct sClass* klass_152;
void* __right_value191 = (void*)0;
void* __right_value192 = (void*)0;
struct CVALUE* come_value2_153;
void* __right_value193 = (void*)0;
struct sType* type2_154;
void* __right_value194 = (void*)0;
char* type_name_155;
void* __right_value195 = (void*)0;
char* type_name2_156;
void* __right_value196 = (void*)0;
char* buf_158;
void* __right_value197 = (void*)0;
char* buf2_159;
void* __right_value198 = (void*)0;
struct sType* typeX_160;
void* __right_value199 = (void*)0;
void* __right_value200 = (void*)0;
int i_161;
struct tuple2$2charphsTypeph* multiple_assign_var3 = (void*)0;
char* name_165=0;
struct sType* field_type_166=0;
void* __right_value201 = (void*)0;
char* method_name_167;
struct sFun* fun_168;
struct sClass* klass2_171;
void* __right_value202 = (void*)0;
char* __dec_obj111;
void* __right_value203 = (void*)0;
char* __dec_obj112;
void* __right_value204 = (void*)0;
struct sType* type3_177;
void* __right_value205 = (void*)0;
struct sType* __dec_obj113;
_Bool __result122__;
    obj_exp_148=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
    inf_type_149=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
    if(    !node_compile(obj_exp_148,info)) {
        __result111__ = (_Bool)0;
        if(obj_exp_148) { obj_exp_148 = come_decrement_ref_count2(obj_exp_148, ((struct sNode*)obj_exp_148)->finalize, ((struct sNode*)obj_exp_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(inf_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
        return __result111__;
    }
    come_value_150=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_151=(struct sType*)come_increment_ref_count(sType_clone(come_value_150->type));
    type_151->mPointerNum--;
    type_151->mHeap=(_Bool)0;
    klass_152=inf_type_149->mClass;
    come_value2_153=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 200, "CVALUE"))));
    type2_154=(struct sType*)come_increment_ref_count(sType_clone(inf_type_149));
    type_name_155=(char*)come_increment_ref_count(make_type_name_string(inf_type_149,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    type_name2_156=(char*)come_increment_ref_count(make_type_name_string(type_151,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    static int inf_num_157=0;
    ++inf_num_157;
    buf_158=(char*)come_increment_ref_count(xsprintf("%s* _inf_value%d;\n",type_name_155,inf_num_157));
    add_come_code_at_function_head(info,buf_158);
    buf2_159=(char*)come_increment_ref_count(xsprintf("%s* _inf_obj_value%d;\n",type_name2_156,inf_num_157));
    add_come_code_at_function_head(info,buf2_159);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_157,type_name_155,type_name_155,info->sname,info->sline,type_name_155);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_157,come_value_150->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_157,inf_num_157);
    typeX_160=(struct sType*)come_increment_ref_count(sType_clone(type_151));
    typeX_160->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(__right_value199=create_finalizer_automatically(typeX_160,"finalize",info)));
    /*g*/come_call_finalizer3(__right_value199,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    ((struct tuple2$2sFunpcharph*)(__right_value200=create_cloner_automatically(typeX_160,"clone",info)));
    /*g*/come_call_finalizer3(__right_value200,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
    for(    i_161=1;    i_161<list$1tuple2$2charphsTypephph_length(klass_152->mFields);    i_161++    ){
        multiple_assign_var3=((struct tuple2$2charphsTypeph*)come_null_check(list$1tuple2$2charphsTypephphp_operator_load_element(klass_152->mFields,i_161), "21obj.c", 226, 0));
        name_165=(char*)come_increment_ref_count(multiple_assign_var3->v1);
        field_type_166=(struct sType*)come_increment_ref_count(multiple_assign_var3->v2);
        method_name_167=(char*)come_increment_ref_count(create_method_name(type_151,(_Bool)0,name_165,info,(_Bool)1));
        fun_168=map$2charphsFunph_at(info->funcs,method_name_167,((void*)0));
        if(        fun_168==((void*)0)) {
            klass2_171=((struct sClass*)come_null_check(map$2charphsClassphp_operator_load_element(info->classes,type_151->mClass->mName), "21obj.c", 233, 1));
            while(map$2charphsClassphp_operator_load_element(info->classes,klass2_171->mParentClassName)) {
                klass2_171=map$2charphsClassphp_operator_load_element(info->classes,klass2_171->mParentClassName);
                __dec_obj111=method_name_167;
                method_name_167=(char*)come_increment_ref_count(create_method_name_using_class(klass2_171,(_Bool)0,name_165,info,(_Bool)1));
                /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                fun_168=map$2charphsFunph_at(info->funcs,method_name_167,((void*)0));
                if(                fun_168) {
                    break;
                }
            }
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_157,name_165,method_name_167);
        }
        else {
            add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_157,name_165,method_name_167);
        }
        /* U13 */name_165 = come_decrement_ref_count2(name_165, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(field_type_166,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */method_name_167 = come_decrement_ref_count2(method_name_167, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj112=come_value2_153->c_value;
    come_value2_153->c_value=(char*)come_increment_ref_count(xsprintf("_inf_value%d",inf_num_157));
    /*G*/ __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
    type3_177=(struct sType*)come_increment_ref_count(sType_clone(inf_type_149));
    type3_177->mPointerNum++;
    type3_177->mHeap=(_Bool)1;
    type2_154->mHeap=(_Bool)1;
    __dec_obj113=come_value2_153->type;
    come_value2_153->type=(struct sType*)come_increment_ref_count(sType_clone(type2_154));
    come_call_finalizer3(__dec_obj113,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_153->type->mPointerNum++;
    come_value2_153->var=((void*)0);
    append_object_to_right_values2(come_value2_153,(struct sType*)come_increment_ref_count(type3_177),info,(_Bool)0);
    add_come_last_code(info,"%s",come_value2_153->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_153));
    __result122__ = (_Bool)1;
    if(obj_exp_148) { obj_exp_148 = come_decrement_ref_count2(obj_exp_148, ((struct sNode*)obj_exp_148)->finalize, ((struct sNode*)obj_exp_148)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(inf_type_149,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_150,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_151,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_153,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_154,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_155 = come_decrement_ref_count2(type_name_155, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */type_name2_156 = come_decrement_ref_count2(type_name2_156, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */buf_158 = come_decrement_ref_count2(buf_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /* U13 */buf2_159 = come_decrement_ref_count2(buf2_159, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(typeX_160,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_177,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result122__;
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj91;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj91=self->v2;
            /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1tuple2$2charphsTypephph* it_162;
int i_163;
struct tuple2$2charphsTypeph* __result112__;
struct tuple2$2charphsTypeph* default_value_164;
struct tuple2$2charphsTypeph* __result113__;
default_value_164 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_162=self->head;
    i_163=0;
    while(it_162!=((void*)0)) {
        if(        position==i_163) {
            __result112__ = gComeFunResultObject = __result_obj__ = it_162->item;
            gComeFunResultObject = (void*)0;
            return __result112__;
        }
        it_162=it_162->next;
        i_163++;
    }
    memset(&default_value_164,0,sizeof(struct tuple2$2charphsTypeph*));
    __result113__ = gComeFunResultObject = __result_obj__ = default_value_164;
    /*i*/come_call_finalizer3(default_value_164,tuple2$2charphsTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result113__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_169;
unsigned int it_170;
struct sFun* __result114__;
struct sFun* __result115__;
struct sFun* __result116__;
struct sFun* __result117__;
    hash_169=string_get_hash_key(((char*)key))%self->size;
    it_170=hash_169;
    while((_Bool)1) {
        if(        self->item_existance[it_170]) {
            if(            string_equals(self->keys[it_170],key)) {
                __result114__ = gComeFunResultObject = __result_obj__ = self->items[it_170];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result114__;
            }
            it_170++;
            if(            it_170>=self->size) {
                it_170=0;
            }
            else if(            it_170==hash_169) {
                __result115__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result115__;
            }
        }
        else {
            __result116__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result116__;
        }
    }
    __result117__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result117__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj92;
struct sType* __dec_obj93;
struct list$1sTypeph* __dec_obj94;
struct list$1charph* __dec_obj95;
struct list$1charph* __dec_obj96;
struct sType* __dec_obj97;
struct sBlock* __dec_obj98;
struct buffer* __dec_obj101;
struct buffer* __dec_obj102;
struct buffer* __dec_obj103;
struct buffer* __dec_obj104;
char* __dec_obj105;
char* __dec_obj106;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj92=self->mName;
            /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj93=self->mResultType;
            come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj94=self->mParamTypes;
            come_call_finalizer3(__dec_obj94,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj95=self->mParamNames;
            come_call_finalizer3(__dec_obj95,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj96=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj96,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj97=self->mLambdaType;
            come_call_finalizer3(__dec_obj97,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj98=self->mBlock;
            come_call_finalizer3(__dec_obj98,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj101=self->mSource;
            come_call_finalizer3(__dec_obj101,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj102=self->mSourceHead;
            come_call_finalizer3(__dec_obj102,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj103=self->mSourceHead2;
            come_call_finalizer3(__dec_obj103,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj104=self->mSourceDefer;
            come_call_finalizer3(__dec_obj104,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj105=self->mComeHeader;
            /*G*/ __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj106=self->mDeclareSName;
            /*G*/ __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj99;
struct sVarTable* __dec_obj100;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj99=self->mNodes;
            come_call_finalizer3(__dec_obj99,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj100=self->mVarTable;
            come_call_finalizer3(__dec_obj100,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sClass* map$2charphsClassphp_operator_load_element(struct map$2charphsClassph* self, char* key){
void* __result_obj__=(void*)0;
struct sClass* default_value_172;
unsigned int hash_173;
unsigned int it_174;
struct sClass* __result118__;
struct sClass* __result119__;
struct sClass* __result120__;
struct sClass* __result121__;
default_value_172 = (void*)0;
    memset(&default_value_172,0,sizeof(struct sClass*));
    hash_173=string_get_hash_key(((char*)key))%self->size;
    it_174=hash_173;
    while((_Bool)1) {
        if(        self->item_existance[it_174]) {
            if(            string_equals(self->keys[it_174],key)) {
                __result118__ = gComeFunResultObject = __result_obj__ = self->items[it_174];
                /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result118__;
            }
            it_174++;
            if(            it_174>=self->size) {
                it_174=0;
            }
            else if(            it_174==hash_173) {
                __result119__ = gComeFunResultObject = __result_obj__ = default_value_172;
                /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result119__;
            }
        }
        else {
            __result120__ = gComeFunResultObject = __result_obj__ = default_value_172;
            /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result120__;
        }
    }
    __result121__ = gComeFunResultObject = __result_obj__ = default_value_172;
    /*i*/come_call_finalizer3(default_value_172,sClass_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result121__;
}

static void sClass_finalize(struct sClass* self){
char* __dec_obj107;
struct list$1tuple2$2charphsTypephph* __dec_obj108;
char* __dec_obj109;
char* __dec_obj110;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj107=self->mName;
            /*G*/ __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        if(        self->mFields==gComeFunResultObject) {
            __dec_obj108=self->mFields;
            come_call_finalizer3(__dec_obj108,list$1tuple2$2charphsTypephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mFields,list$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj109=self->mDeclareSName;
            /*G*/ __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        if(        self->mParentClassName==gComeFunResultObject) {
            __dec_obj110=self->mParentClassName;
            /*G*/ __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1tuple2$2charphsTypephph_finalize(struct list$1tuple2$2charphsTypephph* self){
struct list_item$1tuple2$2charphsTypephph* it_175;
struct list_item$1tuple2$2charphsTypephph* prev_it_176;
    it_175=self->head;
    while(it_175!=((void*)0)) {
        prev_it_176=it_175;
        it_175=it_175->next;
        /*i*/come_call_finalizer3(prev_it_176,list_item$1tuple2$2charphsTypephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value206 = (void*)0;
struct sTrueNode* __result123__;
    ((struct sNodeBase*)(__right_value206=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value206,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result123__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result123__;
}

char* sTrueNode_kind(struct sTrueNode* self){
void* __result_obj__=(void*)0;
void* __right_value207 = (void*)0;
char* __result124__;
    __result124__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value207=__builtin_string("sTrueNode")));
    /* U11 */__right_value207 = come_decrement_ref_count2(__right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result124__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __right_value208 = (void*)0;
void* __right_value209 = (void*)0;
struct CVALUE* come_value_178;
void* __right_value210 = (void*)0;
char* __dec_obj115;
void* __right_value211 = (void*)0;
void* __right_value212 = (void*)0;
struct sType* __dec_obj116;
_Bool __result125__;
    come_value_178=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 287, "CVALUE"))));
    __dec_obj115=come_value_178->c_value;
    come_value_178->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)1"));
    /*G*/ __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj116=come_value_178->type;
    come_value_178->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 290, "sType")),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj116,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_178->var=((void*)0);
    add_come_last_code(info,"%s",come_value_178->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
    __result125__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_178,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result125__;
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value213 = (void*)0;
void* __right_value214 = (void*)0;
struct sNode* _inf_value1;
struct sTrueNode* _inf_obj_value1;
void* __right_value217 = (void*)0;
struct sNode* __result128__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 303, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sTrueNode*)(__right_value214=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 303, "sTrueNode")),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sTrueNode_finalize;
    _inf_value1->clone=(void*)sTrueNode_clone;
    _inf_value1->compile=(void*)sTrueNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sTrueNode_kind;
    __result128__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value217=_inf_value1));
    /*g*/come_call_finalizer3(__right_value214,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value217) { __right_value217 = come_decrement_ref_count2(__right_value217, ((struct sNode*)__right_value217)->finalize, ((struct sNode*)__right_value217)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result128__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value218 = (void*)0;
struct sFalseNode* __result129__;
    ((struct sNodeBase*)(__right_value218=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value218,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result129__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result129__;
}

char* sFalseNode_kind(struct sFalseNode* self){
void* __result_obj__=(void*)0;
void* __right_value219 = (void*)0;
char* __result130__;
    __result130__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value219=__builtin_string("sFalseNode")));
    /* U11 */__right_value219 = come_decrement_ref_count2(__right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result130__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __right_value220 = (void*)0;
void* __right_value221 = (void*)0;
struct CVALUE* come_value_180;
void* __right_value222 = (void*)0;
char* __dec_obj120;
void* __right_value223 = (void*)0;
void* __right_value224 = (void*)0;
struct sType* __dec_obj121;
_Bool __result131__;
    come_value_180=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 320, "CVALUE"))));
    __dec_obj120=come_value_180->c_value;
    come_value_180->c_value=(char*)come_increment_ref_count(xsprintf("(_Bool)0"));
    /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj121=come_value_180->type;
    come_value_180->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 323, "sType")),"bool",(_Bool)0,info));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_180->var=((void*)0);
    add_come_last_code(info,"%s",come_value_180->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
    __result131__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_180,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result131__;
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value225 = (void*)0;
void* __right_value226 = (void*)0;
struct sNode* _inf_value2;
struct sFalseNode* _inf_obj_value2;
void* __right_value229 = (void*)0;
struct sNode* __result134__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 336, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sFalseNode*)(__right_value226=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 336, "sFalseNode")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sFalseNode_finalize;
    _inf_value2->clone=(void*)sFalseNode_clone;
    _inf_value2->compile=(void*)sFalseNode_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sFalseNode_kind;
    __result134__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value229=_inf_value2));
    /*g*/come_call_finalizer3(__right_value226,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value229) { __right_value229 = come_decrement_ref_count2(__right_value229, ((struct sNode*)__right_value229)->finalize, ((struct sNode*)__right_value229)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result134__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value230 = (void*)0;
void* __right_value231 = (void*)0;
struct sType* __dec_obj124;
struct sSizeOfNode* __result135__;
    ((struct sNodeBase*)(__right_value230=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value230,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj124,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result135__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result135__;
}

char* sSizeOfNode_kind(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value232 = (void*)0;
char* __result136__;
    __result136__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value232=__builtin_string("sSizeOfNode")));
    /* U11 */__right_value232 = come_decrement_ref_count2(__right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result136__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
struct sType* type_182;
void* __right_value233 = (void*)0;
void* __right_value234 = (void*)0;
struct CVALUE* come_value_183;
void* __right_value235 = (void*)0;
struct sType* type2_184;
void* __right_value236 = (void*)0;
char* type_name_185;
void* __right_value237 = (void*)0;
char* __dec_obj127;
void* __right_value238 = (void*)0;
void* __right_value239 = (void*)0;
struct sType* __dec_obj128;
_Bool __result137__;
    type_182=self->type;
    come_value_183=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 357, "CVALUE"))));
    type2_184=(struct sType*)come_increment_ref_count(solve_generics(type_182,info->generics_type,info));
    type_name_185=(char*)come_increment_ref_count(make_type_name_string(type2_184,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1));
    __dec_obj127=come_value_183->c_value;
    come_value_183->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",type_name_185));
    /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj128=come_value_183->type;
    come_value_183->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 364, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_183->type->mUnsigned=(_Bool)1;
    come_value_183->var=((void*)0);
    add_come_last_code(info,"%s",come_value_183->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
    __result137__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_183,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_184,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_185 = come_decrement_ref_count2(type_name_185, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result137__;
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value240 = (void*)0;
void* __right_value241 = (void*)0;
struct sNode* __dec_obj129;
struct sSizeOfExpNode* __result138__;
struct sSizeOfExpNode* __result139__;
    ((struct sNodeBase*)(__right_value240=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value240,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj129=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    /* U1 */ if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); };
    __result138__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result138__;
    __result139__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result139__;
}

char* sSizeOfExpNode_kind(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value242 = (void*)0;
char* __result140__;
    __result140__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value242=__builtin_string("sSizeOfExpNode")));
    /* U11 */__right_value242 = come_decrement_ref_count2(__right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result140__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
struct sNode* exp_186;
_Bool __result141__;
void* __right_value243 = (void*)0;
struct CVALUE* come_value_187;
void* __right_value244 = (void*)0;
void* __right_value245 = (void*)0;
struct CVALUE* come_value2_188;
void* __right_value246 = (void*)0;
char* __dec_obj132;
void* __right_value247 = (void*)0;
void* __right_value248 = (void*)0;
struct sType* __dec_obj133;
_Bool __result142__;
    exp_186=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_186,info)) {
        __result141__ = (_Bool)0;
        if(exp_186) { exp_186 = come_decrement_ref_count2(exp_186, ((struct sNode*)exp_186)->finalize, ((struct sNode*)exp_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result141__;
    }
    come_value_187=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_188=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 403, "CVALUE"))));
    __dec_obj132=come_value2_188->c_value;
    come_value2_188->c_value=(char*)come_increment_ref_count(xsprintf("sizeof(%s)",come_value_187->c_value));
    /*G*/ __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj133=come_value2_188->type;
    come_value2_188->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 406, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj133,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_188->type->mUnsigned=(_Bool)1;
    come_value2_188->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_188->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_188));
    __result142__ = (_Bool)1;
    if(exp_186) { exp_186 = come_decrement_ref_count2(exp_186, ((struct sNode*)exp_186)->finalize, ((struct sNode*)exp_186)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_187,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_188,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result142__;
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value249 = (void*)0;
void* __right_value250 = (void*)0;
struct sType* __dec_obj134;
struct sTypeOfNode* __result143__;
    ((struct sNodeBase*)(__right_value249=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value249,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj134,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result143__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result143__;
}

char* sTypeOfNode_kind(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value251 = (void*)0;
char* __result144__;
    __result144__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value251=__builtin_string("sTypeOfNode")));
    /* U11 */__right_value251 = come_decrement_ref_count2(__right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result144__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
struct sType* type_189;
void* __right_value252 = (void*)0;
void* __right_value253 = (void*)0;
struct CVALUE* come_value_190;
void* __right_value254 = (void*)0;
struct sType* type2_191;
void* __right_value255 = (void*)0;
char* type_name_192;
void* __right_value256 = (void*)0;
char* __dec_obj137;
void* __right_value257 = (void*)0;
void* __right_value258 = (void*)0;
struct sType* __dec_obj138;
_Bool __result145__;
    type_189=self->type;
    come_value_190=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 436, "CVALUE"))));
    type2_191=(struct sType*)come_increment_ref_count(solve_generics(type_189,info->generics_type,info));
    type_name_192=(char*)come_increment_ref_count(make_type_name_string(type2_191,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj137=come_value_190->c_value;
    come_value_190->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_192));
    /*G*/ __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj138=come_value_190->type;
    come_value_190->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 443, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj138,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_190->var=((void*)0);
    add_come_last_code(info,"%s",come_value_190->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
    __result145__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_190,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_191,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_192 = come_decrement_ref_count2(type_name_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result145__;
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value259 = (void*)0;
void* __right_value260 = (void*)0;
struct sNode* __dec_obj139;
struct sTypeOfExpNode* __result146__;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj139=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    /* U1 */ if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); };
    __result146__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result146__;
}

char* sTypeOfExpNode_kind(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value261 = (void*)0;
char* __result147__;
    __result147__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value261=__builtin_string("sTypeOfExpNode")));
    /* U11 */__right_value261 = come_decrement_ref_count2(__right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result147__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
struct sNode* exp_193;
_Bool __result148__;
void* __right_value262 = (void*)0;
struct CVALUE* come_value_194;
void* __right_value263 = (void*)0;
struct sType* type_195;
void* __right_value264 = (void*)0;
struct sType* type2_196;
void* __right_value265 = (void*)0;
char* type_name_197;
void* __right_value266 = (void*)0;
char* __dec_obj142;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct sType* __dec_obj143;
_Bool __result149__;
    exp_193=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_193,info)) {
        __result148__ = (_Bool)0;
        if(exp_193) { exp_193 = come_decrement_ref_count2(exp_193, ((struct sNode*)exp_193)->finalize, ((struct sNode*)exp_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result148__;
    }
    come_value_194=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(sType_clone(come_value_194->type));
    type2_196=(struct sType*)come_increment_ref_count(solve_generics(type_195,info->generics_type,info));
    type_name_197=(char*)come_increment_ref_count(make_type_name_string(type2_196,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj142=come_value_194->c_value;
    come_value_194->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_197));
    /*G*/ __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj143=come_value_194->type;
    come_value_194->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 486, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_194->var=((void*)0);
    add_come_last_code(info,"%s",come_value_194->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_194));
    __result149__ = (_Bool)1;
    if(exp_193) { exp_193 = come_decrement_ref_count2(exp_193, ((struct sNode*)exp_193)->finalize, ((struct sNode*)exp_193)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_194,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_195,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_196,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_197 = come_decrement_ref_count2(type_name_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result149__;
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct sNode* __dec_obj144;
struct sDynamicTypeOfNode* __result150__;
    ((struct sNodeBase*)(__right_value269=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value269,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj144=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    /* U1 */ if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); };
    __result150__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDynamicTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result150__;
}

char* sDynamicTypeOfNode_kind(struct sDynamicTypeOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value271 = (void*)0;
char* __result151__;
    __result151__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value271=__builtin_string("sDynamicTypeOfNode")));
    /* U11 */__right_value271 = come_decrement_ref_count2(__right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
struct sNode* exp_198;
_Bool __result152__;
void* __right_value272 = (void*)0;
struct CVALUE* come_value_199;
void* __right_value273 = (void*)0;
struct sType* type_200;
void* __right_value274 = (void*)0;
struct sType* type2_201;
void* __right_value275 = (void*)0;
char* type_name_202;
void* __right_value276 = (void*)0;
char* __dec_obj147;
void* __right_value277 = (void*)0;
void* __right_value278 = (void*)0;
struct sType* __dec_obj148;
_Bool __result153__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct CVALUE* come_value2_203;
void* __right_value281 = (void*)0;
char* __dec_obj149;
void* __right_value282 = (void*)0;
void* __right_value283 = (void*)0;
struct sType* __dec_obj150;
_Bool __result154__;
    exp_198=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_198,info)) {
        __result152__ = (_Bool)0;
        if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result152__;
    }
    come_value_199=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    !come_value_199->type->mHeap) {
        type_200=(struct sType*)come_increment_ref_count(sType_clone(come_value_199->type));
        type2_201=(struct sType*)come_increment_ref_count(solve_generics(type_200,info->generics_type,info));
        type_name_202=(char*)come_increment_ref_count(make_type_name_string(type2_201,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj147=come_value_199->c_value;
        come_value_199->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",type_name_202));
        /*G*/ __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj148=come_value_199->type;
        come_value_199->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 530, "sType")),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj148,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_199->var=((void*)0);
        add_come_last_code(info,"%s",come_value_199->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_199));
        __result153__ = (_Bool)1;
        /*i*/come_call_finalizer3(type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */type_name_202 = come_decrement_ref_count2(type_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        return __result153__;
        /*i*/come_call_finalizer3(type_200,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_201,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */type_name_202 = come_decrement_ref_count2(type_name_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_203=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 540, "CVALUE"))));
        __dec_obj149=come_value2_203->c_value;
        come_value2_203->c_value=(char*)come_increment_ref_count(xsprintf("come_dynamic_typeof(%s)",come_value_199->c_value));
        /*G*/ __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj150=come_value2_203->type;
        come_value2_203->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 543, "sType")),"char*",(_Bool)0,info));
        come_call_finalizer3(__dec_obj150,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_203->var=((void*)0);
        add_come_last_code(info,"%s",come_value2_203->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_203));
        /*i*/come_call_finalizer3(come_value2_203,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result154__ = (_Bool)1;
    if(exp_198) { exp_198 = come_decrement_ref_count2(exp_198, ((struct sNode*)exp_198)->finalize, ((struct sNode*)exp_198)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_199,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result154__;
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
char* __dec_obj145;
struct sNode* __dec_obj146;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj145=self->sname;
            /*G*/ __dec_obj145 = come_decrement_ref_count2(__dec_obj145, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj146=self->exp;
            /* U1 */ if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value284 = (void*)0;
void* __right_value285 = (void*)0;
struct sType* __dec_obj151;
struct sAlignOfNode* __result155__;
struct sAlignOfNode* __result156__;
    ((struct sNodeBase*)(__right_value284=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value284,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj151=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result155__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result155__;
    __result156__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result156__;
}

char* sAlignOfNode_kind(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
void* __right_value286 = (void*)0;
char* __result157__;
    __result157__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value286=__builtin_string("sAlignOfNode")));
    /* U11 */__right_value286 = come_decrement_ref_count2(__right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result157__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
struct sType* type_204;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct CVALUE* come_value_205;
void* __right_value289 = (void*)0;
struct sType* type2_206;
void* __right_value290 = (void*)0;
char* type_name_207;
void* __right_value291 = (void*)0;
char* __dec_obj154;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
struct sType* __dec_obj155;
_Bool __result158__;
    type_204=self->type;
    come_value_205=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 575, "CVALUE"))));
    type2_206=(struct sType*)come_increment_ref_count(solve_generics(type_204,info->generics_type,info));
    type_name_207=(char*)come_increment_ref_count(make_type_name_string(type2_206,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj154=come_value_205->c_value;
    come_value_205->c_value=(char*)come_increment_ref_count(xsprintf("_Alignof(%s)",type_name_207));
    /*G*/ __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj155=come_value_205->type;
    come_value_205->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 582, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj155,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_205->type->mUnsigned=(_Bool)1;
    come_value_205->var=((void*)0);
    add_come_last_code(info,"%s",come_value_205->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_205));
    __result158__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_205,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_206,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_207 = come_decrement_ref_count2(type_name_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result158__;
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value294 = (void*)0;
void* __right_value295 = (void*)0;
struct sNode* __dec_obj156;
struct sAlignOfExpNode* __result159__;
    ((struct sNodeBase*)(__right_value294=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value294,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj156=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    /* U1 */ if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); };
    __result159__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result159__;
}

char* sAlignOfExpNode_kind(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value296 = (void*)0;
char* __result160__;
    __result160__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value296=__builtin_string("sAlignOfExpNode")));
    /* U11 */__right_value296 = come_decrement_ref_count2(__right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result160__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
struct sNode* exp_208;
_Bool __result161__;
void* __right_value297 = (void*)0;
struct CVALUE* come_value_209;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct CVALUE* come_value2_210;
void* __right_value300 = (void*)0;
char* __dec_obj159;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
struct sType* __dec_obj160;
_Bool __result162__;
    exp_208=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_208,info)) {
        __result161__ = (_Bool)0;
        if(exp_208) { exp_208 = come_decrement_ref_count2(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result161__;
    }
    come_value_209=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_210=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 619, "CVALUE"))));
    __dec_obj159=come_value2_210->c_value;
    come_value2_210->c_value=(char*)come_increment_ref_count(xsprintf("_AlignOf(%s)",come_value_209->c_value));
    /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj160=come_value2_210->type;
    come_value2_210->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 622, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj160,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_210->type->mUnsigned=(_Bool)1;
    come_value2_210->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_210->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_210));
    __result162__ = (_Bool)1;
    if(exp_208) { exp_208 = come_decrement_ref_count2(exp_208, ((struct sNode*)exp_208)->finalize, ((struct sNode*)exp_208)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_209,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_210,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result162__;
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
struct sType* __dec_obj161;
struct sAlignOfNode2* __result163__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj161,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result163__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result163__;
}

char* sAlignOfNode2_kind(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
void* __right_value305 = (void*)0;
char* __result164__;
    __result164__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value305=__builtin_string("sAlignOfNode2")));
    /* U11 */__right_value305 = come_decrement_ref_count2(__right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result164__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
struct sType* type_211;
void* __right_value306 = (void*)0;
void* __right_value307 = (void*)0;
struct CVALUE* come_value_212;
void* __right_value308 = (void*)0;
struct sType* type2_213;
void* __right_value309 = (void*)0;
char* type_name_214;
void* __right_value310 = (void*)0;
char* __dec_obj164;
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct sType* __dec_obj165;
_Bool __result165__;
    type_211=self->type;
    come_value_212=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 652, "CVALUE"))));
    type2_213=(struct sType*)come_increment_ref_count(solve_generics(type_211,info->generics_type,info));
    type_name_214=(char*)come_increment_ref_count(make_type_name_string(type2_213,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj164=come_value_212->c_value;
    come_value_212->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",type_name_214));
    /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj165=come_value_212->type;
    come_value_212->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 659, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_212->type->mUnsigned=(_Bool)1;
    come_value_212->var=((void*)0);
    add_come_last_code(info,"%s",come_value_212->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
    __result165__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_212,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_213,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_214 = come_decrement_ref_count2(type_name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result165__;
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value313 = (void*)0;
void* __right_value314 = (void*)0;
struct sNode* __dec_obj166;
struct sAlignOfExpNode2* __result166__;
    ((struct sNodeBase*)(__right_value313=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value313,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj166=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    /* U1 */ if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); };
    __result166__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result166__;
}

char* sAlignOfExpNode2_kind(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
char* __result167__;
    __result167__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value315=__builtin_string("sAlignOfExpNode2")));
    /* U11 */__right_value315 = come_decrement_ref_count2(__right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result167__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
struct sNode* exp_215;
_Bool __result168__;
void* __right_value316 = (void*)0;
struct CVALUE* come_value_216;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct CVALUE* come_value2_217;
void* __right_value319 = (void*)0;
char* __dec_obj169;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sType* __dec_obj170;
_Bool __result169__;
    exp_215=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_215,info)) {
        __result168__ = (_Bool)0;
        if(exp_215) { exp_215 = come_decrement_ref_count2(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result168__;
    }
    come_value_216=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_217=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 696, "CVALUE"))));
    __dec_obj169=come_value2_217->c_value;
    come_value2_217->c_value=(char*)come_increment_ref_count(xsprintf("__alignof__(%s)",come_value_216->c_value));
    /*G*/ __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj170=come_value2_217->type;
    come_value2_217->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 699, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj170,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_217->type->mUnsigned=(_Bool)1;
    come_value2_217->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_217->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_217));
    __result169__ = (_Bool)1;
    if(exp_215) { exp_215 = come_decrement_ref_count2(exp_215, ((struct sNode*)exp_215)->finalize, ((struct sNode*)exp_215)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_216,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_217,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result169__;
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct sType* __dec_obj171;
struct sAlignAsNode* __result170__;
    ((struct sNodeBase*)(__right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value322,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj171=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj171,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result170__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result170__;
}

char* sAlignAsNode_kind(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
void* __right_value324 = (void*)0;
char* __result171__;
    __result171__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value324=__builtin_string("sAlignAsNode")));
    /* U11 */__right_value324 = come_decrement_ref_count2(__right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result171__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
struct sType* type_218;
void* __right_value325 = (void*)0;
void* __right_value326 = (void*)0;
struct CVALUE* come_value_219;
void* __right_value327 = (void*)0;
struct sType* type2_220;
void* __right_value328 = (void*)0;
char* type_name_221;
void* __right_value329 = (void*)0;
char* __dec_obj174;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
struct sType* __dec_obj175;
_Bool __result172__;
    type_218=self->type;
    come_value_219=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 729, "CVALUE"))));
    type2_220=(struct sType*)come_increment_ref_count(solve_generics(type_218,info->generics_type,info));
    type_name_221=(char*)come_increment_ref_count(make_type_name_string(type2_220,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
    __dec_obj174=come_value_219->c_value;
    come_value_219->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",type_name_221));
    /*G*/ __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj175=come_value_219->type;
    come_value_219->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 736, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj175,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_219->type->mUnsigned=(_Bool)1;
    come_value_219->var=((void*)0);
    add_come_last_code(info,"%s",come_value_219->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_219));
    __result172__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_219,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_220,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_221 = come_decrement_ref_count2(type_name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result172__;
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sNode* __dec_obj176;
struct sAlignAsExpNode* __result173__;
    ((struct sNodeBase*)(__right_value332=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value332,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj176=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(sNode_clone(exp));
    /* U1 */ if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0, (void*)0); };
    __result173__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result173__;
}

char* sAlignAsExpNode_kind(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
char* __result174__;
    __result174__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value334=__builtin_string("sAlignAsExpNode")));
    /* U11 */__right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result174__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
struct sNode* exp_222;
_Bool __result175__;
void* __right_value335 = (void*)0;
struct CVALUE* come_value_223;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct CVALUE* come_value2_224;
void* __right_value338 = (void*)0;
char* __dec_obj179;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct sType* __dec_obj180;
_Bool __result176__;
    exp_222=(struct sNode*)come_increment_ref_count(self->exp);
    if(    !node_compile(exp_222,info)) {
        __result175__ = (_Bool)0;
        if(exp_222) { exp_222 = come_decrement_ref_count2(exp_222, ((struct sNode*)exp_222)->finalize, ((struct sNode*)exp_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result175__;
    }
    come_value_223=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_224=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 773, "CVALUE"))));
    __dec_obj179=come_value2_224->c_value;
    come_value2_224->c_value=(char*)come_increment_ref_count(xsprintf("_Alignas(%s)",come_value_223->c_value));
    /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj180=come_value2_224->type;
    come_value2_224->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 776, "sType")),"long",(_Bool)0,info));
    come_call_finalizer3(__dec_obj180,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_224->type->mUnsigned=(_Bool)1;
    come_value2_224->var=((void*)0);
    add_come_last_code(info,"%s",come_value2_224->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_224));
    __result176__ = (_Bool)1;
    if(exp_222) { exp_222 = come_decrement_ref_count2(exp_222, ((struct sNode*)exp_222)->finalize, ((struct sNode*)exp_222)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(come_value_223,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_224,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result176__;
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
void* __right_value342 = (void*)0;
struct sNode* __dec_obj181;
struct sDeleteNode* __result177__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj181=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); };
    __result177__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result177__;
}

char* sDeleteNode_kind(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
char* __result178__;
    __result178__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value343=__builtin_string("sDeleteNode")));
    /* U11 */__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result178__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
struct sNode* node_225;
void* __right_value344 = (void*)0;
struct CVALUE* come_value_226;
_Bool __result179__;
    node_225=self->node;
    if(    !node_compile(node_225,info)) {
        return (_Bool)0;
    }
    come_value_226=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    free_object(come_value_226->type,come_value_226->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result179__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_226,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result179__;
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
struct sNode* __dec_obj184;
struct sDelegateNode* __result180__;
struct sDelegateNode* __result181__;
    ((struct sNodeBase*)(__right_value345=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value345,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj184=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); };
    __result180__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result180__;
    __result181__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result181__;
}

char* sDelegateNode_kind(struct sDelegateNode* self){
void* __result_obj__=(void*)0;
void* __right_value347 = (void*)0;
char* __result182__;
    __result182__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value347=__builtin_string("sDelegateNode")));
    /* U11 */__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result182__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
struct sNode* node_227;
void* __right_value348 = (void*)0;
struct CVALUE* come_value_228;
_Bool __result183__;
    node_227=self->node;
    if(    !node_compile(node_227,info)) {
        return (_Bool)0;
    }
    come_value_228=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_228->type->mDelegate=(_Bool)1;
    if(    come_value_228->var) {
        come_value_228->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_228));
    __result183__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_228,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result183__;
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct sNode* __dec_obj187;
struct sShareNode* __result184__;
    ((struct sNodeBase*)(__right_value349=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value349,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj187=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); };
    __result184__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result184__;
}

char* sShareNode_kind(struct sShareNode* self){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
char* __result185__;
    __result185__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value351=__builtin_string("sShareNode")));
    /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result185__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
struct sNode* node_229;
void* __right_value352 = (void*)0;
struct CVALUE* come_value_230;
_Bool __result186__;
    node_229=self->node;
    if(    !node_compile(node_229,info)) {
        return (_Bool)0;
    }
    come_value_230=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_230->type->mShare=(_Bool)1;
    if(    come_value_230->var) {
        come_value_230->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_230));
    __result186__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_230,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result186__;
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
struct sNode* __dec_obj190;
struct sBorrowNode* __result187__;
struct sBorrowNode* __result188__;
    ((struct sNodeBase*)(__right_value353=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value353,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj190=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); };
    __result187__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result187__;
    __result188__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result188__;
}

char* sBorrowNode_kind(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
void* __right_value355 = (void*)0;
char* __result189__;
    __result189__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value355=__builtin_string("sBorrowNode")));
    /* U11 */__right_value355 = come_decrement_ref_count2(__right_value355, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result189__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
struct sNode* node_231;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_232;
struct sRightValueObject* right_value_objects_233;
int right_value_id_234;
_Bool __result190__;
    node_231=self->node;
    if(    !node_compile(node_231,info)) {
        return (_Bool)0;
    }
    come_value_232=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_232->type->mHeap=(_Bool)0;
    right_value_objects_233=come_value_232->right_value_objects;
    if(    right_value_objects_233) {
        right_value_id_234=right_value_objects_233->mID;
        if(        right_value_id_234!=-1) {
            remove_object_from_right_values(right_value_id_234,info);
        }
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_232));
    __result190__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_232,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result190__;
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value357 = (void*)0;
void* __right_value358 = (void*)0;
struct sNode* __dec_obj193;
struct sCloneNode* __result191__;
    ((struct sNodeBase*)(__right_value357=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value357,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj193=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); };
    __result191__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result191__;
}

char* sCloneNode_kind(struct sCloneNode* self){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
char* __result192__;
    __result192__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value359=__builtin_string("sCloneNode")));
    /* U11 */__right_value359 = come_decrement_ref_count2(__right_value359, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result192__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
struct sNode* node_235;
void* __right_value360 = (void*)0;
struct CVALUE* left_value_236;
void* __right_value361 = (void*)0;
struct sType* left_type_237;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value_238;
void* __right_value364 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var4 = (void*)0;
struct sType* result_type_239=0;
char* c_value_240=0;
char* __dec_obj198;
void* __right_value365 = (void*)0;
struct sType* __dec_obj199;
_Bool __result193__;
    node_235=self->node;
    if(    !node_compile(node_235,info)) {
        return (_Bool)0;
    }
    left_value_236=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_value_236->type->mClone=(_Bool)1;
    left_type_237=(struct sType*)come_increment_ref_count(sType_clone(left_value_236->type));
    if(    left_type_237->mPointerNum==1&&string_operator_equals(left_type_237->mClass->mName,"void")&&left_type_237->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_236));
    }
    else if(    left_type_237->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_236));
    }
    else if(    left_type_237->mPointerNum>0) {
        come_value_238=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 981, "CVALUE"))));
        multiple_assign_var4=((struct tuple2$2sTypephcharph*)(__right_value364=clone_object(left_type_237,left_value_236->c_value,info)));
        result_type_239=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        c_value_240=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        /*g*/come_call_finalizer3(__right_value364,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj198=come_value_238->c_value;
        come_value_238->c_value=(char*)come_increment_ref_count(c_value_240);
        /*G*/ __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj199=come_value_238->type;
        come_value_238->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_237));
        come_call_finalizer3(__dec_obj199,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_238->type->mHeap=(_Bool)1;
        come_value_238->type->mClone=(_Bool)1;
        come_value_238->var=((void*)0);
        append_object_to_right_values2(come_value_238,(struct sType*)come_increment_ref_count(left_type_237),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_238));
        /*i*/come_call_finalizer3(come_value_238,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_239,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */c_value_240 = come_decrement_ref_count2(c_value_240, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result193__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_236,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_237,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result193__;
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
struct sType* __dec_obj196;
char* __dec_obj197;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj196=self->v1;
            come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj197=self->v2;
            /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
struct sNode* __dec_obj200;
struct sDupeNode* __result194__;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value366,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj200=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0, (void*)0); };
    __result194__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result194__;
}

char* sDupeNode_kind(struct sDupeNode* self){
void* __result_obj__=(void*)0;
void* __right_value368 = (void*)0;
char* __result195__;
    __result195__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value368=__builtin_string("sDupeNode")));
    /* U11 */__right_value368 = come_decrement_ref_count2(__right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result195__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
struct sNode* node_241;
void* __right_value369 = (void*)0;
struct CVALUE* left_value_242;
void* __right_value370 = (void*)0;
struct sType* left_type_243;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
struct CVALUE* come_value_244;
void* __right_value373 = (void*)0;
struct tuple2$2sTypephcharph* multiple_assign_var5 = (void*)0;
struct sType* result_type_245=0;
char* c_value_246=0;
char* __dec_obj203;
void* __right_value374 = (void*)0;
struct sType* __dec_obj204;
_Bool __result196__;
    node_241=self->node;
    if(    !node_compile(node_241,info)) {
        return (_Bool)0;
    }
    left_value_242=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    left_type_243=(struct sType*)come_increment_ref_count(sType_clone(left_value_242->type));
    if(    left_type_243->mPointerNum==0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_242));
    }
    else if(    left_type_243->mPointerNum>0&&left_type_243->mHeap==(_Bool)0) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_242));
    }
    else if(    left_type_243->mPointerNum>0) {
        come_value_244=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1033, "CVALUE"))));
        multiple_assign_var5=((struct tuple2$2sTypephcharph*)(__right_value373=clone_object(left_type_243,left_value_242->c_value,info)));
        result_type_245=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
        c_value_246=(char*)come_increment_ref_count(multiple_assign_var5->v2);
        /*g*/come_call_finalizer3(__right_value373,tuple2$2sTypephcharphp_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj203=come_value_244->c_value;
        come_value_244->c_value=(char*)come_increment_ref_count(c_value_246);
        /*G*/ __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj204=come_value_244->type;
        come_value_244->type=(struct sType*)come_increment_ref_count(sType_clone(left_type_243));
        come_call_finalizer3(__dec_obj204,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_244->type->mHeap=(_Bool)1;
        come_value_244->var=((void*)0);
        append_object_to_right_values2(come_value_244,(struct sType*)come_increment_ref_count(left_type_243),info,(_Bool)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_244));
        /*i*/come_call_finalizer3(come_value_244,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_245,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */c_value_246 = come_decrement_ref_count2(c_value_246, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __result196__ = (_Bool)1;
    /*i*/come_call_finalizer3(left_value_242,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_243,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result196__;
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
struct sNode* __dec_obj205;
struct sDummyHeapNode* __result197__;
    ((struct sNodeBase*)(__right_value375=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value375,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj205=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); };
    __result197__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result197__;
}

char* sDummyHeapNode_kind(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
void* __right_value377 = (void*)0;
char* __result198__;
    __result198__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value377=__builtin_string("sDummyHeapNode")));
    /* U11 */__right_value377 = come_decrement_ref_count2(__right_value377, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
struct sNode* node_247;
void* __right_value378 = (void*)0;
struct CVALUE* come_value_248;
_Bool __result199__;
    node_247=self->node;
    if(    !node_compile(node_247,info)) {
        return (_Bool)0;
    }
    come_value_248=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_248->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_248));
    __result199__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_248,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result199__;
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
struct sNode* __dec_obj208;
struct sGCIncNode* __result200__;
    ((struct sNodeBase*)(__right_value379=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value379,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj208=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); };
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result200__;
}

char* sGCIncNode_kind(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result201__;
    __result201__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sGCIncNode")));
    /* U11 */__right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result201__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
struct sNode* node_249;
void* __right_value382 = (void*)0;
struct CVALUE* come_value_250;
struct sType* type_251;
void* __right_value383 = (void*)0;
char* type_name_252;
void* __right_value384 = (void*)0;
char* __dec_obj211;
_Bool __result202__;
    node_249=self->node;
    if(    !node_compile(node_249,info)) {
        return (_Bool)0;
    }
    come_value_250=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_251=come_value_250->type;
    if(    come_value_250->type->mHeap) {
        type_name_252=(char*)come_increment_ref_count(make_type_name_string(type_251,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0));
        __dec_obj211=come_value_250->c_value;
        come_value_250->c_value=(char*)come_increment_ref_count(increment_ref_count_object(come_value_250->type,come_value_250->c_value,info));
        /*G*/ __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U13 */type_name_252 = come_decrement_ref_count2(type_name_252, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_250));
    __result202__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_250,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result202__;
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value385 = (void*)0;
void* __right_value386 = (void*)0;
struct sNode* __dec_obj212;
struct sGCDecNode* __result203__;
    ((struct sNodeBase*)(__right_value385=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value385,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj212=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj212) { __dec_obj212 = come_decrement_ref_count2(__dec_obj212, ((struct sNode*)__dec_obj212)->finalize, ((struct sNode*)__dec_obj212)->_protocol_obj, 0,0,0, (void*)0); };
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result203__;
}

char* sGCDecNode_kind(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
char* __result204__;
    __result204__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value387=__builtin_string("sGCDecNode")));
    /* U11 */__right_value387 = come_decrement_ref_count2(__right_value387, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
struct sNode* node_253;
void* __right_value388 = (void*)0;
struct CVALUE* come_value_254;
struct sType* type_255;
_Bool __result205__;
    node_253=self->node;
    if(    !node_compile(node_253,info)) {
        return (_Bool)0;
    }
    come_value_254=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_255=come_value_254->type;
    decrement_ref_count_object(type_255,come_value_254->c_value,info,(_Bool)0,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_254));
    __result205__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_254,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result205__;
}

struct sGCDecNoFreeNode* sGCDecNoFreeNode_initialize(struct sGCDecNoFreeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value389 = (void*)0;
void* __right_value390 = (void*)0;
struct sNode* __dec_obj215;
struct sGCDecNoFreeNode* __result206__;
    ((struct sNodeBase*)(__right_value389=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value389,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj215=self->node;
    self->node=(struct sNode*)come_increment_ref_count(sNode_clone(node));
    /* U1 */ if(__dec_obj215) { __dec_obj215 = come_decrement_ref_count2(__dec_obj215, ((struct sNode*)__dec_obj215)->finalize, ((struct sNode*)__dec_obj215)->_protocol_obj, 0,0,0, (void*)0); };
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result206__;
}

char* sGCDecNoFreeNode_kind(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
void* __right_value391 = (void*)0;
char* __result207__;
    __result207__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value391=__builtin_string("sGCDecNoFreeNode")));
    /* U11 */__right_value391 = come_decrement_ref_count2(__right_value391, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result207__;
}

_Bool sGCDecNoFreeNode_compile(struct sGCDecNoFreeNode* self, struct sInfo* info){
struct sNode* node_256;
void* __right_value392 = (void*)0;
struct CVALUE* come_value_257;
struct sType* type_258;
_Bool __result208__;
    node_256=self->node;
    if(    !node_compile(node_256,info)) {
        return (_Bool)0;
    }
    come_value_257=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type_258=come_value_257->type;
    decrement_ref_count_object(type_258,come_value_257->c_value,info,(_Bool)0,(_Bool)1);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_257));
    __result208__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_257,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result208__;
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value393 = (void*)0;
void* __right_value394 = (void*)0;
struct sType* __dec_obj218;
struct sIsHeap* __result209__;
    ((struct sNodeBase*)(__right_value393=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value393,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj218,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

char* sIsHeap_kind(struct sIsHeap* self){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result210__;
    __result210__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string("sIsHeap")));
    /* U11 */__right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
struct sType* node_259;
void* __right_value396 = (void*)0;
void* __right_value397 = (void*)0;
struct CVALUE* come_value_260;
void* __right_value398 = (void*)0;
char* __dec_obj221;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
struct sType* __dec_obj222;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct CVALUE* come_value_261;
void* __right_value403 = (void*)0;
char* __dec_obj223;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sType* __dec_obj224;
    node_259=self->type;
    if(    self->type->mHeap) {
        come_value_260=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1210, "CVALUE"))));
        __dec_obj221=come_value_260->c_value;
        come_value_260->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        /*G*/ __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj222=come_value_260->type;
        come_value_260->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1213, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj222,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_260->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_260));
        add_come_last_code(info,"%s",come_value_260->c_value);
        /*i*/come_call_finalizer3(come_value_260,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_261=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1221, "CVALUE"))));
        __dec_obj223=come_value_261->c_value;
        come_value_261->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        /*G*/ __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj224=come_value_261->type;
        come_value_261->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1224, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj224,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_261->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_261));
        add_come_last_code(info,"%s",come_value_261->c_value);
        /*i*/come_call_finalizer3(come_value_261,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sIsPointer* sIsPointer_initialize(struct sIsPointer* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
struct sType* __dec_obj225;
struct sIsPointer* __result211__;
    ((struct sNodeBase*)(__right_value406=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value406,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj225=self->type;
    self->type=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj225,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result211__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result211__;
}

char* sIsPointer_kind(struct sIsPointer* self){
void* __result_obj__=(void*)0;
void* __right_value408 = (void*)0;
char* __result212__;
    __result212__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value408=__builtin_string("sIsPointer")));
    /* U11 */__right_value408 = come_decrement_ref_count2(__right_value408, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

_Bool sIsPointer_compile(struct sIsPointer* self, struct sInfo* info){
struct sType* node_262;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct CVALUE* come_value_263;
void* __right_value411 = (void*)0;
char* __dec_obj228;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sType* __dec_obj229;
void* __right_value414 = (void*)0;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_264;
void* __right_value416 = (void*)0;
char* __dec_obj230;
void* __right_value417 = (void*)0;
void* __right_value418 = (void*)0;
struct sType* __dec_obj231;
    node_262=self->type;
    if(    self->type->mPointerNum>0) {
        come_value_263=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1255, "CVALUE"))));
        __dec_obj228=come_value_263->c_value;
        come_value_263->c_value=(char*)come_increment_ref_count(xsprintf("1"));
        /*G*/ __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj229=come_value_263->type;
        come_value_263->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1258, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_263->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_263));
        add_come_last_code(info,"%s",come_value_263->c_value);
        /*i*/come_call_finalizer3(come_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_264=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1266, "CVALUE"))));
        __dec_obj230=come_value_264->c_value;
        come_value_264->c_value=(char*)come_increment_ref_count(xsprintf("0"));
        /*G*/ __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj231=come_value_264->type;
        come_value_264->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1269, "sType")),"int",(_Bool)0,info));
        come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_264->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_264));
        add_come_last_code(info,"%s",come_value_264->c_value);
        /*i*/come_call_finalizer3(come_value_264,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var6 = (void*)0;
struct sType* type_265=0;
char* name_266=0;
_Bool err_267=0;
void* __right_value420 = (void*)0;
struct sType* inf_type_268;
void* __right_value421 = (void*)0;
struct sNode* node_269;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct sNode* _inf_value3;
struct sImplementsNode* _inf_obj_value3;
void* __right_value428 = (void*)0;
struct sNode* __result215__;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sNode* _inf_value4;
struct sNewNode* _inf_obj_value4;
void* __right_value444 = (void*)0;
struct sNode* obj_271;
void* __right_value445 = (void*)0;
char* fun_name_279;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
struct sNode* __result224__;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
struct list$1tuple2$2charphsNodephph* initializer_280;
void* __right_value450 = (void*)0;
char* word_281;
_Bool no_comma_282;
void* __right_value451 = (void*)0;
struct sNode* exp_283;
void* __right_value452 = (void*)0;
_Bool _if_conditional1;
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct sNode* value_node_284;
void* __right_value455 = (void*)0;
struct sNode* __dec_obj259;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct sNode* exp_285;
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
struct sNode* __result226__;
struct sNode* __result227__;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* __right_value467 = (void*)0;
struct sNode* __result230__;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* __right_value474 = (void*)0;
struct sNode* __result233__;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* __right_value479 = (void*)0;
struct sNode* __result236__;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* __right_value484 = (void*)0;
struct sNode* __result239__;
void* __right_value485 = (void*)0;
struct sNode* node_290;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* __right_value491 = (void*)0;
struct sNode* __result242__;
void* __right_value492 = (void*)0;
struct sNode* node_292;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* _inf_value10;
struct sBorrowNode* _inf_obj_value10;
void* __right_value498 = (void*)0;
struct sNode* __result245__;
void* __right_value499 = (void*)0;
struct sNode* node_294;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* _inf_value11;
struct sDelegateNode* _inf_obj_value11;
void* __right_value505 = (void*)0;
struct sNode* __result248__;
void* __right_value506 = (void*)0;
struct sNode* node_296;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* _inf_value12;
struct sShareNode* _inf_obj_value12;
void* __right_value512 = (void*)0;
struct sNode* __result251__;
void* __right_value513 = (void*)0;
struct sNode* node_298;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value13;
struct sCloneNode* _inf_obj_value13;
void* __right_value519 = (void*)0;
struct sNode* __result254__;
void* __right_value520 = (void*)0;
struct sNode* node_300;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value14;
struct sDupeNode* _inf_obj_value14;
void* __right_value526 = (void*)0;
struct sNode* __result257__;
void* __right_value527 = (void*)0;
struct sNode* node_302;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sNode* _inf_value15;
struct sDummyHeapNode* _inf_obj_value15;
void* __right_value533 = (void*)0;
struct sNode* __result260__;
void* __right_value534 = (void*)0;
struct sNode* node_304;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* _inf_value16;
struct sGCIncNode* _inf_obj_value16;
void* __right_value540 = (void*)0;
struct sNode* __result263__;
void* __right_value541 = (void*)0;
struct sNode* node_306;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct sNode* _inf_value17;
struct sGCDecNode* _inf_obj_value17;
void* __right_value547 = (void*)0;
struct sNode* __result266__;
void* __right_value548 = (void*)0;
struct sNode* node_308;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sNode* _inf_value18;
struct sGCDecNoFreeNode* _inf_obj_value18;
void* __right_value554 = (void*)0;
struct sNode* __result269__;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var7 = (void*)0;
struct sType* param_type_310=0;
char* param_name_311=0;
_Bool err_312=0;
void* __right_value556 = (void*)0;
struct sType* type2_313;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* __right_value562 = (void*)0;
struct sNode* __result272__;
void* __right_value563 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var8 = (void*)0;
struct sType* param_type_315=0;
char* param_name_316=0;
_Bool err_317=0;
void* __right_value564 = (void*)0;
struct sType* type2_318;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* _inf_value20;
struct sIsPointer* _inf_obj_value20;
void* __right_value570 = (void*)0;
struct sNode* __result275__;
void* __right_value571 = (void*)0;
struct sNode* __result276__;
void* __right_value572 = (void*)0;
struct sNode* __result277__;
void* __right_value573 = (void*)0;
struct sNode* __result278__;
void* __right_value574 = (void*)0;
struct sNode* __result279__;
_Bool come_c_320;
void* __right_value575 = (void*)0;
struct sNode* node_321;
struct sNode* __result280__;
void* __right_value576 = (void*)0;
struct sNode* __result281__;
void* __right_value577 = (void*)0;
struct sNode* __result282__;
void* __right_value578 = (void*)0;
struct sNode* __result283__;
void* __right_value579 = (void*)0;
struct sNode* __result284__;
void* __right_value580 = (void*)0;
struct sNode* __result285__;
_Bool paren_322;
_Bool is_type_name_flag_323;
char* p_324;
int sline_325;
void* __right_value581 = (void*)0;
char* word_326;
void* __right_value582 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var9 = (void*)0;
struct sType* type_327=0;
char* name_328=0;
_Bool err_329=0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct sNode* _inf_value21;
struct sSizeOfNode* _inf_obj_value21;
void* __right_value588 = (void*)0;
struct sNode* __result288__;
struct sNode* exp_331;
_Bool no_comma_332;
void* __right_value589 = (void*)0;
struct sNode* __dec_obj330;
void* __right_value590 = (void*)0;
struct sNode* __dec_obj331;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
struct sNode* _inf_value22;
struct sSizeOfExpNode* _inf_obj_value22;
void* __right_value596 = (void*)0;
struct sNode* __result291__;
_Bool paren_334;
_Bool is_type_name_flag_335;
char* p_336;
int sline_337;
void* __right_value597 = (void*)0;
char* word_338;
void* __right_value598 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var10 = (void*)0;
struct sType* type_339=0;
char* name_340=0;
_Bool err_341=0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct sNode* _inf_value23;
struct sTypeOfNode* _inf_obj_value23;
void* __right_value604 = (void*)0;
struct sNode* __result294__;
struct sNode* exp_343;
_Bool no_comma_344;
void* __right_value605 = (void*)0;
struct sNode* __dec_obj340;
void* __right_value606 = (void*)0;
struct sNode* __dec_obj341;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
struct sNode* _inf_value24;
struct sTypeOfExpNode* _inf_obj_value24;
void* __right_value612 = (void*)0;
struct sNode* __result297__;
_Bool paren_346;
_Bool is_type_name_flag_347;
char* p_348;
int sline_349;
void* __right_value613 = (void*)0;
char* word_350;
void* __right_value614 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var11 = (void*)0;
struct sType* type_351=0;
char* name_352=0;
_Bool err_353=0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
struct sNode* _inf_value25;
struct sAlignOfNode* _inf_obj_value25;
void* __right_value620 = (void*)0;
struct sNode* __result300__;
struct sNode* exp_355;
_Bool no_comma_356;
void* __right_value621 = (void*)0;
struct sNode* __dec_obj350;
void* __right_value622 = (void*)0;
struct sNode* __dec_obj351;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sNode* _inf_value26;
struct sAlignOfExpNode* _inf_obj_value26;
void* __right_value628 = (void*)0;
struct sNode* __result303__;
_Bool paren_358;
_Bool is_type_name_flag_359;
char* p_360;
int sline_361;
void* __right_value629 = (void*)0;
char* word_362;
void* __right_value630 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var12 = (void*)0;
struct sType* type_363=0;
char* name_364=0;
_Bool err_365=0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
struct sNode* _inf_value27;
struct sAlignOfNode2* _inf_obj_value27;
void* __right_value636 = (void*)0;
struct sNode* __result306__;
struct sNode* exp_367;
_Bool no_comma_368;
void* __right_value637 = (void*)0;
struct sNode* __dec_obj360;
void* __right_value638 = (void*)0;
struct sNode* __dec_obj361;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
struct sNode* _inf_value28;
struct sAlignOfExpNode2* _inf_obj_value28;
void* __right_value644 = (void*)0;
struct sNode* __result309__;
_Bool is_type_name_flag_370;
char* p_371;
int sline_372;
void* __right_value645 = (void*)0;
char* word_373;
void* __right_value646 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var13 = (void*)0;
struct sType* type_374=0;
char* name_375=0;
_Bool err_376=0;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
struct sNode* _inf_value29;
struct sAlignAsNode* _inf_obj_value29;
void* __right_value652 = (void*)0;
struct sNode* __result312__;
void* __right_value653 = (void*)0;
struct sNode* exp_378;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct sNode* _inf_value30;
struct sAlignAsExpNode* _inf_obj_value30;
void* __right_value659 = (void*)0;
struct sNode* __result315__;
void* __right_value660 = (void*)0;
struct sNode* __result316__;
exp_331 = (void*)0;
exp_343 = (void*)0;
exp_355 = (void*)0;
exp_367 = (void*)0;
    if(    !gComeC&&(charp_operator_equals(buf,"new")||info->new_)) {
        if(        info->new_) {
            info->p=head;
            info->sline=head_sline;
        }
        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(__right_value419=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        type_265=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
        name_266=(char*)come_increment_ref_count(multiple_assign_var6->v2);
        err_267=multiple_assign_var6->v3;
        /*g*/come_call_finalizer3(__right_value419,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_267) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(        *info->p==40) {
            if(            type_265->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_268=(struct sType*)come_increment_ref_count(sType_clone(type_265));
                node_269=(struct sNode*)come_increment_ref_count(expression_v13(info));
                expected_next_character(41,info);
                _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1306, "struct sNode");
                _inf_obj_value3=come_increment_ref_count(((struct sImplementsNode*)(__right_value423=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1306, "sImplementsNode")),(struct sNode*)come_increment_ref_count(node_269),(struct sType*)come_increment_ref_count(inf_type_268),info))));
                _inf_value3->_protocol_obj=_inf_obj_value3;
                _inf_value3->finalize=(void*)sImplementsNode_finalize;
                _inf_value3->clone=(void*)sImplementsNode_clone;
                _inf_value3->compile=(void*)sImplementsNode_compile;
                _inf_value3->sline=(void*)sNodeBase_sline;
                _inf_value3->sname=(void*)sNodeBase_sname;
                _inf_value3->terminated=(void*)sNodeBase_terminated;
                _inf_value3->kind=(void*)sImplementsNode_kind;
                __result215__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value428=_inf_value3));
                /*i*/come_call_finalizer3(inf_type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value423,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value428) { __right_value428 = come_decrement_ref_count2(__right_value428, ((struct sNode*)__right_value428)->finalize, ((struct sNode*)__right_value428)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result215__;
                /*i*/come_call_finalizer3(inf_type_268,sType_finalize, 0, 0, 0, 0, (void*)0);
                if(node_269) { node_269 = come_decrement_ref_count2(node_269, ((struct sNode*)node_269)->finalize, ((struct sNode*)node_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1309, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sNewNode*)(__right_value430=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1309, "sNewNode")),(struct sType*)come_increment_ref_count(type_265),((void*)0),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sNewNode_finalize;
                _inf_value4->clone=(void*)sNewNode_clone;
                _inf_value4->compile=(void*)sNewNode_compile;
                _inf_value4->sline=(void*)sNodeBase_sline;
                _inf_value4->sname=(void*)sNodeBase_sname;
                _inf_value4->terminated=(void*)sNodeBase_terminated;
                _inf_value4->kind=(void*)sNewNode_kind;
                obj_271=(struct sNode*)come_increment_ref_count(_inf_value4);
                /*g*/come_call_finalizer3(__right_value430,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
                fun_name_279=(char*)come_increment_ref_count(__builtin_string("initialize"));
                __result224__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value447=parse_method_call_v20((struct sNode*)come_increment_ref_count(sNode_clone(obj_271)),(char*)come_increment_ref_count(fun_name_279),info)));
                if(obj_271) { obj_271 = come_decrement_ref_count2(obj_271, ((struct sNode*)obj_271)->finalize, ((struct sNode*)obj_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */fun_name_279 = come_decrement_ref_count2(fun_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(__right_value447) { __right_value447 = come_decrement_ref_count2(__right_value447, ((struct sNode*)__right_value447)->finalize, ((struct sNode*)__right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result224__;
                if(obj_271) { obj_271 = come_decrement_ref_count2(obj_271, ((struct sNode*)obj_271)->finalize, ((struct sNode*)obj_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */fun_name_279 = come_decrement_ref_count2(fun_name_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            initializer_280=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "21obj.c", 1319, "list$1tuple2$2charphsNodephph"))));
            while((_Bool)1) {
                word_281=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    no_comma_282=info->no_comma;
                    info->no_comma=(_Bool)1;
                    exp_283=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_282;
                    if(                    (_if_conditional1=(string_operator_equals(((char*)(__right_value452=exp_283->kind(exp_283->_protocol_obj))),"sWildCard"))),                    /* U10 */ (__right_value452 = come_decrement_ref_count2(__right_value452, (void*)0, (void*)0, 1, 0, 0, __result_obj__)),
                    _if_conditional1) {
                        value_node_284=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value453=xsprintf("Value"))),info));
                        /* U11 */__right_value453 = come_decrement_ref_count2(__right_value453, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        __dec_obj259=exp_283;
                        exp_283=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_284),(char*)come_increment_ref_count(word_281),info));
                        /* U1 */ if(__dec_obj259) { __dec_obj259 = come_decrement_ref_count2(__dec_obj259, ((struct sNode*)__dec_obj259)->finalize, ((struct sNode*)__dec_obj259)->_protocol_obj, 0,0,0, (void*)0); };
                        if(value_node_284) { value_node_284 = come_decrement_ref_count2(value_node_284, ((struct sNode*)value_node_284)->finalize, ((struct sNode*)value_node_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    list$1tuple2$2charphsNodephph_add(initializer_280,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1338, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(word_281),(struct sNode*)come_increment_ref_count(exp_283))));
                    if(exp_283) { exp_283 = come_decrement_ref_count2(exp_283, ((struct sNode*)exp_283)->finalize, ((struct sNode*)exp_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else if(                *info->p==44) {
                    exp_285=(struct sNode*)come_increment_ref_count(create_load_var(word_281,info));
                    list$1tuple2$2charphsNodephph_add(initializer_280,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "21obj.c", 1343, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(word_281),(struct sNode*)come_increment_ref_count(exp_285))));
                    if(exp_285) { exp_285 = come_decrement_ref_count2(exp_285, ((struct sNode*)exp_285)->finalize, ((struct sNode*)exp_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    err_msg(info,"invalid character(21) %c\n",*info->p);
                    __result226__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    /* U13 */word_281 = come_decrement_ref_count2(word_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(initializer_280,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result226__;
                }
                if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    /* U13 */word_281 = come_decrement_ref_count2(word_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    break;
                }
                else {
                    err_msg(info,"invalid character(30) %c",*info->p);
                    __result227__ = gComeFunResultObject = __result_obj__ = /*b*/(void*)(_Bool)0;
                    /* U13 */word_281 = come_decrement_ref_count2(word_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(initializer_280,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                    /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
                    /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    gComeFunResultObject = (void*)0;
                    return __result227__;
                }
                /* U13 */word_281 = come_decrement_ref_count2(word_281, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1364, "struct sNode");
            _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(__right_value462=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1364, "sNewNode")),(struct sType*)come_increment_ref_count(type_265),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(initializer_280),info))));
            _inf_value5->_protocol_obj=_inf_obj_value5;
            _inf_value5->finalize=(void*)sNewNode_finalize;
            _inf_value5->clone=(void*)sNewNode_clone;
            _inf_value5->compile=(void*)sNewNode_compile;
            _inf_value5->sline=(void*)sNodeBase_sline;
            _inf_value5->sname=(void*)sNodeBase_sname;
            _inf_value5->terminated=(void*)sNodeBase_terminated;
            _inf_value5->kind=(void*)sNewNode_kind;
            __result230__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value467=_inf_value5));
            /*i*/come_call_finalizer3(initializer_280,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value462,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value467) { __right_value467 = come_decrement_ref_count2(__right_value467, ((struct sNode*)__right_value467)->finalize, ((struct sNode*)__right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result230__;
            /*i*/come_call_finalizer3(initializer_280,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1367, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(__right_value469=sNewNode_initialize((struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1367, "sNewNode")),(struct sType*)come_increment_ref_count(type_265),((void*)0),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNodeBase_sline;
            _inf_value6->sname=(void*)sNodeBase_sname;
            _inf_value6->terminated=(void*)sNodeBase_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result233__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value474=_inf_value6));
            /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value469,sNewNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value474) { __right_value474 = come_decrement_ref_count2(__right_value474, ((struct sNode*)__right_value474)->finalize, ((struct sNode*)__right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result233__;
        }
        /*i*/come_call_finalizer3(type_265,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name_266 = come_decrement_ref_count2(name_266, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"true")) {
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1371, "struct sNode");
        _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(__right_value476=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1371, "sTrueNode")),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sTrueNode_finalize;
        _inf_value7->clone=(void*)sTrueNode_clone;
        _inf_value7->compile=(void*)sTrueNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sTrueNode_kind;
        __result236__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value479=_inf_value7));
        /*g*/come_call_finalizer3(__right_value476,sTrueNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value479) { __right_value479 = come_decrement_ref_count2(__right_value479, ((struct sNode*)__right_value479)->finalize, ((struct sNode*)__right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    else if(    charp_operator_equals(buf,"false")) {
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1374, "struct sNode");
        _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(__right_value481=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1374, "sFalseNode")),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sFalseNode_finalize;
        _inf_value8->clone=(void*)sFalseNode_clone;
        _inf_value8->compile=(void*)sFalseNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sFalseNode_kind;
        __result239__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value484=_inf_value8));
        /*g*/come_call_finalizer3(__right_value481,sFalseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value484) { __right_value484 = come_decrement_ref_count2(__right_value484, ((struct sNode*)__right_value484)->finalize, ((struct sNode*)__right_value484)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result239__;
    }
    else if(    charp_operator_equals(buf,"delete")) {
        node_290=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1379, "struct sNode");
        _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(__right_value487=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1379, "sDeleteNode")),(struct sNode*)come_increment_ref_count(node_290),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sDeleteNode_finalize;
        _inf_value9->clone=(void*)sDeleteNode_clone;
        _inf_value9->compile=(void*)sDeleteNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sDeleteNode_kind;
        __result242__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value491=_inf_value9));
        if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value487,sDeleteNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value491) { __right_value491 = come_decrement_ref_count2(__right_value491, ((struct sNode*)__right_value491)->finalize, ((struct sNode*)__right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result242__;
        if(node_290) { node_290 = come_decrement_ref_count2(node_290, ((struct sNode*)node_290)->finalize, ((struct sNode*)node_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"borrow")) {
        node_292=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1384, "struct sNode");
        _inf_obj_value10=come_increment_ref_count(((struct sBorrowNode*)(__right_value494=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1384, "sBorrowNode")),(struct sNode*)come_increment_ref_count(node_292),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sBorrowNode_finalize;
        _inf_value10->clone=(void*)sBorrowNode_clone;
        _inf_value10->compile=(void*)sBorrowNode_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sBorrowNode_kind;
        __result245__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value498=_inf_value10));
        if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value494,sBorrowNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value498) { __right_value498 = come_decrement_ref_count2(__right_value498, ((struct sNode*)__right_value498)->finalize, ((struct sNode*)__right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result245__;
        if(node_292) { node_292 = come_decrement_ref_count2(node_292, ((struct sNode*)node_292)->finalize, ((struct sNode*)node_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"delegate")) {
        node_294=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1389, "struct sNode");
        _inf_obj_value11=come_increment_ref_count(((struct sDelegateNode*)(__right_value501=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1389, "sDelegateNode")),(struct sNode*)come_increment_ref_count(node_294),info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDelegateNode_finalize;
        _inf_value11->clone=(void*)sDelegateNode_clone;
        _inf_value11->compile=(void*)sDelegateNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDelegateNode_kind;
        __result248__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value505=_inf_value11));
        if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value501,sDelegateNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value505) { __right_value505 = come_decrement_ref_count2(__right_value505, ((struct sNode*)__right_value505)->finalize, ((struct sNode*)__right_value505)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result248__;
        if(node_294) { node_294 = come_decrement_ref_count2(node_294, ((struct sNode*)node_294)->finalize, ((struct sNode*)node_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"share")) {
        node_296=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1394, "struct sNode");
        _inf_obj_value12=come_increment_ref_count(((struct sShareNode*)(__right_value508=sShareNode_initialize((struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1394, "sShareNode")),(struct sNode*)come_increment_ref_count(node_296),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sShareNode_finalize;
        _inf_value12->clone=(void*)sShareNode_clone;
        _inf_value12->compile=(void*)sShareNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sShareNode_kind;
        __result251__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value512=_inf_value12));
        if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value508,sShareNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value512) { __right_value512 = come_decrement_ref_count2(__right_value512, ((struct sNode*)__right_value512)->finalize, ((struct sNode*)__right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result251__;
        if(node_296) { node_296 = come_decrement_ref_count2(node_296, ((struct sNode*)node_296)->finalize, ((struct sNode*)node_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"clone")) {
        node_298=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1399, "struct sNode");
        _inf_obj_value13=come_increment_ref_count(((struct sCloneNode*)(__right_value515=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1399, "sCloneNode")),(struct sNode*)come_increment_ref_count(node_298),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sCloneNode_finalize;
        _inf_value13->clone=(void*)sCloneNode_clone;
        _inf_value13->compile=(void*)sCloneNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sCloneNode_kind;
        __result254__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value519=_inf_value13));
        if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value515,sCloneNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value519) { __right_value519 = come_decrement_ref_count2(__right_value519, ((struct sNode*)__right_value519)->finalize, ((struct sNode*)__right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result254__;
        if(node_298) { node_298 = come_decrement_ref_count2(node_298, ((struct sNode*)node_298)->finalize, ((struct sNode*)node_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"dupe")) {
        node_300=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1404, "struct sNode");
        _inf_obj_value14=come_increment_ref_count(((struct sDupeNode*)(__right_value522=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1404, "sDupeNode")),(struct sNode*)come_increment_ref_count(node_300),info))));
        _inf_value14->_protocol_obj=_inf_obj_value14;
        _inf_value14->finalize=(void*)sDupeNode_finalize;
        _inf_value14->clone=(void*)sDupeNode_clone;
        _inf_value14->compile=(void*)sDupeNode_compile;
        _inf_value14->sline=(void*)sNodeBase_sline;
        _inf_value14->sname=(void*)sNodeBase_sname;
        _inf_value14->terminated=(void*)sNodeBase_terminated;
        _inf_value14->kind=(void*)sDupeNode_kind;
        __result257__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value526=_inf_value14));
        if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value522,sDupeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value526) { __right_value526 = come_decrement_ref_count2(__right_value526, ((struct sNode*)__right_value526)->finalize, ((struct sNode*)__right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result257__;
        if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"dummy_heap")) {
        node_302=(struct sNode*)come_increment_ref_count(expression_v13(info));
        _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1409, "struct sNode");
        _inf_obj_value15=come_increment_ref_count(((struct sDummyHeapNode*)(__right_value529=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1409, "sDummyHeapNode")),(struct sNode*)come_increment_ref_count(node_302),info))));
        _inf_value15->_protocol_obj=_inf_obj_value15;
        _inf_value15->finalize=(void*)sDummyHeapNode_finalize;
        _inf_value15->clone=(void*)sDummyHeapNode_clone;
        _inf_value15->compile=(void*)sDummyHeapNode_compile;
        _inf_value15->sline=(void*)sNodeBase_sline;
        _inf_value15->sname=(void*)sNodeBase_sname;
        _inf_value15->terminated=(void*)sNodeBase_terminated;
        _inf_value15->kind=(void*)sDummyHeapNode_kind;
        __result260__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value533=_inf_value15));
        if(node_302) { node_302 = come_decrement_ref_count2(node_302, ((struct sNode*)node_302)->finalize, ((struct sNode*)node_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value529,sDummyHeapNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value533) { __right_value533 = come_decrement_ref_count2(__right_value533, ((struct sNode*)__right_value533)->finalize, ((struct sNode*)__right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result260__;
        if(node_302) { node_302 = come_decrement_ref_count2(node_302, ((struct sNode*)node_302)->finalize, ((struct sNode*)node_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"gc_inc")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_304=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1419, "struct sNode");
        _inf_obj_value16=come_increment_ref_count(((struct sGCIncNode*)(__right_value536=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1419, "sGCIncNode")),(struct sNode*)come_increment_ref_count(node_304),info))));
        _inf_value16->_protocol_obj=_inf_obj_value16;
        _inf_value16->finalize=(void*)sGCIncNode_finalize;
        _inf_value16->clone=(void*)sGCIncNode_clone;
        _inf_value16->compile=(void*)sGCIncNode_compile;
        _inf_value16->sline=(void*)sNodeBase_sline;
        _inf_value16->sname=(void*)sNodeBase_sname;
        _inf_value16->terminated=(void*)sNodeBase_terminated;
        _inf_value16->kind=(void*)sGCIncNode_kind;
        __result263__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value540=_inf_value16));
        if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value536,sGCIncNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value540) { __right_value540 = come_decrement_ref_count2(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result263__;
        if(node_304) { node_304 = come_decrement_ref_count2(node_304, ((struct sNode*)node_304)->finalize, ((struct sNode*)node_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"gc_dec")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_306=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1429, "struct sNode");
        _inf_obj_value17=come_increment_ref_count(((struct sGCDecNode*)(__right_value543=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1429, "sGCDecNode")),(struct sNode*)come_increment_ref_count(node_306),info))));
        _inf_value17->_protocol_obj=_inf_obj_value17;
        _inf_value17->finalize=(void*)sGCDecNode_finalize;
        _inf_value17->clone=(void*)sGCDecNode_clone;
        _inf_value17->compile=(void*)sGCDecNode_compile;
        _inf_value17->sline=(void*)sNodeBase_sline;
        _inf_value17->sname=(void*)sNodeBase_sname;
        _inf_value17->terminated=(void*)sNodeBase_terminated;
        _inf_value17->kind=(void*)sGCDecNode_kind;
        __result266__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value547=_inf_value17));
        if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value543,sGCDecNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value547) { __right_value547 = come_decrement_ref_count2(__right_value547, ((struct sNode*)__right_value547)->finalize, ((struct sNode*)__right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result266__;
        if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"gc_dec_nofree")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        node_308=(struct sNode*)come_increment_ref_count(expression_v13(info));
        expected_next_character(41,info);
        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1439, "struct sNode");
        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNoFreeNode*)(__right_value550=sGCDecNoFreeNode_initialize((struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "21obj.c", 1439, "sGCDecNoFreeNode")),(struct sNode*)come_increment_ref_count(node_308),info))));
        _inf_value18->_protocol_obj=_inf_obj_value18;
        _inf_value18->finalize=(void*)sGCDecNoFreeNode_finalize;
        _inf_value18->clone=(void*)sGCDecNoFreeNode_clone;
        _inf_value18->compile=(void*)sGCDecNoFreeNode_compile;
        _inf_value18->sline=(void*)sNodeBase_sline;
        _inf_value18->sname=(void*)sNodeBase_sname;
        _inf_value18->terminated=(void*)sNodeBase_terminated;
        _inf_value18->kind=(void*)sGCDecNoFreeNode_kind;
        __result269__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value554=_inf_value18));
        if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value550,sGCDecNoFreeNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value554) { __right_value554 = come_decrement_ref_count2(__right_value554, ((struct sNode*)__right_value554)->finalize, ((struct sNode*)__right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result269__;
        if(node_308) { node_308 = come_decrement_ref_count2(node_308, ((struct sNode*)node_308)->finalize, ((struct sNode*)node_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    charp_operator_equals(buf,"isheap")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_310=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
        param_name_311=(char*)come_increment_ref_count(multiple_assign_var7->v2);
        err_312=multiple_assign_var7->v3;
        /*g*/come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_312) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_313=(struct sType*)come_increment_ref_count(solve_generics(param_type_310,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1455, "struct sNode");
        _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(__right_value558=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1455, "sIsHeap")),(struct sType*)come_increment_ref_count(type2_313),info))));
        _inf_value19->_protocol_obj=_inf_obj_value19;
        _inf_value19->finalize=(void*)sIsHeap_finalize;
        _inf_value19->clone=(void*)sIsHeap_clone;
        _inf_value19->compile=(void*)sIsHeap_compile;
        _inf_value19->sline=(void*)sNodeBase_sline;
        _inf_value19->sname=(void*)sNodeBase_sname;
        _inf_value19->terminated=(void*)sNodeBase_terminated;
        _inf_value19->kind=(void*)sIsHeap_kind;
        __result272__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value562=_inf_value19));
        /*i*/come_call_finalizer3(param_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */param_name_311 = come_decrement_ref_count2(param_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_313,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value558,sIsHeap_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value562) { __right_value562 = come_decrement_ref_count2(__right_value562, ((struct sNode*)__right_value562)->finalize, ((struct sNode*)__right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result272__;
        /*i*/come_call_finalizer3(param_type_310,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */param_name_311 = come_decrement_ref_count2(param_name_311, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_313,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"ispointer")&&*info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(__right_value563=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        param_type_315=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
        param_name_316=(char*)come_increment_ref_count(multiple_assign_var8->v2);
        err_317=multiple_assign_var8->v3;
        /*g*/come_call_finalizer3(__right_value563,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_317) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        type2_318=(struct sType*)come_increment_ref_count(solve_generics(param_type_315,info->generics_type,info));
        expected_next_character(41,info);
        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1471, "struct sNode");
        _inf_obj_value20=come_increment_ref_count(((struct sIsPointer*)(__right_value566=sIsPointer_initialize((struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "21obj.c", 1471, "sIsPointer")),(struct sType*)come_increment_ref_count(type2_318),info))));
        _inf_value20->_protocol_obj=_inf_obj_value20;
        _inf_value20->finalize=(void*)sIsPointer_finalize;
        _inf_value20->clone=(void*)sIsPointer_clone;
        _inf_value20->compile=(void*)sIsPointer_compile;
        _inf_value20->sline=(void*)sNodeBase_sline;
        _inf_value20->sname=(void*)sNodeBase_sname;
        _inf_value20->terminated=(void*)sNodeBase_terminated;
        _inf_value20->kind=(void*)sIsPointer_kind;
        __result275__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value570=_inf_value20));
        /*i*/come_call_finalizer3(param_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */param_name_316 = come_decrement_ref_count2(param_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_318,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value566,sIsPointer_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value570) { __right_value570 = come_decrement_ref_count2(__right_value570, ((struct sNode*)__right_value570)->finalize, ((struct sNode*)__right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result275__;
        /*i*/come_call_finalizer3(param_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */param_name_316 = come_decrement_ref_count2(param_name_316, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type2_318,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
            __result276__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value571=create_nothing_node(info)));
            if(__right_value571) { __right_value571 = come_decrement_ref_count2(__right_value571, ((struct sNode*)__right_value571)->finalize, ((struct sNode*)__right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result276__;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result277__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value572=create_nothing_node(info)));
            if(__right_value572) { __right_value572 = come_decrement_ref_count2(__right_value572, ((struct sNode*)__right_value572)->finalize, ((struct sNode*)__right_value572)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result277__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result278__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value573=create_nothing_node(info)));
            if(__right_value573) { __right_value573 = come_decrement_ref_count2(__right_value573, ((struct sNode*)__right_value573)->finalize, ((struct sNode*)__right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result278__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result279__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value574=create_nothing_node(info)));
            if(__right_value574) { __right_value574 = come_decrement_ref_count2(__right_value574, ((struct sNode*)__right_value574)->finalize, ((struct sNode*)__right_value574)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result279__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            come_c_320=gComeC;
            gComeC=(_Bool)1;
            if(            *info->p==123) {
                node_321=(struct sNode*)come_increment_ref_count(parse_normal_block((_Bool)1,(_Bool)0,info));
                gComeC=come_c_320;
                __result280__ = gComeFunResultObject = __result_obj__ = node_321;
                if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 1, 0, (void*)0); } 
                gComeFunResultObject = (void*)0;
                return __result280__;
                if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                __result281__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value576=create_nothing_node(info)));
                if(__right_value576) { __right_value576 = come_decrement_ref_count2(__right_value576, ((struct sNode*)__right_value576)->finalize, ((struct sNode*)__right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result281__;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
            __result282__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value577=create_nothing_node(info)));
            if(__right_value577) { __right_value577 = come_decrement_ref_count2(__right_value577, ((struct sNode*)__right_value577)->finalize, ((struct sNode*)__right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result282__;
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
            __result283__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value578=create_nothing_node(info)));
            if(__right_value578) { __right_value578 = come_decrement_ref_count2(__right_value578, ((struct sNode*)__right_value578)->finalize, ((struct sNode*)__right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result283__;
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
            __result284__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value579=create_nothing_node(info)));
            if(__right_value579) { __right_value579 = come_decrement_ref_count2(__right_value579, ((struct sNode*)__right_value579)->finalize, ((struct sNode*)__right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result284__;
        }
        else if(        parsecmp("no-null-check",info)) {
            info->p+=strlen("no-null-check");
            skip_spaces_and_lf(info);
            __result285__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value580=create_nothing_node(info)));
            if(__right_value580) { __right_value580 = come_decrement_ref_count2(__right_value580, ((struct sNode*)__right_value580)->finalize, ((struct sNode*)__right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result285__;
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
    }
    else if(    charp_operator_equals(buf,"sizeof")) {
        paren_322=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_322=(_Bool)1;
        }
        is_type_name_flag_323=(_Bool)0;
        {
            p_324=info->p;
            sline_325=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_326=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_326,info)) {
                    is_type_name_flag_323=(_Bool)1;
                }
                /* U13 */word_326 = come_decrement_ref_count2(word_326, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_324;
            info->sline=sline_325;
        }
        if(        is_type_name_flag_323) {
            multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(__right_value582=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_327=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
            name_328=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            err_329=multiple_assign_var9->v3;
            /*g*/come_call_finalizer3(__right_value582,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_329) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_322&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1595, "struct sNode");
            _inf_obj_value21=come_increment_ref_count(((struct sSizeOfNode*)(__right_value584=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1595, "sSizeOfNode")),(struct sType*)come_increment_ref_count(type_327),info))));
            _inf_value21->_protocol_obj=_inf_obj_value21;
            _inf_value21->finalize=(void*)sSizeOfNode_finalize;
            _inf_value21->clone=(void*)sSizeOfNode_clone;
            _inf_value21->compile=(void*)sSizeOfNode_compile;
            _inf_value21->sline=(void*)sNodeBase_sline;
            _inf_value21->sname=(void*)sNodeBase_sname;
            _inf_value21->terminated=(void*)sNodeBase_terminated;
            _inf_value21->kind=(void*)sSizeOfNode_kind;
            __result288__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value588=_inf_value21));
            /*i*/come_call_finalizer3(type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value584,sSizeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value588) { __right_value588 = come_decrement_ref_count2(__right_value588, ((struct sNode*)__right_value588)->finalize, ((struct sNode*)__right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result288__;
            /*i*/come_call_finalizer3(type_327,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_328 = come_decrement_ref_count2(name_328, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_322) {
                no_comma_332=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj330=exp_331;
                exp_331=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                /* U1 */ if(__dec_obj330) { __dec_obj330 = come_decrement_ref_count2(__dec_obj330, ((struct sNode*)__dec_obj330)->finalize, ((struct sNode*)__dec_obj330)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_332;
            }
            else {
                __dec_obj331=exp_331;
                exp_331=(struct sNode*)come_increment_ref_count(expression_v13(info));
                /* U1 */ if(__dec_obj331) { __dec_obj331 = come_decrement_ref_count2(__dec_obj331, ((struct sNode*)__dec_obj331)->finalize, ((struct sNode*)__dec_obj331)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_322&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1616, "struct sNode");
            _inf_obj_value22=come_increment_ref_count(((struct sSizeOfExpNode*)(__right_value592=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1616, "sSizeOfExpNode")),(struct sNode*)come_increment_ref_count(exp_331),info))));
            _inf_value22->_protocol_obj=_inf_obj_value22;
            _inf_value22->finalize=(void*)sSizeOfExpNode_finalize;
            _inf_value22->clone=(void*)sSizeOfExpNode_clone;
            _inf_value22->compile=(void*)sSizeOfExpNode_compile;
            _inf_value22->sline=(void*)sNodeBase_sline;
            _inf_value22->sname=(void*)sNodeBase_sname;
            _inf_value22->terminated=(void*)sNodeBase_terminated;
            _inf_value22->kind=(void*)sSizeOfExpNode_kind;
            __result291__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value596=_inf_value22));
            if(exp_331) { exp_331 = come_decrement_ref_count2(exp_331, ((struct sNode*)exp_331)->finalize, ((struct sNode*)exp_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value592,sSizeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value596) { __right_value596 = come_decrement_ref_count2(__right_value596, ((struct sNode*)__right_value596)->finalize, ((struct sNode*)__right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result291__;
            if(exp_331) { exp_331 = come_decrement_ref_count2(exp_331, ((struct sNode*)exp_331)->finalize, ((struct sNode*)exp_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"typeof")) {
        paren_334=(_Bool)0;
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_334=(_Bool)1;
        }
        is_type_name_flag_335=(_Bool)0;
        {
            p_336=info->p;
            sline_337=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_338=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_338,info)) {
                    is_type_name_flag_335=(_Bool)1;
                }
                /* U13 */word_338 = come_decrement_ref_count2(word_338, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_336;
            info->sline=sline_337;
        }
        if(        is_type_name_flag_335) {
            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(__right_value598=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_339=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
            name_340=(char*)come_increment_ref_count(multiple_assign_var10->v2);
            err_341=multiple_assign_var10->v3;
            /*g*/come_call_finalizer3(__right_value598,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_341) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_334&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1661, "struct sNode");
            _inf_obj_value23=come_increment_ref_count(((struct sTypeOfNode*)(__right_value600=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1661, "sTypeOfNode")),(struct sType*)come_increment_ref_count(type_339),info))));
            _inf_value23->_protocol_obj=_inf_obj_value23;
            _inf_value23->finalize=(void*)sTypeOfNode_finalize;
            _inf_value23->clone=(void*)sTypeOfNode_clone;
            _inf_value23->compile=(void*)sTypeOfNode_compile;
            _inf_value23->sline=(void*)sNodeBase_sline;
            _inf_value23->sname=(void*)sNodeBase_sname;
            _inf_value23->terminated=(void*)sNodeBase_terminated;
            _inf_value23->kind=(void*)sTypeOfNode_kind;
            __result294__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value604=_inf_value23));
            /*i*/come_call_finalizer3(type_339,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_340 = come_decrement_ref_count2(name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value600,sTypeOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value604) { __right_value604 = come_decrement_ref_count2(__right_value604, ((struct sNode*)__right_value604)->finalize, ((struct sNode*)__right_value604)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result294__;
            /*i*/come_call_finalizer3(type_339,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_340 = come_decrement_ref_count2(name_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_334) {
                no_comma_344=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj340=exp_343;
                exp_343=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                /* U1 */ if(__dec_obj340) { __dec_obj340 = come_decrement_ref_count2(__dec_obj340, ((struct sNode*)__dec_obj340)->finalize, ((struct sNode*)__dec_obj340)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_344;
            }
            else {
                __dec_obj341=exp_343;
                exp_343=(struct sNode*)come_increment_ref_count(expression_v13(info));
                /* U1 */ if(__dec_obj341) { __dec_obj341 = come_decrement_ref_count2(__dec_obj341, ((struct sNode*)__dec_obj341)->finalize, ((struct sNode*)__dec_obj341)->_protocol_obj, 0,0,0, (void*)0); };
            }
            if(            paren_334&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1682, "struct sNode");
            _inf_obj_value24=come_increment_ref_count(((struct sTypeOfExpNode*)(__right_value608=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1682, "sTypeOfExpNode")),(struct sNode*)come_increment_ref_count(exp_343),info))));
            _inf_value24->_protocol_obj=_inf_obj_value24;
            _inf_value24->finalize=(void*)sTypeOfExpNode_finalize;
            _inf_value24->clone=(void*)sTypeOfExpNode_clone;
            _inf_value24->compile=(void*)sTypeOfExpNode_compile;
            _inf_value24->sline=(void*)sNodeBase_sline;
            _inf_value24->sname=(void*)sNodeBase_sname;
            _inf_value24->terminated=(void*)sNodeBase_terminated;
            _inf_value24->kind=(void*)sTypeOfExpNode_kind;
            __result297__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value612=_inf_value24));
            if(exp_343) { exp_343 = come_decrement_ref_count2(exp_343, ((struct sNode*)exp_343)->finalize, ((struct sNode*)exp_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value608,sTypeOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value612) { __right_value612 = come_decrement_ref_count2(__right_value612, ((struct sNode*)__right_value612)->finalize, ((struct sNode*)__right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result297__;
            if(exp_343) { exp_343 = come_decrement_ref_count2(exp_343, ((struct sNode*)exp_343)->finalize, ((struct sNode*)exp_343)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignof")) {
        paren_346=(_Bool)0;
        if(        *info->p==40) {
            paren_346=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_347=(_Bool)0;
        {
            p_348=info->p;
            sline_349=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_350=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_350,info)) {
                    is_type_name_flag_347=(_Bool)1;
                }
                /* U13 */word_350 = come_decrement_ref_count2(word_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_348;
            info->sline=sline_349;
        }
        if(        is_type_name_flag_347) {
            multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(__right_value614=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_351=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
            name_352=(char*)come_increment_ref_count(multiple_assign_var11->v2);
            err_353=multiple_assign_var11->v3;
            /*g*/come_call_finalizer3(__right_value614,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_353) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            if(            paren_346&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1735, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sAlignOfNode*)(__right_value616=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1735, "sAlignOfNode")),(struct sType*)come_increment_ref_count(type_351),info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sAlignOfNode_finalize;
            _inf_value25->clone=(void*)sAlignOfNode_clone;
            _inf_value25->compile=(void*)sAlignOfNode_compile;
            _inf_value25->sline=(void*)sNodeBase_sline;
            _inf_value25->sname=(void*)sNodeBase_sname;
            _inf_value25->terminated=(void*)sNodeBase_terminated;
            _inf_value25->kind=(void*)sAlignOfNode_kind;
            __result300__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value620=_inf_value25));
            /*i*/come_call_finalizer3(type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_352 = come_decrement_ref_count2(name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value616,sAlignOfNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value620) { __right_value620 = come_decrement_ref_count2(__right_value620, ((struct sNode*)__right_value620)->finalize, ((struct sNode*)__right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result300__;
            /*i*/come_call_finalizer3(type_351,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_352 = come_decrement_ref_count2(name_352, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_346) {
                no_comma_356=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj350=exp_355;
                exp_355=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                /* U1 */ if(__dec_obj350) { __dec_obj350 = come_decrement_ref_count2(__dec_obj350, ((struct sNode*)__dec_obj350)->finalize, ((struct sNode*)__dec_obj350)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_356;
            }
            else {
                __dec_obj351=exp_355;
                exp_355=(struct sNode*)come_increment_ref_count(expression_v13(info));
                /* U1 */ if(__dec_obj351) { __dec_obj351 = come_decrement_ref_count2(__dec_obj351, ((struct sNode*)__dec_obj351)->finalize, ((struct sNode*)__dec_obj351)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1749, "struct sNode");
            _inf_obj_value26=come_increment_ref_count(((struct sAlignOfExpNode*)(__right_value624=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1749, "sAlignOfExpNode")),(struct sNode*)come_increment_ref_count(exp_355),info))));
            _inf_value26->_protocol_obj=_inf_obj_value26;
            _inf_value26->finalize=(void*)sAlignOfExpNode_finalize;
            _inf_value26->clone=(void*)sAlignOfExpNode_clone;
            _inf_value26->compile=(void*)sAlignOfExpNode_compile;
            _inf_value26->sline=(void*)sNodeBase_sline;
            _inf_value26->sname=(void*)sNodeBase_sname;
            _inf_value26->terminated=(void*)sNodeBase_terminated;
            _inf_value26->kind=(void*)sAlignOfExpNode_kind;
            __result303__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value628=_inf_value26));
            if(exp_355) { exp_355 = come_decrement_ref_count2(exp_355, ((struct sNode*)exp_355)->finalize, ((struct sNode*)exp_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value624,sAlignOfExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value628) { __right_value628 = come_decrement_ref_count2(__right_value628, ((struct sNode*)__right_value628)->finalize, ((struct sNode*)__right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result303__;
            if(exp_355) { exp_355 = come_decrement_ref_count2(exp_355, ((struct sNode*)exp_355)->finalize, ((struct sNode*)exp_355)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"__alignof__")) {
        paren_358=(_Bool)0;
        if(        *info->p==40) {
            paren_358=(_Bool)1;
            info->p++;
            skip_spaces_and_lf(info);
        }
        is_type_name_flag_359=(_Bool)0;
        {
            p_360=info->p;
            sline_361=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_362=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_362,info)) {
                    is_type_name_flag_359=(_Bool)1;
                }
                /* U13 */word_362 = come_decrement_ref_count2(word_362, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_360;
            info->sline=sline_361;
        }
        if(        is_type_name_flag_359) {
            multiple_assign_var12=((struct tuple3$3sTypephcharphbool*)(__right_value630=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_363=(struct sType*)come_increment_ref_count(multiple_assign_var12->v1);
            name_364=(char*)come_increment_ref_count(multiple_assign_var12->v2);
            err_365=multiple_assign_var12->v3;
            /*g*/come_call_finalizer3(__right_value630,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_365) {
                err_msg(info,"parse type");
                exit(2);
            }
            if(            paren_358&&*info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1790, "struct sNode");
            _inf_obj_value27=come_increment_ref_count(((struct sAlignOfNode2*)(__right_value632=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1790, "sAlignOfNode2")),(struct sType*)come_increment_ref_count(type_363),info))));
            _inf_value27->_protocol_obj=_inf_obj_value27;
            _inf_value27->finalize=(void*)sAlignOfNode2_finalize;
            _inf_value27->clone=(void*)sAlignOfNode2_clone;
            _inf_value27->compile=(void*)sAlignOfNode2_compile;
            _inf_value27->sline=(void*)sNodeBase_sline;
            _inf_value27->sname=(void*)sNodeBase_sname;
            _inf_value27->terminated=(void*)sNodeBase_terminated;
            _inf_value27->kind=(void*)sAlignOfNode2_kind;
            __result306__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value636=_inf_value27));
            /*i*/come_call_finalizer3(type_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_364 = come_decrement_ref_count2(name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value632,sAlignOfNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value636) { __right_value636 = come_decrement_ref_count2(__right_value636, ((struct sNode*)__right_value636)->finalize, ((struct sNode*)__right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result306__;
            /*i*/come_call_finalizer3(type_363,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_364 = come_decrement_ref_count2(name_364, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            if(            !paren_358) {
                no_comma_368=info->no_comma;
                info->no_comma=(_Bool)1;
                __dec_obj360=exp_367;
                exp_367=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
                /* U1 */ if(__dec_obj360) { __dec_obj360 = come_decrement_ref_count2(__dec_obj360, ((struct sNode*)__dec_obj360)->finalize, ((struct sNode*)__dec_obj360)->_protocol_obj, 0,0,0, (void*)0); };
                info->no_comma=no_comma_368;
            }
            else {
                __dec_obj361=exp_367;
                exp_367=(struct sNode*)come_increment_ref_count(expression_v13(info));
                /* U1 */ if(__dec_obj361) { __dec_obj361 = come_decrement_ref_count2(__dec_obj361, ((struct sNode*)__dec_obj361)->finalize, ((struct sNode*)__dec_obj361)->_protocol_obj, 0,0,0, (void*)0); };
            }
            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1804, "struct sNode");
            _inf_obj_value28=come_increment_ref_count(((struct sAlignOfExpNode2*)(__right_value640=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1804, "sAlignOfExpNode2")),(struct sNode*)come_increment_ref_count(exp_367),info))));
            _inf_value28->_protocol_obj=_inf_obj_value28;
            _inf_value28->finalize=(void*)sAlignOfExpNode2_finalize;
            _inf_value28->clone=(void*)sAlignOfExpNode2_clone;
            _inf_value28->compile=(void*)sAlignOfExpNode2_compile;
            _inf_value28->sline=(void*)sNodeBase_sline;
            _inf_value28->sname=(void*)sNodeBase_sname;
            _inf_value28->terminated=(void*)sNodeBase_terminated;
            _inf_value28->kind=(void*)sAlignOfExpNode2_kind;
            __result309__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value644=_inf_value28));
            if(exp_367) { exp_367 = come_decrement_ref_count2(exp_367, ((struct sNode*)exp_367)->finalize, ((struct sNode*)exp_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value640,sAlignOfExpNode2_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value644) { __right_value644 = come_decrement_ref_count2(__right_value644, ((struct sNode*)__right_value644)->finalize, ((struct sNode*)__right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result309__;
            if(exp_367) { exp_367 = come_decrement_ref_count2(exp_367, ((struct sNode*)exp_367)->finalize, ((struct sNode*)exp_367)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else if(    charp_operator_equals(buf,"_Alignas")) {
        expected_next_character(40,info);
        is_type_name_flag_370=(_Bool)0;
        {
            p_371=info->p;
            sline_372=info->sline;
            if(            xisalpha(*info->p)||*info->p==95) {
                word_373=(char*)come_increment_ref_count(parse_word(info));
                if(                is_type_name(word_373,info)) {
                    is_type_name_flag_370=(_Bool)1;
                }
                /* U13 */word_373 = come_decrement_ref_count2(word_373, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            info->p=p_371;
            info->sline=sline_372;
        }
        if(        is_type_name_flag_370) {
            multiple_assign_var13=((struct tuple3$3sTypephcharphbool*)(__right_value646=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_374=(struct sType*)come_increment_ref_count(multiple_assign_var13->v1);
            name_375=(char*)come_increment_ref_count(multiple_assign_var13->v2);
            err_376=multiple_assign_var13->v3;
            /*g*/come_call_finalizer3(__right_value646,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_376) {
                err_msg(info,"parse type");
                exit(2);
            }
            expected_next_character(41,info);
            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1837, "struct sNode");
            _inf_obj_value29=come_increment_ref_count(((struct sAlignAsNode*)(__right_value648=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1837, "sAlignAsNode")),(struct sType*)come_increment_ref_count(type_374),info))));
            _inf_value29->_protocol_obj=_inf_obj_value29;
            _inf_value29->finalize=(void*)sAlignAsNode_finalize;
            _inf_value29->clone=(void*)sAlignAsNode_clone;
            _inf_value29->compile=(void*)sAlignAsNode_compile;
            _inf_value29->sline=(void*)sNodeBase_sline;
            _inf_value29->sname=(void*)sNodeBase_sname;
            _inf_value29->terminated=(void*)sNodeBase_terminated;
            _inf_value29->kind=(void*)sAlignAsNode_kind;
            __result312__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value652=_inf_value29));
            /*i*/come_call_finalizer3(type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_375 = come_decrement_ref_count2(name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value648,sAlignAsNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value652) { __right_value652 = come_decrement_ref_count2(__right_value652, ((struct sNode*)__right_value652)->finalize, ((struct sNode*)__right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result312__;
            /*i*/come_call_finalizer3(type_374,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */name_375 = come_decrement_ref_count2(name_375, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            exp_378=(struct sNode*)come_increment_ref_count(expression_v13(info));
            expected_next_character(41,info);
            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1844, "struct sNode");
            _inf_obj_value30=come_increment_ref_count(((struct sAlignAsExpNode*)(__right_value655=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1844, "sAlignAsExpNode")),(struct sNode*)come_increment_ref_count(exp_378),info))));
            _inf_value30->_protocol_obj=_inf_obj_value30;
            _inf_value30->finalize=(void*)sAlignAsExpNode_finalize;
            _inf_value30->clone=(void*)sAlignAsExpNode_clone;
            _inf_value30->compile=(void*)sAlignAsExpNode_compile;
            _inf_value30->sline=(void*)sNodeBase_sline;
            _inf_value30->sname=(void*)sNodeBase_sname;
            _inf_value30->terminated=(void*)sNodeBase_terminated;
            _inf_value30->kind=(void*)sAlignAsExpNode_kind;
            __result315__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value659=_inf_value30));
            if(exp_378) { exp_378 = come_decrement_ref_count2(exp_378, ((struct sNode*)exp_378)->finalize, ((struct sNode*)exp_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*g*/come_call_finalizer3(__right_value655,sAlignAsExpNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value659) { __right_value659 = come_decrement_ref_count2(__right_value659, ((struct sNode*)__right_value659)->finalize, ((struct sNode*)__right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result315__;
            if(exp_378) { exp_378 = come_decrement_ref_count2(exp_378, ((struct sNode*)exp_378)->finalize, ((struct sNode*)exp_378)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    __result316__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value660=string_node_v20(buf,head,head_sline,info)));
    if(__right_value660) { __right_value660 = come_decrement_ref_count2(__right_value660, ((struct sNode*)__right_value660)->finalize, ((struct sNode*)__right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result316__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj232;
char* __dec_obj233;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj232=self->v1;
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj233=self->v2;
            /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result217__;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_273;
struct list_item$1tuple2$2charphsNodephph* it_274;
void* __right_value442 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result222__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_273=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 135, "list$1tuple2$2charphsNodephph"))));
    it_274=self->head;
    while(it_274!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_273,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_274->item)));
        it_274=it_274->next;
    }
    __result222__ = gComeFunResultObject = __result_obj__ = result_273;
    /*i*/come_call_finalizer3(result_273,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result218__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value436 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_275;
struct tuple2$2charphsNodeph* __dec_obj245;
void* __right_value437 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_276;
struct tuple2$2charphsNodeph* __dec_obj248;
void* __right_value438 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_277;
struct tuple2$2charphsNodeph* __dec_obj251;
struct list$1tuple2$2charphsNodephph* __result219__;
    if(    self->len==0) {
        litem_275=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value436=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 149, "list_item$1tuple2$2charphsNodephph"))));
        litem_275->prev=((void*)0);
        litem_275->next=((void*)0);
        __dec_obj245=litem_275->item;
        litem_275->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj245,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_275;
        self->head=litem_275;
    }
    else if(    self->len==1) {
        litem_276=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value437=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 159, "list_item$1tuple2$2charphsNodephph"))));
        litem_276->prev=self->head;
        litem_276->next=((void*)0);
        __dec_obj248=litem_276->item;
        litem_276->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj248,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_276;
        self->head->next=litem_276;
    }
    else {
        litem_277=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value438=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 169, "list_item$1tuple2$2charphsNodephph"))));
        litem_277->prev=self->tail;
        litem_277->next=((void*)0);
        __dec_obj251=litem_277->item;
        litem_277->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj251,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_277;
        self->tail=litem_277;
    }
    self->len++;
    __result219__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj252;
struct sNode* __dec_obj253;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj252=self->v1;
            /*G*/ __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj253=self->v2;
            /* U1 */ if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result220__;
void* __right_value439 = (void*)0;
struct tuple2$2charphsNodeph* result_278;
void* __right_value440 = (void*)0;
char* __dec_obj254;
void* __right_value441 = (void*)0;
struct sNode* __dec_obj255;
struct tuple2$2charphsNodeph* __result221__;
    if(    self==(void*)0) {
        __result220__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result220__;
    }
    result_278=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj254=result_278->v1;
        result_278->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj255=result_278->v2;
        result_278->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result221__ = gComeFunResultObject = __result_obj__ = result_278;
    /*i*/come_call_finalizer3(result_278,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result221__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj256;
struct sNode* __dec_obj257;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj256=self->v1;
            /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj257=self->v2;
            /* U1 */ if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj260;
struct sNode* __dec_obj261;
struct tuple2$2charphsNodeph* __result225__;
    __dec_obj260=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj260 = come_decrement_ref_count2(__dec_obj260, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj261=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); };
    __result225__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static void sNewNode_finalize(struct sNewNode* self){
char* __dec_obj268;
struct sType* __dec_obj269;
struct list$1tuple2$2charphsNodephph* __dec_obj270;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj268=self->sname;
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj269=self->type;
            come_call_finalizer3(__dec_obj269,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        if(        self->initializer==gComeFunResultObject) {
            __dec_obj270=self->initializer;
            come_call_finalizer3(__dec_obj270,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->initializer,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__=(void*)0;
struct sNewNode* __result231__;
void* __right_value470 = (void*)0;
struct sNewNode* result_287;
void* __right_value471 = (void*)0;
char* __dec_obj271;
void* __right_value472 = (void*)0;
struct sType* __dec_obj272;
void* __right_value473 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj273;
struct sNewNode* __result232__;
    if(    self==(void*)0) {
        __result231__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result231__;
    }
    result_287=(struct sNewNode*)come_increment_ref_count((struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "sNewNode"));
    if(    self!=((void*)0)) {
        result_287->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_287->sname;
        result_287->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj272=result_287->type;
        result_287->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj272,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->initializer!=((void*)0)) {
        __dec_obj273=result_287->initializer;
        result_287->initializer=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->initializer));
        come_call_finalizer3(__dec_obj273,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result232__ = gComeFunResultObject = __result_obj__ = result_287;
    /*i*/come_call_finalizer3(result_287,sNewNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

static void sTrueNode_finalize(struct sTrueNode* self){
char* __dec_obj274;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj274=self->sname;
            /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__=(void*)0;
struct sTrueNode* __result234__;
void* __right_value477 = (void*)0;
struct sTrueNode* result_288;
void* __right_value478 = (void*)0;
char* __dec_obj275;
struct sTrueNode* __result235__;
    if(    self==(void*)0) {
        __result234__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    result_288=(struct sTrueNode*)come_increment_ref_count((struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "sTrueNode"));
    if(    self!=((void*)0)) {
        result_288->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj275=result_288->sname;
        result_288->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result235__ = gComeFunResultObject = __result_obj__ = result_288;
    /*i*/come_call_finalizer3(result_288,sTrueNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static void sFalseNode_finalize(struct sFalseNode* self){
char* __dec_obj276;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj276=self->sname;
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__=(void*)0;
struct sFalseNode* __result237__;
void* __right_value482 = (void*)0;
struct sFalseNode* result_289;
void* __right_value483 = (void*)0;
char* __dec_obj277;
struct sFalseNode* __result238__;
    if(    self==(void*)0) {
        __result237__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    result_289=(struct sFalseNode*)come_increment_ref_count((struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "sFalseNode"));
    if(    self!=((void*)0)) {
        result_289->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj277=result_289->sname;
        result_289->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result238__ = gComeFunResultObject = __result_obj__ = result_289;
    /*i*/come_call_finalizer3(result_289,sFalseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
char* __dec_obj278;
struct sNode* __dec_obj279;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj278=self->sname;
            /*G*/ __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj279=self->node;
            /* U1 */ if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__=(void*)0;
struct sDeleteNode* __result240__;
void* __right_value488 = (void*)0;
struct sDeleteNode* result_291;
void* __right_value489 = (void*)0;
char* __dec_obj280;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj281;
struct sDeleteNode* __result241__;
    if(    self==(void*)0) {
        __result240__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result240__;
    }
    result_291=(struct sDeleteNode*)come_increment_ref_count((struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "sDeleteNode"));
    if(    self!=((void*)0)) {
        result_291->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj280=result_291->sname;
        result_291->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj281=result_291->node;
        result_291->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result241__ = gComeFunResultObject = __result_obj__ = result_291;
    /*i*/come_call_finalizer3(result_291,sDeleteNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
char* __dec_obj282;
struct sNode* __dec_obj283;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj282=self->sname;
            /*G*/ __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj283=self->node;
            /* U1 */ if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__=(void*)0;
struct sBorrowNode* __result243__;
void* __right_value495 = (void*)0;
struct sBorrowNode* result_293;
void* __right_value496 = (void*)0;
char* __dec_obj284;
void* __right_value497 = (void*)0;
struct sNode* __dec_obj285;
struct sBorrowNode* __result244__;
    if(    self==(void*)0) {
        __result243__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result243__;
    }
    result_293=(struct sBorrowNode*)come_increment_ref_count((struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "sBorrowNode"));
    if(    self!=((void*)0)) {
        result_293->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj284=result_293->sname;
        result_293->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj285=result_293->node;
        result_293->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count2(__dec_obj285, ((struct sNode*)__dec_obj285)->finalize, ((struct sNode*)__dec_obj285)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result244__ = gComeFunResultObject = __result_obj__ = result_293;
    /*i*/come_call_finalizer3(result_293,sBorrowNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
char* __dec_obj286;
struct sNode* __dec_obj287;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj286=self->sname;
            /*G*/ __dec_obj286 = come_decrement_ref_count2(__dec_obj286, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj287=self->node;
            /* U1 */ if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__=(void*)0;
struct sDelegateNode* __result246__;
void* __right_value502 = (void*)0;
struct sDelegateNode* result_295;
void* __right_value503 = (void*)0;
char* __dec_obj288;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj289;
struct sDelegateNode* __result247__;
    if(    self==(void*)0) {
        __result246__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result246__;
    }
    result_295=(struct sDelegateNode*)come_increment_ref_count((struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "sDelegateNode"));
    if(    self!=((void*)0)) {
        result_295->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj288=result_295->sname;
        result_295->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj289=result_295->node;
        result_295->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result247__ = gComeFunResultObject = __result_obj__ = result_295;
    /*i*/come_call_finalizer3(result_295,sDelegateNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result247__;
}

static void sShareNode_finalize(struct sShareNode* self){
char* __dec_obj290;
struct sNode* __dec_obj291;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj290=self->sname;
            /*G*/ __dec_obj290 = come_decrement_ref_count2(__dec_obj290, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj291=self->node;
            /* U1 */ if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__=(void*)0;
struct sShareNode* __result249__;
void* __right_value509 = (void*)0;
struct sShareNode* result_297;
void* __right_value510 = (void*)0;
char* __dec_obj292;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj293;
struct sShareNode* __result250__;
    if(    self==(void*)0) {
        __result249__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result249__;
    }
    result_297=(struct sShareNode*)come_increment_ref_count((struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "sShareNode"));
    if(    self!=((void*)0)) {
        result_297->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj292=result_297->sname;
        result_297->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj293=result_297->node;
        result_297->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result250__ = gComeFunResultObject = __result_obj__ = result_297;
    /*i*/come_call_finalizer3(result_297,sShareNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

static void sCloneNode_finalize(struct sCloneNode* self){
char* __dec_obj294;
struct sNode* __dec_obj295;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj294=self->sname;
            /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj295=self->node;
            /* U1 */ if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__=(void*)0;
struct sCloneNode* __result252__;
void* __right_value516 = (void*)0;
struct sCloneNode* result_299;
void* __right_value517 = (void*)0;
char* __dec_obj296;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj297;
struct sCloneNode* __result253__;
    if(    self==(void*)0) {
        __result252__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result252__;
    }
    result_299=(struct sCloneNode*)come_increment_ref_count((struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "sCloneNode"));
    if(    self!=((void*)0)) {
        result_299->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_299->sname;
        result_299->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj297=result_299->node;
        result_299->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result253__ = gComeFunResultObject = __result_obj__ = result_299;
    /*i*/come_call_finalizer3(result_299,sCloneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result253__;
}

static void sDupeNode_finalize(struct sDupeNode* self){
char* __dec_obj298;
struct sNode* __dec_obj299;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj298=self->sname;
            /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj299=self->node;
            /* U1 */ if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__=(void*)0;
struct sDupeNode* __result255__;
void* __right_value523 = (void*)0;
struct sDupeNode* result_301;
void* __right_value524 = (void*)0;
char* __dec_obj300;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj301;
struct sDupeNode* __result256__;
    if(    self==(void*)0) {
        __result255__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result255__;
    }
    result_301=(struct sDupeNode*)come_increment_ref_count((struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "sDupeNode"));
    if(    self!=((void*)0)) {
        result_301->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj300=result_301->sname;
        result_301->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj301=result_301->node;
        result_301->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj301) { __dec_obj301 = come_decrement_ref_count2(__dec_obj301, ((struct sNode*)__dec_obj301)->finalize, ((struct sNode*)__dec_obj301)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result256__ = gComeFunResultObject = __result_obj__ = result_301;
    /*i*/come_call_finalizer3(result_301,sDupeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result256__;
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
char* __dec_obj302;
struct sNode* __dec_obj303;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj302=self->sname;
            /*G*/ __dec_obj302 = come_decrement_ref_count2(__dec_obj302, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj303=self->node;
            /* U1 */ if(__dec_obj303) { __dec_obj303 = come_decrement_ref_count2(__dec_obj303, ((struct sNode*)__dec_obj303)->finalize, ((struct sNode*)__dec_obj303)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__=(void*)0;
struct sDummyHeapNode* __result258__;
void* __right_value530 = (void*)0;
struct sDummyHeapNode* result_303;
void* __right_value531 = (void*)0;
char* __dec_obj304;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj305;
struct sDummyHeapNode* __result259__;
    if(    self==(void*)0) {
        __result258__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result258__;
    }
    result_303=(struct sDummyHeapNode*)come_increment_ref_count((struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "sDummyHeapNode"));
    if(    self!=((void*)0)) {
        result_303->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj304=result_303->sname;
        result_303->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj304 = come_decrement_ref_count2(__dec_obj304, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj305=result_303->node;
        result_303->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj305) { __dec_obj305 = come_decrement_ref_count2(__dec_obj305, ((struct sNode*)__dec_obj305)->finalize, ((struct sNode*)__dec_obj305)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result259__ = gComeFunResultObject = __result_obj__ = result_303;
    /*i*/come_call_finalizer3(result_303,sDummyHeapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result259__;
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
char* __dec_obj306;
struct sNode* __dec_obj307;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj306=self->sname;
            /*G*/ __dec_obj306 = come_decrement_ref_count2(__dec_obj306, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj307=self->node;
            /* U1 */ if(__dec_obj307) { __dec_obj307 = come_decrement_ref_count2(__dec_obj307, ((struct sNode*)__dec_obj307)->finalize, ((struct sNode*)__dec_obj307)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__=(void*)0;
struct sGCIncNode* __result261__;
void* __right_value537 = (void*)0;
struct sGCIncNode* result_305;
void* __right_value538 = (void*)0;
char* __dec_obj308;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj309;
struct sGCIncNode* __result262__;
    if(    self==(void*)0) {
        __result261__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result261__;
    }
    result_305=(struct sGCIncNode*)come_increment_ref_count((struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "sGCIncNode"));
    if(    self!=((void*)0)) {
        result_305->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj308=result_305->sname;
        result_305->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj308 = come_decrement_ref_count2(__dec_obj308, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj309=result_305->node;
        result_305->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj309) { __dec_obj309 = come_decrement_ref_count2(__dec_obj309, ((struct sNode*)__dec_obj309)->finalize, ((struct sNode*)__dec_obj309)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result262__ = gComeFunResultObject = __result_obj__ = result_305;
    /*i*/come_call_finalizer3(result_305,sGCIncNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result262__;
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
char* __dec_obj310;
struct sNode* __dec_obj311;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj310=self->sname;
            /*G*/ __dec_obj310 = come_decrement_ref_count2(__dec_obj310, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj311=self->node;
            /* U1 */ if(__dec_obj311) { __dec_obj311 = come_decrement_ref_count2(__dec_obj311, ((struct sNode*)__dec_obj311)->finalize, ((struct sNode*)__dec_obj311)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNode* __result264__;
void* __right_value544 = (void*)0;
struct sGCDecNode* result_307;
void* __right_value545 = (void*)0;
char* __dec_obj312;
void* __right_value546 = (void*)0;
struct sNode* __dec_obj313;
struct sGCDecNode* __result265__;
    if(    self==(void*)0) {
        __result264__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_307=(struct sGCDecNode*)come_increment_ref_count((struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "sGCDecNode"));
    if(    self!=((void*)0)) {
        result_307->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj312=result_307->sname;
        result_307->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj313=result_307->node;
        result_307->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result265__ = gComeFunResultObject = __result_obj__ = result_307;
    /*i*/come_call_finalizer3(result_307,sGCDecNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void sGCDecNoFreeNode_finalize(struct sGCDecNoFreeNode* self){
char* __dec_obj314;
struct sNode* __dec_obj315;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj314=self->sname;
            /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        if(        self->node==gComeFunResultObject) {
            __dec_obj315=self->node;
            /* U1 */ if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sGCDecNoFreeNode* sGCDecNoFreeNode_clone(struct sGCDecNoFreeNode* self){
void* __result_obj__=(void*)0;
struct sGCDecNoFreeNode* __result267__;
void* __right_value551 = (void*)0;
struct sGCDecNoFreeNode* result_309;
void* __right_value552 = (void*)0;
char* __dec_obj316;
void* __right_value553 = (void*)0;
struct sNode* __dec_obj317;
struct sGCDecNoFreeNode* __result268__;
    if(    self==(void*)0) {
        __result267__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    result_309=(struct sGCDecNoFreeNode*)come_increment_ref_count((struct sGCDecNoFreeNode*)come_calloc(1, sizeof(struct sGCDecNoFreeNode)*(1), "sGCDecNoFreeNode_clone", 3, "sGCDecNoFreeNode"));
    if(    self!=((void*)0)) {
        result_309->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj316=result_309->sname;
        result_309->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj316 = come_decrement_ref_count2(__dec_obj316, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->node!=((void*)0)) {
        __dec_obj317=result_309->node;
        result_309->node=(struct sNode*)come_increment_ref_count(sNode_clone(self->node));
        /* U1 */ if(__dec_obj317) { __dec_obj317 = come_decrement_ref_count2(__dec_obj317, ((struct sNode*)__dec_obj317)->finalize, ((struct sNode*)__dec_obj317)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result268__ = gComeFunResultObject = __result_obj__ = result_309;
    /*i*/come_call_finalizer3(result_309,sGCDecNoFreeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void sIsHeap_finalize(struct sIsHeap* self){
char* __dec_obj318;
struct sType* __dec_obj319;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj318=self->sname;
            /*G*/ __dec_obj318 = come_decrement_ref_count2(__dec_obj318, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj319=self->type;
            come_call_finalizer3(__dec_obj319,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__=(void*)0;
struct sIsHeap* __result270__;
void* __right_value559 = (void*)0;
struct sIsHeap* result_314;
void* __right_value560 = (void*)0;
char* __dec_obj320;
void* __right_value561 = (void*)0;
struct sType* __dec_obj321;
struct sIsHeap* __result271__;
    if(    self==(void*)0) {
        __result270__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    result_314=(struct sIsHeap*)come_increment_ref_count((struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "sIsHeap"));
    if(    self!=((void*)0)) {
        result_314->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj320=result_314->sname;
        result_314->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj320 = come_decrement_ref_count2(__dec_obj320, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj321=result_314->type;
        result_314->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj321,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result271__ = gComeFunResultObject = __result_obj__ = result_314;
    /*i*/come_call_finalizer3(result_314,sIsHeap_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

static void sIsPointer_finalize(struct sIsPointer* self){
char* __dec_obj322;
struct sType* __dec_obj323;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj322=self->sname;
            /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj323=self->type;
            come_call_finalizer3(__dec_obj323,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sIsPointer* sIsPointer_clone(struct sIsPointer* self){
void* __result_obj__=(void*)0;
struct sIsPointer* __result273__;
void* __right_value567 = (void*)0;
struct sIsPointer* result_319;
void* __right_value568 = (void*)0;
char* __dec_obj324;
void* __right_value569 = (void*)0;
struct sType* __dec_obj325;
struct sIsPointer* __result274__;
    if(    self==(void*)0) {
        __result273__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result273__;
    }
    result_319=(struct sIsPointer*)come_increment_ref_count((struct sIsPointer*)come_calloc(1, sizeof(struct sIsPointer)*(1), "sIsPointer_clone", 3, "sIsPointer"));
    if(    self!=((void*)0)) {
        result_319->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_319->sname;
        result_319->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj325=result_319->type;
        result_319->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj325,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result274__ = gComeFunResultObject = __result_obj__ = result_319;
    /*i*/come_call_finalizer3(result_319,sIsPointer_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
char* __dec_obj326;
struct sType* __dec_obj327;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj326=self->sname;
            /*G*/ __dec_obj326 = come_decrement_ref_count2(__dec_obj326, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj327=self->type;
            come_call_finalizer3(__dec_obj327,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfNode* __result286__;
void* __right_value585 = (void*)0;
struct sSizeOfNode* result_330;
void* __right_value586 = (void*)0;
char* __dec_obj328;
void* __right_value587 = (void*)0;
struct sType* __dec_obj329;
struct sSizeOfNode* __result287__;
    if(    self==(void*)0) {
        __result286__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    result_330=(struct sSizeOfNode*)come_increment_ref_count((struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "sSizeOfNode"));
    if(    self!=((void*)0)) {
        result_330->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj328=result_330->sname;
        result_330->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj328 = come_decrement_ref_count2(__dec_obj328, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj329=result_330->type;
        result_330->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj329,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = result_330;
    /*i*/come_call_finalizer3(result_330,sSizeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
char* __dec_obj332;
struct sNode* __dec_obj333;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj332=self->sname;
            /*G*/ __dec_obj332 = come_decrement_ref_count2(__dec_obj332, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj333=self->exp;
            /* U1 */ if(__dec_obj333) { __dec_obj333 = come_decrement_ref_count2(__dec_obj333, ((struct sNode*)__dec_obj333)->finalize, ((struct sNode*)__dec_obj333)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sSizeOfExpNode* __result289__;
void* __right_value593 = (void*)0;
struct sSizeOfExpNode* result_333;
void* __right_value594 = (void*)0;
char* __dec_obj334;
void* __right_value595 = (void*)0;
struct sNode* __dec_obj335;
struct sSizeOfExpNode* __result290__;
    if(    self==(void*)0) {
        __result289__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    result_333=(struct sSizeOfExpNode*)come_increment_ref_count((struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "sSizeOfExpNode"));
    if(    self!=((void*)0)) {
        result_333->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj334=result_333->sname;
        result_333->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj334 = come_decrement_ref_count2(__dec_obj334, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj335=result_333->exp;
        result_333->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        /* U1 */ if(__dec_obj335) { __dec_obj335 = come_decrement_ref_count2(__dec_obj335, ((struct sNode*)__dec_obj335)->finalize, ((struct sNode*)__dec_obj335)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result290__ = gComeFunResultObject = __result_obj__ = result_333;
    /*i*/come_call_finalizer3(result_333,sSizeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
char* __dec_obj336;
struct sType* __dec_obj337;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj336=self->sname;
            /*G*/ __dec_obj336 = come_decrement_ref_count2(__dec_obj336, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj337=self->type;
            come_call_finalizer3(__dec_obj337,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfNode* __result292__;
void* __right_value601 = (void*)0;
struct sTypeOfNode* result_342;
void* __right_value602 = (void*)0;
char* __dec_obj338;
void* __right_value603 = (void*)0;
struct sType* __dec_obj339;
struct sTypeOfNode* __result293__;
    if(    self==(void*)0) {
        __result292__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result292__;
    }
    result_342=(struct sTypeOfNode*)come_increment_ref_count((struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "sTypeOfNode"));
    if(    self!=((void*)0)) {
        result_342->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj338=result_342->sname;
        result_342->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj338 = come_decrement_ref_count2(__dec_obj338, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj339=result_342->type;
        result_342->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj339,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result293__ = gComeFunResultObject = __result_obj__ = result_342;
    /*i*/come_call_finalizer3(result_342,sTypeOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
char* __dec_obj342;
struct sNode* __dec_obj343;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj342=self->sname;
            /*G*/ __dec_obj342 = come_decrement_ref_count2(__dec_obj342, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj343=self->exp;
            /* U1 */ if(__dec_obj343) { __dec_obj343 = come_decrement_ref_count2(__dec_obj343, ((struct sNode*)__dec_obj343)->finalize, ((struct sNode*)__dec_obj343)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__=(void*)0;
struct sTypeOfExpNode* __result295__;
void* __right_value609 = (void*)0;
struct sTypeOfExpNode* result_345;
void* __right_value610 = (void*)0;
char* __dec_obj344;
void* __right_value611 = (void*)0;
struct sNode* __dec_obj345;
struct sTypeOfExpNode* __result296__;
    if(    self==(void*)0) {
        __result295__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result295__;
    }
    result_345=(struct sTypeOfExpNode*)come_increment_ref_count((struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "sTypeOfExpNode"));
    if(    self!=((void*)0)) {
        result_345->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj344=result_345->sname;
        result_345->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj344 = come_decrement_ref_count2(__dec_obj344, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj345=result_345->exp;
        result_345->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        /* U1 */ if(__dec_obj345) { __dec_obj345 = come_decrement_ref_count2(__dec_obj345, ((struct sNode*)__dec_obj345)->finalize, ((struct sNode*)__dec_obj345)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result296__ = gComeFunResultObject = __result_obj__ = result_345;
    /*i*/come_call_finalizer3(result_345,sTypeOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
char* __dec_obj346;
struct sType* __dec_obj347;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj346=self->sname;
            /*G*/ __dec_obj346 = come_decrement_ref_count2(__dec_obj346, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj347=self->type;
            come_call_finalizer3(__dec_obj347,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode* __result298__;
void* __right_value617 = (void*)0;
struct sAlignOfNode* result_354;
void* __right_value618 = (void*)0;
char* __dec_obj348;
void* __right_value619 = (void*)0;
struct sType* __dec_obj349;
struct sAlignOfNode* __result299__;
    if(    self==(void*)0) {
        __result298__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result298__;
    }
    result_354=(struct sAlignOfNode*)come_increment_ref_count((struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "sAlignOfNode"));
    if(    self!=((void*)0)) {
        result_354->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj348=result_354->sname;
        result_354->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj348 = come_decrement_ref_count2(__dec_obj348, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj349=result_354->type;
        result_354->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj349,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result299__ = gComeFunResultObject = __result_obj__ = result_354;
    /*i*/come_call_finalizer3(result_354,sAlignOfNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
char* __dec_obj352;
struct sNode* __dec_obj353;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj352=self->sname;
            /*G*/ __dec_obj352 = come_decrement_ref_count2(__dec_obj352, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj353=self->exp;
            /* U1 */ if(__dec_obj353) { __dec_obj353 = come_decrement_ref_count2(__dec_obj353, ((struct sNode*)__dec_obj353)->finalize, ((struct sNode*)__dec_obj353)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode* __result301__;
void* __right_value625 = (void*)0;
struct sAlignOfExpNode* result_357;
void* __right_value626 = (void*)0;
char* __dec_obj354;
void* __right_value627 = (void*)0;
struct sNode* __dec_obj355;
struct sAlignOfExpNode* __result302__;
    if(    self==(void*)0) {
        __result301__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result301__;
    }
    result_357=(struct sAlignOfExpNode*)come_increment_ref_count((struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "sAlignOfExpNode"));
    if(    self!=((void*)0)) {
        result_357->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj354=result_357->sname;
        result_357->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj354 = come_decrement_ref_count2(__dec_obj354, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj355=result_357->exp;
        result_357->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        /* U1 */ if(__dec_obj355) { __dec_obj355 = come_decrement_ref_count2(__dec_obj355, ((struct sNode*)__dec_obj355)->finalize, ((struct sNode*)__dec_obj355)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result302__ = gComeFunResultObject = __result_obj__ = result_357;
    /*i*/come_call_finalizer3(result_357,sAlignOfExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
char* __dec_obj356;
struct sType* __dec_obj357;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj356=self->sname;
            /*G*/ __dec_obj356 = come_decrement_ref_count2(__dec_obj356, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj357=self->type;
            come_call_finalizer3(__dec_obj357,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfNode2* __result304__;
void* __right_value633 = (void*)0;
struct sAlignOfNode2* result_366;
void* __right_value634 = (void*)0;
char* __dec_obj358;
void* __right_value635 = (void*)0;
struct sType* __dec_obj359;
struct sAlignOfNode2* __result305__;
    if(    self==(void*)0) {
        __result304__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result304__;
    }
    result_366=(struct sAlignOfNode2*)come_increment_ref_count((struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "sAlignOfNode2"));
    if(    self!=((void*)0)) {
        result_366->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj358=result_366->sname;
        result_366->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj358 = come_decrement_ref_count2(__dec_obj358, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj359=result_366->type;
        result_366->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj359,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result305__ = gComeFunResultObject = __result_obj__ = result_366;
    /*i*/come_call_finalizer3(result_366,sAlignOfNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result305__;
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
char* __dec_obj362;
struct sNode* __dec_obj363;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj362=self->sname;
            /*G*/ __dec_obj362 = come_decrement_ref_count2(__dec_obj362, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj363=self->exp;
            /* U1 */ if(__dec_obj363) { __dec_obj363 = come_decrement_ref_count2(__dec_obj363, ((struct sNode*)__dec_obj363)->finalize, ((struct sNode*)__dec_obj363)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__=(void*)0;
struct sAlignOfExpNode2* __result307__;
void* __right_value641 = (void*)0;
struct sAlignOfExpNode2* result_369;
void* __right_value642 = (void*)0;
char* __dec_obj364;
void* __right_value643 = (void*)0;
struct sNode* __dec_obj365;
struct sAlignOfExpNode2* __result308__;
    if(    self==(void*)0) {
        __result307__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result307__;
    }
    result_369=(struct sAlignOfExpNode2*)come_increment_ref_count((struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "sAlignOfExpNode2"));
    if(    self!=((void*)0)) {
        result_369->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj364=result_369->sname;
        result_369->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj364 = come_decrement_ref_count2(__dec_obj364, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj365=result_369->exp;
        result_369->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        /* U1 */ if(__dec_obj365) { __dec_obj365 = come_decrement_ref_count2(__dec_obj365, ((struct sNode*)__dec_obj365)->finalize, ((struct sNode*)__dec_obj365)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result308__ = gComeFunResultObject = __result_obj__ = result_369;
    /*i*/come_call_finalizer3(result_369,sAlignOfExpNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
char* __dec_obj366;
struct sType* __dec_obj367;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj366=self->sname;
            /*G*/ __dec_obj366 = come_decrement_ref_count2(__dec_obj366, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj367=self->type;
            come_call_finalizer3(__dec_obj367,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsNode* __result310__;
void* __right_value649 = (void*)0;
struct sAlignAsNode* result_377;
void* __right_value650 = (void*)0;
char* __dec_obj368;
void* __right_value651 = (void*)0;
struct sType* __dec_obj369;
struct sAlignAsNode* __result311__;
    if(    self==(void*)0) {
        __result310__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result310__;
    }
    result_377=(struct sAlignAsNode*)come_increment_ref_count((struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "sAlignAsNode"));
    if(    self!=((void*)0)) {
        result_377->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj368=result_377->sname;
        result_377->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj368 = come_decrement_ref_count2(__dec_obj368, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj369=result_377->type;
        result_377->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj369,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result311__ = gComeFunResultObject = __result_obj__ = result_377;
    /*i*/come_call_finalizer3(result_377,sAlignAsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result311__;
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
char* __dec_obj370;
struct sNode* __dec_obj371;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj370=self->sname;
            /*G*/ __dec_obj370 = come_decrement_ref_count2(__dec_obj370, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        if(        self->exp==gComeFunResultObject) {
            __dec_obj371=self->exp;
            /* U1 */ if(__dec_obj371) { __dec_obj371 = come_decrement_ref_count2(__dec_obj371, ((struct sNode*)__dec_obj371)->finalize, ((struct sNode*)__dec_obj371)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__=(void*)0;
struct sAlignAsExpNode* __result313__;
void* __right_value656 = (void*)0;
struct sAlignAsExpNode* result_379;
void* __right_value657 = (void*)0;
char* __dec_obj372;
void* __right_value658 = (void*)0;
struct sNode* __dec_obj373;
struct sAlignAsExpNode* __result314__;
    if(    self==(void*)0) {
        __result313__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result313__;
    }
    result_379=(struct sAlignAsExpNode*)come_increment_ref_count((struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "sAlignAsExpNode"));
    if(    self!=((void*)0)) {
        result_379->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj372=result_379->sname;
        result_379->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj372 = come_decrement_ref_count2(__dec_obj372, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exp!=((void*)0)) {
        __dec_obj373=result_379->exp;
        result_379->exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->exp));
        /* U1 */ if(__dec_obj373) { __dec_obj373 = come_decrement_ref_count2(__dec_obj373, ((struct sNode*)__dec_obj373)->finalize, ((struct sNode*)__dec_obj373)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result314__ = gComeFunResultObject = __result_obj__ = result_379;
    /*i*/come_call_finalizer3(result_379,sAlignAsExpNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result314__;
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value661 = (void*)0;
struct sNode* __result317__;
void* __right_value662 = (void*)0;
struct sNode* __result318__;
void* __right_value663 = (void*)0;
struct sNode* __result319__;
_Bool come_c_380;
void* __right_value664 = (void*)0;
struct sNode* __result320__;
void* __right_value665 = (void*)0;
struct sNode* __result321__;
    if(    charp_operator_equals(buf,"using")) {
        if(        parsecmp("comelang",info)) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else if(        parsecmp("comelang-str",info)) {
            info->p+=strlen("comelang-str");
            skip_spaces_and_lf(info);
            gComeStr=(_Bool)1;
            __result317__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value661=create_nothing_node(info)));
            if(__right_value661) { __right_value661 = come_decrement_ref_count2(__right_value661, ((struct sNode*)__right_value661)->finalize, ((struct sNode*)__right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result317__;
        }
        else if(        parsecmp("comelang-pthread",info)) {
            info->p+=strlen("comelang-pthread");
            skip_spaces_and_lf(info);
            gComePthread=(_Bool)1;
            __result318__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value662=create_nothing_node(info)));
            if(__right_value662) { __right_value662 = come_decrement_ref_count2(__right_value662, ((struct sNode*)__right_value662)->finalize, ((struct sNode*)__right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result318__;
        }
        else if(        parsecmp("comelang-net",info)) {
            info->p+=strlen("comelang-net");
            skip_spaces_and_lf(info);
            gComeNet=(_Bool)1;
            __result319__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value663=create_nothing_node(info)));
            if(__right_value663) { __right_value663 = come_decrement_ref_count2(__right_value663, ((struct sNode*)__right_value663)->finalize, ((struct sNode*)__right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result319__;
        }
        else if(        parsecmp("c",info)||parsecmp("C",info)) {
            info->p+=strlen("c");
            skip_spaces_and_lf(info);
            if(            *info->p==123) {
                info->p++;
                skip_spaces_and_lf(info);
                come_c_380=gComeC;
                gComeC=(_Bool)1;
                transpile_toplevel((_Bool)1,info);
                gComeC=come_c_380;
            }
            else {
                gComeC=(_Bool)1;
            }
        }
        else if(        parsecmp("gc",info)) {
            info->p+=strlen("gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("no-gc",info)) {
            info->p+=strlen("no-gc");
            skip_spaces_and_lf(info);
        }
        else if(        parsecmp("unsafe",info)) {
            info->p+=strlen("unsafe");
            skip_spaces_and_lf(info);
        }
        else {
            err_msg(info,"invalid using");
            exit(2);
        }
        __result320__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value664=create_nothing_node(info)));
        if(__right_value664) { __right_value664 = come_decrement_ref_count2(__right_value664, ((struct sNode*)__right_value664)->finalize, ((struct sNode*)__right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    __result321__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value665=top_level_v93(buf,head,head_sline,info)));
    if(__right_value665) { __right_value665 = come_decrement_ref_count2(__right_value665, ((struct sNode*)__right_value665)->finalize, ((struct sNode*)__right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result321__;
}

struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value666 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var14 = (void*)0;
struct sType* type3_381=0;
char* name2_382=0;
_Bool err_383=0;
void* __right_value667 = (void*)0;
struct sType* inf_type_384;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
struct sNode* _inf_value31;
struct sImplementsNode* _inf_obj_value31;
void* __right_value674 = (void*)0;
struct sNode* __result324__;
void* __right_value675 = (void*)0;
struct sNode* __result325__;
    if(    parsecmp("implements",info)) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var14=((struct tuple3$3sTypephcharphbool*)(__right_value666=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
        type3_381=(struct sType*)come_increment_ref_count(multiple_assign_var14->v1);
        name2_382=(char*)come_increment_ref_count(multiple_assign_var14->v2);
        err_383=multiple_assign_var14->v3;
        /*g*/come_call_finalizer3(__right_value666,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
        if(        !err_383) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_384=(struct sType*)come_increment_ref_count(sType_clone(type3_381));
        _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1940, "struct sNode");
        _inf_obj_value31=come_increment_ref_count(((struct sImplementsNode*)(__right_value669=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1940, "sImplementsNode")),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_384),info))));
        _inf_value31->_protocol_obj=_inf_obj_value31;
        _inf_value31->finalize=(void*)sImplementsNode_finalize;
        _inf_value31->clone=(void*)sImplementsNode_clone;
        _inf_value31->compile=(void*)sImplementsNode_compile;
        _inf_value31->sline=(void*)sNodeBase_sline;
        _inf_value31->sname=(void*)sNodeBase_sname;
        _inf_value31->terminated=(void*)sNodeBase_terminated;
        _inf_value31->kind=(void*)sImplementsNode_kind;
        __result324__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value674=_inf_value31));
        /*i*/come_call_finalizer3(type3_381,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name2_382 = come_decrement_ref_count2(name2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(inf_type_384,sType_finalize, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*g*/come_call_finalizer3(__right_value669,sImplementsNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value674) { __right_value674 = come_decrement_ref_count2(__right_value674, ((struct sNode*)__right_value674)->finalize, ((struct sNode*)__right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result324__;
        /*i*/come_call_finalizer3(type3_381,sType_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */name2_382 = come_decrement_ref_count2(name2_382, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(inf_type_384,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==64) {
        info->p++;
        while(xisalnum(*info->p)||*info->p==95) {
            info->p++;
        }
        skip_spaces_and_lf(info);
    }
    __result325__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value675=post_position_operator_v19((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(__right_value675) { __right_value675 = come_decrement_ref_count2(__right_value675, ((struct sNode*)__right_value675)->finalize, ((struct sNode*)__right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result325__;
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
char* __dec_obj374;
struct sNode* __dec_obj375;
struct sType* __dec_obj376;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj374=self->sname;
            /*G*/ __dec_obj374 = come_decrement_ref_count2(__dec_obj374, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        if(        self->obj_exp==gComeFunResultObject) {
            __dec_obj375=self->obj_exp;
            /* U1 */ if(__dec_obj375) { __dec_obj375 = come_decrement_ref_count2(__dec_obj375, ((struct sNode*)__dec_obj375)->finalize, ((struct sNode*)__dec_obj375)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        if(        self->inf_type==gComeFunResultObject) {
            __dec_obj376=self->inf_type;
            come_call_finalizer3(__dec_obj376,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->inf_type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__=(void*)0;
struct sImplementsNode* __result322__;
void* __right_value670 = (void*)0;
struct sImplementsNode* result_385;
void* __right_value671 = (void*)0;
char* __dec_obj377;
void* __right_value672 = (void*)0;
struct sNode* __dec_obj378;
void* __right_value673 = (void*)0;
struct sType* __dec_obj379;
struct sImplementsNode* __result323__;
    if(    self==(void*)0) {
        __result322__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result322__;
    }
    result_385=(struct sImplementsNode*)come_increment_ref_count((struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "sImplementsNode"));
    if(    self!=((void*)0)) {
        result_385->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj377=result_385->sname;
        result_385->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj377 = come_decrement_ref_count2(__dec_obj377, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->obj_exp!=((void*)0)) {
        __dec_obj378=result_385->obj_exp;
        result_385->obj_exp=(struct sNode*)come_increment_ref_count(sNode_clone(self->obj_exp));
        /* U1 */ if(__dec_obj378) { __dec_obj378 = come_decrement_ref_count2(__dec_obj378, ((struct sNode*)__dec_obj378)->finalize, ((struct sNode*)__dec_obj378)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->inf_type!=((void*)0)) {
        __dec_obj379=result_385->inf_type;
        result_385->inf_type=(struct sType*)come_increment_ref_count(sType_clone(self->inf_type));
        come_call_finalizer3(__dec_obj379,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result323__ = gComeFunResultObject = __result_obj__ = result_385;
    /*i*/come_call_finalizer3(result_385,sImplementsNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result323__;
}

