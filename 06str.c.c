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
struct sStrNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
};

struct sBufferNode
{
    int sline;
    char* sname;
    int sline_real;
    struct buffer* value;
    unsigned long  int size;
};

struct sSStringNode
{
    int sline;
    char* sname;
    int sline_real;
    char* value;
    struct list$1sNodeph* exps;
};

struct sCharNode
{
    int sline;
    char* sname;
    int sline_real;
    int value;
};

struct sWCharNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int value;
    _Bool quote;
};

struct sWStringNode
{
    int sline;
    char* sname;
    int sline_real;
    unsigned int* value;
};

struct sRegexNode
{
    int sline;
    char* sname;
    int sline_real;
    char* str;
    _Bool global;
    _Bool ignore_case;
};

struct sListNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* list_elements;
};

struct sTupleNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1tuple2$2charphsNodephph* tuple_elements;
};

struct sSomeNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sNullReturnValue
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullReturnValueOfException
{
    int sline;
    char* sname;
    int sline_real;
};

struct sNullValue
{
    int sline;
    char* sname;
    int sline_real;
    struct sType* type;
};

struct sNoneNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* tuple_elements;
};

struct sMapNode
{
    int sline;
    char* sname;
    int sline_real;
    struct list$1sNodeph* map_key_elements;
    struct list$1sNodeph* map_elements;
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
struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info);
char* sStrNode_kind(struct sStrNode* self);
_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sType_finalize(struct sType* self);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list$1sNodeph_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list$1charph_finalize(struct list$1charph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info);
char* sBufferNode_kind(struct sBufferNode* self);
_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info);
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
struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info);
char* sSStringNode_kind(struct sSStringNode* self);
_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info);
static int list$1sNodeph_length(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self);
static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self);
static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2);
struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info);
char* sCharNode_kind(struct sCharNode* self);
_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info);
struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info);
char* sWCharNode_kind(struct sWCharNode* self);
_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info);
struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info);
char* sWStringNode_kind(struct sWStringNode* self);
_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info);
struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info);
char* sRegexNode_kind(struct sRegexNode* self);
_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info);
static void sRegexNode_finalize(struct sRegexNode* self);
struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info);
char* sListNode_kind(struct sListNode* self);
_Bool sListNode_compile(struct sListNode* self, struct sInfo* info);
static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self);
static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item);
static int list$1CVALUEph_length(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self);
static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self);
static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position);
static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item);
static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info);
char* sTupleNode_kind(struct sTupleNode* self);
_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info);
static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self);
static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self);
static _Bool list$1sTypeph_end(struct list$1sTypeph* self);
static struct sType* list$1sTypeph_next(struct list$1sTypeph* self);
struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sSomeNode_kind(struct sSomeNode* self);
_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info);
struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info);
char* sNullReturnValue_kind(struct sNullReturnValue* self);
_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info);
struct sNode* create_null_return_value(struct sInfo* info);
static void sNullReturnValue_finalize(struct sNullReturnValue* self);
static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self);
struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info);
char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self);
_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info);
struct sNode* create_null_return_value_of_exception(struct sInfo* info);
static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self);
static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self);
struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info);
char* sNullValue_kind(struct sNullValue* self);
_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info);
struct sNode* create_null_value(struct sType* type, struct sInfo* info);
static void sNullValue_finalize(struct sNullValue* self);
static struct sNullValue* sNullValue_clone(struct sNullValue* self);
struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info);
char* sNoneNode_kind(struct sNoneNode* self);
_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info);
struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info);
char* sMapNode_kind(struct sMapNode* self);
_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info);
static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position);
struct sNode* expression_node_v96(struct sInfo* info);
static void sBufferNode_finalize(struct sBufferNode* self);
static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self);
static void sStrNode_finalize(struct sStrNode* self);
static struct sStrNode* sStrNode_clone(struct sStrNode* self);
static void sCharNode_finalize(struct sCharNode* self);
static struct sCharNode* sCharNode_clone(struct sCharNode* self);
static void sWCharNode_finalize(struct sWCharNode* self);
static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self);
static void sWStringNode_finalize(struct sWStringNode* self);
static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self);
static void sSStringNode_finalize(struct sSStringNode* self);
static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self);
static void sMapNode_finalize(struct sMapNode* self);
static struct sMapNode* sMapNode_clone(struct sMapNode* self);
static void sListNode_finalize(struct sListNode* self);
static struct sListNode* sListNode_clone(struct sListNode* self);
struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item);
static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self);
static void sTupleNode_finalize(struct sTupleNode* self);
static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self);
static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self);
static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self);
static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self);
struct sNode* create_some(struct sNode* exp, struct sInfo* info);
struct sNode* parse_some(struct sInfo* info);
static void sSomeNode_finalize(struct sSomeNode* self);
static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self);
struct sNode* parse_none(struct sInfo* info);
static void sNoneNode_finalize(struct sNoneNode* self);
static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self);
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
    result_108=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3599, "buffer"))));
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
    result_109=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3606, "buffer"))));
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
    result_111=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3615, "buffer"))));
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
    result_112=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3622, "buffer"))));
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
    result_113=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3629, "buffer"))));
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
    result_114=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3636, "buffer"))));
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
    result_115=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 3643, "buffer"))));
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
    __result60__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value48=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3971, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result61__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value51=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 3976, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result63__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value54=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 3981, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result65__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value57=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 3986, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    __result67__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value60=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 3991, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buffer_clone(self)))));
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
    buf_121=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4024, "buffer"))));
    buffer_append(buf_121,(char*)self,sizeof(char)*len);
    __result68__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1char*)(__right_value64=smart_pointer$1char_initialize_with_value((struct smart_pointer$1char*)come_increment_ref_count((struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang.h", 4026, "smart_pointer$1char")),(struct buffer*)come_increment_ref_count(buf_121))));
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
    buf_122=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4031, "buffer"))));
    buffer_append(buf_122,(char*)self,sizeof(char*)*len);
    __result70__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1charp*)(__right_value68=smart_pointer$1charp_initialize_with_value((struct smart_pointer$1charp*)come_increment_ref_count((struct smart_pointer$1charp*)come_calloc(1, sizeof(struct smart_pointer$1charp)*(1), "./comelang.h", 4033, "smart_pointer$1charp")),(struct buffer*)come_increment_ref_count(buf_122))));
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
    buf_123=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4038, "buffer"))));
    buffer_append(buf_123,(char*)self,sizeof(short)*len);
    __result71__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1short*)(__right_value72=smart_pointer$1short_initialize_with_value((struct smart_pointer$1short*)come_increment_ref_count((struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang.h", 4040, "smart_pointer$1short")),(struct buffer*)come_increment_ref_count(buf_123))));
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
    buf_124=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4045, "buffer"))));
    buffer_append(buf_124,(char*)self,sizeof(int)*len);
    __result72__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1int*)(__right_value76=smart_pointer$1int_initialize_with_value((struct smart_pointer$1int*)come_increment_ref_count((struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang.h", 4047, "smart_pointer$1int")),(struct buffer*)come_increment_ref_count(buf_124))));
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
    buf_125=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4052, "buffer"))));
    buffer_append(buf_125,(char*)self,sizeof(long)*len);
    __result73__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1long*)(__right_value80=smart_pointer$1long_initialize_with_value((struct smart_pointer$1long*)come_increment_ref_count((struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang.h", 4054, "smart_pointer$1long")),(struct buffer*)come_increment_ref_count(buf_125))));
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
    buf_126=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4059, "buffer"))));
    buffer_append(buf_126,(char*)self,sizeof(float)*len);
    __result75__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1float*)(__right_value84=smart_pointer$1float_initialize_with_value((struct smart_pointer$1float*)come_increment_ref_count((struct smart_pointer$1float*)come_calloc(1, sizeof(struct smart_pointer$1float)*(1), "./comelang.h", 4061, "smart_pointer$1float")),(struct buffer*)come_increment_ref_count(buf_126))));
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
    buf_127=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang.h", 4066, "buffer"))));
    buffer_append(buf_127,(char*)self,sizeof(double)*len);
    __result77__ = gComeFunResultObject = __result_obj__ = ((struct smart_pointer$1double*)(__right_value88=smart_pointer$1double_initialize_with_value((struct smart_pointer$1double*)come_increment_ref_count((struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang.h", 4068, "smart_pointer$1double")),(struct buffer*)come_increment_ref_count(buf_127))));
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
    __result80__ = gComeFunResultObject = __result_obj__ = ((struct list$1char*)(__right_value93=list$1char_initialize_with_values((struct list$1char*)come_increment_ref_count((struct list$1char*)come_calloc(1, sizeof(struct list$1char)*(1), "./comelang.h", 4073, "list$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value93,list$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result80__;
}
static struct list$1charp* charppa_to_list(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value94 = (void*)0;
void* __right_value98 = (void*)0;
struct list$1charp* __result83__;
    __result83__ = gComeFunResultObject = __result_obj__ = ((struct list$1charp*)(__right_value98=list$1charp_initialize_with_values((struct list$1charp*)come_increment_ref_count((struct list$1charp*)come_calloc(1, sizeof(struct list$1charp)*(1), "./comelang.h", 4078, "list$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value98,list$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result83__;
}
static struct list$1short* shortpa_to_list(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value99 = (void*)0;
void* __right_value103 = (void*)0;
struct list$1short* __result86__;
    __result86__ = gComeFunResultObject = __result_obj__ = ((struct list$1short*)(__right_value103=list$1short_initialize_with_values((struct list$1short*)come_increment_ref_count((struct list$1short*)come_calloc(1, sizeof(struct list$1short)*(1), "./comelang.h", 4083, "list$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value103,list$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result86__;
}
static struct list$1int* intpa_to_list(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value104 = (void*)0;
void* __right_value108 = (void*)0;
struct list$1int* __result89__;
    __result89__ = gComeFunResultObject = __result_obj__ = ((struct list$1int*)(__right_value108=list$1int_initialize_with_values((struct list$1int*)come_increment_ref_count((struct list$1int*)come_calloc(1, sizeof(struct list$1int)*(1), "./comelang.h", 4088, "list$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value108,list$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result89__;
}
static struct list$1long* longpa_to_list(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value109 = (void*)0;
void* __right_value113 = (void*)0;
struct list$1long* __result92__;
    __result92__ = gComeFunResultObject = __result_obj__ = ((struct list$1long*)(__right_value113=list$1long_initialize_with_values((struct list$1long*)come_increment_ref_count((struct list$1long*)come_calloc(1, sizeof(struct list$1long)*(1), "./comelang.h", 4093, "list$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value113,list$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result92__;
}
static struct list$1float* floatpa_to_list(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value114 = (void*)0;
void* __right_value118 = (void*)0;
struct list$1float* __result95__;
    __result95__ = gComeFunResultObject = __result_obj__ = ((struct list$1float*)(__right_value118=list$1float_initialize_with_values((struct list$1float*)come_increment_ref_count((struct list$1float*)come_calloc(1, sizeof(struct list$1float)*(1), "./comelang.h", 4098, "list$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value118,list$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result95__;
}
static struct list$1double* doublepa_to_list(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value119 = (void*)0;
void* __right_value123 = (void*)0;
struct list$1double* __result98__;
    __result98__ = gComeFunResultObject = __result_obj__ = ((struct list$1double*)(__right_value123=list$1double_initialize_with_values((struct list$1double*)come_increment_ref_count((struct list$1double*)come_calloc(1, sizeof(struct list$1double)*(1), "./comelang.h", 4103, "list$1double")),len,self)));
    /*g*/come_call_finalizer3(__right_value123,list$1doublep_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result98__;
}
static struct vector$1char* charpa_to_vector(char* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value124 = (void*)0;
void* __right_value126 = (void*)0;
struct vector$1char* __result100__;
    __result100__ = gComeFunResultObject = __result_obj__ = ((struct vector$1char*)(__right_value126=vector$1char_initialize_with_values((struct vector$1char*)come_increment_ref_count((struct vector$1char*)come_calloc(1, sizeof(struct vector$1char)*(1), "./comelang.h", 4108, "vector$1char")),len,self)));
    /*g*/come_call_finalizer3(__right_value126,vector$1charp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result100__;
}
static struct vector$1charp* charppa_to_vector(char** self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value127 = (void*)0;
void* __right_value129 = (void*)0;
struct vector$1charp* __result102__;
    __result102__ = gComeFunResultObject = __result_obj__ = ((struct vector$1charp*)(__right_value129=vector$1charp_initialize_with_values((struct vector$1charp*)come_increment_ref_count((struct vector$1charp*)come_calloc(1, sizeof(struct vector$1charp)*(1), "./comelang.h", 4113, "vector$1charp")),len,self)));
    /*g*/come_call_finalizer3(__right_value129,vector$1charpp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result102__;
}
static struct vector$1short* shortpa_to_vector(short* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value130 = (void*)0;
void* __right_value132 = (void*)0;
struct vector$1short* __result104__;
    __result104__ = gComeFunResultObject = __result_obj__ = ((struct vector$1short*)(__right_value132=vector$1short_initialize_with_values((struct vector$1short*)come_increment_ref_count((struct vector$1short*)come_calloc(1, sizeof(struct vector$1short)*(1), "./comelang.h", 4118, "vector$1short")),len,self)));
    /*g*/come_call_finalizer3(__right_value132,vector$1shortp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result104__;
}
static struct vector$1int* intpa_to_vector(int* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value133 = (void*)0;
void* __right_value135 = (void*)0;
struct vector$1int* __result106__;
    __result106__ = gComeFunResultObject = __result_obj__ = ((struct vector$1int*)(__right_value135=vector$1int_initialize_with_values((struct vector$1int*)come_increment_ref_count((struct vector$1int*)come_calloc(1, sizeof(struct vector$1int)*(1), "./comelang.h", 4123, "vector$1int")),len,self)));
    /*g*/come_call_finalizer3(__right_value135,vector$1intp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result106__;
}
static struct vector$1long* longpa_to_vector(long* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value136 = (void*)0;
void* __right_value138 = (void*)0;
struct vector$1long* __result108__;
    __result108__ = gComeFunResultObject = __result_obj__ = ((struct vector$1long*)(__right_value138=vector$1long_initialize_with_values((struct vector$1long*)come_increment_ref_count((struct vector$1long*)come_calloc(1, sizeof(struct vector$1long)*(1), "./comelang.h", 4128, "vector$1long")),len,self)));
    /*g*/come_call_finalizer3(__right_value138,vector$1longp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result108__;
}
static struct vector$1float* floatpa_to_vector(float* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value139 = (void*)0;
void* __right_value141 = (void*)0;
struct vector$1float* __result110__;
    __result110__ = gComeFunResultObject = __result_obj__ = ((struct vector$1float*)(__right_value141=vector$1float_initialize_with_values((struct vector$1float*)come_increment_ref_count((struct vector$1float*)come_calloc(1, sizeof(struct vector$1float)*(1), "./comelang.h", 4133, "vector$1float")),len,self)));
    /*g*/come_call_finalizer3(__right_value141,vector$1floatp_finalize, 0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result110__;
}
static struct vector$1double* doublepa_to_vector(double* self, unsigned long  int len){
void* __result_obj__=(void*)0;
void* __right_value142 = (void*)0;
void* __right_value144 = (void*)0;
struct vector$1double* __result112__;
    __result112__ = gComeFunResultObject = __result_obj__ = ((struct vector$1double*)(__right_value144=vector$1double_initialize_with_values((struct vector$1double*)come_increment_ref_count((struct vector$1double*)come_calloc(1, sizeof(struct vector$1double)*(1), "./comelang.h", 4138, "vector$1double")),len,self)));
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
        litem_129=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value90=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1106, "list_item$1char"))));
        litem_129->prev=((void*)0);
        litem_129->next=((void*)0);
        litem_129->item=item;
        self->tail=litem_129;
        self->head=litem_129;
    }
    else if(    self->len==1) {
        litem_130=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value91=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1116, "list_item$1char"))));
        litem_130->prev=self->head;
        litem_130->next=((void*)0);
        litem_130->item=item;
        self->tail=litem_130;
        self->head->next=litem_130;
    }
    else {
        litem_131=(struct list_item$1char*)come_increment_ref_count(((struct list_item$1char*)(__right_value92=(struct list_item$1char*)come_calloc(1, sizeof(struct list_item$1char)*(1), "./comelang.h", 1126, "list_item$1char"))));
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
        litem_135=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value95=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1106, "list_item$1charp"))));
        litem_135->prev=((void*)0);
        litem_135->next=((void*)0);
        litem_135->item=item;
        self->tail=litem_135;
        self->head=litem_135;
    }
    else if(    self->len==1) {
        litem_136=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value96=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1116, "list_item$1charp"))));
        litem_136->prev=self->head;
        litem_136->next=((void*)0);
        litem_136->item=item;
        self->tail=litem_136;
        self->head->next=litem_136;
    }
    else {
        litem_137=(struct list_item$1charp*)come_increment_ref_count(((struct list_item$1charp*)(__right_value97=(struct list_item$1charp*)come_calloc(1, sizeof(struct list_item$1charp)*(1), "./comelang.h", 1126, "list_item$1charp"))));
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
        litem_141=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value100=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1106, "list_item$1short"))));
        litem_141->prev=((void*)0);
        litem_141->next=((void*)0);
        litem_141->item=item;
        self->tail=litem_141;
        self->head=litem_141;
    }
    else if(    self->len==1) {
        litem_142=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value101=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1116, "list_item$1short"))));
        litem_142->prev=self->head;
        litem_142->next=((void*)0);
        litem_142->item=item;
        self->tail=litem_142;
        self->head->next=litem_142;
    }
    else {
        litem_143=(struct list_item$1short*)come_increment_ref_count(((struct list_item$1short*)(__right_value102=(struct list_item$1short*)come_calloc(1, sizeof(struct list_item$1short)*(1), "./comelang.h", 1126, "list_item$1short"))));
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
        litem_147=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value105=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1106, "list_item$1int"))));
        litem_147->prev=((void*)0);
        litem_147->next=((void*)0);
        litem_147->item=item;
        self->tail=litem_147;
        self->head=litem_147;
    }
    else if(    self->len==1) {
        litem_148=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value106=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1116, "list_item$1int"))));
        litem_148->prev=self->head;
        litem_148->next=((void*)0);
        litem_148->item=item;
        self->tail=litem_148;
        self->head->next=litem_148;
    }
    else {
        litem_149=(struct list_item$1int*)come_increment_ref_count(((struct list_item$1int*)(__right_value107=(struct list_item$1int*)come_calloc(1, sizeof(struct list_item$1int)*(1), "./comelang.h", 1126, "list_item$1int"))));
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
        litem_153=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value110=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1106, "list_item$1long"))));
        litem_153->prev=((void*)0);
        litem_153->next=((void*)0);
        litem_153->item=item;
        self->tail=litem_153;
        self->head=litem_153;
    }
    else if(    self->len==1) {
        litem_154=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value111=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1116, "list_item$1long"))));
        litem_154->prev=self->head;
        litem_154->next=((void*)0);
        litem_154->item=item;
        self->tail=litem_154;
        self->head->next=litem_154;
    }
    else {
        litem_155=(struct list_item$1long*)come_increment_ref_count(((struct list_item$1long*)(__right_value112=(struct list_item$1long*)come_calloc(1, sizeof(struct list_item$1long)*(1), "./comelang.h", 1126, "list_item$1long"))));
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
        litem_159=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value115=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1106, "list_item$1float"))));
        litem_159->prev=((void*)0);
        litem_159->next=((void*)0);
        litem_159->item=item;
        self->tail=litem_159;
        self->head=litem_159;
    }
    else if(    self->len==1) {
        litem_160=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value116=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1116, "list_item$1float"))));
        litem_160->prev=self->head;
        litem_160->next=((void*)0);
        litem_160->item=item;
        self->tail=litem_160;
        self->head->next=litem_160;
    }
    else {
        litem_161=(struct list_item$1float*)come_increment_ref_count(((struct list_item$1float*)(__right_value117=(struct list_item$1float*)come_calloc(1, sizeof(struct list_item$1float)*(1), "./comelang.h", 1126, "list_item$1float"))));
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
        litem_165=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value120=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1106, "list_item$1double"))));
        litem_165->prev=((void*)0);
        litem_165->next=((void*)0);
        litem_165->item=item;
        self->tail=litem_165;
        self->head=litem_165;
    }
    else if(    self->len==1) {
        litem_166=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value121=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1116, "list_item$1double"))));
        litem_166->prev=self->head;
        litem_166->next=((void*)0);
        litem_166->item=item;
        self->tail=litem_166;
        self->head->next=litem_166;
    }
    else {
        litem_167=(struct list_item$1double*)come_increment_ref_count(((struct list_item$1double*)(__right_value122=(struct list_item$1double*)come_calloc(1, sizeof(struct list_item$1double)*(1), "./comelang.h", 1126, "list_item$1double"))));
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
    self->items=((char*)(__right_value125=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 1900, "char")));
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
    self->items=((char**)(__right_value128=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 1900, "char*")));
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
    self->items=((short*)(__right_value131=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 1900, "short")));
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
    self->items=((int*)(__right_value134=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 1900, "int")));
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
    self->items=((long*)(__right_value137=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 1900, "long")));
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
    self->items=((float*)(__right_value140=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 1900, "float")));
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
    self->items=((double*)(__right_value143=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 1900, "double")));
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
        litem_213=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value192=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1106, "list_item$1charph"))));
        litem_213->prev=((void*)0);
        litem_213->next=((void*)0);
        __dec_obj29=litem_213->item;
        litem_213->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_213;
        self->head=litem_213;
    }
    else if(    self->len==1) {
        litem_214=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value193=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1116, "list_item$1charph"))));
        litem_214->prev=self->head;
        litem_214->next=((void*)0);
        __dec_obj30=litem_214->item;
        litem_214->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_214;
        self->head->next=litem_214;
    }
    else {
        litem_215=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value194=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1126, "list_item$1charph"))));
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

struct sStrNode* sStrNode_initialize(struct sStrNode* self, char* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value245 = (void*)0;
void* __right_value246 = (void*)0;
char* __dec_obj33;
struct sStrNode* __result198__;
    ((struct sNodeBase*)(__right_value245=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value245,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj33=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result198__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result198__;
}

char* sStrNode_kind(struct sStrNode* self){
void* __result_obj__=(void*)0;
void* __right_value247 = (void*)0;
char* __result199__;
    __result199__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value247=__builtin_string("sStrNode")));
    /* U11 */__right_value247 = come_decrement_ref_count2(__right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result199__;
}

_Bool sStrNode_compile(struct sStrNode* self, struct sInfo* info){
void* __right_value248 = (void*)0;
void* __right_value249 = (void*)0;
struct CVALUE* come_value_247;
void* __right_value250 = (void*)0;
char* __dec_obj36;
void* __right_value251 = (void*)0;
void* __right_value252 = (void*)0;
struct sType* __dec_obj37;
_Bool __result201__;
    come_value_247=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 19, "CVALUE"))));
    __dec_obj36=come_value_247->c_value;
    come_value_247->c_value=(char*)come_increment_ref_count(xsprintf("\"%s\"",self->value));
    /*G*/ __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj37=come_value_247->type;
    come_value_247->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 22, "sType")),"char*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj37,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_247->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_247));
    add_come_last_code(info,"%s",come_value_247->c_value);
    __result201__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_247,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result201__;
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

static void sType_finalize(struct sType* self){
struct tuple1$1sTypeph* __dec_obj38;
struct tuple1$1sTypeph* __dec_obj40;
char* __dec_obj42;
struct list$1sTypeph* __dec_obj43;
struct list$1sNodeph* __dec_obj45;
struct list$1sTypeph* __dec_obj47;
struct list$1charph* __dec_obj48;
struct tuple1$1sTypeph* __dec_obj49;
struct sNode* __dec_obj51;
struct tuple1$1sTypeph* __dec_obj52;
struct sNode* __dec_obj54;
char* __dec_obj55;
char* __dec_obj56;
char* __dec_obj57;
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        if(        self->mNoSolvedGenericsType==gComeFunResultObject) {
            __dec_obj38=self->mNoSolvedGenericsType;
            come_call_finalizer3(__dec_obj38,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNoSolvedGenericsType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        if(        self->mOriginalLoadVarType==gComeFunResultObject) {
            __dec_obj40=self->mOriginalLoadVarType;
            come_call_finalizer3(__dec_obj40,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mOriginalLoadVarType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        if(        self->mGenericsName==gComeFunResultObject) {
            __dec_obj42=self->mGenericsName;
            /*G*/ __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        if(        self->mGenericsTypes==gComeFunResultObject) {
            __dec_obj43=self->mGenericsTypes;
            come_call_finalizer3(__dec_obj43,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mGenericsTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        if(        self->mArrayNum==gComeFunResultObject) {
            __dec_obj45=self->mArrayNum;
            come_call_finalizer3(__dec_obj45,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mArrayNum,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj47=self->mParamTypes;
            come_call_finalizer3(__dec_obj47,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj48=self->mParamNames;
            come_call_finalizer3(__dec_obj48,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj49=self->mResultType;
            come_call_finalizer3(__dec_obj49,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        if(        self->mAlignas==gComeFunResultObject) {
            __dec_obj51=self->mAlignas;
            /* U1 */ if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, ((struct sNode*)__dec_obj51)->finalize, ((struct sNode*)__dec_obj51)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        if(        self->mChannelType==gComeFunResultObject) {
            __dec_obj52=self->mChannelType;
            come_call_finalizer3(__dec_obj52,tuple1$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mChannelType,tuple1$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        if(        self->mSizeNum==gComeFunResultObject) {
            __dec_obj54=self->mSizeNum;
            /* U1 */ if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        if(        self->mOriginalTypeName==gComeFunResultObject) {
            __dec_obj55=self->mOriginalTypeName;
            /*G*/ __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        if(        self->mAsmName==gComeFunResultObject) {
            __dec_obj56=self->mAsmName;
            /*G*/ __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        if(        self->mTupleName==gComeFunResultObject) {
            __dec_obj57=self->mTupleName;
            /*G*/ __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_248;
struct list_item$1sTypeph* prev_it_249;
    it_248=self->head;
    while(it_248!=((void*)0)) {
        prev_it_249=it_248;
        it_248=it_248->next;
        /*i*/come_call_finalizer3(prev_it_249,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
struct sType* __dec_obj44;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj44=self->item;
            come_call_finalizer3(__dec_obj44,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
struct list_item$1sTypeph* it_250;
struct list_item$1sTypeph* prev_it_251;
    it_250=self->head;
    while(it_250!=((void*)0)) {
        prev_it_251=it_250;
        it_250=it_250->next;
        /*i*/come_call_finalizer3(prev_it_251,list_item$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_252;
struct list_item$1sNodeph* prev_it_253;
    it_252=self->head;
    while(it_252!=((void*)0)) {
        prev_it_253=it_252;
        it_252=it_252->next;
        /*i*/come_call_finalizer3(prev_it_253,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
struct sNode* __dec_obj46;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj46=self->item;
            /* U1 */ if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count2(__dec_obj46, ((struct sNode*)__dec_obj46)->finalize, ((struct sNode*)__dec_obj46)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
struct list_item$1sNodeph* it_254;
struct list_item$1sNodeph* prev_it_255;
    it_254=self->head;
    while(it_254!=((void*)0)) {
        prev_it_255=it_254;
        it_254=it_254->next;
        /*i*/come_call_finalizer3(prev_it_255,list_item$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1charph_finalize(struct list$1charph* self){
struct list_item$1charph* it_256;
struct list_item$1charph* prev_it_257;
    it_256=self->head;
    while(it_256!=((void*)0)) {
        prev_it_257=it_256;
        it_256=it_256->next;
        /*i*/come_call_finalizer3(prev_it_257,list_item$1charphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj53;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj53=self->v1;
            come_call_finalizer3(__dec_obj53,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__=(void*)0;
void* __right_value253 = (void*)0;
struct list_item$1CVALUEph* litem_258;
struct CVALUE* __dec_obj58;
void* __right_value254 = (void*)0;
struct list_item$1CVALUEph* litem_259;
struct CVALUE* __dec_obj62;
void* __right_value255 = (void*)0;
struct list_item$1CVALUEph* litem_260;
struct CVALUE* __dec_obj63;
struct list$1CVALUEph* __result200__;
    if(    self->len==0) {
        litem_258=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value253=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1106, "list_item$1CVALUEph"))));
        litem_258->prev=((void*)0);
        litem_258->next=((void*)0);
        __dec_obj58=litem_258->item;
        litem_258->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj58,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_258;
        self->head=litem_258;
    }
    else if(    self->len==1) {
        litem_259=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value254=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1116, "list_item$1CVALUEph"))));
        litem_259->prev=self->head;
        litem_259->next=((void*)0);
        __dec_obj62=litem_259->item;
        litem_259->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj62,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_259;
        self->head->next=litem_259;
    }
    else {
        litem_260=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(__right_value255=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang.h", 1126, "list_item$1CVALUEph"))));
        litem_260->prev=self->tail;
        litem_260->next=((void*)0);
        __dec_obj63=litem_260->item;
        litem_260->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj63,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_260;
        self->tail=litem_260;
    }
    self->len++;
    __result200__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result200__;
}

static void CVALUE_finalize(struct CVALUE* self){
char* __dec_obj59;
struct sType* __dec_obj60;
char* __dec_obj61;
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        if(        self->c_value==gComeFunResultObject) {
            __dec_obj59=self->c_value;
            /*G*/ __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj60=self->type;
            come_call_finalizer3(__dec_obj60,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        if(        self->c_value_without_right_value_objects==gComeFunResultObject) {
            __dec_obj61=self->c_value_without_right_value_objects;
            /*G*/ __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sBufferNode* sBufferNode_initialize(struct sBufferNode* self, struct buffer* value, unsigned long  int size, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value256 = (void*)0;
struct buffer* __dec_obj64;
struct sBufferNode* __result202__;
    ((struct sNodeBase*)(__right_value256=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value256,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj64=self->value;
    self->value=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj64,buffer_finalize, 0, 0, 0, 0, (void*)0);
    self->size=size;
    __result202__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result202__;
}

char* sBufferNode_kind(struct sBufferNode* self){
void* __result_obj__=(void*)0;
void* __right_value257 = (void*)0;
char* __result203__;
    __result203__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value257=__builtin_string("sBufferNode")));
    /* U11 */__right_value257 = come_decrement_ref_count2(__right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result203__;
}

_Bool sBufferNode_compile(struct sBufferNode* self, struct sInfo* info){
struct buffer* value_261;
unsigned long  int size_262;
void* __right_value258 = (void*)0;
void* __right_value259 = (void*)0;
struct CVALUE* come_value_263;
void* __right_value260 = (void*)0;
void* __right_value261 = (void*)0;
struct buffer* buf_264;
void* __right_value262 = (void*)0;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct sType* type2_265;
void* __right_value265 = (void*)0;
char* __dec_obj67;
void* __right_value302 = (void*)0;
struct sType* __dec_obj93;
_Bool __result221__;
    value_261=(struct buffer*)come_increment_ref_count(self->value);
    size_262=self->size;
    come_value_263=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 54, "CVALUE"))));
    buf_264=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 56, "buffer"))));
    buffer_append_format(buf_264,"buffer_initialize_with_value((struct buffer*)come_increment_ref_count(come_calloc(1, sizeof(struct buffer), \"%s\", %d, \"buffer\")), \"%s, %ld)",info->sname,info->sline,((char*)(__right_value262=buffer_to_string(value_261))),size_262);
    /* U11 */__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type2_265=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 60, "sType")),"buffer*",(_Bool)0,info));
    type2_265->mHeap=(_Bool)1;
    __dec_obj67=come_value_263->c_value;
    come_value_263->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_264));
    /*G*/ __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj93=come_value_263->type;
    come_value_263->type=(struct sType*)come_increment_ref_count(sType_clone(type2_265));
    come_call_finalizer3(__dec_obj93,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_263->var=((void*)0);
    append_object_to_right_values2(come_value_263,(struct sType*)come_increment_ref_count(type2_265),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_263));
    add_come_last_code(info,"%s",come_value_263->c_value);
    __result221__ = (_Bool)1;
    /*i*/come_call_finalizer3(value_261,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value_263,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_264,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_265,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result221__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__=(void*)0;
struct sType* __result204__;
void* __right_value266 = (void*)0;
struct sType* result_266;
void* __right_value269 = (void*)0;
struct tuple1$1sTypeph* __dec_obj70;
void* __right_value270 = (void*)0;
struct tuple1$1sTypeph* __dec_obj71;
void* __right_value271 = (void*)0;
char* __dec_obj72;
void* __right_value278 = (void*)0;
struct list$1sTypeph* __dec_obj76;
void* __right_value286 = (void*)0;
struct list$1sNodeph* __dec_obj80;
void* __right_value287 = (void*)0;
struct list$1sTypeph* __dec_obj81;
void* __right_value294 = (void*)0;
struct list$1charph* __dec_obj85;
void* __right_value295 = (void*)0;
struct tuple1$1sTypeph* __dec_obj86;
void* __right_value296 = (void*)0;
struct sNode* __dec_obj87;
void* __right_value297 = (void*)0;
struct tuple1$1sTypeph* __dec_obj88;
void* __right_value298 = (void*)0;
struct sNode* __dec_obj89;
void* __right_value299 = (void*)0;
char* __dec_obj90;
void* __right_value300 = (void*)0;
char* __dec_obj91;
void* __right_value301 = (void*)0;
char* __dec_obj92;
struct sType* __result220__;
    if(    self==(void*)0) {
        __result204__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result204__;
    }
    result_266=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"));
    if(    self!=((void*)0)) {
        result_266->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj70=result_266->mNoSolvedGenericsType;
        result_266->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj70,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj71=result_266->mOriginalLoadVarType;
        result_266->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj71,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsName!=((void*)0)) {
        __dec_obj72=result_266->mGenericsName;
        result_266->mGenericsName=(char*)come_increment_ref_count(string_clone(self->mGenericsName));
        /*G*/ __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj76=result_266->mGenericsTypes;
        result_266->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mGenericsTypes));
        come_call_finalizer3(__dec_obj76,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj80=result_266->mArrayNum;
        result_266->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->mArrayNum));
        come_call_finalizer3(__dec_obj80,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOmitArrayNum=self->mOmitArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj81=result_266->mParamTypes;
        result_266->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypephp_clone(self->mParamTypes));
        come_call_finalizer3(__dec_obj81,list$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj85=result_266->mParamNames;
        result_266->mParamNames=(struct list$1charph*)come_increment_ref_count(list$1charphp_clone(self->mParamNames));
        come_call_finalizer3(__dec_obj85,list$1charph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj86=result_266->mResultType;
        result_266->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mResultType));
        come_call_finalizer3(__dec_obj86,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj87=result_266->mAlignas;
        result_266->mAlignas=(struct sNode*)come_increment_ref_count(sNode_clone(self->mAlignas));
        /* U1 */ if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj88=result_266->mChannelType;
        result_266->mChannelType=(struct tuple1$1sTypeph*)come_increment_ref_count(tuple1$1sTypephp_clone(self->mChannelType));
        come_call_finalizer3(__dec_obj88,tuple1$1sTypeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_266->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_266->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_266->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_266->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_266->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_266->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_266->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_266->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_266->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_266->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_266->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_266->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_266->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_266->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_266->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_266->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_266->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_266->mNoArrayPointerNum=self->mNoArrayPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj89=result_266->mSizeNum;
        result_266->mSizeNum=(struct sNode*)come_increment_ref_count(sNode_clone(self->mSizeNum));
        /* U1 */ if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj90=result_266->mOriginalTypeName;
        result_266->mOriginalTypeName=(char*)come_increment_ref_count(string_clone(self->mOriginalTypeName));
        /*G*/ __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_266->mFunctionParam=self->mFunctionParam;
    }
    if(    self!=((void*)0)) {
        result_266->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_266->mGenericsStruct=self->mGenericsStruct;
    }
    if(    self!=((void*)0)) {
        result_266->mSolvedGenericsName=self->mSolvedGenericsName;
    }
    if(    self!=((void*)0)) {
        result_266->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_266->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_266->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj91=result_266->mAsmName;
        result_266->mAsmName=(char*)come_increment_ref_count(string_clone(self->mAsmName));
        /*G*/ __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_266->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_266->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_266->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)) {
        result_266->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_266->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_266->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj92=result_266->mTupleName;
        result_266->mTupleName=(char*)come_increment_ref_count(string_clone(self->mTupleName));
        /*G*/ __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result220__ = gComeFunResultObject = __result_obj__ = result_266;
    /*i*/come_call_finalizer3(result_266,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result220__;
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__=(void*)0;
struct tuple1$1sTypeph* __result205__;
void* __right_value267 = (void*)0;
struct tuple1$1sTypeph* result_267;
void* __right_value268 = (void*)0;
struct sType* __dec_obj68;
struct tuple1$1sTypeph* __result206__;
    if(    self==(void*)0) {
        __result205__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result205__;
    }
    result_267=(struct tuple1$1sTypeph*)come_increment_ref_count((struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj68=result_267->v1;
        result_267->v1=(struct sType*)come_increment_ref_count(sType_clone(self->v1));
        come_call_finalizer3(__dec_obj68,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result206__ = gComeFunResultObject = __result_obj__ = result_267;
    /*i*/come_call_finalizer3(result_267,tuple1$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result206__;
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
struct sType* __dec_obj69;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj69=self->v1;
            come_call_finalizer3(__dec_obj69,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result207__;
void* __right_value272 = (void*)0;
void* __right_value273 = (void*)0;
struct list$1sTypeph* result_268;
struct list_item$1sTypeph* it_269;
void* __right_value277 = (void*)0;
struct list$1sTypeph* __result210__;
    if(    self==((void*)0)) {
        __result207__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result207__;
    }
    result_268=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang.h", 1022, "list$1sTypeph"))));
    it_269=self->head;
    while(it_269!=((void*)0)) {
        list$1sTypeph_add(result_268,(struct sType*)come_increment_ref_count(sType_clone(it_269->item)));
        it_269=it_269->next;
    }
    __result210__ = gComeFunResultObject = __result_obj__ = result_268;
    /*i*/come_call_finalizer3(result_268,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result210__;
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct list$1sTypeph* __result208__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result208__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sTypephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result208__;
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value274 = (void*)0;
struct list_item$1sTypeph* litem_270;
struct sType* __dec_obj73;
void* __right_value275 = (void*)0;
struct list_item$1sTypeph* litem_271;
struct sType* __dec_obj74;
void* __right_value276 = (void*)0;
struct list_item$1sTypeph* litem_272;
struct sType* __dec_obj75;
struct list$1sTypeph* __result209__;
    if(    self->len==0) {
        litem_270=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value274=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1036, "list_item$1sTypeph"))));
        litem_270->prev=((void*)0);
        litem_270->next=((void*)0);
        __dec_obj73=litem_270->item;
        litem_270->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj73,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_270;
        self->head=litem_270;
    }
    else if(    self->len==1) {
        litem_271=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value275=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1046, "list_item$1sTypeph"))));
        litem_271->prev=self->head;
        litem_271->next=((void*)0);
        __dec_obj74=litem_271->item;
        litem_271->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj74,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_271;
        self->head->next=litem_271;
    }
    else {
        litem_272=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value276=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1056, "list_item$1sTypeph"))));
        litem_272->prev=self->tail;
        litem_272->next=((void*)0);
        __dec_obj75=litem_272->item;
        litem_272->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj75,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_272;
        self->tail=litem_272;
    }
    self->len++;
    __result209__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result209__;
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result211__;
void* __right_value279 = (void*)0;
void* __right_value280 = (void*)0;
struct list$1sNodeph* result_273;
struct list_item$1sNodeph* it_274;
void* __right_value285 = (void*)0;
struct list$1sNodeph* __result216__;
    if(    self==((void*)0)) {
        __result211__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result211__;
    }
    result_273=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang.h", 1022, "list$1sNodeph"))));
    it_274=self->head;
    while(it_274!=((void*)0)) {
        list$1sNodeph_add(result_273,(struct sNode*)come_increment_ref_count(sNode_clone(it_274->item)));
        it_274=it_274->next;
    }
    __result216__ = gComeFunResultObject = __result_obj__ = result_273;
    /*i*/come_call_finalizer3(result_273,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result216__;
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct list$1sNodeph* __result212__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result212__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1sNodephp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result212__;
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value281 = (void*)0;
struct list_item$1sNodeph* litem_275;
struct sNode* __dec_obj77;
void* __right_value282 = (void*)0;
struct list_item$1sNodeph* litem_276;
struct sNode* __dec_obj78;
void* __right_value283 = (void*)0;
struct list_item$1sNodeph* litem_277;
struct sNode* __dec_obj79;
struct list$1sNodeph* __result213__;
    if(    self->len==0) {
        litem_275=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value281=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1036, "list_item$1sNodeph"))));
        litem_275->prev=((void*)0);
        litem_275->next=((void*)0);
        __dec_obj77=litem_275->item;
        litem_275->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_275;
        self->head=litem_275;
    }
    else if(    self->len==1) {
        litem_276=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value282=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1046, "list_item$1sNodeph"))));
        litem_276->prev=self->head;
        litem_276->next=((void*)0);
        __dec_obj78=litem_276->item;
        litem_276->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_276;
        self->head->next=litem_276;
    }
    else {
        litem_277=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value283=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1056, "list_item$1sNodeph"))));
        litem_277->prev=self->tail;
        litem_277->next=((void*)0);
        __dec_obj79=litem_277->item;
        litem_277->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_277;
        self->tail=litem_277;
    }
    self->len++;
    __result213__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result213__;
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__=(void*)0;
struct sNode* __result214__;
void* __right_value284 = (void*)0;
struct sNode* result_278;
struct sNode* __result215__;
    if(    self==(void*)0) {
        __result214__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result214__;
    }
    result_278=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_278->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_278->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_278->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_278->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_278->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_278->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_278->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_278->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_278->kind=self->kind;
    }
    __result215__ = gComeFunResultObject = __result_obj__ = result_278;
    if(result_278) { result_278 = come_decrement_ref_count2(result_278, ((struct sNode*)result_278)->finalize, ((struct sNode*)result_278)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result215__;
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__=(void*)0;
struct list$1charph* __result217__;
void* __right_value288 = (void*)0;
void* __right_value289 = (void*)0;
struct list$1charph* result_279;
struct list_item$1charph* it_280;
void* __right_value293 = (void*)0;
struct list$1charph* __result219__;
    if(    self==((void*)0)) {
        __result217__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result217__;
    }
    result_279=(struct list$1charph*)come_increment_ref_count(list$1charph_initialize((struct list$1charph*)come_increment_ref_count((struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang.h", 1022, "list$1charph"))));
    it_280=self->head;
    while(it_280!=((void*)0)) {
        list$1charph_add(result_279,(char*)come_increment_ref_count(string_clone(it_280->item)));
        it_280=it_280->next;
    }
    __result219__ = gComeFunResultObject = __result_obj__ = result_279;
    /*i*/come_call_finalizer3(result_279,list$1charphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result219__;
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__=(void*)0;
void* __right_value290 = (void*)0;
struct list_item$1charph* litem_281;
char* __dec_obj82;
void* __right_value291 = (void*)0;
struct list_item$1charph* litem_282;
char* __dec_obj83;
void* __right_value292 = (void*)0;
struct list_item$1charph* litem_283;
char* __dec_obj84;
struct list$1charph* __result218__;
    if(    self->len==0) {
        litem_281=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value290=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1036, "list_item$1charph"))));
        litem_281->prev=((void*)0);
        litem_281->next=((void*)0);
        __dec_obj82=litem_281->item;
        litem_281->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_281;
        self->head=litem_281;
    }
    else if(    self->len==1) {
        litem_282=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value291=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1046, "list_item$1charph"))));
        litem_282->prev=self->head;
        litem_282->next=((void*)0);
        __dec_obj83=litem_282->item;
        litem_282->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_282;
        self->head->next=litem_282;
    }
    else {
        litem_283=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(__right_value292=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang.h", 1056, "list_item$1charph"))));
        litem_283->prev=self->tail;
        litem_283->next=((void*)0);
        __dec_obj84=litem_283->item;
        litem_283->item=(char*)come_increment_ref_count(item);
        /*G*/ __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_283;
        self->tail=litem_283;
    }
    self->len++;
    __result218__ = gComeFunResultObject = __result_obj__ = self;
    /* U13 */item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result218__;
}

struct sSStringNode* sSStringNode_initialize(struct sSStringNode* self, char* value, struct list$1sNodeph* exps, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value303 = (void*)0;
void* __right_value304 = (void*)0;
char* __dec_obj94;
void* __right_value305 = (void*)0;
struct list$1sNodeph* __dec_obj95;
struct sSStringNode* __result222__;
    ((struct sNodeBase*)(__right_value303=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value303,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj94=self->value;
    self->value=(char*)come_increment_ref_count(__builtin_string(value));
    /*G*/ __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj95=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(exps));
    come_call_finalizer3(__dec_obj95,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result222__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result222__;
}

char* sSStringNode_kind(struct sSStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value306 = (void*)0;
char* __result223__;
    __result223__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value306=__builtin_string("sSStringNode")));
    /* U11 */__right_value306 = come_decrement_ref_count2(__right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result223__;
}

_Bool sSStringNode_compile(struct sSStringNode* self, struct sInfo* info){
void* __right_value307 = (void*)0;
void* __right_value308 = (void*)0;
struct CVALUE* come_value_284;
void* __right_value309 = (void*)0;
void* __right_value310 = (void*)0;
struct buffer* buf_285;
struct list$1sNodeph* o2_saved_286;
struct sNode* it_289;
void* __right_value311 = (void*)0;
struct sNode* obj_292;
void* __right_value312 = (void*)0;
void* __right_value313 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_293;
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
void* __right_value319 = (void*)0;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
struct sNode* node_299;
_Bool Value_300;
_Bool __result233__;
void* __right_value322 = (void*)0;
struct CVALUE* come_value_301;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct sType* type2_302;
void* __right_value325 = (void*)0;
char* __dec_obj113;
void* __right_value326 = (void*)0;
struct sType* __dec_obj114;
_Bool __result234__;
    come_value_284=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 94, "CVALUE"))));
    buf_285=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 96, "buffer"))));
    buffer_append_str(buf_285,"xsprintf(\"");
    buffer_append_str(buf_285,self->value);
    buffer_append_str(buf_285,"\"");
    if(    list$1sNodeph_length(self->exps)>0) {
        for(        o2_saved_286=(struct list$1sNodeph*)come_increment_ref_count((self->exps)),it_289=list$1sNodeph_begin((o2_saved_286));        !list$1sNodeph_end((o2_saved_286));        it_289=list$1sNodeph_next((o2_saved_286))        ){
            obj_292=(struct sNode*)come_increment_ref_count(sNode_clone(it_289));
            params_293=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 106, "list$1tuple2$2charphsNodephph"))));
            list$1tuple2$2charphsNodephph_add(params_293,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 107, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(sNode_clone(it_289)))));
            node_299=(struct sNode*)come_increment_ref_count(create_method_call("to_string",(struct sNode*)come_increment_ref_count(obj_292),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_293),((void*)0),0,((void*)0),info));
            Value_300=node_compile(node_299,info);
            if(            !Value_300) {
                __result233__ = (_Bool)0;
                if(obj_292) { obj_292 = come_decrement_ref_count2(obj_292, ((struct sNode*)obj_292)->finalize, ((struct sNode*)obj_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_293,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(o2_saved_286,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(come_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(buf_285,buffer_finalize, 0, 0, 0, 0, (void*)0);
                return __result233__;
            }
            else {
            }
            come_value_301=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            buffer_append_str(buf_285,",");
            buffer_append_str(buf_285,come_value_301->c_value);
            if(obj_292) { obj_292 = come_decrement_ref_count2(obj_292, ((struct sNode*)obj_292)->finalize, ((struct sNode*)obj_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(params_293,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(node_299) { node_299 = come_decrement_ref_count2(node_299, ((struct sNode*)node_299)->finalize, ((struct sNode*)node_299)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_301,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        /*i*/come_call_finalizer3(o2_saved_286,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    buffer_append_str(buf_285,")");
    type2_302=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 125, "sType")),"char*",(_Bool)0,info));
    type2_302->mHeap=(_Bool)1;
    __dec_obj113=come_value_284->c_value;
    come_value_284->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_285));
    /*G*/ __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj114=come_value_284->type;
    come_value_284->type=(struct sType*)come_increment_ref_count(sType_clone(type2_302));
    come_call_finalizer3(__dec_obj114,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_284->var=((void*)0);
    append_object_to_right_values2(come_value_284,(struct sType*)come_increment_ref_count(type2_302),info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_284));
    add_come_last_code(info,"%s",come_value_284->c_value);
    __result234__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_284,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_285,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_302,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result234__;
}

static int list$1sNodeph_length(struct list$1sNodeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_287;
struct sNode* __result224__;
struct sNode* __result225__;
struct sNode* result_288;
struct sNode* __result226__;
result_287 = (void*)0;
result_288 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_287,0,sizeof(struct sNode*));
        __result224__ = gComeFunResultObject = __result_obj__ = result_287;
        gComeFunResultObject = (void*)0;
        return __result224__;
    }
    self->it=self->head;
    if(    self->it) {
        __result225__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result225__;
    }
    memset(&result_288,0,sizeof(struct sNode*));
    __result226__ = gComeFunResultObject = __result_obj__ = result_288;
    gComeFunResultObject = (void*)0;
    return __result226__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__=(void*)0;
struct sNode* result_290;
struct sNode* __result227__;
struct sNode* __result228__;
struct sNode* result_291;
struct sNode* __result229__;
result_290 = (void*)0;
result_291 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_290,0,sizeof(struct sNode*));
        __result227__ = gComeFunResultObject = __result_obj__ = result_290;
        gComeFunResultObject = (void*)0;
        return __result227__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result228__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result228__;
    }
    memset(&result_291,0,sizeof(struct sNode*));
    __result229__ = gComeFunResultObject = __result_obj__ = result_291;
    gComeFunResultObject = (void*)0;
    return __result229__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_initialize(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result230__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result230__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result230__;
}

static void list$1tuple2$2charphsNodephphp_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_294;
struct list_item$1tuple2$2charphsNodephph* prev_it_295;
    it_294=self->head;
    while(it_294!=((void*)0)) {
        prev_it_295=it_294;
        it_294=it_294->next;
        /*i*/come_call_finalizer3(prev_it_295,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2charphsNodephphp_finalize(struct list_item$1tuple2$2charphsNodephph* self){
struct tuple2$2charphsNodeph* __dec_obj99;
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        if(        self->item==gComeFunResultObject) {
            __dec_obj99=self->item;
            come_call_finalizer3(__dec_obj99,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_add(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value314 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_296;
struct tuple2$2charphsNodeph* __dec_obj102;
void* __right_value315 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_297;
struct tuple2$2charphsNodeph* __dec_obj105;
void* __right_value316 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_298;
struct tuple2$2charphsNodeph* __dec_obj108;
struct list$1tuple2$2charphsNodephph* __result231__;
    if(    self->len==0) {
        litem_296=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value314=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1036, "list_item$1tuple2$2charphsNodephph"))));
        litem_296->prev=((void*)0);
        litem_296->next=((void*)0);
        __dec_obj102=litem_296->item;
        litem_296->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj102,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_296;
        self->head=litem_296;
    }
    else if(    self->len==1) {
        litem_297=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value315=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1046, "list_item$1tuple2$2charphsNodephph"))));
        litem_297->prev=self->head;
        litem_297->next=((void*)0);
        __dec_obj105=litem_297->item;
        litem_297->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_297;
        self->head->next=litem_297;
    }
    else {
        litem_298=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value316=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1056, "list_item$1tuple2$2charphsNodephph"))));
        litem_298->prev=self->tail;
        litem_298->next=((void*)0);
        __dec_obj108=litem_298->item;
        litem_298->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj108,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_298;
        self->tail=litem_298;
    }
    self->len++;
    __result231__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result231__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodeph_initialize(struct tuple2$2charphsNodeph* self, char* v1, struct sNode* v2){
void* __result_obj__=(void*)0;
char* __dec_obj111;
struct sNode* __dec_obj112;
struct tuple2$2charphsNodeph* __result232__;
    __dec_obj111=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    /*G*/ __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj112=self->v2;
    self->v2=(struct sNode*)come_increment_ref_count(v2);
    /* U1 */ if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); };
    __result232__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,tuple2$2charphsNodephp_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    if(v2) { v2 = come_decrement_ref_count2(v2, ((struct sNode*)v2)->finalize, ((struct sNode*)v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result232__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value327 = (void*)0;
struct sCharNode* __result235__;
    ((struct sNodeBase*)(__right_value327=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value327,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    __result235__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result235__;
}

char* sCharNode_kind(struct sCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value328 = (void*)0;
char* __result236__;
    __result236__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value328=__builtin_string("sCharNode")));
    /* U11 */__right_value328 = come_decrement_ref_count2(__right_value328, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result236__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
struct CVALUE* come_value_303;
void* __right_value331 = (void*)0;
char* __dec_obj116;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sType* __dec_obj117;
_Bool __result237__;
    come_value_303=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 158, "CVALUE"))));
    __dec_obj116=come_value_303->c_value;
    come_value_303->c_value=(char*)come_increment_ref_count(xsprintf("%d",self->value));
    /*G*/ __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj117=come_value_303->type;
    come_value_303->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 161, "sType")),"char",(_Bool)0,info));
    come_call_finalizer3(__dec_obj117,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_303->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_303));
    add_come_last_code(info,"%s",come_value_303->c_value);
    __result237__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_303,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result237__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, _Bool quote, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value334 = (void*)0;
struct sWCharNode* __result238__;
    ((struct sNodeBase*)(__right_value334=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value334,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    self->value=value;
    self->quote=quote;
    __result238__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result238__;
}

char* sWCharNode_kind(struct sWCharNode* self){
void* __result_obj__=(void*)0;
void* __right_value335 = (void*)0;
char* __result239__;
    __result239__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value335=__builtin_string("sWCharNode")));
    /* U11 */__right_value335 = come_decrement_ref_count2(__right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result239__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
struct CVALUE* come_value_304;
void* __right_value338 = (void*)0;
char* __dec_obj119;
void* __right_value339 = (void*)0;
char* __dec_obj120;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct sType* __dec_obj121;
_Bool __result240__;
    come_value_304=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 189, "CVALUE"))));
    if(    self->quote) {
        __dec_obj119=come_value_304->c_value;
        come_value_304->c_value=(char*)come_increment_ref_count(xsprintf("L'\\%o'",self->value));
        /*G*/ __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj120=come_value_304->c_value;
        come_value_304->c_value=(char*)come_increment_ref_count(xsprintf("L'%lc'",self->value));
        /*G*/ __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __dec_obj121=come_value_304->type;
    come_value_304->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 197, "sType")),"int",(_Bool)0,info));
    come_call_finalizer3(__dec_obj121,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_304->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_304));
    add_come_last_code(info,"%s",come_value_304->c_value);
    __result240__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_304,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result240__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value342 = (void*)0;
unsigned int* __dec_obj122;
struct sWStringNode* __result241__;
    ((struct sNodeBase*)(__right_value342=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value342,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj122=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    /*G*/ __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result241__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */value = come_decrement_ref_count2(value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result241__;
}

char* sWStringNode_kind(struct sWStringNode* self){
void* __result_obj__=(void*)0;
void* __right_value343 = (void*)0;
char* __result242__;
    __result242__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value343=__builtin_string("sWStringNode")));
    /* U11 */__right_value343 = come_decrement_ref_count2(__right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result242__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __right_value344 = (void*)0;
void* __right_value345 = (void*)0;
struct CVALUE* come_value_305;
void* __right_value346 = (void*)0;
char* __dec_obj125;
void* __right_value347 = (void*)0;
void* __right_value348 = (void*)0;
struct sType* __dec_obj126;
_Bool __result243__;
    come_value_305=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 224, "CVALUE"))));
    __dec_obj125=come_value_305->c_value;
    come_value_305->c_value=(char*)come_increment_ref_count(xsprintf("L\"%ls\"",self->value));
    /*G*/ __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj126=come_value_305->type;
    come_value_305->type=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 227, "sType")),"int*",(_Bool)0,info));
    come_call_finalizer3(__dec_obj126,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value_305->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_305));
    add_come_last_code(info,"%s",come_value_305->c_value);
    __result243__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_305,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result243__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj127;
struct sRegexNode* __result244__;
    ((struct sNodeBase*)(__right_value349=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value349,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj127=self->str;
    self->str=(char*)come_increment_ref_count(__builtin_string(str));
    /*G*/ __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->global=global;
    self->ignore_case=ignore_case;
    __result244__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sRegexNode_finalize, 0, 0, 1, 0, (void*)0);
    /* U13 */str = come_decrement_ref_count2(str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result244__;
}

char* sRegexNode_kind(struct sRegexNode* self){
void* __result_obj__=(void*)0;
void* __right_value351 = (void*)0;
char* __result245__;
    __result245__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value351=__builtin_string("sRegexNode")));
    /* U11 */__right_value351 = come_decrement_ref_count2(__right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result245__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __right_value352 = (void*)0;
void* __right_value353 = (void*)0;
struct sNode* _inf_value1;
struct sStrNode* _inf_obj_value1;
void* __right_value357 = (void*)0;
struct sNode* obj_node_306;
void* __right_value358 = (void*)0;
void* __right_value359 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_308;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
void* __right_value366 = (void*)0;
void* __right_value367 = (void*)0;
void* __right_value368 = (void*)0;
void* __right_value369 = (void*)0;
void* __right_value370 = (void*)0;
void* __right_value371 = (void*)0;
void* __right_value372 = (void*)0;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
void* __right_value375 = (void*)0;
void* __right_value376 = (void*)0;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
void* __right_value381 = (void*)0;
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
struct sNode* node_309;
_Bool Value_310;
_Bool __result248__;
_Bool __result249__;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 256, "struct sNode");
    _inf_obj_value1=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value353=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 256, "sStrNode")),(char*)come_increment_ref_count(self->str),info->sline,info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sStrNode_finalize;
    _inf_value1->clone=(void*)sStrNode_clone;
    _inf_value1->compile=(void*)sStrNode_compile;
    _inf_value1->sline=(void*)sNodeBase_sline;
    _inf_value1->sline_real=(void*)sNodeBase_sline_real;
    _inf_value1->sname=(void*)sNodeBase_sname;
    _inf_value1->terminated=(void*)sNodeBase_terminated;
    _inf_value1->kind=(void*)sStrNode_kind;
    obj_node_306=(struct sNode*)come_increment_ref_count(_inf_value1);
    /*g*/come_call_finalizer3(__right_value353,sStrNode_finalize, 0, 1, 0, 0, (void*)0);
    params_308=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 258, "list$1tuple2$2charphsNodephph"))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 260, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_node_306))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 261, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 262, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 263, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 264, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 265, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 266, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 267, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    list$1tuple2$2charphsNodephph_add(params_308,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 268, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_false_object(info)))));
    node_309=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_node_306),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_308),((void*)0),info->sline,((void*)0),info));
    Value_310=node_compile(node_309,info);
    if(    !Value_310) {
        __result248__ = (_Bool)0;
        if(obj_node_306) { obj_node_306 = come_decrement_ref_count2(obj_node_306, ((struct sNode*)obj_node_306)->finalize, ((struct sNode*)obj_node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_308,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result248__;
    }
    else {
    }
    __result249__ = (_Bool)1;
    if(obj_node_306) { obj_node_306 = come_decrement_ref_count2(obj_node_306, ((struct sNode*)obj_node_306)->finalize, ((struct sNode*)obj_node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(params_308,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_309) { node_309 = come_decrement_ref_count2(node_309, ((struct sNode*)node_309)->finalize, ((struct sNode*)node_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
    return __result249__;
}

static void sRegexNode_finalize(struct sRegexNode* self){
char* __dec_obj128;
char* __dec_obj129;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj128=self->sname;
            /*G*/ __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->str!=((void*)0)) {
        if(        self->str==gComeFunResultObject) {
            __dec_obj129=self->str;
            /*G*/ __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->str = come_decrement_ref_count2(self->str, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value396 = (void*)0;
struct list$1sNodeph* __dec_obj134;
struct sListNode* __result250__;
    ((struct sNodeBase*)(__right_value396=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value396,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj134=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    come_call_finalizer3(__dec_obj134,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result250__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result250__;
}

char* sListNode_kind(struct sListNode* self){
void* __result_obj__=(void*)0;
void* __right_value397 = (void*)0;
char* __result251__;
    __result251__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value397=__builtin_string("sListNode")));
    /* U11 */__right_value397 = come_decrement_ref_count2(__right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result251__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
struct list$1sNodeph* list_elements_311;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
struct list$1CVALUEph* params_312;
struct sType* list_element_type_315;
int n_316;
struct list$1sNodeph* o2_saved_317;
struct sNode* it_318;
void* __right_value400 = (void*)0;
_Bool _if_conditional1;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct sNode* value_node_319;
void* __right_value403 = (void*)0;
void* __right_value404 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_320;
void* __right_value405 = (void*)0;
void* __right_value406 = (void*)0;
void* __right_value407 = (void*)0;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
void* __right_value410 = (void*)0;
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
void* __right_value413 = (void*)0;
struct sNode* exp_321;
void* __right_value414 = (void*)0;
struct sNode* __dec_obj138;
_Bool Value_322;
_Bool __result253__;
_Bool Value_323;
_Bool __result254__;
void* __right_value415 = (void*)0;
struct CVALUE* come_value_324;
void* __right_value416 = (void*)0;
void* __right_value417 = (void*)0;
struct sType* __dec_obj139;
void* __right_value418 = (void*)0;
struct sType* type_values_325;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
char* var_name_330;
void* __right_value424 = (void*)0;
struct sVar* var__331;
void* __right_value425 = (void*)0;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
struct buffer* source_332;
int i_333;
struct list$1CVALUEph* o2_saved_334;
struct CVALUE* it_337;
void* __right_value428 = (void*)0;
char* c_value_340;
void* __right_value429 = (void*)0;
void* __right_value430 = (void*)0;
struct sType* list_type_344;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* obj_type_348;
char* fun_name_349;
void* __right_value436 = (void*)0;
void* __right_value437 = (void*)0;
void* __right_value438 = (void*)0;
char* generics_fun_name_350;
struct sFun* fun_351;
void* __right_value439 = (void*)0;
void* __right_value440 = (void*)0;
char* __dec_obj161;
_Bool __result269__;
void* __right_value441 = (void*)0;
struct sType* result_type_354;
struct sType* type_355;
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct CVALUE* obj_value_356;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct buffer* num_string_357;
void* __right_value446 = (void*)0;
struct sType* type2_358;
void* __right_value447 = (void*)0;
char* type_name_359;
void* __right_value448 = (void*)0;
void* __right_value449 = (void*)0;
char* __dec_obj162;
void* __right_value450 = (void*)0;
struct sType* type3_360;
void* __right_value451 = (void*)0;
struct sType* __dec_obj163;
void* __right_value452 = (void*)0;
void* __right_value453 = (void*)0;
struct list$1CVALUEph* come_params_361;
void* __right_value454 = (void*)0;
void* __right_value455 = (void*)0;
struct CVALUE* come_value2_365;
void* __right_value456 = (void*)0;
char* __dec_obj164;
struct sType* __dec_obj165;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
struct CVALUE* come_value3_366;
void* __right_value459 = (void*)0;
char* __dec_obj166;
struct sType* __dec_obj167;
int j_367;
struct list$1CVALUEph* o2_saved_368;
struct CVALUE* it_369;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
struct CVALUE* come_value4_370;
void* __right_value462 = (void*)0;
char* __dec_obj168;
void* __right_value463 = (void*)0;
struct sType* __dec_obj169;
_Bool __result272__;
    list_elements_311=self->list_elements;
    params_312=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 300, "list$1CVALUEph"))));
    list_element_type_315=((void*)0);
    n_316=0;
    for(    o2_saved_317=(list_elements_311),it_318=list$1sNodeph_begin((o2_saved_317));    !list$1sNodeph_end((o2_saved_317));    it_318=list$1sNodeph_next((o2_saved_317))    ){
        if(        (_if_conditional1=(string_operator_equals(((char*)(__right_value400=it_318->kind(it_318->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value400 = come_decrement_ref_count2(__right_value400, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional1) {
            value_node_319=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value401=xsprintf("Value"))),info));
            /* U11 */__right_value401 = come_decrement_ref_count2(__right_value401, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            params_320=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 308, "list$1tuple2$2charphsNodephph"))));
            list$1tuple2$2charphsNodephph_add(params_320,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 309, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_319))));
            list$1tuple2$2charphsNodephph_add(params_320,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 310, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(n_316,info)))));
            exp_321=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value412=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(value_node_319),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_320),((void*)0),0,((void*)0),info));
            /* U11 */__right_value412 = come_decrement_ref_count2(__right_value412, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            __dec_obj138=exp_321;
            exp_321=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_321,info));
            /* U1 */ if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); };
            Value_322=node_compile(exp_321,info);
            if(            !Value_322) {
                __result253__ = (_Bool)0;
                if(value_node_319) { value_node_319 = come_decrement_ref_count2(value_node_319, ((struct sNode*)value_node_319)->finalize, ((struct sNode*)value_node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_320,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
                if(exp_321) { exp_321 = come_decrement_ref_count2(exp_321, ((struct sNode*)exp_321)->finalize, ((struct sNode*)exp_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(params_312,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_element_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result253__;
            }
            else {
            }
            if(value_node_319) { value_node_319 = come_decrement_ref_count2(value_node_319, ((struct sNode*)value_node_319)->finalize, ((struct sNode*)value_node_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(params_320,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            if(exp_321) { exp_321 = come_decrement_ref_count2(exp_321, ((struct sNode*)exp_321)->finalize, ((struct sNode*)exp_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_323=node_compile(it_318,info);
            if(            !Value_323) {
                __result254__ = (_Bool)0;
                /*i*/come_call_finalizer3(params_312,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_element_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result254__;
            }
            else {
            }
        }
        come_value_324=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        if(        list_element_type_315) {
            check_assign_type(((char*)(__right_value416=xsprintf("invalid list element type"))),list_element_type_315,come_value_324->type,come_value_324,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value416 = come_decrement_ref_count2(__right_value416, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        }
        list$1CVALUEph_push_back(params_312,(struct CVALUE*)come_increment_ref_count(come_value_324));
        __dec_obj139=list_element_type_315;
        list_element_type_315=(struct sType*)come_increment_ref_count(sType_clone(come_value_324->type));
        come_call_finalizer3(__dec_obj139,sType_finalize, 0, 0, 0, 0, (void*)0);
        n_316++;
        /*i*/come_call_finalizer3(come_value_324,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_values_325=(struct sType*)come_increment_ref_count(sType_clone(list_element_type_315));
    list$1sNodeph_push_back(type_values_325->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(params_312),info)));
    type_values_325->mHeap=(_Bool)0;
    static int list_value_num_329=0;
    var_name_330=(char*)come_increment_ref_count(xsprintf("__list_values%d__",++list_value_num_329));
    add_variable_to_table(var_name_330,(struct sType*)come_increment_ref_count(sType_clone(type_values_325)),info);
    var__331=get_variable_from_table(info->lv_table,var_name_330);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value425=make_define_var(type_values_325,var__331->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value425 = come_decrement_ref_count2(__right_value425, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_332=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 351, "buffer"))));
    buffer_append_str(source_332,"(");
    i_333=0;
    for(    o2_saved_334=(struct list$1CVALUEph*)come_increment_ref_count((params_312)),it_337=list$1CVALUEph_begin((o2_saved_334));    !list$1CVALUEph_end((o2_saved_334));    it_337=list$1CVALUEph_next((o2_saved_334))    ){
        if(        list_element_type_315->mHeap) {
            c_value_340=(char*)come_increment_ref_count(increment_ref_count_object(((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_312,i_333), "06str.c", 358, 0))->type,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_312,i_333), "06str.c", 358, 1))->c_value,info));
            buffer_append_format(source_332,"%s[%d]=%s,\n",var__331->mCValueName,i_333,c_value_340);
            /* U13 */c_value_340 = come_decrement_ref_count2(c_value_340, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_332,"%s[%d]=%s,\n",var__331->mCValueName,i_333,((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(params_312,i_333), "06str.c", 362, 2))->c_value);
        }
        i_333++;
    }
    /*i*/come_call_finalizer3(o2_saved_334,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    list_type_344=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 371, "sType")),"list",(_Bool)0,info));
    list$1sTypeph_push_back(list_type_344->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(list_element_type_315)));
    obj_type_348=(struct sType*)come_increment_ref_count(sType_clone(list_type_344));
    fun_name_349="initialize_with_values";
    generics_fun_name_350=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value437=make_generics_function(obj_type_348,(char*)come_increment_ref_count(__builtin_string(fun_name_349)),info,(_Bool)1)))));
    /* U11 */__right_value437 = come_decrement_ref_count2(__right_value437, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_351=map$2charphsFunph_at(info->funcs,generics_fun_name_350,((void*)0));
    if(    fun_351==((void*)0)) {
        __dec_obj161=generics_fun_name_350;
        generics_fun_name_350=(char*)come_increment_ref_count(create_method_name(obj_type_348,(_Bool)0,((char*)(__right_value439=__builtin_string(fun_name_349))),info,(_Bool)1));
        /*G*/ __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value439 = come_decrement_ref_count2(__right_value439, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_351=map$2charphsFunph_at(info->funcs,generics_fun_name_350,((void*)0));
        if(        fun_351==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_350,info->come_fun->mName);
            __result269__ = (_Bool)1;
            /*i*/come_call_finalizer3(params_312,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_element_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_values_325,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_330 = come_decrement_ref_count2(var_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_350 = come_decrement_ref_count2(generics_fun_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result269__;
        }
    }
    result_type_354=(struct sType*)come_increment_ref_count(sType_clone(fun_351->mResultType));
    result_type_354->mStatic=(_Bool)0;
    type_355=list_type_344;
    obj_value_356=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 397, "CVALUE"))));
    num_string_357=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 399, "buffer"))));
    buffer_append_str(num_string_357,"1");
    type2_358=(struct sType*)come_increment_ref_count(solve_generics(type_355,type_355,info));
    type_name_359=(char*)come_increment_ref_count(make_type_name_string(type2_358,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj162=obj_value_356->c_value;
    obj_value_356->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_359,type_name_359,((char*)(__right_value448=buffer_to_string(num_string_357))),info->sname,info->sline,type_name_359));
    /*G*/ __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value448 = come_decrement_ref_count2(__right_value448, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_360=(struct sType*)come_increment_ref_count(sType_clone(type2_358));
    type3_360->mPointerNum++;
    type3_360->mHeap=(_Bool)1;
    type2_358->mHeap=(_Bool)1;
    __dec_obj163=obj_value_356->type;
    obj_value_356->type=(struct sType*)come_increment_ref_count(sType_clone(type2_358));
    come_call_finalizer3(__dec_obj163,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_356->type->mPointerNum++;
    obj_value_356->var=((void*)0);
    append_object_to_right_values2(obj_value_356,(struct sType*)come_increment_ref_count(type3_360),info,(_Bool)0);
    come_params_361=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 419, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_351->mParamTypes,0), "06str.c", 421, 3))->mHeap&&obj_value_356->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_351->mParamTypes,0), "06str.c", 422, 4)),obj_value_356->type,obj_value_356,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_361,(struct CVALUE*)come_increment_ref_count(obj_value_356));
    come_value2_365=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 426, "CVALUE"))));
    __dec_obj164=come_value2_365->c_value;
    come_value2_365->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(params_312)));
    /*G*/ __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj165=come_value2_365->type;
    come_value2_365->type=((void*)0);
    come_call_finalizer3(__dec_obj165,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_365->var=((void*)0);
    list$1CVALUEph_push_back(come_params_361,(struct CVALUE*)come_increment_ref_count(come_value2_365));
    come_value3_366=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 434, "CVALUE"))));
    __dec_obj166=come_value3_366->c_value;
    come_value3_366->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__331->mCValueName));
    /*G*/ __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=come_value3_366->type;
    come_value3_366->type=((void*)0);
    come_call_finalizer3(__dec_obj167,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_366->var=((void*)0);
    list$1CVALUEph_push_back(come_params_361,(struct CVALUE*)come_increment_ref_count(come_value3_366));
    buffer_append_str(source_332,generics_fun_name_350);
    buffer_append_str(source_332,"(");
    j_367=0;
    for(    o2_saved_368=(struct list$1CVALUEph*)come_increment_ref_count((come_params_361)),it_369=list$1CVALUEph_begin((o2_saved_368));    !list$1CVALUEph_end((o2_saved_368));    it_369=list$1CVALUEph_next((o2_saved_368))    ){
        buffer_append_str(source_332,it_369->c_value);
        if(        j_367!=list$1CVALUEph_length(come_params_361)-1) {
            buffer_append_str(source_332,",");
        }
        j_367++;
    }
    /*i*/come_call_finalizer3(o2_saved_368,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_332,")");
    buffer_append_str(source_332,")");
    come_value4_370=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 460, "CVALUE"))));
    __dec_obj168=come_value4_370->c_value;
    come_value4_370->c_value=(char*)come_increment_ref_count(buffer_to_string(source_332));
    /*G*/ __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj169=come_value4_370->type;
    come_value4_370->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_354));
    come_call_finalizer3(__dec_obj169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_370->type->mStatic=(_Bool)0;
    come_value4_370->var=((void*)0);
    if(    result_type_354->mHeap) {
        append_object_to_right_values2(come_value4_370,(struct sType*)come_increment_ref_count(result_type_354),info,(_Bool)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_370));
    add_come_last_code(info,"%s",come_value4_370->c_value);
    __result272__ = (_Bool)1;
    /*i*/come_call_finalizer3(params_312,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_element_type_315,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_values_325,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_330 = come_decrement_ref_count2(var_name_330, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_332,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(list_type_344,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_348,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_350 = come_decrement_ref_count2(generics_fun_name_350, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_354,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_356,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_357,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_358,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_359 = come_decrement_ref_count2(type_name_359, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_360,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_361,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_365,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_366,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_370,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result272__;
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct list$1CVALUEph* __result252__;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result252__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,list$1CVALUEphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result252__;
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
struct list_item$1CVALUEph* it_313;
struct list_item$1CVALUEph* prev_it_314;
    it_313=self->head;
    while(it_313!=((void*)0)) {
        prev_it_314=it_313;
        it_313=it_313->next;
        /*i*/come_call_finalizer3(prev_it_314,list_item$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
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
            /*i*/come_call_finalizer3(self->item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__=(void*)0;
void* __right_value419 = (void*)0;
struct list_item$1sNodeph* litem_326;
struct sNode* __dec_obj140;
void* __right_value420 = (void*)0;
struct list_item$1sNodeph* litem_327;
struct sNode* __dec_obj141;
void* __right_value421 = (void*)0;
struct list_item$1sNodeph* litem_328;
struct sNode* __dec_obj142;
struct list$1sNodeph* __result255__;
    if(    self->len==0) {
        litem_326=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value419=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1106, "list_item$1sNodeph"))));
        litem_326->prev=((void*)0);
        litem_326->next=((void*)0);
        __dec_obj140=litem_326->item;
        litem_326->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_326;
        self->head=litem_326;
    }
    else if(    self->len==1) {
        litem_327=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value420=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1116, "list_item$1sNodeph"))));
        litem_327->prev=self->head;
        litem_327->next=((void*)0);
        __dec_obj141=litem_327->item;
        litem_327->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_327;
        self->head->next=litem_327;
    }
    else {
        litem_328=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(__right_value421=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang.h", 1126, "list_item$1sNodeph"))));
        litem_328->prev=self->tail;
        litem_328->next=((void*)0);
        __dec_obj142=litem_328->item;
        litem_328->item=(struct sNode*)come_increment_ref_count(item);
        /* U1 */ if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_328;
        self->tail=litem_328;
    }
    self->len++;
    __result255__ = gComeFunResultObject = __result_obj__ = self;
    if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 0, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result255__;
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_335;
struct CVALUE* __result256__;
struct CVALUE* __result257__;
struct CVALUE* result_336;
struct CVALUE* __result258__;
result_335 = (void*)0;
result_336 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_335,0,sizeof(struct CVALUE*));
        __result256__ = gComeFunResultObject = __result_obj__ = result_335;
        gComeFunResultObject = (void*)0;
        return __result256__;
    }
    self->it=self->head;
    if(    self->it) {
        __result257__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result257__;
    }
    memset(&result_336,0,sizeof(struct CVALUE*));
    __result258__ = gComeFunResultObject = __result_obj__ = result_336;
    gComeFunResultObject = (void*)0;
    return __result258__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__=(void*)0;
struct CVALUE* result_338;
struct CVALUE* __result259__;
struct CVALUE* __result260__;
struct CVALUE* result_339;
struct CVALUE* __result261__;
result_338 = (void*)0;
result_339 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_338,0,sizeof(struct CVALUE*));
        __result259__ = gComeFunResultObject = __result_obj__ = result_338;
        gComeFunResultObject = (void*)0;
        return __result259__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result260__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result260__;
    }
    memset(&result_339,0,sizeof(struct CVALUE*));
    __result261__ = gComeFunResultObject = __result_obj__ = result_339;
    gComeFunResultObject = (void*)0;
    return __result261__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1CVALUEph* it_341;
int i_342;
struct CVALUE* __result262__;
struct CVALUE* default_value_343;
struct CVALUE* __result263__;
default_value_343 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_341=self->head;
    i_342=0;
    while(it_341!=((void*)0)) {
        if(        position==i_342) {
            __result262__ = gComeFunResultObject = __result_obj__ = it_341->item;
            gComeFunResultObject = (void*)0;
            return __result262__;
        }
        it_341=it_341->next;
        i_342++;
    }
    memset(&default_value_343,0,sizeof(struct CVALUE*));
    __result263__ = gComeFunResultObject = __result_obj__ = default_value_343;
    /*i*/come_call_finalizer3(default_value_343,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result263__;
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__=(void*)0;
void* __right_value431 = (void*)0;
struct list_item$1sTypeph* litem_345;
struct sType* __dec_obj143;
void* __right_value432 = (void*)0;
struct list_item$1sTypeph* litem_346;
struct sType* __dec_obj144;
void* __right_value433 = (void*)0;
struct list_item$1sTypeph* litem_347;
struct sType* __dec_obj145;
struct list$1sTypeph* __result264__;
    if(    self->len==0) {
        litem_345=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value431=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1106, "list_item$1sTypeph"))));
        litem_345->prev=((void*)0);
        litem_345->next=((void*)0);
        __dec_obj143=litem_345->item;
        litem_345->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj143,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_345;
        self->head=litem_345;
    }
    else if(    self->len==1) {
        litem_346=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value432=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1116, "list_item$1sTypeph"))));
        litem_346->prev=self->head;
        litem_346->next=((void*)0);
        __dec_obj144=litem_346->item;
        litem_346->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj144,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_346;
        self->head->next=litem_346;
    }
    else {
        litem_347=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(__right_value433=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang.h", 1126, "list_item$1sTypeph"))));
        litem_347->prev=self->tail;
        litem_347->next=((void*)0);
        __dec_obj145=litem_347->item;
        litem_347->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj145,sType_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_347;
        self->tail=litem_347;
    }
    self->len++;
    __result264__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result264__;
}

static struct sFun* map$2charphsFunph_at(struct map$2charphsFunph* self, char* key, struct sFun* default_value){
void* __result_obj__=(void*)0;
unsigned int hash_352;
unsigned int it_353;
struct sFun* __result265__;
struct sFun* __result266__;
struct sFun* __result267__;
struct sFun* __result268__;
    hash_352=charp_get_hash_key(((char*)key))%self->size;
    it_353=hash_352;
    while((_Bool)1) {
        if(        self->item_existance[it_353]) {
            if(            charp_equals(self->keys[it_353],key)) {
                __result265__ = gComeFunResultObject = __result_obj__ = self->items[it_353];
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result265__;
            }
            it_353++;
            if(            it_353>=self->size) {
                it_353=0;
            }
            else if(            it_353==hash_352) {
                __result266__ = gComeFunResultObject = __result_obj__ = default_value;
                /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                gComeFunResultObject = (void*)0;
                return __result266__;
            }
        }
        else {
            __result267__ = gComeFunResultObject = __result_obj__ = default_value;
            /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            gComeFunResultObject = (void*)0;
            return __result267__;
        }
    }
    __result268__ = gComeFunResultObject = __result_obj__ = default_value;
    /*i*/come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result268__;
}

static void sFun_finalize(struct sFun* self){
char* __dec_obj146;
struct sType* __dec_obj147;
struct list$1sTypeph* __dec_obj148;
struct list$1charph* __dec_obj149;
struct list$1charph* __dec_obj150;
struct sType* __dec_obj151;
struct sBlock* __dec_obj152;
struct buffer* __dec_obj155;
struct buffer* __dec_obj156;
struct buffer* __dec_obj157;
struct buffer* __dec_obj158;
char* __dec_obj159;
char* __dec_obj160;
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        if(        self->mName==gComeFunResultObject) {
            __dec_obj146=self->mName;
            /*G*/ __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        if(        self->mResultType==gComeFunResultObject) {
            __dec_obj147=self->mResultType;
            come_call_finalizer3(__dec_obj147,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        if(        self->mParamTypes==gComeFunResultObject) {
            __dec_obj148=self->mParamTypes;
            come_call_finalizer3(__dec_obj148,list$1sTypeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamTypes,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        if(        self->mParamNames==gComeFunResultObject) {
            __dec_obj149=self->mParamNames;
            come_call_finalizer3(__dec_obj149,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamNames,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        if(        self->mParamDefaultParametors==gComeFunResultObject) {
            __dec_obj150=self->mParamDefaultParametors;
            come_call_finalizer3(__dec_obj150,list$1charph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mParamDefaultParametors,list$1charphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        if(        self->mLambdaType==gComeFunResultObject) {
            __dec_obj151=self->mLambdaType;
            come_call_finalizer3(__dec_obj151,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        if(        self->mBlock==gComeFunResultObject) {
            __dec_obj152=self->mBlock;
            come_call_finalizer3(__dec_obj152,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        if(        self->mSource==gComeFunResultObject) {
            __dec_obj155=self->mSource;
            come_call_finalizer3(__dec_obj155,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        if(        self->mSourceHead==gComeFunResultObject) {
            __dec_obj156=self->mSourceHead;
            come_call_finalizer3(__dec_obj156,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        if(        self->mSourceHead2==gComeFunResultObject) {
            __dec_obj157=self->mSourceHead2;
            come_call_finalizer3(__dec_obj157,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        if(        self->mSourceDefer==gComeFunResultObject) {
            __dec_obj158=self->mSourceDefer;
            come_call_finalizer3(__dec_obj158,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mComeHeader!=((void*)0)) {
        if(        self->mComeHeader==gComeFunResultObject) {
            __dec_obj159=self->mComeHeader;
            /*G*/ __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mDeclareSName!=((void*)0)) {
        if(        self->mDeclareSName==gComeFunResultObject) {
            __dec_obj160=self->mDeclareSName;
            /*G*/ __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static void sBlock_finalize(struct sBlock* self){
struct list$1sNodeph* __dec_obj153;
struct sVarTable* __dec_obj154;
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        if(        self->mNodes==gComeFunResultObject) {
            __dec_obj153=self->mNodes;
            come_call_finalizer3(__dec_obj153,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mNodes,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        if(        self->mVarTable==gComeFunResultObject) {
            __dec_obj154=self->mVarTable;
            come_call_finalizer3(__dec_obj154,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sTypeph* it_362;
int i_363;
struct sType* __result270__;
struct sType* default_value_364;
struct sType* __result271__;
default_value_364 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_362=self->head;
    i_363=0;
    while(it_362!=((void*)0)) {
        if(        position==i_363) {
            __result270__ = gComeFunResultObject = __result_obj__ = it_362->item;
            gComeFunResultObject = (void*)0;
            return __result270__;
        }
        it_362=it_362->next;
        i_363++;
    }
    memset(&default_value_364,0,sizeof(struct sType*));
    __result271__ = gComeFunResultObject = __result_obj__ = default_value_364;
    /*i*/come_call_finalizer3(default_value_364,sType_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result271__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1tuple2$2charphsNodephph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value464 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj170;
struct sTupleNode* __result273__;
    ((struct sNodeBase*)(__right_value464=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value464,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj170=self->tuple_elements;
    self->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj170,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    __result273__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result273__;
}

char* sTupleNode_kind(struct sTupleNode* self){
void* __result_obj__=(void*)0;
void* __right_value465 = (void*)0;
char* __result274__;
    __result274__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value465=__builtin_string("sTupleNode")));
    /* U11 */__right_value465 = come_decrement_ref_count2(__right_value465, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result274__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
struct list$1tuple2$2charphsNodephph* tuple_elements_373;
void* __right_value466 = (void*)0;
void* __right_value467 = (void*)0;
struct list$1sTypeph* tuple_types_374;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
struct list$1CVALUEph* tuple_values_375;
int n_376;
struct list$1tuple2$2charphsNodephph* o2_saved_377;
struct tuple2$2charphsNodeph* it_380;
struct tuple2$2charphsNodeph* multiple_assign_var1 = (void*)0;
char* name_383=0;
struct sNode* node_384=0;
void* __right_value470 = (void*)0;
_Bool _if_conditional2;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
struct sNode* value_node_385;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
struct sNode* exp_386;
_Bool Value_387;
_Bool __result281__;
_Bool Value_388;
_Bool __result282__;
void* __right_value475 = (void*)0;
struct CVALUE* come_value_389;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
struct sType* type_391;
char* __dec_obj176;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
struct sType* type_392;
struct list$1sTypeph* o2_saved_393;
struct sType* it_396;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
struct CVALUE* obj_value_399;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct buffer* num_string_400;
void* __right_value490 = (void*)0;
struct sType* type2_401;
void* __right_value491 = (void*)0;
char* type_name_402;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
char* __dec_obj177;
void* __right_value494 = (void*)0;
struct sType* type3_403;
void* __right_value495 = (void*)0;
struct sType* __dec_obj178;
void* __right_value496 = (void*)0;
struct sType* obj_type_404;
char* fun_name_405;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
char* generics_fun_name_406;
struct sFun* fun_407;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
char* __dec_obj179;
_Bool __result291__;
void* __right_value502 = (void*)0;
struct sType* result_type_408;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1CVALUEph* come_params_409;
int i_410;
struct list$1CVALUEph* o2_saved_411;
struct CVALUE* it_412;
void* __right_value505 = (void*)0;
struct CVALUE* come_value_413;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct buffer* buf_414;
int j_415;
struct list$1CVALUEph* o2_saved_416;
struct CVALUE* it_417;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct CVALUE* come_value2_418;
void* __right_value510 = (void*)0;
char* __dec_obj180;
void* __right_value511 = (void*)0;
struct sType* __dec_obj181;
_Bool __result292__;
    tuple_elements_373=self->tuple_elements;
    tuple_types_374=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 497, "list$1sTypeph"))));
    tuple_values_375=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 498, "list$1CVALUEph"))));
    n_376=0;
    for(    o2_saved_377=(tuple_elements_373),it_380=list$1tuple2$2charphsNodephph_begin((o2_saved_377));    !list$1tuple2$2charphsNodephph_end((o2_saved_377));    it_380=list$1tuple2$2charphsNodephph_next((o2_saved_377))    ){
        multiple_assign_var1=it_380;
        name_383=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        node_384=(struct sNode*)come_increment_ref_count(multiple_assign_var1->v2);
        if(        (_if_conditional2=(string_operator_equals(((char*)(__right_value470=node_384->kind(node_384->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional2) {
            value_node_385=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value471=xsprintf("Value"))),info));
            /* U11 */__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            exp_386=(struct sNode*)come_increment_ref_count(load_field((struct sNode*)come_increment_ref_count(value_node_385),(char*)come_increment_ref_count(xsprintf("v%d",n_376+1)),info));
            Value_387=node_compile(exp_386,info);
            if(            !Value_387) {
                __result281__ = (_Bool)0;
                if(value_node_385) { value_node_385 = come_decrement_ref_count2(value_node_385, ((struct sNode*)value_node_385)->finalize, ((struct sNode*)value_node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_386) { exp_386 = come_decrement_ref_count2(exp_386, ((struct sNode*)exp_386)->finalize, ((struct sNode*)exp_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /* U13 */name_383 = come_decrement_ref_count2(name_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(tuple_types_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(tuple_values_375,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result281__;
            }
            else {
            }
            if(value_node_385) { value_node_385 = come_decrement_ref_count2(value_node_385, ((struct sNode*)value_node_385)->finalize, ((struct sNode*)value_node_385)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_386) { exp_386 = come_decrement_ref_count2(exp_386, ((struct sNode*)exp_386)->finalize, ((struct sNode*)exp_386)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            Value_388=node_compile(node_384,info);
            if(            !Value_388) {
                __result282__ = (_Bool)0;
                /* U13 */name_383 = come_decrement_ref_count2(name_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(tuple_types_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(tuple_values_375,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                return __result282__;
            }
            else {
            }
        }
        come_value_389=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_375,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_389)));
        type_391=(struct sType*)come_increment_ref_count(sType_clone(come_value_389->type));
        __dec_obj176=type_391->mTupleName;
        type_391->mTupleName=(char*)come_increment_ref_count(name_383);
        /*G*/ __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        list$1sTypeph_push_back(tuple_types_374,(struct sType*)come_increment_ref_count(type_391));
        n_376++;
        /* U13 */name_383 = come_decrement_ref_count2(name_383, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_384) { node_384 = come_decrement_ref_count2(node_384, ((struct sNode*)node_384)->finalize, ((struct sNode*)node_384)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(come_value_389,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(type_391,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_392=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 528, "sType")),((char*)(__right_value483=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_374)))),(_Bool)0,info));
    /* U11 */__right_value483 = come_decrement_ref_count2(__right_value483, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_393=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_374)),it_396=list$1sTypeph_begin((o2_saved_393));    !list$1sTypeph_end((o2_saved_393));    it_396=list$1sTypeph_next((o2_saved_393))    ){
        list$1sTypeph_push_back(type_392->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_396)));
    }
    /*i*/come_call_finalizer3(o2_saved_393,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_399=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 534, "CVALUE"))));
    num_string_400=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 536, "buffer"))));
    buffer_append_str(num_string_400,"1");
    type2_401=(struct sType*)come_increment_ref_count(solve_generics(type_392,type_392,info));
    type_name_402=(char*)come_increment_ref_count(make_type_name_string(type2_401,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj177=obj_value_399->c_value;
    obj_value_399->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_402,type_name_402,((char*)(__right_value492=buffer_to_string(num_string_400))),info->sname,info->sline,type_name_402));
    /*G*/ __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value492 = come_decrement_ref_count2(__right_value492, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_403=(struct sType*)come_increment_ref_count(sType_clone(type2_401));
    type3_403->mPointerNum++;
    type3_403->mHeap=(_Bool)1;
    type2_401->mHeap=(_Bool)1;
    __dec_obj178=obj_value_399->type;
    obj_value_399->type=(struct sType*)come_increment_ref_count(sType_clone(type2_401));
    come_call_finalizer3(__dec_obj178,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_399->type->mPointerNum++;
    obj_value_399->var=((void*)0);
    append_object_to_right_values2(obj_value_399,(struct sType*)come_increment_ref_count(type3_403),info,(_Bool)0);
    obj_type_404=(struct sType*)come_increment_ref_count(sType_clone(type2_401));
    fun_name_405="initialize";
    generics_fun_name_406=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value498=make_generics_function(obj_type_404,(char*)come_increment_ref_count(__builtin_string(fun_name_405)),info,(_Bool)1)))));
    /* U11 */__right_value498 = come_decrement_ref_count2(__right_value498, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_407=map$2charphsFunph_at(info->funcs,generics_fun_name_406,((void*)0));
    if(    fun_407==((void*)0)) {
        __dec_obj179=generics_fun_name_406;
        generics_fun_name_406=(char*)come_increment_ref_count(create_method_name(obj_type_404,(_Bool)0,((char*)(__right_value500=__builtin_string(fun_name_405))),info,(_Bool)1));
        /*G*/ __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_407=map$2charphsFunph_at(info->funcs,generics_fun_name_406,((void*)0));
        if(        fun_407==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_406,info->come_fun->mName);
            __result291__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_375,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_399,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_402 = come_decrement_ref_count2(type_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_403,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_404,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_406 = come_decrement_ref_count2(generics_fun_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result291__;
        }
    }
    result_type_408=(struct sType*)come_increment_ref_count(sType_clone(fun_407->mResultType));
    result_type_408->mStatic=(_Bool)0;
    come_params_409=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 577, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_407->mParamTypes,0), "06str.c", 579, 5))->mHeap&&obj_value_399->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_407->mParamTypes,0), "06str.c", 580, 6)),obj_value_399->type,obj_value_399,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_409,(struct CVALUE*)come_increment_ref_count(obj_value_399));
    i_410=1;
    for(    o2_saved_411=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_375)),it_412=list$1CVALUEph_begin((o2_saved_411));    !list$1CVALUEph_end((o2_saved_411));    it_412=list$1CVALUEph_next((o2_saved_411))    ){
        come_value_413=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_412));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_407->mParamTypes,i_410), "06str.c", 588, 7))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_407->mParamTypes,i_410), "06str.c", 588, 8))->mHeap&&come_value_413->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_407->mParamTypes,i_410), "06str.c", 589, 9)),come_value_413->type,come_value_413,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_409,(struct CVALUE*)come_increment_ref_count(come_value_413));
        i_410++;
        /*i*/come_call_finalizer3(come_value_413,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_411,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_414=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 596, "buffer"))));
    buffer_append_str(buf_414,generics_fun_name_406);
    buffer_append_str(buf_414,"(");
    j_415=0;
    for(    o2_saved_416=(struct list$1CVALUEph*)come_increment_ref_count((come_params_409)),it_417=list$1CVALUEph_begin((o2_saved_416));    !list$1CVALUEph_end((o2_saved_416));    it_417=list$1CVALUEph_next((o2_saved_416))    ){
        buffer_append_str(buf_414,it_417->c_value);
        if(        j_415!=list$1CVALUEph_length(come_params_409)-1) {
            buffer_append_str(buf_414,",");
        }
        j_415++;
    }
    /*i*/come_call_finalizer3(o2_saved_416,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_414,")");
    come_value2_418=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 613, "CVALUE"))));
    __dec_obj180=come_value2_418->c_value;
    come_value2_418->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_414));
    /*G*/ __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj181=come_value2_418->type;
    come_value2_418->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_408));
    come_call_finalizer3(__dec_obj181,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_418->type->mStatic=(_Bool)0;
    come_value2_418->var=((void*)0);
    if(    result_type_408->mHeap) {
        append_object_to_right_values2(come_value2_418,(struct sType*)come_increment_ref_count(result_type_408),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_418->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_418));
    __result292__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_374,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_375,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_392,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_399,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_400,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_401,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_402 = come_decrement_ref_count2(type_name_402, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_403,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_404,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_406 = come_decrement_ref_count2(generics_fun_name_406, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_408,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_409,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_414,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_418,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result292__;
}

static void list$1tuple2$2charphsNodephph_finalize(struct list$1tuple2$2charphsNodephph* self){
struct list_item$1tuple2$2charphsNodephph* it_371;
struct list_item$1tuple2$2charphsNodephph* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        /*i*/come_call_finalizer3(prev_it_372,list_item$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_begin(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_378;
struct tuple2$2charphsNodeph* __result275__;
struct tuple2$2charphsNodeph* __result276__;
struct tuple2$2charphsNodeph* result_379;
struct tuple2$2charphsNodeph* __result277__;
result_378 = (void*)0;
result_379 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_378,0,sizeof(struct tuple2$2charphsNodeph*));
        __result275__ = gComeFunResultObject = __result_obj__ = result_378;
        gComeFunResultObject = (void*)0;
        return __result275__;
    }
    self->it=self->head;
    if(    self->it) {
        __result276__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result276__;
    }
    memset(&result_379,0,sizeof(struct tuple2$2charphsNodeph*));
    __result277__ = gComeFunResultObject = __result_obj__ = result_379;
    gComeFunResultObject = (void*)0;
    return __result277__;
}

static _Bool list$1tuple2$2charphsNodephph_end(struct list$1tuple2$2charphsNodephph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2charphsNodeph* list$1tuple2$2charphsNodephph_next(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* result_381;
struct tuple2$2charphsNodeph* __result278__;
struct tuple2$2charphsNodeph* __result279__;
struct tuple2$2charphsNodeph* result_382;
struct tuple2$2charphsNodeph* __result280__;
result_381 = (void*)0;
result_382 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_381,0,sizeof(struct tuple2$2charphsNodeph*));
        __result278__ = gComeFunResultObject = __result_obj__ = result_381;
        gComeFunResultObject = (void*)0;
        return __result278__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result279__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result279__;
    }
    memset(&result_382,0,sizeof(struct tuple2$2charphsNodeph*));
    __result280__ = gComeFunResultObject = __result_obj__ = result_382;
    gComeFunResultObject = (void*)0;
    return __result280__;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__=(void*)0;
struct CVALUE* __result283__;
void* __right_value476 = (void*)0;
struct CVALUE* result_390;
void* __right_value477 = (void*)0;
char* __dec_obj173;
void* __right_value478 = (void*)0;
struct sType* __dec_obj174;
void* __right_value479 = (void*)0;
char* __dec_obj175;
struct CVALUE* __result284__;
    if(    self==(void*)0) {
        __result283__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result283__;
    }
    result_390=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "CVALUE"));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj173=result_390->c_value;
        result_390->c_value=(char*)come_increment_ref_count(string_clone(self->c_value));
        /*G*/ __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj174=result_390->type;
        result_390->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj174,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_390->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_390->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj175=result_390->c_value_without_right_value_objects;
        result_390->c_value_without_right_value_objects=(char*)come_increment_ref_count(string_clone(self->c_value_without_right_value_objects));
        /*G*/ __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result284__ = gComeFunResultObject = __result_obj__ = result_390;
    /*i*/come_call_finalizer3(result_390,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result284__;
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_394;
struct sType* __result285__;
struct sType* __result286__;
struct sType* result_395;
struct sType* __result287__;
result_394 = (void*)0;
result_395 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_394,0,sizeof(struct sType*));
        __result285__ = gComeFunResultObject = __result_obj__ = result_394;
        gComeFunResultObject = (void*)0;
        return __result285__;
    }
    self->it=self->head;
    if(    self->it) {
        __result286__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result286__;
    }
    memset(&result_395,0,sizeof(struct sType*));
    __result287__ = gComeFunResultObject = __result_obj__ = result_395;
    gComeFunResultObject = (void*)0;
    return __result287__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__=(void*)0;
struct sType* result_397;
struct sType* __result288__;
struct sType* __result289__;
struct sType* result_398;
struct sType* __result290__;
result_397 = (void*)0;
result_398 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_397,0,sizeof(struct sType*));
        __result288__ = gComeFunResultObject = __result_obj__ = result_397;
        gComeFunResultObject = (void*)0;
        return __result288__;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result289__ = gComeFunResultObject = __result_obj__ = self->it->item;
        gComeFunResultObject = (void*)0;
        return __result289__;
    }
    memset(&result_398,0,sizeof(struct sType*));
    __result290__ = gComeFunResultObject = __result_obj__ = result_398;
    gComeFunResultObject = (void*)0;
    return __result290__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value512 = (void*)0;
struct list$1sNodeph* __dec_obj182;
struct sSomeNode* __result293__;
    ((struct sNodeBase*)(__right_value512=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value512,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj182=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj182,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result293__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result293__;
}

char* sSomeNode_kind(struct sSomeNode* self){
void* __result_obj__=(void*)0;
void* __right_value513 = (void*)0;
char* __result294__;
    __result294__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value513=__builtin_string("sSomeNode")));
    /* U11 */__right_value513 = come_decrement_ref_count2(__right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result294__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_419;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
struct list$1sTypeph* tuple_types_420;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
struct list$1CVALUEph* tuple_values_421;
struct list$1sNodeph* o2_saved_422;
struct sNode* it_423;
_Bool Value_424;
_Bool __result295__;
void* __right_value518 = (void*)0;
struct CVALUE* come_value_425;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
struct sType* type_426;
struct list$1sTypeph* o2_saved_427;
struct sType* it_428;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
struct CVALUE* obj_value_429;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
struct buffer* num_string_430;
void* __right_value529 = (void*)0;
struct sType* type2_431;
void* __right_value530 = (void*)0;
char* type_name_432;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
char* __dec_obj185;
void* __right_value533 = (void*)0;
struct sType* type3_433;
void* __right_value534 = (void*)0;
struct sType* __dec_obj186;
void* __right_value535 = (void*)0;
struct sType* obj_type_434;
char* fun_name_435;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
char* generics_fun_name_436;
struct sFun* fun_437;
void* __right_value539 = (void*)0;
void* __right_value540 = (void*)0;
char* __dec_obj187;
_Bool __result296__;
void* __right_value541 = (void*)0;
struct sType* result_type_438;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
struct list$1CVALUEph* come_params_439;
int i_440;
struct list$1CVALUEph* o2_saved_441;
struct CVALUE* it_442;
void* __right_value544 = (void*)0;
struct CVALUE* come_value_443;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
struct buffer* buf_444;
int j_445;
struct list$1CVALUEph* o2_saved_446;
struct CVALUE* it_447;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
struct CVALUE* come_value2_448;
void* __right_value549 = (void*)0;
char* __dec_obj188;
void* __right_value550 = (void*)0;
struct sType* __dec_obj189;
_Bool __result297__;
    tuple_elements_419=self->tuple_elements;
    tuple_types_420=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 650, "list$1sTypeph"))));
    tuple_values_421=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 651, "list$1CVALUEph"))));
    for(    o2_saved_422=(tuple_elements_419),it_423=list$1sNodeph_begin((o2_saved_422));    !list$1sNodeph_end((o2_saved_422));    it_423=list$1sNodeph_next((o2_saved_422))    ){
        Value_424=node_compile(it_423,info);
        if(        !Value_424) {
            __result295__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_420,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result295__;
        }
        else {
        }
        come_value_425=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_421,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_425)));
        list$1sTypeph_push_back(tuple_types_420,(struct sType*)come_increment_ref_count(sType_clone(come_value_425->type)));
        /*i*/come_call_finalizer3(come_value_425,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_426=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 665, "sType")),((char*)(__right_value522=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_420)))),(_Bool)0,info));
    /* U11 */__right_value522 = come_decrement_ref_count2(__right_value522, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_427=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_420)),it_428=list$1sTypeph_begin((o2_saved_427));    !list$1sTypeph_end((o2_saved_427));    it_428=list$1sTypeph_next((o2_saved_427))    ){
        list$1sTypeph_push_back(type_426->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_428)));
    }
    /*i*/come_call_finalizer3(o2_saved_427,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_429=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 671, "CVALUE"))));
    num_string_430=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 673, "buffer"))));
    buffer_append_str(num_string_430,"1");
    type2_431=(struct sType*)come_increment_ref_count(solve_generics(type_426,type_426,info));
    type_name_432=(char*)come_increment_ref_count(make_type_name_string(type2_431,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj185=obj_value_429->c_value;
    obj_value_429->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_432,type_name_432,((char*)(__right_value531=buffer_to_string(num_string_430))),info->sname,info->sline,type_name_432));
    /*G*/ __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value531 = come_decrement_ref_count2(__right_value531, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_433=(struct sType*)come_increment_ref_count(sType_clone(type2_431));
    type3_433->mPointerNum++;
    type3_433->mHeap=(_Bool)1;
    type2_431->mHeap=(_Bool)1;
    __dec_obj186=obj_value_429->type;
    obj_value_429->type=(struct sType*)come_increment_ref_count(sType_clone(type2_431));
    come_call_finalizer3(__dec_obj186,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_429->type->mPointerNum++;
    obj_value_429->var=((void*)0);
    append_object_to_right_values2(obj_value_429,(struct sType*)come_increment_ref_count(type3_433),info,(_Bool)0);
    obj_type_434=(struct sType*)come_increment_ref_count(sType_clone(type2_431));
    fun_name_435="initialize";
    generics_fun_name_436=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value537=make_generics_function(obj_type_434,(char*)come_increment_ref_count(__builtin_string(fun_name_435)),info,(_Bool)1)))));
    /* U11 */__right_value537 = come_decrement_ref_count2(__right_value537, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_437=map$2charphsFunph_at(info->funcs,generics_fun_name_436,((void*)0));
    if(    fun_437==((void*)0)) {
        __dec_obj187=generics_fun_name_436;
        generics_fun_name_436=(char*)come_increment_ref_count(create_method_name(obj_type_434,(_Bool)0,((char*)(__right_value539=__builtin_string(fun_name_435))),info,(_Bool)1));
        /*G*/ __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value539 = come_decrement_ref_count2(__right_value539, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_437=map$2charphsFunph_at(info->funcs,generics_fun_name_436,((void*)0));
        if(        fun_437==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_436,info->come_fun->mName);
            __result296__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_420,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_430,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_432 = come_decrement_ref_count2(type_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_433,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_436 = come_decrement_ref_count2(generics_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result296__;
        }
    }
    result_type_438=(struct sType*)come_increment_ref_count(sType_clone(fun_437->mResultType));
    result_type_438->mStatic=(_Bool)0;
    come_params_439=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 714, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,0), "06str.c", 716, 10))->mHeap&&obj_value_429->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,0), "06str.c", 717, 11)),obj_value_429->type,obj_value_429,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_439,(struct CVALUE*)come_increment_ref_count(obj_value_429));
    i_440=1;
    for(    o2_saved_441=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_421)),it_442=list$1CVALUEph_begin((o2_saved_441));    !list$1CVALUEph_end((o2_saved_441));    it_442=list$1CVALUEph_next((o2_saved_441))    ){
        come_value_443=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_442));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,i_440), "06str.c", 725, 12))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,i_440), "06str.c", 725, 13))->mHeap&&come_value_443->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_437->mParamTypes,i_440), "06str.c", 726, 14)),come_value_443->type,come_value_443,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_439,(struct CVALUE*)come_increment_ref_count(come_value_443));
        i_440++;
        /*i*/come_call_finalizer3(come_value_443,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_441,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_444=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 733, "buffer"))));
    buffer_append_str(buf_444,generics_fun_name_436);
    buffer_append_str(buf_444,"(");
    j_445=0;
    for(    o2_saved_446=(struct list$1CVALUEph*)come_increment_ref_count((come_params_439)),it_447=list$1CVALUEph_begin((o2_saved_446));    !list$1CVALUEph_end((o2_saved_446));    it_447=list$1CVALUEph_next((o2_saved_446))    ){
        buffer_append_str(buf_444,it_447->c_value);
        if(        j_445!=list$1CVALUEph_length(come_params_439)-1) {
            buffer_append_str(buf_444,",");
        }
        j_445++;
    }
    /*i*/come_call_finalizer3(o2_saved_446,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_444,")");
    come_value2_448=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 750, "CVALUE"))));
    __dec_obj188=come_value2_448->c_value;
    come_value2_448->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_444));
    /*G*/ __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj189=come_value2_448->type;
    come_value2_448->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_438));
    come_call_finalizer3(__dec_obj189,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_448->type->mStatic=(_Bool)0;
    come_value2_448->var=((void*)0);
    if(    result_type_438->mHeap) {
        append_object_to_right_values2(come_value2_448,(struct sType*)come_increment_ref_count(result_type_438),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_448->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_448));
    __result297__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_420,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_421,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_426,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_429,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_430,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_431,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_432 = come_decrement_ref_count2(type_name_432, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_433,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_434,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_436 = come_decrement_ref_count2(generics_fun_name_436, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_438,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_439,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_444,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_448,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result297__;
}

struct sNullReturnValue* sNullReturnValue_initialize(struct sNullReturnValue* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value551 = (void*)0;
struct sNullReturnValue* __result298__;
    ((struct sNodeBase*)(__right_value551=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value551,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result298__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result298__;
}

char* sNullReturnValue_kind(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
void* __right_value552 = (void*)0;
char* __result299__;
    __result299__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value552=__builtin_string("sNullReturnValue")));
    /* U11 */__right_value552 = come_decrement_ref_count2(__right_value552, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result299__;
}

_Bool sNullReturnValue_compile(struct sNullReturnValue* self, struct sInfo* info){
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
struct CVALUE* come_value_449;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct buffer* buf_450;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* var_name_452;
void* __right_value559 = (void*)0;
struct sType* result_type_453;
void* __right_value560 = (void*)0;
struct sType* result_type2_454;
struct sType* left_type_455;
void* __right_value561 = (void*)0;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
struct CVALUE* come_value2_456;
char* __dec_obj191;
struct sType* __dec_obj192;
    if(    info->come_fun) {
        come_value_449=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 785, "CVALUE"))));
        buf_450=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 787, "buffer"))));
        static int num_451=0;
        num_451++;
        var_name_452=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value557=int_to_string(num_451)))));
        /* U11 */__right_value557 = come_decrement_ref_count2(__right_value557, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_453=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_454=(struct sType*)come_increment_ref_count(solve_generics(result_type_453,info->generics_type,info));
        left_type_455=(struct sType*)come_increment_ref_count(result_type2_454);
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value561=make_define_var(left_type_455,var_name_452,(_Bool)0,info))));
        /* U11 */__right_value561 = come_decrement_ref_count2(__right_value561, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_452,((char*)(__right_value562=make_type_name_string(left_type_455,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        /* U11 */__right_value562 = come_decrement_ref_count2(__right_value562, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_456=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 803, "CVALUE"))));
        __dec_obj191=come_value2_456->c_value;
        come_value2_456->c_value=(char*)come_increment_ref_count(var_name_452);
        /*G*/ __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj192=come_value2_456->type;
        come_value2_456->type=(struct sType*)come_increment_ref_count(result_type2_454);
        come_call_finalizer3(__dec_obj192,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_456->type->mStatic=(_Bool)0;
        come_value2_456->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_456));
        /*i*/come_call_finalizer3(come_value_449,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_450,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_452 = come_decrement_ref_count2(var_name_452, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_453,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_454,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_455,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_456,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sNode* _inf_value2;
struct sNullReturnValue* _inf_obj_value2;
void* __right_value569 = (void*)0;
struct sNode* __result302__;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 820, "struct sNode");
    _inf_obj_value2=(struct sNullReturnValue*)come_increment_ref_count(((struct sNullReturnValue*)(__right_value566=sNullReturnValue_initialize((struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "06str.c", 820, "sNullReturnValue")),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sNullReturnValue_finalize;
    _inf_value2->clone=(void*)sNullReturnValue_clone;
    _inf_value2->compile=(void*)sNullReturnValue_compile;
    _inf_value2->sline=(void*)sNodeBase_sline;
    _inf_value2->sline_real=(void*)sNodeBase_sline_real;
    _inf_value2->sname=(void*)sNodeBase_sname;
    _inf_value2->terminated=(void*)sNodeBase_terminated;
    _inf_value2->kind=(void*)sNullReturnValue_kind;
    __result302__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value569=_inf_value2));
    /*g*/come_call_finalizer3(__right_value566,sNullReturnValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value569) { __right_value569 = come_decrement_ref_count2(__right_value569, ((struct sNode*)__right_value569)->finalize, ((struct sNode*)__right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result302__;
}

static void sNullReturnValue_finalize(struct sNullReturnValue* self){
char* __dec_obj193;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj193=self->sname;
            /*G*/ __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValue* sNullReturnValue_clone(struct sNullReturnValue* self){
void* __result_obj__=(void*)0;
struct sNullReturnValue* __result300__;
void* __right_value567 = (void*)0;
struct sNullReturnValue* result_457;
void* __right_value568 = (void*)0;
char* __dec_obj194;
struct sNullReturnValue* __result301__;
    if(    self==(void*)0) {
        __result300__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result300__;
    }
    result_457=(struct sNullReturnValue*)come_increment_ref_count((struct sNullReturnValue*)come_calloc(1, sizeof(struct sNullReturnValue)*(1), "sNullReturnValue_clone", 3, "sNullReturnValue"));
    if(    self!=((void*)0)) {
        result_457->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj194=result_457->sname;
        result_457->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_457->sline_real=self->sline_real;
    }
    __result301__ = gComeFunResultObject = __result_obj__ = result_457;
    /*i*/come_call_finalizer3(result_457,sNullReturnValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result301__;
}

struct sNullReturnValueOfException* sNullReturnValueOfException_initialize(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value570 = (void*)0;
struct sNullReturnValueOfException* __result303__;
    ((struct sNodeBase*)(__right_value570=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value570,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __result303__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result303__;
}

char* sNullReturnValueOfException_kind(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
void* __right_value571 = (void*)0;
char* __result304__;
    __result304__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value571=__builtin_string("sNullReturnValue")));
    /* U11 */__right_value571 = come_decrement_ref_count2(__right_value571, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result304__;
}

_Bool sNullReturnValueOfException_compile(struct sNullReturnValueOfException* self, struct sInfo* info){
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
struct CVALUE* come_value_458;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
struct buffer* buf_459;
void* __right_value576 = (void*)0;
void* __right_value577 = (void*)0;
char* var_name_461;
void* __right_value578 = (void*)0;
struct sType* result_type_462;
void* __right_value579 = (void*)0;
struct sType* result_type2_463;
struct sType* __dec_obj196;
void* __right_value580 = (void*)0;
struct sType* left_type_464;
_Bool __result305__;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
struct CVALUE* come_value2_465;
char* __dec_obj197;
struct sType* __dec_obj198;
    if(    info->come_fun) {
        come_value_458=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 838, "CVALUE"))));
        buf_459=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 840, "buffer"))));
        static int num_460=0;
        num_460++;
        var_name_461=(char*)come_increment_ref_count(xsprintf("__null_value\%s",((char*)(__right_value576=int_to_string(num_460)))));
        /* U11 */__right_value576 = come_decrement_ref_count2(__right_value576, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        result_type_462=(struct sType*)come_increment_ref_count(sType_clone(info->come_fun->mResultType));
        result_type2_463=(struct sType*)come_increment_ref_count(solve_generics(result_type_462,info->generics_type,info));
        if(        result_type2_463->mNoSolvedGenericsType->v1) {
            __dec_obj196=result_type2_463;
            result_type2_463=(struct sType*)come_increment_ref_count(result_type2_463->mNoSolvedGenericsType->v1);
            come_call_finalizer3(__dec_obj196,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        left_type_464=(struct sType*)come_increment_ref_count(sType_clone(list$1sTypephp_operator_load_element(result_type2_463->mGenericsTypes,0)));
        if(        left_type_464==((void*)0)||string_operator_not_equals(result_type2_463->mClass->mName,"tuple2")) {
            err_msg(info,"function is not exception type");
            __result305__ = (_Bool)0;
            /*i*/come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(buf_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_461 = come_decrement_ref_count2(var_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(result_type2_463,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(left_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
            return __result305__;
        }
        add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value581=make_define_var(left_type_464,var_name_461,(_Bool)0,info))));
        /* U11 */__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_461,((char*)(__right_value582=make_type_name_string(left_type_464,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
        /* U11 */__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        come_value2_465=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 865, "CVALUE"))));
        __dec_obj197=come_value2_465->c_value;
        come_value2_465->c_value=(char*)come_increment_ref_count(var_name_461);
        /*G*/ __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj198=come_value2_465->type;
        come_value2_465->type=(struct sType*)come_increment_ref_count(left_type_464);
        come_call_finalizer3(__dec_obj198,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_value2_465->type->mStatic=(_Bool)0;
        come_value2_465->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_465));
        /*i*/come_call_finalizer3(come_value_458,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(buf_459,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */var_name_461 = come_decrement_ref_count2(var_name_461, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type_462,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(result_type2_463,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(left_type_464,sType_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(come_value2_465,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    return (_Bool)1;
}

struct sNode* create_null_return_value_of_exception(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
struct sNode* _inf_value3;
struct sNullReturnValueOfException* _inf_obj_value3;
void* __right_value589 = (void*)0;
struct sNode* __result308__;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 882, "struct sNode");
    _inf_obj_value3=(struct sNullReturnValueOfException*)come_increment_ref_count(((struct sNullReturnValueOfException*)(__right_value586=sNullReturnValueOfException_initialize((struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "06str.c", 882, "sNullReturnValueOfException")),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sNullReturnValueOfException_finalize;
    _inf_value3->clone=(void*)sNullReturnValueOfException_clone;
    _inf_value3->compile=(void*)sNullReturnValueOfException_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sNullReturnValueOfException_kind;
    __result308__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value589=_inf_value3));
    /*g*/come_call_finalizer3(__right_value586,sNullReturnValueOfException_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value589) { __right_value589 = come_decrement_ref_count2(__right_value589, ((struct sNode*)__right_value589)->finalize, ((struct sNode*)__right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result308__;
}

static void sNullReturnValueOfException_finalize(struct sNullReturnValueOfException* self){
char* __dec_obj199;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj199=self->sname;
            /*G*/ __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullReturnValueOfException* sNullReturnValueOfException_clone(struct sNullReturnValueOfException* self){
void* __result_obj__=(void*)0;
struct sNullReturnValueOfException* __result306__;
void* __right_value587 = (void*)0;
struct sNullReturnValueOfException* result_466;
void* __right_value588 = (void*)0;
char* __dec_obj200;
struct sNullReturnValueOfException* __result307__;
    if(    self==(void*)0) {
        __result306__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result306__;
    }
    result_466=(struct sNullReturnValueOfException*)come_increment_ref_count((struct sNullReturnValueOfException*)come_calloc(1, sizeof(struct sNullReturnValueOfException)*(1), "sNullReturnValueOfException_clone", 3, "sNullReturnValueOfException"));
    if(    self!=((void*)0)) {
        result_466->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj200=result_466->sname;
        result_466->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_466->sline_real=self->sline_real;
    }
    __result307__ = gComeFunResultObject = __result_obj__ = result_466;
    /*i*/come_call_finalizer3(result_466,sNullReturnValueOfException_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result307__;
}

struct sNullValue* sNullValue_initialize(struct sNullValue* self, struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value590 = (void*)0;
struct sType* __dec_obj201;
struct sNullValue* __result309__;
    ((struct sNodeBase*)(__right_value590=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value590,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj201=self->type;
    self->type=(struct sType*)come_increment_ref_count(type);
    come_call_finalizer3(__dec_obj201,sType_finalize, 0, 0, 0, 0, (void*)0);
    __result309__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result309__;
}

char* sNullValue_kind(struct sNullValue* self){
void* __result_obj__=(void*)0;
void* __right_value591 = (void*)0;
char* __result310__;
    __result310__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value591=__builtin_string("sNullValue")));
    /* U11 */__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result310__;
}

_Bool sNullValue_compile(struct sNullValue* self, struct sInfo* info){
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
struct CVALUE* come_value_467;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
struct buffer* buf_468;
void* __right_value596 = (void*)0;
void* __right_value597 = (void*)0;
char* var_name_470;
struct sType* left_type_471;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct CVALUE* come_value2_472;
char* __dec_obj204;
struct sType* __dec_obj205;
_Bool __result311__;
    come_value_467=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901, "CVALUE"))));
    buf_468=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 903, "buffer"))));
    static int num_469=0;
    num_469++;
    var_name_470=(char*)come_increment_ref_count(xsprintf("__null_value2_\%s",((char*)(__right_value596=int_to_string(num_469)))));
    /* U11 */__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    left_type_471=(struct sType*)come_increment_ref_count(self->type);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value598=make_define_var(left_type_471,var_name_470,(_Bool)0,info))));
    /* U11 */__right_value598 = come_decrement_ref_count2(__right_value598, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    add_come_code_at_function_head2(info,"memset(&%s, 0, sizeof(%s));\n",var_name_470,((char*)(__right_value599=make_type_name_string(left_type_471,(_Bool)0,(_Bool)0,(_Bool)0,info,(_Bool)1))));
    /* U11 */__right_value599 = come_decrement_ref_count2(__right_value599, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    come_value2_472=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 915, "CVALUE"))));
    __dec_obj204=come_value2_472->c_value;
    come_value2_472->c_value=(char*)come_increment_ref_count(var_name_470);
    /*G*/ __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=come_value2_472->type;
    come_value2_472->type=(struct sType*)come_increment_ref_count(self->type);
    come_call_finalizer3(__dec_obj205,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_472->type->mStatic=(_Bool)0;
    come_value2_472->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_472));
    __result311__ = (_Bool)1;
    /*i*/come_call_finalizer3(come_value_467,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_468,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_470 = come_decrement_ref_count2(var_name_470, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(left_type_471,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_472,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result311__;
}

struct sNode* create_null_value(struct sType* type, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
struct sNode* _inf_value4;
struct sNullValue* _inf_obj_value4;
void* __right_value607 = (void*)0;
struct sNode* __result314__;
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 931, "struct sNode");
    _inf_obj_value4=(struct sNullValue*)come_increment_ref_count(((struct sNullValue*)(__right_value603=sNullValue_initialize((struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "06str.c", 931, "sNullValue")),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sNullValue_finalize;
    _inf_value4->clone=(void*)sNullValue_clone;
    _inf_value4->compile=(void*)sNullValue_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sNullValue_kind;
    __result314__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value607=_inf_value4));
    /*i*/come_call_finalizer3(type,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value603,sNullValue_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value607) { __right_value607 = come_decrement_ref_count2(__right_value607, ((struct sNode*)__right_value607)->finalize, ((struct sNode*)__right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result314__;
}

static void sNullValue_finalize(struct sNullValue* self){
char* __dec_obj206;
struct sType* __dec_obj207;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj206=self->sname;
            /*G*/ __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        if(        self->type==gComeFunResultObject) {
            __dec_obj207=self->type;
            come_call_finalizer3(__dec_obj207,sType_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNullValue* sNullValue_clone(struct sNullValue* self){
void* __result_obj__=(void*)0;
struct sNullValue* __result312__;
void* __right_value604 = (void*)0;
struct sNullValue* result_473;
void* __right_value605 = (void*)0;
char* __dec_obj208;
void* __right_value606 = (void*)0;
struct sType* __dec_obj209;
struct sNullValue* __result313__;
    if(    self==(void*)0) {
        __result312__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result312__;
    }
    result_473=(struct sNullValue*)come_increment_ref_count((struct sNullValue*)come_calloc(1, sizeof(struct sNullValue)*(1), "sNullValue_clone", 3, "sNullValue"));
    if(    self!=((void*)0)) {
        result_473->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj208=result_473->sname;
        result_473->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_473->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj209=result_473->type;
        result_473->type=(struct sType*)come_increment_ref_count(sType_clone(self->type));
        come_call_finalizer3(__dec_obj209,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result313__ = gComeFunResultObject = __result_obj__ = result_473;
    /*i*/come_call_finalizer3(result_473,sNullValue_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result313__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value608 = (void*)0;
struct list$1sNodeph* __dec_obj210;
struct sNoneNode* __result315__;
    ((struct sNodeBase*)(__right_value608=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value608,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj210=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    come_call_finalizer3(__dec_obj210,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result315__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result315__;
}

char* sNoneNode_kind(struct sNoneNode* self){
void* __result_obj__=(void*)0;
void* __right_value609 = (void*)0;
char* __result316__;
    __result316__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value609=__builtin_string("sNoneNode")));
    /* U11 */__right_value609 = come_decrement_ref_count2(__right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result316__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
struct list$1sNodeph* tuple_elements_474;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
struct list$1sTypeph* tuple_types_475;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
struct list$1CVALUEph* tuple_values_476;
int i_477;
struct list$1sNodeph* o2_saved_478;
struct sNode* it_479;
_Bool Value_480;
_Bool __result317__;
void* __right_value614 = (void*)0;
struct CVALUE* come_value_481;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
struct sType* string_type_482;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
struct sType* type_483;
struct list$1sTypeph* o2_saved_484;
struct sType* it_485;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
struct CVALUE* obj_value_486;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct buffer* num_string_487;
void* __right_value628 = (void*)0;
struct sType* type2_488;
void* __right_value629 = (void*)0;
char* type_name_489;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* __dec_obj213;
void* __right_value632 = (void*)0;
struct sType* type3_490;
void* __right_value633 = (void*)0;
struct sType* __dec_obj214;
void* __right_value634 = (void*)0;
struct sType* obj_type_491;
char* fun_name_492;
void* __right_value635 = (void*)0;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
char* generics_fun_name_493;
struct sFun* fun_494;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
char* __dec_obj215;
_Bool __result318__;
void* __right_value640 = (void*)0;
struct sType* result_type_495;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
struct list$1CVALUEph* come_params_496;
struct list$1CVALUEph* o2_saved_497;
struct CVALUE* it_498;
void* __right_value643 = (void*)0;
struct CVALUE* come_value_499;
void* __right_value644 = (void*)0;
void* __right_value645 = (void*)0;
struct buffer* buf_500;
int j_501;
struct list$1CVALUEph* o2_saved_502;
struct CVALUE* it_503;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct CVALUE* come_value2_504;
void* __right_value648 = (void*)0;
char* __dec_obj216;
void* __right_value649 = (void*)0;
struct sType* __dec_obj217;
_Bool __result319__;
    tuple_elements_474=self->tuple_elements;
    tuple_types_475=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 951, "list$1sTypeph"))));
    tuple_values_476=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 952, "list$1CVALUEph"))));
    i_477=0;
    for(    o2_saved_478=(tuple_elements_474),it_479=list$1sNodeph_begin((o2_saved_478));    !list$1sNodeph_end((o2_saved_478));    it_479=list$1sNodeph_next((o2_saved_478))    ){
        Value_480=node_compile(it_479,info);
        if(        !Value_480) {
            __result317__ = (_Bool)0;
            /*i*/come_call_finalizer3(tuple_types_475,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            return __result317__;
        }
        else {
        }
        come_value_481=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_476,(struct CVALUE*)come_increment_ref_count(CVALUE_clone(come_value_481)));
        list$1sTypeph_push_back(tuple_types_475,(struct sType*)come_increment_ref_count(sType_clone(come_value_481->type)));
        if(        i_477==1) {
            string_type_482=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 967, "sType")),"char*",(_Bool)0,info));
            string_type_482->mHeap=(_Bool)1;
            check_assign_type(((char*)(__right_value619=xsprintf("invalid none type"))),string_type_482,come_value_481->type,come_value_481,(_Bool)0,(_Bool)1,(_Bool)0,info);
            /* U11 */__right_value619 = come_decrement_ref_count2(__right_value619, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(string_type_482,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        i_477++;
        /*i*/come_call_finalizer3(come_value_481,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    type_483=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 975, "sType")),((char*)(__right_value621=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_475)))),(_Bool)0,info));
    /* U11 */__right_value621 = come_decrement_ref_count2(__right_value621, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    for(    o2_saved_484=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_475)),it_485=list$1sTypeph_begin((o2_saved_484));    !list$1sTypeph_end((o2_saved_484));    it_485=list$1sTypeph_next((o2_saved_484))    ){
        list$1sTypeph_push_back(type_483->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(it_485)));
    }
    /*i*/come_call_finalizer3(o2_saved_484,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_486=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 981, "CVALUE"))));
    num_string_487=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 983, "buffer"))));
    buffer_append_str(num_string_487,"1");
    type2_488=(struct sType*)come_increment_ref_count(solve_generics(type_483,type_483,info));
    type_name_489=(char*)come_increment_ref_count(make_type_name_string(type2_488,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj213=obj_value_486->c_value;
    obj_value_486->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_489,type_name_489,((char*)(__right_value630=buffer_to_string(num_string_487))),info->sname,info->sline,type_name_489));
    /*G*/ __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_490=(struct sType*)come_increment_ref_count(sType_clone(type2_488));
    type3_490->mPointerNum++;
    type3_490->mHeap=(_Bool)1;
    type2_488->mHeap=(_Bool)1;
    __dec_obj214=obj_value_486->type;
    obj_value_486->type=(struct sType*)come_increment_ref_count(sType_clone(type2_488));
    come_call_finalizer3(__dec_obj214,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_486->type->mPointerNum++;
    obj_value_486->var=((void*)0);
    append_object_to_right_values2(obj_value_486,(struct sType*)come_increment_ref_count(type3_490),info,(_Bool)0);
    obj_type_491=(struct sType*)come_increment_ref_count(sType_clone(type2_488));
    fun_name_492="initialize";
    generics_fun_name_493=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value636=make_generics_function(obj_type_491,(char*)come_increment_ref_count(__builtin_string(fun_name_492)),info,(_Bool)1)))));
    /* U11 */__right_value636 = come_decrement_ref_count2(__right_value636, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_494=map$2charphsFunph_at(info->funcs,generics_fun_name_493,((void*)0));
    if(    fun_494==((void*)0)) {
        __dec_obj215=generics_fun_name_493;
        generics_fun_name_493=(char*)come_increment_ref_count(create_method_name(obj_type_491,(_Bool)0,((char*)(__right_value638=__builtin_string(fun_name_492))),info,(_Bool)1));
        /*G*/ __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value638 = come_decrement_ref_count2(__right_value638, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_494=map$2charphsFunph_at(info->funcs,generics_fun_name_493,((void*)0));
        if(        fun_494==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_493,info->come_fun->mName);
            __result318__ = (_Bool)1;
            /*i*/come_call_finalizer3(tuple_types_475,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(tuple_values_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(num_string_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type2_488,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */type_name_489 = come_decrement_ref_count2(type_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(type3_490,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_491,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_493 = come_decrement_ref_count2(generics_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result318__;
        }
    }
    result_type_495=(struct sType*)come_increment_ref_count(sType_clone(fun_494->mResultType));
    result_type_495->mStatic=(_Bool)0;
    come_params_496=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1024, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_494->mParamTypes,0), "06str.c", 1026, 15))->mHeap&&obj_value_486->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_494->mParamTypes,0), "06str.c", 1027, 16)),obj_value_486->type,obj_value_486,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_496,(struct CVALUE*)come_increment_ref_count(obj_value_486));
    i_477=1;
    for(    o2_saved_497=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_476)),it_498=list$1CVALUEph_begin((o2_saved_497));    !list$1CVALUEph_end((o2_saved_497));    it_498=list$1CVALUEph_next((o2_saved_497))    ){
        come_value_499=(struct CVALUE*)come_increment_ref_count(CVALUE_clone(it_498));
        if(        ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_494->mParamTypes,i_477), "06str.c", 1035, 17))&&((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_494->mParamTypes,i_477), "06str.c", 1035, 18))->mHeap&&come_value_499->type->mHeap) {
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_494->mParamTypes,i_477), "06str.c", 1036, 19)),come_value_499->type,come_value_499,info,(_Bool)1);
        }
        list$1CVALUEph_push_back(come_params_496,(struct CVALUE*)come_increment_ref_count(come_value_499));
        i_477++;
        /*i*/come_call_finalizer3(come_value_499,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    }
    /*i*/come_call_finalizer3(o2_saved_497,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buf_500=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1043, "buffer"))));
    buffer_append_str(buf_500,generics_fun_name_493);
    buffer_append_str(buf_500,"(");
    j_501=0;
    for(    o2_saved_502=(struct list$1CVALUEph*)come_increment_ref_count((come_params_496)),it_503=list$1CVALUEph_begin((o2_saved_502));    !list$1CVALUEph_end((o2_saved_502));    it_503=list$1CVALUEph_next((o2_saved_502))    ){
        buffer_append_str(buf_500,it_503->c_value);
        if(        j_501!=list$1CVALUEph_length(come_params_496)-1) {
            buffer_append_str(buf_500,",");
        }
        j_501++;
    }
    /*i*/come_call_finalizer3(o2_saved_502,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(buf_500,")");
    come_value2_504=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1060, "CVALUE"))));
    __dec_obj216=come_value2_504->c_value;
    come_value2_504->c_value=(char*)come_increment_ref_count(buffer_to_string(buf_500));
    /*G*/ __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj217=come_value2_504->type;
    come_value2_504->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_495));
    come_call_finalizer3(__dec_obj217,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_504->type->mStatic=(_Bool)0;
    come_value2_504->var=((void*)0);
    if(    result_type_495->mHeap) {
        append_object_to_right_values2(come_value2_504,(struct sType*)come_increment_ref_count(result_type_495),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value2_504->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_504));
    __result319__ = (_Bool)1;
    /*i*/come_call_finalizer3(tuple_types_475,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(tuple_values_476,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type_483,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_486,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_487,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_488,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_489 = come_decrement_ref_count2(type_name_489, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_490,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_491,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_493 = come_decrement_ref_count2(generics_fun_name_493, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_495,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_496,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(buf_500,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_504,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result319__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value650 = (void*)0;
struct list$1sNodeph* __dec_obj218;
struct list$1sNodeph* __dec_obj219;
struct sMapNode* __result320__;
    ((struct sNodeBase*)(__right_value650=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    /*g*/come_call_finalizer3(__right_value650,sNodeBase_finalize, 0, 1, 0, 0, __result_obj__);
    __dec_obj218=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    come_call_finalizer3(__dec_obj218,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __dec_obj219=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    come_call_finalizer3(__dec_obj219,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    __result320__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(self,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result320__;
}

char* sMapNode_kind(struct sMapNode* self){
void* __result_obj__=(void*)0;
void* __right_value651 = (void*)0;
char* __result321__;
    __result321__ = gComeFunResultObject = __result_obj__ = ((char*)(__right_value651=__builtin_string("sMapNode")));
    /* U11 */__right_value651 = come_decrement_ref_count2(__right_value651, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    gComeFunResultObject = (void*)0;
    return __result321__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
struct list$1sNodeph* map_key_elements_505;
struct list$1sNodeph* map_elements_506;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
struct list$1CVALUEph* key_params_507;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
struct list$1CVALUEph* element_params_508;
struct sType* map_key_type_509;
struct sType* map_element_type_510;
int i_511;
struct sNode* key_elements_512;
struct sNode* elements_516;
void* __right_value656 = (void*)0;
_Bool _if_conditional3;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sNode* value_node_517;
struct sNode* exp_518;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_519;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct sNode* __dec_obj223;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_520;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sNode* __dec_obj224;
void* __right_value677 = (void*)0;
struct sNode* __dec_obj225;
_Bool Value_521;
_Bool __result324__;
void* __right_value678 = (void*)0;
struct CVALUE* come_value_522;
void* __right_value679 = (void*)0;
struct sType* __dec_obj226;
_Bool Value_523;
_Bool __result325__;
void* __right_value680 = (void*)0;
struct CVALUE* come_value_524;
void* __right_value681 = (void*)0;
void* __right_value682 = (void*)0;
struct sType* __dec_obj227;
void* __right_value683 = (void*)0;
_Bool _if_conditional4;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct sNode* value_node_525;
struct sNode* exp2_526;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_527;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sNode* __dec_obj228;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_528;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
struct sNode* __dec_obj229;
void* __right_value704 = (void*)0;
struct sNode* __dec_obj230;
_Bool Value_529;
_Bool __result326__;
void* __right_value705 = (void*)0;
struct CVALUE* come_value2_530;
void* __right_value706 = (void*)0;
void* __right_value707 = (void*)0;
struct sType* __dec_obj231;
_Bool Value_531;
_Bool __result327__;
void* __right_value708 = (void*)0;
struct CVALUE* come_value2_532;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
struct sType* __dec_obj232;
void* __right_value711 = (void*)0;
struct sType* key_type_values_534;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
char* var_name_535;
void* __right_value714 = (void*)0;
struct sVar* var__536;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
struct sType* element_type_values_537;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
char* var_name2_538;
void* __right_value719 = (void*)0;
struct sVar* var2__539;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct buffer* source_540;
int i_541;
struct CVALUE* key_param_542;
struct CVALUE* element_param_543;
void* __right_value723 = (void*)0;
char* c_value_544;
void* __right_value724 = (void*)0;
char* c_value_545;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct sType* map_type_546;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct sType* obj_type_547;
char* fun_name_548;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
char* generics_fun_name_549;
struct sFun* fun_550;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* __dec_obj233;
_Bool __result328__;
void* __right_value735 = (void*)0;
struct sType* result_type_551;
struct sType* type_552;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct CVALUE* obj_value_553;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
struct buffer* num_string_554;
void* __right_value740 = (void*)0;
struct sType* type2_555;
void* __right_value741 = (void*)0;
char* type_name_556;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
char* __dec_obj234;
void* __right_value744 = (void*)0;
struct sType* type3_557;
void* __right_value745 = (void*)0;
struct sType* __dec_obj235;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
struct list$1CVALUEph* come_params_558;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct CVALUE* come_value2_559;
void* __right_value750 = (void*)0;
char* __dec_obj236;
struct sType* __dec_obj237;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct CVALUE* come_value3_560;
void* __right_value753 = (void*)0;
char* __dec_obj238;
struct sType* __dec_obj239;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
struct CVALUE* come_value4_561;
void* __right_value756 = (void*)0;
char* __dec_obj240;
struct sType* __dec_obj241;
int j_562;
struct list$1CVALUEph* o2_saved_563;
struct CVALUE* it_564;
void* __right_value757 = (void*)0;
void* __right_value758 = (void*)0;
struct CVALUE* come_value5_565;
void* __right_value759 = (void*)0;
char* __dec_obj242;
void* __right_value760 = (void*)0;
struct sType* __dec_obj243;
_Bool __result329__;
exp_518 = (void*)0;
exp2_526 = (void*)0;
    map_key_elements_505=self->map_key_elements;
    map_elements_506=self->map_elements;
    key_params_507=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1100, "list$1CVALUEph"))));
    element_params_508=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1101, "list$1CVALUEph"))));
    map_key_type_509=((void*)0);
    map_element_type_510=((void*)0);
    for(    i_511=0;    i_511<list$1sNodeph_length(map_key_elements_505);    i_511++    ){
        key_elements_512=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_key_elements_505,i_511), "06str.c", 1106, 20));
        elements_516=((struct sNode*)come_null_check(list$1sNodephp_operator_load_element(map_elements_506,i_511), "06str.c", 1107, 21));
        if(        (_if_conditional3=(string_operator_equals(((char*)(__right_value656=key_elements_512->kind(key_elements_512->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value656 = come_decrement_ref_count2(__right_value656, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional3) {
            value_node_517=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value657=xsprintf("Value"))),info));
            /* U11 */__right_value657 = come_decrement_ref_count2(__right_value657, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_519=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1114, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_519,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1115, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_517))));
                __dec_obj223=exp_518;
                exp_518=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value664=xsprintf("keys"))),(struct sNode*)come_increment_ref_count(value_node_517),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_519),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value664 = come_decrement_ref_count2(__right_value664, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_519,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_520=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1120, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_520,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1121, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp_518))));
                list$1tuple2$2charphsNodephph_add(params_520,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1122, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_511,info)))));
                __dec_obj224=exp_518;
                exp_518=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value675=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp_518),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_520),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value675 = come_decrement_ref_count2(__right_value675, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj225=exp_518;
                exp_518=(struct sNode*)come_increment_ref_count(create_nullable_node(exp_518,info));
                /* U1 */ if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); };
                /*i*/come_call_finalizer3(params_520,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_521=node_compile(exp_518,info);
            if(            !Value_521) {
                __result324__ = (_Bool)0;
                if(value_node_517) { value_node_517 = come_decrement_ref_count2(value_node_517, ((struct sNode*)value_node_517)->finalize, ((struct sNode*)value_node_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp_518) { exp_518 = come_decrement_ref_count2(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(key_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result324__;
            }
            else {
            }
            come_value_522=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            list$1CVALUEph_push_back(key_params_507,(struct CVALUE*)come_increment_ref_count(come_value_522));
            __dec_obj226=map_key_type_509;
            map_key_type_509=(struct sType*)come_increment_ref_count(sType_clone(come_value_522->type));
            come_call_finalizer3(__dec_obj226,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_517) { value_node_517 = come_decrement_ref_count2(value_node_517, ((struct sNode*)value_node_517)->finalize, ((struct sNode*)value_node_517)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp_518) { exp_518 = come_decrement_ref_count2(exp_518, ((struct sNode*)exp_518)->finalize, ((struct sNode*)exp_518)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value_522,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_523=node_compile(key_elements_512,info);
            if(            !Value_523) {
                __result325__ = (_Bool)0;
                /*i*/come_call_finalizer3(key_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result325__;
            }
            else {
            }
            come_value_524=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_key_type_509) {
                check_assign_type(((char*)(__right_value681=xsprintf("invalid map key type"))),map_key_type_509,come_value_524->type,come_value_524,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(key_params_507,(struct CVALUE*)come_increment_ref_count(come_value_524));
            __dec_obj227=map_key_type_509;
            map_key_type_509=(struct sType*)come_increment_ref_count(sType_clone(come_value_524->type));
            come_call_finalizer3(__dec_obj227,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value_524,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        if(        (_if_conditional4=(string_operator_equals(((char*)(__right_value683=elements_516->kind(elements_516->_protocol_obj))),"sWildCard"))),        /* U10 */ (__right_value683 = come_decrement_ref_count2(__right_value683, (void*)0, (void*)0, 1, 0, 0, (void*)0)),
        _if_conditional4) {
            value_node_525=(struct sNode*)come_increment_ref_count(create_load_var(((char*)(__right_value684=xsprintf("Value"))),info));
            /* U11 */__right_value684 = come_decrement_ref_count2(__right_value684, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            {
                params_527=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1158, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_527,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1159, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(value_node_525))));
                __dec_obj228=exp2_526;
                exp2_526=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value691=xsprintf("values"))),(struct sNode*)come_increment_ref_count(value_node_525),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_527),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value691 = come_decrement_ref_count2(__right_value691, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(params_527,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            {
                params_528=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1164, "list$1tuple2$2charphsNodephph"))));
                list$1tuple2$2charphsNodephph_add(params_528,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1165, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(exp2_526))));
                list$1tuple2$2charphsNodephph_add(params_528,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1166, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("position")),(struct sNode*)come_increment_ref_count(create_int_node(i_511,info)))));
                __dec_obj229=exp2_526;
                exp2_526=(struct sNode*)come_increment_ref_count(create_method_call(((char*)(__right_value702=xsprintf("operator_load_element"))),(struct sNode*)come_increment_ref_count(exp2_526),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_528),((void*)0),0,((void*)0),info));
                /* U1 */ if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); };
                /* U11 */__right_value702 = come_decrement_ref_count2(__right_value702, (void*)0, (void*)0, 1, 0, 0, (void*)0);
                __dec_obj230=exp2_526;
                exp2_526=(struct sNode*)come_increment_ref_count(create_nullable_node(exp2_526,info));
                /* U1 */ if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); };
                /*i*/come_call_finalizer3(params_528,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
            }
            Value_529=node_compile(exp2_526,info);
            if(            !Value_529) {
                __result326__ = (_Bool)0;
                if(value_node_525) { value_node_525 = come_decrement_ref_count2(value_node_525, ((struct sNode*)value_node_525)->finalize, ((struct sNode*)value_node_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(exp2_526) { exp2_526 = come_decrement_ref_count2(exp2_526, ((struct sNode*)exp2_526)->finalize, ((struct sNode*)exp2_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(key_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result326__;
            }
            else {
            }
            come_value2_530=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_510) {
                check_assign_type(((char*)(__right_value706=xsprintf("invalid map element type"))),map_element_type_510,come_value2_530->type,come_value2_530,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value706 = come_decrement_ref_count2(__right_value706, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_508,(struct CVALUE*)come_increment_ref_count(come_value2_530));
            __dec_obj231=map_element_type_510;
            map_element_type_510=(struct sType*)come_increment_ref_count(sType_clone(come_value2_530->type));
            come_call_finalizer3(__dec_obj231,sType_finalize, 0, 0, 0, 0, (void*)0);
            if(value_node_525) { value_node_525 = come_decrement_ref_count2(value_node_525, ((struct sNode*)value_node_525)->finalize, ((struct sNode*)value_node_525)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(exp2_526) { exp2_526 = come_decrement_ref_count2(exp2_526, ((struct sNode*)exp2_526)->finalize, ((struct sNode*)exp2_526)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(come_value2_530,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            Value_531=node_compile(elements_516,info);
            if(            !Value_531) {
                __result327__ = (_Bool)0;
                /*i*/come_call_finalizer3(key_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(element_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_key_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_element_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
                return __result327__;
            }
            else {
            }
            come_value2_532=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
            dec_stack_ptr(1,info);
            if(            map_element_type_510) {
                check_assign_type(((char*)(__right_value709=xsprintf("invalid map element type"))),map_element_type_510,come_value2_532->type,come_value2_532,(_Bool)0,(_Bool)1,(_Bool)0,info);
                /* U11 */__right_value709 = come_decrement_ref_count2(__right_value709, (void*)0, (void*)0, 1, 0, 0, (void*)0);
            }
            list$1CVALUEph_push_back(element_params_508,(struct CVALUE*)come_increment_ref_count(come_value2_532));
            __dec_obj232=map_element_type_510;
            map_element_type_510=(struct sType*)come_increment_ref_count(sType_clone(come_value2_532->type));
            come_call_finalizer3(__dec_obj232,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(come_value2_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    static int map_value_num_533=0;
    key_type_values_534=(struct sType*)come_increment_ref_count(sType_clone(map_key_type_509));
    list$1sNodeph_push_back(key_type_values_534->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(key_params_507),info)));
    key_type_values_534->mHeap=(_Bool)0;
    var_name_535=(char*)come_increment_ref_count(xsprintf("__map_keys%d__",++map_value_num_533));
    add_variable_to_table(var_name_535,(struct sType*)come_increment_ref_count(sType_clone(key_type_values_534)),info);
    var__536=get_variable_from_table(info->lv_table,var_name_535);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value715=make_define_var(key_type_values_534,var__536->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value715 = come_decrement_ref_count2(__right_value715, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    element_type_values_537=(struct sType*)come_increment_ref_count(sType_clone(map_element_type_510));
    list$1sNodeph_push_back(element_type_values_537->mArrayNum,(struct sNode*)come_increment_ref_count(create_int_node(list$1CVALUEph_length(element_params_508),info)));
    element_type_values_537->mHeap=(_Bool)0;
    var_name2_538=(char*)come_increment_ref_count(xsprintf("__map_element%d__",map_value_num_533));
    add_variable_to_table(var_name2_538,(struct sType*)come_increment_ref_count(sType_clone(element_type_values_537)),info);
    var2__539=get_variable_from_table(info->lv_table,var_name2_538);
    add_come_code_at_function_head(info,"%s;\n",((char*)(__right_value720=make_define_var(element_type_values_537,var2__539->mCValueName,(_Bool)0,info))));
    /* U11 */__right_value720 = come_decrement_ref_count2(__right_value720, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    source_540=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1227, "buffer"))));
    buffer_append_str(source_540,"(");
    for(    i_541=0;    i_541<list$1CVALUEph_length(key_params_507);    i_541++    ){
        key_param_542=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(key_params_507,i_541), "06str.c", 1232, 22));
        element_param_543=((struct CVALUE*)come_null_check(list$1CVALUEphp_operator_load_element(element_params_508,i_541), "06str.c", 1233, 23));
        if(        map_key_type_509->mHeap) {
            c_value_544=(char*)come_increment_ref_count(increment_ref_count_object(key_param_542->type,key_param_542->c_value,info));
            buffer_append_format(source_540,"%s[%d]=%s,\n",var__536->mCValueName,i_541,c_value_544);
            /* U13 */c_value_544 = come_decrement_ref_count2(c_value_544, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_540,"%s[%d]=%s,\n",var__536->mCValueName,i_541,key_param_542->c_value);
        }
        if(        map_element_type_510->mHeap) {
            c_value_545=(char*)come_increment_ref_count(increment_ref_count_object(element_param_543->type,element_param_543->c_value,info));
            buffer_append_format(source_540,"%s[%d]=%s,\n",var2__539->mCValueName,i_541,c_value_545);
            /* U13 */c_value_545 = come_decrement_ref_count2(c_value_545, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        else {
            buffer_append_format(source_540,"%s[%d]=%s,\n",var2__539->mCValueName,i_541,element_param_543->c_value);
        }
    }
    map_type_546=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1252, "sType")),"map",(_Bool)0,info));
    list$1sTypeph_push_back(map_type_546->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_key_type_509)));
    list$1sTypeph_push_back(map_type_546->mGenericsTypes,(struct sType*)come_increment_ref_count(sType_clone(map_element_type_510)));
    obj_type_547=(struct sType*)come_increment_ref_count(sType_clone(map_type_546));
    fun_name_548="initialize_with_values";
    generics_fun_name_549=(char*)come_increment_ref_count(string_to_string(((char*)(__right_value731=make_generics_function(obj_type_547,(char*)come_increment_ref_count(__builtin_string(fun_name_548)),info,(_Bool)1)))));
    /* U11 */__right_value731 = come_decrement_ref_count2(__right_value731, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    fun_550=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0));
    if(    fun_550==((void*)0)) {
        __dec_obj233=generics_fun_name_549;
        generics_fun_name_549=(char*)come_increment_ref_count(create_method_name(obj_type_547,(_Bool)0,((char*)(__right_value733=__builtin_string(fun_name_548))),info,(_Bool)1));
        /*G*/ __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        /* U11 */__right_value733 = come_decrement_ref_count2(__right_value733, (void*)0, (void*)0, 1, 0, 0, (void*)0);
        fun_550=map$2charphsFunph_at(info->funcs,generics_fun_name_549,((void*)0));
        if(        fun_550==((void*)0)) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_549,info->come_fun->mName);
            __result328__ = (_Bool)1;
            /*i*/come_call_finalizer3(key_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_key_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_element_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(key_type_values_534,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name_535 = come_decrement_ref_count2(var_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(element_type_values_537,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */var_name2_538 = come_decrement_ref_count2(var_name2_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(source_540,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_type_546,sType_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(obj_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
            /* U13 */generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            return __result328__;
        }
    }
    result_type_551=(struct sType*)come_increment_ref_count(sType_clone(fun_550->mResultType));
    result_type_551->mStatic=(_Bool)0;
    type_552=map_type_546;
    obj_value_553=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1279, "CVALUE"))));
    num_string_554=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1281, "buffer"))));
    buffer_append_str(num_string_554,"1");
    type2_555=(struct sType*)come_increment_ref_count(solve_generics(type_552,type_552,info));
    type_name_556=(char*)come_increment_ref_count(make_type_name_string(type2_555,(_Bool)0,(_Bool)1,(_Bool)0,info,(_Bool)0));
    __dec_obj234=obj_value_553->c_value;
    obj_value_553->c_value=(char*)come_increment_ref_count(xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_556,type_name_556,((char*)(__right_value742=buffer_to_string(num_string_554))),info->sname,info->sline,type_name_556));
    /*G*/ __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
    /* U11 */__right_value742 = come_decrement_ref_count2(__right_value742, (void*)0, (void*)0, 1, 0, 0, (void*)0);
    type3_557=(struct sType*)come_increment_ref_count(sType_clone(type2_555));
    type3_557->mPointerNum++;
    type3_557->mHeap=(_Bool)1;
    type2_555->mHeap=(_Bool)1;
    __dec_obj235=obj_value_553->type;
    obj_value_553->type=(struct sType*)come_increment_ref_count(sType_clone(type2_555));
    come_call_finalizer3(__dec_obj235,sType_finalize, 0, 0, 0, 0, (void*)0);
    obj_value_553->type->mPointerNum++;
    obj_value_553->var=((void*)0);
    append_object_to_right_values2(obj_value_553,(struct sType*)come_increment_ref_count(type3_557),info,(_Bool)0);
    come_params_558=(struct list$1CVALUEph*)come_increment_ref_count(list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count((struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1301, "list$1CVALUEph"))));
    if(    ((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_550->mParamTypes,0), "06str.c", 1303, 24))->mHeap&&obj_value_553->type->mHeap) {
        std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(fun_550->mParamTypes,0), "06str.c", 1304, 25)),obj_value_553->type,obj_value_553,info,(_Bool)1);
    }
    list$1CVALUEph_push_back(come_params_558,(struct CVALUE*)come_increment_ref_count(obj_value_553));
    come_value2_559=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1308, "CVALUE"))));
    __dec_obj236=come_value2_559->c_value;
    come_value2_559->c_value=(char*)come_increment_ref_count(xsprintf("%d",list$1CVALUEph_length(key_params_507)));
    /*G*/ __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj237=come_value2_559->type;
    come_value2_559->type=((void*)0);
    come_call_finalizer3(__dec_obj237,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value2_559->var=((void*)0);
    list$1CVALUEph_push_back(come_params_558,(struct CVALUE*)come_increment_ref_count(come_value2_559));
    come_value3_560=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1316, "CVALUE"))));
    __dec_obj238=come_value3_560->c_value;
    come_value3_560->c_value=(char*)come_increment_ref_count(xsprintf("%s",var__536->mCValueName));
    /*G*/ __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj239=come_value3_560->type;
    come_value3_560->type=((void*)0);
    come_call_finalizer3(__dec_obj239,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value3_560->var=((void*)0);
    list$1CVALUEph_push_back(come_params_558,(struct CVALUE*)come_increment_ref_count(come_value3_560));
    come_value4_561=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1324, "CVALUE"))));
    __dec_obj240=come_value4_561->c_value;
    come_value4_561->c_value=(char*)come_increment_ref_count(xsprintf("%s",var2__539->mCValueName));
    /*G*/ __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj241=come_value4_561->type;
    come_value4_561->type=((void*)0);
    come_call_finalizer3(__dec_obj241,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value4_561->var=((void*)0);
    list$1CVALUEph_push_back(come_params_558,(struct CVALUE*)come_increment_ref_count(come_value4_561));
    buffer_append_str(source_540,generics_fun_name_549);
    buffer_append_str(source_540,"(");
    j_562=0;
    for(    o2_saved_563=(struct list$1CVALUEph*)come_increment_ref_count((come_params_558)),it_564=list$1CVALUEph_begin((o2_saved_563));    !list$1CVALUEph_end((o2_saved_563));    it_564=list$1CVALUEph_next((o2_saved_563))    ){
        buffer_append_str(source_540,it_564->c_value);
        if(        j_562!=list$1CVALUEph_length(come_params_558)-1) {
            buffer_append_str(source_540,",");
        }
        j_562++;
    }
    /*i*/come_call_finalizer3(o2_saved_563,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    buffer_append_str(source_540,")");
    buffer_append_str(source_540,")");
    come_value5_565=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1350, "CVALUE"))));
    __dec_obj242=come_value5_565->c_value;
    come_value5_565->c_value=(char*)come_increment_ref_count(buffer_to_string(source_540));
    /*G*/ __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj243=come_value5_565->type;
    come_value5_565->type=(struct sType*)come_increment_ref_count(sType_clone(result_type_551));
    come_call_finalizer3(__dec_obj243,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_value5_565->type->mStatic=(_Bool)0;
    come_value5_565->var=((void*)0);
    if(    result_type_551->mHeap) {
        append_object_to_right_values2(come_value5_565,(struct sType*)come_increment_ref_count(result_type_551),info,(_Bool)0);
    }
    add_come_last_code(info,"%s",come_value5_565->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_565));
    __result329__ = (_Bool)1;
    /*i*/come_call_finalizer3(key_params_507,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_params_508,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_key_type_509,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_element_type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(key_type_values_534,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name_535 = come_decrement_ref_count2(var_name_535, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(element_type_values_537,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */var_name2_538 = come_decrement_ref_count2(var_name2_538, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(source_540,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(map_type_546,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_type_547,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */generics_fun_name_549 = come_decrement_ref_count2(generics_fun_name_549, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(result_type_551,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(obj_value_553,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(num_string_554,buffer_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type2_555,sType_finalize, 0, 0, 0, 0, (void*)0);
    /* U13 */type_name_556 = come_decrement_ref_count2(type_name_556, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(type3_557,sType_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_params_558,list$1CVALUEphp_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value2_559,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value3_560,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value4_561,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    /*i*/come_call_finalizer3(come_value5_565,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result329__;
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__=(void*)0;
struct list_item$1sNodeph* it_513;
int i_514;
struct sNode* __result322__;
struct sNode* default_value_515;
struct sNode* __result323__;
default_value_515 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_513=self->head;
    i_514=0;
    while(it_513!=((void*)0)) {
        if(        position==i_514) {
            __result322__ = gComeFunResultObject = __result_obj__ = it_513->item;
            gComeFunResultObject = (void*)0;
            return __result322__;
        }
        it_513=it_513->next;
        i_514++;
    }
    memset(&default_value_515,0,sizeof(struct sNode*));
    __result323__ = gComeFunResultObject = __result_obj__ = default_value_515;
    if(default_value_515) { default_value_515 = come_decrement_ref_count2(default_value_515, ((struct sNode*)default_value_515)->finalize, ((struct sNode*)default_value_515)->_protocol_obj, 0, 1, 0, (void*)0); } 
    gComeFunResultObject = (void*)0;
    return __result323__;
}

struct sNode* expression_node_v96(struct sInfo* info){
void* __result_obj__=(void*)0;
int sline_real_566;
int sline_567;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
struct list$1sNodeph* exps_568;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
struct buffer* value_569;
char* head_of_last_line_570;
int len_571;
void* __right_value765 = (void*)0;
struct sNode* exp_572;
int sline2_573;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sNode* _inf_value5;
struct sSStringNode* _inf_obj_value5;
void* __right_value773 = (void*)0;
struct sNode* __result332__;
int sline_real_575;
int sline_576;
void* __right_value774 = (void*)0;
void* __right_value775 = (void*)0;
struct buffer* value_577;
char* p_578;
int sline_579;
int sline2_580;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sNode* _inf_value6;
struct sStrNode* _inf_obj_value6;
void* __right_value782 = (void*)0;
struct sNode* __result335__;
int sline_real_582;
int sline_583;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
struct buffer* value_584;
unsigned long  int size_585;
char* p_586;
int sline_587;
int len_588;
int sline2_589;
void* __right_value785 = (void*)0;
void* __right_value786 = (void*)0;
struct sNode* _inf_value7;
struct sBufferNode* _inf_obj_value7;
void* __right_value790 = (void*)0;
struct sNode* __result338__;
int sline_real_591;
int sline_592;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
struct buffer* buf_593;
_Bool global_594;
_Bool ignore_case_595;
_Bool catch_exception_596;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
struct sNode* _inf_value8;
struct sStrNode* _inf_obj_value8;
void* __right_value799 = (void*)0;
struct sNode* obj_597;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_599;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
void* __right_value838 = (void*)0;
struct buffer* method_block_600;
int method_block_sline_601;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1sTypeph* method_generics_types_602;
void* __right_value841 = (void*)0;
struct sNode* node_603;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
struct sNode* __dec_obj262;
struct sNode* __result341__;
int sline_real_604;
int sline_605;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct buffer* value_606;
char* p_607;
int sline_608;
int len_609;
int sline2_610;
_Bool global_611;
_Bool ignore_case_612;
_Bool catch_exception_613;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
void* __right_value848 = (void*)0;
struct sNode* _inf_value9;
struct sStrNode* _inf_obj_value9;
void* __right_value852 = (void*)0;
struct sNode* obj_614;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
struct list$1tuple2$2charphsNodephph* params_616;
void* __right_value855 = (void*)0;
void* __right_value856 = (void*)0;
void* __right_value857 = (void*)0;
void* __right_value858 = (void*)0;
void* __right_value859 = (void*)0;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
void* __right_value862 = (void*)0;
void* __right_value863 = (void*)0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
void* __right_value869 = (void*)0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
void* __right_value877 = (void*)0;
void* __right_value878 = (void*)0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
struct buffer* method_block_617;
int method_block_sline_618;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct list$1sTypeph* method_generics_types_619;
void* __right_value894 = (void*)0;
struct sNode* node_620;
void* __right_value895 = (void*)0;
void* __right_value896 = (void*)0;
struct sNode* __dec_obj267;
struct sNode* __result344__;
int sline_real_621;
int c_622;
int n_623;
int n_624;
unsigned long long int n_627;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value10;
struct sCharNode* _inf_obj_value10;
void* __right_value901 = (void*)0;
struct sNode* __result347__;
int sline_real_629;
unsigned int c_630;
_Bool quote_631;
int n_632;
int n_633;
unsigned long long int n_636;
unsigned char p2_637;
int size_638;
void* __right_value902 = (void*)0;
void* __right_value903 = (void*)0;
struct sNode* _inf_value11;
struct sWCharNode* _inf_obj_value11;
void* __right_value906 = (void*)0;
struct sNode* __result350__;
int sline_real_641;
int sline_642;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* value_643;
char* p_644;
int sline_645;
int sline2_646;
int len_647;
void* __right_value909 = (void*)0;
unsigned int* wstr_648;
char* str_649;
void* __right_value910 = (void*)0;
void* __right_value911 = (void*)0;
struct sNode* _inf_value12;
struct sWStringNode* _inf_obj_value12;
void* __right_value915 = (void*)0;
struct sNode* __result353__;
int sline_real_651;
int sline_652;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct list$1sNodeph* exps_653;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct buffer* value_654;
char* p_655;
int sline_656;
int len_657;
void* __right_value920 = (void*)0;
struct sNode* exp_658;
int sline2_659;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
void* __right_value923 = (void*)0;
struct sNode* _inf_value13;
struct sSStringNode* _inf_obj_value13;
void* __right_value928 = (void*)0;
struct sNode* __result356__;
int sline_real_661;
char* p_662;
_Bool no_comma_663;
void* __right_value929 = (void*)0;
struct sNode* node_664;
char* p2_665;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct buffer* first_element_source_666;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct list$1sNodeph* list_elements_667;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
struct list$1sNodeph* map_keys_668;
void* __right_value936 = (void*)0;
void* __right_value937 = (void*)0;
struct list$1sNodeph* map_elements_669;
_Bool no_comma_670;
void* __right_value938 = (void*)0;
struct sNode* node2_671;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct sNode* _inf_value14;
struct sMapNode* _inf_obj_value14;
void* __right_value945 = (void*)0;
struct sNode* __result359__;
_Bool no_comma_673;
void* __right_value946 = (void*)0;
struct sNode* node2_674;
void* __right_value947 = (void*)0;
struct sNode* node3_675;
void* __right_value948 = (void*)0;
void* __right_value949 = (void*)0;
struct sNode* _inf_value15;
struct sMapNode* _inf_obj_value15;
void* __right_value954 = (void*)0;
struct sNode* __result362__;
_Bool no_comma_677;
void* __right_value955 = (void*)0;
struct sNode* node2_678;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct sNode* _inf_value16;
struct sListNode* _inf_obj_value16;
void* __right_value961 = (void*)0;
struct sNode* __result365__;
void* __right_value962 = (void*)0;
struct sNode* node_680;
struct sNode* __result366__;
struct sNode* __result367__;
memset(&c_622, 0, sizeof(int));
memset(&c_630, 0, sizeof(unsigned int));
memset(&quote_631, 0, sizeof(_Bool));
memset(&size_638, 0, sizeof(int));
    if(    *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10) {
        sline_real_566=info->sline_real;
        info->sline_real=info->sline;
        info->p+=4;
        info->sline++;
        sline_567=info->sline;
        exps_568=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1380, "list$1sNodeph"))));
        value_569=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1381, "buffer"))));
        head_of_last_line_570=((void*)0);
        while(1) {
            if(            *info->p==34&&*(info->p+1)==34&&*(info->p+2)==34) {
                if(                head_of_last_line_570) {
                    buffer_trim(value_569,info->p-head_of_last_line_570);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else if(            *info->p==37) {
                buffer_append_char(value_569,37);
                buffer_append_char(value_569,37);
                info->p++;
            }
            else if(            *info->p==34) {
                buffer_append_char(value_569,92);
                buffer_append_char(value_569,34);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_569,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_571=0;
                    while(xisdigit(*info->p)&&len_571<3) {
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        len_571++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_569,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_572=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_568,(struct sNode*)come_increment_ref_count(exp_572));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_569,"%s");
                    if(exp_572) { exp_572 = come_decrement_ref_count2(exp_572, ((struct sNode*)exp_572)->finalize, ((struct sNode*)exp_572)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_569,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_573=info->sline;
                info->sline=sline_567;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    buffer_append_char(value_569,92);
                    buffer_append_char(value_569,110);
                    info->p++;
                    info->sline++;
                    head_of_last_line_570=info->p;
                }
                else {
                    buffer_append_char(value_569,*info->p);
                    info->p++;
                }
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_566;
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1520, "struct sNode");
        _inf_obj_value5=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value768=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1520, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_569)),(struct list$1sNodeph*)come_increment_ref_count(exps_568),sline_567,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sSStringNode_finalize;
        _inf_value5->clone=(void*)sSStringNode_clone;
        _inf_value5->compile=(void*)sSStringNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sSStringNode_kind;
        __result332__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value773=_inf_value5));
        /*i*/come_call_finalizer3(exps_568,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_569,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value768,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value773) { __right_value773 = come_decrement_ref_count2(__right_value773, ((struct sNode*)__right_value773)->finalize, ((struct sNode*)__right_value773)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result332__;
        /*i*/come_call_finalizer3(exps_568,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_569,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==34) {
        sline_real_575=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_576=info->sline;
        value_577=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1530, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_578=info->p;
                sline_579=info->sline;
                skip_spaces_and_lf(info);
                parse_sharp_v5(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_578;
                    info->sline=sline_579;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_577,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_577,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_577,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_580=info->sline;
                info->sline=sline_576;
                err_msg(info,"close \" to make c string value");
                info->sline=sline2_580;
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_577,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_575;
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1583, "struct sNode");
        _inf_obj_value6=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value778=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1583, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_577)),sline_576,info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sStrNode_finalize;
        _inf_value6->clone=(void*)sStrNode_clone;
        _inf_value6->compile=(void*)sStrNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sStrNode_kind;
        __result335__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value782=_inf_value6));
        /*i*/come_call_finalizer3(value_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value778,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value782) { __right_value782 = come_decrement_ref_count2(__right_value782, ((struct sNode*)__right_value782)->finalize, ((struct sNode*)__right_value782)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result335__;
        /*i*/come_call_finalizer3(value_577,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==98||*info->p==66)&&*(info->p+1)==34) {
        sline_real_582=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_583=info->sline;
        value_584=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1593, "buffer"))));
        size_585=0;
        while(1) {
            if(            *info->p==34) {
                buffer_append_char(value_584,*info->p);
                info->p++;
                p_586=info->p;
                sline_587=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_586;
                    info->sline=sline_587;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_584,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_588=0;
                    while(xisdigit(*info->p)&&len_588<3) {
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        len_588++;
                    }
                    size_585++;
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_584,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                    }
                    size_585++;
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 110:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 116:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 114:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 118:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 102:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 97:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 98:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        case 92:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                        default:
                        buffer_append_char(value_584,*info->p);
                        info->p++;
                        size_585++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_589=info->sline;
                info->sline=sline_583;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_584,*info->p);
                info->p++;
                size_585++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_582;
        _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1720, "struct sNode");
        _inf_obj_value7=(struct sBufferNode*)come_increment_ref_count(((struct sBufferNode*)(__right_value786=sBufferNode_initialize((struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "06str.c", 1720, "sBufferNode")),(struct buffer*)come_increment_ref_count(value_584),size_585,info))));
        _inf_value7->_protocol_obj=_inf_obj_value7;
        _inf_value7->finalize=(void*)sBufferNode_finalize;
        _inf_value7->clone=(void*)sBufferNode_clone;
        _inf_value7->compile=(void*)sBufferNode_compile;
        _inf_value7->sline=(void*)sNodeBase_sline;
        _inf_value7->sline_real=(void*)sNodeBase_sline_real;
        _inf_value7->sname=(void*)sNodeBase_sname;
        _inf_value7->terminated=(void*)sNodeBase_terminated;
        _inf_value7->kind=(void*)sBufferNode_kind;
        __result338__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value790=_inf_value7));
        /*i*/come_call_finalizer3(value_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value786,sBufferNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value790) { __right_value790 = come_decrement_ref_count2(__right_value790, ((struct sNode*)__right_value790)->finalize, ((struct sNode*)__right_value790)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result338__;
        /*i*/come_call_finalizer3(value_584,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==47) {
        sline_real_591=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        sline_592=info->sline;
        buf_593=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1729, "buffer"))));
        while((_Bool)1) {
            if(            *info->p==92&&*(info->p+1)==47) {
                info->p++;
                buffer_append_char(buf_593,*info->p);
                info->p++;
            }
            else if(            *info->p==47) {
                info->p++;
                break;
            }
            else if(            *info->p==0) {
                err_msg(info,"require closing / for regex");
                exit(5);
            }
            else {
                buffer_append_char(buf_593,*info->p);
                info->p++;
            }
        }
        global_594=(_Bool)0;
        ignore_case_595=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_594=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_595=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_596=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_596=(_Bool)1;
        }
        _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1773, "struct sNode");
        _inf_obj_value8=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value795=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1773, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(buf_593)),sline_592,info))));
        _inf_value8->_protocol_obj=_inf_obj_value8;
        _inf_value8->finalize=(void*)sStrNode_finalize;
        _inf_value8->clone=(void*)sStrNode_clone;
        _inf_value8->compile=(void*)sStrNode_compile;
        _inf_value8->sline=(void*)sNodeBase_sline;
        _inf_value8->sline_real=(void*)sNodeBase_sline_real;
        _inf_value8->sname=(void*)sNodeBase_sname;
        _inf_value8->terminated=(void*)sNodeBase_terminated;
        _inf_value8->kind=(void*)sStrNode_kind;
        obj_597=(struct sNode*)come_increment_ref_count(_inf_value8);
        /*g*/come_call_finalizer3(__right_value795,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_599=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1775, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1777, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_597))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1778, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_595)?(((struct sNode*)(__right_value806=create_int_node(1,info)))):(((struct sNode*)(__right_value807=create_int_node(0,info)))))))));
        if(__right_value806) { __right_value806 = come_decrement_ref_count2(__right_value806, ((struct sNode*)__right_value806)->finalize, ((struct sNode*)__right_value806)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value807) { __right_value807 = come_decrement_ref_count2(__right_value807, ((struct sNode*)__right_value807)->finalize, ((struct sNode*)__right_value807)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1779, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1780, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_594)?(((struct sNode*)(__right_value815=create_int_node(1,info)))):(((struct sNode*)(__right_value816=create_int_node(0,info)))))))));
        if(__right_value815) { __right_value815 = come_decrement_ref_count2(__right_value815, ((struct sNode*)__right_value815)->finalize, ((struct sNode*)__right_value815)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value816) { __right_value816 = come_decrement_ref_count2(__right_value816, ((struct sNode*)__right_value816)->finalize, ((struct sNode*)__right_value816)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1781, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1782, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1783, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1784, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_599,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1785, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_600=((void*)0);
        method_block_sline_601=info->sline;
        method_generics_types_602=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1791, "list$1sTypeph"))));
        node_603=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_597),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_599),method_block_600,method_block_sline_601,method_generics_types_602,info));
        if(        !catch_exception_596) {
            __dec_obj262=node_603;
            node_603=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_603)),info));
            /* U1 */ if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_591;
        __result341__ = gComeFunResultObject = __result_obj__ = node_603;
        /*i*/come_call_finalizer3(buf_593,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_597) { obj_597 = come_decrement_ref_count2(obj_597, ((struct sNode*)obj_597)->finalize, ((struct sNode*)obj_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_599,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_603) { node_603 = come_decrement_ref_count2(node_603, ((struct sNode*)node_603)->finalize, ((struct sNode*)node_603)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result341__;
        /*i*/come_call_finalizer3(buf_593,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_597) { obj_597 = come_decrement_ref_count2(obj_597, ((struct sNode*)obj_597)->finalize, ((struct sNode*)obj_597)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_599,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_602,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_603) { node_603 = come_decrement_ref_count2(node_603, ((struct sNode*)node_603)->finalize, ((struct sNode*)node_603)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    (*info->p==82||*info->p==114)&&*(info->p+1)==34) {
        sline_real_604=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_605=info->sline;
        value_606=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1809, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_607=info->p;
                sline_608=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_607;
                    info->sline=sline_608;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_606,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_609=0;
                    while(xisdigit(*info->p)&&len_609<3) {
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        len_609++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_606,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                    }
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_606,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_610=info->sline;
                info->sline=sline_605;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_606,*info->p);
                info->p++;
            }
        }
        global_611=(_Bool)0;
        ignore_case_612=(_Bool)0;
        while(*info->p==103||*info->p==105) {
            if(            *info->p==103) {
                info->p++;
                global_611=(_Bool)1;
            }
            else if(            *info->p==105) {
                info->p++;
                ignore_case_612=(_Bool)1;
            }
            else {
                break;
            }
        }
        skip_spaces_and_lf(info);
        catch_exception_613=(_Bool)0;
        if(        strncmp(info->p,".rescue",strlen(".rescue"))==0||strncmp(info->p,".exception_throw",strlen(".exception_throw"))==0||strncmp(info->p,".exception_value",strlen(".exception_value"))==0||strncmp(info->p,"!!",strlen("!!"))==0) {
            catch_exception_613=(_Bool)1;
        }
        _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1940, "struct sNode");
        _inf_obj_value9=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(__right_value848=sStrNode_initialize((struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1940, "sStrNode")),(char*)come_increment_ref_count(buffer_to_string(value_606)),sline_605,info))));
        _inf_value9->_protocol_obj=_inf_obj_value9;
        _inf_value9->finalize=(void*)sStrNode_finalize;
        _inf_value9->clone=(void*)sStrNode_clone;
        _inf_value9->compile=(void*)sStrNode_compile;
        _inf_value9->sline=(void*)sNodeBase_sline;
        _inf_value9->sline_real=(void*)sNodeBase_sline_real;
        _inf_value9->sname=(void*)sNodeBase_sname;
        _inf_value9->terminated=(void*)sNodeBase_terminated;
        _inf_value9->kind=(void*)sStrNode_kind;
        obj_614=(struct sNode*)come_increment_ref_count(_inf_value9);
        /*g*/come_call_finalizer3(__right_value848,sStrNode_finalize, 0, 1, 0, 0, __result_obj__);
        params_616=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 1942, "list$1tuple2$2charphsNodephph"))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1944, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("self")),(struct sNode*)come_increment_ref_count(obj_614))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1945, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ignore_case")),(struct sNode*)come_increment_ref_count(((ignore_case_612)?(((struct sNode*)(__right_value859=create_int_node(1,info)))):(((struct sNode*)(__right_value860=create_int_node(0,info)))))))));
        if(__right_value859) { __right_value859 = come_decrement_ref_count2(__right_value859, ((struct sNode*)__right_value859)->finalize, ((struct sNode*)__right_value859)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value860) { __right_value860 = come_decrement_ref_count2(__right_value860, ((struct sNode*)__right_value860)->finalize, ((struct sNode*)__right_value860)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1946, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("multiline")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1947, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("global")),(struct sNode*)come_increment_ref_count(((global_611)?(((struct sNode*)(__right_value868=create_int_node(1,info)))):(((struct sNode*)(__right_value869=create_int_node(0,info)))))))));
        if(__right_value868) { __right_value868 = come_decrement_ref_count2(__right_value868, ((struct sNode*)__right_value868)->finalize, ((struct sNode*)__right_value868)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        if(__right_value869) { __right_value869 = come_decrement_ref_count2(__right_value869, ((struct sNode*)__right_value869)->finalize, ((struct sNode*)__right_value869)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1948, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("extended")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1949, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dotall")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1950, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("anchored")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1951, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("dollar_endonly")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        list$1tuple2$2charphsNodephph_add(params_616,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 1952, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(xsprintf("ungreedy")),(struct sNode*)come_increment_ref_count(create_int_node(0,info)))));
        method_block_617=((void*)0);
        method_block_sline_618=info->sline;
        method_generics_types_619=(struct list$1sTypeph*)come_increment_ref_count(list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count((struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 1958, "list$1sTypeph"))));
        node_620=(struct sNode*)come_increment_ref_count(create_method_call("to_regex",(struct sNode*)come_increment_ref_count(obj_614),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(params_616),method_block_617,method_block_sline_618,method_generics_types_619,info));
        if(        !catch_exception_613) {
            __dec_obj267=node_620;
            node_620=(struct sNode*)come_increment_ref_count(create_exception_value((struct sNode*)come_increment_ref_count(sNode_clone(node_620)),info));
            /* U1 */ if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); };
        }
        info->sline_real=sline_real_604;
        __result344__ = gComeFunResultObject = __result_obj__ = node_620;
        /*i*/come_call_finalizer3(value_606,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_614) { obj_614 = come_decrement_ref_count2(obj_614, ((struct sNode*)obj_614)->finalize, ((struct sNode*)obj_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_616,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result344__;
        /*i*/come_call_finalizer3(value_606,buffer_finalize, 0, 0, 0, 0, (void*)0);
        if(obj_614) { obj_614 = come_decrement_ref_count2(obj_614, ((struct sNode*)obj_614)->finalize, ((struct sNode*)obj_614)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(params_616,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(method_generics_types_619,list$1sTypephp_finalize, 0, 0, 0, 0, (void*)0);
        if(node_620) { node_620 = come_decrement_ref_count2(node_620, ((struct sNode*)node_620)->finalize, ((struct sNode*)node_620)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    else if(    *info->p==39) {
        sline_real_621=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        if(        *info->p==92) {
            info->p++;
            if(            xisdigit(*info->p)) {
                n_623=0;
                while(xisdigit(*info->p)) {
                    n_623=n_623*8+*info->p-48;
                    info->p++;
                }
                c_622=n_623;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_622=10;
                    info->p++;
                    break;
                    case 116:
                    c_622=9;
                    info->p++;
                    break;
                    case 114:
                    c_622=13;
                    info->p++;
                    break;
                    case 97:
                    c_622=7;
                    info->p++;
                    break;
                    case 102:
                    c_622=12;
                    info->p++;
                    break;
                    case 118:
                    c_622=11;
                    info->p++;
                    break;
                    case 98:
                    c_622=8;
                    info->p++;
                    break;
                    case 92:
                    c_622=92;
                    info->p++;
                    break;
                    case 48:
                    c_622=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_624=0;
                        while(xisdigit(*info->p)) {
                            n_624=n_624*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_622=n_624;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_625[128];
                        memset(&buf_625, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_625,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_626[2];
                            memset(&buf2_626, 0, sizeof(char)                            *(2)                            );
                            buf2_626[0]=*info->p;
                            buf2_626[1]=0;
                            info->p++;
                            strncat(buf_625,buf2_626,128);
                        }
                        n_627=strtoll(buf_625,((void*)0),0);
                        c_622=n_627;
                    }
                    break;
                    default:
                    c_622=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            c_622=*info->p;
            info->p++;
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_621;
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2087, "struct sNode");
            _inf_obj_value10=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(__right_value898=sCharNode_initialize((struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 2087, "sCharNode")),c_622,info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sCharNode_finalize;
            _inf_value10->clone=(void*)sCharNode_clone;
            _inf_value10->compile=(void*)sCharNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sCharNode_kind;
            __result347__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value901=_inf_value10));
            /*g*/come_call_finalizer3(__right_value898,sCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value901) { __right_value901 = come_decrement_ref_count2(__right_value901, ((struct sNode*)__right_value901)->finalize, ((struct sNode*)__right_value901)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result347__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==39) {
        sline_real_629=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        if(        *info->p==92) {
            quote_631=(_Bool)1;
            info->p++;
            if(            xisdigit(*info->p)) {
                n_632=0;
                while(xisdigit(*info->p)) {
                    n_632=n_632*8+*info->p-48;
                    info->p++;
                }
                c_630=n_632;
            }
            else {
                switch (*info->p) {
                    case 110:
                    c_630=10;
                    info->p++;
                    break;
                    case 116:
                    c_630=9;
                    info->p++;
                    break;
                    case 114:
                    c_630=13;
                    info->p++;
                    break;
                    case 97:
                    c_630=7;
                    info->p++;
                    break;
                    case 92:
                    c_630=92;
                    info->p++;
                    break;
                    case 48:
                    c_630=0;
                    info->p++;
                    if(                    xisdigit(*info->p)) {
                        n_633=0;
                        while(xisdigit(*info->p)) {
                            n_633=n_633*8+*info->p-48;
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        c_630=n_633;
                    }
                    break;
                    case 120:
                    case 88:
                    {
                        info->p++;
                        char buf_634[128];
                        memset(&buf_634, 0, sizeof(char)                        *(128)                        );
                        strncpy(buf_634,"0x",128);
                        while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                            char buf2_635[2];
                            memset(&buf2_635, 0, sizeof(char)                            *(2)                            );
                            buf2_635[0]=*info->p;
                            buf2_635[1]=0;
                            info->p++;
                            strncat(buf_634,buf2_635,128);
                        }
                        n_636=strtoll(buf_634,((void*)0),0);
                        c_630=n_636;
                    }
                    break;
                    default:
                    c_630=*info->p;
                    info->p++;
                    break;
                }
            }
        }
        else {
            quote_631=(_Bool)0;
            p2_637=*(unsigned char*)info->p;
            if(            p2_637>127) {
                char str_639[4+1];
                memset(&str_639, 0, sizeof(char)                *(4+1)                );
                size_638=((p2_637&128)>>7)+((p2_637&64)>>6)+((p2_637&32)>>5)+((p2_637&16)>>4);
                if(                size_638>4) {
                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str_639,info->p,size_638);
                    str_639[size_638]=0;
                    if(                    mbtowc(&c_630,str_639,size_638)<0) {
                        perror("mbtowc");
                        err_msg(info,"invalid utf-8 character. mbtowc");
                        info->err_num++;
                    }
                    else {
                        info->p+=size_638;
                    }
                }
            }
            else {
                c_630=*info->p;
                info->p++;
            }
        }
        if(        *info->p!=39) {
            err_msg(info,"close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;
            skip_spaces_and_lf(info);
            info->sline_real=sline_real_629;
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2229, "struct sNode");
            _inf_obj_value11=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(__right_value903=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 2229, "sWCharNode")),c_630,quote_631,info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sWCharNode_finalize;
            _inf_value11->clone=(void*)sWCharNode_clone;
            _inf_value11->compile=(void*)sWCharNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sWCharNode_kind;
            __result350__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value906=_inf_value11));
            /*g*/come_call_finalizer3(__right_value903,sWCharNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value906) { __right_value906 = come_decrement_ref_count2(__right_value906, ((struct sNode*)__right_value906)->finalize, ((struct sNode*)__right_value906)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result350__;
        }
    }
    else if(    *info->p==76&&*(info->p+1)==34) {
        sline_real_641=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_642=info->sline;
        value_643=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2240, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_644=info->p;
                sline_645=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_644;
                    info->sline=sline_645;
                    break;
                }
            }
            else if(            *info->p==92) {
                buffer_append_char(value_643,92);
                info->p++;
                if(                *info->p==34) {
                    buffer_append_char(value_643,34);
                    info->p++;
                }
                else {
                    buffer_append_char(value_643,*info->p);
                    info->p++;
                }
            }
            else if(            *info->p==0) {
                sline2_646=info->sline;
                info->sline=sline_642;
                err_msg(info,"close \" to make c string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_643,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        len_647=value_643->len;
        wstr_648=(unsigned int*)come_increment_ref_count((unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_647+1)), "06str.c", 2291, "int"));
        str_649=value_643->buf;
        if(        mbstowcs(wstr_648,str_649,len_647+1)<0) {
            perror("mbstowcs");
            exit(1);
        }
        wstr_648[len_647]=0;
        info->sline_real=sline_real_641;
        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2303, "struct sNode");
        _inf_obj_value12=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(__right_value911=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2303, "sWStringNode")),(unsigned int*)come_increment_ref_count(wstr_648),sline_642,info))));
        _inf_value12->_protocol_obj=_inf_obj_value12;
        _inf_value12->finalize=(void*)sWStringNode_finalize;
        _inf_value12->clone=(void*)sWStringNode_clone;
        _inf_value12->compile=(void*)sWStringNode_compile;
        _inf_value12->sline=(void*)sNodeBase_sline;
        _inf_value12->sline_real=(void*)sNodeBase_sline_real;
        _inf_value12->sname=(void*)sNodeBase_sname;
        _inf_value12->terminated=(void*)sNodeBase_terminated;
        _inf_value12->kind=(void*)sWStringNode_kind;
        __result353__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value915=_inf_value12));
        /*i*/come_call_finalizer3(value_643,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */wstr_648 = come_decrement_ref_count2(wstr_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value911,sWStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value915) { __right_value915 = come_decrement_ref_count2(__right_value915, ((struct sNode*)__right_value915)->finalize, ((struct sNode*)__right_value915)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result353__;
        /*i*/come_call_finalizer3(value_643,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /* U13 */wstr_648 = come_decrement_ref_count2(wstr_648, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else if(    (*info->p==115||*info->p==83)&&*(info->p+1)==34) {
        sline_real_651=info->sline_real;
        info->sline_real=info->sline;
        info->p+=2;
        sline_652=info->sline;
        exps_653=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2313, "list$1sNodeph"))));
        value_654=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2314, "buffer"))));
        while(1) {
            if(            *info->p==34) {
                info->p++;
                p_655=info->p;
                sline_656=info->sline;
                skip_spaces_and_lf(info);
                if(                *info->p==34) {
                    info->p++;
                }
                else {
                    info->p=p_655;
                    info->sline=sline_656;
                    break;
                }
            }
            else if(            *info->p==37) {
                buffer_append_char(value_654,37);
                buffer_append_char(value_654,37);
                info->p++;
            }
            else if(            *info->p==92) {
                buffer_append_char(value_654,92);
                info->p++;
                if(                xisdigit(*info->p)) {
                    len_657=0;
                    while(xisdigit(*info->p)&&len_657<3) {
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        len_657++;
                    }
                }
                else if(                *info->p==120||*info->p==88) {
                    buffer_append_char(value_654,*info->p);
                    info->p++;
                    while(*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70) {
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                    }
                }
                else if(                *info->p==123) {
                    info->p++;
                    exp_658=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    list$1sNodeph_add(exps_653,(struct sNode*)come_increment_ref_count(exp_658));
                    if(                    *info->p==125) {
                        info->p++;
                    }
                    buffer_append_str(value_654,"%s");
                    if(exp_658) { exp_658 = come_decrement_ref_count2(exp_658, ((struct sNode*)exp_658)->finalize, ((struct sNode*)exp_658)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    switch (*info->p) {
                        case 48:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 110:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 116:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 114:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 118:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 102:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 97:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 98:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        case 92:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                        default:
                        buffer_append_char(value_654,*info->p);
                        info->p++;
                        break;
                    }
                }
            }
            else if(            *info->p==0) {
                sline2_659=info->sline;
                info->sline=sline_652;
                err_msg(info,"close \" to make embbeded string value");
                exit(2);
            }
            else {
                if(                *info->p==10) {
                    info->sline++;
                }
                buffer_append_char(value_654,*info->p);
                info->p++;
            }
        }
        skip_spaces_and_lf(info);
        info->sline_real=sline_real_651;
        _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2462, "struct sNode");
        _inf_obj_value13=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(__right_value923=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2462, "sSStringNode")),(char*)come_increment_ref_count(buffer_to_string(value_654)),(struct list$1sNodeph*)come_increment_ref_count(exps_653),sline_652,info))));
        _inf_value13->_protocol_obj=_inf_obj_value13;
        _inf_value13->finalize=(void*)sSStringNode_finalize;
        _inf_value13->clone=(void*)sSStringNode_clone;
        _inf_value13->compile=(void*)sSStringNode_compile;
        _inf_value13->sline=(void*)sNodeBase_sline;
        _inf_value13->sline_real=(void*)sNodeBase_sline_real;
        _inf_value13->sname=(void*)sNodeBase_sname;
        _inf_value13->terminated=(void*)sNodeBase_terminated;
        _inf_value13->kind=(void*)sSStringNode_kind;
        __result356__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value928=_inf_value13));
        /*i*/come_call_finalizer3(exps_653,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*g*/come_call_finalizer3(__right_value923,sSStringNode_finalize, 0, 1, 0, 0, __result_obj__);
        if(__right_value928) { __right_value928 = come_decrement_ref_count2(__right_value928, ((struct sNode*)__right_value928)->finalize, ((struct sNode*)__right_value928)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        gComeFunResultObject = (void*)0;
        return __result356__;
        /*i*/come_call_finalizer3(exps_653,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(value_654,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    *info->p==91) {
        sline_real_661=info->sline_real;
        info->sline_real=info->sline;
        info->p++;
        skip_spaces_and_lf(info);
        p_662=info->p;
        no_comma_663=info->no_comma;
        info->no_comma=(_Bool)1;
        node_664=(struct sNode*)come_increment_ref_count(expression_v13(info));
        info->no_comma=no_comma_663;
        p2_665=info->p;
        first_element_source_666=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2481, "buffer"))));
        buffer_append(first_element_source_666,p_662,p2_665-p_662);
        buffer_append_char(first_element_source_666,0);
        list_elements_667=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2486, "list$1sNodeph"))));
        map_keys_668=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2488, "list$1sNodeph"))));
        map_elements_669=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2489, "list$1sNodeph"))));
        if(        *info->p==58) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(map_keys_668,(struct sNode*)come_increment_ref_count(node_664));
            no_comma_670=info->no_comma;
            info->no_comma=(_Bool)1;
            node2_671=(struct sNode*)come_increment_ref_count(expression_v13(info));
            info->no_comma=no_comma_670;
            list$1sNodeph_push_back(map_elements_669,(struct sNode*)come_increment_ref_count(node2_671));
            if(            *info->p==93) {
                info->p++;
                skip_spaces_and_lf(info);
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2512, "struct sNode");
                _inf_obj_value14=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value940=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2512, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_668),(struct list$1sNodeph*)come_increment_ref_count(map_elements_669),info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sMapNode_finalize;
                _inf_value14->clone=(void*)sMapNode_clone;
                _inf_value14->compile=(void*)sMapNode_compile;
                _inf_value14->sline=(void*)sNodeBase_sline;
                _inf_value14->sline_real=(void*)sNodeBase_sline_real;
                _inf_value14->sname=(void*)sNodeBase_sname;
                _inf_value14->terminated=(void*)sNodeBase_terminated;
                _inf_value14->kind=(void*)sMapNode_kind;
                __result359__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value945=_inf_value14));
                if(node2_671) { node2_671 = come_decrement_ref_count2(node2_671, ((struct sNode*)node2_671)->finalize, ((struct sNode*)node2_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_667,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_669,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value940,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value945) { __right_value945 = come_decrement_ref_count2(__right_value945, ((struct sNode*)__right_value945)->finalize, ((struct sNode*)__right_value945)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result359__;
            }
            else {
                expected_next_character(44,info);
                while((_Bool)1) {
                    no_comma_673=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node2_674=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_673;
                    list$1sNodeph_push_back(map_keys_668,(struct sNode*)come_increment_ref_count(node2_674));
                    expected_next_character(58,info);
                    no_comma_673=info->no_comma;
                    info->no_comma=(_Bool)1;
                    node3_675=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    info->no_comma=no_comma_673;
                    list$1sNodeph_push_back(map_elements_669,(struct sNode*)come_increment_ref_count(node3_675));
                    if(                    *info->p==0) {
                        err_msg(info,"invalid source end");
                        exit(2);
                    }
                    else if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==93) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(node2_674) { node2_674 = come_decrement_ref_count2(node2_674, ((struct sNode*)node2_674)->finalize, ((struct sNode*)node2_674)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node3_675) { node3_675 = come_decrement_ref_count2(node3_675, ((struct sNode*)node3_675)->finalize, ((struct sNode*)node3_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        break;
                    }
                    else {
                        err_msg(info,"invalid character(3)(%c)",*info->p);
                        exit(2);
                    }
                    if(node2_674) { node2_674 = come_decrement_ref_count2(node2_674, ((struct sNode*)node2_674)->finalize, ((struct sNode*)node2_674)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node3_675) { node3_675 = come_decrement_ref_count2(node3_675, ((struct sNode*)node3_675)->finalize, ((struct sNode*)node3_675)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2557, "struct sNode");
                _inf_obj_value15=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(__right_value949=sMapNode_initialize((struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2557, "sMapNode")),(struct list$1sNodeph*)come_increment_ref_count(map_keys_668),(struct list$1sNodeph*)come_increment_ref_count(map_elements_669),info))));
                _inf_value15->_protocol_obj=_inf_obj_value15;
                _inf_value15->finalize=(void*)sMapNode_finalize;
                _inf_value15->clone=(void*)sMapNode_clone;
                _inf_value15->compile=(void*)sMapNode_compile;
                _inf_value15->sline=(void*)sNodeBase_sline;
                _inf_value15->sline_real=(void*)sNodeBase_sline_real;
                _inf_value15->sname=(void*)sNodeBase_sname;
                _inf_value15->terminated=(void*)sNodeBase_terminated;
                _inf_value15->kind=(void*)sMapNode_kind;
                __result362__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value954=_inf_value15));
                if(node2_671) { node2_671 = come_decrement_ref_count2(node2_671, ((struct sNode*)node2_671)->finalize, ((struct sNode*)node2_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
                /*i*/come_call_finalizer3(first_element_source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(list_elements_667,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_keys_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*i*/come_call_finalizer3(map_elements_669,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
                /*g*/come_call_finalizer3(__right_value949,sMapNode_finalize, 0, 1, 0, 0, __result_obj__);
                if(__right_value954) { __right_value954 = come_decrement_ref_count2(__right_value954, ((struct sNode*)__right_value954)->finalize, ((struct sNode*)__right_value954)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                gComeFunResultObject = (void*)0;
                return __result362__;
            }
            if(node2_671) { node2_671 = come_decrement_ref_count2(node2_671, ((struct sNode*)node2_671)->finalize, ((struct sNode*)node2_671)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else if(        *info->p==93) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_667,(struct sNode*)come_increment_ref_count(node_664));
        }
        else if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1sNodeph_push_back(list_elements_667,(struct sNode*)come_increment_ref_count(node_664));
            while((_Bool)1) {
                no_comma_677=info->no_comma;
                info->no_comma=(_Bool)1;
                node2_678=(struct sNode*)come_increment_ref_count(expression_v13(info));
                info->no_comma=no_comma_677;
                list$1sNodeph_push_back(list_elements_667,(struct sNode*)come_increment_ref_count(node2_678));
                if(                *info->p==0) {
                    err_msg(info,"invalid source end");
                    exit(2);
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==93) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(node2_678) { node2_678 = come_decrement_ref_count2(node2_678, ((struct sNode*)node2_678)->finalize, ((struct sNode*)node2_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    break;
                }
                else {
                    err_msg(info,"invalid character(4)(%c)",*info->p);
                    exit(2);
                }
                if(node2_678) { node2_678 = come_decrement_ref_count2(node2_678, ((struct sNode*)node2_678)->finalize, ((struct sNode*)node2_678)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
        }
        else {
            err_msg(info,"invalid character(5)(%c)",*info->p);
            exit(2);
        }
        if(        list$1sNodeph_length(list_elements_667)>0) {
            info->sline_real=sline_real_661;
            _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2609, "struct sNode");
            _inf_obj_value16=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(__right_value957=sListNode_initialize((struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2609, "sListNode")),(struct list$1sNodeph*)come_increment_ref_count(list_elements_667),info))));
            _inf_value16->_protocol_obj=_inf_obj_value16;
            _inf_value16->finalize=(void*)sListNode_finalize;
            _inf_value16->clone=(void*)sListNode_clone;
            _inf_value16->compile=(void*)sListNode_compile;
            _inf_value16->sline=(void*)sNodeBase_sline;
            _inf_value16->sline_real=(void*)sNodeBase_sline_real;
            _inf_value16->sname=(void*)sNodeBase_sname;
            _inf_value16->terminated=(void*)sNodeBase_terminated;
            _inf_value16->kind=(void*)sListNode_kind;
            __result365__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value961=_inf_value16));
            if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
            /*i*/come_call_finalizer3(first_element_source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(list_elements_667,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_keys_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*i*/come_call_finalizer3(map_elements_669,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
            /*g*/come_call_finalizer3(__right_value957,sListNode_finalize, 0, 1, 0, 0, __result_obj__);
            if(__right_value961) { __right_value961 = come_decrement_ref_count2(__right_value961, ((struct sNode*)__right_value961)->finalize, ((struct sNode*)__right_value961)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            gComeFunResultObject = (void*)0;
            return __result365__;
        }
        else {
        }
        if(node_664) { node_664 = come_decrement_ref_count2(node_664, ((struct sNode*)node_664)->finalize, ((struct sNode*)node_664)->_protocol_obj, 0, 0, 0, (void*)0); } 
        /*i*/come_call_finalizer3(first_element_source_666,buffer_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(list_elements_667,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_keys_668,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        /*i*/come_call_finalizer3(map_elements_669,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    }
    else {
        node_680=(struct sNode*)come_increment_ref_count(expression_node_v95(info));
        __result366__ = gComeFunResultObject = __result_obj__ = node_680;
        if(node_680) { node_680 = come_decrement_ref_count2(node_680, ((struct sNode*)node_680)->finalize, ((struct sNode*)node_680)->_protocol_obj, 0, 1, 0, (void*)0); } 
        gComeFunResultObject = (void*)0;
        return __result366__;
        if(node_680) { node_680 = come_decrement_ref_count2(node_680, ((struct sNode*)node_680)->finalize, ((struct sNode*)node_680)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    __result367__ = gComeFunResultObject = __result_obj__ = (struct sNode*)((void*)0);
    gComeFunResultObject = (void*)0;
    return __result367__;
}

static void sBufferNode_finalize(struct sBufferNode* self){
char* __dec_obj254;
struct buffer* __dec_obj255;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj254=self->sname;
            /*G*/ __dec_obj254 = come_decrement_ref_count2(__dec_obj254, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj255=self->value;
            come_call_finalizer3(__dec_obj255,buffer_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->value,buffer_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sBufferNode* sBufferNode_clone(struct sBufferNode* self){
void* __result_obj__=(void*)0;
struct sBufferNode* __result336__;
void* __right_value787 = (void*)0;
struct sBufferNode* result_590;
void* __right_value788 = (void*)0;
char* __dec_obj256;
void* __right_value789 = (void*)0;
struct buffer* __dec_obj257;
struct sBufferNode* __result337__;
    if(    self==(void*)0) {
        __result336__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result336__;
    }
    result_590=(struct sBufferNode*)come_increment_ref_count((struct sBufferNode*)come_calloc(1, sizeof(struct sBufferNode)*(1), "sBufferNode_clone", 3, "sBufferNode"));
    if(    self!=((void*)0)) {
        result_590->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj256=result_590->sname;
        result_590->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_590->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj257=result_590->value;
        result_590->value=(struct buffer*)come_increment_ref_count(buffer_clone(self->value));
        come_call_finalizer3(__dec_obj257,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_590->size=self->size;
    }
    __result337__ = gComeFunResultObject = __result_obj__ = result_590;
    /*i*/come_call_finalizer3(result_590,sBufferNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result337__;
}

static void sStrNode_finalize(struct sStrNode* self){
char* __dec_obj263;
char* __dec_obj264;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj263=self->sname;
            /*G*/ __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj264=self->value;
            /*G*/ __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__=(void*)0;
struct sStrNode* __result342__;
void* __right_value849 = (void*)0;
struct sStrNode* result_615;
void* __right_value850 = (void*)0;
char* __dec_obj265;
void* __right_value851 = (void*)0;
char* __dec_obj266;
struct sStrNode* __result343__;
    if(    self==(void*)0) {
        __result342__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result342__;
    }
    result_615=(struct sStrNode*)come_increment_ref_count((struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "sStrNode"));
    if(    self!=((void*)0)) {
        result_615->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj265=result_615->sname;
        result_615->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_615->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj266=result_615->value;
        result_615->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result343__ = gComeFunResultObject = __result_obj__ = result_615;
    /*i*/come_call_finalizer3(result_615,sStrNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result343__;
}

static void sCharNode_finalize(struct sCharNode* self){
char* __dec_obj268;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj268=self->sname;
            /*G*/ __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__=(void*)0;
struct sCharNode* __result345__;
void* __right_value899 = (void*)0;
struct sCharNode* result_628;
void* __right_value900 = (void*)0;
char* __dec_obj269;
struct sCharNode* __result346__;
    if(    self==(void*)0) {
        __result345__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result345__;
    }
    result_628=(struct sCharNode*)come_increment_ref_count((struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "sCharNode"));
    if(    self!=((void*)0)) {
        result_628->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj269=result_628->sname;
        result_628->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_628->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_628->value=self->value;
    }
    __result346__ = gComeFunResultObject = __result_obj__ = result_628;
    /*i*/come_call_finalizer3(result_628,sCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result346__;
}

static void sWCharNode_finalize(struct sWCharNode* self){
char* __dec_obj270;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj270=self->sname;
            /*G*/ __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__=(void*)0;
struct sWCharNode* __result348__;
void* __right_value904 = (void*)0;
struct sWCharNode* result_640;
void* __right_value905 = (void*)0;
char* __dec_obj271;
struct sWCharNode* __result349__;
    if(    self==(void*)0) {
        __result348__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result348__;
    }
    result_640=(struct sWCharNode*)come_increment_ref_count((struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "sWCharNode"));
    if(    self!=((void*)0)) {
        result_640->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj271=result_640->sname;
        result_640->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_640->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_640->value=self->value;
    }
    if(    self!=((void*)0)) {
        result_640->quote=self->quote;
    }
    __result349__ = gComeFunResultObject = __result_obj__ = result_640;
    /*i*/come_call_finalizer3(result_640,sWCharNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result349__;
}

static void sWStringNode_finalize(struct sWStringNode* self){
char* __dec_obj272;
unsigned int* __dec_obj273;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj272=self->sname;
            /*G*/ __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj273=self->value;
            /*G*/ __dec_obj273 = come_decrement_ref_count2(__dec_obj273, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__=(void*)0;
struct sWStringNode* __result351__;
void* __right_value912 = (void*)0;
struct sWStringNode* result_650;
void* __right_value913 = (void*)0;
char* __dec_obj274;
void* __right_value914 = (void*)0;
unsigned int* __dec_obj275;
struct sWStringNode* __result352__;
    if(    self==(void*)0) {
        __result351__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result351__;
    }
    result_650=(struct sWStringNode*)come_increment_ref_count((struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "sWStringNode"));
    if(    self!=((void*)0)) {
        result_650->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj274=result_650->sname;
        result_650->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_650->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj275=result_650->value;
        result_650->value=(unsigned int*)come_increment_ref_count((unsigned int*)come_memdup(self->value, "sWStringNode_clone", 7, "unsigned int*"));
        /*G*/ __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result352__ = gComeFunResultObject = __result_obj__ = result_650;
    /*i*/come_call_finalizer3(result_650,sWStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result352__;
}

static void sSStringNode_finalize(struct sSStringNode* self){
char* __dec_obj276;
char* __dec_obj277;
struct list$1sNodeph* __dec_obj278;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj276=self->sname;
            /*G*/ __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        if(        self->value==gComeFunResultObject) {
            __dec_obj277=self->value;
            /*G*/ __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->value = come_decrement_ref_count2(self->value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        if(        self->exps==gComeFunResultObject) {
            __dec_obj278=self->exps;
            come_call_finalizer3(__dec_obj278,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->exps,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__=(void*)0;
struct sSStringNode* __result354__;
void* __right_value924 = (void*)0;
struct sSStringNode* result_660;
void* __right_value925 = (void*)0;
char* __dec_obj279;
void* __right_value926 = (void*)0;
char* __dec_obj280;
void* __right_value927 = (void*)0;
struct list$1sNodeph* __dec_obj281;
struct sSStringNode* __result355__;
    if(    self==(void*)0) {
        __result354__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result354__;
    }
    result_660=(struct sSStringNode*)come_increment_ref_count((struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "sSStringNode"));
    if(    self!=((void*)0)) {
        result_660->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj279=result_660->sname;
        result_660->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj279 = come_decrement_ref_count2(__dec_obj279, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_660->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->value!=((void*)0)) {
        __dec_obj280=result_660->value;
        result_660->value=(char*)come_increment_ref_count(string_clone(self->value));
        /*G*/ __dec_obj280 = come_decrement_ref_count2(__dec_obj280, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->exps!=((void*)0)) {
        __dec_obj281=result_660->exps;
        result_660->exps=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->exps));
        come_call_finalizer3(__dec_obj281,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result355__ = gComeFunResultObject = __result_obj__ = result_660;
    /*i*/come_call_finalizer3(result_660,sSStringNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result355__;
}

static void sMapNode_finalize(struct sMapNode* self){
char* __dec_obj288;
struct list$1sNodeph* __dec_obj289;
struct list$1sNodeph* __dec_obj290;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj288=self->sname;
            /*G*/ __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        if(        self->map_key_elements==gComeFunResultObject) {
            __dec_obj289=self->map_key_elements;
            come_call_finalizer3(__dec_obj289,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_key_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        if(        self->map_elements==gComeFunResultObject) {
            __dec_obj290=self->map_elements;
            come_call_finalizer3(__dec_obj290,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->map_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__=(void*)0;
struct sMapNode* __result360__;
void* __right_value950 = (void*)0;
struct sMapNode* result_676;
void* __right_value951 = (void*)0;
char* __dec_obj291;
void* __right_value952 = (void*)0;
struct list$1sNodeph* __dec_obj292;
void* __right_value953 = (void*)0;
struct list$1sNodeph* __dec_obj293;
struct sMapNode* __result361__;
    if(    self==(void*)0) {
        __result360__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result360__;
    }
    result_676=(struct sMapNode*)come_increment_ref_count((struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "sMapNode"));
    if(    self!=((void*)0)) {
        result_676->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj291=result_676->sname;
        result_676->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_676->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->map_key_elements!=((void*)0)) {
        __dec_obj292=result_676->map_key_elements;
        result_676->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_key_elements));
        come_call_finalizer3(__dec_obj292,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->map_elements!=((void*)0)) {
        __dec_obj293=result_676->map_elements;
        result_676->map_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->map_elements));
        come_call_finalizer3(__dec_obj293,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result361__ = gComeFunResultObject = __result_obj__ = result_676;
    /*i*/come_call_finalizer3(result_676,sMapNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result361__;
}

static void sListNode_finalize(struct sListNode* self){
char* __dec_obj294;
struct list$1sNodeph* __dec_obj295;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj294=self->sname;
            /*G*/ __dec_obj294 = come_decrement_ref_count2(__dec_obj294, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        if(        self->list_elements==gComeFunResultObject) {
            __dec_obj295=self->list_elements;
            come_call_finalizer3(__dec_obj295,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->list_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__=(void*)0;
struct sListNode* __result363__;
void* __right_value958 = (void*)0;
struct sListNode* result_679;
void* __right_value959 = (void*)0;
char* __dec_obj296;
void* __right_value960 = (void*)0;
struct list$1sNodeph* __dec_obj297;
struct sListNode* __result364__;
    if(    self==(void*)0) {
        __result363__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result363__;
    }
    result_679=(struct sListNode*)come_increment_ref_count((struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "sListNode"));
    if(    self!=((void*)0)) {
        result_679->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj296=result_679->sname;
        result_679->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj296 = come_decrement_ref_count2(__dec_obj296, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_679->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->list_elements!=((void*)0)) {
        __dec_obj297=result_679->list_elements;
        result_679->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->list_elements));
        come_call_finalizer3(__dec_obj297,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result364__ = gComeFunResultObject = __result_obj__ = result_679;
    /*i*/come_call_finalizer3(result_679,sListNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result364__;
}

struct sNode* parse_tuple(struct sInfo* info, _Bool named_tuple){
void* __result_obj__=(void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
struct list$1tuple2$2charphsNodephph* tuple_elements_681;
char* p_682;
char* name_683;
void* __right_value965 = (void*)0;
char* __dec_obj298;
_Bool no_comma_684;
void* __right_value966 = (void*)0;
struct sNode* node_685;
void* __right_value967 = (void*)0;
struct sNode* __dec_obj299;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
void* __right_value975 = (void*)0;
struct sNode* _inf_value17;
struct sTupleNode* _inf_obj_value17;
void* __right_value985 = (void*)0;
struct sNode* __result375__;
name_683 = (void*)0;
    tuple_elements_681=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "06str.c", 2624, "list$1tuple2$2charphsNodephph"))));
    while((_Bool)1) {
        p_682=info->p;
        if(        named_tuple) {
            __dec_obj298=name_683;
            name_683=(char*)come_increment_ref_count(parse_word(info));
            /*G*/ __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
            expected_next_character(58,info);
        }
        no_comma_684=info->no_comma;
        info->no_comma=(_Bool)1;
        node_685=(struct sNode*)come_increment_ref_count(expression_v13(info));
        __dec_obj299=node_685;
        node_685=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_685),info));
        /* U1 */ if(__dec_obj299) { __dec_obj299 = come_decrement_ref_count2(__dec_obj299, ((struct sNode*)__dec_obj299)->finalize, ((struct sNode*)__dec_obj299)->_protocol_obj, 0,0,0, (void*)0); };
        info->no_comma=no_comma_684;
        list$1tuple2$2charphsNodephph_push_back(tuple_elements_681,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodeph_initialize((struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "06str.c", 2643, "struct tuple2$2charphsNodeph")),(char*)come_increment_ref_count(string_clone(name_683)),(struct sNode*)come_increment_ref_count(node_685))));
        if(        *info->p==44) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else if(        *info->p==41) {
            info->p++;
            skip_spaces_and_lf(info);
            /* U13 */name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
            break;
        }
        else {
            err_msg(info,"invalid character in tuple expression (%c)",*info->p);
            exit(2);
        }
        /* U13 */name_683 = come_decrement_ref_count2(name_683, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(node_685) { node_685 = come_decrement_ref_count2(node_685, ((struct sNode*)node_685)->finalize, ((struct sNode*)node_685)->_protocol_obj, 0, 0, 0, (void*)0); } 
    }
    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2660, "struct sNode");
    _inf_obj_value17=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(__right_value975=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2660, "sTupleNode")),(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(tuple_elements_681),info))));
    _inf_value17->_protocol_obj=_inf_obj_value17;
    _inf_value17->finalize=(void*)sTupleNode_finalize;
    _inf_value17->clone=(void*)sTupleNode_clone;
    _inf_value17->compile=(void*)sTupleNode_compile;
    _inf_value17->sline=(void*)sNodeBase_sline;
    _inf_value17->sline_real=(void*)sNodeBase_sline_real;
    _inf_value17->sname=(void*)sNodeBase_sname;
    _inf_value17->terminated=(void*)sNodeBase_terminated;
    _inf_value17->kind=(void*)sTupleNode_kind;
    __result375__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value985=_inf_value17));
    /*i*/come_call_finalizer3(tuple_elements_681,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
    /*g*/come_call_finalizer3(__right_value975,sTupleNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value985) { __right_value985 = come_decrement_ref_count2(__right_value985, ((struct sNode*)__right_value985)->finalize, ((struct sNode*)__right_value985)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result375__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephph_push_back(struct list$1tuple2$2charphsNodephph* self, struct tuple2$2charphsNodeph* item){
void* __result_obj__=(void*)0;
void* __right_value968 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_686;
struct tuple2$2charphsNodeph* __dec_obj300;
void* __right_value969 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_687;
struct tuple2$2charphsNodeph* __dec_obj303;
void* __right_value970 = (void*)0;
struct list_item$1tuple2$2charphsNodephph* litem_688;
struct tuple2$2charphsNodeph* __dec_obj306;
struct list$1tuple2$2charphsNodephph* __result368__;
    if(    self->len==0) {
        litem_686=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value968=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1106, "list_item$1tuple2$2charphsNodephph"))));
        litem_686->prev=((void*)0);
        litem_686->next=((void*)0);
        __dec_obj300=litem_686->item;
        litem_686->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj300,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_686;
        self->head=litem_686;
    }
    else if(    self->len==1) {
        litem_687=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value969=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1116, "list_item$1tuple2$2charphsNodephph"))));
        litem_687->prev=self->head;
        litem_687->next=((void*)0);
        __dec_obj303=litem_687->item;
        litem_687->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj303,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail=litem_687;
        self->head->next=litem_687;
    }
    else {
        litem_688=(struct list_item$1tuple2$2charphsNodephph*)come_increment_ref_count(((struct list_item$1tuple2$2charphsNodephph*)(__right_value970=(struct list_item$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list_item$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1126, "list_item$1tuple2$2charphsNodephph"))));
        litem_688->prev=self->tail;
        litem_688->next=((void*)0);
        __dec_obj306=litem_688->item;
        litem_688->item=(struct tuple2$2charphsNodeph*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj306,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
        self->tail->next=litem_688;
        self->tail=litem_688;
    }
    self->len++;
    __result368__ = gComeFunResultObject = __result_obj__ = self;
    /*i*/come_call_finalizer3(item,tuple2$2charphsNodephp_finalize, 0, 0, 0, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result368__;
}

static void tuple2$2charphsNodephp_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj307;
struct sNode* __dec_obj308;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj307=self->v1;
            /*G*/ __dec_obj307 = come_decrement_ref_count2(__dec_obj307, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj308=self->v2;
            /* U1 */ if(__dec_obj308) { __dec_obj308 = come_decrement_ref_count2(__dec_obj308, ((struct sNode*)__dec_obj308)->finalize, ((struct sNode*)__dec_obj308)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

static void sTupleNode_finalize(struct sTupleNode* self){
char* __dec_obj309;
struct list$1tuple2$2charphsNodephph* __dec_obj310;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj309=self->sname;
            /*G*/ __dec_obj309 = come_decrement_ref_count2(__dec_obj309, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj310=self->tuple_elements;
            come_call_finalizer3(__dec_obj310,list$1tuple2$2charphsNodephph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__=(void*)0;
struct sTupleNode* __result369__;
void* __right_value976 = (void*)0;
struct sTupleNode* result_689;
void* __right_value977 = (void*)0;
char* __dec_obj311;
void* __right_value984 = (void*)0;
struct list$1tuple2$2charphsNodephph* __dec_obj316;
struct sTupleNode* __result374__;
    if(    self==(void*)0) {
        __result369__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result369__;
    }
    result_689=(struct sTupleNode*)come_increment_ref_count((struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "sTupleNode"));
    if(    self!=((void*)0)) {
        result_689->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj311=result_689->sname;
        result_689->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj311 = come_decrement_ref_count2(__dec_obj311, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_689->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj316=result_689->tuple_elements;
        result_689->tuple_elements=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephphp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj316,list$1tuple2$2charphsNodephph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result374__ = gComeFunResultObject = __result_obj__ = result_689;
    /*i*/come_call_finalizer3(result_689,sTupleNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result374__;
}

static struct list$1tuple2$2charphsNodephph* list$1tuple2$2charphsNodephphp_clone(struct list$1tuple2$2charphsNodephph* self){
void* __result_obj__=(void*)0;
struct list$1tuple2$2charphsNodephph* __result370__;
void* __right_value978 = (void*)0;
void* __right_value979 = (void*)0;
struct list$1tuple2$2charphsNodephph* result_690;
struct list_item$1tuple2$2charphsNodephph* it_691;
void* __right_value983 = (void*)0;
struct list$1tuple2$2charphsNodephph* __result373__;
    if(    self==((void*)0)) {
        __result370__ = gComeFunResultObject = __result_obj__ = ((void*)0);
        gComeFunResultObject = (void*)0;
        return __result370__;
    }
    result_690=(struct list$1tuple2$2charphsNodephph*)come_increment_ref_count(list$1tuple2$2charphsNodephph_initialize((struct list$1tuple2$2charphsNodephph*)come_increment_ref_count((struct list$1tuple2$2charphsNodephph*)come_calloc(1, sizeof(struct list$1tuple2$2charphsNodephph)*(1), "./comelang.h", 1022, "list$1tuple2$2charphsNodephph"))));
    it_691=self->head;
    while(it_691!=((void*)0)) {
        list$1tuple2$2charphsNodephph_add(result_690,(struct tuple2$2charphsNodeph*)come_increment_ref_count(tuple2$2charphsNodephp_clone(it_691->item)));
        it_691=it_691->next;
    }
    __result373__ = gComeFunResultObject = __result_obj__ = result_690;
    /*i*/come_call_finalizer3(result_690,list$1tuple2$2charphsNodephphp_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result373__;
}

static struct tuple2$2charphsNodeph* tuple2$2charphsNodephp_clone(struct tuple2$2charphsNodeph* self){
void* __result_obj__=(void*)0;
struct tuple2$2charphsNodeph* __result371__;
void* __right_value980 = (void*)0;
struct tuple2$2charphsNodeph* result_692;
void* __right_value981 = (void*)0;
char* __dec_obj312;
void* __right_value982 = (void*)0;
struct sNode* __dec_obj313;
struct tuple2$2charphsNodeph* __result372__;
    if(    self==(void*)0) {
        __result371__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result371__;
    }
    result_692=(struct tuple2$2charphsNodeph*)come_increment_ref_count((struct tuple2$2charphsNodeph*)come_calloc(1, sizeof(struct tuple2$2charphsNodeph)*(1), "tuple2$2charphsNodephp_clone", 3, "tuple2$2charphsNodeph"));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj312=result_692->v1;
        result_692->v1=(char*)come_increment_ref_count(string_clone(self->v1));
        /*G*/ __dec_obj312 = come_decrement_ref_count2(__dec_obj312, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj313=result_692->v2;
        result_692->v2=(struct sNode*)come_increment_ref_count(sNode_clone(self->v2));
        /* U1 */ if(__dec_obj313) { __dec_obj313 = come_decrement_ref_count2(__dec_obj313, ((struct sNode*)__dec_obj313)->finalize, ((struct sNode*)__dec_obj313)->_protocol_obj, 0,0,0, (void*)0); };
    }
    __result372__ = gComeFunResultObject = __result_obj__ = result_692;
    /*i*/come_call_finalizer3(result_692,tuple2$2charphsNodeph_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result372__;
}

static void tuple2$2charphsNodeph_finalize(struct tuple2$2charphsNodeph* self){
char* __dec_obj314;
struct sNode* __dec_obj315;
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        if(        self->v1==gComeFunResultObject) {
            __dec_obj314=self->v1;
            /*G*/ __dec_obj314 = come_decrement_ref_count2(__dec_obj314, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        if(        self->v2==gComeFunResultObject) {
            __dec_obj315=self->v2;
            /* U1 */ if(__dec_obj315) { __dec_obj315 = come_decrement_ref_count2(__dec_obj315, ((struct sNode*)__dec_obj315)->finalize, ((struct sNode*)__dec_obj315)->_protocol_obj, 0,0,0, (void*)0); };
        }
        else {
            if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, ((struct sNode*)self->v2)->finalize, ((struct sNode*)self->v2)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
    }
}

struct sNode* create_some(struct sNode* exp, struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value986 = (void*)0;
void* __right_value987 = (void*)0;
struct list$1sNodeph* tuple_elements_693;
struct sNode* node_694;
void* __right_value988 = (void*)0;
struct sNode* node2_695;
void* __right_value989 = (void*)0;
void* __right_value990 = (void*)0;
struct sNode* _inf_value18;
struct sSomeNode* _inf_obj_value18;
void* __right_value994 = (void*)0;
struct sNode* __result378__;
    tuple_elements_693=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2665, "list$1sNodeph"))));
    node_694=(struct sNode*)come_increment_ref_count(exp);
    list$1sNodeph_push_back(tuple_elements_693,(struct sNode*)come_increment_ref_count(node_694));
    node2_695=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_693,(struct sNode*)come_increment_ref_count(node2_695));
    _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2675, "struct sNode");
    _inf_obj_value18=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value990=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2675, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_693),info))));
    _inf_value18->_protocol_obj=_inf_obj_value18;
    _inf_value18->finalize=(void*)sSomeNode_finalize;
    _inf_value18->clone=(void*)sSomeNode_clone;
    _inf_value18->compile=(void*)sSomeNode_compile;
    _inf_value18->sline=(void*)sNodeBase_sline;
    _inf_value18->sline_real=(void*)sNodeBase_sline_real;
    _inf_value18->sname=(void*)sNodeBase_sname;
    _inf_value18->terminated=(void*)sNodeBase_terminated;
    _inf_value18->kind=(void*)sSomeNode_kind;
    __result378__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value994=_inf_value18));
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*i*/come_call_finalizer3(tuple_elements_693,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_694) { node_694 = come_decrement_ref_count2(node_694, ((struct sNode*)node_694)->finalize, ((struct sNode*)node_694)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_695) { node2_695 = come_decrement_ref_count2(node2_695, ((struct sNode*)node2_695)->finalize, ((struct sNode*)node2_695)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value990,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value994) { __right_value994 = come_decrement_ref_count2(__right_value994, ((struct sNode*)__right_value994)->finalize, ((struct sNode*)__right_value994)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result378__;
}

struct sNode* parse_some(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct list$1sNodeph* tuple_elements_697;
void* __right_value997 = (void*)0;
struct sNode* node_698;
void* __right_value998 = (void*)0;
struct sNode* __dec_obj321;
void* __right_value999 = (void*)0;
struct sNode* node2_699;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sNode* _inf_value19;
struct sSomeNode* _inf_obj_value19;
void* __right_value1005 = (void*)0;
struct sNode* __result381__;
    tuple_elements_697=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2680, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_698=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj321=node_698;
    node_698=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_698),info));
    /* U1 */ if(__dec_obj321) { __dec_obj321 = come_decrement_ref_count2(__dec_obj321, ((struct sNode*)__dec_obj321)->finalize, ((struct sNode*)__dec_obj321)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    list$1sNodeph_push_back(tuple_elements_697,(struct sNode*)come_increment_ref_count(node_698));
    node2_699=(struct sNode*)come_increment_ref_count(create_null_node(info));
    list$1sNodeph_push_back(tuple_elements_697,(struct sNode*)come_increment_ref_count(node2_699));
    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2693, "struct sNode");
    _inf_obj_value19=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(__right_value1001=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 2693, "sSomeNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_697),info))));
    _inf_value19->_protocol_obj=_inf_obj_value19;
    _inf_value19->finalize=(void*)sSomeNode_finalize;
    _inf_value19->clone=(void*)sSomeNode_clone;
    _inf_value19->compile=(void*)sSomeNode_compile;
    _inf_value19->sline=(void*)sNodeBase_sline;
    _inf_value19->sline_real=(void*)sNodeBase_sline_real;
    _inf_value19->sname=(void*)sNodeBase_sname;
    _inf_value19->terminated=(void*)sNodeBase_terminated;
    _inf_value19->kind=(void*)sSomeNode_kind;
    __result381__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1005=_inf_value19));
    /*i*/come_call_finalizer3(tuple_elements_697,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_698) { node_698 = come_decrement_ref_count2(node_698, ((struct sNode*)node_698)->finalize, ((struct sNode*)node_698)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_699) { node2_699 = come_decrement_ref_count2(node2_699, ((struct sNode*)node2_699)->finalize, ((struct sNode*)node2_699)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value1001,sSomeNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1005) { __right_value1005 = come_decrement_ref_count2(__right_value1005, ((struct sNode*)__right_value1005)->finalize, ((struct sNode*)__right_value1005)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result381__;
}

static void sSomeNode_finalize(struct sSomeNode* self){
char* __dec_obj322;
struct list$1sNodeph* __dec_obj323;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj322=self->sname;
            /*G*/ __dec_obj322 = come_decrement_ref_count2(__dec_obj322, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj323=self->tuple_elements;
            come_call_finalizer3(__dec_obj323,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__=(void*)0;
struct sSomeNode* __result379__;
void* __right_value1002 = (void*)0;
struct sSomeNode* result_700;
void* __right_value1003 = (void*)0;
char* __dec_obj324;
void* __right_value1004 = (void*)0;
struct list$1sNodeph* __dec_obj325;
struct sSomeNode* __result380__;
    if(    self==(void*)0) {
        __result379__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result379__;
    }
    result_700=(struct sSomeNode*)come_increment_ref_count((struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "sSomeNode"));
    if(    self!=((void*)0)) {
        result_700->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj324=result_700->sname;
        result_700->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj324 = come_decrement_ref_count2(__dec_obj324, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_700->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj325=result_700->tuple_elements;
        result_700->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj325,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result380__ = gComeFunResultObject = __result_obj__ = result_700;
    /*i*/come_call_finalizer3(result_700,sSomeNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result380__;
}

struct sNode* parse_none(struct sInfo* info){
void* __result_obj__=(void*)0;
void* __right_value1006 = (void*)0;
void* __right_value1007 = (void*)0;
struct list$1sNodeph* tuple_elements_701;
void* __right_value1008 = (void*)0;
struct sNode* node_702;
void* __right_value1009 = (void*)0;
struct sNode* __dec_obj326;
void* __right_value1010 = (void*)0;
struct sNode* node2_703;
struct sNode* node3_704;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
struct sNode* _inf_value20;
struct sNoneNode* _inf_obj_value20;
void* __right_value1016 = (void*)0;
struct sNode* __result384__;
    tuple_elements_701=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count((struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2698, "list$1sNodeph"))));
    expected_next_character(40,info);
    node_702=(struct sNode*)come_increment_ref_count(expression_v13(info));
    __dec_obj326=node_702;
    node_702=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(node_702),info));
    /* U1 */ if(__dec_obj326) { __dec_obj326 = come_decrement_ref_count2(__dec_obj326, ((struct sNode*)__dec_obj326)->finalize, ((struct sNode*)__dec_obj326)->_protocol_obj, 0,0,0, (void*)0); };
    expected_next_character(41,info);
    node2_703=(struct sNode*)come_increment_ref_count(create_null_return_value_of_exception(info));
    list$1sNodeph_push_back(tuple_elements_701,(struct sNode*)come_increment_ref_count(node2_703));
    node3_704=(struct sNode*)come_increment_ref_count(node_702);
    list$1sNodeph_push_back(tuple_elements_701,(struct sNode*)come_increment_ref_count(node3_704));
    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2713, "struct sNode");
    _inf_obj_value20=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(__right_value1012=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 2713, "sNoneNode")),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_701),info))));
    _inf_value20->_protocol_obj=_inf_obj_value20;
    _inf_value20->finalize=(void*)sNoneNode_finalize;
    _inf_value20->clone=(void*)sNoneNode_clone;
    _inf_value20->compile=(void*)sNoneNode_compile;
    _inf_value20->sline=(void*)sNodeBase_sline;
    _inf_value20->sline_real=(void*)sNodeBase_sline_real;
    _inf_value20->sname=(void*)sNodeBase_sname;
    _inf_value20->terminated=(void*)sNodeBase_terminated;
    _inf_value20->kind=(void*)sNoneNode_kind;
    __result384__ = gComeFunResultObject = __result_obj__ = ((struct sNode*)(__right_value1016=_inf_value20));
    /*i*/come_call_finalizer3(tuple_elements_701,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
    if(node_702) { node_702 = come_decrement_ref_count2(node_702, ((struct sNode*)node_702)->finalize, ((struct sNode*)node_702)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node2_703) { node2_703 = come_decrement_ref_count2(node2_703, ((struct sNode*)node2_703)->finalize, ((struct sNode*)node2_703)->_protocol_obj, 0, 0, 0, (void*)0); } 
    if(node3_704) { node3_704 = come_decrement_ref_count2(node3_704, ((struct sNode*)node3_704)->finalize, ((struct sNode*)node3_704)->_protocol_obj, 0, 0, 0, (void*)0); } 
    /*g*/come_call_finalizer3(__right_value1012,sNoneNode_finalize, 0, 1, 0, 0, __result_obj__);
    if(__right_value1016) { __right_value1016 = come_decrement_ref_count2(__right_value1016, ((struct sNode*)__right_value1016)->finalize, ((struct sNode*)__right_value1016)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    gComeFunResultObject = (void*)0;
    return __result384__;
}

static void sNoneNode_finalize(struct sNoneNode* self){
char* __dec_obj327;
struct list$1sNodeph* __dec_obj328;
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        if(        self->sname==gComeFunResultObject) {
            __dec_obj327=self->sname;
            /*G*/ __dec_obj327 = come_decrement_ref_count2(__dec_obj327, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else {
            /* U13 */self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        if(        self->tuple_elements==gComeFunResultObject) {
            __dec_obj328=self->tuple_elements;
            come_call_finalizer3(__dec_obj328,list$1sNodeph_finalize, 0, 0, 1, 0, (void*)0);
        }
        else {
            /*i*/come_call_finalizer3(self->tuple_elements,list$1sNodephp_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__=(void*)0;
struct sNoneNode* __result382__;
void* __right_value1013 = (void*)0;
struct sNoneNode* result_705;
void* __right_value1014 = (void*)0;
char* __dec_obj329;
void* __right_value1015 = (void*)0;
struct list$1sNodeph* __dec_obj330;
struct sNoneNode* __result383__;
    if(    self==(void*)0) {
        __result382__ = gComeFunResultObject = __result_obj__ = (void*)0;
        gComeFunResultObject = (void*)0;
        return __result382__;
    }
    result_705=(struct sNoneNode*)come_increment_ref_count((struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "sNoneNode"));
    if(    self!=((void*)0)) {
        result_705->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj329=result_705->sname;
        result_705->sname=(char*)come_increment_ref_count(string_clone(self->sname));
        /*G*/ __dec_obj329 = come_decrement_ref_count2(__dec_obj329, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_705->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->tuple_elements!=((void*)0)) {
        __dec_obj330=result_705->tuple_elements;
        result_705->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(list$1sNodephp_clone(self->tuple_elements));
        come_call_finalizer3(__dec_obj330,list$1sNodeph_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result383__ = gComeFunResultObject = __result_obj__ = result_705;
    /*i*/come_call_finalizer3(result_705,sNoneNode_finalize, 0, 0, 1, 0, (void*)0);
    gComeFunResultObject = (void*)0;
    return __result383__;
}

