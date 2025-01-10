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

typedef int wchar_t;

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

extern struct list$1sRightValueObjectph* gExceptionRightValueObjects;
struct sRefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenBlockNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* paren_block;
};

struct sDerefferenceNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
    _Bool mQuote;
};

struct sLogicalDenial
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sLogicalDenial2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sReverseNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sPlusPlusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sMinusMinusNode2
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sNormalBlock
{
    int sline;
    char* sname;
    int sline_real;
    struct sBlock* mBlock;
    _Bool clang;
    _Bool comma;
};

struct sComplement
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* value;
};

struct sParenNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sNode* mLeft;
};

struct sCastNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* mType;
    struct sNode* mLeft;
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
int mbtowc(int* anonymous_var_nameX235, const char* anonymous_var_nameX236, unsigned long  int anonymous_var_nameX237);
int wctomb(char* anonymous_var_nameX238, int anonymous_var_nameX239);
unsigned long  int mbstowcs(int* anonymous_var_nameX240, const char* anonymous_var_nameX241, unsigned long  int anonymous_var_nameX242);
unsigned long  int wcstombs(char* anonymous_var_nameX243, const int* anonymous_var_nameX244, unsigned long  int anonymous_var_nameX245);
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
void* memccpy(void* anonymous_var_nameX432, const void* anonymous_var_nameX433, int anonymous_var_nameX434, unsigned long  int anonymous_var_nameX435);
char* strsep(char** anonymous_var_nameX436, const char* anonymous_var_nameX437);
unsigned long  int strlcat(char* anonymous_var_nameX438, const char* anonymous_var_nameX439, unsigned long  int anonymous_var_nameX440);
unsigned long  int strlcpy(char* anonymous_var_nameX441, const char* anonymous_var_nameX442, unsigned long  int anonymous_var_nameX443);
void explicit_bzero(void* anonymous_var_nameX444, unsigned long  int anonymous_var_nameX445);
int strverscmp(const char* anonymous_var_nameX446, const char* anonymous_var_nameX447);
char* strchrnul(const char* anonymous_var_nameX448, int anonymous_var_nameX449);
char* strcasestr(const char* anonymous_var_nameX450, const char* anonymous_var_nameX451);
void* memmem(const void* anonymous_var_nameX452, unsigned long  int anonymous_var_nameX453, const void* anonymous_var_nameX454, unsigned long  int anonymous_var_nameX455);
void* memrchr(const void* anonymous_var_nameX456, int anonymous_var_nameX457, unsigned long  int anonymous_var_nameX458);
void* mempcpy(void* anonymous_var_nameX459, const void* anonymous_var_nameX460, unsigned long  int anonymous_var_nameX461);
char* basename();
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
_Bool xiswalpha(int c);
_Bool xiswblank(int c);
_Bool xiswdigit(int c);
_Bool xiswalnum(int c);
_Bool xisalpha(char c);
_Bool xisblank(char c);
_Bool xisdigit(char c);
_Bool xisalnum(char c);
_Bool xisascii(char c);
_Bool xiswascii(int c);
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
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2charphsNodephph* params, _Bool guard_break, struct list$1sTypeph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
char* make_method_generics_function(char* fun_name, struct list$1sTypeph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct tuple3$3sTypephcharphbool* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
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
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
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
static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info);
char* sRefferenceNode_kind(struct sRefferenceNode* self);
_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNodeph* paren_block, struct sInfo* info);
char* sParenBlockNode_kind(struct sParenBlockNode* self);
_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info);
char* sDerefferenceNode_kind(struct sDerefferenceNode* self);
_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info);
struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial_kind(struct sLogicalDenial* self);
_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info);
struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info);
char* sLogicalDenial2_kind(struct sLogicalDenial2* self);
_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info);
struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info);
char* sReverseNode_kind(struct sReverseNode* self);
_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info);
struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusNode2_kind(struct sMinusNode2* self);
_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info);
struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info);
char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self);
_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info);
struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info);
char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self);
_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info);
struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info);
_Bool sNormalBlock_terminated(struct sNormalBlock* self);
char* sNormalBlock_kind(struct sNormalBlock* self);
_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self);
static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self);
static struct list$1charp* list$1charp_initialize(struct list$1charp* self);
static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self);
static void sVar_finalize(struct sVar* self);
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
struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info);
char* sComplement_kind(struct sComplement* self);
_Bool sComplement_compile(struct sComplement* self, struct sInfo* info);
struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info);
char* sParenNode_kind(struct sParenNode* self);
_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info);
struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info);
char* sCastNode_kind(struct sCastNode* self);
_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
static void sNormalBlock_finalize(struct sNormalBlock* self);
static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* pre_position_operator(struct sInfo* info);
static void sLogicalDenial_finalize(struct sLogicalDenial* self);
static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self);
static void sLogicalDenial2_finalize(struct sLogicalDenial2* self);
static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self);
static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self);
static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self);
static void sMinusNode2_finalize(struct sMinusNode2* self);
static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self);
static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self);
static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self);
static void sComplement_finalize(struct sComplement* self);
static struct sComplement* sComplement_clone(struct sComplement* self);
static void sDerefferenceNode_finalize(struct sDerefferenceNode* self);
static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self);
static void sRefferenceNode_finalize(struct sRefferenceNode* self);
static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self);
static void sReverseNode_finalize(struct sReverseNode* self);
static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self);
static void sParenBlockNode_finalize(struct sParenBlockNode* self);
static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self);
static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sCastNode_finalize(struct sCastNode* self);
static struct sCastNode* sCastNode_clone(struct sCastNode* self);
static void sParenNode_finalize(struct sParenNode* self);
static struct sParenNode* sParenNode_clone(struct sParenNode* self);
struct sNode* expression_node_v98(struct sInfo* info);
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
    come_call_finalizer3(result_108,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(result_109,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(result_111,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(result_112,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(result_113,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(result_114,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(result_115,buffer_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(__right_value48,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(__right_value51,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(__right_value54,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(__right_value57,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(__right_value60,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_121,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value64,smart_pointer$1charp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_122,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value68,smart_pointer$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_123,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value72,smart_pointer$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_124,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value76,smart_pointer$1intp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_125,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value80,smart_pointer$1longp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_126,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value84,smart_pointer$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
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
    come_call_finalizer3(buf_127,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value88,smart_pointer$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result77__;
}
static struct list$1char* charpa_to_list(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value89 = (void*)0;
void* __right_value93 = (void*)0;
struct list$1char* __result80__;
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4109, "list$1char")),len,self)));
    come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4114, "list$1charp")),len,self)));
    come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4119, "list$1short")),len,self)));
    come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4124, "list$1int")),len,self)));
    come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4129, "list$1long")),len,self)));
    come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4134, "list$1float")),len,self)));
    come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4139, "list$1double")),len,self)));
    come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4144, "vector$1char")),len,self)));
    come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4149, "vector$1charp")),len,self)));
    come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4154, "vector$1short")),len,self)));
    come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4159, "vector$1int")),len,self)));
    come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4164, "vector$1long")),len,self)));
    come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4169, "vector$1float")),len,self)));
    come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4174, "vector$1double")),len,self)));
    come_call_finalizer3(__right_value144,vector$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
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
    __right_value197 = come_decrement_ref_count2(__right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result153__;
}
static char* int_xsprintf(int self, char* msg, ...){
void* __result_obj__=(void*)0;
void* __right_value198 = (void*)0;
char* __result154__;
    __result154__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value198=xsprintf(msg,self)));
    __right_value198 = come_decrement_ref_count2(__right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result154__;
}

// body function
static void buffer_finalize(struct buffer* self){
char* __dec_obj1;
    if(    self!=((void*)0)&&self->buf!=((void*)0)) {
        if(        self->buf==gComeFunResultObject) {
            __dec_obj1=self->buf;
            __dec_obj1 = come_decrement_ref_count2(__dec_obj1, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->buf = come_decrement_ref_count2(self->buf, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1charp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1shortp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1intp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1longp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1floatp_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,smart_pointer$1doublep_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_133,list_item$1charp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_139,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_145,list_item$1shortp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_151,list_item$1intp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_157,list_item$1longp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_163,list_item$1floatp_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,list$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_169,list_item$1doublep_finalize, 0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1charp_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result101__;
}

static void vector$1charpp_finalize(struct vector$1charp* self){
int i_171;
    if(    0) {
        for(        i_171=0;        i_171<self->len;        i_171++        ){
            self->items[i_171] = come_decrement_ref_count2(self->items[i_171], (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1shortp_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1intp_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1longp_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1floatp_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,vector$1doublep_finalize, 0, 0, 1, 0, (void*)0);
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
    come_call_finalizer3(self,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
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
        come_call_finalizer3(prev_it_209,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
char* __dec_obj28;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj28=self->item;
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
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
        __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1152, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1162, "list_item$1charph"))));
        litem_215->prev=self->tail;
        litem_215->next=((void*)0);
        __dec_obj31=litem_215->item;
        litem_215->item=(char*)come_increment_ref_count(item);
        __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_215;
        self->tail=litem_215;
    }
    self->len++;
    __result151__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result151__;
}

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info){
void* __right_value281 = (void*)0;
struct sType* generics_type_247;
struct sType* __dec_obj77;
struct sClass* klass_276;
char* class_name_277;
struct sFun* operator_fun_278;
char* fun_name2_279;
void* __right_value282 = (void*)0;
char* none_generics_name_280;
void* __right_value283 = (void*)0;
struct sType* obj_type_281;
void* __right_value284 = (void*)0;
char* __dec_obj78;
void* __right_value285 = (void*)0;
char* fun_name3_282;
struct sGenericsFun* generics_fun_283;
void* __right_value286 = (void*)0;
_Bool _if_conditional1;
_Bool __result219__;
void* __right_value287 = (void*)0;
void* __right_value288 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var1 = (void*)0;
struct sFun* fun_289=0;
char* fun_name_290=0;
void* __right_value289 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var2 = (void*)0;
struct sFun* fun2_291=0;
char* fun_name2_292=0;
void* __right_value290 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var3 = (void*)0;
struct sFun* fun_293=0;
char* fun_name_294=0;
void* __right_value291 = (void*)0;
struct tuple2$2sFunpcharph* multiple_assign_var4 = (void*)0;
struct sFun* fun2_295=0;
char* fun_name2_296=0;
void* __right_value292 = (void*)0;
void* __right_value293 = (void*)0;
char* __dec_obj105;
int i_297;
void* __right_value294 = (void*)0;
char* new_fun_name_298;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
char* __dec_obj106;
void* __right_value297 = (void*)0;
_Bool result_299;
void* __right_value298 = (void*)0;
void* __right_value299 = (void*)0;
struct CVALUE* come_value_300;
char* left_value2_301;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
void* __right_value302 = (void*)0;
void* __right_value303 = (void*)0;
_Bool _if_conditional2;
void* __right_value304 = (void*)0;
void* __right_value305 = (void*)0;
char* __dec_obj107;
void* __right_value306 = (void*)0;
char* __dec_obj108;
void* __right_value307 = (void*)0;
char* __dec_obj109;
void* __right_value308 = (void*)0;
struct sType* type2_305;
void* __right_value309 = (void*)0;
struct sType* type3_306;
void* __right_value310 = (void*)0;
struct sType* __dec_obj110;
void* __right_value311 = (void*)0;
char* __dec_obj111;
_Bool __result227__;
fun_name2_279 = (void*)0;
memset(&i_297, 0, sizeof(int));
left_value2_301 = (void*)0;
    generics_type_247=(struct sType*)come_increment_ref_count(sType_clone(type));
    if(    generics_type_247->mNoSolvedGenericsType->v1) {
        __dec_obj77=generics_type_247;
        generics_type_247=(struct sType*)come_increment_ref_count(generics_type_247->mNoSolvedGenericsType->v1);
        come_call_finalizer3(__dec_obj77,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_276=type->mClass;
    class_name_277=klass_276->mName;
    operator_fun_278=((void*)0);
    if(    list$1sTypeph_length(type->mGenericsTypes)>0) {
        none_generics_name_280=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_281=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj78=fun_name2_279;
        fun_name2_279=(char*)come_increment_ref_count(create_method_name(obj_type_281,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_282=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_280,fun_name));
        generics_fun_283=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_282,((void*)0));
        if(        generics_fun_283) {
            if(            (_if_conditional1=(!create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_279)),generics_fun_283,obj_type_281,info))),            _if_conditional1) {
                __result219__ = (_Bool)0;
                none_generics_name_280 = come_decrement_ref_count2(none_generics_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(obj_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name3_282 = come_decrement_ref_count2(fun_name3_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer3(generics_type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
                fun_name2_279 = come_decrement_ref_count2(fun_name2_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result219__;
            }
            operator_fun_278=((struct sFun*)(__right_value287=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_279)));
            come_call_finalizer3(__right_value287,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        else {
            if(            charp_operator_equals(fun_name,"operator_equals")) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(__right_value288=create_equals_automatically(obj_type_281,"equals",info)));
                fun_289=multiple_assign_var1->v1;
                fun_name_290=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer3(__right_value288,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(__right_value289=create_operator_equals_automatically(obj_type_281,"operator_equals",info)));
                fun2_291=multiple_assign_var2->v1;
                fun_name2_292=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer3(__right_value289,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_278=fun2_291;
                fun_name_290 = come_decrement_ref_count2(fun_name_290, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_292 = come_decrement_ref_count2(fun_name2_292, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else if(            charp_operator_equals(fun_name,"operator_not_equals")) {
                multiple_assign_var3=((struct tuple2$2sFunpcharph*)(__right_value290=create_equals_automatically(obj_type_281,"not_equals",info)));
                fun_293=multiple_assign_var3->v1;
                fun_name_294=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer3(__right_value290,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                multiple_assign_var4=((struct tuple2$2sFunpcharph*)(__right_value291=create_operator_not_equals_automatically(obj_type_281,"operator_not_equals",info)));
                fun2_295=multiple_assign_var4->v1;
                fun_name2_296=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                come_call_finalizer3(__right_value291,tuple2$2sFunpcharphp_finalize, 0, 1, 0, 0, (void*)0);
                operator_fun_278=fun2_295;
                fun_name_294 = come_decrement_ref_count2(fun_name_294, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_296 = come_decrement_ref_count2(fun_name2_296, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                operator_fun_278=((struct sFun*)(__right_value292=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_279)));
                come_call_finalizer3(__right_value292,sFun_finalize, 0, 1, 0, 0, (void*)0);
            }
        }
        none_generics_name_280 = come_decrement_ref_count2(none_generics_name_280, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(obj_type_281,sType_finalize, 0, 0, 0, 0, (void*)0);
        fun_name3_282 = come_decrement_ref_count2(fun_name3_282, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj105=fun_name2_279;
        fun_name2_279=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj105 = come_decrement_ref_count2(__dec_obj105, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_297=128-1;        i_297>=1;        i_297--        ){
            new_fun_name_298=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_279,i_297));
            operator_fun_278=((struct sFun*)(__right_value295=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_298)));
            come_call_finalizer3(__right_value295,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            operator_fun_278) {
                __dec_obj106=fun_name2_279;
                fun_name2_279=(char*)come_increment_ref_count(__builtin_string(new_fun_name_298));
                __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
                new_fun_name_298 = come_decrement_ref_count2(new_fun_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_298 = come_decrement_ref_count2(new_fun_name_298, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(        operator_fun_278==((void*)0)) {
            operator_fun_278=((struct sFun*)(__right_value297=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_279)));
            come_call_finalizer3(__right_value297,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    result_299=(_Bool)0;
    if(    operator_fun_278) {
        come_value_300=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 77, "CVALUE"))));
        check_assign_type(((char*)(__right_value301=xsprintf("\%s is assigned to",((char*)(__right_value300=string_to_string(fun_name2_279)))))),((struct sType*)come_null_check(((struct sType*)(__right_value302=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,0))), "05pre_op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,(_Bool)0,info);
        __right_value300 = come_decrement_ref_count2(__right_value300, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        __right_value301 = come_decrement_ref_count2(__right_value301, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value302,sType_finalize, 0, 1, 0, 0, (void*)0);
        if(        (_if_conditional2=(((struct sType*)come_null_check(((struct sType*)(__right_value303=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,0))), "05pre_op.c", 80, 1))->mHeap&&left_value->type->mHeap)),        come_call_finalizer3(__right_value303,sType_finalize, 0, 1, 0, 0, (void*)0),
        _if_conditional2) {
            std_move(((struct sType*)come_null_check(((struct sType*)(__right_value304=list$1sTypephp_operator_load_element(operator_fun_278->mParamTypes,0))), "05pre_op.c", 81, 2)),left_value->type,left_value,info,(_Bool)1);
            come_call_finalizer3(__right_value304,sType_finalize, 0, 1, 0, 0, (void*)0);
            __dec_obj107=left_value2_301;
            left_value2_301=(char*)come_increment_ref_count(xsprintf("%s",left_value->c_value));
            __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            __dec_obj108=left_value2_301;
            left_value2_301=(char*)come_increment_ref_count(string_clone(left_value->c_value));
            __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        __dec_obj109=come_value_300->c_value;
        come_value_300->c_value=(char*)come_increment_ref_count(xsprintf("%s(%s)",fun_name2_279,left_value2_301));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        type2_305=(struct sType*)come_increment_ref_count(sType_clone(operator_fun_278->mResultType));
        type3_306=(struct sType*)come_increment_ref_count(solve_generics(type2_305,generics_type_247,info));
        __dec_obj110=come_value_300->type;
        come_value_300->type=(struct sType*)come_increment_ref_count(sType_clone(type3_306));
        come_call_finalizer3(__dec_obj110,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_300->var=((void*)0);
        if(        type3_306->mHeap) {
            append_object_to_right_values2(come_value_300,(struct sType*)come_increment_ref_count(type3_306),info,(_Bool)0);
        }
        __dec_obj111=come_value_300->c_value;
        come_value_300->c_value=(char*)come_increment_ref_count(append_stackframe(come_value_300->c_value,come_value_300->type,info));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        add_come_last_code(info,"%s",come_value_300->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_300));
        result_299=(_Bool)1;
        come_call_finalizer3(come_value_300,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        left_value2_301 = come_decrement_ref_count2(left_value2_301, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type2_305,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(type3_306,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result227__ = result_299;
    come_call_finalizer3(generics_type_247,sType_finalize, 0, 0, 0, 0, (void*)0);
    fun_name2_279 = come_decrement_ref_count2(fun_name2_279, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result227__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result198__;
void* __right_value245 = (void*)0;
struct sType* result_248;
void* __right_value248 = (void*)0;
struct tuple1$1sTypeph* __dec_obj54;
void* __right_value249 = (void*)0;
struct tuple1$1sTypeph* __dec_obj55;
void* __right_value250 = (void*)0;
char* __dec_obj56;
void* __right_value257 = (void*)0;
struct list$1sTypeph* __dec_obj60;
void* __right_value265 = (void*)0;
struct list$1sNodeph* __dec_obj64;
void* __right_value266 = (void*)0;
struct list$1sTypeph* __dec_obj65;
void* __right_value273 = (void*)0;
struct list$1charph* __dec_obj69;
void* __right_value274 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value275 = (void*)0;
struct sNode* __dec_obj71;
void* __right_value276 = (void*)0;
struct tuple1$1sTypeph* __dec_obj72;
void* __right_value277 = (void*)0;
struct sNode* __dec_obj73;
void* __right_value278 = (void*)0;
char* __dec_obj74;
void* __right_value279 = (void*)0;
char* __dec_obj75;
void* __right_value280 = (void*)0;
char* __dec_obj76;
struct sType* __result214__;
    if(    self==(void*)0) {
        __result198__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result198__;
    }
    result_248=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_248->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj54=result_248->mNoSolvedGenericsType;
        result_248->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj54,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj55=result_248->mOriginalLoadVarType;
        result_248->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj55,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj56=result_248->mGenericsName;
        result_248->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj60=result_248->mGenericsTypes;
        result_248->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj60,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj64=result_248->mArrayNum;
        result_248->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj64,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj65=result_248->mParamTypes;
        result_248->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj65,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj69=result_248->mParamNames;
        result_248->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj69,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj70=result_248->mResultType;
        result_248->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj71=result_248->mAlignas;
        result_248->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj72=result_248->mChannelType;
        result_248->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj72,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_248->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_248->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_248->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_248->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_248->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_248->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_248->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_248->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_248->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_248->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_248->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_248->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_248->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_248->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_248->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_248->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_248->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_248->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_248->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_248->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj73=result_248->mSizeNum;
        result_248->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_248->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj74=result_248->mOriginalTypeName;
        result_248->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_248->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_248->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_248->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_248->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_248->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_248->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_248->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj75=result_248->mAsmName;
        result_248->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_248->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_248->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_248->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_248->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_248->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_248->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj76=result_248->mTupleName;
        result_248->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result214__ = gComeFunResultObject = __result_obj__ = result_248;
    come_call_finalizer3(result_248,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result214__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result199__;
void* __right_value246 = (void*)0;
struct tuple1$1sTypeph* result_249;
void* __right_value247 = (void*)0;
struct sType* __dec_obj32;
struct tuple1$1sTypeph* __result200__;
    if(    self==(void*)0) {
        __result199__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result199__;
    }
    result_249=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj32=result_249->v1;
        result_249->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj32,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result200__ = gComeFunResultObject = __result_obj__ = result_249;
    come_call_finalizer3(result_249,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj33;
struct tuple1$1sTypeph* __dec_obj35;
char* __dec_obj37;
struct list$1sTypeph* __dec_obj38;
struct list$1sNodeph* __dec_obj40;
struct list$1sTypeph* __dec_obj42;
struct list$1charph* __dec_obj43;
struct tuple1$1sTypeph* __dec_obj44;
struct sNode* __dec_obj46;
struct tuple1$1sTypeph* __dec_obj47;
struct sNode* __dec_obj49;
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
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj37=self->mGenericsName;
            __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj38=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj38,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj42,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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
            come_call_finalizer3(__dec_obj44,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
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
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_250;
struct list_item$1sTypeph* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        come_call_finalizer3(prev_it_251,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj39;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj39=self->item;
            come_call_finalizer3(__dec_obj39,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_252;
struct list_item$1sTypeph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        come_call_finalizer3(prev_it_253,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_254;
struct list_item$1sNodeph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        come_call_finalizer3(prev_it_255,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sNodeph* it_256;
struct list_item$1sNodeph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        come_call_finalizer3(prev_it_257,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_258;
struct list_item$1charph* prev_it_259;
    it_258=self->head;
    while(it_258!=((void*)0)) {
        prev_it_259=it_258;
        it_258=it_258->next;
        come_call_finalizer3(prev_it_259,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj48;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj48=self->v1;
            come_call_finalizer3(__dec_obj48,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result201__;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct list$1sTypeph* result_260;
struct list_item$1sTypeph* it_261;
void* __right_value256 = (void*)0;
struct list$1sTypeph* __result204__;
    if(    self==((void*)0)) {
        __result201__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result201__;
    }
    result_260=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1058, "list$1sTypeph"))));
    it_261=self->head;
    while(it_261!=((void*)0)) {
        list$1sTypeph_add(result_260,(struct sType*)come_increment_ref_count(sType_clone(it_261->item)));
        it_261=it_261->next;
    }
    __result204__ = gComeFunResultObject = __result_obj__ = result_260;
    come_call_finalizer3(result_260,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result204__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result202__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
struct list_item$1sTypeph* litem_262;
struct sType* __dec_obj57;
void* __right_value254 = (void*)0;
struct list_item$1sTypeph* litem_263;
struct sType* __dec_obj58;
void* __right_value255 = (void*)0;
struct list_item$1sTypeph* litem_264;
struct sType* __dec_obj59;
struct list$1sTypeph* __result203__;
    if(    self->len==0) {
        litem_262=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value253=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1072, "list_item$1sTypeph"))));
        litem_262->prev=((void*)0);
        litem_262->next=((void*)0);
        __dec_obj57=litem_262->item;
        litem_262->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj57,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_262;
        self->head=litem_262;
    }
    else if(    self->len==1) {
        litem_263=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value254=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1082, "list_item$1sTypeph"))));
        litem_263->prev=self->head;
        litem_263->next=((void*)0);
        __dec_obj58=litem_263->item;
        litem_263->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_263;
        self->head->next=litem_263;
    }
    else {
        litem_264=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value255=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1092, "list_item$1sTypeph"))));
        litem_264->prev=self->tail;
        litem_264->next=((void*)0);
        __dec_obj59=litem_264->item;
        litem_264->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj59,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_264;
        self->tail=litem_264;
    }
    self->len++;
    __result203__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result205__;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct list$1sNodeph* result_265;
struct list_item$1sNodeph* it_266;
void* __right_value264 = (void*)0;
struct list$1sNodeph* __result210__;
    if(    self==((void*)0)) {
        __result205__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_265=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1058, "list$1sNodeph"))));
    it_266=self->head;
    while(it_266!=((void*)0)) {
        list$1sNodeph_add(result_265,(struct sNode*)come_increment_ref_count(sNode_clone(it_266->item)));
        it_266=it_266->next;
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_265;
    come_call_finalizer3(result_265,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result206__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result206__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value260 = (void*)0;
struct list_item$1sNodeph* litem_267;
struct sNode* __dec_obj61;
void* __right_value261 = (void*)0;
struct list_item$1sNodeph* litem_268;
struct sNode* __dec_obj62;
void* __right_value262 = (void*)0;
struct list_item$1sNodeph* litem_269;
struct sNode* __dec_obj63;
struct list$1sNodeph* __result207__;
    if(    self->len==0) {
        litem_267=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value260=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1072, "list_item$1sNodeph"))));
        litem_267->prev=((void*)0);
        litem_267->next=((void*)0);
        __dec_obj61=litem_267->item;
        litem_267->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_267;
        self->head=litem_267;
    }
    else if(    self->len==1) {
        litem_268=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value261=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1082, "list_item$1sNodeph"))));
        litem_268->prev=self->head;
        litem_268->next=((void*)0);
        __dec_obj62=litem_268->item;
        litem_268->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_268;
        self->head->next=litem_268;
    }
    else {
        litem_269=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value262=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1092, "list_item$1sNodeph"))));
        litem_269->prev=self->tail;
        litem_269->next=((void*)0);
        __dec_obj63=litem_269->item;
        litem_269->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_269;
        self->tail=litem_269;
    }
    self->len++;
    __result207__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result207__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result208__;
void* __right_value263 = (void*)0;
struct sNode* result_270;
struct sNode* __result209__;
    if(    self==(void*)0) {
        __result208__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result208__;
    }
    result_270=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_270->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_270->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_270->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_270->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_270->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_270->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_270->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_270->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_270->kind=self->kind;
    }
    __result209__ = gComeFunResultObject = __result_obj__ = result_270;
    if(result_270) { result_270 = come_decrement_ref_count2(result_270, ((struct sNode*)result_270)->finalize, ((struct sNode*)result_270)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result211__;
void* __right_value267 = (void*)0;
void* __right_value268 = (void*)0;
struct list$1charph* result_271;
struct list_item$1charph* it_272;
void* __right_value272 = (void*)0;
struct list$1charph* __result213__;
    if(    self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_271=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1058, "list$1charph"))));
    it_272=self->head;
    while(it_272!=((void*)0)) {
        list$1charph_add(result_271,(char*)come_increment_ref_count(string_clone(it_272->item)));
        it_272=it_272->next;
    }
    __result213__ = gComeFunResultObject = __result_obj__ = result_271;
    come_call_finalizer3(result_271,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value269 = (void*)0;
struct list_item$1charph* litem_273;
char* __dec_obj66;
void* __right_value270 = (void*)0;
struct list_item$1charph* litem_274;
char* __dec_obj67;
void* __right_value271 = (void*)0;
struct list_item$1charph* litem_275;
char* __dec_obj68;
struct list$1charph* __result212__;
    if(    self->len==0) {
        litem_273=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value269=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1072, "list_item$1charph"))));
        litem_273->prev=((void*)0);
        litem_273->next=((void*)0);
        __dec_obj66=litem_273->item;
        litem_273->item=(char*)come_increment_ref_count(item);
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_273;
        self->head=litem_273;
    }
    else if(    self->len==1) {
        litem_274=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value270=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1082, "list_item$1charph"))));
        litem_274->prev=self->head;
        litem_274->next=((void*)0);
        __dec_obj67=litem_274->item;
        litem_274->item=(char*)come_increment_ref_count(item);
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_274;
        self->head->next=litem_274;
    }
    else {
        litem_275=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value271=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1092, "list_item$1charph"))));
        litem_275->prev=self->tail;
        litem_275->next=((void*)0);
        __dec_obj68=litem_275->item;
        litem_275->item=(char*)come_increment_ref_count(item);
        __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_275;
        self->tail=litem_275;
    }
    self->len++;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_284;
unsigned int it_285;
struct sGenericsFun* __result215__;
struct sGenericsFun* __result216__;
struct sGenericsFun* __result217__;
struct sGenericsFun* __result218__;
    hash_284=charp_get_hash_key(((char*)key))%self->size;
    it_285=hash_284;
    while((_Bool)1) {
        if(        self->item_existance[it_285]) {
            if(            charp_equals(self->keys[it_285],key)) {
                __result215__ = gComeFunResultObject = __result_obj__ = self->items[it_285];
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result215__;
            }
            it_285++;
            if(            it_285>=self->size) {
                it_285=0;
            }
            else if(            it_285==hash_284) {
                __result216__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result216__;
            }
        }
        else {
            __result217__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result217__;
        }
    }
    __result218__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
struct sType* __dec_obj79;
struct list$1charph* __dec_obj80;
struct list$1charph* __dec_obj81;
char* __dec_obj82;
struct sType* __dec_obj83;
struct list$1sTypeph* __dec_obj84;
struct list$1charph* __dec_obj85;
struct list$1charph* __dec_obj86;
char* __dec_obj87;
char* __dec_obj88;
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        if(        self->mImplType==gComeFunResultObject) {
            __dec_obj79=self->mImplType;
            come_call_finalizer3(__dec_obj79,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        if(        self->mGenericsTypeNames==gComeFunResultObject) {
            __dec_obj80=self->mGenericsTypeNames;
            come_call_finalizer3(__dec_obj80,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        if(        self->mMethodGenericsTypeNames==gComeFunResultObject) {
            __dec_obj81=self->mMethodGenericsTypeNames;
            come_call_finalizer3(__dec_obj81,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mMethodGenericsTypeNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj82=self->mName;
            __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj83=self->mResultType;
            come_call_finalizer3(__dec_obj83,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj84=self->mParamTypes;
            come_call_finalizer3(__dec_obj84,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj85=self->mParamNames;
            come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj86=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj86,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj87=self->mBlock;
            __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        if(        self->mGenericsSName==gComeFunResultObject) {
            __dec_obj88=self->mGenericsSName;
            __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__=(void*)0;
struct sFun* default_value_286;
unsigned int hash_287;
unsigned int it_288;
struct sFun* __result220__;
struct sFun* __result221__;
struct sFun* __result222__;
struct sFun* __result223__;
default_value_286 = (void*)0;
    memset(&default_value_286,0,sizeof(struct sFun*));
    hash_287=charp_get_hash_key(((char*)key))%self->size;
    it_288=hash_287;
    while((_Bool)1) {
        if(        self->item_existance[it_288]) {
            if(            charp_equals(self->keys[it_288],key)) {
                __result220__ = gComeFunResultObject = __result_obj__ = self->items[it_288];
                come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result220__;
            }
            it_288++;
            if(            it_288>=self->size) {
                it_288=0;
            }
            else if(            it_288==hash_287) {
                __result221__ = gComeFunResultObject = __result_obj__ = default_value_286;
                come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result221__;
            }
        }
        else {
            __result222__ = gComeFunResultObject = __result_obj__ = default_value_286;
            come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result222__;
        }
    }
    __result223__ = gComeFunResultObject = __result_obj__ = default_value_286;
    come_call_finalizer3(default_value_286,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj89;
struct sType* __dec_obj90;
struct list$1sTypeph* __dec_obj91;
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
            come_call_finalizer3(__dec_obj91,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
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

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
char* __dec_obj104;
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj104=self->v2;
            __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_302;
int i_303;
struct sType* __result224__;
struct sType* default_value_304;
struct sType* __result225__;
default_value_304 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_302=self->head;
    i_303=0;
    while(it_302!=((void*)0)) {
        if(        position==i_303) {
            __result224__ = gComeFunResultObject = __result_obj__ = it_302->item;
            gComeFunResultObject = (void*)0;
            return __result224__;
        }
        it_302=it_302->next;
        i_303++;
    }
    memset(&default_value_304,0,sizeof(struct sType*));
    __result225__ = gComeFunResultObject = __result_obj__ = default_value_304;
    come_call_finalizer3(default_value_304,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result225__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value312 = (void*)0;
struct list_item$1CVALUEph* litem_307;
struct CVALUE* __dec_obj112;
void* __right_value313 = (void*)0;
struct list_item$1CVALUEph* litem_308;
struct CVALUE* __dec_obj116;
void* __right_value314 = (void*)0;
struct list_item$1CVALUEph* litem_309;
struct CVALUE* __dec_obj117;
struct list$1CVALUEph* __result226__;
    if(    self->len==0) {
        litem_307=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value312=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1142, "list_item$1CVALUEph"))));
        litem_307->prev=((void*)0);
        litem_307->next=((void*)0);
        __dec_obj112=litem_307->item;
        litem_307->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_307;
        self->head=litem_307;
    }
    else if(    self->len==1) {
        litem_308=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value313=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1152, "list_item$1CVALUEph"))));
        litem_308->prev=self->head;
        litem_308->next=((void*)0);
        __dec_obj116=litem_308->item;
        litem_308->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj116,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_308;
        self->head->next=litem_308;
    }
    else {
        litem_309=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value314=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1162, "list_item$1CVALUEph"))));
        litem_309->prev=self->tail;
        litem_309->next=((void*)0);
        __dec_obj117=litem_309->item;
        litem_309->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj117,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_309;
        self->tail=litem_309;
    }
    self->len++;
    __result226__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj113;
struct sType* __dec_obj114;
char* __dec_obj115;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj113=self->c_value;
            __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj114=self->type;
            come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj115=self->c_value_without_right_value_objects;
            __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sRefferenceNode* sRefferenceNode_initialize(struct sRefferenceNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value315 = (void*)0;
struct sNode* __dec_obj119;
struct sRefferenceNode* __result228__;
    ((struct sNodeBase*)(__right_value315=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value315,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj119=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); };
    __result228__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result228__;
}

char* sRefferenceNode_kind(struct sRefferenceNode* self){
void* __result_obj__=(void*)0;
void* __right_value316 = (void*)0;
char* __result229__;
    __result229__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value316=__builtin_string("sRefferenceNode")));
    __right_value316 = come_decrement_ref_count2(__right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result229__;
}

_Bool sRefferenceNode_compile(struct sRefferenceNode* self, struct sInfo* info){
struct sNode* value_310;
void* __right_value317 = (void*)0;
struct CVALUE* left_value_311;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
struct CVALUE* come_value_312;
void* __right_value320 = (void*)0;
char* __dec_obj122;
void* __right_value321 = (void*)0;
struct sType* __dec_obj123;
_Bool __result230__;
    value_310=self->value;
    if(    !node_compile(value_310,info)) {
        return (_Bool)0;
    }
    left_value_311=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_312=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 138, "CVALUE"))));
    __dec_obj122=come_value_312->c_value;
    come_value_312->c_value=(char*)come_increment_ref_count(xsprintf("&%s",left_value_311->c_value));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj123=come_value_312->type;
    come_value_312->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_311->type));
    come_call_finalizer3(__dec_obj123,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_312->type->mPointerNum++;
    come_value_312->var=((void*)0);
    add_come_last_code(info,"%s",come_value_312->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_312));
    __result230__ = (_Bool)1;
    come_call_finalizer3(left_value_311,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_312,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result230__;
}

static void sNodeBase_finalize(struct sNodeBase* self){
char* __dec_obj118;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj118=self->sname;
            __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sParenBlockNode* sParenBlockNode_initialize(struct sParenBlockNode* self, struct list$1sNodeph* paren_block, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value322 = (void*)0;
struct list$1sNodeph* __dec_obj124;
struct sParenBlockNode* __result231__;
    ((struct sNodeBase*)(__right_value322=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value322,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj124=self->paren_block;
    self->paren_block=(struct list$1sNodeph*)come_increment_ref_count(paren_block);
    come_call_finalizer3(__dec_obj124,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sParenBlockNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(paren_block,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

char* sParenBlockNode_kind(struct sParenBlockNode* self){
void* __result_obj__=(void*)0;
void* __right_value323 = (void*)0;
char* __result232__;
    __result232__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value323=__builtin_string("sParenBlockNode")));
    __right_value323 = come_decrement_ref_count2(__right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result232__;
}

_Bool sParenBlockNode_compile(struct sParenBlockNode* self, struct sInfo* info){
struct list$1sNodeph* paren_block_313;
void* __right_value324 = (void*)0;
void* __right_value325 = (void*)0;
struct buffer* buf_314;
struct sType* come_type_315;
struct list$1sNodeph* o2_saved_316;
struct sNode* it_319;
void* __right_value326 = (void*)0;
void* __right_value327 = (void*)0;
void* __right_value328 = (void*)0;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool _if_conditional3;
void* __right_value331 = (void*)0;
struct buffer* __dec_obj127;
_Bool __result239__;
void* __right_value332 = (void*)0;
struct CVALUE* come_value_322;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
void* __right_value335 = (void*)0;
struct sType* __dec_obj128;
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
struct CVALUE* come_value_323;
void* __right_value340 = (void*)0;
char* __dec_obj129;
struct sType* __dec_obj130;
_Bool __result240__;
    paren_block_313=(struct list$1sNodeph*)come_increment_ref_count(self->paren_block);
    buf_314=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 171, "buffer"))));
    buffer_append_str(buf_314,"({");
    come_type_315=((void*)0);
    for(    o2_saved_316=(struct list$1sNodeph*)come_increment_ref_count((paren_block_313)),it_319=list$1sNodeph_begin((o2_saved_316));    !list$1sNodeph_end((o2_saved_316));    it_319=list$1sNodeph_next((o2_saved_316))    ){
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value326=it_319->kind(it_319->_protocol_obj))),"sIfNode")||string_operator_equals(((char*)(__right_value327=it_319->kind(it_319->_protocol_obj))),"sWhileNode")||string_operator_equals(((char*)(__right_value328=it_319->kind(it_319->_protocol_obj))),"sDoWhileNode")||string_operator_equals(((char*)(__right_value329=it_319->kind(it_319->_protocol_obj))),"sForNode")||((char*)(__right_value330=it_319->kind(it_319->_protocol_obj)))=="sSwitchNode")),        (__right_value326 = come_decrement_ref_count2(__right_value326, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value327 = come_decrement_ref_count2(__right_value327, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            add_come_code(info,((char*)(__right_value331=buffer_to_string(buf_314))));
            __right_value331 = come_decrement_ref_count2(__right_value331, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj127=buf_314;
            buf_314=((void*)0);
            come_call_finalizer3(__dec_obj127,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        !node_compile(it_319,info)) {
            __result239__ = (_Bool)0;
            come_call_finalizer3(o2_saved_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(paren_block_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(come_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result239__;
        }
        if(        list$1CVALUEph_length(info->stack)>0) {
            come_value_322=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            buf_314) {
                buffer_append_str(buf_314,((char*)(__right_value333=string_operator_add(come_value_322->c_value,"; "))));
                __right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            else {
                add_come_code(info,((char*)(__right_value334=string_operator_add(come_value_322->c_value,"; "))));
                __right_value334 = come_decrement_ref_count2(__right_value334, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            __dec_obj128=come_type_315;
            come_type_315=(struct sType*)come_increment_ref_count(sType_clone(come_value_322->type));
            come_call_finalizer3(__dec_obj128,sType_finalize, 0, 0, 0, 0, (void*)0);
            transpiler_clear_last_code(info);
            come_call_finalizer3(come_value_322,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            if(            buf_314) {
                buffer_append_str(buf_314,((char*)(__right_value336=string_operator_add(info->module->mLastCode,"; "))));
                __right_value336 = come_decrement_ref_count2(__right_value336, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                buffer_append_str(buf_314,((char*)(__right_value337=string_operator_add(info->module->mLastCode2,"; "))));
                __right_value337 = come_decrement_ref_count2(__right_value337, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                transpiler_clear_last_code(info);
            }
            else {
                add_last_code_to_source(info);
            }
        }
    }
    come_call_finalizer3(o2_saved_316,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(    buf_314) {
        buffer_append_str(buf_314,"})");
        come_value_323=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 217, "CVALUE"))));
        __dec_obj129=come_value_323->c_value;
        come_value_323->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_314));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj130=come_value_323->type;
        come_value_323->type=(struct sType*)come_increment_ref_count(come_type_315);
        come_call_finalizer3(__dec_obj130,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_323->var=((void*)0);
        add_come_last_code(info,"%s",come_value_323->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_323));
        come_call_finalizer3(come_value_323,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        add_come_code(info,"});");
    }
    __result240__ = (_Bool)1;
    come_call_finalizer3(paren_block_313,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(buf_314,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result240__;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_317;
struct sNode* __result233__;
struct sNode* __result234__;
struct sNode* result_318;
struct sNode* __result235__;
result_317 = (void*)0;
result_318 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_317,0,sizeof(struct sNode*));
        __result233__ = gComeFunResultObject = __result_obj__ = result_317;
        gComeFunResultObject = (void*)0;
        return __result233__;
    }
    self->it=self->head;
    if(    self->it) {
        __result234__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result234__;
    }
    memset(&result_318,0,sizeof(struct sNode*));
    __result235__ = gComeFunResultObject = __result_obj__ = result_318;
    gComeFunResultObject = (void*)0;
    return __result235__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_320;
struct sNode* __result236__;
struct sNode* __result237__;
struct sNode* result_321;
struct sNode* __result238__;
result_320 = (void*)0;
result_321 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_320,0,sizeof(struct sNode*));
        __result236__ = gComeFunResultObject = __result_obj__ = result_320;
        gComeFunResultObject = (void*)0;
        return __result236__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result237__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result237__;
    }
    memset(&result_321,0,sizeof(struct sNode*));
    __result238__ = gComeFunResultObject = __result_obj__ = result_321;
    gComeFunResultObject = (void*)0;
    return __result238__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct sDerefferenceNode* sDerefferenceNode_initialize(struct sDerefferenceNode* self, struct sNode* value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value341 = (void*)0;
struct sNode* __dec_obj131;
struct sDerefferenceNode* __result241__;
    ((struct sNodeBase*)(__right_value341=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value341,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj131=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); };
    self->mQuote=quote;
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sDerefferenceNode_kind(struct sDerefferenceNode* self){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value342=__builtin_string("sDerefferenceNode")));
    __right_value342 = come_decrement_ref_count2(__right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sDerefferenceNode_compile(struct sDerefferenceNode* self, struct sInfo* info){
struct sNode* value_324;
void* __right_value343 = (void*)0;
struct CVALUE* left_value_325;
void* __right_value344 = (void*)0;
_Bool _if_conditional4;
void* __right_value345 = (void*)0;
void* __right_value346 = (void*)0;
char* __dec_obj134;
char* p_326;
char* p2_327;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct buffer* buf_328;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
struct buffer* buf2_329;
void* __right_value351 = (void*)0;
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
void* __right_value354 = (void*)0;
char* __dec_obj135;
struct sType* type_330;
char* fun_name_331;
_Bool calling_fun_332;
void* __right_value355 = (void*)0;
void* __right_value356 = (void*)0;
struct CVALUE* come_value_333;
void* __right_value357 = (void*)0;
char* __dec_obj136;
void* __right_value358 = (void*)0;
struct sType* __dec_obj137;
_Bool __result243__;
memset(&calling_fun_332, 0, sizeof(_Bool));
    value_324=self->value;
    if(    !node_compile(value_324,info)) {
        return (_Bool)0;
    }
    left_value_325=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    if(    gComeDebug) {
        if(        (_if_conditional4=(string_operator_not_equals(((char*)(__right_value344=value_324->kind(value_324->_protocol_obj))),"sExpEqualNode"))),        (__right_value344 = come_decrement_ref_count2(__right_value344, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            __dec_obj134=left_value_325->c_value;
            left_value_325->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(__right_value345=make_type_name_string(left_value_325->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_325->c_value,info->sname,info->sline,gComeDebugStackFrameID++));
            __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value345 = come_decrement_ref_count2(__right_value345, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        else {
            p_326=left_value_325->c_value;
            p2_327=((void*)0);
            while(*p_326) {
                if(                *p_326==61&&*(p_326+1)!=62) {
                    p2_327=p_326;
                    break;
                }
                else {
                    p_326++;
                }
            }
            if(            p2_327==((void*)0)) {
                err_msg(info,"unexpected error in debugging to dereffrence and to assign");
                exit(2);
            }
            p_326=left_value_325->c_value;
            buf_328=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 285, "buffer"))));
            buffer_append(buf_328,p_326,p2_327-p_326);
            buf2_329=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05pre_op.c", 288, "buffer"))));
            buffer_append(buf2_329,p2_327,p_326+strlen(p_326)-p2_327);
            __dec_obj135=left_value_325->c_value;
            left_value_325->c_value=(char*)come_increment_ref_count(xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))%s",((char*)(__right_value351=make_type_name_string(left_value_325->type,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),((char*)(__right_value352=buffer_to_string(buf_328))),info->sname,info->sline,gComeDebugStackFrameID++,((char*)(__right_value353=buffer_to_string(buf2_329)))));
            __dec_obj135 = come_decrement_ref_count2(__dec_obj135, (void*)0, (void*)0, 0,0,0, (void*)0);
            __right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value352 = come_decrement_ref_count2(__right_value352, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __right_value353 = come_decrement_ref_count2(__right_value353, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            come_call_finalizer3(buf_328,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(buf2_329,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    type_330=(struct sType*)come_increment_ref_count(left_value_325->type);
    fun_name_331="operator_derefference";
    if(    self->mQuote) {
        calling_fun_332=(_Bool)0;
    }
    else {
        calling_fun_332=operator_overload_fun_self(type_330,fun_name_331,left_value_325,info);
    }
    if(    !calling_fun_332) {
        come_value_333=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 308, "CVALUE"))));
        __dec_obj136=come_value_333->c_value;
        come_value_333->c_value=(char*)come_increment_ref_count(xsprintf("*%s",left_value_325->c_value));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj137=come_value_333->type;
        come_value_333->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_325->type));
        come_call_finalizer3(__dec_obj137,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value_333->type->mPointerNum--;
        come_value_333->var=((void*)0);
        add_come_last_code(info,"%s",come_value_333->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_333));
        come_call_finalizer3(come_value_333,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result243__ = (_Bool)1;
    come_call_finalizer3(left_value_325,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type_330,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result243__;
}

struct sLogicalDenial* sLogicalDenial_initialize(struct sLogicalDenial* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj138;
struct sLogicalDenial* __result244__;
    ((struct sNodeBase*)(__right_value359=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value359,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj138=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result244__;
}

char* sLogicalDenial_kind(struct sLogicalDenial* self){
void* __result_obj__=(void*)0;
void* __right_value360 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value360=__builtin_string("sLogicalDenial")));
    __right_value360 = come_decrement_ref_count2(__right_value360, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

_Bool sLogicalDenial_compile(struct sLogicalDenial* self, struct sInfo* info){
void* __right_value361 = (void*)0;
struct CVALUE* come_value_334;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
struct CVALUE* come_value2_335;
void* __right_value364 = (void*)0;
char* __dec_obj141;
void* __right_value365 = (void*)0;
struct sType* __dec_obj142;
_Bool __result246__;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_334=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_335=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 347, "CVALUE"))));
    __dec_obj141=come_value2_335->c_value;
    come_value2_335->c_value=(char*)come_increment_ref_count(xsprintf("!%s",come_value_334->c_value));
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj142=come_value2_335->type;
    come_value2_335->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_334->type));
    come_call_finalizer3(__dec_obj142,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_335->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_335));
    add_come_last_code(info,"%s",come_value2_335->c_value);
    __result246__ = (_Bool)1;
    come_call_finalizer3(come_value_334,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_335,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result246__;
}

struct sLogicalDenial2* sLogicalDenial2_initialize(struct sLogicalDenial2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value366 = (void*)0;
struct sNode* __dec_obj143;
struct sLogicalDenial2* __result247__;
    ((struct sNodeBase*)(__right_value366=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value366,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj143=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); };
    __result247__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sLogicalDenial2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result247__;
}

char* sLogicalDenial2_kind(struct sLogicalDenial2* self){
void* __result_obj__=(void*)0;
void* __right_value367 = (void*)0;
char* __result248__;
    __result248__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value367=__builtin_string("sLogicalDenial")));
    __right_value367 = come_decrement_ref_count2(__right_value367, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result248__;
}

_Bool sLogicalDenial2_compile(struct sLogicalDenial2* self, struct sInfo* info){
void* __right_value368 = (void*)0;
struct CVALUE* come_value_336;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
struct CVALUE* come_value2_337;
void* __right_value371 = (void*)0;
char* __dec_obj146;
void* __right_value372 = (void*)0;
struct sType* __dec_obj147;
_Bool __result249__;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_336=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_337=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 384, "CVALUE"))));
    __dec_obj146=come_value2_337->c_value;
    come_value2_337->c_value=(char*)come_increment_ref_count(xsprintf("!!%s",come_value_336->c_value));
    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj147=come_value2_337->type;
    come_value2_337->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_336->type));
    come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_337->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_337));
    add_come_last_code(info,"%s",come_value2_337->c_value);
    __result249__ = (_Bool)1;
    come_call_finalizer3(come_value_336,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_337,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result249__;
}

struct sReverseNode* sReverseNode_initialize(struct sReverseNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value373 = (void*)0;
struct sNode* __dec_obj148;
struct sReverseNode* __result250__;
    ((struct sNodeBase*)(__right_value373=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value373,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj148=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); };
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sReverseNode_kind(struct sReverseNode* self){
void* __result_obj__=(void*)0;
void* __right_value374 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value374=__builtin_string("sReverseNode")));
    __right_value374 = come_decrement_ref_count2(__right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sReverseNode_compile(struct sReverseNode* self, struct sInfo* info){
struct sNode* value_338;
void* __right_value375 = (void*)0;
struct CVALUE* left_value_339;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
struct CVALUE* come_value_340;
void* __right_value378 = (void*)0;
char* __dec_obj151;
void* __right_value379 = (void*)0;
struct sType* __dec_obj152;
_Bool __result252__;
    value_338=self->value;
    if(    !node_compile(value_338,info)) {
        return (_Bool)0;
    }
    left_value_339=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_340=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 423, "CVALUE"))));
    __dec_obj151=come_value_340->c_value;
    come_value_340->c_value=(char*)come_increment_ref_count(xsprintf("!%s",left_value_339->c_value));
    __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj152=come_value_340->type;
    come_value_340->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_339->type));
    come_call_finalizer3(__dec_obj152,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_340->type->mPointerNum--;
    come_value_340->var=((void*)0);
    add_come_last_code(info,"%s",come_value_340->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_340));
    __result252__ = (_Bool)1;
    come_call_finalizer3(left_value_339,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_340,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result252__;
}

struct sMinusNode2* sMinusNode2_initialize(struct sMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value380 = (void*)0;
struct sNode* __dec_obj153;
struct sMinusNode2* __result253__;
    ((struct sNodeBase*)(__right_value380=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value380,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj153=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); };
    __result253__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result253__;
}

char* sMinusNode2_kind(struct sMinusNode2* self){
void* __result_obj__=(void*)0;
void* __right_value381 = (void*)0;
char* __result254__;
    __result254__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value381=__builtin_string("sMinusNode2")));
    __right_value381 = come_decrement_ref_count2(__right_value381, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result254__;
}

_Bool sMinusNode2_compile(struct sMinusNode2* self, struct sInfo* info){
void* __right_value382 = (void*)0;
struct CVALUE* come_value_341;
void* __right_value383 = (void*)0;
void* __right_value384 = (void*)0;
struct CVALUE* come_value2_342;
void* __right_value385 = (void*)0;
char* __dec_obj156;
void* __right_value386 = (void*)0;
struct sType* __dec_obj157;
_Bool __result255__;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_341=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_342=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 461, "CVALUE"))));
    __dec_obj156=come_value2_342->c_value;
    come_value2_342->c_value=(char*)come_increment_ref_count(xsprintf("-%s",come_value_341->c_value));
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj157=come_value2_342->type;
    come_value2_342->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_341->type));
    come_call_finalizer3(__dec_obj157,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_342->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_342));
    add_come_last_code(info,"%s",come_value2_342->c_value);
    __result255__ = (_Bool)1;
    come_call_finalizer3(come_value_341,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_342,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result255__;
}

struct sPlusPlusNode2* sPlusPlusNode2_initialize(struct sPlusPlusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value387 = (void*)0;
struct sNode* __dec_obj158;
struct sPlusPlusNode2* __result256__;
    ((struct sNodeBase*)(__right_value387=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value387,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj158=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); };
    __result256__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result256__;
}

char* sPlusPlusNode2_kind(struct sPlusPlusNode2* self){
void* __result_obj__=(void*)0;
void* __right_value388 = (void*)0;
char* __result257__;
    __result257__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value388=__builtin_string("sPlusPlusNode2")));
    __right_value388 = come_decrement_ref_count2(__right_value388, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result257__;
}

_Bool sPlusPlusNode2_compile(struct sPlusPlusNode2* self, struct sInfo* info){
void* __right_value389 = (void*)0;
struct CVALUE* come_value_343;
void* __right_value390 = (void*)0;
void* __right_value391 = (void*)0;
struct CVALUE* come_value2_344;
void* __right_value392 = (void*)0;
char* __dec_obj161;
void* __right_value393 = (void*)0;
struct sType* __dec_obj162;
_Bool __result258__;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_343=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_344=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 498, "CVALUE"))));
    __dec_obj161=come_value2_344->c_value;
    come_value2_344->c_value=(char*)come_increment_ref_count(xsprintf("++%s",come_value_343->c_value));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj162=come_value2_344->type;
    come_value2_344->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_343->type));
    come_call_finalizer3(__dec_obj162,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_344->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_344));
    add_come_last_code(info,"%s",come_value2_344->c_value);
    __result258__ = (_Bool)1;
    come_call_finalizer3(come_value_343,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_344,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result258__;
}

struct sMinusMinusNode2* sMinusMinusNode2_initialize(struct sMinusMinusNode2* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value394 = (void*)0;
struct sNode* __dec_obj163;
struct sMinusMinusNode2* __result259__;
    ((struct sNodeBase*)(__right_value394=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value394,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj163=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj163) { __dec_obj163 = come_decrement_ref_count2(__dec_obj163, ((struct sNode*)__dec_obj163)->finalize, ((struct sNode*)__dec_obj163)->_protocol_obj, 0,0,0, (void*)0); };
    __result259__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result259__;
}

char* sMinusMinusNode2_kind(struct sMinusMinusNode2* self){
void* __result_obj__=(void*)0;
void* __right_value395 = (void*)0;
char* __result260__;
    __result260__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value395=__builtin_string("sMinusMinusNode2")));
    __right_value395 = come_decrement_ref_count2(__right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result260__;
}

_Bool sMinusMinusNode2_compile(struct sMinusMinusNode2* self, struct sInfo* info){
void* __right_value396 = (void*)0;
struct CVALUE* come_value_345;
void* __right_value397 = (void*)0;
void* __right_value398 = (void*)0;
struct CVALUE* come_value2_346;
void* __right_value399 = (void*)0;
char* __dec_obj166;
void* __right_value400 = (void*)0;
struct sType* __dec_obj167;
_Bool __result261__;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_345=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_346=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 535, "CVALUE"))));
    __dec_obj166=come_value2_346->c_value;
    come_value2_346->c_value=(char*)come_increment_ref_count(xsprintf("--%s",come_value_345->c_value));
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value2_346->type;
    come_value2_346->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_345->type));
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_346->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_346));
    add_come_last_code(info,"%s",come_value2_346->c_value);
    __result261__ = (_Bool)1;
    come_call_finalizer3(come_value_345,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_346,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result261__;
}

struct sNormalBlock* sNormalBlock_initialize(struct sNormalBlock* self, struct sBlock* block, _Bool clang, _Bool comma, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value401 = (void*)0;
void* __right_value419 = (void*)0;
struct sBlock* __dec_obj177;
struct sNormalBlock* __result291__;
    ((struct sNodeBase*)(__right_value401=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value401,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj177=self->mBlock;
    self->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(block));
    come_call_finalizer3(__dec_obj177,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    self->clang=clang;
    self->comma=comma;
    __result291__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result291__;
}

_Bool sNormalBlock_terminated(struct sNormalBlock* self){
    return (_Bool)1;
}

char* sNormalBlock_kind(struct sNormalBlock* self){
void* __result_obj__=(void*)0;
void* __right_value420 = (void*)0;
char* __result292__;
    __result292__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value420=__builtin_string("sNormalBlock")));
    __right_value420 = come_decrement_ref_count2(__right_value420, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result292__;
}

_Bool sNormalBlock_compile(struct sNormalBlock* self, struct sInfo* info){
struct sBlock* block_399;
_Bool come_c_400;
    block_399=self->mBlock;
    if(    !self->comma) {
        add_come_code(info,"{\n");
    }
    come_c_400=gComeC;
    if(    self->clang) {
        gComeC=(_Bool)1;
    }
    transpile_block(block_399,((void*)0),((void*)0),info,(_Bool)0,(_Bool)0,self->comma,(_Bool)0);
    if(    !self->comma) {
        add_come_code(info,"}\n");
    }
    gComeC=come_c_400;
    transpiler_clear_last_code(info);
    return (_Bool)1;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
void* __result_obj__=(void*)0;
struct sBlock* __result262__;
void* __right_value402 = (void*)0;
struct sBlock* result_347;
void* __right_value403 = (void*)0;
struct list$1sNodeph* __dec_obj168;
void* __right_value418 = (void*)0;
struct sVarTable* __dec_obj176;
struct sBlock* __result290__;
    if(    self==(void*)0) {
        __result262__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result262__;
    }
    result_347=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "sBlock"));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj168=result_347->mNodes;
        result_347->mNodes=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mNodes));
        come_call_finalizer3(__dec_obj168,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj176=result_347->mVarTable;
        result_347->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_clone(self->mVarTable));
        come_call_finalizer3(__dec_obj176,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_347->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result290__ = gComeFunResultObject = __result_obj__ = result_347;
    come_call_finalizer3(result_347,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result290__;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
void* __result_obj__=(void*)0;
struct sVarTable* __result263__;
void* __right_value404 = (void*)0;
struct sVarTable* result_348;
void* __right_value417 = (void*)0;
struct map$2charphsVarph* __dec_obj175;
struct sVarTable* __result289__;
    if(    self==(void*)0) {
        __result263__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result263__;
    }
    result_348=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "sVarTable"));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj175=result_348->mVars;
        result_348->mVars=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarphp_clone(self->mVars));
        come_call_finalizer3(__dec_obj175,map$2charphsVarph_finalize, 0, 0, 0, 0, (void*)0);
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
    __result289__ = gComeFunResultObject = __result_obj__ = result_348;
    come_call_finalizer3(result_348,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result289__;
}

static struct map$2charphsVarph* map$2charphsVarphp_clone(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
struct map$2charphsVarph* __result264__;
void* __right_value405 = (void*)0;
void* __right_value411 = (void*)0;
struct map$2charphsVarph* result_352;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct list$1charp* __dec_obj174;
char* it_355;
struct sVar* default_value_358;
struct sVar* it2_361;
struct map$2charphsVarph* __result288__;
default_value_358 = (void*)0;
    if(    self==((void*)0)) {
        __result264__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result264__;
    }
    result_352=(struct map$2charphsVarph*)come_increment_ref_count(map$2charphsVarph_initialize((struct map$2charphsVarph*)come_increment_ref_count((struct map$2charphsVarph*)come_calloc(1, sizeof(struct map$2charphsVarph)*(1), "./comelang.h", 2390, "map$2charphsVarph"))));
    __dec_obj174=result_352->key_list;
    result_352->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2392, "list$1charp"))));
    come_call_finalizer3(__dec_obj174,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    for(    it_355=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_355=map$2charphsVarph_next(self)    ){
        memset(&default_value_358,0,sizeof(struct sVar*));
        it2_361=map$2charphsVarph_at(self,it_355,default_value_358);
        map$2charphsVarph_put(result_352,it_355,it2_361);
    }
    __result288__ = gComeFunResultObject = __result_obj__ = result_352;
    come_call_finalizer3(result_352,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result288__;
}

static struct map$2charphsVarph* map$2charphsVarph_initialize(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
int i_349;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
struct list$1charp* __dec_obj169;
struct map$2charphsVarph* __result266__;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value406=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2319, "char*%"))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value407=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2320, "sVar*%"))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value408=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2321, "bool"))));
    for(    i_349=0;    i_349<128;    i_349++    ){
        self->item_existance[i_349]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj169=self->key_list;
    self->key_list=(struct list$1charp*)come_increment_ref_count(list$1charp_initialize((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 2331, "list$1charp"))));
    come_call_finalizer3(__dec_obj169,list$1charp_finalize, 0, 0, 0, 0, (void*)0);
    self->it=0;
    __result266__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,map$2charphsVarphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result266__;
}

static struct list$1charp* list$1charp_initialize(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list$1charp* __result265__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result265__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,list$1charpp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result265__;
}

static void map$2charphsVarphp_finalize(struct map$2charphsVarph* self){
int i_350;
int i_351;
    for(    i_350=0;    i_350<self->size;    i_350++    ){
        if(        self->item_existance[i_350]) {
            if(            1) {
                come_call_finalizer3(self->items[i_350],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_351=0;    i_351<self->size;    i_351++    ){
        if(        self->item_existance[i_351]) {
            if(            1) {
                self->keys[i_351] = come_decrement_ref_count2(self->keys[i_351], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void sVar_finalize(struct sVar* self){
char* __dec_obj170;
char* __dec_obj171;
struct sType* __dec_obj172;
char* __dec_obj173;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj170=self->mName;
            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        if(        self->mCValueName==gComeFunResultObject) {
            __dec_obj171=self->mCValueName;
            __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj172=self->mType;
            come_call_finalizer3(__dec_obj172,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        if(        self->mFunName==gComeFunResultObject) {
            __dec_obj173=self->mFunName;
            __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static char* map$2charphsVarph_begin(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_353;
char* __result267__;
char* __result268__;
char* result_354;
char* __result269__;
result_353 = (void*)0;
result_354 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_353,0,sizeof(char*));
        __result267__ = gComeFunResultObject = __result_obj__ = result_353;
        gComeFunResultObject = (void*)0;
        return __result267__;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result268__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result268__;
    }
    memset(&result_354,0,sizeof(char*));
    __result269__ = gComeFunResultObject = __result_obj__ = result_354;
    gComeFunResultObject = (void*)0;
    return __result269__;
}

static _Bool map$2charphsVarph_end(struct map$2charphsVarph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2charphsVarph_next(struct map$2charphsVarph* self){
void* __result_obj__=(void*)0;
char* result_356;
char* __result270__;
char* __result271__;
char* result_357;
char* __result272__;
result_356 = (void*)0;
result_357 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_356,0,sizeof(char*));
        __result270__ = gComeFunResultObject = __result_obj__ = result_356;
        gComeFunResultObject = (void*)0;
        return __result270__;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result271__ = gComeFunResultObject = __result_obj__ = self->key_list->it->item;
        gComeFunResultObject = (void*)0;
        return __result271__;
    }
    memset(&result_357,0,sizeof(char*));
    __result272__ = gComeFunResultObject = __result_obj__ = result_357;
    gComeFunResultObject = (void*)0;
    return __result272__;
}

static struct sVar* map$2charphsVarph_at(struct map$2charphsVarph* self, char* key, struct sVar* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_359;
unsigned int it_360;
struct sVar* __result273__;
struct sVar* __result274__;
struct sVar* __result275__;
struct sVar* __result276__;
    hash_359=charp_get_hash_key(((char*)key))%self->size;
    it_360=hash_359;
    while((_Bool)1) {
        if(        self->item_existance[it_360]) {
            if(            charp_equals(self->keys[it_360],key)) {
                __result273__ = gComeFunResultObject = __result_obj__ = self->items[it_360];
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result273__;
            }
            it_360++;
            if(            it_360>=self->size) {
                it_360=0;
            }
            else if(            it_360==hash_359) {
                __result274__ = gComeFunResultObject = __result_obj__ = default_value;
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result274__;
            }
        }
        else {
            __result275__ = gComeFunResultObject = __result_obj__ = default_value;
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result275__;
        }
    }
    __result276__ = gComeFunResultObject = __result_obj__ = default_value;
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result276__;
}

static struct map$2charphsVarph* map$2charphsVarph_put(struct map$2charphsVarph* self, char* key, struct sVar* item){
void* __result_obj__=(void*)0;
unsigned int hash_373;
int it_374;
_Bool same_key_exist_391;
char* it2_394;
struct map$2charphsVarph* __result287__;
    if(    self->len*2>=self->size) {
        map$2charphsVarph_rehash(self);
    }
    hash_373=charp_get_hash_key(key)%self->size;
    it_374=hash_373;
    while((_Bool)1) {
        if(        self->item_existance[it_374]) {
            if(            charp_equals(self->keys[it_374],key)) {
                if(                1) {
                    self->keys[it_374] = come_decrement_ref_count2(self->keys[it_374], (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    list$1charp_remove(self->key_list,self->keys[it_374]);
                    self->keys[it_374]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1charp_remove(self->key_list,self->keys[it_374]);
                    self->keys[it_374]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_374],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_374]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_374]=item;
                }
                break;
            }
            it_374++;
            if(            it_374>=self->size) {
                it_374=0;
            }
            else if(            it_374==hash_373) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_374]=(_Bool)1;
            if(            1) {
                self->keys[it_374]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_374]=key;
            }
            if(            1) {
                self->items[it_374]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_374]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_391=(_Bool)0;
    for(    it2_394=list$1charp_begin(self->key_list);    !list$1charp_end(self->key_list);    it2_394=list$1charp_next(self->key_list)    ){
        if(        charp_equals(it2_394,key)) {
            same_key_exist_391=(_Bool)1;
        }
    }
    if(    !same_key_exist_391) {
        list$1charp_push_back(self->key_list,key);
    }
    __result287__ = gComeFunResultObject = __result_obj__ = self;
    key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static void map$2charphsVarph_rehash(struct map$2charphsVarph* self){
int size_362;
void* __right_value414 = (void*)0;
char** keys_363;
void* __right_value415 = (void*)0;
struct sVar** items_364;
void* __right_value416 = (void*)0;
_Bool* item_existance_365;
int len_366;
char* it_367;
struct sVar* default_value_368;
struct sVar* it2_369;
unsigned int hash_370;
int n_371;
struct sVar* default_value_372;
default_value_368 = (void*)0;
default_value_372 = (void*)0;
    size_362=self->size*10;
    keys_363=(char**)come_increment_ref_count(((char**)(__right_value414=(char**)come_calloc(1, sizeof(char*)*(1*(size_362)), "./comelang.h", 2547, "char*%"))));
    items_364=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value415=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_362)), "./comelang.h", 2548, "sVar*%"))));
    item_existance_365=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value416=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_362)), "./comelang.h", 2549, "bool"))));
    len_366=0;
    for(    it_367=map$2charphsVarph_begin(self);    !map$2charphsVarph_end(self);    it_367=map$2charphsVarph_next(self)    ){
        memset(&default_value_368,0,sizeof(struct sVar*));
        it2_369=map$2charphsVarph_at(self,it_367,default_value_368);
        hash_370=charp_get_hash_key(it_367)%size_362;
        n_371=hash_370;
        while((_Bool)1) {
            if(            item_existance_365[n_371]) {
                n_371++;
                if(                n_371>=size_362) {
                    n_371=0;
                }
                else if(                n_371==hash_370) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_365[n_371]=(_Bool)1;
                keys_363[n_371]=it_367;
                items_364[n_371]=map$2charphsVarph_at(self,it_367,default_value_372);
                len_366++;
                break;
            }
        }
    }
    come_free((char*)self->items);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_free((char*)self->keys);
    self->keys=keys_363;
    self->items=items_364;
    self->item_existance=item_existance_365;
    self->size=size_362;
    self->len=len_366;
}

static struct list$1charp* list$1charp_remove(struct list$1charp* self, char* item){
void* __result_obj__=(void*)0;
int it2_375;
struct list_item$1charp* it_376;
struct list$1charp* __result280__;
    it2_375=0;
    it_376=self->head;
    while(it_376!=((void*)0)) {
        if(        charp_equals(it_376->item,item)) {
            list$1charp_delete(self,it2_375,it2_375+1);
            break;
        }
        it2_375++;
        it_376=it_376->next;
    }
    __result280__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct list$1charp* list$1charp_delete(struct list$1charp* self, int head, int tail){
void* __result_obj__=(void*)0;
int tmp_377;
struct list$1charp* __result277__;
struct list_item$1charp* it_380;
int i_381;
struct list_item$1charp* prev_it_382;
struct list_item$1charp* it_383;
int i_384;
struct list_item$1charp* prev_it_385;
struct list_item$1charp* it_386;
struct list_item$1charp* head_prev_it_387;
struct list_item$1charp* tail_it_388;
int i_389;
struct list_item$1charp* prev_it_390;
struct list$1charp* __result279__;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_377=tail;
        tail=head;
        head=tmp_377;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result277__ = gComeFunResultObject = __result_obj__ = self;
        gComeFunResultObject = (void*)0;
        return __result277__;
    }
    if(    head==0&&tail==self->len) {
        list$1charp_reset(self);
    }
    else if(    head==0) {
        it_380=self->head;
        i_381=0;
        while(it_380!=((void*)0)) {
            if(            i_381<tail) {
                prev_it_382=it_380;
                it_380=it_380->next;
                i_381++;
                come_call_finalizer3(prev_it_382,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_381==tail) {
                self->head=it_380;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_380=it_380->next;
                i_381++;
            }
        }
    }
    else if(    tail==self->len) {
        it_383=self->head;
        i_384=0;
        while(it_383!=((void*)0)) {
            if(            i_384==head) {
                self->tail=it_383->prev;
                self->tail->next=((void*)0);
            }
            if(            i_384>=head) {
                prev_it_385=it_383;
                it_383=it_383->next;
                i_384++;
                come_call_finalizer3(prev_it_385,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_383=it_383->next;
                i_384++;
            }
        }
    }
    else {
        it_386=self->head;
        head_prev_it_387=((void*)0);
        tail_it_388=((void*)0);
        i_389=0;
        while(it_386!=((void*)0)) {
            if(            i_389==head) {
                head_prev_it_387=it_386->prev;
            }
            if(            i_389==tail) {
                tail_it_388=it_386;
            }
            if(            i_389>=head&&i_389<tail) {
                prev_it_390=it_386;
                it_386=it_386->next;
                i_389++;
                come_call_finalizer3(prev_it_390,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_386=it_386->next;
                i_389++;
            }
        }
        if(        head_prev_it_387!=((void*)0)) {
            head_prev_it_387->next=tail_it_388;
        }
        if(        tail_it_388!=((void*)0)) {
            tail_it_388->prev=head_prev_it_387;
        }
    }
    __result279__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result279__;
}

static struct list$1charp* list$1charp_reset(struct list$1charp* self){
void* __result_obj__=(void*)0;
struct list_item$1charp* it_378;
struct list_item$1charp* prev_it_379;
struct list$1charp* __result278__;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result278__ = gComeFunResultObject = __result_obj__ = self;
    gComeFunResultObject = (void*)0;
    return __result278__;
}

static char* list$1charp_begin(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_392;
char* __result281__;
char* __result282__;
char* result_393;
char* __result283__;
result_392 = (void*)0;
result_393 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_392,0,sizeof(char*));
        __result281__ = gComeFunResultObject = __result_obj__ = result_392;
        gComeFunResultObject = (void*)0;
        return __result281__;
    }
    self->it=self->head;
    if(    self->it) {
        __result282__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result282__;
    }
    memset(&result_393,0,sizeof(char*));
    __result283__ = gComeFunResultObject = __result_obj__ = result_393;
    gComeFunResultObject = (void*)0;
    return __result283__;
}

static _Bool list$1charp_end(struct list$1charp* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1charp_next(struct list$1charp* self){
void* __result_obj__=(void*)0;
char* result_395;
char* __result284__;
char* __result285__;
char* result_396;
char* __result286__;
result_395 = (void*)0;
result_396 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_395,0,sizeof(char*));
        __result284__ = gComeFunResultObject = __result_obj__ = result_395;
        gComeFunResultObject = (void*)0;
        return __result284__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result285__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    memset(&result_396,0,sizeof(char*));
    __result286__ = gComeFunResultObject = __result_obj__ = result_396;
    gComeFunResultObject = (void*)0;
    return __result286__;
}

static void map$2charphsVarph_finalize(struct map$2charphsVarph* self){
int i_397;
int i_398;
    for(    i_397=0;    i_397<self->size;    i_397++    ){
        if(        self->item_existance[i_397]) {
            if(            1) {
                come_call_finalizer3(self->items[i_397],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_398=0;    i_398<self->size;    i_398++    ){
        if(        self->item_existance[i_398]) {
            if(            1) {
                self->keys[i_398] = come_decrement_ref_count2(self->keys[i_398], (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1charpp_finalize, 0, 0, 0, 0, (void*)0);
    self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sComplement* sComplement_initialize(struct sComplement* self, struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value421 = (void*)0;
struct sNode* __dec_obj180;
struct sComplement* __result293__;
    ((struct sNodeBase*)(__right_value421=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value421,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj180=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); };
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sComplement_kind(struct sComplement* self){
void* __result_obj__=(void*)0;
void* __right_value422 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value422=__builtin_string("sComplement")));
    __right_value422 = come_decrement_ref_count2(__right_value422, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sComplement_compile(struct sComplement* self, struct sInfo* info){
void* __right_value423 = (void*)0;
struct CVALUE* come_value_401;
void* __right_value424 = (void*)0;
void* __right_value425 = (void*)0;
struct CVALUE* come_value2_402;
void* __right_value426 = (void*)0;
char* __dec_obj183;
void* __right_value427 = (void*)0;
struct sType* __dec_obj184;
_Bool __result295__;
    if(    !node_compile(self->value,info)) {
        return (_Bool)0;
    }
    come_value_401=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value2_402=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 619, "CVALUE"))));
    __dec_obj183=come_value2_402->c_value;
    come_value2_402->c_value=(char*)come_increment_ref_count(xsprintf("~%s",come_value_401->c_value));
    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj184=come_value2_402->type;
    come_value2_402->type=(struct sType*)come_increment_ref_count(sType_clone(come_value_401->type));
    come_call_finalizer3(__dec_obj184,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_402->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_402));
    add_come_last_code(info,"%s",come_value2_402->c_value);
    __result295__ = (_Bool)1;
    come_call_finalizer3(come_value_401,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value2_402,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result295__;
}

struct sParenNode* sParenNode_initialize(struct sParenNode* self, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value428 = (void*)0;
void* __right_value429 = (void*)0;
struct sNode* __dec_obj185;
struct sParenNode* __result296__;
    ((struct sNodeBase*)(__right_value428=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value428,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj185=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); };
    __result296__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result296__;
}

char* sParenNode_kind(struct sParenNode* self){
void* __result_obj__=(void*)0;
void* __right_value430 = (void*)0;
char* __result297__;
    __result297__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value430=__builtin_string("sParenNode")));
    __right_value430 = come_decrement_ref_count2(__right_value430, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result297__;
}

_Bool sParenNode_compile(struct sParenNode* self, struct sInfo* info){
struct sNode* left_403;
void* __right_value431 = (void*)0;
struct CVALUE* left_value_404;
void* __right_value432 = (void*)0;
void* __right_value433 = (void*)0;
struct CVALUE* come_value_405;
void* __right_value434 = (void*)0;
char* __dec_obj188;
void* __right_value435 = (void*)0;
struct sType* __dec_obj189;
_Bool __result298__;
    left_403=self->mLeft;
    if(    !node_compile(left_403,info)) {
        return (_Bool)0;
    }
    left_value_404=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    come_value_405=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 658, "CVALUE"))));
    __dec_obj188=come_value_405->c_value;
    come_value_405->c_value=(char*)come_increment_ref_count(xsprintf("(%s)",left_value_404->c_value));
    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=come_value_405->type;
    come_value_405->type=(struct sType*)come_increment_ref_count(sType_clone(left_value_404->type));
    come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_405->var=((void*)0);
    add_come_last_code(info,"%s",come_value_405->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_405));
    __result298__ = (_Bool)1;
    come_call_finalizer3(left_value_404,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_405,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result298__;
}

struct sCastNode* sCastNode_initialize(struct sCastNode* self, struct sType* type, struct sNode* left, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
struct sType* __dec_obj190;
void* __right_value438 = (void*)0;
struct sNode* __dec_obj191;
struct sCastNode* __result299__;
    ((struct sNodeBase*)(__right_value436=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value436,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj190=self->mType;
    self->mType=(struct sType*)come_increment_ref_count(sType_clone(type));
    come_call_finalizer3(__dec_obj190,sType_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj191=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(left));
    if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0, (void*)0); };
    __result299__ = gComeFunResultObject = __result_obj__ = self;
    come_call_finalizer3(self,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

char* sCastNode_kind(struct sCastNode* self){
void* __result_obj__=(void*)0;
void* __right_value439 = (void*)0;
char* __result300__;
    __result300__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value439=__builtin_string("sCastNode")));
    __right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result300__;
}

_Bool sCastNode_compile(struct sCastNode* self, struct sInfo* info){
struct sType* type_406;
struct sNode* left_407;
void* __right_value440 = (void*)0;
struct CVALUE* left_value_408;
void* __right_value441 = (void*)0;
void* __right_value442 = (void*)0;
struct sType* type2_409;
void* __right_value443 = (void*)0;
void* __right_value444 = (void*)0;
struct CVALUE* come_value_410;
void* __right_value445 = (void*)0;
void* __right_value446 = (void*)0;
char* __dec_obj195;
void* __right_value447 = (void*)0;
struct sType* __dec_obj196;
_Bool __result301__;
    type_406=self->mType;
    left_407=self->mLeft;
    if(    !node_compile(left_407,info)) {
        return (_Bool)0;
    }
    left_value_408=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
    dec_stack_ptr(1,info);
    type2_409=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value441=sType_clone(type_406))),info->generics_type,info));
    come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
    come_value_410=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05pre_op.c", 701, "CVALUE"))));
    cast_type(type2_409,left_value_408->type,left_value_408,info);
    __dec_obj195=come_value_410->c_value;
    come_value_410->c_value=(char*)come_increment_ref_count(xsprintf("(%s)%s",((char*)(__right_value445=make_type_name_string(type2_409,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)0))),left_value_408->c_value));
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    __right_value445 = come_decrement_ref_count2(__right_value445, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    __dec_obj196=come_value_410->type;
    come_value_410->type=(struct sType*)come_increment_ref_count(sType_clone(type2_409));
    come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_410->var=((void*)0);
    add_come_last_code(info,"%s",come_value_410->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_410));
    __result301__ = (_Bool)1;
    come_call_finalizer3(left_value_408,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_409,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(come_value_410,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result301__;
}

struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_411;
void* __right_value448 = (void*)0;
struct sBlock* block_412;
void* __right_value449 = (void*)0;
void* __right_value450 = (void*)0;
struct sNode* _inf_value1;
struct sNormalBlock* _inf_obj_value1;
void* __right_value454 = (void*)0;
struct sNode* __result304__;
    sline_real_411=info->sline_real;
    info->sline_real=info->sline;
    block_412=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
    info->sline_real=sline_real_411;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 725, "struct sNode");
    _inf_obj_value1=(struct sNormalBlock*)come_increment_ref_count(((struct sNormalBlock*)(__right_value450=sNormalBlock_initialize((struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "05pre_op.c", 725, "sNormalBlock")),block_412,clang,comma,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNormalBlock_finalize;
    _inf_value1->clone=(void*)sNormalBlock_clone;
    _inf_value1->compile=(void*)sNormalBlock_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNormalBlock_terminated;
    _inf_value1->kind=(void*)sNormalBlock_kind;
    __result304__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value454=_inf_value1));
    come_call_finalizer3(block_412,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value450,sNormalBlock_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value454) { __right_value454 = come_decrement_ref_count2(__right_value454, ((struct sNode*)__right_value454)->finalize, ((struct sNode*)__right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result304__;
}

static void sNormalBlock_finalize(struct sNormalBlock* self){
char* __dec_obj197;
struct sBlock* __dec_obj198;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj197=self->sname;
            __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj198=self->mBlock;
            come_call_finalizer3(__dec_obj198,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNormalBlock* sNormalBlock_clone(struct sNormalBlock* self){
void* __result_obj__=(void*)0;
struct sNormalBlock* __result302__;
void* __right_value451 = (void*)0;
struct sNormalBlock* result_413;
void* __right_value452 = (void*)0;
char* __dec_obj199;
void* __right_value453 = (void*)0;
struct sBlock* __dec_obj200;
struct sNormalBlock* __result303__;
    if(    self==(void*)0) {
        __result302__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result302__;
    }
    result_413=(struct sNormalBlock*)come_increment_ref_count((struct sNormalBlock*)come_calloc(1, sizeof(struct sNormalBlock)*(1), "sNormalBlock_clone", 3, "sNormalBlock"));
    if(    self!=((void*)0)) {
        result_413->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj199=result_413->sname;
        result_413->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj200=result_413->mBlock;
        result_413->mBlock=(struct sBlock*)come_increment_ref_count(sBlock_clone(self->mBlock));
        come_call_finalizer3(__dec_obj200,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_413->clang=self->clang;
    }
    if(    self!=((void*)0)) {
        result_413->comma=self->comma;
    }
    __result303__ = gComeFunResultObject = __result_obj__ = result_413;
    come_call_finalizer3(result_413,sNormalBlock_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value455 = (void*)0;
void* __right_value456 = (void*)0;
void* __right_value457 = (void*)0;
struct sNode* _inf_value2;
struct sLogicalDenial* _inf_obj_value2;
void* __right_value461 = (void*)0;
struct sNode* __result307__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 730, "struct sNode");
    _inf_obj_value2=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value457=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 730, "sLogicalDenial")),(struct sNode*)come_increment_ref_count(sNode_clone(node)),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sLogicalDenial_finalize;
    _inf_value2->clone=(void*)sLogicalDenial_clone;
    _inf_value2->compile=(void*)sLogicalDenial_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sLogicalDenial_kind;
    __result307__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value461=_inf_value2));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value457,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value461) { __right_value461 = come_decrement_ref_count2(__right_value461, ((struct sNode*)__right_value461)->finalize, ((struct sNode*)__right_value461)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value462 = (void*)0;
void* __right_value463 = (void*)0;
struct sNode* _inf_value3;
struct sCastNode* _inf_obj_value3;
void* __right_value468 = (void*)0;
struct sNode* __result310__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 735, "struct sNode");
    _inf_obj_value3=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value463=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 735, "sCastNode")),type,node,info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sCastNode_finalize;
    _inf_value3->clone=(void*)sCastNode_clone;
    _inf_value3->compile=(void*)sCastNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sCastNode_kind;
    __result310__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value468=_inf_value3));
    come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value463,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value468) { __right_value468 = come_decrement_ref_count2(__right_value468, ((struct sNode*)__right_value468)->finalize, ((struct sNode*)__right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result310__;
}

struct sNode* reffence_node(struct sNode* value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
struct sNode* _inf_value4;
struct sRefferenceNode* _inf_obj_value4;
void* __right_value474 = (void*)0;
struct sNode* __result313__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 740, "struct sNode");
    _inf_obj_value4=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value470=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 740, "sRefferenceNode")),(struct sNode*)come_increment_ref_count(value),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sRefferenceNode_finalize;
    _inf_value4->clone=(void*)sRefferenceNode_clone;
    _inf_value4->compile=(void*)sRefferenceNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sRefferenceNode_kind;
    __result313__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value474=_inf_value4));
    if(value) { value = come_decrement_ref_count2(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer3(__right_value470,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value474) { __right_value474 = come_decrement_ref_count2(__right_value474, ((struct sNode*)__right_value474)->finalize, ((struct sNode*)__right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result313__;
}

struct sNode* pre_position_operator(struct sInfo* info){
void* __result_obj__=(void*)0;
_Bool refference_417;
char* p_418;
int sline_419;
void* __right_value475 = (void*)0;
struct sNode* __result314__;
void* __right_value476 = (void*)0;
struct sNode* __result315__;
void* __right_value477 = (void*)0;
struct sNode* __result316__;
void* __right_value478 = (void*)0;
struct sNode* node_420;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct sNode* _inf_value5;
struct sLogicalDenial* _inf_obj_value5;
void* __right_value484 = (void*)0;
struct sNode* __result319__;
void* __right_value485 = (void*)0;
struct sNode* node_422;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct sNode* _inf_value6;
struct sLogicalDenial2* _inf_obj_value6;
void* __right_value491 = (void*)0;
struct sNode* __result322__;
void* __right_value492 = (void*)0;
struct sNode* node_424;
void* __right_value493 = (void*)0;
void* __right_value494 = (void*)0;
struct sNode* _inf_value7;
struct sMinusMinusNode2* _inf_obj_value7;
void* __right_value498 = (void*)0;
struct sNode* __result325__;
void* __right_value499 = (void*)0;
struct sNode* node_426;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
struct sNode* _inf_value8;
struct sMinusNode2* _inf_obj_value8;
void* __right_value505 = (void*)0;
struct sNode* __result328__;
void* __right_value506 = (void*)0;
struct sNode* node_428;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
struct sNode* _inf_value9;
struct sPlusPlusNode2* _inf_obj_value9;
void* __right_value512 = (void*)0;
struct sNode* __result331__;
void* __right_value513 = (void*)0;
struct sNode* node_430;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct sNode* _inf_value10;
struct sComplement* _inf_obj_value10;
void* __right_value519 = (void*)0;
struct sNode* __result334__;
_Bool quote_432;
_Bool no_assign_433;
void* __right_value520 = (void*)0;
struct sNode* value_434;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
struct sNode* _inf_value11;
struct sDerefferenceNode* _inf_obj_value11;
void* __right_value526 = (void*)0;
struct sNode* __result337__;
void* __right_value527 = (void*)0;
struct sNode* value_436;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
struct sNode* _inf_value12;
struct sRefferenceNode* _inf_obj_value12;
void* __right_value533 = (void*)0;
struct sNode* __result340__;
void* __right_value534 = (void*)0;
struct sNode* value_438;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
struct sNode* _inf_value13;
struct sReverseNode* _inf_obj_value13;
void* __right_value540 = (void*)0;
struct sNode* __result343__;
_Bool cast_expression_flag_440;
char* p_441;
int sline_442;
void* __right_value541 = (void*)0;
char* word_443;
void* __right_value542 = (void*)0;
char* __dec_obj251;
_Bool tuple_expression_flag_444;
_Bool named_tuple_expression_flag_445;
char* p_446;
int sline_447;
char* p_448;
int sline_449;
void* __right_value543 = (void*)0;
_Bool no_comma_450;
_Bool no_output_err_451;
_Bool no_output_come_code_452;
void* __right_value544 = (void*)0;
struct sNode* node_453;
struct sNode* node2_454;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct list$1sNodeph* paren_block_455;
void* __right_value547 = (void*)0;
struct sNode* node2_456;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
struct sNode* _inf_value14;
struct sParenBlockNode* _inf_obj_value14;
void* __right_value553 = (void*)0;
struct sNode* node_457;
struct sNode* __result346__;
void* __right_value554 = (void*)0;
struct sNode* node_459;
struct sNode* __result347__;
void* __right_value555 = (void*)0;
struct tuple3$3sTypephcharphbool* multiple_assign_var5 = (void*)0;
struct sType* type_460=0;
char* name_461=0;
_Bool err_462=0;
void* __right_value556 = (void*)0;
struct sNode* node_463;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
struct sNode* _inf_value15;
struct sCastNode* _inf_obj_value15;
void* __right_value563 = (void*)0;
struct sNode* __result350__;
struct sNode* node_465;
_Bool no_assign_466;
_Bool no_comma_467;
void* __right_value564 = (void*)0;
struct sNode* __dec_obj264;
void* __right_value565 = (void*)0;
struct sNode* __dec_obj265;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
struct sNode* _inf_value16;
struct sParenNode* _inf_obj_value16;
void* __right_value571 = (void*)0;
struct sNode* __dec_obj270;
struct sNode* __result353__;
struct sNode* __result354__;
memset(&quote_432, 0, sizeof(_Bool));
node_465 = (void*)0;
    skip_spaces_and_lf(info);
    refference_417=(_Bool)0;
    {
        p_418=info->p;
        sline_419=info->sline;
        if(        *info->p==38&&*(info->p+1)!=38) {
            info->p++;
            skip_spaces_and_lf(info);
            if(            *info->p==34) {
                refference_417=(_Bool)1;
            }
            else if(            xisalpha(*info->p)||*info->p==95) {
                refference_417=(_Bool)1;
            }
            else if(            *info->p==40||*info->p==42) {
                while(*info->p==40||*info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                xisalpha(*info->p)||*info->p==95) {
                    refference_417=(_Bool)1;
                }
            }
        }
        info->p=p_418;
        info->sline=sline_419;
    }
    parse_sharp_v5(info);
    if(    *info->p==123) {
        if(        info->array_initializer) {
            __result314__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value475=parse_array_initializer(info)));
            if(__right_value475) { __right_value475 = come_decrement_ref_count2(__right_value475, ((struct sNode*)__right_value475)->finalize, ((struct sNode*)__right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result314__;
        }
        else if(        info->struct_initializer) {
            __result315__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value476=parse_struct_initializer(info)));
            if(__right_value476) { __right_value476 = come_decrement_ref_count2(__right_value476, ((struct sNode*)__right_value476)->finalize, ((struct sNode*)__right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result315__;
        }
        else {
            __result316__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value477=parse_normal_block((_Bool)0,(_Bool)0,info)));
            if(__right_value477) { __right_value477 = come_decrement_ref_count2(__right_value477, ((struct sNode*)__right_value477)->finalize, ((struct sNode*)__right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result316__;
        }
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        node_420=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 798, "struct sNode");
        _inf_obj_value5=(struct sLogicalDenial*)come_increment_ref_count(((struct sLogicalDenial*)(__right_value480=sLogicalDenial_initialize((struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "05pre_op.c", 798, "sLogicalDenial")),(struct sNode*)come_increment_ref_count(node_420),info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLogicalDenial_finalize;
        _inf_value5->clone=(void*)sLogicalDenial_clone;
        _inf_value5->compile=(void*)sLogicalDenial_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLogicalDenial_kind;
        __result319__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value484=_inf_value5));
        if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value480,sLogicalDenial_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value484) { __right_value484 = come_decrement_ref_count2(__right_value484, ((struct sNode*)__right_value484)->finalize, ((struct sNode*)__right_value484)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result319__;
        if(node_420) { node_420 = come_decrement_ref_count2(node_420, ((struct sNode*)node_420)->finalize, ((struct sNode*)node_420)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==33&&*(info->p+1)==33) {
        info->p++;
        skip_spaces_and_lf(info);
        node_422=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 806, "struct sNode");
        _inf_obj_value6=(struct sLogicalDenial2*)come_increment_ref_count(((struct sLogicalDenial2*)(__right_value487=sLogicalDenial2_initialize((struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc(1, sizeof(struct sLogicalDenial2)*(1), "05pre_op.c", 806, "sLogicalDenial2")),(struct sNode*)come_increment_ref_count(node_422),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sLogicalDenial2_finalize;
        _inf_value6->clone=(void*)sLogicalDenial2_clone;
        _inf_value6->compile=(void*)sLogicalDenial2_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sLogicalDenial2_kind;
        __result322__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value491=_inf_value6));
        if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value487,sLogicalDenial2_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value491) { __right_value491 = come_decrement_ref_count2(__right_value491, ((struct sNode*)__right_value491)->finalize, ((struct sNode*)__right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result322__;
        if(node_422) { node_422 = come_decrement_ref_count2(node_422, ((struct sNode*)node_422)->finalize, ((struct sNode*)node_422)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==45&&*(info->p+1)==45) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_424=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 814, "struct sNode");
        _inf_obj_value7=(struct sMinusMinusNode2*)come_increment_ref_count(((struct sMinusMinusNode2*)(__right_value494=sMinusMinusNode2_initialize((struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "05pre_op.c", 814, "sMinusMinusNode2")),(struct sNode*)come_increment_ref_count(node_424),info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sMinusMinusNode2_finalize;
        _inf_value7->clone=(void*)sMinusMinusNode2_clone;
        _inf_value7->compile=(void*)sMinusMinusNode2_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sMinusMinusNode2_kind;
        __result325__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value498=_inf_value7));
        if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value494,sMinusMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value498) { __right_value498 = come_decrement_ref_count2(__right_value498, ((struct sNode*)__right_value498)->finalize, ((struct sNode*)__right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result325__;
        if(node_424) { node_424 = come_decrement_ref_count2(node_424, ((struct sNode*)node_424)->finalize, ((struct sNode*)node_424)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==45&&!xisdigit(*(info->p+1))) {
        info->p++;
        skip_spaces_and_lf(info);
        node_426=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 822, "struct sNode");
        _inf_obj_value8=(struct sMinusNode2*)come_increment_ref_count(((struct sMinusNode2*)(__right_value501=sMinusNode2_initialize((struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "05pre_op.c", 822, "sMinusNode2")),(struct sNode*)come_increment_ref_count(node_426),info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sMinusNode2_finalize;
        _inf_value8->clone=(void*)sMinusNode2_clone;
        _inf_value8->compile=(void*)sMinusNode2_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sMinusNode2_kind;
        __result328__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value505=_inf_value8));
        if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value501,sMinusNode2_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value505) { __right_value505 = come_decrement_ref_count2(__right_value505, ((struct sNode*)__right_value505)->finalize, ((struct sNode*)__right_value505)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result328__;
        if(node_426) { node_426 = come_decrement_ref_count2(node_426, ((struct sNode*)node_426)->finalize, ((struct sNode*)node_426)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==43&&*(info->p+1)==43) {
        info->p+=2;
        skip_spaces_and_lf(info);
        node_428=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 830, "struct sNode");
        _inf_obj_value9=(struct sPlusPlusNode2*)come_increment_ref_count(((struct sPlusPlusNode2*)(__right_value508=sPlusPlusNode2_initialize((struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "05pre_op.c", 830, "sPlusPlusNode2")),(struct sNode*)come_increment_ref_count(node_428),info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sPlusPlusNode2_finalize;
        _inf_value9->clone=(void*)sPlusPlusNode2_clone;
        _inf_value9->compile=(void*)sPlusPlusNode2_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sPlusPlusNode2_kind;
        __result331__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value512=_inf_value9));
        if(node_428) { node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value508,sPlusPlusNode2_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value512) { __right_value512 = come_decrement_ref_count2(__right_value512, ((struct sNode*)__right_value512)->finalize, ((struct sNode*)__right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result331__;
        if(node_428) { node_428 = come_decrement_ref_count2(node_428, ((struct sNode*)node_428)->finalize, ((struct sNode*)node_428)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==126) {
        info->p++;
        skip_spaces_and_lf(info);
        node_430=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 838, "struct sNode");
        _inf_obj_value10=(struct sComplement*)come_increment_ref_count(((struct sComplement*)(__right_value515=sComplement_initialize((struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "05pre_op.c", 838, "sComplement")),(struct sNode*)come_increment_ref_count(node_430),info))));
        _inf_value10->_protocol_obj=_inf_obj_value10;
        _inf_value10->finalize=(void*)sComplement_finalize;
        _inf_value10->clone=(void*)sComplement_clone;
        _inf_value10->compile=(void*)sComplement_compile;
        _inf_value10->sline=(void*)sNodeBase_sline;
        _inf_value10->sline_real=(void*)sNodeBase_sline_real;
        _inf_value10->sname=(void*)sNodeBase_sname;
        _inf_value10->terminated=(void*)sNodeBase_terminated;
        _inf_value10->kind=(void*)sComplement_kind;
        __result334__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value519=_inf_value10));
        if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value515,sComplement_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value519) { __right_value519 = come_decrement_ref_count2(__right_value519, ((struct sNode*)__right_value519)->finalize, ((struct sNode*)__right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result334__;
        if(node_430) { node_430 = come_decrement_ref_count2(node_430, ((struct sNode*)node_430)->finalize, ((struct sNode*)node_430)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==92&&*(info->p+1)==42)||*info->p==42) {
        if(        *info->p==92) {
            info->p+=2;
            skip_spaces_and_lf(info);
            quote_432=(_Bool)1;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            quote_432=(_Bool)0;
        }
        no_assign_433=info->no_assign;
        info->no_assign=(_Bool)1;
        value_434=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        info->no_assign=no_assign_433;
        _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 858, "struct sNode");
        _inf_obj_value11=(struct sDerefferenceNode*)come_increment_ref_count(((struct sDerefferenceNode*)(__right_value522=sDerefferenceNode_initialize((struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "05pre_op.c", 858, "sDerefferenceNode")),(struct sNode*)come_increment_ref_count(value_434),quote_432,info))));
        _inf_value11->_protocol_obj=_inf_obj_value11;
        _inf_value11->finalize=(void*)sDerefferenceNode_finalize;
        _inf_value11->clone=(void*)sDerefferenceNode_clone;
        _inf_value11->compile=(void*)sDerefferenceNode_compile;
        _inf_value11->sline=(void*)sNodeBase_sline;
        _inf_value11->sline_real=(void*)sNodeBase_sline_real;
        _inf_value11->sname=(void*)sNodeBase_sname;
        _inf_value11->terminated=(void*)sNodeBase_terminated;
        _inf_value11->kind=(void*)sDerefferenceNode_kind;
        __result337__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value526=_inf_value11));
        if(value_434) { value_434 = come_decrement_ref_count2(value_434, ((struct sNode*)value_434)->finalize, ((struct sNode*)value_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value522,sDerefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value526) { __right_value526 = come_decrement_ref_count2(__right_value526, ((struct sNode*)__right_value526)->finalize, ((struct sNode*)__right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result337__;
        if(value_434) { value_434 = come_decrement_ref_count2(value_434, ((struct sNode*)value_434)->finalize, ((struct sNode*)value_434)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==38&&refference_417) {
        info->p++;
        skip_spaces_and_lf(info);
        value_436=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 866, "struct sNode");
        _inf_obj_value12=(struct sRefferenceNode*)come_increment_ref_count(((struct sRefferenceNode*)(__right_value529=sRefferenceNode_initialize((struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "05pre_op.c", 866, "sRefferenceNode")),(struct sNode*)come_increment_ref_count(value_436),info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sRefferenceNode_finalize;
        _inf_value12->clone=(void*)sRefferenceNode_clone;
        _inf_value12->compile=(void*)sRefferenceNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sRefferenceNode_kind;
        __result340__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value533=_inf_value12));
        if(value_436) { value_436 = come_decrement_ref_count2(value_436, ((struct sNode*)value_436)->finalize, ((struct sNode*)value_436)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value529,sRefferenceNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value533) { __right_value533 = come_decrement_ref_count2(__right_value533, ((struct sNode*)__right_value533)->finalize, ((struct sNode*)__right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result340__;
        if(value_436) { value_436 = come_decrement_ref_count2(value_436, ((struct sNode*)value_436)->finalize, ((struct sNode*)value_436)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==33&&*(info->p+1)!=33&&*(info->p+1)!=123) {
        info->p++;
        skip_spaces_and_lf(info);
        value_438=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 874, "struct sNode");
        _inf_obj_value13=(struct sReverseNode*)come_increment_ref_count(((struct sReverseNode*)(__right_value536=sReverseNode_initialize((struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "05pre_op.c", 874, "sReverseNode")),(struct sNode*)come_increment_ref_count(value_438),info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sReverseNode_finalize;
        _inf_value13->clone=(void*)sReverseNode_clone;
        _inf_value13->compile=(void*)sReverseNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sReverseNode_kind;
        __result343__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value540=_inf_value13));
        if(value_438) { value_438 = come_decrement_ref_count2(value_438, ((struct sNode*)value_438)->finalize, ((struct sNode*)value_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer3(__right_value536,sReverseNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value540) { __right_value540 = come_decrement_ref_count2(__right_value540, ((struct sNode*)__right_value540)->finalize, ((struct sNode*)__right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result343__;
        if(value_438) { value_438 = come_decrement_ref_count2(value_438, ((struct sNode*)value_438)->finalize, ((struct sNode*)value_438)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==40) {
        info->p++;
        skip_spaces_and_lf(info);
        cast_expression_flag_440=(_Bool)0;
        {
            p_441=info->p;
            sline_442=info->sline;
            parse_sharp_v5(info);
            word_443=(char*)come_increment_ref_count(__builtin_string(""));
            if(            xisalpha(*info->p)||*info->p==95) {
                __dec_obj251=word_443;
                word_443=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            parse_sharp_v5(info);
            if(            is_type_name(word_443,info)) {
                cast_expression_flag_440=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_441;
            info->sline=sline_442;
            word_443 = come_decrement_ref_count2(word_443, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        tuple_expression_flag_444=(_Bool)0;
        named_tuple_expression_flag_445=(_Bool)0;
        if(        !gComeC) {
            p_446=info->p;
            sline_447=info->sline;
            parse_sharp_v5(info);
            {
                p_448=info->p;
                sline_449=info->sline;
                if(                *info->p==95||xisalpha(*info->p)) {
                    ((char*)(__right_value543=parse_word(info)));
                    __right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                if(                *info->p==58) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    named_tuple_expression_flag_445=(_Bool)1;
                }
                else {
                    info->p=p_448;
                    info->sline=sline_449;
                }
            }
            no_comma_450=info->no_comma;
            info->no_comma=(_Bool)1;
            no_output_err_451=info->no_output_err;
            info->no_output_err=(_Bool)1;
            no_output_come_code_452=info->no_output_come_code;
            info->no_output_come_code=(_Bool)1;
            node_453=(struct sNode*)come_increment_ref_count(expression_v13(info));
            node2_454=(struct sNode*)come_increment_ref_count(node_453);
            parse_sharp_v5(info);
            info->no_comma=no_comma_450;
            info->no_output_err=no_output_err_451;
            info->no_output_come_code=no_output_come_code_452;
            if(            *info->p==44) {
                tuple_expression_flag_444=(_Bool)1;
            }
            parse_sharp_v5(info);
            info->p=p_446;
            info->sline=sline_447;
            if(node_453) { node_453 = come_decrement_ref_count2(node_453, ((struct sNode*)node_453)->finalize, ((struct sNode*)node_453)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node2_454) { node2_454 = come_decrement_ref_count2(node2_454, ((struct sNode*)node2_454)->finalize, ((struct sNode*)node2_454)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        if(        *info->p==123) {
            info->p++;
            skip_spaces_and_lf(info);
            paren_block_455=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "05pre_op.c", 963, "list$1sNodeph"))));
            while((_Bool)1) {
                parse_sharp_v5(info);
                node2_456=(struct sNode*)come_increment_ref_count(expression_v13(info));
                parse_sharp_v5(info);
                list$1sNodeph_add(paren_block_455,(struct sNode*)come_increment_ref_count(node2_456));
                while(*info->p==59) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                if(                *info->p==125) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_456) { node2_456 = come_decrement_ref_count2(node2_456, ((struct sNode*)node2_456)->finalize, ((struct sNode*)node2_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else if(                *info->p==0) {
                    err_msg(info,"invalid source end in paren block");
                    exit(0);
                }
                if(node2_456) { node2_456 = come_decrement_ref_count2(node2_456, ((struct sNode*)node2_456)->finalize, ((struct sNode*)node2_456)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            expected_next_character(41,info);
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 992, "struct sNode");
            _inf_obj_value14=(struct sParenBlockNode*)come_increment_ref_count(((struct sParenBlockNode*)(__right_value549=sParenBlockNode_initialize((struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc(1, sizeof(struct sParenBlockNode)*(1), "05pre_op.c", 992, "sParenBlockNode")),(struct list$1sNodeph*)come_increment_ref_count(paren_block_455),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sParenBlockNode_finalize;
            _inf_value14->clone=(void*)sParenBlockNode_clone;
            _inf_value14->compile=(void*)sParenBlockNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sParenBlockNode_kind;
            node_457=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value549,sParenBlockNode_finalize, 0, 1, 0, 0, __result_obj__);
            parse_sharp_v5(info);
            __result346__ = gComeFunResultObject = __result_obj__ = node_457;
            come_call_finalizer3(paren_block_455,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_457) { node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0, 1, 0, (void*)0); } 
            gComeFunResultObject = (void*)0;
            return __result346__;
            come_call_finalizer3(paren_block_455,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_457) { node_457 = come_decrement_ref_count2(node_457, ((struct sNode*)node_457)->finalize, ((struct sNode*)node_457)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        !gComeC&&tuple_expression_flag_444) {
            parse_sharp_v5(info);
            node_459=(struct sNode*)come_increment_ref_count(parse_tuple(info,named_tuple_expression_flag_445));
            parse_sharp_v5(info);
            __result347__ = gComeFunResultObject = __result_obj__ = node_459;
            if(node_459) { node_459 = come_decrement_ref_count2(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0, 1, 0, (void*)0); } 
            gComeFunResultObject = (void*)0;
            return __result347__;
            if(node_459) { node_459 = come_decrement_ref_count2(node_459, ((struct sNode*)node_459)->finalize, ((struct sNode*)node_459)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        cast_expression_flag_440) {
            parse_sharp_v5(info);
            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(__right_value555=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
            type_460=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
            name_461=(char*)come_increment_ref_count(multiple_assign_var5->v2);
            err_462=multiple_assign_var5->v3;
            come_call_finalizer3(__right_value555,tuple3$3sTypephcharphboolp_finalize, 0, 1, 0, 0, __result_obj__);
            if(            !err_462) {
                printf("%s %d: parse_type failed\n",info->sname,info->sline);
                exit(2);
            }
            parse_sharp_v5(info);
            expected_next_character(41,info);
            parse_sharp_v5(info);
            node_463=(struct sNode*)come_increment_ref_count(expression_node_v99(info));
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 1022, "struct sNode");
            _inf_obj_value15=(struct sCastNode*)come_increment_ref_count(((struct sCastNode*)(__right_value558=sCastNode_initialize((struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "05pre_op.c", 1022, "sCastNode")),type_460,node_463,info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sCastNode_finalize;
            _inf_value15->clone=(void*)sCastNode_clone;
            _inf_value15->compile=(void*)sCastNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sCastNode_kind;
            __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value563=_inf_value15));
            come_call_finalizer3(type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer3(__right_value558,sCastNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value563) { __right_value563 = come_decrement_ref_count2(__right_value563, ((struct sNode*)__right_value563)->finalize, ((struct sNode*)__right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result350__;
            come_call_finalizer3(type_460,sType_finalize, 0, 0, 0, 0, (void*)0);
            name_461 = come_decrement_ref_count2(name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_463) { node_463 = come_decrement_ref_count2(node_463, ((struct sNode*)node_463)->finalize, ((struct sNode*)node_463)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            no_assign_466=info->no_assign;
            info->no_assign=(_Bool)0;
            if(            gComeC&&info->in_fun_param) {
                no_comma_467=info->no_comma;
                info->no_comma=(_Bool)0;
                parse_sharp_v5(info);
                __dec_obj264=node_465;
                node_465=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); };
                parse_sharp_v5(info);
                info->no_comma=no_comma_467;
            }
            else {
                parse_sharp_v5(info);
                __dec_obj265=node_465;
                node_465=(struct sNode*)come_increment_ref_count(expression_v13(info));
                if(__dec_obj265) { __dec_obj265 = come_decrement_ref_count2(__dec_obj265, ((struct sNode*)__dec_obj265)->finalize, ((struct sNode*)__dec_obj265)->_protocol_obj, 0,0,0, (void*)0); };
                parse_sharp_v5(info);
            }
            info->no_assign=no_assign_466;
            expected_next_character(41,info);
            parse_sharp_v5(info);
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05pre_op.c", 1048, "struct sNode");
            _inf_obj_value16=(struct sParenNode*)come_increment_ref_count(((struct sParenNode*)(__right_value567=sParenNode_initialize((struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "05pre_op.c", 1048, "sParenNode")),node_465,info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sParenNode_finalize;
            _inf_value16->clone=(void*)sParenNode_clone;
            _inf_value16->compile=(void*)sParenNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sParenNode_kind;
            __dec_obj270=node_465;
            node_465=(struct sNode*)come_increment_ref_count(_inf_value16);
            if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value567,sParenNode_finalize, 0, 1, 0, 0, __result_obj__);
            __result353__ = gComeFunResultObject = __result_obj__ = node_465;
            if(node_465) { node_465 = come_decrement_ref_count2(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0, 1, 0, (void*)0); } 
            gComeFunResultObject = (void*)0;
            return __result353__;
            if(node_465) { node_465 = come_decrement_ref_count2(node_465, ((struct sNode*)node_465)->finalize, ((struct sNode*)node_465)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    else {
        __result354__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
}

static void sLogicalDenial_finalize(struct sLogicalDenial* self){
char* __dec_obj215;
struct sNode* __dec_obj216;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj215=self->sname;
            __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj216=self->value;
            if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLogicalDenial* sLogicalDenial_clone(struct sLogicalDenial* self){
void* __result_obj__=(void*)0;
struct sLogicalDenial* __result317__;
void* __right_value481 = (void*)0;
struct sLogicalDenial* result_421;
void* __right_value482 = (void*)0;
char* __dec_obj217;
void* __right_value483 = (void*)0;
struct sNode* __dec_obj218;
struct sLogicalDenial* __result318__;
    if(    self==(void*)0) {
        __result317__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result317__;
    }
    result_421=(struct sLogicalDenial*)come_increment_ref_count((struct sLogicalDenial*)come_calloc(1, sizeof(struct sLogicalDenial)*(1), "sLogicalDenial_clone", 3, "sLogicalDenial"));
    if(    self!=((void*)0)) {
        result_421->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj217=result_421->sname;
        result_421->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_421->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj218=result_421->value;
        result_421->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result318__ = gComeFunResultObject = __result_obj__ = result_421;
    come_call_finalizer3(result_421,sLogicalDenial_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result318__;
}

static void sLogicalDenial2_finalize(struct sLogicalDenial2* self){
char* __dec_obj219;
struct sNode* __dec_obj220;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj219=self->sname;
            __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj220=self->value;
            if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sLogicalDenial2* sLogicalDenial2_clone(struct sLogicalDenial2* self){
void* __result_obj__=(void*)0;
struct sLogicalDenial2* __result320__;
void* __right_value488 = (void*)0;
struct sLogicalDenial2* result_423;
void* __right_value489 = (void*)0;
char* __dec_obj221;
void* __right_value490 = (void*)0;
struct sNode* __dec_obj222;
struct sLogicalDenial2* __result321__;
    if(    self==(void*)0) {
        __result320__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result320__;
    }
    result_423=(struct sLogicalDenial2*)come_increment_ref_count((struct sLogicalDenial2*)come_calloc(1, sizeof(struct sLogicalDenial2)*(1), "sLogicalDenial2_clone", 3, "sLogicalDenial2"));
    if(    self!=((void*)0)) {
        result_423->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj221=result_423->sname;
        result_423->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_423->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj222=result_423->value;
        result_423->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result321__ = gComeFunResultObject = __result_obj__ = result_423;
    come_call_finalizer3(result_423,sLogicalDenial2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

static void sMinusMinusNode2_finalize(struct sMinusMinusNode2* self){
char* __dec_obj223;
struct sNode* __dec_obj224;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj223=self->sname;
            __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj224=self->value;
            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMinusMinusNode2* sMinusMinusNode2_clone(struct sMinusMinusNode2* self){
void* __result_obj__=(void*)0;
struct sMinusMinusNode2* __result323__;
void* __right_value495 = (void*)0;
struct sMinusMinusNode2* result_425;
void* __right_value496 = (void*)0;
char* __dec_obj225;
void* __right_value497 = (void*)0;
struct sNode* __dec_obj226;
struct sMinusMinusNode2* __result324__;
    if(    self==(void*)0) {
        __result323__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result323__;
    }
    result_425=(struct sMinusMinusNode2*)come_increment_ref_count((struct sMinusMinusNode2*)come_calloc(1, sizeof(struct sMinusMinusNode2)*(1), "sMinusMinusNode2_clone", 3, "sMinusMinusNode2"));
    if(    self!=((void*)0)) {
        result_425->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj225=result_425->sname;
        result_425->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_425->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj226=result_425->value;
        result_425->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result324__ = gComeFunResultObject = __result_obj__ = result_425;
    come_call_finalizer3(result_425,sMinusMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result324__;
}

static void sMinusNode2_finalize(struct sMinusNode2* self){
char* __dec_obj227;
struct sNode* __dec_obj228;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj227=self->sname;
            __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj228=self->value;
            if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sMinusNode2* sMinusNode2_clone(struct sMinusNode2* self){
void* __result_obj__=(void*)0;
struct sMinusNode2* __result326__;
void* __right_value502 = (void*)0;
struct sMinusNode2* result_427;
void* __right_value503 = (void*)0;
char* __dec_obj229;
void* __right_value504 = (void*)0;
struct sNode* __dec_obj230;
struct sMinusNode2* __result327__;
    if(    self==(void*)0) {
        __result326__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result326__;
    }
    result_427=(struct sMinusNode2*)come_increment_ref_count((struct sMinusNode2*)come_calloc(1, sizeof(struct sMinusNode2)*(1), "sMinusNode2_clone", 3, "sMinusNode2"));
    if(    self!=((void*)0)) {
        result_427->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj229=result_427->sname;
        result_427->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_427->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj230=result_427->value;
        result_427->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result327__ = gComeFunResultObject = __result_obj__ = result_427;
    come_call_finalizer3(result_427,sMinusNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result327__;
}

static void sPlusPlusNode2_finalize(struct sPlusPlusNode2* self){
char* __dec_obj231;
struct sNode* __dec_obj232;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj231=self->sname;
            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj232=self->value;
            if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sPlusPlusNode2* sPlusPlusNode2_clone(struct sPlusPlusNode2* self){
void* __result_obj__=(void*)0;
struct sPlusPlusNode2* __result329__;
void* __right_value509 = (void*)0;
struct sPlusPlusNode2* result_429;
void* __right_value510 = (void*)0;
char* __dec_obj233;
void* __right_value511 = (void*)0;
struct sNode* __dec_obj234;
struct sPlusPlusNode2* __result330__;
    if(    self==(void*)0) {
        __result329__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result329__;
    }
    result_429=(struct sPlusPlusNode2*)come_increment_ref_count((struct sPlusPlusNode2*)come_calloc(1, sizeof(struct sPlusPlusNode2)*(1), "sPlusPlusNode2_clone", 3, "sPlusPlusNode2"));
    if(    self!=((void*)0)) {
        result_429->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj233=result_429->sname;
        result_429->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_429->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj234=result_429->value;
        result_429->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result330__ = gComeFunResultObject = __result_obj__ = result_429;
    come_call_finalizer3(result_429,sPlusPlusNode2_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result330__;
}

static void sComplement_finalize(struct sComplement* self){
char* __dec_obj235;
struct sNode* __dec_obj236;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj235=self->sname;
            __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj236=self->value;
            if(__dec_obj236) { __dec_obj236 = come_decrement_ref_count2(__dec_obj236, ((struct sNode*)__dec_obj236)->finalize, ((struct sNode*)__dec_obj236)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sComplement* sComplement_clone(struct sComplement* self){
void* __result_obj__=(void*)0;
struct sComplement* __result332__;
void* __right_value516 = (void*)0;
struct sComplement* result_431;
void* __right_value517 = (void*)0;
char* __dec_obj237;
void* __right_value518 = (void*)0;
struct sNode* __dec_obj238;
struct sComplement* __result333__;
    if(    self==(void*)0) {
        __result332__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result332__;
    }
    result_431=(struct sComplement*)come_increment_ref_count((struct sComplement*)come_calloc(1, sizeof(struct sComplement)*(1), "sComplement_clone", 3, "sComplement"));
    if(    self!=((void*)0)) {
        result_431->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj237=result_431->sname;
        result_431->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_431->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj238=result_431->value;
        result_431->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj238) { __dec_obj238 = come_decrement_ref_count2(__dec_obj238, ((struct sNode*)__dec_obj238)->finalize, ((struct sNode*)__dec_obj238)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result333__ = gComeFunResultObject = __result_obj__ = result_431;
    come_call_finalizer3(result_431,sComplement_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result333__;
}

static void sDerefferenceNode_finalize(struct sDerefferenceNode* self){
char* __dec_obj239;
struct sNode* __dec_obj240;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj239=self->sname;
            __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj240=self->value;
            if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sDerefferenceNode* sDerefferenceNode_clone(struct sDerefferenceNode* self){
void* __result_obj__=(void*)0;
struct sDerefferenceNode* __result335__;
void* __right_value523 = (void*)0;
struct sDerefferenceNode* result_435;
void* __right_value524 = (void*)0;
char* __dec_obj241;
void* __right_value525 = (void*)0;
struct sNode* __dec_obj242;
struct sDerefferenceNode* __result336__;
    if(    self==(void*)0) {
        __result335__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result335__;
    }
    result_435=(struct sDerefferenceNode*)come_increment_ref_count((struct sDerefferenceNode*)come_calloc(1, sizeof(struct sDerefferenceNode)*(1), "sDerefferenceNode_clone", 3, "sDerefferenceNode"));
    if(    self!=((void*)0)) {
        result_435->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj241=result_435->sname;
        result_435->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_435->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj242=result_435->value;
        result_435->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_435->mQuote=self->mQuote;
    }
    __result336__ = gComeFunResultObject = __result_obj__ = result_435;
    come_call_finalizer3(result_435,sDerefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result336__;
}

static void sRefferenceNode_finalize(struct sRefferenceNode* self){
char* __dec_obj243;
struct sNode* __dec_obj244;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj243=self->sname;
            __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj244=self->value;
            if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sRefferenceNode* sRefferenceNode_clone(struct sRefferenceNode* self){
void* __result_obj__=(void*)0;
struct sRefferenceNode* __result338__;
void* __right_value530 = (void*)0;
struct sRefferenceNode* result_437;
void* __right_value531 = (void*)0;
char* __dec_obj245;
void* __right_value532 = (void*)0;
struct sNode* __dec_obj246;
struct sRefferenceNode* __result339__;
    if(    self==(void*)0) {
        __result338__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result338__;
    }
    result_437=(struct sRefferenceNode*)come_increment_ref_count((struct sRefferenceNode*)come_calloc(1, sizeof(struct sRefferenceNode)*(1), "sRefferenceNode_clone", 3, "sRefferenceNode"));
    if(    self!=((void*)0)) {
        result_437->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj245=result_437->sname;
        result_437->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_437->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj246=result_437->value;
        result_437->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result339__ = gComeFunResultObject = __result_obj__ = result_437;
    come_call_finalizer3(result_437,sRefferenceNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result339__;
}

static void sReverseNode_finalize(struct sReverseNode* self){
char* __dec_obj247;
struct sNode* __dec_obj248;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj247=self->sname;
            __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj248=self->value;
            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->value) { self->value = come_decrement_ref_count2(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sReverseNode* sReverseNode_clone(struct sReverseNode* self){
void* __result_obj__=(void*)0;
struct sReverseNode* __result341__;
void* __right_value537 = (void*)0;
struct sReverseNode* result_439;
void* __right_value538 = (void*)0;
char* __dec_obj249;
void* __right_value539 = (void*)0;
struct sNode* __dec_obj250;
struct sReverseNode* __result342__;
    if(    self==(void*)0) {
        __result341__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result341__;
    }
    result_439=(struct sReverseNode*)come_increment_ref_count((struct sReverseNode*)come_calloc(1, sizeof(struct sReverseNode)*(1), "sReverseNode_clone", 3, "sReverseNode"));
    if(    self!=((void*)0)) {
        result_439->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj249=result_439->sname;
        result_439->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_439->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj250=result_439->value;
        result_439->value=(struct sNode*)come_increment_ref_count(sNode_clone(self->value));
        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result342__ = gComeFunResultObject = __result_obj__ = result_439;
    come_call_finalizer3(result_439,sReverseNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result342__;
}

static void sParenBlockNode_finalize(struct sParenBlockNode* self){
char* __dec_obj252;
struct list$1sNodeph* __dec_obj253;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj252=self->sname;
            __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        if(        self->paren_block==gComeFunResultObject) {
            __dec_obj253=self->paren_block;
            come_call_finalizer3(__dec_obj253,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->paren_block,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sParenBlockNode* sParenBlockNode_clone(struct sParenBlockNode* self){
void* __result_obj__=(void*)0;
struct sParenBlockNode* __result344__;
void* __right_value550 = (void*)0;
struct sParenBlockNode* result_458;
void* __right_value551 = (void*)0;
char* __dec_obj254;
void* __right_value552 = (void*)0;
struct list$1sNodeph* __dec_obj255;
struct sParenBlockNode* __result345__;
    if(    self==(void*)0) {
        __result344__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result344__;
    }
    result_458=(struct sParenBlockNode*)come_increment_ref_count((struct sParenBlockNode*)come_calloc(1, sizeof(struct sParenBlockNode)*(1), "sParenBlockNode_clone", 3, "sParenBlockNode"));
    if(    self!=((void*)0)) {
        result_458->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj254=result_458->sname;
        result_458->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_458->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->paren_block!=((void*)0)) {
        __dec_obj255=result_458->paren_block;
        result_458->paren_block=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->paren_block));
        come_call_finalizer3(__dec_obj255,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result345__ = gComeFunResultObject = __result_obj__ = result_458;
    come_call_finalizer3(result_458,sParenBlockNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result345__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
struct sType* __dec_obj256;
char* __dec_obj257;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj256=self->v1;
            come_call_finalizer3(__dec_obj256,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj257=self->v2;
            __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sCastNode_finalize(struct sCastNode* self){
char* __dec_obj258;
struct sType* __dec_obj259;
struct sNode* __dec_obj260;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj258=self->sname;
            __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        if(        self->mType==gComeFunResultObject) {
            __dec_obj259=self->mType;
            come_call_finalizer3(__dec_obj259,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj260=self->mLeft;
            if(__dec_obj260) { __dec_obj260 = come_decrement_ref_count2(__dec_obj260, ((struct sNode*)__dec_obj260)->finalize, ((struct sNode*)__dec_obj260)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sCastNode* sCastNode_clone(struct sCastNode* self){
void* __result_obj__=(void*)0;
struct sCastNode* __result348__;
void* __right_value559 = (void*)0;
struct sCastNode* result_464;
void* __right_value560 = (void*)0;
char* __dec_obj261;
void* __right_value561 = (void*)0;
struct sType* __dec_obj262;
void* __right_value562 = (void*)0;
struct sNode* __dec_obj263;
struct sCastNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_464=(struct sCastNode*)come_increment_ref_count((struct sCastNode*)come_calloc(1, sizeof(struct sCastNode)*(1), "sCastNode_clone", 3, "sCastNode"));
    if(    self!=((void*)0)) {
        result_464->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj261=result_464->sname;
        result_464->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_464->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj262=result_464->mType;
        result_464->mType=(struct sType*)come_increment_ref_count(sType_clone(self->mType));
        come_call_finalizer3(__dec_obj262,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj263=result_464->mLeft;
        result_464->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_464;
    come_call_finalizer3(result_464,sCastNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sParenNode_finalize(struct sParenNode* self){
char* __dec_obj266;
struct sNode* __dec_obj267;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj266=self->sname;
            __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        if(        self->mLeft==gComeFunResultObject) {
            __dec_obj267=self->mLeft;
            if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static struct sParenNode* sParenNode_clone(struct sParenNode* self){
void* __result_obj__=(void*)0;
struct sParenNode* __result351__;
void* __right_value568 = (void*)0;
struct sParenNode* result_468;
void* __right_value569 = (void*)0;
char* __dec_obj268;
void* __right_value570 = (void*)0;
struct sNode* __dec_obj269;
struct sParenNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_468=(struct sParenNode*)come_increment_ref_count((struct sParenNode*)come_calloc(1, sizeof(struct sParenNode)*(1), "sParenNode_clone", 3, "sParenNode"));
    if(    self!=((void*)0)) {
        result_468->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj268=result_468->sname;
        result_468->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_468->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mLeft!=((void*)0)) {
        __dec_obj269=result_468->mLeft;
        result_468->mLeft=(struct sNode*)come_increment_ref_count(sNode_clone(self->mLeft));
        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_468;
    come_call_finalizer3(result_468,sParenNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value572 = (void*)0;
struct sNode* node_469;
void* __right_value573 = (void*)0;
struct sNode* __result355__;
struct sNode* __result356__;
    node_469=(struct sNode*)come_increment_ref_count(pre_position_operator(info));
    if(    node_469==((void*)0)) {
        __result355__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value573=expression_node_v97(info)));
        if(node_469) { node_469 = come_decrement_ref_count2(node_469, ((struct sNode*)node_469)->finalize, ((struct sNode*)node_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
        if(__right_value573) { __right_value573 = come_decrement_ref_count2(__right_value573, ((struct sNode*)__right_value573)->finalize, ((struct sNode*)__right_value573)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result355__;
    }
    else {
        __result356__ = gComeFunResultObject = __result_obj__ = node_469;
        if(node_469) { node_469 = come_decrement_ref_count2(node_469, ((struct sNode*)node_469)->finalize, ((struct sNode*)node_469)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result356__;
    }
    if(node_469) { node_469 = come_decrement_ref_count2(node_469, ((struct sNode*)node_469)->finalize, ((struct sNode*)node_469)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

