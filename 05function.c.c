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
long long __lldata;
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

struct smart_pointer$1char$
{
    struct buffer* memory;
    char* p;
};

struct smart_pointer$1short$
{
    struct buffer* memory;
    short* p;
};

struct smart_pointer$1int$
{
    struct buffer* memory;
    int* p;
};

struct smart_pointer$1long$
{
    struct buffer* memory;
    long* p;
};

struct smart_pointer$1char$p
{
    struct buffer* memory;
    char** p;
};

struct smart_pointer$1float$
{
    struct buffer* memory;
    float* p;
};

struct smart_pointer$1double$
{
    struct buffer* memory;
    double* p;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct vector$1char$
{
    char* items;
    int len;
    int size;
    int it;
};

struct vector$1char$p
{
    char** items;
    int len;
    int size;
    int it;
};

struct vector$1short$
{
    short* items;
    int len;
    int size;
    int it;
};

struct vector$1int$
{
    int* items;
    int len;
    int size;
    int it;
};

struct vector$1long$
{
    long* items;
    int len;
    int size;
    int it;
};

struct vector$1float$
{
    float* items;
    int len;
    int size;
    int it;
};

struct vector$1double$
{
    double* items;
    int len;
    int size;
    int it;
};

struct list_item$1char$ph
{
    char* item;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
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
struct tuple2$2char$phsType$ph
{
    char* v1;
    struct sType* v2;
};

struct list_item$1tuple2$2char$phsType$ph$ph
{
    struct tuple2$2char$phsType$ph* item;
    struct list_item$1tuple2$2char$phsType$ph$ph* prev;
    struct list_item$1tuple2$2char$phsType$ph$ph* next;
};

struct list$1tuple2$2char$phsType$ph$ph
{
    struct list_item$1tuple2$2char$phsType$ph$ph* head;
    struct list_item$1tuple2$2char$phsType$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsType$ph$ph* it;
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
    struct list$1tuple2$2char$phsType$ph$ph* mFields;
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

struct list_item$1sType$ph
{
    struct sType* item;
    struct list_item$1sType$ph* prev;
    struct list_item$1sType$ph* next;
};

struct list$1sType$ph
{
    struct list_item$1sType$ph* head;
    struct list_item$1sType$ph* tail;
    int len;
    struct list_item$1sType$ph* it;
};

struct list_item$1sNode$ph
{
    struct sNode* item;
    struct list_item$1sNode$ph* prev;
    struct list_item$1sNode$ph* next;
};

struct list$1sNode$ph
{
    struct list_item$1sNode$ph* head;
    struct list_item$1sNode$ph* tail;
    int len;
    struct list_item$1sNode$ph* it;
};

struct sType
{
    struct sClass* mClass;
    struct sType* mOriginalLoadVarType;
    struct sType* mChannelType;
    struct list$1sType$ph* mGenericsTypes;
    struct sType* mNoSolvedGenericsType;
    _Bool mAnyClass;
    struct sType* mAnyOriginalType;
    struct sNode* mSizeNum;
    struct sNode* mAlignas;
    char* mTupleName;
    char* mAttribute;
    _Bool mAllocaValue;
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
    _Bool mGenerate;
    _Bool mCreateVTable;
    _Bool mDynamic;
    _Bool mInline;
    _Bool mNullValue;
    _Bool mGuardValue;
    char* mAsmName;
    _Bool mTypedef;
    _Bool mMultipleTypes;
    _Bool mOriginIsArray;
    struct list$1sNode$ph* mArrayNum;
    int mPointerNum;
    int mOriginalTypeNamePointerNum;
    int mOriginalTypeNameHeap;
    int mTypedefOriginalPointerNum;
    int mFunctionPointerNum;
    char* mOriginalTypeName;
    int mOriginalPointerNum;
    _Bool mArrayPointerType;
    _Bool mLambdaArray;
    int mLambdaArrayNum;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct sType* mResultType;
    _Bool mVarArgs;
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
    _Bool mGlobal;
    _Bool mAllocaValue;
    _Bool mNoFree;
    char* mFunName;
};

struct sFun
{
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    struct sType* mLambdaType;
    struct sBlock* mBlock;
    struct buffer* mSource;
    struct buffer* mSourceHead;
    struct buffer* mSourceHead2;
    struct buffer* mSourceDefer;
    _Bool mStatic;
    _Bool mInline;
    _Bool mUniq;
    _Bool mGenerate;
    _Bool mExternal;
    _Bool mVarArgs;
    _Bool mNoResultType;
    char* mAttribute;
    char* mFunAttribute;
};

struct sGenericsFun
{
    struct sType* mImplType;
    struct list$1char$ph* mGenericsTypeNames;
    struct list$1char$ph* mMethodGenericsTypeNames;
    char* mName;
    struct sType* mResultType;
    struct list$1sType$ph* mParamTypes;
    struct list$1char$ph* mParamNames;
    struct list$1char$ph* mParamDefaultParametors;
    char* mBlock;
    int mSLine;
    _Bool mVarArgs;
    _Bool mGenerate;
    char* mGenericsSName;
    int mGenericsSLine;
};

struct map$2char$phchar$ph
{
    char** keys;
    _Bool* item_existance;
    char** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct sModule
{
    struct buffer* mSourceHead;
    struct buffer* mSource;
    char* mLastCode;
    char* mLastCode2;
    struct map$2char$phchar$ph* mHeader;
    struct map$2char$phchar$ph* mHeaderStructs;
};

struct map$2char$phsVar$ph
{
    char** keys;
    _Bool* item_existance;
    struct sVar** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct sVarTable
{
    struct map$2char$phsVar$ph* mVars;
    _Bool mGlobal;
    struct sVarTable* mParent;
};

struct sBlock
{
    struct list$1sNode$ph* mNodes;
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
    struct list$1char$ph* mParams;
    char* mSName;
    int mSLine;
};

struct map$2char$phsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsGenericsFun$ph
{
    char** keys;
    _Bool* item_existance;
    struct sGenericsFun** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClass$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClass** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsClassModule$ph
{
    char** keys;
    _Bool* item_existance;
    struct sClassModule** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phsType$ph
{
    char** keys;
    _Bool* item_existance;
    struct sType** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct map$2char$phbuffer$ph
{
    char** keys;
    _Bool* item_existance;
    struct buffer** items;
    int size;
    int len;
    struct list$1char$p* key_list;
    int it;
};

struct list_item$1sRightValueObject$ph
{
    struct sRightValueObject* item;
    struct list_item$1sRightValueObject$ph* prev;
    struct list_item$1sRightValueObject$ph* next;
};

struct list$1sRightValueObject$ph
{
    struct list_item$1sRightValueObject$ph* head;
    struct list_item$1sRightValueObject$ph* tail;
    int len;
    struct list_item$1sRightValueObject$ph* it;
};

struct list_item$1CVALUE$ph
{
    struct CVALUE* item;
    struct list_item$1CVALUE$ph* prev;
    struct list_item$1CVALUE$ph* next;
};

struct list$1CVALUE$ph
{
    struct list_item$1CVALUE$ph* head;
    struct list_item$1CVALUE$ph* tail;
    int len;
    struct list_item$1CVALUE$ph* it;
};

struct list_item$1sVar$ph
{
    struct sVar* item;
    struct list_item$1sVar$ph* prev;
    struct list_item$1sVar$ph* next;
};

struct list$1sVar$ph
{
    struct list_item$1sVar$ph* head;
    struct list_item$1sVar$ph* tail;
    int len;
    struct list_item$1sVar$ph* it;
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
    struct sFun* caller_fun;
    int caller_line;
    char* caller_sname;
    int block_level;
    struct map$2char$phsFun$ph* funcs;
    struct map$2char$phsGenericsFun$ph* generics_funcs;
    struct map$2char$phsClass$ph* classes;
    struct map$2char$phsClassModule$ph* modules;
    struct map$2char$phsType$ph* types;
    struct map$2char$phsClass$ph* generics_classes;
    struct map$2char$phbuffer$ph* struct_definition;
    struct map$2char$phbuffer$ph* previous_struct_definition;
    struct sModule* module;
    struct sType* type;
    struct list$1sRightValueObject$ph* right_value_objects;
    struct sType* generics_type;
    struct list$1sType$ph* method_generics_types;
    struct list$1CVALUE$ph* stack;
    struct sType* come_function_result_type;
    struct sType* come_method_block_function_result_type;
    struct sVarTable* lv_table;
    struct sVarTable* gv_table;
    _Bool comma_instead_of_semicolon;
    _Bool no_comma;
    _Bool no_assign;
    _Bool no_label;
    _Bool last_statment_is_return;
    struct list$1char$ph* generics_type_names;
    struct list$1char$ph* method_generics_type_names;
    struct sType* impl_type;
    struct sType* class_type;
    int current_stack_num;
    int num_method_block;
    struct sClass* current_stack_frame_struct;
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
    struct map$2char$phchar$ph* module_params;
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
    struct list$1sVar$ph* match_it_var;
    int sline_top;
    struct sFun* calling_fun;
    struct map$2char$phchar$ph* uniq_definition;
    _Bool in_top_level;
    _Bool remove_comment;
    int sline_real;
    int sline_block;
    _Bool m5stack_cpp;
    _Bool pico_cpp;
    _Bool gcc_compiler;
    _Bool in_exception_value;
};

struct tuple2$2int$char$ph
{
    int v1;
    char* v2;
};

struct tuple2$2sType$phchar$ph
{
    struct sType* v1;
    char* v2;
};

struct tuple2$2char$phsNode$ph
{
    char* v1;
    struct sNode* v2;
};

struct list_item$1tuple2$2char$phsNode$ph$ph
{
    struct tuple2$2char$phsNode$ph* item;
    struct list_item$1tuple2$2char$phsNode$ph$ph* prev;
    struct list_item$1tuple2$2char$phsNode$ph$ph* next;
};

struct list$1tuple2$2char$phsNode$ph$ph
{
    struct list_item$1tuple2$2char$phsNode$ph$ph* head;
    struct list_item$1tuple2$2char$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple2$2char$phsNode$ph$ph* it;
};

struct tuple2$2char$phsGenericsFun$p
{
    char* v1;
    struct sGenericsFun* v2;
};

struct tuple3$3sType$phchar$phbool$
{
    struct sType* v1;
    char* v2;
    _Bool v3;
};

struct tuple2$2bool$char$ph
{
    _Bool v1;
    char* v2;
};

struct tuple2$2char$phchar$ph
{
    char* v1;
    char* v2;
};

struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$
{
    struct list$1sType$ph* v1;
    struct list$1char$ph* v2;
    struct list$1char$ph* v3;
    _Bool v4;
};

struct tuple2$2sFun$pchar$ph
{
    struct sFun* v1;
    char* v2;
};

struct tuple2$2char$phbool$
{
    char* v1;
    _Bool v2;
};

struct tuple3$3sType$phchar$phsNode$ph
{
    struct sType* v1;
    char* v2;
    struct sNode* v3;
};

struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct tuple3$3sType$phchar$phsNode$ph* item;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* prev;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* next;
};

struct list$1tuple3$3sType$phchar$phsNode$ph$ph
{
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* head;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* tail;
    int len;
    struct list_item$1tuple3$3sType$phchar$phsNode$ph$ph* it;
};

extern struct list$1sRightValueObject$ph* gExceptionRightValueObjects;
struct tuple4$4char$phchar$phchar$phchar$ph
{
    char* v1;
    char* v2;
    char* v3;
    char* v4;
};

struct sSemicolonNode
{
    int sline;
    char* sname;
    int sline_real;
};

struct sLambdaNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
};

struct sFunNode
{
    int sline;
    char* sname;
    int sline_real;
    struct sFun* mFun;
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
void come_print_heap_info(void* mem);
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
struct smart_pointer$1char$* buffer_to_pointer(struct buffer* self);
static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value);
static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self);
struct smart_pointer$1char$* buffer_to_char_pointer(struct buffer* self);
struct smart_pointer$1short$* buffer_to_short_pointer(struct buffer* self);
static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value);
static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self);
struct smart_pointer$1int$* buffer_to_int_pointer(struct buffer* self);
static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value);
static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self);
struct smart_pointer$1long$* buffer_to_long_pointer(struct buffer* self);
static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value);
static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self);
struct smart_pointer$1char$* charpa_to_pointer(char* self, unsigned long  int len);
struct smart_pointer$1char$p* charppa_to_pointer(char** self, unsigned long  int len);
static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value);
static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self);
struct smart_pointer$1short$* shortpa_to_pointer(short* self, unsigned long  int len);
struct smart_pointer$1int$* intpa_to_pointer(int* self, unsigned long  int len);
struct smart_pointer$1long$* longpa_to_pointer(long* self, unsigned long  int len);
struct smart_pointer$1float$* floatpa_to_pointer(float* self, unsigned long  int len);
static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value);
static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self);
struct smart_pointer$1double$* doublepa_to_pointer(double* self, unsigned long  int len);
static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value);
static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self);
struct list$1char$* charpa_to_list(char* self, unsigned long  int len);
static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$p* charppa_to_list(char** self, unsigned long  int len);
static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1short$* shortpa_to_list(short* self, unsigned long  int len);
static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1int$* intpa_to_list(int* self, unsigned long  int len);
static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1long$* longpa_to_list(long* self, unsigned long  int len);
static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1float$* floatpa_to_list(float* self, unsigned long  int len);
static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1double$* doublepa_to_list(double* self, unsigned long  int len);
static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct vector$1char$* charpa_to_vector(char* self, unsigned long  int len);
static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values);
static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item);
static void vector$1char$$p_finalize(struct vector$1char$* self);
struct vector$1char$p* charppa_to_vector(char** self, unsigned long  int len);
static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values);
static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item);
static void vector$1char$p$p_finalize(struct vector$1char$p* self);
struct vector$1short$* shortpa_to_vector(short* self, unsigned long  int len);
static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values);
static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item);
static void vector$1short$$p_finalize(struct vector$1short$* self);
struct vector$1int$* intpa_to_vector(int* self, unsigned long  int len);
static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values);
static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item);
static void vector$1int$$p_finalize(struct vector$1int$* self);
struct vector$1long$* longpa_to_vector(long* self, unsigned long  int len);
static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values);
static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item);
static void vector$1long$$p_finalize(struct vector$1long$* self);
struct vector$1float$* floatpa_to_vector(float* self, unsigned long  int len);
static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values);
static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item);
static void vector$1float$$p_finalize(struct vector$1float$* self);
struct vector$1double$* doublepa_to_vector(double* self, unsigned long  int len);
static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values);
static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item);
static void vector$1double$$p_finalize(struct vector$1double$* self);
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
struct list$1char$ph* charp_split_char(char* self, char c);
static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item);
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
struct list$1char$ph* FILE_readlines(struct _IO_FILE* f);
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
struct tuple2$2int$char$ph* err_msg(struct sInfo* info, char* msg, ...);
_Bool sNodeBase_terminated(struct sNodeBase* self);
int transpile_v2(struct sInfo* info);
_Bool output_source_file_v2(struct sInfo* info);
struct sModule* sModule_initialize(struct sModule* self);
struct sType* sType_initialize(struct sType* self, char* name, _Bool heap, struct sInfo* info);
struct sVarTable* sVarTable_initialize(struct sVarTable* self, _Bool global, struct sVarTable* parent);
void sVarTable_finalize(struct sVarTable* self);
struct sClass* sClass_initialize(struct sClass* self, char* name, _Bool number, _Bool union_, _Bool generics, _Bool method_generics, _Bool protocol_, _Bool struct_, _Bool float_, int generics_num, int method_generics_num, _Bool enum_, struct sInfo* info);
struct sClassModule* sClassModule_initialize(struct sClassModule* self, char* name, char* text, char* sname, int sline, struct sInfo* info);
struct sFun* sFun_initialize(struct sFun* self, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool external, _Bool var_args, struct sBlock* block, _Bool static_, struct sInfo* info, _Bool inline_, _Bool uniq_, _Bool generate_, char* attribute, char* fun_attribute);
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
void add_come_code_at_come_header(struct sInfo* info, char* id, const char* msg, ...);
void add_come_code_at_come_struct_header(struct sInfo* info, char* id, const char* msg, ...);
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
struct tuple2$2sType$phchar$ph* clone_object(struct sType* type, char* obj, struct sInfo* info);
void free_right_value_objects(struct sInfo* info, _Bool comma);
void free_objects(struct sVarTable* table, struct sVar* ret_value, struct sInfo* info);
char* append_object_to_right_values(char* obj, struct sType* type, struct sInfo* info);
void append_object_to_right_values2(struct CVALUE* come_value, struct sType* type, struct sInfo* info, _Bool decrement_ref_count);
void remove_object_from_right_values(int right_value_num, struct sInfo* info);
char* increment_ref_count_object(struct sType* type, char* obj, struct sInfo* info);
void decrement_ref_count_object(struct sType* type, char* obj, struct sInfo* info, _Bool force_delete_, _Bool no_free);
struct sNode* cast_node(struct sType* type, struct sNode* node, struct sInfo* info);
struct sNode* reffence_node(struct sNode* value, struct sInfo* info);
struct sNode* craete_fun_call(char* fun_name, struct list$1tuple2$2char$phsNode$ph$ph* params, _Bool guard_break, struct list$1sType$ph* method_generics_types, struct buffer* method_block, int method_block_sline, struct sInfo* info);
struct tuple2$2char$phsGenericsFun$p* make_method_generics_function(char* fun_name, struct list$1sType$ph* method_generics_types, struct sInfo* info);
struct sNode* create_return_node(struct sNode* value, char* value_source, struct sInfo* info);
struct sNode* post_position_operator(struct sNode* node, struct sInfo* info);
_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);
void caller_begin(struct sInfo* info);
void caller_end(struct sInfo* info);
struct sNode* craete_logical_denial(struct sNode* node, struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* backtrace_parse_type(_Bool parse_variable_name, struct sInfo* info);
void skip_pointer_attribute(struct sInfo* info);
void skip_paren(struct sInfo* info);
struct sNode* parse_normal_block(_Bool clang, _Bool comma, struct sInfo* info);
struct sNode* parse_comma_block(struct sInfo* info);
struct tuple2$2bool$char$ph* check_assign_type(char* msg, struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, _Bool check_no_pointer, _Bool print_err_msg, _Bool pointer_massive, struct sInfo* info);
void cast_type(struct sType* left_type, struct sType* right_type, struct CVALUE* come_value, struct sInfo* info);
struct sNode* get_number(_Bool minus, struct sInfo* info);
struct sNode* get_oct_number(struct sInfo* info);
struct sNode* get_hex_number(_Bool minus, struct sInfo* info);
struct sNode* create_int_node(int value, struct sInfo* info);
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* parse_params(struct sInfo* info, _Bool in_constructor_);
struct tuple2$2sFun$pchar$ph* create_pthread_fun(struct sType* type, char* fun_name, struct sInfo* info);
_Bool is_contained_generics_class(struct sType* type, struct sInfo* info);
_Bool is_type_name(char* buf, struct sInfo* info);
_Bool parsecmp(char* str, struct sInfo* info);
char* parse_word(struct sInfo* info);
char* backtrace_parse_word(struct sInfo* info);
void skip_spaces_and_lf(struct sInfo* info);
struct tuple3$3sType$phchar$phbool$* parse_type(struct sInfo* info, _Bool parse_variable_name, _Bool parse_multiple_type, _Bool in_function_parametor);
struct tuple2$2sType$phchar$ph* parse_variable_name(struct sType* base_type_name, _Bool first, struct sInfo* info);
struct sNode* expression_v5(struct sInfo* info);
struct sNode* statment(struct sInfo* info);
struct sNode* top_level_v1(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* expression_node_v1(struct sInfo* info);
struct sNode* expression_node_v99(struct sInfo* info);
struct sNode* expression_node_v98(struct sInfo* info);
struct sNode* expression_node_v97(struct sInfo* info);
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
struct sNode* store_var(char* name, struct list$1char$ph* multiple_assign, struct list$1tuple3$3sType$phchar$phsNode$ph$ph* multiple_declare, struct sType* type, _Bool alloc, struct sNode* right_value, struct sInfo* info);
struct sNode* create_load_var(char* var_name, struct sInfo* info);
struct sNode* parse_array_initializer(struct sInfo* info);
struct sNode* parse_struct_initializer(struct sInfo* info);
struct sNode* parse_global_variable(struct sInfo* info);
struct sNode* load_var(char* name, struct sInfo* info);
struct sNode* string_node_v7(char* buf, char* head, int head_sline, struct sInfo* info);
void add_variable_to_table(char* name, struct sType* type, struct sInfo* info, _Bool function_param);
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
struct sNode* create_method_call(char* fun_name, struct sNode* obj, struct list$1tuple2$2char$phsNode$ph$ph* params, struct buffer* method_block, int method_block_sline, struct list$1sType$ph* method_generics_types, struct sInfo* info);
_Bool compile_method_block(struct buffer* method_block, struct list$1CVALUE$ph* come_params, struct sFun* fun, char* fun_name, int method_block_sline, struct sInfo* info, _Bool no_create_current_stack);
struct tuple2$2char$phsGenericsFun$p* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info, _Bool array_equal_pointer);
struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);
struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* create_implements(struct sNode* node, struct sType* inf_type, struct sInfo* info);
struct sNode* create_object(struct sType* type, struct sInfo* info);
struct sNode* create_true_object(struct sInfo* info);
struct sNode* create_false_object(struct sInfo* info);
struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* post_position_operator_v21(struct sNode* node, struct sInfo* info);
struct tuple4$4char$phchar$phchar$phchar$ph* create_vtable(struct sType* any_type, struct sInfo* info);
struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* top_level_v91(char* buf, char* head, int head_sline, struct sInfo* info);
struct sNode* static_assert_node(struct sNode* exp, struct sNode* exp2, struct sInfo* info);
struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info);
char* sSemicolonNode_kind(struct sSemicolonNode* self);
_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info);
static void sNodeBase_finalize(struct sNodeBase* self);
static void sSemicolonNode_finalize(struct sSemicolonNode* self);
struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info);
char* sLambdaNode_kind(struct sLambdaNode* self);
_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info);
static void sLambdaNode_finalize(struct sLambdaNode* self);
static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sType$ph$p_finalize(struct list$1sType$ph* self);
static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self);
static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self);
static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self);
static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item);
static void list$1sType$ph_finalize(struct list$1sType$ph* self);
static struct sNode* sNode_clone(struct sNode* self);
static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self);
static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item);
static void list$1sNode$ph_finalize(struct list$1sNode$ph* self);
static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self);
static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item);
static void list$1char$ph_finalize(struct list$1char$ph* self);
static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item);
static void CVALUE_finalize(struct CVALUE* self);
struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info);
char* sFunNode_kind(struct sFunNode* self);
_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void sFunNode_finalize(struct sFunNode* self);
struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info);
struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline);
static void sGenericsFun_finalize(struct sGenericsFun* self);
struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function);
static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self);
static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self);
static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key);
static void sClassModule_finalize(struct sClassModule* self);
static int list$1char$ph$p_length(struct list$1char$ph* self);
static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self);
static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self);
static void list$1char$p_finalize(struct list$1char$p* self);
static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self);
static char* list$1char$ph$p_begin(struct list$1char$ph* self);
static _Bool list$1char$ph$p_end(struct list$1char$ph* self);
static char* list$1char$ph$p_next(struct list$1char$ph* self);
static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item);
static struct map$2char$phchar$ph* map$2char$phchar$ph$p_insert(struct map$2char$phchar$ph* self, char* key, char* item);
static void map$2char$phchar$ph$p_rehash(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph$p_begin(struct map$2char$phchar$ph* self);
static _Bool map$2char$phchar$ph$p_end(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph$p_next(struct map$2char$phchar$ph* self);
static char* map$2char$phchar$ph$p_at(struct map$2char$phchar$ph* self, char* key, char* default_value);
static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item);
static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail);
static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self);
static char* list$1char$p$p_begin(struct list$1char$p* self);
static _Bool list$1char$p$p_end(struct list$1char$p* self);
static char* list$1char$p$p_next(struct list$1char$p* self);
static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position);
static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item);
static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail);
static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self);
static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self);
int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result);
static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position);
static int list$1sNode$ph$p_length(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self);
static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self);
static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self);
static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self);
static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self);
static void sRightValueObject_finalize(struct sRightValueObject* self);
static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self);
static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self);
static struct CVALUE* CVALUE_clone(struct CVALUE* self);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool sType_operator_equals(struct sType* left, struct sType* right);
static _Bool sClass_not_equals(struct sClass* left, struct sClass* right);
static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool sType_not_equals(struct sType* left, struct sType* right);
static _Bool sType_operator_not_equals(struct sType* left, struct sType* right);
static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list$1sType$ph$p_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_not_equals(struct sNode* left, struct sNode* right);
static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1sNode$ph$p_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self);
static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_reset(struct list$1sRightValueObject$ph* self);
static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self);
static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self);
static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self);
static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self);
static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self);
static void sVar_finalize(struct sVar* self);
static void list$1sVar$ph_finalize(struct list$1sVar$ph* self);
void arrange_stack(struct sInfo* info, int top);
int expected_next_character(char c, struct sInfo* info);
char* skip_block(struct sInfo* info);
_Bool strmemcmp(char* p, char* p2);
struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info);
static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self);
static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self);
static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right);
static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2);
static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self);
struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info);
void transpile_toplevel(_Bool block, struct sInfo* info);
int transpile_v5(struct sInfo* info);
static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values);
static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item);
static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self);
static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self);
static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right);
static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values);
static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self);
static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self);
static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right);
static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right);
static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item);
static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self);
static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self);
static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self);
static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value);
struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info);
static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self);
static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self);
static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key);
static struct sFunNode* sFunNode_clone(struct sFunNode* self);
static struct sFun* sFun_clone(struct sFun* self);
static struct sBlock* sBlock_clone(struct sBlock* self);
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info);
static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self);
static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self);
static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right);
static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2);
static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self);
static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self);
static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self);
static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self);
_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info);
struct sNode* parse_function(struct sInfo* info);
static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self);
static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self);
static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item);
static void map$2char$phsGenericsFun$ph$p_rehash(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph$p_begin(struct map$2char$phsGenericsFun$ph* self);
static _Bool map$2char$phsGenericsFun$ph$p_end(struct map$2char$phsGenericsFun$ph* self);
static char* map$2char$phsGenericsFun$ph$p_next(struct map$2char$phsGenericsFun$ph* self);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value);
static int list$1sType$ph$p_length(struct list$1sType$ph* self);
struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key);
static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key);
static void sClass_finalize(struct sClass* self);
static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self);
static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self);
static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self);
static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self);
static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self);
static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2);
static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self);
struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
static int list$1tuple2$2char$phsType$ph$ph$p_length(struct list$1tuple2$2char$phsType$ph$ph* self);
struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info);
struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info);
// uniq global variable
// inline function
static inline int __isspace(int _c){
    return _c==32||(unsigned int)_c-9<5;
}

// body function
static void va_list_finalize(va_list self){
}

static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_158;
    result_158=0;
    result_158+=int_get_hash_key(((int)self->buf));
    result_158+=int_get_hash_key(((int)self->len));
    result_158+=int_get_hash_key(((int)self->size));
    return result_158;
}

static struct smart_pointer$1char$* smart_pointer$1char$$p_initialize_with_value(struct smart_pointer$1char$* self, struct buffer* value){
struct buffer* __dec_obj13;
struct smart_pointer$1char$* __result_obj__81;
    __dec_obj13=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj13,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char*)value->buf;
    __result_obj__81 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__81,smart_pointer$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__81;
}

static void smart_pointer$1char$$p_finalize(struct smart_pointer$1char$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1short$* smart_pointer$1short$$p_initialize_with_value(struct smart_pointer$1short$* self, struct buffer* value){
struct buffer* __dec_obj14;
struct smart_pointer$1short$* __result_obj__84;
    __dec_obj14=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj14,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(short*)value->buf;
    __result_obj__84 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__84,smart_pointer$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__84;
}

static void smart_pointer$1short$$p_finalize(struct smart_pointer$1short$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1int$* smart_pointer$1int$$p_initialize_with_value(struct smart_pointer$1int$* self, struct buffer* value){
struct buffer* __dec_obj15;
struct smart_pointer$1int$* __result_obj__86;
    __dec_obj15=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj15,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(int*)value->buf;
    __result_obj__86 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__86,smart_pointer$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__86;
}

static void smart_pointer$1int$$p_finalize(struct smart_pointer$1int$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1long$* smart_pointer$1long$$p_initialize_with_value(struct smart_pointer$1long$* self, struct buffer* value){
struct buffer* __dec_obj16;
struct smart_pointer$1long$* __result_obj__88;
    __dec_obj16=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj16,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(long*)value->buf;
    __result_obj__88 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__88,smart_pointer$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__88;
}

static void smart_pointer$1long$$p_finalize(struct smart_pointer$1long$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1char$p* smart_pointer$1char$p$p_initialize_with_value(struct smart_pointer$1char$p* self, struct buffer* value){
struct buffer* __dec_obj17;
struct smart_pointer$1char$p* __result_obj__91;
    __dec_obj17=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj17,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(char**)value->buf;
    __result_obj__91 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__91,smart_pointer$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__91;
}

static void smart_pointer$1char$p$p_finalize(struct smart_pointer$1char$p* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1float$* smart_pointer$1float$$p_initialize_with_value(struct smart_pointer$1float$* self, struct buffer* value){
struct buffer* __dec_obj18;
struct smart_pointer$1float$* __result_obj__96;
    __dec_obj18=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj18,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(float*)value->buf;
    __result_obj__96 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__96,smart_pointer$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__96;
}

static void smart_pointer$1float$$p_finalize(struct smart_pointer$1float$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct smart_pointer$1double$* smart_pointer$1double$$p_initialize_with_value(struct smart_pointer$1double$* self, struct buffer* value){
struct buffer* __dec_obj19;
struct smart_pointer$1double$* __result_obj__98;
    __dec_obj19=self->memory;
    self->memory=(struct buffer*)come_increment_ref_count(value);
    come_call_finalizer3(__dec_obj19,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->p=(double*)value->buf;
    __result_obj__98 = come_increment_ref_count(self);
    come_call_finalizer3(self,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(value,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__98,smart_pointer$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__98;
}

static void smart_pointer$1double$$p_finalize(struct smart_pointer$1double$* self){
    if(    self!=((void*)0)&&self->memory!=((void*)0)) {
        come_call_finalizer3(self->memory,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$* list$1char$$p_initialize_with_values(struct list$1char$* self, int num_value, char* values){
int i_180;
struct list$1char$* __result_obj__101;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_180=0;    i_180<num_value;    i_180++    ){
        list$1char$$p_push_back(self,values[i_180]);
    }
    __result_obj__101 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__101,list$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__101;
}

static struct list$1char$* list$1char$$p_push_back(struct list$1char$* self, char item){
void* __right_value92 = (void*)0;
struct list_item$1char$* litem_181;
void* __right_value93 = (void*)0;
struct list_item$1char$* litem_182;
void* __right_value94 = (void*)0;
struct list_item$1char$* litem_183;
struct list$1char$* __result_obj__100;
    if(    self->len==0) {
        litem_181=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value92=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1493, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_181->prev=((void*)0);
        litem_181->next=((void*)0);
        litem_181->item=item;
        self->tail=litem_181;
        self->head=litem_181;
    }
    else if(    self->len==1) {
        litem_182=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value93=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1503, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_182->prev=self->head;
        litem_182->next=((void*)0);
        litem_182->item=item;
        self->tail=litem_182;
        self->head->next=litem_182;
    }
    else {
        litem_183=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value94=(struct list_item$1char$*)come_calloc(1, sizeof(struct list_item$1char$)*(1), "./comelang.h", 1513, "struct list_item$1char$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_183->prev=self->tail;
        litem_183->next=((void*)0);
        litem_183->item=item;
        self->tail->next=litem_183;
        self->tail=litem_183;
    }
    self->len++;
    __result_obj__100 = self;
    return __result_obj__100;
}

static void list$1char$$p_finalize(struct list$1char$* self){
struct list_item$1char$* it_184;
struct list_item$1char$* prev_it_185;
    it_184=self->head;
    while(it_184!=((void*)0)) {
        prev_it_185=it_184;
        it_184=it_184->next;
        come_call_finalizer3(prev_it_185,list_item$1char$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self){
}

static struct list$1char$p* list$1char$p$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values){
int i_186;
struct list$1char$p* __result_obj__104;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_186=0;    i_186<num_value;    i_186++    ){
        list$1char$p$p_push_back(self,values[i_186]);
    }
    __result_obj__104 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__104,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__104;
}

static struct list$1char$p* list$1char$p$p_push_back(struct list$1char$p* self, char* item){
void* __right_value97 = (void*)0;
struct list_item$1char$p* litem_187;
void* __right_value98 = (void*)0;
struct list_item$1char$p* litem_188;
void* __right_value99 = (void*)0;
struct list_item$1char$p* litem_189;
struct list$1char$p* __result_obj__103;
    if(    self->len==0) {
        litem_187=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value97=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1493, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_187->prev=((void*)0);
        litem_187->next=((void*)0);
        litem_187->item=item;
        self->tail=litem_187;
        self->head=litem_187;
    }
    else if(    self->len==1) {
        litem_188=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value98=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1503, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_188->prev=self->head;
        litem_188->next=((void*)0);
        litem_188->item=item;
        self->tail=litem_188;
        self->head->next=litem_188;
    }
    else {
        litem_189=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value99=(struct list_item$1char$p*)come_calloc(1, sizeof(struct list_item$1char$p)*(1), "./comelang.h", 1513, "struct list_item$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_189->prev=self->tail;
        litem_189->next=((void*)0);
        litem_189->item=item;
        self->tail->next=litem_189;
        self->tail=litem_189;
    }
    self->len++;
    __result_obj__103 = self;
    return __result_obj__103;
}

static void list$1char$p$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_190;
struct list_item$1char$p* prev_it_191;
    it_190=self->head;
    while(it_190!=((void*)0)) {
        prev_it_191=it_190;
        it_190=it_190->next;
        come_call_finalizer3(prev_it_191,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self){
}

static struct list$1short$* list$1short$$p_initialize_with_values(struct list$1short$* self, int num_value, short* values){
int i_192;
struct list$1short$* __result_obj__107;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_192=0;    i_192<num_value;    i_192++    ){
        list$1short$$p_push_back(self,values[i_192]);
    }
    __result_obj__107 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__107,list$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__107;
}

static struct list$1short$* list$1short$$p_push_back(struct list$1short$* self, short item){
void* __right_value102 = (void*)0;
struct list_item$1short$* litem_193;
void* __right_value103 = (void*)0;
struct list_item$1short$* litem_194;
void* __right_value104 = (void*)0;
struct list_item$1short$* litem_195;
struct list$1short$* __result_obj__106;
    if(    self->len==0) {
        litem_193=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value102=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1493, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_193->prev=((void*)0);
        litem_193->next=((void*)0);
        litem_193->item=item;
        self->tail=litem_193;
        self->head=litem_193;
    }
    else if(    self->len==1) {
        litem_194=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value103=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1503, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_194->prev=self->head;
        litem_194->next=((void*)0);
        litem_194->item=item;
        self->tail=litem_194;
        self->head->next=litem_194;
    }
    else {
        litem_195=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value104=(struct list_item$1short$*)come_calloc(1, sizeof(struct list_item$1short$)*(1), "./comelang.h", 1513, "struct list_item$1short$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_195->prev=self->tail;
        litem_195->next=((void*)0);
        litem_195->item=item;
        self->tail->next=litem_195;
        self->tail=litem_195;
    }
    self->len++;
    __result_obj__106 = self;
    return __result_obj__106;
}

static void list$1short$$p_finalize(struct list$1short$* self){
struct list_item$1short$* it_196;
struct list_item$1short$* prev_it_197;
    it_196=self->head;
    while(it_196!=((void*)0)) {
        prev_it_197=it_196;
        it_196=it_196->next;
        come_call_finalizer3(prev_it_197,list_item$1short$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self){
}

static struct list$1int$* list$1int$$p_initialize_with_values(struct list$1int$* self, int num_value, int* values){
int i_198;
struct list$1int$* __result_obj__110;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_198=0;    i_198<num_value;    i_198++    ){
        list$1int$$p_push_back(self,values[i_198]);
    }
    __result_obj__110 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__110,list$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__110;
}

static struct list$1int$* list$1int$$p_push_back(struct list$1int$* self, int item){
void* __right_value107 = (void*)0;
struct list_item$1int$* litem_199;
void* __right_value108 = (void*)0;
struct list_item$1int$* litem_200;
void* __right_value109 = (void*)0;
struct list_item$1int$* litem_201;
struct list$1int$* __result_obj__109;
    if(    self->len==0) {
        litem_199=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value107=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1493, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_199->prev=((void*)0);
        litem_199->next=((void*)0);
        litem_199->item=item;
        self->tail=litem_199;
        self->head=litem_199;
    }
    else if(    self->len==1) {
        litem_200=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value108=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1503, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_200->prev=self->head;
        litem_200->next=((void*)0);
        litem_200->item=item;
        self->tail=litem_200;
        self->head->next=litem_200;
    }
    else {
        litem_201=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value109=(struct list_item$1int$*)come_calloc(1, sizeof(struct list_item$1int$)*(1), "./comelang.h", 1513, "struct list_item$1int$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_201->prev=self->tail;
        litem_201->next=((void*)0);
        litem_201->item=item;
        self->tail->next=litem_201;
        self->tail=litem_201;
    }
    self->len++;
    __result_obj__109 = self;
    return __result_obj__109;
}

static void list$1int$$p_finalize(struct list$1int$* self){
struct list_item$1int$* it_202;
struct list_item$1int$* prev_it_203;
    it_202=self->head;
    while(it_202!=((void*)0)) {
        prev_it_203=it_202;
        it_202=it_202->next;
        come_call_finalizer3(prev_it_203,list_item$1int$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self){
}

static struct list$1long$* list$1long$$p_initialize_with_values(struct list$1long$* self, int num_value, long* values){
int i_204;
struct list$1long$* __result_obj__113;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_204=0;    i_204<num_value;    i_204++    ){
        list$1long$$p_push_back(self,values[i_204]);
    }
    __result_obj__113 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__113,list$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__113;
}

static struct list$1long$* list$1long$$p_push_back(struct list$1long$* self, long item){
void* __right_value112 = (void*)0;
struct list_item$1long$* litem_205;
void* __right_value113 = (void*)0;
struct list_item$1long$* litem_206;
void* __right_value114 = (void*)0;
struct list_item$1long$* litem_207;
struct list$1long$* __result_obj__112;
    if(    self->len==0) {
        litem_205=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value112=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1493, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_205->prev=((void*)0);
        litem_205->next=((void*)0);
        litem_205->item=item;
        self->tail=litem_205;
        self->head=litem_205;
    }
    else if(    self->len==1) {
        litem_206=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value113=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1503, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_206->prev=self->head;
        litem_206->next=((void*)0);
        litem_206->item=item;
        self->tail=litem_206;
        self->head->next=litem_206;
    }
    else {
        litem_207=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value114=(struct list_item$1long$*)come_calloc(1, sizeof(struct list_item$1long$)*(1), "./comelang.h", 1513, "struct list_item$1long$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_207->prev=self->tail;
        litem_207->next=((void*)0);
        litem_207->item=item;
        self->tail->next=litem_207;
        self->tail=litem_207;
    }
    self->len++;
    __result_obj__112 = self;
    return __result_obj__112;
}

static void list$1long$$p_finalize(struct list$1long$* self){
struct list_item$1long$* it_208;
struct list_item$1long$* prev_it_209;
    it_208=self->head;
    while(it_208!=((void*)0)) {
        prev_it_209=it_208;
        it_208=it_208->next;
        come_call_finalizer3(prev_it_209,list_item$1long$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self){
}

static struct list$1float$* list$1float$$p_initialize_with_values(struct list$1float$* self, int num_value, float* values){
int i_210;
struct list$1float$* __result_obj__116;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_210=0;    i_210<num_value;    i_210++    ){
        list$1float$$p_push_back(self,values[i_210]);
    }
    __result_obj__116 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__116,list$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__116;
}

static struct list$1float$* list$1float$$p_push_back(struct list$1float$* self, float item){
void* __right_value117 = (void*)0;
struct list_item$1float$* litem_211;
void* __right_value118 = (void*)0;
struct list_item$1float$* litem_212;
void* __right_value119 = (void*)0;
struct list_item$1float$* litem_213;
struct list$1float$* __result_obj__115;
    if(    self->len==0) {
        litem_211=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value117=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1493, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_211->prev=((void*)0);
        litem_211->next=((void*)0);
        litem_211->item=item;
        self->tail=litem_211;
        self->head=litem_211;
    }
    else if(    self->len==1) {
        litem_212=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value118=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1503, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_212->prev=self->head;
        litem_212->next=((void*)0);
        litem_212->item=item;
        self->tail=litem_212;
        self->head->next=litem_212;
    }
    else {
        litem_213=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value119=(struct list_item$1float$*)come_calloc(1, sizeof(struct list_item$1float$)*(1), "./comelang.h", 1513, "struct list_item$1float$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_213->prev=self->tail;
        litem_213->next=((void*)0);
        litem_213->item=item;
        self->tail->next=litem_213;
        self->tail=litem_213;
    }
    self->len++;
    __result_obj__115 = self;
    return __result_obj__115;
}

static void list$1float$$p_finalize(struct list$1float$* self){
struct list_item$1float$* it_214;
struct list_item$1float$* prev_it_215;
    it_214=self->head;
    while(it_214!=((void*)0)) {
        prev_it_215=it_214;
        it_214=it_214->next;
        come_call_finalizer3(prev_it_215,list_item$1float$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self){
}

static struct list$1double$* list$1double$$p_initialize_with_values(struct list$1double$* self, int num_value, double* values){
int i_216;
struct list$1double$* __result_obj__119;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_216=0;    i_216<num_value;    i_216++    ){
        list$1double$$p_push_back(self,values[i_216]);
    }
    __result_obj__119 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__119,list$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__119;
}

static struct list$1double$* list$1double$$p_push_back(struct list$1double$* self, double item){
void* __right_value122 = (void*)0;
struct list_item$1double$* litem_217;
void* __right_value123 = (void*)0;
struct list_item$1double$* litem_218;
void* __right_value124 = (void*)0;
struct list_item$1double$* litem_219;
struct list$1double$* __result_obj__118;
    if(    self->len==0) {
        litem_217=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value122=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1493, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_217->prev=((void*)0);
        litem_217->next=((void*)0);
        litem_217->item=item;
        self->tail=litem_217;
        self->head=litem_217;
    }
    else if(    self->len==1) {
        litem_218=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value123=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1503, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_218->prev=self->head;
        litem_218->next=((void*)0);
        litem_218->item=item;
        self->tail=litem_218;
        self->head->next=litem_218;
    }
    else {
        litem_219=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value124=(struct list_item$1double$*)come_calloc(1, sizeof(struct list_item$1double$)*(1), "./comelang.h", 1513, "struct list_item$1double$*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_219->prev=self->tail;
        litem_219->next=((void*)0);
        litem_219->item=item;
        self->tail->next=litem_219;
        self->tail=litem_219;
    }
    self->len++;
    __result_obj__118 = self;
    return __result_obj__118;
}

static void list$1double$$p_finalize(struct list$1double$* self){
struct list_item$1double$* it_220;
struct list_item$1double$* prev_it_221;
    it_220=self->head;
    while(it_220!=((void*)0)) {
        prev_it_221=it_220;
        it_220=it_220->next;
        come_call_finalizer3(prev_it_221,list_item$1double$$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self){
}

static struct vector$1char$* vector$1char$$p_initialize_with_values(struct vector$1char$* self, int num_value, char* values){
void* __right_value127 = (void*)0;
int i_222;
struct vector$1char$* __result_obj__122;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char*)(__right_value127=(char*)come_calloc(1, sizeof(char)*(1*(self->size)), "./comelang.h", 2310, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_222=0;    i_222<num_value;    i_222++    ){
        vector$1char$$p_add(self,values[i_222]);
    }
    __result_obj__122 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__122,vector$1char$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__122;
}

static struct vector$1char$* vector$1char$$p_add(struct vector$1char$* self, char item){
int new_size_223;
char* items_224;
void* __right_value128 = (void*)0;
int i_225;
struct vector$1char$* __result_obj__121;
memset(&i_225, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_223=self->size*2;
        items_224=self->items;
        self->items=((char*)(__right_value128=(char*)come_calloc(1, sizeof(char)*(1*(new_size_223)), "./comelang.h", 2437, "char*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value128 = come_decrement_ref_count2(__right_value128, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_225=0;        i_225<self->size;        i_225++        ){
            self->items[i_225]=items_224[i_225];
        }
        self->size=new_size_223;
        come_free(items_224);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__121 = self;
    return __result_obj__121;
}

static void vector$1char$$p_finalize(struct vector$1char$* self){
int i_226;
    if(    0) {
        for(        i_226=0;        i_226<self->len;        i_226++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1char$p* vector$1char$p$p_initialize_with_values(struct vector$1char$p* self, int num_value, char** values){
void* __right_value131 = (void*)0;
int i_227;
struct vector$1char$p* __result_obj__125;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((char**)(__right_value131=(char**)come_calloc(1, sizeof(char*)*(1*(self->size)), "./comelang.h", 2310, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_227=0;    i_227<num_value;    i_227++    ){
        vector$1char$p$p_add(self,values[i_227]);
    }
    __result_obj__125 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__125,vector$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__125;
}

static struct vector$1char$p* vector$1char$p$p_add(struct vector$1char$p* self, char* item){
int new_size_228;
char** items_229;
void* __right_value132 = (void*)0;
int i_230;
struct vector$1char$p* __result_obj__124;
memset(&i_230, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_228=self->size*2;
        items_229=self->items;
        self->items=((char**)(__right_value132=(char**)come_calloc(1, sizeof(char*)*(1*(new_size_228)), "./comelang.h", 2437, "char**", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value132 = come_decrement_ref_count2(__right_value132, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_230=0;        i_230<self->size;        i_230++        ){
            self->items[i_230]=items_229[i_230];
        }
        self->size=new_size_228;
        come_free(items_229);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__124 = self;
    return __result_obj__124;
}

static void vector$1char$p$p_finalize(struct vector$1char$p* self){
int i_231;
    if(    0) {
        for(        i_231=0;        i_231<self->len;        i_231++        ){
            (self->items[i_231] = come_decrement_ref_count2(self->items[i_231], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1short$* vector$1short$$p_initialize_with_values(struct vector$1short$* self, int num_value, short* values){
void* __right_value135 = (void*)0;
int i_232;
struct vector$1short$* __result_obj__128;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((short*)(__right_value135=(short*)come_calloc(1, sizeof(short)*(1*(self->size)), "./comelang.h", 2310, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_232=0;    i_232<num_value;    i_232++    ){
        vector$1short$$p_add(self,values[i_232]);
    }
    __result_obj__128 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__128,vector$1short$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__128;
}

static struct vector$1short$* vector$1short$$p_add(struct vector$1short$* self, short item){
int new_size_233;
short* items_234;
void* __right_value136 = (void*)0;
int i_235;
struct vector$1short$* __result_obj__127;
memset(&i_235, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_233=self->size*2;
        items_234=self->items;
        self->items=((short*)(__right_value136=(short*)come_calloc(1, sizeof(short)*(1*(new_size_233)), "./comelang.h", 2437, "short*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value136 = come_decrement_ref_count2(__right_value136, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_235=0;        i_235<self->size;        i_235++        ){
            self->items[i_235]=items_234[i_235];
        }
        self->size=new_size_233;
        come_free(items_234);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__127 = self;
    return __result_obj__127;
}

static void vector$1short$$p_finalize(struct vector$1short$* self){
int i_236;
    if(    0) {
        for(        i_236=0;        i_236<self->len;        i_236++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1int$* vector$1int$$p_initialize_with_values(struct vector$1int$* self, int num_value, int* values){
void* __right_value139 = (void*)0;
int i_237;
struct vector$1int$* __result_obj__131;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((int*)(__right_value139=(int*)come_calloc(1, sizeof(int)*(1*(self->size)), "./comelang.h", 2310, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_237=0;    i_237<num_value;    i_237++    ){
        vector$1int$$p_add(self,values[i_237]);
    }
    __result_obj__131 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__131,vector$1int$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__131;
}

static struct vector$1int$* vector$1int$$p_add(struct vector$1int$* self, int item){
int new_size_238;
int* items_239;
void* __right_value140 = (void*)0;
int i_240;
struct vector$1int$* __result_obj__130;
memset(&i_240, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_238=self->size*2;
        items_239=self->items;
        self->items=((int*)(__right_value140=(int*)come_calloc(1, sizeof(int)*(1*(new_size_238)), "./comelang.h", 2437, "int*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value140 = come_decrement_ref_count2(__right_value140, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_240=0;        i_240<self->size;        i_240++        ){
            self->items[i_240]=items_239[i_240];
        }
        self->size=new_size_238;
        come_free(items_239);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__130 = self;
    return __result_obj__130;
}

static void vector$1int$$p_finalize(struct vector$1int$* self){
int i_241;
    if(    0) {
        for(        i_241=0;        i_241<self->len;        i_241++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1long$* vector$1long$$p_initialize_with_values(struct vector$1long$* self, int num_value, long* values){
void* __right_value143 = (void*)0;
int i_242;
struct vector$1long$* __result_obj__134;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((long*)(__right_value143=(long*)come_calloc(1, sizeof(long)*(1*(self->size)), "./comelang.h", 2310, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_242=0;    i_242<num_value;    i_242++    ){
        vector$1long$$p_add(self,values[i_242]);
    }
    __result_obj__134 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__134,vector$1long$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__134;
}

static struct vector$1long$* vector$1long$$p_add(struct vector$1long$* self, long item){
int new_size_243;
long* items_244;
void* __right_value144 = (void*)0;
int i_245;
struct vector$1long$* __result_obj__133;
memset(&i_245, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_243=self->size*2;
        items_244=self->items;
        self->items=((long*)(__right_value144=(long*)come_calloc(1, sizeof(long)*(1*(new_size_243)), "./comelang.h", 2437, "long*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value144 = come_decrement_ref_count2(__right_value144, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_245=0;        i_245<self->size;        i_245++        ){
            self->items[i_245]=items_244[i_245];
        }
        self->size=new_size_243;
        come_free(items_244);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__133 = self;
    return __result_obj__133;
}

static void vector$1long$$p_finalize(struct vector$1long$* self){
int i_246;
    if(    0) {
        for(        i_246=0;        i_246<self->len;        i_246++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1float$* vector$1float$$p_initialize_with_values(struct vector$1float$* self, int num_value, float* values){
void* __right_value147 = (void*)0;
int i_247;
struct vector$1float$* __result_obj__137;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((float*)(__right_value147=(float*)come_calloc(1, sizeof(float)*(1*(self->size)), "./comelang.h", 2310, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_247=0;    i_247<num_value;    i_247++    ){
        vector$1float$$p_add(self,values[i_247]);
    }
    __result_obj__137 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__137,vector$1float$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__137;
}

static struct vector$1float$* vector$1float$$p_add(struct vector$1float$* self, float item){
int new_size_248;
float* items_249;
void* __right_value148 = (void*)0;
int i_250;
struct vector$1float$* __result_obj__136;
memset(&i_250, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_248=self->size*2;
        items_249=self->items;
        self->items=((float*)(__right_value148=(float*)come_calloc(1, sizeof(float)*(1*(new_size_248)), "./comelang.h", 2437, "float*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value148 = come_decrement_ref_count2(__right_value148, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_250=0;        i_250<self->size;        i_250++        ){
            self->items[i_250]=items_249[i_250];
        }
        self->size=new_size_248;
        come_free(items_249);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__136 = self;
    return __result_obj__136;
}

static void vector$1float$$p_finalize(struct vector$1float$* self){
int i_251;
    if(    0) {
        for(        i_251=0;        i_251<self->len;        i_251++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct vector$1double$* vector$1double$$p_initialize_with_values(struct vector$1double$* self, int num_value, double* values){
void* __right_value151 = (void*)0;
int i_252;
struct vector$1double$* __result_obj__140;
    self->size=num_value+1;
    self->len=num_value;
    self->items=((double*)(__right_value151=(double*)come_calloc(1, sizeof(double)*(1*(self->size)), "./comelang.h", 2310, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
    for(    i_252=0;    i_252<num_value;    i_252++    ){
        vector$1double$$p_add(self,values[i_252]);
    }
    __result_obj__140 = come_increment_ref_count(self);
    come_call_finalizer3(self,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__140,vector$1double$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__140;
}

static struct vector$1double$* vector$1double$$p_add(struct vector$1double$* self, double item){
int new_size_253;
double* items_254;
void* __right_value152 = (void*)0;
int i_255;
struct vector$1double$* __result_obj__139;
memset(&i_255, 0, sizeof(int));
    if(    self->len==self->size) {
        new_size_253=self->size*2;
        items_254=self->items;
        self->items=((double*)(__right_value152=(double*)come_calloc(1, sizeof(double)*(1*(new_size_253)), "./comelang.h", 2437, "double*", (void*)0, (void*)0, (void*)0, (void*)0)));
        (__right_value152 = come_decrement_ref_count2(__right_value152, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        for(        i_255=0;        i_255<self->size;        i_255++        ){
            self->items[i_255]=items_254[i_255];
        }
        self->size=new_size_253;
        come_free(items_254);
    }
    self->items[self->len]=item;
    self->len++;
    __result_obj__139 = self;
    return __result_obj__139;
}

static void vector$1double$$p_finalize(struct vector$1double$* self){
int i_256;
    if(    0) {
        for(        i_256=0;        i_256<self->len;        i_256++        ){
        }
    }
    if(    self&&self->items) {
        come_free((char*)self->items);
    }
}

static struct list$1char$ph* list$1char$ph$p_initialize(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__178;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__178 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__178,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__178;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_290;
struct list_item$1char$ph* prev_it_291;
    it_290=self->head;
    while(it_290!=((void*)0)) {
        prev_it_291=it_290;
        it_290=it_290->next;
        come_call_finalizer3(prev_it_291,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_push_back(struct list$1char$ph* self, char* item){
void* __right_value201 = (void*)0;
struct list_item$1char$ph* litem_295;
char* __dec_obj20;
void* __right_value202 = (void*)0;
struct list_item$1char$ph* litem_296;
char* __dec_obj21;
void* __right_value203 = (void*)0;
struct list_item$1char$ph* litem_297;
char* __dec_obj22;
struct list$1char$ph* __result_obj__180;
    if(    self->len==0) {
        litem_295=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value201=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1493, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_295->prev=((void*)0);
        litem_295->next=((void*)0);
        __dec_obj20=litem_295->item;
        litem_295->item=(char*)come_increment_ref_count(item);
        __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_295;
        self->head=litem_295;
    }
    else if(    self->len==1) {
        litem_296=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value202=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1503, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_296->prev=self->head;
        litem_296->next=((void*)0);
        __dec_obj21=litem_296->item;
        litem_296->item=(char*)come_increment_ref_count(item);
        __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_296;
        self->head->next=litem_296;
    }
    else {
        litem_297=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value203=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1513, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_297->prev=self->tail;
        litem_297->next=((void*)0);
        __dec_obj22=litem_297->item;
        litem_297->item=(char*)come_increment_ref_count(item);
        __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_297;
        self->tail=litem_297;
    }
    self->len++;
    __result_obj__180 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__180;
}

struct sSemicolonNode* sSemicolonNode_initialize(struct sSemicolonNode* self, struct sInfo* info){
void* __right_value259 = (void*)0;
struct sSemicolonNode* __result_obj__237;
    ((struct sNodeBase*)(__right_value259=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value259,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __result_obj__237 = come_increment_ref_count(self);
    come_call_finalizer3(self,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__237,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__237;
}

char* sSemicolonNode_kind(struct sSemicolonNode* self){
void* __right_value260 = (void*)0;
char* __result_obj__238;
    __result_obj__238 = come_increment_ref_count(((char*)(__right_value260=__builtin_string("sSemicolonNode"))));
    (__right_value260 = come_decrement_ref_count2(__right_value260, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__238 = come_decrement_ref_count2(__result_obj__238, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__238;
}

_Bool sSemicolonNode_compile(struct sSemicolonNode* self, struct sInfo* info){
    add_come_code(info,";\n");
    return (_Bool)1;
}

static void sNodeBase_finalize(struct sNodeBase* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sSemicolonNode_finalize(struct sSemicolonNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sLambdaNode* sLambdaNode_initialize(struct sLambdaNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value261 = (void*)0;
struct sLambdaNode* __result_obj__239;
    ((struct sNodeBase*)(__right_value261=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value261,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    self->mFun=fun;
    __result_obj__239 = come_increment_ref_count(self);
    come_call_finalizer3(self,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__239,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__239;
}

char* sLambdaNode_kind(struct sLambdaNode* self){
void* __right_value262 = (void*)0;
char* __result_obj__240;
    __result_obj__240 = come_increment_ref_count(((char*)(__right_value262=__builtin_string("sLambdaNode"))));
    (__right_value262 = come_decrement_ref_count2(__right_value262, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__240 = come_decrement_ref_count2(__result_obj__240, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__240;
}

_Bool sLambdaNode_compile(struct sLambdaNode* self, struct sInfo* info){
struct sFun* come_fun_350;
int block_level_351;
void* __right_value263 = (void*)0;
void* __right_value264 = (void*)0;
struct CVALUE* come_value_352;
void* __right_value265 = (void*)0;
char* __dec_obj23;
void* __right_value304 = (void*)0;
struct sType* __dec_obj48;
_Bool __result_obj__257;
    come_fun_350=info->come_fun;
    info->come_fun=self->mFun;
    block_level_351=info->block_level;
    info->block_level=0;
    if(    self->mFun->mBlock) {
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
    }
    info->block_level=block_level_351;
    come_value_352=(struct CVALUE*)come_increment_ref_count(CVALUE_initialize((struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 51, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj23=come_value_352->c_value;
    come_value_352->c_value=(char*)come_increment_ref_count(xsprintf("%s",self->mFun->mName));
    __dec_obj23 = come_decrement_ref_count2(__dec_obj23, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj48=come_value_352->type;
    come_value_352->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mFun->mLambdaType));
    come_call_finalizer3(__dec_obj48,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    come_value_352->var=((void*)0);
    add_come_last_code(info,"%s",come_value_352->c_value);
    list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_352));
    info->come_fun=come_fun_350;
    __result_obj__257 = (_Bool)1;
    come_call_finalizer3(come_value_352,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__257;
}

static void sLambdaNode_finalize(struct sLambdaNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* sType_clone(struct sType* self){
struct sType* __result_obj__241;
void* __right_value266 = (void*)0;
struct sType* result_357;
void* __right_value267 = (void*)0;
struct sType* __dec_obj24;
void* __right_value268 = (void*)0;
struct sType* __dec_obj25;
void* __right_value276 = (void*)0;
struct list$1sType$ph* __dec_obj29;
void* __right_value277 = (void*)0;
struct sType* __dec_obj30;
void* __right_value278 = (void*)0;
struct sType* __dec_obj31;
void* __right_value280 = (void*)0;
struct sNode* __dec_obj32;
void* __right_value281 = (void*)0;
struct sNode* __dec_obj33;
void* __right_value282 = (void*)0;
char* __dec_obj34;
void* __right_value283 = (void*)0;
char* __dec_obj35;
void* __right_value284 = (void*)0;
char* __dec_obj36;
void* __right_value292 = (void*)0;
struct list$1sNode$ph* __dec_obj40;
void* __right_value293 = (void*)0;
char* __dec_obj41;
void* __right_value294 = (void*)0;
struct list$1sType$ph* __dec_obj42;
void* __right_value302 = (void*)0;
struct list$1char$ph* __dec_obj46;
void* __right_value303 = (void*)0;
struct sType* __dec_obj47;
struct sType* __result_obj__255;
    if(    self==(void*)0) {
        __result_obj__241 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__241,sType_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__241;
    }
    result_357=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_357->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_357->mOriginalLoadVarType;
        result_357->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_357->mChannelType;
        result_357->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_357->mGenericsTypes;
        result_357->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_357->mNoSolvedGenericsType;
        result_357->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_357->mAnyOriginalType;
        result_357->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_357->mSizeNum;
        result_357->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_357->mAlignas;
        result_357->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_357->mTupleName;
        result_357->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_357->mAttribute;
        result_357->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_357->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_357->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_357->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_357->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_357->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_357->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_357->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_357->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_357->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_357->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_357->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_357->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_357->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_357->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_357->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_357->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_357->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_357->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_357->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_357->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_357->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_357->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_357->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_357->mAsmName;
        result_357->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_357->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_357->mArrayNum;
        result_357->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_357->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_357->mOriginalTypeName;
        result_357->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_357->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_357->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_357->mParamTypes;
        result_357->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_357->mParamNames;
        result_357->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_357->mResultType;
        result_357->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_357->mVarArgs=self->mVarArgs;
    }
    __result_obj__255 = come_increment_ref_count(result_357);
    come_call_finalizer3(result_357,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__255,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__255;
}

static void sType_finalize(struct sType* self){
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        come_call_finalizer3(self->mOriginalLoadVarType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        come_call_finalizer3(self->mChannelType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        come_call_finalizer3(self->mNoSolvedGenericsType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        come_call_finalizer3(self->mAnyOriginalType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        ((self->mSizeNum) ? self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        ((self->mAlignas) ? self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        (self->mTupleName = come_decrement_ref_count2(self->mTupleName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        (self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        come_call_finalizer3(self->mArrayNum,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        (self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sType$ph$p_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_353;
struct list_item$1sType$ph* prev_it_354;
    it_353=self->head;
    while(it_353!=((void*)0)) {
        prev_it_354=it_353;
        it_353=it_353->next;
        come_call_finalizer3(prev_it_354,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sType$ph$p_finalize(struct list_item$1sType$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sNode$ph$p_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_355;
struct list_item$1sNode$ph* prev_it_356;
    it_355=self->head;
    while(it_355!=((void*)0)) {
        prev_it_356=it_355;
        it_355=it_355->next;
        come_call_finalizer3(prev_it_356,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sNode$ph$p_finalize(struct list_item$1sNode$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        ((self->item) ? self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__242;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sType$ph* result_358;
struct list_item$1sType$ph* it_359;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sType$ph* __result_obj__245;
    if(    self==((void*)0)) {
        __result_obj__242 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__242,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__242;
    }
    result_358=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_359=self->head;
    while(it_359!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_358,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_359->item)));
        }
        else {
            list$1sType$ph$p_add(result_358,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_359->item)));
        }
        it_359=it_359->next;
    }
    __result_obj__245 = come_increment_ref_count(result_358);
    come_call_finalizer3(result_358,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__245,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__245;
}

static struct list$1sType$ph* list$1sType$ph$p_initialize(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__243;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__243 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__243,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__243;
}

static struct list$1sType$ph* list$1sType$ph$p_add(struct list$1sType$ph* self, struct sType* item){
void* __right_value271 = (void*)0;
struct list_item$1sType$ph* litem_360;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_361;
struct sType* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1sType$ph* litem_362;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__244;
    if(    self->len==0) {
        litem_360=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value271=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1423, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_360->prev=((void*)0);
        litem_360->next=((void*)0);
        __dec_obj26=litem_360->item;
        litem_360->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_360;
        self->head=litem_360;
    }
    else if(    self->len==1) {
        litem_361=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1433, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_361->prev=self->head;
        litem_361->next=((void*)0);
        __dec_obj27=litem_361->item;
        litem_361->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_361;
        self->head->next=litem_361;
    }
    else {
        litem_362=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value273=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1443, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_362->prev=self->tail;
        litem_362->next=((void*)0);
        __dec_obj28=litem_362->item;
        litem_362->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_362;
        self->tail=litem_362;
    }
    self->len++;
    __result_obj__244 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__244;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_363;
struct list_item$1sType$ph* prev_it_364;
    it_363=self->head;
    while(it_363!=((void*)0)) {
        prev_it_364=it_363;
        it_363=it_363->next;
        come_call_finalizer3(prev_it_364,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__246;
void* __right_value279 = (void*)0;
struct sNode* result_365;
struct sNode* __result_obj__247;
    if(    self==(void*)0) {
        __result_obj__246 = come_increment_ref_count((void*)0);
        ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count2(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__246;
    }
    result_365=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_365->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_365->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_365->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_365->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_365->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_365->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_365->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_365->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_365->kind=self->kind;
    }
    __result_obj__247 = come_increment_ref_count(result_365);
    ((result_365) ? result_365 = come_decrement_ref_count2(result_365, ((struct sNode*)result_365)->finalize, ((struct sNode*)result_365)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count2(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__248;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_366;
struct list_item$1sNode$ph* it_367;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__248,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__248;
    }
    result_366=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_367=self->head;
    while(it_367!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_366,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_367->item)));
        }
        else {
            list$1sNode$ph$p_add(result_366,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_367->item)));
        }
        it_367=it_367->next;
    }
    __result_obj__251 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__251,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__251;
}

static struct list$1sNode$ph* list$1sNode$ph$p_initialize(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__249;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__249 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__249,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__249;
}

static struct list$1sNode$ph* list$1sNode$ph$p_add(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value287 = (void*)0;
struct list_item$1sNode$ph* litem_368;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_369;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_370;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__250;
    if(    self->len==0) {
        litem_368=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_368->prev=((void*)0);
        litem_368->next=((void*)0);
        __dec_obj37=litem_368->item;
        litem_368->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_368;
        self->head=litem_368;
    }
    else if(    self->len==1) {
        litem_369=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=self->head;
        litem_369->next=((void*)0);
        __dec_obj38=litem_369->item;
        litem_369->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_369;
        self->head->next=litem_369;
    }
    else {
        litem_370=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->tail;
        litem_370->next=((void*)0);
        __dec_obj39=litem_370->item;
        litem_370->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_370;
        self->tail=litem_370;
    }
    self->len++;
    __result_obj__250 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__250;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_371;
struct list_item$1sNode$ph* prev_it_372;
    it_371=self->head;
    while(it_371!=((void*)0)) {
        prev_it_372=it_371;
        it_371=it_371->next;
        come_call_finalizer3(prev_it_372,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__252;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_373;
struct list_item$1char$ph* it_374;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__254;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_373=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_374=self->head;
    while(it_374!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_373,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_374->item)));
        }
        else {
            list$1char$ph$p_add(result_373,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_374->item)));
        }
        it_374=it_374->next;
    }
    __result_obj__254 = come_increment_ref_count(result_373);
    come_call_finalizer3(result_373,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__254;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_375;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_376;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_377;
char* __dec_obj45;
struct list$1char$ph* __result_obj__253;
    if(    self->len==0) {
        litem_375=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_375->prev=((void*)0);
        litem_375->next=((void*)0);
        __dec_obj43=litem_375->item;
        litem_375->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_375;
        self->head=litem_375;
    }
    else if(    self->len==1) {
        litem_376=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_376->prev=self->head;
        litem_376->next=((void*)0);
        __dec_obj44=litem_376->item;
        litem_376->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_376;
        self->head->next=litem_376;
    }
    else {
        litem_377=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=self->tail;
        litem_377->next=((void*)0);
        __dec_obj45=litem_377->item;
        litem_377->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_377;
        self->tail=litem_377;
    }
    self->len++;
    __result_obj__253 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_378;
struct list_item$1char$ph* prev_it_379;
    it_378=self->head;
    while(it_378!=((void*)0)) {
        prev_it_379=it_378;
        it_378=it_378->next;
        come_call_finalizer3(prev_it_379,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_380;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_381;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_382;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__256;
    if(    self->len==0) {
        litem_380=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_380->prev=((void*)0);
        litem_380->next=((void*)0);
        __dec_obj49=litem_380->item;
        litem_380->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_380;
        self->head=litem_380;
    }
    else if(    self->len==1) {
        litem_381=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_381->prev=self->head;
        litem_381->next=((void*)0);
        __dec_obj50=litem_381->item;
        litem_381->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_381;
        self->head->next=litem_381;
    }
    else {
        litem_382=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_382->prev=self->tail;
        litem_382->next=((void*)0);
        __dec_obj51=litem_382->item;
        litem_382->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_382;
        self->tail=litem_382;
    }
    self->len++;
    __result_obj__256 = self;
    come_call_finalizer3(item,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__256;
}

static void CVALUE_finalize(struct CVALUE* self){
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        (self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        come_call_finalizer3(self->type,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        (self->c_value_without_right_value_objects = come_decrement_ref_count2(self->c_value_without_right_value_objects, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        (self->c_value_without_cast_object_value = come_decrement_ref_count2(self->c_value_without_cast_object_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sFunNode* sFunNode_initialize(struct sFunNode* self, struct sFun* fun, struct sInfo* info){
void* __right_value308 = (void*)0;
struct sFun* __dec_obj52;
struct sFunNode* __result_obj__258;
    ((struct sNodeBase*)(__right_value308=sNodeBase_initialize((struct sNodeBase*)come_increment_ref_count((struct sNodeBase*)self),info)));
    come_call_finalizer3(__right_value308,sNodeBase_finalize, 0, 1, 0, 0, (void*)0);
    __dec_obj52=self->mFun;
    self->mFun=(struct sFun*)come_increment_ref_count(fun);
    come_call_finalizer3(__dec_obj52,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__258 = come_increment_ref_count(self);
    come_call_finalizer3(self,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(fun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__258,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__258;
}

char* sFunNode_kind(struct sFunNode* self){
void* __right_value309 = (void*)0;
char* __result_obj__259;
    __result_obj__259 = come_increment_ref_count(((char*)(__right_value309=__builtin_string("sFunNode"))));
    (__right_value309 = come_decrement_ref_count2(__right_value309, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__259 = come_decrement_ref_count2(__result_obj__259, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__259;
}

_Bool sFunNode_compile(struct sFunNode* self, struct sInfo* info){
struct sFun* come_fun_383;
int block_level_384;
void* __right_value310 = (void*)0;
    come_fun_383=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_384=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_384;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_383;
    return (_Bool)1;
}

static void sFun_finalize(struct sFun* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        come_call_finalizer3(self->mLambdaType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        come_call_finalizer3(self->mBlock,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        come_call_finalizer3(self->mSource,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        come_call_finalizer3(self->mSourceHead2,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        come_call_finalizer3(self->mSourceDefer,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        (self->mFunAttribute = come_decrement_ref_count2(self->mFunAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void sBlock_finalize(struct sBlock* self){
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        come_call_finalizer3(self->mNodes,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        come_call_finalizer3(self->mVarTable,sVarTable_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sFunNode_finalize(struct sFunNode* self){
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        (self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        come_call_finalizer3(self->mFun,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
}

struct sBlock* sBlock_initialize(struct sBlock* self, struct sInfo* info){
void* __right_value311 = (void*)0;
void* __right_value312 = (void*)0;
struct list$1sNode$ph* __dec_obj53;
struct sBlock* __result_obj__260;
    __dec_obj53=self->mNodes;
    self->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "05function.c", 117, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj53,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __result_obj__260 = come_increment_ref_count(self);
    come_call_finalizer3(self,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__260,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__260;
}

struct sGenericsFun* sGenericsFun_initialize(struct sGenericsFun* self, struct sType* impl_type, struct list$1char$ph* generics_type_names, struct list$1char$ph* method_generics_type_names, char* name, struct sType* result_type, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct list$1char$ph* param_default_parametors, _Bool var_args, char* block, struct sInfo* info, char* generics_sname, int generics_sline){
void* __right_value313 = (void*)0;
struct list$1char$ph* __dec_obj54;
void* __right_value314 = (void*)0;
struct list$1char$ph* __dec_obj55;
char* __dec_obj56;
struct sType* __dec_obj57;
struct list$1sType$ph* __dec_obj58;
struct list$1char$ph* __dec_obj59;
struct list$1char$ph* __dec_obj60;
char* __dec_obj61;
void* __right_value315 = (void*)0;
char* __dec_obj62;
struct sGenericsFun* __result_obj__261;
    __dec_obj54=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_type_names));
    come_call_finalizer3(__dec_obj54,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj55=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj55,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj56=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj57=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj57,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj58=self->mParamTypes;
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj58,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj59=self->mParamNames;
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj59,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj60=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj60,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj61=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj62=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mGenericsSLine=generics_sline;
    __result_obj__261 = come_increment_ref_count(self);
    come_call_finalizer3(self,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(impl_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    (name = come_decrement_ref_count2(name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (block = come_decrement_ref_count2(block, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (generics_sname = come_decrement_ref_count2(generics_sname, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__261,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__261;
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        come_call_finalizer3(self->mImplType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        come_call_finalizer3(self->mMethodGenericsTypeNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        come_call_finalizer3(self->mResultType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        come_call_finalizer3(self->mParamTypes,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        come_call_finalizer3(self->mParamNames,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        come_call_finalizer3(self->mParamDefaultParametors,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        (self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        (self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct sBlock* parse_block(struct sInfo* info, _Bool no_block_level, _Bool return_self_at_last, _Bool in_function){
void* __right_value316 = (void*)0;
void* __right_value317 = (void*)0;
struct sBlock* result_385;
int sline_top_386;
int block_level_387;
char* p_saved_388;
int sline_saved_389;
char* sname_saved_390;
void* __right_value318 = (void*)0;
char* __dec_obj63;
char* __dec_obj64;
struct map$2char$phchar$ph* __dec_obj65;
char* p_393;
int sline_394;
void* __right_value319 = (void*)0;
char* sname_395;
void* __right_value320 = (void*)0;
void* __right_value321 = (void*)0;
char* module_name_396;
void* __right_value322 = (void*)0;
void* __right_value323 = (void*)0;
struct list$1char$ph* params_397;
void* __right_value324 = (void*)0;
char* word_398;
void* __right_value325 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_399=0;
char* Err_400=0;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_401=0;
char* Err_402=0;
void* __right_value327 = (void*)0;
char* __dec_obj66;
void* __right_value328 = (void*)0;
char* __dec_obj67;
void* __right_value329 = (void*)0;
void* __right_value330 = (void*)0;
_Bool _if_conditional1;
void* __right_value331 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_406=0;
char* Err_407=0;
struct sBlock* __result_obj__266;
void* __right_value332 = (void*)0;
void* __right_value333 = (void*)0;
struct sClassModule* module_408;
void* __right_value334 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_409=0;
char* Err_410=0;
void* __right_value335 = (void*)0;
void* __right_value341 = (void*)0;
struct map$2char$phchar$ph* __dec_obj69;
int i_416;
struct list$1char$ph* o2_saved_417;
char* it_420;
void* __right_value342 = (void*)0;
void* __right_value348 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
char* __dec_obj70;
void* __right_value351 = (void*)0;
struct sNode* node_467;
void* __right_value352 = (void*)0;
char* __dec_obj71;
void* __right_value353 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_468=0;
char* Err_469=0;
_Bool omit_semicolon_473;
void* __right_value357 = (void*)0;
char* __dec_obj75;
char* head_488;
void* __right_value358 = (void*)0;
struct sNode* value_489;
char* tail_490;
void* __right_value359 = (void*)0;
struct sNode* __dec_obj76;
void* __right_value360 = (void*)0;
void* __right_value361 = (void*)0;
struct sNode* node_492;
void* __right_value362 = (void*)0;
char* __dec_obj77;
struct sNode* node_493;
void* __right_value363 = (void*)0;
void* __right_value364 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value367 = (void*)0;
struct sNode* __dec_obj79;
void* __right_value368 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value369 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_495=0;
char* Err_496=0;
_Bool omit_semicolon_497;
char* p_498;
char* head_499;
void* __right_value370 = (void*)0;
char* source_500;
void* __right_value371 = (void*)0;
struct sNode* node_501;
void* __right_value372 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_502=0;
char* Err_503=0;
struct sBlock* __result_obj__304;
node_493 = (void*)0;
    result_385=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 154, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_386=info->sline_top;
    info->sline_top=info->sline;
    block_level_387=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_388=((void*)0);
        sline_saved_389=0;
        sname_saved_390=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_388) {
                if(                *info->p==0) {
                    info->p=p_saved_388;
                    info->sline=sline_saved_389;
                    __dec_obj63=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_390));
                    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_388=((void*)0);
                    sline_saved_389=0;
                    __dec_obj64=sname_saved_390;
                    sname_saved_390=((void*)0);
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj65=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj65,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                }
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                info->p++;
                skip_spaces_and_lf(info);
                break;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp_v5(info);
            p_393=info->p;
            sline_394=info->sline;
            sname_395=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_394;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value320=parse_word(info)));
                (__right_value320 = come_decrement_ref_count2(__right_value320, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_396=(char*)come_increment_ref_count(parse_word(info));
                params_397=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 210, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_398=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_397,(char*)come_increment_ref_count(word_398));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value325=err_msg(info,"invalid source end")));
                            come_exception_var_c1_399=multiple_assign_var1->v1;
                            Err_400=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_400)?(puts(Err_400),exit(0)):(0));
                            come_call_finalizer3(__right_value325,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_400 = come_decrement_ref_count2(Err_400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_398 = come_decrement_ref_count2(word_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_401=multiple_assign_var2->v1;
                            Err_402=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_402)?(puts(Err_402),exit(0)):(0));
                            come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_402 = come_decrement_ref_count2(Err_402, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_398 = come_decrement_ref_count2(word_398, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_388=info->p;
                sline_saved_389=info->sline;
                __dec_obj66=sname_saved_390;
                sname_saved_390=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj67=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_396));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value330=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value329=__builtin_string(module_name_396))))))==((void*)0))),                (__right_value329 = come_decrement_ref_count2(__right_value329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value330,sClassModule_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value331=err_msg(info,"module not found")));
                    come_exception_var_c3_406=multiple_assign_var3->v1;
                    Err_407=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_407)?(puts(Err_407),exit(0)):(0));
                    come_call_finalizer3(__right_value331,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__266 = come_increment_ref_count(((void*)0));
                    (Err_407 = come_decrement_ref_count2(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_396 = come_decrement_ref_count2(module_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_397,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_390 = come_decrement_ref_count2(sname_saved_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_385,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__266,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__266;
                    (Err_407 = come_decrement_ref_count2(Err_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_408=((struct sClassModule*)(__right_value333=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value332=__builtin_string(module_name_396))))));
                (__right_value332 = come_decrement_ref_count2(__right_value332, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value333,sClassModule_finalize, 0, 1, 0, 0, (void*)0);
                if(                list$1char$ph$p_length(module_408->mParams)!=list$1char$ph$p_length(params_397)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value334=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_409=multiple_assign_var4->v1;
                    Err_410=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_410)?(puts(Err_410),exit(0)):(0));
                    come_call_finalizer3(__right_value334,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_410 = come_decrement_ref_count2(Err_410, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj69=info->module_params;
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 264, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj69,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_416=0;
                for(                o2_saved_417=(struct list$1char$ph*)come_increment_ref_count((module_408->mParams)),it_420=list$1char$ph$p_begin((o2_saved_417));                !list$1char$ph$p_end((o2_saved_417));                it_420=list$1char$ph$p_next((o2_saved_417))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_420)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value348=list$1char$ph$p_operator_load_element(params_397,i_416))))));
                    (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_416++;
                }
                come_call_finalizer3(o2_saved_417,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_408->mText;
                info->sline=module_408->mSLine;
                __dec_obj70=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_408->mSName));
                __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_396 = come_decrement_ref_count2(module_name_396, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_397,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_467=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj71=info->sname;
            info->sname=(char*)come_increment_ref_count(node_467->sname(node_467->_protocol_obj));
            __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_467->sline(node_467->_protocol_obj);
            if(            node_467==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value353=err_msg(info,"Invalid expression")));
                come_exception_var_c5_468=multiple_assign_var5->v1;
                Err_469=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_469)?(puts(Err_469),exit(0)):(0));
                come_call_finalizer3(__right_value353,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_469 = come_decrement_ref_count2(Err_469, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_467));
            parse_sharp_v5(info);
            if(            node_467->terminated(node_467->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_473=(_Bool)1;
            if(            node_467->terminated(node_467->_protocol_obj)) {
                omit_semicolon_473=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_473=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_385->mOmitSemicolon=omit_semicolon_473;
                if(                omit_semicolon_473&&in_function) {
                    list$1sNode$ph$p_delete(result_385->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_393;
                    info->sline=sline_394;
                    __dec_obj75=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_395));
                    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_488=info->p;
                    value_489=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_490=info->p;
                    __dec_obj76=value_489;
                    value_489=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_489),info));
                    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_491[tail_490-head_488+1];
                    memset(&buf_491, 0, sizeof(char)                    *(tail_490-head_488+1)                    );
                    memcpy(buf_491,head_488,tail_490-head_488);
                    buf_491[tail_490-head_488]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_492=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_489),(char*)come_increment_ref_count(__builtin_string(buf_491)),info));
                    list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_492));
                    ((value_489) ? value_489 = come_decrement_ref_count2(value_489, ((struct sNode*)value_489)->finalize, ((struct sNode*)value_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_467) ? node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_489) ? value_489 = come_decrement_ref_count2(value_489, ((struct sNode*)value_489)->finalize, ((struct sNode*)value_489)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_492) ? node_492 = come_decrement_ref_count2(node_492, ((struct sNode*)node_492)->finalize, ((struct sNode*)node_492)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_467) ? node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_395 = come_decrement_ref_count2(sname_395, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_467) ? node_467 = come_decrement_ref_count2(node_467, ((struct sNode*)node_467)->finalize, ((struct sNode*)node_467)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_388) {
            if(            info->p==0) {
                info->p=p_saved_388;
                info->sline=sline_saved_389;
                __dec_obj77=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_390));
                __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_388=((void*)0);
                sline_saved_389=0;
            }
        }
        (sname_saved_390 = come_decrement_ref_count2(sname_saved_390, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 368, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value364=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 368, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj79=node_493;
            node_493=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value364,sSemicolonNode_finalize, 0, 1, 0, 0, (void*)0);
            list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_493));
        }
        else {
            __dec_obj80=node_493;
            node_493=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_493==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value369=err_msg(info,"Invalid expression")));
                come_exception_var_c6_495=multiple_assign_var6->v1;
                Err_496=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_496)?(puts(Err_496),exit(0)):(0));
                come_call_finalizer3(__right_value369,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_496 = come_decrement_ref_count2(Err_496, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_493->terminated(node_493->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_497=(_Bool)1;
            if(            node_493->terminated(node_493->_protocol_obj)) {
                omit_semicolon_497=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_497=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_385->mOmitSemicolon=omit_semicolon_497;
            list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_493));
        }
        ((node_493) ? node_493 = come_decrement_ref_count2(node_493, ((struct sNode*)node_493)->finalize, ((struct sNode*)node_493)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_498=info->p;
        head_499=info->head;
        source_500=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_500;
        info->head=source_500;
        node_501=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_501==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value372=err_msg(info,"Invalid expression")));
            come_exception_var_c7_502=multiple_assign_var7->v1;
            Err_503=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_503)?(puts(Err_503),exit(0)):(0));
            come_call_finalizer3(__right_value372,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_503 = come_decrement_ref_count2(Err_503, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_385->mNodes,(struct sNode*)come_increment_ref_count(node_501));
        info->p=p_498;
        info->head=head_499;
        (source_500 = come_decrement_ref_count2(source_500, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_501) ? node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_387;
    __result_obj__304 = come_increment_ref_count(result_385);
    come_call_finalizer3(result_385,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_391;
int i_392;
    for(    i_391=0;    i_391<self->size;    i_391++    ){
        if(        self->item_existance[i_391]) {
            if(            1) {
                (self->items[i_391] = come_decrement_ref_count2(self->items[i_391], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_392=0;    i_392<self->size;    i_392++    ){
        if(        self->item_existance[i_392]) {
            if(            1) {
                (self->keys[i_392] = come_decrement_ref_count2(self->keys[i_392], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static void tuple2$2int$char$ph$p_finalize(struct tuple2$2int$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sClassModule* map$2char$phsClassModule$ph$p_operator_load_element(struct map$2char$phsClassModule$ph* self, char* key){
struct sClassModule* default_value_403;
unsigned int hash_404;
unsigned int it_405;
struct sClassModule* __result_obj__262;
struct sClassModule* __result_obj__263;
struct sClassModule* __result_obj__264;
struct sClassModule* __result_obj__265;
default_value_403 = (void*)0;
    memset(&default_value_403,0,sizeof(struct sClassModule*));
    hash_404=string_get_hash_key(((char*)key))%self->size;
    it_405=hash_404;
    while((_Bool)1) {
        if(        self->item_existance[it_405]) {
            if(            string_equals(self->keys[it_405],key)) {
                __result_obj__262 = come_increment_ref_count(self->items[it_405]);
                come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__262,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__262;
            }
            it_405++;
            if(            it_405>=self->size) {
                it_405=0;
            }
            else if(            it_405==hash_404) {
                __result_obj__263 = come_increment_ref_count(default_value_403);
                come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__263,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__263;
            }
        }
        else {
            __result_obj__264 = come_increment_ref_count(default_value_403);
            come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__264,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__264;
        }
    }
    __result_obj__265 = come_increment_ref_count(default_value_403);
    come_call_finalizer3(default_value_403,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__265,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__265;
}

static void sClassModule_finalize(struct sClassModule* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mText!=((void*)0)) {
        (self->mText = come_decrement_ref_count2(self->mText, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mParams!=((void*)0)) {
        come_call_finalizer3(self->mParams,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSName!=((void*)0)) {
        (self->mSName = come_decrement_ref_count2(self->mSName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static int list$1char$ph$p_length(struct list$1char$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_initialize(struct map$2char$phchar$ph* self){
void* __right_value336 = (void*)0;
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
int i_411;
void* __right_value339 = (void*)0;
void* __right_value340 = (void*)0;
struct list$1char$p* __dec_obj68;
struct map$2char$phchar$ph* __result_obj__268;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value336=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2700, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value338=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_411=0;    i_411<128;    i_411++    ){
        self->item_existance[i_411]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj68=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj68,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__268 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__268,map$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__268;
}

static struct list$1char$p* list$1char$p$p_initialize(struct list$1char$p* self){
struct list$1char$p* __result_obj__267;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__267 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__267,list$1char$p$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__267;
}

static void list$1char$p_finalize(struct list$1char$p* self){
struct list_item$1char$p* it_412;
struct list_item$1char$p* prev_it_413;
    it_412=self->head;
    while(it_412!=((void*)0)) {
        prev_it_413=it_412;
        it_412=it_412->next;
        come_call_finalizer3(prev_it_413,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_414;
int i_415;
    for(    i_414=0;    i_414<self->size;    i_414++    ){
        if(        self->item_existance[i_414]) {
            if(            1) {
                (self->items[i_414] = come_decrement_ref_count2(self->items[i_414], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_415=0;    i_415<self->size;    i_415++    ){
        if(        self->item_existance[i_415]) {
            if(            1) {
                (self->keys[i_415] = come_decrement_ref_count2(self->keys[i_415], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_418;
char* __result_obj__269;
char* __result_obj__270;
char* result_419;
char* __result_obj__271;
result_418 = (void*)0;
result_419 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_418,0,sizeof(char*));
        __result_obj__269 = result_418;
        return __result_obj__269;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__270 = self->it->item;
        return __result_obj__270;
    }
    memset(&result_419,0,sizeof(char*));
    __result_obj__271 = result_419;
    return __result_obj__271;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_421;
char* __result_obj__272;
char* __result_obj__273;
char* result_422;
char* __result_obj__274;
result_421 = (void*)0;
result_422 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_421,0,sizeof(char*));
        __result_obj__272 = result_421;
        return __result_obj__272;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__273 = self->it->item;
        return __result_obj__273;
    }
    memset(&result_422,0,sizeof(char*));
    __result_obj__274 = result_422;
    return __result_obj__274;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph$p_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_440;
unsigned int it_441;
_Bool same_key_exist_458;
char* it2_461;
struct map$2char$phchar$ph* __result_obj__295;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph$p_rehash(self);
    }
    hash_440=string_get_hash_key(((char*)key))%self->size;
    it_441=hash_440;
    while((_Bool)1) {
        if(        self->item_existance[it_441]) {
            if(            string_equals(self->keys[it_441],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_441]);
                    (self->keys[it_441] = come_decrement_ref_count2(self->keys[it_441], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_441]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_441]);
                    self->keys[it_441]=key;
                }
                if(                1) {
                    (self->items[it_441] = come_decrement_ref_count2(self->items[it_441], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_441]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_441]=item;
                }
                break;
            }
            it_441++;
            if(            it_441>=self->size) {
                it_441=0;
            }
            else if(            it_441==hash_440) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_441]=(_Bool)1;
            if(            1) {
                self->keys[it_441]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_441]=key;
            }
            if(            1) {
                self->items[it_441]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_441]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_458=(_Bool)0;
    for(    it2_461=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_461=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_461,key)) {
            same_key_exist_458=(_Bool)1;
        }
    }
    if(    !same_key_exist_458) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__295 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

static void map$2char$phchar$ph$p_rehash(struct map$2char$phchar$ph* self){
int size_423;
void* __right_value343 = (void*)0;
char** keys_424;
void* __right_value344 = (void*)0;
char** items_425;
void* __right_value345 = (void*)0;
_Bool* item_existance_426;
int len_427;
char* it_430;
char* default_value_433;
void* __right_value346 = (void*)0;
char* it2_434;
unsigned int hash_437;
int n_438;
char* default_value_439;
void* __right_value347 = (void*)0;
default_value_433 = (void*)0;
default_value_439 = (void*)0;
    size_423=self->size*10;
    keys_424=(char**)come_increment_ref_count(((char**)(__right_value343=(char**)come_calloc(1, sizeof(char*)*(1*(size_423)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_425=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc(1, sizeof(char*)*(1*(size_423)), "./comelang.h", 2939, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_426=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value345=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_423)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_427=0;
    for(    it_430=map$2char$phchar$ph$p_begin(self);    !map$2char$phchar$ph$p_end(self);    it_430=map$2char$phchar$ph$p_next(self)    ){
        memset(&default_value_433,0,sizeof(char*));
        it2_434=((char*)(__right_value346=map$2char$phchar$ph$p_at(self,it_430,(char*)come_increment_ref_count(default_value_433))));
        (__right_value346 = come_decrement_ref_count2(__right_value346, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_437=string_get_hash_key(((char*)it_430))%size_423;
        n_438=hash_437;
        while((_Bool)1) {
            if(            item_existance_426[n_438]) {
                n_438++;
                if(                n_438>=size_423) {
                    n_438=0;
                }
                else if(                n_438==hash_437) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_426[n_438]=(_Bool)1;
                keys_424[n_438]=it_430;
                items_425[n_438]=((char*)(__right_value347=map$2char$phchar$ph$p_at(self,it_430,(char*)come_increment_ref_count(default_value_439))));
                (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_427++;
                (default_value_439 = come_decrement_ref_count2(default_value_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_439 = come_decrement_ref_count2(default_value_439, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_433 = come_decrement_ref_count2(default_value_433, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_424;
    self->items=items_425;
    self->item_existance=item_existance_426;
    self->size=size_423;
    self->len=len_427;
}

static char* map$2char$phchar$ph$p_begin(struct map$2char$phchar$ph* self){
char* result_428;
char* __result_obj__275;
char* __result_obj__276;
char* result_429;
char* __result_obj__277;
result_428 = (void*)0;
result_429 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_428,0,sizeof(char*));
        __result_obj__275 = result_428;
        return __result_obj__275;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__276 = self->key_list->it->item;
        return __result_obj__276;
    }
    memset(&result_429,0,sizeof(char*));
    __result_obj__277 = result_429;
    return __result_obj__277;
}

static _Bool map$2char$phchar$ph$p_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph$p_next(struct map$2char$phchar$ph* self){
char* result_431;
char* __result_obj__278;
char* __result_obj__279;
char* result_432;
char* __result_obj__280;
result_431 = (void*)0;
result_432 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_431,0,sizeof(char*));
        __result_obj__278 = result_431;
        return __result_obj__278;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__279 = self->key_list->it->item;
        return __result_obj__279;
    }
    memset(&result_432,0,sizeof(char*));
    __result_obj__280 = result_432;
    return __result_obj__280;
}

static char* map$2char$phchar$ph$p_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_435;
unsigned int it_436;
char* __result_obj__281;
char* __result_obj__282;
char* __result_obj__283;
char* __result_obj__284;
    hash_435=string_get_hash_key(((char*)key))%self->size;
    it_436=hash_435;
    while((_Bool)1) {
        if(        self->item_existance[it_436]) {
            if(            string_equals(self->keys[it_436],key)) {
                __result_obj__281 = come_increment_ref_count(self->items[it_436]);
                (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__281 = come_decrement_ref_count2(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__281;
            }
            it_436++;
            if(            it_436>=self->size) {
                it_436=0;
            }
            else if(            it_436==hash_435) {
                __result_obj__282 = come_increment_ref_count(default_value);
                (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__282 = come_decrement_ref_count2(__result_obj__282, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__282;
            }
        }
        else {
            __result_obj__283 = come_increment_ref_count(default_value);
            (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            (__result_obj__283 = come_decrement_ref_count2(__result_obj__283, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__283;
        }
    }
    __result_obj__284 = come_increment_ref_count(default_value);
    (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__284 = come_decrement_ref_count2(__result_obj__284, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__284;
}

static struct list$1char$p* list$1char$p$p_remove(struct list$1char$p* self, char* item){
int it2_442;
struct list_item$1char$p* it_443;
struct list$1char$p* __result_obj__288;
    it2_442=0;
    it_443=self->head;
    while(it_443!=((void*)0)) {
        if(        charp_equals(it_443->item,item)) {
            list$1char$p$p_delete(self,it2_442,it2_442+1);
            break;
        }
        it2_442++;
        it_443=it_443->next;
    }
    __result_obj__288 = self;
    return __result_obj__288;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_444;
struct list$1char$p* __result_obj__285;
struct list_item$1char$p* it_447;
int i_448;
struct list_item$1char$p* prev_it_449;
struct list_item$1char$p* it_450;
int i_451;
struct list_item$1char$p* prev_it_452;
struct list_item$1char$p* it_453;
struct list_item$1char$p* head_prev_it_454;
struct list_item$1char$p* tail_it_455;
int i_456;
struct list_item$1char$p* prev_it_457;
struct list$1char$p* __result_obj__287;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_444=tail;
        tail=head;
        head=tmp_444;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__285 = self;
        return __result_obj__285;
    }
    if(    head==0&&tail==self->len) {
        list$1char$p$p_reset(self);
    }
    else if(    head==0) {
        it_447=self->head;
        i_448=0;
        while(it_447!=((void*)0)) {
            if(            i_448<tail) {
                prev_it_449=it_447;
                it_447=it_447->next;
                i_448++;
                come_call_finalizer3(prev_it_449,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_448==tail) {
                self->head=it_447;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_447=it_447->next;
                i_448++;
            }
        }
    }
    else if(    tail==self->len) {
        it_450=self->head;
        i_451=0;
        while(it_450!=((void*)0)) {
            if(            i_451==head) {
                self->tail=it_450->prev;
                self->tail->next=((void*)0);
            }
            if(            i_451>=head) {
                prev_it_452=it_450;
                it_450=it_450->next;
                i_451++;
                come_call_finalizer3(prev_it_452,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_450=it_450->next;
                i_451++;
            }
        }
    }
    else {
        it_453=self->head;
        head_prev_it_454=((void*)0);
        tail_it_455=((void*)0);
        i_456=0;
        while(it_453!=((void*)0)) {
            if(            i_456==head) {
                head_prev_it_454=it_453->prev;
            }
            if(            i_456==tail) {
                tail_it_455=it_453;
            }
            if(            i_456>=head&&i_456<tail) {
                prev_it_457=it_453;
                it_453=it_453->next;
                i_456++;
                come_call_finalizer3(prev_it_457,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_453=it_453->next;
                i_456++;
            }
        }
        if(        head_prev_it_454!=((void*)0)) {
            head_prev_it_454->next=tail_it_455;
        }
        if(        tail_it_455!=((void*)0)) {
            tail_it_455->prev=head_prev_it_454;
        }
    }
    __result_obj__287 = self;
    return __result_obj__287;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_445;
struct list_item$1char$p* prev_it_446;
struct list$1char$p* __result_obj__286;
    it_445=self->head;
    while(it_445!=((void*)0)) {
        prev_it_446=it_445;
        it_445=it_445->next;
        come_call_finalizer3(prev_it_446,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__286 = self;
    return __result_obj__286;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_459;
char* __result_obj__289;
char* __result_obj__290;
char* result_460;
char* __result_obj__291;
result_459 = (void*)0;
result_460 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_459,0,sizeof(char*));
        __result_obj__289 = result_459;
        return __result_obj__289;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__290 = self->it->item;
        return __result_obj__290;
    }
    memset(&result_460,0,sizeof(char*));
    __result_obj__291 = result_460;
    return __result_obj__291;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_462;
char* __result_obj__292;
char* __result_obj__293;
char* result_463;
char* __result_obj__294;
result_462 = (void*)0;
result_463 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_462,0,sizeof(char*));
        __result_obj__292 = result_462;
        return __result_obj__292;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__293 = self->it->item;
        return __result_obj__293;
    }
    memset(&result_463,0,sizeof(char*));
    __result_obj__294 = result_463;
    return __result_obj__294;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_464;
int i_465;
char* __result_obj__296;
char* default_value_466;
char* __result_obj__297;
default_value_466 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_464=self->head;
    i_465=0;
    while(it_464!=((void*)0)) {
        if(        position==i_465) {
            __result_obj__296 = come_increment_ref_count(it_464->item);
            (__result_obj__296 = come_decrement_ref_count2(__result_obj__296, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__296;
        }
        it_464=it_464->next;
        i_465++;
    }
    memset(&default_value_466,0,sizeof(char*));
    __result_obj__297 = come_increment_ref_count(default_value_466);
    (default_value_466 = come_decrement_ref_count2(default_value_466, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__297 = come_decrement_ref_count2(__result_obj__297, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__297;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value354 = (void*)0;
struct list_item$1sNode$ph* litem_470;
struct sNode* __dec_obj72;
void* __right_value355 = (void*)0;
struct list_item$1sNode$ph* litem_471;
struct sNode* __dec_obj73;
void* __right_value356 = (void*)0;
struct list_item$1sNode$ph* litem_472;
struct sNode* __dec_obj74;
struct list$1sNode$ph* __result_obj__298;
    if(    self->len==0) {
        litem_470=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value354=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1493, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_470->prev=((void*)0);
        litem_470->next=((void*)0);
        __dec_obj72=litem_470->item;
        litem_470->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_470;
        self->head=litem_470;
    }
    else if(    self->len==1) {
        litem_471=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value355=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1503, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_471->prev=self->head;
        litem_471->next=((void*)0);
        __dec_obj73=litem_471->item;
        litem_471->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_471;
        self->head->next=litem_471;
    }
    else {
        litem_472=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value356=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1513, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_472->prev=self->tail;
        litem_472->next=((void*)0);
        __dec_obj74=litem_472->item;
        litem_472->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_472;
        self->tail=litem_472;
    }
    self->len++;
    __result_obj__298 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__298;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_474;
struct list$1sNode$ph* __result_obj__299;
struct list_item$1sNode$ph* it_477;
int i_478;
struct list_item$1sNode$ph* prev_it_479;
struct list_item$1sNode$ph* it_480;
int i_481;
struct list_item$1sNode$ph* prev_it_482;
struct list_item$1sNode$ph* it_483;
struct list_item$1sNode$ph* head_prev_it_484;
struct list_item$1sNode$ph* tail_it_485;
int i_486;
struct list_item$1sNode$ph* prev_it_487;
struct list$1sNode$ph* __result_obj__301;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_474=tail;
        tail=head;
        head=tmp_474;
    }
    if(    head<0) {
        head=0;
    }
    if(    tail>self->len) {
        tail=self->len;
    }
    if(    head==tail) {
        __result_obj__299 = self;
        return __result_obj__299;
    }
    if(    head==0&&tail==self->len) {
        list$1sNode$ph$p_reset(self);
    }
    else if(    head==0) {
        it_477=self->head;
        i_478=0;
        while(it_477!=((void*)0)) {
            if(            i_478<tail) {
                prev_it_479=it_477;
                it_477=it_477->next;
                i_478++;
                come_call_finalizer3(prev_it_479,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_478==tail) {
                self->head=it_477;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_477=it_477->next;
                i_478++;
            }
        }
    }
    else if(    tail==self->len) {
        it_480=self->head;
        i_481=0;
        while(it_480!=((void*)0)) {
            if(            i_481==head) {
                self->tail=it_480->prev;
                self->tail->next=((void*)0);
            }
            if(            i_481>=head) {
                prev_it_482=it_480;
                it_480=it_480->next;
                i_481++;
                come_call_finalizer3(prev_it_482,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_480=it_480->next;
                i_481++;
            }
        }
    }
    else {
        it_483=self->head;
        head_prev_it_484=((void*)0);
        tail_it_485=((void*)0);
        i_486=0;
        while(it_483!=((void*)0)) {
            if(            i_486==head) {
                head_prev_it_484=it_483->prev;
            }
            if(            i_486==tail) {
                tail_it_485=it_483;
            }
            if(            i_486>=head&&i_486<tail) {
                prev_it_487=it_483;
                it_483=it_483->next;
                i_486++;
                come_call_finalizer3(prev_it_487,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_483=it_483->next;
                i_486++;
            }
        }
        if(        head_prev_it_484!=((void*)0)) {
            head_prev_it_484->next=tail_it_485;
        }
        if(        tail_it_485!=((void*)0)) {
            tail_it_485->prev=head_prev_it_484;
        }
    }
    __result_obj__301 = self;
    return __result_obj__301;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_475;
struct list_item$1sNode$ph* prev_it_476;
struct list$1sNode$ph* __result_obj__300;
    it_475=self->head;
    while(it_475!=((void*)0)) {
        prev_it_476=it_475;
        it_475=it_475->next;
        come_call_finalizer3(prev_it_476,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__300 = self;
    return __result_obj__300;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__302;
void* __right_value365 = (void*)0;
struct sSemicolonNode* result_494;
void* __right_value366 = (void*)0;
char* __dec_obj78;
struct sSemicolonNode* __result_obj__303;
    if(    self==(void*)0) {
        __result_obj__302 = (void*)0;
        return __result_obj__302;
    }
    result_494=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_494->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj78=result_494->sname;
        result_494->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_494->sline_real=self->sline_real;
    }
    __result_obj__303 = result_494;
    come_call_finalizer3(result_494,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_504;
struct sVarTable* old_table_505;
void* __right_value373 = (void*)0;
void* __right_value374 = (void*)0;
struct sVarTable* __dec_obj81;
struct sVarTable* current_loop_vtable_506;
int i_507;
struct list$1char$ph* o2_saved_508;
char* name_509;
void* __right_value375 = (void*)0;
struct sType* type_510;
void* __right_value376 = (void*)0;
int block_level_514;
int i_515;
struct list$1sNode$ph* o2_saved_516;
struct sNode* node_519;
struct list$1sRightValueObject$ph* right_value_objects_522;
void* __right_value377 = (void*)0;
void* __right_value378 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj82;
char* __dec_obj83;
char* __dec_obj84;
int stack_num_before_527;
int sline_528;
void* __right_value379 = (void*)0;
char* sname_529;
void* __right_value380 = (void*)0;
char* __dec_obj85;
_Bool Value_530;
void* __right_value381 = (void*)0;
struct CVALUE* come_value_531;
void* __right_value387 = (void*)0;
struct CVALUE* come_value2_532;
void* __right_value388 = (void*)0;
char* __dec_obj90;
void* __right_value389 = (void*)0;
struct CVALUE* come_value2_534;
struct sVar* var__535;
void* __right_value390 = (void*)0;
struct CVALUE* come_value3_536;
void* __right_value391 = (void*)0;
void* __right_value392 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_561=0;
char* Err_562=0;
_Bool _if_conditional2;
int __result_obj__316;
void* __right_value393 = (void*)0;
struct sType* __dec_obj91;
void* __right_value394 = (void*)0;
char* c_value_563;
void* __right_value395 = (void*)0;
char* __dec_obj92;
void* __right_value396 = (void*)0;
char* __dec_obj93;
void* __right_value397 = (void*)0;
char* __dec_obj94;
_Bool Value_564;
void* __right_value398 = (void*)0;
char* __dec_obj95;
struct list$1sRightValueObject$ph* __dec_obj96;
void* __if_result__0_567 = (void*)0;
struct list$1sVar$ph* o2_saved_568;
struct sVar* it_571;
void* __right_value399 = (void*)0;
struct list$1sVar$ph* __dec_obj97;
memset(&i_507, 0, sizeof(int));
memset(&i_515, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_504=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_505=info->lv_table;
    if(    !no_var_table) {
        __dec_obj81=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 442, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0)),(_Bool)0,old_table_505));
        come_call_finalizer3(__dec_obj81,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_506=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_508=(param_names),name_509=list$1char$ph$p_begin((o2_saved_508));        !list$1char$ph$p_end((o2_saved_508));        name_509=list$1char$ph$p_next((o2_saved_508))        ){
            type_510=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_507));
            type_510->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_509,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_510)),info,(_Bool)1);
            i_507++;
            come_call_finalizer3(type_510,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_514=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_516=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_519=list$1sNode$ph$p_begin((o2_saved_516));        !list$1sNode$ph$p_end((o2_saved_516));        node_519=list$1sNode$ph$p_next((o2_saved_516))        ){
            right_value_objects_522=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj82=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 480, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj82,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj83=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj84=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_527=list$1CVALUE$ph$p_length(info->stack);
            sline_528=info->sline;
            sname_529=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_519->sline(node_519->_protocol_obj);
            __dec_obj85=info->sname;
            info->sname=(char*)come_increment_ref_count(node_519->sname(node_519->_protocol_obj));
            __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_515==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_530=node_compile(node_519,info);
                if(                !Value_530) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_527+1) {
                    come_value_531=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_531->type->mClass->mName,"void")&&come_value_531->type->mPointerNum==0) {
                        come_value2_532=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_531));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_532));
                        __dec_obj90=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_532->c_value));
                        __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_532,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_534=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_531));
                        var__535=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__535) {
                            come_value3_536=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 516, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__535->mType->mClass=="void"&&var__535->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value392=check_assign_type("invalid if result value",var__535->mType,((struct sType*)(__right_value391=come_call_cloner(sType_clone, come_value_531->type))),come_value3_536,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_561=multiple_assign_var8->v1;
                                Err_562=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_562)),                                come_call_finalizer3(__right_value391,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value392,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result_obj__316 = (_Bool)1;
                                    (Err_562 = come_decrement_ref_count2(Err_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_522,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_529 = come_decrement_ref_count2(sname_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_516,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__316;
                                }
                                else {
                                }
                                (Err_562 = come_decrement_ref_count2(Err_562, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj91=var__535->mType;
                            var__535->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_531->type));
                            come_call_finalizer3(__dec_obj91,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_531->type->mHeap) {
                                c_value_563=(char*)come_increment_ref_count(increment_ref_count_object(come_value_531->type,come_value_531->c_value,info));
                                __dec_obj92=come_value2_534->c_value;
                                come_value2_534->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__535->mCValueName,c_value_563));
                                __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_563 = come_decrement_ref_count2(c_value_563, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj93=come_value2_534->c_value;
                                come_value2_534->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__535->mCValueName,come_value_531->c_value));
                                __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_536,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_534));
                        __dec_obj94=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_534->c_value));
                        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_534,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_531,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_564=node_compile(node_519,info);
                if(                !Value_564) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_528;
            __dec_obj95=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_529));
            __dec_obj95 = come_decrement_ref_count2(__dec_obj95, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_527);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph$p_reset(info->right_value_objects);
            }
            __dec_obj96=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_522);
            come_call_finalizer3(__dec_obj96,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_515++;
            come_call_finalizer3(right_value_objects_522,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_529 = come_decrement_ref_count2(sname_529, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_516,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_514==0) {
            for(            o2_saved_568=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_571=list$1sVar$ph$p_begin((o2_saved_568));            !list$1sVar$ph$p_end((o2_saved_568));            it_571=list$1sVar$ph$p_next((o2_saved_568))            ){
                free_object(((struct sType*)(__right_value399=come_call_cloner(sType_clone, it_571->mType))),it_571->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value399,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_568,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj97=info->match_it_var;
            __if_result__0_567=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj97,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_567,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_505;
    info->block_level=block_level_514;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_506;
    info->inhibits_output_code=inhibits_output_code_504;
    return 0;
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_511;
int i_512;
struct sType* __result_obj__305;
struct sType* default_value_513;
struct sType* __result_obj__306;
default_value_513 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_511=self->head;
    i_512=0;
    while(it_511!=((void*)0)) {
        if(        position==i_512) {
            __result_obj__305 = come_increment_ref_count(it_511->item);
            come_call_finalizer3(__result_obj__305,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__305;
        }
        it_511=it_511->next;
        i_512++;
    }
    memset(&default_value_513,0,sizeof(struct sType*));
    __result_obj__306 = come_increment_ref_count(default_value_513);
    come_call_finalizer3(default_value_513,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__306,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__306;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_517;
struct sNode* __result_obj__307;
struct sNode* __result_obj__308;
struct sNode* result_518;
struct sNode* __result_obj__309;
result_517 = (void*)0;
result_518 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_517,0,sizeof(struct sNode*));
        __result_obj__307 = result_517;
        return __result_obj__307;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__308 = self->it->item;
        return __result_obj__308;
    }
    memset(&result_518,0,sizeof(struct sNode*));
    __result_obj__309 = result_518;
    return __result_obj__309;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_520;
struct sNode* __result_obj__310;
struct sNode* __result_obj__311;
struct sNode* result_521;
struct sNode* __result_obj__312;
result_520 = (void*)0;
result_521 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_520,0,sizeof(struct sNode*));
        __result_obj__310 = result_520;
        return __result_obj__310;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__311 = self->it->item;
        return __result_obj__311;
    }
    memset(&result_521,0,sizeof(struct sNode*));
    __result_obj__312 = result_521;
    return __result_obj__312;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__313;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_523;
struct list_item$1sRightValueObject$ph* prev_it_524;
    it_523=self->head;
    while(it_523!=((void*)0)) {
        prev_it_524=it_523;
        it_523=it_523->next;
        come_call_finalizer3(prev_it_524,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sRightValueObject$ph$p_finalize(struct list_item$1sRightValueObject$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sRightValueObject_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sRightValueObject_finalize(struct sRightValueObject* self){
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarName!=((void*)0)) {
        (self->mVarName = come_decrement_ref_count2(self->mVarName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sRightValueObject$ph_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_525;
struct list_item$1sRightValueObject$ph* prev_it_526;
    it_525=self->head;
    while(it_525!=((void*)0)) {
        prev_it_526=it_525;
        it_525=it_525->next;
        come_call_finalizer3(prev_it_526,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__314;
void* __right_value382 = (void*)0;
struct CVALUE* result_533;
void* __right_value383 = (void*)0;
char* __dec_obj86;
void* __right_value384 = (void*)0;
struct sType* __dec_obj87;
void* __right_value385 = (void*)0;
char* __dec_obj88;
void* __right_value386 = (void*)0;
char* __dec_obj89;
struct CVALUE* __result_obj__315;
    if(    self==(void*)0) {
        __result_obj__314 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__314,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__314;
    }
    result_533=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj86=result_533->c_value;
        result_533->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj87=result_533->type;
        result_533->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj87,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_533->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_533->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj88=result_533->c_value_without_right_value_objects;
        result_533->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj89=result_533->c_value_without_cast_object_value;
        result_533->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__315 = come_increment_ref_count(result_533);
    come_call_finalizer3(result_533,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__315,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__315;
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
    if(    !list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)) {
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

static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_537;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_538;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_537=left->head;
    it2_538=right->head;
    while(it_537!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_537->item,it2_538->item)) {
            return (_Bool)0;
        }
        it_537=it_537->next;
        it2_538=it2_538->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !string_equals(self->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !sType_equals(self->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_equals(struct sType* left, struct sType* right){
    if(    !sClass_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    !sNode_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mDynamic,right->mDynamic)) {
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
    if(    !bool_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    !list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)) {
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
    if(    !int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
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
    if(    !bool_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_539;
struct list_item$1sType$ph* it2_540;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_539=left->head;
    it2_540=right->head;
    while(it_539!=((void*)0)) {
        if(        !sType_equals(it_539->item,it2_540->item)) {
            return (_Bool)0;
        }
        it_539=it_539->next;
        it2_540=it2_540->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_541;
struct list_item$1sNode$ph* it2_542;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_541=left->head;
    it2_542=right->head;
    while(it_541!=((void*)0)) {
        if(        !sNode_equals(it_541->item,it2_542->item)) {
            return (_Bool)0;
        }
        it_541=it_541->next;
        it2_542=it2_542->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_543;
struct list_item$1char$ph* it2_544;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_543=left->head;
    it2_544=right->head;
    while(it_543!=((void*)0)) {
        if(        !string_equals(it_543->item,it2_544->item)) {
            return (_Bool)0;
        }
        it_543=it_543->next;
        it2_544=it2_544->next;
    }
    return (_Bool)1;
}

static _Bool sClass_operator_equals(struct sClass* left, struct sClass* right){
    if(    bool_operator_not_equals(left->mStruct,right->mStruct)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mFloat,right->mFloat)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnion,right->mUnion)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerics,right->mGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMethodGenerics,right->mMethodGenerics)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mEnum,right->mEnum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mProtocol,right->mProtocol)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNumber,right->mNumber)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mGenericsNum,right->mGenericsNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)) {
        return (_Bool)0;
    }
    if(    list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(left->mFields,right->mFields)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mParentClassName,right->mParentClassName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_not_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
    return !list$1tuple2$2char$phsType$ph$ph$p_operator_equals(left,right);
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_545;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_546;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_545=left->head;
    it2_546=right->head;
    while(it_545!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_545->item,it2_546->item))) {
            return (_Bool)0;
        }
        it_545=it_545->next;
        it2_546=it2_546->next;
    }
    return (_Bool)1;
}

static _Bool tuple2$2char$phsType$ph_operator_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right){
    if(    !(string_operator_equals(self->v1,right->v1))) {
        return (_Bool)0;
    }
    if(    !(sType_operator_equals(self->v2,right->v2))) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sType_operator_equals(struct sType* left, struct sType* right){
    if(    sClass_operator_not_equals(left->mClass,right->mClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mChannelType,right->mChannelType)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mGenericsTypes,right->mGenericsTypes)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAnyClass,right->mAnyClass)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mAnyOriginalType,right->mAnyOriginalType)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mSizeNum,right->mSizeNum)) {
        return (_Bool)0;
    }
    if(    sNode_operator_not_equals(left->mAlignas,right->mAlignas)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mTupleName,right->mTupleName)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAllocaValue,right->mAllocaValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUnsigned,right->mUnsigned)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mShort,right->mShort)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLong,right->mLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLongLong,right->mLongLong)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mConstant,right->mConstant)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mAtomic,right->mAtomic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRegister,right->mRegister)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVolatile,right->mVolatile)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRecord,right->mRecord)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mExtern,right->mExtern)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mRestrict,right->mRestrict)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mImmutable,right->mImmutable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mHeap,right->mHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mChannel,right->mChannel)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoHeap,right->mNoHeap)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mException,right->mException)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mCreateVTable,right->mCreateVTable)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mDynamic,right->mDynamic)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mNullValue,right->mNullValue)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mGuardValue,right->mGuardValue)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mAsmName,right->mAsmName)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mTypedef,right->mTypedef)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mMultipleTypes,right->mMultipleTypes)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mOriginIsArray,right->mOriginIsArray)) {
        return (_Bool)0;
    }
    if(    list$1sNode$ph_operator_not_equals(left->mArrayNum,right->mArrayNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mPointerNum,right->mPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)) {
        return (_Bool)0;
    }
    if(    string_operator_not_equals(left->mOriginalTypeName,right->mOriginalTypeName)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mArrayPointerType,right->mArrayPointerType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mLambdaArray,right->mLambdaArray)) {
        return (_Bool)0;
    }
    if(    int_operator_not_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)) {
        return (_Bool)0;
    }
    if(    list$1sType$ph_operator_not_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    list$1char$ph_operator_not_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    sType_operator_not_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    bool_operator_not_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sClass_not_equals(struct sClass* left, struct sClass* right){
    return !(bool_equals(left->mStruct,right->mStruct)&&bool_equals(left->mFloat,right->mFloat)&&bool_equals(left->mUnion,right->mUnion)&&bool_equals(left->mGenerics,right->mGenerics)&&bool_equals(left->mMethodGenerics,right->mMethodGenerics)&&bool_equals(left->mEnum,right->mEnum)&&bool_equals(left->mProtocol,right->mProtocol)&&bool_equals(left->mNumber,right->mNumber)&&string_equals(left->mName,right->mName)&&int_equals(left->mGenericsNum,right->mGenericsNum)&&int_equals(left->mMethodGenericsNum,right->mMethodGenericsNum)&&list$1tuple2$2char$phsType$ph$ph$p_equals(left->mFields,right->mFields)&&string_equals(left->mParentClassName,right->mParentClassName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mDynamic,right->mDynamic));
}

static _Bool sClass_operator_not_equals(struct sClass* left, struct sClass* right){
    return !(((bool_operator_equals(left->mStruct,right->mStruct))&&(bool_operator_equals(left->mFloat,right->mFloat))&&(bool_operator_equals(left->mUnion,right->mUnion))&&(bool_operator_equals(left->mGenerics,right->mGenerics))&&(bool_operator_equals(left->mMethodGenerics,right->mMethodGenerics))&&(bool_operator_equals(left->mEnum,right->mEnum))&&(bool_operator_equals(left->mProtocol,right->mProtocol))&&(bool_operator_equals(left->mNumber,right->mNumber))&&(string_operator_equals(left->mName,right->mName))&&(int_operator_equals(left->mGenericsNum,right->mGenericsNum))&&(int_operator_equals(left->mMethodGenericsNum,right->mMethodGenericsNum))&&(list$1tuple2$2char$phsType$ph$ph_operator_equals(left->mFields,right->mFields))&&(string_operator_equals(left->mParentClassName,right->mParentClassName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mDynamic,right->mDynamic))));
}

static _Bool list$1tuple2$2char$phsType$ph$ph_operator_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right){
struct list_item$1tuple2$2char$phsType$ph$ph* it_547;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_548;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_547=left->head;
    it2_548=right->head;
    while(it_547!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_547->item,it2_548->item))) {
            return (_Bool)0;
        }
        it_547=it_547->next;
        it2_548=it2_548->next;
    }
    return (_Bool)1;
}

static _Bool sType_not_equals(struct sType* left, struct sType* right){
    return !(sClass_equals(left->mClass,right->mClass)&&sType_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType)&&sType_equals(left->mChannelType,right->mChannelType)&&list$1sType$ph$p_equals(left->mGenericsTypes,right->mGenericsTypes)&&sType_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType)&&bool_equals(left->mAnyClass,right->mAnyClass)&&sType_equals(left->mAnyOriginalType,right->mAnyOriginalType)&&sNode_equals(left->mSizeNum,right->mSizeNum)&&sNode_equals(left->mAlignas,right->mAlignas)&&string_equals(left->mTupleName,right->mTupleName)&&string_equals(left->mAttribute,right->mAttribute)&&bool_equals(left->mAllocaValue,right->mAllocaValue)&&bool_equals(left->mUnsigned,right->mUnsigned)&&bool_equals(left->mShort,right->mShort)&&bool_equals(left->mLong,right->mLong)&&bool_equals(left->mLongLong,right->mLongLong)&&bool_equals(left->mConstant,right->mConstant)&&bool_equals(left->mAtomic,right->mAtomic)&&bool_equals(left->mRegister,right->mRegister)&&bool_equals(left->mVolatile,right->mVolatile)&&bool_equals(left->mStatic,right->mStatic)&&bool_equals(left->mUniq,right->mUniq)&&bool_equals(left->mRecord,right->mRecord)&&bool_equals(left->mExtern,right->mExtern)&&bool_equals(left->mRestrict,right->mRestrict)&&bool_equals(left->mImmutable,right->mImmutable)&&bool_equals(left->mHeap,right->mHeap)&&bool_equals(left->mChannel,right->mChannel)&&bool_equals(left->mNoHeap,right->mNoHeap)&&bool_equals(left->mNoCallingDestructor,right->mNoCallingDestructor)&&bool_equals(left->mException,right->mException)&&bool_equals(left->mGenerate,right->mGenerate)&&bool_equals(left->mCreateVTable,right->mCreateVTable)&&bool_equals(left->mDynamic,right->mDynamic)&&bool_equals(left->mInline,right->mInline)&&bool_equals(left->mNullValue,right->mNullValue)&&bool_equals(left->mGuardValue,right->mGuardValue)&&string_equals(left->mAsmName,right->mAsmName)&&bool_equals(left->mTypedef,right->mTypedef)&&bool_equals(left->mMultipleTypes,right->mMultipleTypes)&&bool_equals(left->mOriginIsArray,right->mOriginIsArray)&&list$1sNode$ph$p_equals(left->mArrayNum,right->mArrayNum)&&int_equals(left->mPointerNum,right->mPointerNum)&&int_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum)&&int_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap)&&int_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum)&&int_equals(left->mFunctionPointerNum,right->mFunctionPointerNum)&&string_equals(left->mOriginalTypeName,right->mOriginalTypeName)&&int_equals(left->mOriginalPointerNum,right->mOriginalPointerNum)&&bool_equals(left->mArrayPointerType,right->mArrayPointerType)&&bool_equals(left->mLambdaArray,right->mLambdaArray)&&int_equals(left->mLambdaArrayNum,right->mLambdaArrayNum)&&list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)&&list$1char$ph$p_equals(left->mParamNames,right->mParamNames)&&sType_equals(left->mResultType,right->mResultType)&&bool_equals(left->mVarArgs,right->mVarArgs));
}

static _Bool sType_operator_not_equals(struct sType* left, struct sType* right){
    return !(((sClass_operator_equals(left->mClass,right->mClass))&&(sType_operator_equals(left->mOriginalLoadVarType,right->mOriginalLoadVarType))&&(sType_operator_equals(left->mChannelType,right->mChannelType))&&(list$1sType$ph_operator_equals(left->mGenericsTypes,right->mGenericsTypes))&&(sType_operator_equals(left->mNoSolvedGenericsType,right->mNoSolvedGenericsType))&&(bool_operator_equals(left->mAnyClass,right->mAnyClass))&&(sType_operator_equals(left->mAnyOriginalType,right->mAnyOriginalType))&&(sNode_operator_equals(left->mSizeNum,right->mSizeNum))&&(sNode_operator_equals(left->mAlignas,right->mAlignas))&&(string_operator_equals(left->mTupleName,right->mTupleName))&&(string_operator_equals(left->mAttribute,right->mAttribute))&&(bool_operator_equals(left->mAllocaValue,right->mAllocaValue))&&(bool_operator_equals(left->mUnsigned,right->mUnsigned))&&(bool_operator_equals(left->mShort,right->mShort))&&(bool_operator_equals(left->mLong,right->mLong))&&(bool_operator_equals(left->mLongLong,right->mLongLong))&&(bool_operator_equals(left->mConstant,right->mConstant))&&(bool_operator_equals(left->mAtomic,right->mAtomic))&&(bool_operator_equals(left->mRegister,right->mRegister))&&(bool_operator_equals(left->mVolatile,right->mVolatile))&&(bool_operator_equals(left->mStatic,right->mStatic))&&(bool_operator_equals(left->mUniq,right->mUniq))&&(bool_operator_equals(left->mRecord,right->mRecord))&&(bool_operator_equals(left->mExtern,right->mExtern))&&(bool_operator_equals(left->mRestrict,right->mRestrict))&&(bool_operator_equals(left->mImmutable,right->mImmutable))&&(bool_operator_equals(left->mHeap,right->mHeap))&&(bool_operator_equals(left->mChannel,right->mChannel))&&(bool_operator_equals(left->mNoHeap,right->mNoHeap))&&(bool_operator_equals(left->mNoCallingDestructor,right->mNoCallingDestructor))&&(bool_operator_equals(left->mException,right->mException))&&(bool_operator_equals(left->mGenerate,right->mGenerate))&&(bool_operator_equals(left->mCreateVTable,right->mCreateVTable))&&(bool_operator_equals(left->mDynamic,right->mDynamic))&&(bool_operator_equals(left->mInline,right->mInline))&&(bool_operator_equals(left->mNullValue,right->mNullValue))&&(bool_operator_equals(left->mGuardValue,right->mGuardValue))&&(string_operator_equals(left->mAsmName,right->mAsmName))&&(bool_operator_equals(left->mTypedef,right->mTypedef))&&(bool_operator_equals(left->mMultipleTypes,right->mMultipleTypes))&&(bool_operator_equals(left->mOriginIsArray,right->mOriginIsArray))&&(list$1sNode$ph_operator_equals(left->mArrayNum,right->mArrayNum))&&(int_operator_equals(left->mPointerNum,right->mPointerNum))&&(int_operator_equals(left->mOriginalTypeNamePointerNum,right->mOriginalTypeNamePointerNum))&&(int_operator_equals(left->mOriginalTypeNameHeap,right->mOriginalTypeNameHeap))&&(int_operator_equals(left->mTypedefOriginalPointerNum,right->mTypedefOriginalPointerNum))&&(int_operator_equals(left->mFunctionPointerNum,right->mFunctionPointerNum))&&(string_operator_equals(left->mOriginalTypeName,right->mOriginalTypeName))&&(int_operator_equals(left->mOriginalPointerNum,right->mOriginalPointerNum))&&(bool_operator_equals(left->mArrayPointerType,right->mArrayPointerType))&&(bool_operator_equals(left->mLambdaArray,right->mLambdaArray))&&(int_operator_equals(left->mLambdaArrayNum,right->mLambdaArrayNum))&&(list$1sType$ph_operator_equals(left->mParamTypes,right->mParamTypes))&&(list$1char$ph_operator_equals(left->mParamNames,right->mParamNames))&&(sType_operator_equals(left->mResultType,right->mResultType))&&(bool_operator_equals(left->mVarArgs,right->mVarArgs))));
}

static _Bool list$1sType$ph_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_549;
struct list_item$1sType$ph* it2_550;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_549=left->head;
    it2_550=right->head;
    while(it_549!=((void*)0)) {
        if(        !(sType_operator_equals(it_549->item,it2_550->item))) {
            return (_Bool)0;
        }
        it_549=it_549->next;
        it2_550=it2_550->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_551;
struct list_item$1sNode$ph* it2_552;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_551=left->head;
    it2_552=right->head;
    while(it_551!=((void*)0)) {
        if(        !(sNode_operator_equals(it_551->item,it2_552->item))) {
            return (_Bool)0;
        }
        it_551=it_551->next;
        it2_552=it2_552->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_553;
struct list_item$1char$ph* it2_554;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_553=left->head;
    it2_554=right->head;
    while(it_553!=((void*)0)) {
        if(        !(string_operator_equals(it_553->item,it2_554->item))) {
            return (_Bool)0;
        }
        it_553=it_553->next;
        it2_554=it2_554->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph$p_operator_equals(left,right);
}

static _Bool list$1sType$ph$p_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_555;
struct list_item$1sType$ph* it2_556;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_555=left->head;
    it2_556=right->head;
    while(it_555!=((void*)0)) {
        if(        !(sType_operator_equals(it_555->item,it2_556->item))) {
            return (_Bool)0;
        }
        it_555=it_555->next;
        it2_556=it2_556->next;
    }
    return (_Bool)1;
}

static _Bool sNode_not_equals(struct sNode* left, struct sNode* right){
    return !voidp_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool sNode_operator_not_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_not_equals(left->_protocol_obj,right->_protocol_obj);
}

static _Bool list$1sNode$ph_operator_not_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
    return !list$1sNode$ph$p_operator_equals(left,right);
}

static _Bool list$1sNode$ph$p_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_557;
struct list_item$1sNode$ph* it2_558;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_557=left->head;
    it2_558=right->head;
    while(it_557!=((void*)0)) {
        if(        !(sNode_operator_equals(it_557->item,it2_558->item))) {
            return (_Bool)0;
        }
        it_557=it_557->next;
        it2_558=it2_558->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph$p_operator_equals(left,right);
}

static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_559;
struct list_item$1char$ph* it2_560;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_559=left->head;
    it2_560=right->head;
    while(it_559!=((void*)0)) {
        if(        !(string_operator_equals(it_559->item,it2_560->item))) {
            return (_Bool)0;
        }
        it_559=it_559->next;
        it2_560=it2_560->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_565;
struct list_item$1sRightValueObject$ph* prev_it_566;
struct list$1sRightValueObject$ph* __result_obj__317;
    it_565=self->head;
    while(it_565!=((void*)0)) {
        prev_it_566=it_565;
        it_565=it_565->next;
        come_call_finalizer3(prev_it_566,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__317 = self;
    return __result_obj__317;
}

static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self){
struct sVar* result_569;
struct sVar* __result_obj__318;
struct sVar* __result_obj__319;
struct sVar* result_570;
struct sVar* __result_obj__320;
result_569 = (void*)0;
result_570 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_569,0,sizeof(struct sVar*));
        __result_obj__318 = result_569;
        return __result_obj__318;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__319 = self->it->item;
        return __result_obj__319;
    }
    memset(&result_570,0,sizeof(struct sVar*));
    __result_obj__320 = result_570;
    return __result_obj__320;
}

static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self){
struct sVar* result_572;
struct sVar* __result_obj__321;
struct sVar* __result_obj__322;
struct sVar* result_573;
struct sVar* __result_obj__323;
result_572 = (void*)0;
result_573 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_572,0,sizeof(struct sVar*));
        __result_obj__321 = result_572;
        return __result_obj__321;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__322 = self->it->item;
        return __result_obj__322;
    }
    memset(&result_573,0,sizeof(struct sVar*));
    __result_obj__323 = result_573;
    return __result_obj__323;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_574;
struct list_item$1sVar$ph* prev_it_575;
    it_574=self->head;
    while(it_574!=((void*)0)) {
        prev_it_575=it_574;
        it_574=it_574->next;
        come_call_finalizer3(prev_it_575,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void sVar_finalize(struct sVar* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        (self->mCValueName = come_decrement_ref_count2(self->mCValueName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        come_call_finalizer3(self->mType,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        (self->mFunName = come_decrement_ref_count2(self->mFunName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_576;
struct list_item$1sVar$ph* prev_it_577;
    it_576=self->head;
    while(it_576!=((void*)0)) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer3(prev_it_577,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

void arrange_stack(struct sInfo* info, int top){
    if(    list$1CVALUE$ph$p_length(info->stack)>top) {
        dec_stack_ptr(list$1CVALUE$ph$p_length(info->stack)-top,info);
    }
    if(    list$1CVALUE$ph$p_length(info->stack)<top) {
        printf("%s %d: unexpected stack value. The stack num is %d. top is %d\n",info->sname,info->sline,list$1CVALUE$ph$p_length(info->stack),top);
        exit(2);
    }
}

int expected_next_character(char c, struct sInfo* info){
void* __right_value400 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_578=0;
char* Err_579=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value400=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_578=multiple_assign_var9->v1;
            Err_579=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_579)?(puts(Err_579),exit(0)):(0));
            come_call_finalizer3(__right_value400,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_579 = come_decrement_ref_count2(Err_579, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
char* head_580;
_Bool dquort_581;
_Bool squort_582;
int sline_583;
int nest_584;
void* __right_value401 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_585=0;
char* Err_586=0;
void* __right_value402 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_587=0;
char* Err_588=0;
void* __right_value403 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_589=0;
char* Err_590=0;
void* __right_value404 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_591=0;
char* Err_592=0;
void* __right_value405 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_593=0;
char* Err_594=0;
void* __right_value406 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_595=0;
char* Err_596=0;
void* __right_value407 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_597=0;
char* Err_598=0;
void* __right_value408 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_599=0;
char* Err_600=0;
char* tail_601;
void* __right_value409 = (void*)0;
char* buf_602;
void* __right_value410 = (void*)0;
char* __result_obj__324;
    head_580=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_581=(_Bool)0;
        squort_582=(_Bool)0;
        sline_583=0;
        nest_584=0;
        while(1) {
            if(            dquort_581) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value401=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c9_585=multiple_assign_var10->v1;
                        Err_586=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_586)?(puts(Err_586),exit(0)):(0));
                        come_call_finalizer3(__right_value401,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_586 = come_decrement_ref_count2(Err_586, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_581=!dquort_581;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value402=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c10_587=multiple_assign_var11->v1;
                        Err_588=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_588)?(puts(Err_588),exit(0)):(0));
                        come_call_finalizer3(__right_value402,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_588 = come_decrement_ref_count2(Err_588, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value403=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c11_589=multiple_assign_var12->v1;
                        Err_590=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_590)?(puts(Err_590),exit(0)):(0));
                        come_call_finalizer3(__right_value403,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_590 = come_decrement_ref_count2(Err_590, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_582) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value404=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c12_591=multiple_assign_var13->v1;
                        Err_592=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_592)?(puts(Err_592),exit(0)):(0));
                        come_call_finalizer3(__right_value404,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_592 = come_decrement_ref_count2(Err_592, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_582=!squort_582;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value405=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c13_593=multiple_assign_var14->v1;
                        Err_594=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_594)?(puts(Err_594),exit(0)):(0));
                        come_call_finalizer3(__right_value405,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_594 = come_decrement_ref_count2(Err_594, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value406=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_583)));
                        come_exception_var_c14_595=multiple_assign_var15->v1;
                        Err_596=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_596)?(puts(Err_596),exit(0)):(0));
                        come_call_finalizer3(__right_value406,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_596 = come_decrement_ref_count2(Err_596, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_583=info->sline;
                info->p++;
                squort_582=!squort_582;
            }
            else if(            *info->p==34) {
                sline_583=info->sline;
                info->p++;
                dquort_581=!dquort_581;
            }
            else if(            *info->p==35) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==42) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==47&&*(info->p+1)==47) {
                parse_sharp_v5(info);
            }
            else if(            *info->p==123) {
                info->p++;
                nest_584++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_584==0) {
                    break;
                }
                nest_584--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value407=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_597=multiple_assign_var16->v1;
                Err_598=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_598)?(puts(Err_598),exit(0)):(0));
                come_call_finalizer3(__right_value407,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_598 = come_decrement_ref_count2(Err_598, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else if(            *info->p==10) {
                info->p++;
                info->sline++;
            }
            else {
                info->p++;
            }
        }
    }
    else {
        multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value408=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c16_599=multiple_assign_var17->v1;
        Err_600=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_600)?(puts(Err_600),exit(0)):(0));
        come_call_finalizer3(__right_value408,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        (Err_600 = come_decrement_ref_count2(Err_600, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_601=info->p;
    buf_602=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_601-head_580+1)), "05function.c", 751, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_602,head_580,tail_601-head_580);
    buf_602[tail_601-head_580]=0;
    skip_spaces_and_lf(info);
    __result_obj__324 = come_increment_ref_count(((char*)(__right_value410=__builtin_string(buf_602))));
    (buf_602 = come_decrement_ref_count2(buf_602, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value410 = come_decrement_ref_count2(__right_value410, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__324 = come_decrement_ref_count2(__result_obj__324, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__324;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_603;
char* p3_604;
int i_605;
    terminated_603=(_Bool)0;
    p3_604=p;
    for(    i_605=0;    i_605<strlen(p2);    i_605++    ){
        if(        *p3_604==0) {
            terminated_603=(_Bool)1;
            break;
        }
        p3_604++;
    }
    return !terminated_603&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value411 = (void*)0;
void* __right_value412 = (void*)0;
struct buffer* asm_fun_name_606;
void* __right_value413 = (void*)0;
void* __right_value414 = (void*)0;
struct buffer* result_607;
char* head_608;
int brace_num_609;
char* tail_610;
char* head_611;
int brace_num_612;
char* tail_613;
char* head_614;
char* tail_615;
char* head_616;
char* tail_617;
int len_618;
_Bool in_dquort_619;
int brace_num_620;
char* head_621;
char* tail_622;
char* head_623;
char* tail_624;
char* head_625;
char* tail_626;
char* head_627;
int nest_628;
char* tail_629;
char* head_630;
int nest_631;
char* tail_632;
char* head_633;
int nest_634;
char* tail_635;
char* head_636;
int nest_637;
char* tail_638;
char* head_639;
int nest_640;
char* tail_641;
char* head_642;
char* tail_643;
char* head_644;
char* tail_645;
char* head_646;
char* tail_647;
char* head_648;
char* tail_649;
char* head_650;
char* tail_651;
char* head_652;
int brace_num_653;
char* tail_654;
void* __right_value415 = (void*)0;
void* __right_value416 = (void*)0;
void* __right_value420 = (void*)0;
void* __right_value421 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__328;
    asm_fun_name_606=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 776, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    result_607=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 777, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_608=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_609=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_609++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_609--;
                        if(                        brace_num_609==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_610=info->p;
            buffer_append(result_607,head_608,tail_610-head_608);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_611=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_612=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_612++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_612--;
                        if(                        brace_num_612==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_613=info->p;
            buffer_append(result_607,head_611,tail_613-head_611);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_614=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_615=info->p;
            buffer_append(result_607,head_614,tail_615-head_614);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_616=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_617=info->p;
            buffer_append(result_607,head_616,tail_617-head_616);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_618=0;
            if(            *info->p==40) {
                in_dquort_619=(_Bool)0;
                brace_num_620=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_619=!in_dquort_619;
                    }
                    else if(                    in_dquort_619) {
                        buffer_append_char(asm_fun_name_606,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_620++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_620--;
                        if(                        brace_num_620==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute_pure__")) {
            head_621=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_622=info->p;
            buffer_append(result_607,head_621,tail_622-head_621);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_623=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_624=info->p;
            buffer_append(result_607,head_623,tail_624-head_623);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_625=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_626=info->p;
            buffer_append(result_607,head_625,tail_626-head_625);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_627=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_628=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_628++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_628--;
                        if(                        nest_628==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_629=info->p;
            buffer_append(result_607,head_627,tail_629-head_627);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_630=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_631=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_631++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_631--;
                        if(                        nest_631==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_632=info->p;
            buffer_append(result_607,head_630,tail_632-head_630);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_633=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_634=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_634++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_634--;
                        if(                        nest_634==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_635=info->p;
            buffer_append(result_607,head_633,tail_635-head_633);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_636=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_637=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_637++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_637--;
                        if(                        nest_637==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_638=info->p;
            buffer_append(result_607,head_636,tail_638-head_636);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_639=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_640=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_640++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_640--;
                        if(                        nest_640==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
            tail_641=info->p;
            buffer_append(result_607,head_639,tail_641-head_639);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_642=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_643=info->p;
            buffer_append(result_607,head_642,tail_643-head_642);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_644=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_645=info->p;
            buffer_append(result_607,head_644,tail_645-head_644);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_646=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_647=info->p;
            buffer_append(result_607,head_646,tail_647-head_646);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_648=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_649=info->p;
            buffer_append(result_607,head_648,tail_649-head_648);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_650=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_651=info->p;
            buffer_append(result_607,head_650,tail_651-head_650);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_652=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_653=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_653++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_653--;
                        if(                        brace_num_653==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_654=info->p;
            buffer_append(result_607,head_652,tail_654-head_652);
        }
        else {
            break;
        }
    }
    __result_obj__328 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value421=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1191, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_606)),(char*)come_increment_ref_count(buffer_to_string(result_607))))));
    come_call_finalizer3(asm_fun_name_606,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_607,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value421,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__328,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__328;
}

static void tuple2$2char$phchar$ph_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_clone(struct tuple2$2char$phchar$ph* self){
struct tuple2$2char$phchar$ph* __result_obj__325;
void* __right_value417 = (void*)0;
struct tuple2$2char$phchar$ph* result_655;
void* __right_value418 = (void*)0;
char* __dec_obj98;
void* __right_value419 = (void*)0;
char* __dec_obj99;
struct tuple2$2char$phchar$ph* __result_obj__326;
    if(    self==(void*)0) {
        __result_obj__325 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__325,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__325;
    }
    result_655=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj98=result_655->v1;
        result_655->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj99=result_655->v2;
        result_655->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__326 = come_increment_ref_count(result_655);
    come_call_finalizer3(result_655,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__326,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_656;
    result_656=0;
    result_656+=int_get_hash_key(((int)self->v1));
    result_656+=int_get_hash_key(((int)self->v2));
    return result_656;
}

static _Bool tuple2$2char$phchar$ph_equals(struct tuple2$2char$phchar$ph* left, struct tuple2$2char$phchar$ph* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phchar$ph* tuple2$2char$phchar$ph_initialize(struct tuple2$2char$phchar$ph* self, char* v1, char* v2){
char* __dec_obj100;
char* __dec_obj101;
struct tuple2$2char$phchar$ph* __result_obj__327;
    __dec_obj100=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj101=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__327 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__327,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__327;
}

static void tuple2$2char$phchar$ph$p_finalize(struct tuple2$2char$phchar$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2char$phchar$ph* parse_attribute(struct sInfo* info){
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct buffer* asm_fun_name_657;
void* __right_value424 = (void*)0;
char* attribute_658;
int nest_659;
int nest_660;
int nest_661;
int nest_662;
int nest_663;
void* __right_value425 = (void*)0;
char* __dec_obj102;
int len_664;
_Bool in_dquort_665;
int brace_num_666;
int brace_num_667;
void* __right_value426 = (void*)0;
void* __right_value427 = (void*)0;
void* __right_value428 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__329;
    asm_fun_name_657=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1196, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
    attribute_658=(char*)come_increment_ref_count(xsprintf(""));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute_pure__")) {
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_659=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_659++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_659--;
                        if(                        nest_659==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_660=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_660++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_660--;
                        if(                        nest_660==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_661=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_661++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_661--;
                        if(                        nest_661==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_662=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_662++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_662--;
                        if(                        nest_662==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_663=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_663++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_663--;
                        if(                        nest_663==0) {
                            break;
                        }
                    }
                    else if(                    *info->p==0) {
                        break;
                    }
                    else {
                        info->p++;
                    }
                }
            }
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__attribute__")) {
            __dec_obj102=attribute_658;
            attribute_658=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_664=0;
            if(            *info->p==40) {
                in_dquort_665=(_Bool)0;
                brace_num_666=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_665=!in_dquort_665;
                    }
                    else if(                    in_dquort_665) {
                        buffer_append_char(asm_fun_name_657,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_666++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_666--;
                        if(                        brace_num_666==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_667=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_667++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_667--;
                        if(                        brace_num_667==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
        }
        else {
            break;
        }
    }
    __result_obj__329 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value428=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1465, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_657)),(char*)come_increment_ref_count(attribute_658)))));
    come_call_finalizer3(asm_fun_name_657,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_658 = come_decrement_ref_count2(attribute_658, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value428,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__329,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__329;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value429 = (void*)0;
char* __dec_obj103;
char* head_668;
int head_sline_669;
void* __right_value430 = (void*)0;
char* buf_670;
void* __right_value431 = (void*)0;
struct sNode* node_671;
_Bool Value_672;
    while(*info->p) {
        __dec_obj103=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_668=info->p;
        head_sline_669=info->sline;
        buf_670=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_670 = come_decrement_ref_count2(buf_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_671=(struct sNode*)come_increment_ref_count(top_level_v99(buf_670,head_668,head_sline_669,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_671!=((void*)0)) {
            Value_672=node_compile(node_671,info);
            if(            !Value_672) {
                printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                exit(2);
            }
            else {
            }
        }
        parse_sharp_v5(info);
        skip_spaces_and_lf(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_670 = come_decrement_ref_count2(buf_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_670 = come_decrement_ref_count2(buf_670, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_671) ? node_671 = come_decrement_ref_count2(node_671, ((struct sNode*)node_671)->finalize, ((struct sNode*)node_671)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value432 = (void*)0;
char* name_673;
void* __right_value433 = (void*)0;
void* __right_value434 = (void*)0;
void* __right_value435 = (void*)0;
struct sType* result_type_674;
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
void* __right_value459 = (void*)0;
void* __right_value460 = (void*)0;
void* __right_value461 = (void*)0;
void* __right_value462 = (void*)0;
struct sType* __list_values1___675[9];
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
struct list$1sType$ph* param_types_682;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
char* __list_values2___683[9];
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
struct list$1char$ph* param_names_687;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
struct list$1char$ph* param_default_parametors_688;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
struct sFun* main_fun_689;
void* __right_value495 = (void*)0;
void* __right_value496 = (void*)0;
char* name_711;
void* __right_value497 = (void*)0;
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct sType* result_type_712;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
struct sType* __list_values3___713[1];
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
struct list$1sType$ph* param_types_714;
void* __right_value505 = (void*)0;
char* __list_values4___715[1];
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
struct list$1char$ph* param_names_716;
void* __right_value508 = (void*)0;
void* __right_value509 = (void*)0;
struct list$1char$ph* param_default_parametors_717;
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct sFun* main_fun_718;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
char* name_719;
void* __right_value516 = (void*)0;
void* __right_value517 = (void*)0;
void* __right_value518 = (void*)0;
struct sType* result_type_720;
void* __right_value519 = (void*)0;
void* __right_value520 = (void*)0;
void* __right_value521 = (void*)0;
void* __right_value522 = (void*)0;
void* __right_value523 = (void*)0;
void* __right_value524 = (void*)0;
void* __right_value525 = (void*)0;
void* __right_value526 = (void*)0;
void* __right_value527 = (void*)0;
void* __right_value528 = (void*)0;
void* __right_value529 = (void*)0;
void* __right_value530 = (void*)0;
void* __right_value531 = (void*)0;
void* __right_value532 = (void*)0;
void* __right_value533 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
void* __right_value538 = (void*)0;
void* __right_value539 = (void*)0;
struct sType* __list_values5___721[7];
void* __right_value540 = (void*)0;
void* __right_value541 = (void*)0;
struct list$1sType$ph* param_types_722;
void* __right_value542 = (void*)0;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
void* __right_value548 = (void*)0;
char* __list_values6___723[7];
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct list$1char$ph* param_names_724;
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1char$ph* param_default_parametors_725;
void* __right_value553 = (void*)0;
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
void* __right_value556 = (void*)0;
struct sFun* main_fun_726;
void* __right_value557 = (void*)0;
void* __right_value558 = (void*)0;
char* name_727;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sType* result_type_728;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
void* __right_value567 = (void*)0;
void* __right_value568 = (void*)0;
void* __right_value569 = (void*)0;
void* __right_value570 = (void*)0;
void* __right_value571 = (void*)0;
void* __right_value572 = (void*)0;
void* __right_value573 = (void*)0;
void* __right_value574 = (void*)0;
void* __right_value575 = (void*)0;
void* __right_value576 = (void*)0;
struct sType* __list_values7___729[5];
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
struct list$1sType$ph* param_types_730;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
char* __list_values8___731[5];
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
struct list$1char$ph* param_names_732;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct list$1char$ph* param_default_parametors_733;
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
struct sFun* main_fun_734;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
char* name_735;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
struct sType* result_type_736;
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
void* __right_value599 = (void*)0;
struct sType* __list_values9___737[1];
void* __right_value600 = (void*)0;
void* __right_value601 = (void*)0;
struct list$1sType$ph* param_types_738;
void* __right_value602 = (void*)0;
char* __list_values10___739[1];
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct list$1char$ph* param_names_740;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
struct list$1char$ph* param_default_parametors_741;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
void* __right_value610 = (void*)0;
struct sFun* main_fun_742;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
char* name_743;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
struct sType* result_type_744;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
void* __right_value627 = (void*)0;
struct sType* __list_values11___745[4];
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
struct list$1sType$ph* param_types_746;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
char* __list_values12___747[4];
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1char$ph* param_names_748;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
struct list$1char$ph* param_default_parametors_749;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sFun* main_fun_750;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
char* name_751;
void* __right_value647 = (void*)0;
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct sType* result_type_752;
void* __right_value650 = (void*)0;
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sType* __list_values13___753[3];
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
struct list$1sType$ph* param_types_754;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
char* __list_values14___755[3];
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
struct list$1char$ph* param_names_756;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
struct list$1char$ph* param_default_parametors_757;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
struct sFun* main_fun_758;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
char* name_759;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
void* __right_value676 = (void*)0;
struct sType* result_type_760;
void* __right_value677 = (void*)0;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
struct sType* __list_values15___761[1];
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
struct list$1sType$ph* param_types_762;
void* __right_value682 = (void*)0;
char* __list_values16___763[1];
void* __right_value683 = (void*)0;
void* __right_value684 = (void*)0;
struct list$1char$ph* param_names_764;
void* __right_value685 = (void*)0;
void* __right_value686 = (void*)0;
struct list$1char$ph* param_default_parametors_765;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
struct sFun* main_fun_766;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
char* name_767;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
void* __right_value695 = (void*)0;
struct sType* result_type_768;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
struct sType* __list_values17___769[3];
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct list$1sType$ph* param_types_770;
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
void* __right_value709 = (void*)0;
char* __list_values18___771[3];
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
struct list$1char$ph* param_names_772;
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* param_default_parametors_773;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
struct sFun* main_fun_774;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
char* name_775;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
void* __right_value722 = (void*)0;
struct sType* result_type_776;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct list$1sType$ph* param_types_777;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
struct list$1char$ph* param_names_778;
void* __right_value727 = (void*)0;
void* __right_value728 = (void*)0;
struct list$1char$ph* param_default_parametors_779;
void* __right_value729 = (void*)0;
void* __right_value730 = (void*)0;
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct sFun* main_fun_780;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
char* name_781;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
struct sType* result_type_782;
void* __right_value738 = (void*)0;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
struct sType* __list_values19___783[4];
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
struct list$1sType$ph* param_types_784;
void* __right_value752 = (void*)0;
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
void* __right_value755 = (void*)0;
char* __list_values20___785[4];
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
struct list$1char$ph* param_names_786;
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1char$ph* param_default_parametors_787;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
struct sFun* main_fun_788;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
char* name_789;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
void* __right_value768 = (void*)0;
struct sType* result_type_790;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct list$1sType$ph* param_types_791;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct list$1char$ph* param_names_792;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct list$1char$ph* param_default_parametors_793;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
struct sFun* fun_794;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
char* name_795;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
void* __right_value783 = (void*)0;
struct sType* result_type_796;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct list$1sType$ph* param_types_797;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
struct list$1char$ph* param_names_798;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
struct list$1char$ph* param_default_parametors_799;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
struct sFun* fun_800;
void* __right_value794 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_673=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_674=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1521, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_682=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___675[0]=((struct sType*)(__right_value438=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___675[1]=((struct sType*)(__right_value441=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___675[2]=((struct sType*)(__right_value444=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___675[3]=((struct sType*)(__right_value447=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___675[4]=((struct sType*)(__right_value450=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___675[5]=((struct sType*)(__right_value453=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___675[6]=((struct sType*)(__right_value456=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___675[7]=((struct sType*)(__right_value459=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___675[8]=((struct sType*)(__right_value462=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1522, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),9,__list_values1___675)));
        come_call_finalizer3(__right_value438,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value441,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value444,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value447,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value450,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value453,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value456,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value459,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value462,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_687=(struct list$1char$ph*)come_increment_ref_count((__list_values2___683[0]=((char*)(__right_value469=__builtin_string("count"))),
__list_values2___683[1]=((char*)(__right_value470=__builtin_string("size"))),
__list_values2___683[2]=((char*)(__right_value471=__builtin_string("sname"))),
__list_values2___683[3]=((char*)(__right_value472=__builtin_string("sline"))),
__list_values2___683[4]=((char*)(__right_value473=__builtin_string("class_name"))),
__list_values2___683[5]=((char*)(__right_value474=__builtin_string("finalizer_fun"))),
__list_values2___683[6]=((char*)(__right_value475=__builtin_string("cloner_fun"))),
__list_values2___683[7]=((char*)(__right_value476=__builtin_string("get_hash_key_fun"))),
__list_values2___683[8]=((char*)(__right_value477=__builtin_string("equaler_fun"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1523, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),9,__list_values2___683)));
        (__right_value469 = come_decrement_ref_count2(__right_value469, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value470 = come_decrement_ref_count2(__right_value470, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value471 = come_decrement_ref_count2(__right_value471, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value472 = come_decrement_ref_count2(__right_value472, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value473 = come_decrement_ref_count2(__right_value473, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value474 = come_decrement_ref_count2(__right_value474, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value475 = come_decrement_ref_count2(__right_value475, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value476 = come_decrement_ref_count2(__right_value476, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value477 = come_decrement_ref_count2(__right_value477, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_688=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_688,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_688,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_688,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_688,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_688,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_689=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1530, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_673),(struct sType*)come_increment_ref_count(result_type_674),(struct list$1sType$ph*)come_increment_ref_count(param_types_682),(struct list$1char$ph*)come_increment_ref_count(param_names_687),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_688),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_673)),(struct sFun*)come_increment_ref_count(main_fun_689));
        (name_673 = come_decrement_ref_count2(name_673, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_674,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_682,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_687,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_688,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_689,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_711=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_712=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1539, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_714=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___713[0]=((struct sType*)(__right_value502=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1540, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1540, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values3___713)));
        come_call_finalizer3(__right_value502,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_716=(struct list$1char$ph*)come_increment_ref_count((__list_values4___715[0]=((char*)(__right_value505=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1541, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values4___715)));
        (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_717=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1542, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_718=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1543, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_711),(struct sType*)come_increment_ref_count(result_type_712),(struct list$1sType$ph*)come_increment_ref_count(param_types_714),(struct list$1char$ph*)come_increment_ref_count(param_names_716),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_717),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_711)),(struct sFun*)come_increment_ref_count(main_fun_718));
        (name_711 = come_decrement_ref_count2(name_711, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_712,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_714,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_716,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_717,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_718,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_719=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_720=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1552, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_722=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___721[0]=((struct sType*)(__right_value521=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___721[1]=((struct sType*)(__right_value524=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___721[2]=((struct sType*)(__right_value527=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___721[3]=((struct sType*)(__right_value530=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___721[4]=((struct sType*)(__right_value533=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values5___721[5]=((struct sType*)(__right_value536=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values5___721[6]=((struct sType*)(__right_value539=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1553, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),7,__list_values5___721)));
        come_call_finalizer3(__right_value521,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value524,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value527,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value530,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value533,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value536,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value539,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_724=(struct list$1char$ph*)come_increment_ref_count((__list_values6___723[0]=((char*)(__right_value542=__builtin_string("fun"))),
__list_values6___723[1]=((char*)(__right_value543=__builtin_string("mem"))),
__list_values6___723[2]=((char*)(__right_value544=__builtin_string("protocol_fun"))),
__list_values6___723[3]=((char*)(__right_value545=__builtin_string("protocol_obj"))),
__list_values6___723[4]=((char*)(__right_value546=__builtin_string("call_finalizer_only"))),
__list_values6___723[5]=((char*)(__right_value547=__builtin_string("no_decrement"))),
__list_values6___723[6]=((char*)(__right_value548=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1554, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),7,__list_values6___723)));
        (__right_value542 = come_decrement_ref_count2(__right_value542, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value543 = come_decrement_ref_count2(__right_value543, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value544 = come_decrement_ref_count2(__right_value544, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value545 = come_decrement_ref_count2(__right_value545, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value546 = come_decrement_ref_count2(__right_value546, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value547 = come_decrement_ref_count2(__right_value547, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value548 = come_decrement_ref_count2(__right_value548, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_725=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1555, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_726=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1556, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_719),(struct sType*)come_increment_ref_count(result_type_720),(struct list$1sType$ph*)come_increment_ref_count(param_types_722),(struct list$1char$ph*)come_increment_ref_count(param_names_724),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_725),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_719)),(struct sFun*)come_increment_ref_count(main_fun_726));
        (name_719 = come_decrement_ref_count2(name_719, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_720,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_722,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_724,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_725,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_726,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_727=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_728=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1565, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_730=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___729[0]=((struct sType*)(__right_value564=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___729[1]=((struct sType*)(__right_value567=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___729[2]=((struct sType*)(__right_value570=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___729[3]=((struct sType*)(__right_value573=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info))),
__list_values7___729[4]=((struct sType*)(__right_value576=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1566, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),5,__list_values7___729)));
        come_call_finalizer3(__right_value564,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value567,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value570,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value573,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value576,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_732=(struct list$1char$ph*)come_increment_ref_count((__list_values8___731[0]=((char*)(__right_value579=__builtin_string("mem"))),
__list_values8___731[1]=((char*)(__right_value580=__builtin_string("protocol_fun"))),
__list_values8___731[2]=((char*)(__right_value581=__builtin_string("protocol_obj"))),
__list_values8___731[3]=((char*)(__right_value582=__builtin_string("no_decrement"))),
__list_values8___731[4]=((char*)(__right_value583=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1567, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),5,__list_values8___731)));
        (__right_value579 = come_decrement_ref_count2(__right_value579, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value580 = come_decrement_ref_count2(__right_value580, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value581 = come_decrement_ref_count2(__right_value581, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value582 = come_decrement_ref_count2(__right_value582, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value583 = come_decrement_ref_count2(__right_value583, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_733=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1568, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_734=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1569, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_727),(struct sType*)come_increment_ref_count(result_type_728),(struct list$1sType$ph*)come_increment_ref_count(param_types_730),(struct list$1char$ph*)come_increment_ref_count(param_names_732),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_733),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_727)),(struct sFun*)come_increment_ref_count(main_fun_734));
        (name_727 = come_decrement_ref_count2(name_727, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_728,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_730,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_732,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_733,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_734,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_735=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_736=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1578, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_738=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___737[0]=((struct sType*)(__right_value599=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1579, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values9___737)));
        come_call_finalizer3(__right_value599,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_740=(struct list$1char$ph*)come_increment_ref_count((__list_values10___739[0]=((char*)(__right_value602=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1580, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values10___739)));
        (__right_value602 = come_decrement_ref_count2(__right_value602, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_741=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1581, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_742=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1582, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_735),(struct sType*)come_increment_ref_count(result_type_736),(struct list$1sType$ph*)come_increment_ref_count(param_types_738),(struct list$1char$ph*)come_increment_ref_count(param_names_740),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_741),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_735)),(struct sFun*)come_increment_ref_count(main_fun_742));
        (name_735 = come_decrement_ref_count2(name_735, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_736,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_738,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_740,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_741,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_742,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_743=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_744=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1591, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_746=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___745[0]=((struct sType*)(__right_value618=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values11___745[1]=((struct sType*)(__right_value621=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values11___745[2]=((struct sType*)(__right_value624=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values11___745[3]=((struct sType*)(__right_value627=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1592, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values11___745)));
        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value624,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value627,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_748=(struct list$1char$ph*)come_increment_ref_count((__list_values12___747[0]=((char*)(__right_value630=__builtin_string("block"))),
__list_values12___747[1]=((char*)(__right_value631=__builtin_string("sname"))),
__list_values12___747[2]=((char*)(__right_value632=__builtin_string("sline"))),
__list_values12___747[3]=((char*)(__right_value633=__builtin_string("class_name"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1593, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values12___747)));
        (__right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value632 = come_decrement_ref_count2(__right_value632, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value633 = come_decrement_ref_count2(__right_value633, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_749=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1594, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_749,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_749,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_749,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_749,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_750=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1599, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_743),(struct sType*)come_increment_ref_count(result_type_744),(struct list$1sType$ph*)come_increment_ref_count(param_types_746),(struct list$1char$ph*)come_increment_ref_count(param_names_748),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_749),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_743)),(struct sFun*)come_increment_ref_count(main_fun_750));
        (name_743 = come_decrement_ref_count2(name_743, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_744,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_746,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_748,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_749,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_750,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_751=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_752=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1608, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_754=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___753[0]=((struct sType*)(__right_value652=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values13___753[1]=((struct sType*)(__right_value655=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values13___753[2]=((struct sType*)(__right_value658=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1609, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values13___753)));
        come_call_finalizer3(__right_value652,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value655,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value658,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_756=(struct list$1char$ph*)come_increment_ref_count((__list_values14___755[0]=((char*)(__right_value661=__builtin_string("b"))),
__list_values14___755[1]=((char*)(__right_value662=__builtin_string("c"))),
__list_values14___755[2]=((char*)(__right_value663=__builtin_string("len"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1610, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values14___755)));
        (__right_value661 = come_decrement_ref_count2(__right_value661, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value662 = come_decrement_ref_count2(__right_value662, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value663 = come_decrement_ref_count2(__right_value663, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_757=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1611, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_758=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1612, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_751),(struct sType*)come_increment_ref_count(result_type_752),(struct list$1sType$ph*)come_increment_ref_count(param_types_754),(struct list$1char$ph*)come_increment_ref_count(param_names_756),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_757),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_751)),(struct sFun*)come_increment_ref_count(main_fun_758));
        (name_751 = come_decrement_ref_count2(name_751, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_752,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_754,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_756,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_757,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_758,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_759=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_760=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1621, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        param_types_762=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___761[0]=((struct sType*)(__right_value679=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1622, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values15___761)));
        come_call_finalizer3(__right_value679,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_764=(struct list$1char$ph*)come_increment_ref_count((__list_values16___763[0]=((char*)(__right_value682=__builtin_string("str"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1623, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values16___763)));
        (__right_value682 = come_decrement_ref_count2(__right_value682, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_765=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1624, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_766=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1625, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_759),(struct sType*)come_increment_ref_count(result_type_760),(struct list$1sType$ph*)come_increment_ref_count(param_types_762),(struct list$1char$ph*)come_increment_ref_count(param_names_764),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_765),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_759)),(struct sFun*)come_increment_ref_count(main_fun_766));
        (name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_760,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_762,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_764,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_765,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_766,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_767=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_768=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1634, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_770=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___769[0]=((struct sType*)(__right_value698=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values17___769[1]=((struct sType*)(__right_value701=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values17___769[2]=((struct sType*)(__right_value704=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1635, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values17___769)));
        come_call_finalizer3(__right_value698,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value701,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value704,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_772=(struct list$1char$ph*)come_increment_ref_count((__list_values18___771[0]=((char*)(__right_value707=xsprintf("come_malloc"))),
__list_values18___771[1]=((char*)(__right_value708=xsprintf("come_debug"))),
__list_values18___771[2]=((char*)(__right_value709=xsprintf("come_gc"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1636, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values18___771)));
        (__right_value707 = come_decrement_ref_count2(__right_value707, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value708 = come_decrement_ref_count2(__right_value708, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value709 = come_decrement_ref_count2(__right_value709, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_773=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1637, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_773,((void*)0));
        main_fun_774=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1639, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_767),(struct sType*)come_increment_ref_count(result_type_768),(struct list$1sType$ph*)come_increment_ref_count(param_types_770),(struct list$1char$ph*)come_increment_ref_count(param_names_772),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_773),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_767)),(struct sFun*)come_increment_ref_count(main_fun_774));
        (name_767 = come_decrement_ref_count2(name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_770,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_772,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_773,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_774,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_775=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_776=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1648, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_777=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1649, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_778=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1650, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_779=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1651, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_780=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1652, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_775),(struct sType*)come_increment_ref_count(result_type_776),(struct list$1sType$ph*)come_increment_ref_count(param_types_777),(struct list$1char$ph*)come_increment_ref_count(param_names_778),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_779),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_775)),(struct sFun*)come_increment_ref_count(main_fun_780));
        (name_775 = come_decrement_ref_count2(name_775, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_776,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_777,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_778,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_779,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_780,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_781=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_782=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1661, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_784=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___783[0]=((struct sType*)(__right_value740=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values19___783[1]=((struct sType*)(__right_value743=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values19___783[2]=((struct sType*)(__right_value746=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values19___783[3]=((struct sType*)(__right_value749=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1662, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values19___783)));
        come_call_finalizer3(__right_value740,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value743,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value746,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value749,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_786=(struct list$1char$ph*)come_increment_ref_count((__list_values20___785[0]=((char*)(__right_value752=__builtin_string("mem"))),
__list_values20___785[1]=((char*)(__right_value753=__builtin_string("sname"))),
__list_values20___785[2]=((char*)(__right_value754=__builtin_string("sline"))),
__list_values20___785[3]=((char*)(__right_value755=__builtin_string("id"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1663, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values20___785)));
        (__right_value752 = come_decrement_ref_count2(__right_value752, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value753 = come_decrement_ref_count2(__right_value753, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value754 = come_decrement_ref_count2(__right_value754, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_787=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1664, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_788=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1665, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_781),(struct sType*)come_increment_ref_count(result_type_782),(struct list$1sType$ph*)come_increment_ref_count(param_types_784),(struct list$1char$ph*)come_increment_ref_count(param_names_786),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_787),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_781)),(struct sFun*)come_increment_ref_count(main_fun_788));
        (name_781 = come_decrement_ref_count2(name_781, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_782,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_784,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_786,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_787,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_788,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_789=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_790=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1674, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_791=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1675, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_792=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1676, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_793=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1677, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_794=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1678, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_789),(struct sType*)come_increment_ref_count(result_type_790),(struct list$1sType$ph*)come_increment_ref_count(param_types_791),(struct list$1char$ph*)come_increment_ref_count(param_names_792),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_793),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_789)),(struct sFun*)come_increment_ref_count(fun_794));
        (name_789 = come_decrement_ref_count2(name_789, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_790,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_791,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_792,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_793,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_794,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_795=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_796=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1687, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_797=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1688, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_798=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1689, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_799=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1690, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_800=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1691, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_795),(struct sType*)come_increment_ref_count(result_type_796),(struct list$1sType$ph*)come_increment_ref_count(param_types_797),(struct list$1char$ph*)come_increment_ref_count(param_names_798),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_799),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_795)),(struct sFun*)come_increment_ref_count(fun_800));
        (name_795 = come_decrement_ref_count2(name_795, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_796,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_797,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_798,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_799,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_800,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_676;
struct list$1sType$ph* __result_obj__331;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_676=0;    i_676<num_value;    i_676++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_676]));
    }
    __result_obj__331 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__331,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__331;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value463 = (void*)0;
struct list_item$1sType$ph* litem_677;
struct sType* __dec_obj104;
void* __right_value464 = (void*)0;
struct list_item$1sType$ph* litem_678;
struct sType* __dec_obj105;
void* __right_value465 = (void*)0;
struct list_item$1sType$ph* litem_679;
struct sType* __dec_obj106;
struct list$1sType$ph* __result_obj__330;
    if(    self->len==0) {
        litem_677=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value463=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1493, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_677->prev=((void*)0);
        litem_677->next=((void*)0);
        __dec_obj104=litem_677->item;
        litem_677->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj104,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_677;
        self->head=litem_677;
    }
    else if(    self->len==1) {
        litem_678=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value464=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1503, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_678->prev=self->head;
        litem_678->next=((void*)0);
        __dec_obj105=litem_678->item;
        litem_678->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj105,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_678;
        self->head->next=litem_678;
    }
    else {
        litem_679=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value465=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1513, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_679->prev=self->tail;
        litem_679->next=((void*)0);
        __dec_obj106=litem_679->item;
        litem_679->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj106,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_679;
        self->tail=litem_679;
    }
    self->len++;
    __result_obj__330 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__330;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__332;
void* __right_value466 = (void*)0;
struct list$1sType$ph* result_680;
struct list$1sType$ph* __result_obj__333;
    if(    self==(void*)0) {
        __result_obj__332 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__332,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__332;
    }
    result_680=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_680->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_680->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_680->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_680->it=self->it;
    }
    __result_obj__333 = come_increment_ref_count(result_680);
    come_call_finalizer3(result_680,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_681;
    result_681=0;
    result_681+=int_get_hash_key(((int)self->head));
    result_681+=int_get_hash_key(((int)self->tail));
    result_681+=int_get_hash_key(((int)self->len));
    result_681+=int_get_hash_key(((int)self->it));
    return result_681;
}

static _Bool list$1sType$ph_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    if(    !list_item$1sType$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1sType$ph_equals(struct list_item$1sType$ph* left, struct list_item$1sType$ph* right){
    if(    !sType_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1sType$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct list$1char$ph* list$1char$ph_initialize_with_values(struct list$1char$ph* self, int num_value, char** values){
int i_684;
struct list$1char$ph* __result_obj__334;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_684=0;    i_684<num_value;    i_684++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_684]));
    }
    __result_obj__334 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__334,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__334;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__335;
void* __right_value478 = (void*)0;
struct list$1char$ph* result_685;
struct list$1char$ph* __result_obj__336;
    if(    self==(void*)0) {
        __result_obj__335 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__335,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__335;
    }
    result_685=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_685->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_685->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_685->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_685->it=self->it;
    }
    __result_obj__336 = come_increment_ref_count(result_685);
    come_call_finalizer3(result_685,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__336,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__336;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_686;
    result_686=0;
    result_686+=int_get_hash_key(((int)self->head));
    result_686+=int_get_hash_key(((int)self->tail));
    result_686+=int_get_hash_key(((int)self->len));
    result_686+=int_get_hash_key(((int)self->it));
    return result_686;
}

static _Bool list$1char$ph_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    if(    !list_item$1char$ph_equals(left->head,right->head)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->tail,right->tail)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->len,right->len)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->it,right->it)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool list_item$1char$ph_equals(struct list_item$1char$ph* left, struct list_item$1char$ph* right){
    if(    !string_equals(left->item,right->item)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->prev,right->prev)) {
        return (_Bool)0;
    }
    if(    !list_item$1char$ph_equals(left->next,right->next)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_707;
unsigned int it_708;
_Bool same_key_exist_709;
char* it2_710;
struct map$2char$phsFun$ph* __result_obj__347;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph$p_rehash(self);
    }
    hash_707=string_get_hash_key(((char*)key))%self->size;
    it_708=hash_707;
    while((_Bool)1) {
        if(        self->item_existance[it_708]) {
            if(            string_equals(self->keys[it_708],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_708]);
                    (self->keys[it_708] = come_decrement_ref_count2(self->keys[it_708], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_708]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_708]);
                    self->keys[it_708]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_708],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_708]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_708]=item;
                }
                break;
            }
            it_708++;
            if(            it_708>=self->size) {
                it_708=0;
            }
            else if(            it_708==hash_707) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_708]=(_Bool)1;
            if(            1) {
                self->keys[it_708]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_708]=key;
            }
            if(            1) {
                self->items[it_708]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_708]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_709=(_Bool)0;
    for(    it2_710=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_710=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_710,key)) {
            same_key_exist_709=(_Bool)1;
        }
    }
    if(    !same_key_exist_709) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__347 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__347;
}

static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self){
int size_690;
void* __right_value490 = (void*)0;
char** keys_691;
void* __right_value491 = (void*)0;
struct sFun** items_692;
void* __right_value492 = (void*)0;
_Bool* item_existance_693;
int len_694;
char* it_697;
struct sFun* default_value_700;
void* __right_value493 = (void*)0;
struct sFun* it2_701;
unsigned int hash_704;
int n_705;
struct sFun* default_value_706;
void* __right_value494 = (void*)0;
default_value_700 = (void*)0;
default_value_706 = (void*)0;
    size_690=self->size*10;
    keys_691=(char**)come_increment_ref_count(((char**)(__right_value490=(char**)come_calloc(1, sizeof(char*)*(1*(size_690)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_692=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value491=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_690)), "./comelang.h", 2939, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_693=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value492=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_690)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_694=0;
    for(    it_697=map$2char$phsFun$ph$p_begin(self);    !map$2char$phsFun$ph$p_end(self);    it_697=map$2char$phsFun$ph$p_next(self)    ){
        memset(&default_value_700,0,sizeof(struct sFun*));
        it2_701=((struct sFun*)(__right_value493=map$2char$phsFun$ph$p_at(self,it_697,(struct sFun*)come_increment_ref_count(default_value_700))));
        come_call_finalizer3(__right_value493,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_704=string_get_hash_key(((char*)it_697))%size_690;
        n_705=hash_704;
        while((_Bool)1) {
            if(            item_existance_693[n_705]) {
                n_705++;
                if(                n_705>=size_690) {
                    n_705=0;
                }
                else if(                n_705==hash_704) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_693[n_705]=(_Bool)1;
                keys_691[n_705]=it_697;
                items_692[n_705]=((struct sFun*)(__right_value494=map$2char$phsFun$ph$p_at(self,it_697,(struct sFun*)come_increment_ref_count(default_value_706))));
                come_call_finalizer3(__right_value494,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_694++;
                come_call_finalizer3(default_value_706,sFun_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_706,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_700,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_691;
    self->items=items_692;
    self->item_existance=item_existance_693;
    self->size=size_690;
    self->len=len_694;
}

static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self){
char* result_695;
char* __result_obj__337;
char* __result_obj__338;
char* result_696;
char* __result_obj__339;
result_695 = (void*)0;
result_696 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_695,0,sizeof(char*));
        __result_obj__337 = result_695;
        return __result_obj__337;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__338 = self->key_list->it->item;
        return __result_obj__338;
    }
    memset(&result_696,0,sizeof(char*));
    __result_obj__339 = result_696;
    return __result_obj__339;
}

static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self){
char* result_698;
char* __result_obj__340;
char* __result_obj__341;
char* result_699;
char* __result_obj__342;
result_698 = (void*)0;
result_699 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_698,0,sizeof(char*));
        __result_obj__340 = result_698;
        return __result_obj__340;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__341 = self->key_list->it->item;
        return __result_obj__341;
    }
    memset(&result_699,0,sizeof(char*));
    __result_obj__342 = result_699;
    return __result_obj__342;
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_702;
unsigned int it_703;
struct sFun* __result_obj__343;
struct sFun* __result_obj__344;
struct sFun* __result_obj__345;
struct sFun* __result_obj__346;
    hash_702=string_get_hash_key(((char*)key))%self->size;
    it_703=hash_702;
    while((_Bool)1) {
        if(        self->item_existance[it_703]) {
            if(            string_equals(self->keys[it_703],key)) {
                __result_obj__343 = come_increment_ref_count(self->items[it_703]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__343,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__343;
            }
            it_703++;
            if(            it_703>=self->size) {
                it_703=0;
            }
            else if(            it_703==hash_702) {
                __result_obj__344 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__344,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__344;
            }
        }
        else {
            __result_obj__345 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__345,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__345;
        }
    }
    __result_obj__346 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_801;
_Bool is_type_name_flag_802;
int sline_803;
_Bool define_struct_nobody_804;
char* p_805;
int sline_806;
void* __right_value795 = (void*)0;
char* word_807;
_Bool define_function_pointer_result_function_808;
_Bool define_variable_between_brace_809;
char* p_810;
void* __right_value796 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_811=0;
char* fun_name_812=0;
_Bool err_813=0;
void* __right_value797 = (void*)0;
char* word_814;
_Bool define_function_flag_815;
char* p_816;
void* __right_value798 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_817=0;
char* fun_name_818=0;
_Bool err_819=0;
char* word_820;
void* __right_value799 = (void*)0;
char* __dec_obj107;
void* __right_value800 = (void*)0;
char* __dec_obj108;
char* __dec_obj109;
void* __right_value801 = (void*)0;
char* __dec_obj110;
_Bool define_variable_821;
char* p_822;
void* __right_value802 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* result_type_823=0;
char* fun_name_824=0;
_Bool err_825=0;
void* __right_value803 = (void*)0;
char* word_826;
void* __right_value804 = (void*)0;
char* word_827;
char* p_828;
void* __right_value805 = (void*)0;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
char* word_829;
void* __right_value808 = (void*)0;
char* __dec_obj111;
void* __right_value809 = (void*)0;
char* word_830;
void* __right_value810 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_833=0;
char* Err_834=0;
void* __right_value811 = (void*)0;
char* word_835;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
struct sNode* node_836;
struct sNode* __result_obj__349;
void* __right_value814 = (void*)0;
struct sNode* __result_obj__350;
char* header_head_837;
void* __right_value815 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_838=0;
char* fun_name_839=0;
_Bool err_840=0;
void* __right_value816 = (void*)0;
void* __right_value817 = (void*)0;
struct list$1sType$ph* param_types_841;
void* __right_value818 = (void*)0;
void* __right_value819 = (void*)0;
struct list$1char$ph* param_names_842;
void* __right_value820 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* param_type_843=0;
char* param_name_844=0;
_Bool err_845=0;
void* __right_value821 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_846=0;
char* Err_847=0;
void* __right_value822 = (void*)0;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_849=0;
char* Err_850=0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct list$1sType$ph* param_types2_851;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
struct list$1char$ph* param_names2_852;
void* __right_value829 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* param_type_853=0;
char* param_name_854=0;
_Bool err_855=0;
void* __right_value830 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_856=0;
char* Err_857=0;
void* __right_value831 = (void*)0;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_859=0;
char* Err_860=0;
char* header_tail_861;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
void* __right_value836 = (void*)0;
struct sType* result_type2_862;
struct sType* __dec_obj112;
void* __right_value837 = (void*)0;
struct list$1sType$ph* __dec_obj113;
void* __right_value838 = (void*)0;
struct list$1char$ph* __dec_obj114;
_Bool var_args_863;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
struct list$1char$ph* param_default_parametors_864;
void* __right_value841 = (void*)0;
void* __right_value842 = (void*)0;
void* __right_value843 = (void*)0;
void* __right_value844 = (void*)0;
void* __right_value845 = (void*)0;
struct sFun* fun_865;
void* __right_value846 = (void*)0;
void* __right_value847 = (void*)0;
struct sFun* fun2_869;
void* __right_value848 = (void*)0;
void* __right_value849 = (void*)0;
void* __right_value850 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value899 = (void*)0;
struct sNode* result_870;
struct sNode* __result_obj__379;
void* __right_value900 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_906=0;
char* Err_907=0;
void* __right_value901 = (void*)0;
struct sNode* node_908;
struct sNode* __result_obj__380;
void* __right_value902 = (void*)0;
struct sNode* node_909;
struct sNode* __result_obj__381;
void* __right_value903 = (void*)0;
struct sNode* node_910;
char* source_tail_911;
void* __right_value904 = (void*)0;
void* __right_value905 = (void*)0;
struct buffer* header_912;
struct sNode* __result_obj__382;
void* __right_value906 = (void*)0;
char* buf2_913;
void* __right_value907 = (void*)0;
struct sNode* __result_obj__383;
    info->in_top_level=(_Bool)1;
    source_head_801=info->p;
    is_type_name_flag_802=is_type_name(buf,info);
    sline_803=info->sline;
    define_struct_nobody_804=(_Bool)0;
    {
        p_805=info->p;
        sline_806=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_807=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_804=(_Bool)1;
                }
                (word_807 = come_decrement_ref_count2(word_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_806;
    }
    define_function_pointer_result_function_808=(_Bool)0;
    define_variable_between_brace_809=(_Bool)0;
    if(    is_type_name_flag_802) {
        p_810=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value796=backtrace_parse_type((_Bool)0,info)));
            result_type_811=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_812=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_813=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value796,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_808=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_814=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_814,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_809=(_Bool)1;
                            }
                        }
                        (word_814 = come_decrement_ref_count2(word_814, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_811,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_812 = come_decrement_ref_count2(fun_name_812, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_803;
    }
    define_function_flag_815=(_Bool)0;
    if(    is_type_name_flag_802&&!define_function_pointer_result_function_808&&charp_operator_not_equals(buf,"__typeof__")) {
        p_816=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value798=backtrace_parse_type((_Bool)0,info)));
            result_type_817=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_818=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_819=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value798,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_817,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_818 = come_decrement_ref_count2(fun_name_818, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_820=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj107=word_820;
                word_820=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_820,"extern")) {
                    __dec_obj108=word_820;
                    word_820=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj109=word_820;
                word_820=((void*)0);
                __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_820) {
                if(                is_type_name(word_820,info)) {
                    while(*info->p==42) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==91&&*(info->p+1)==93) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    *info->p==58) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    if(                    xisalnum(*info->p)||*info->p==95) {
                        __dec_obj110=word_820;
                        word_820=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_820)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_802) {
                        define_function_flag_815=(_Bool)1;
                    }
                }
            }
            (word_820 = come_decrement_ref_count2(word_820, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_816;
        info->sline=sline_803;
    }
    define_variable_821=(_Bool)1;
    if(    is_type_name_flag_802&&!define_function_pointer_result_function_808) {
        p_822=info->p;
        info->p=head;
        if(        !is_type_name_flag_802) {
            define_variable_821=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value802=backtrace_parse_type((_Bool)0,info)));
            result_type_823=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_824=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_825=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value802,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_826=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_821=(_Bool)1;
                            }
                        }
                        (word_826 = come_decrement_ref_count2(word_826, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_827=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_827,info)&&*info->p!=40) {
                            define_variable_821=(_Bool)1;
                        }
                    }
                    (word_827 = come_decrement_ref_count2(word_827, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_823,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_824 = come_decrement_ref_count2(fun_name_824, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_821=(_Bool)0;
        }
        else if(        define_variable_821) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_821=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_821=(_Bool)0;
            }
        }
        info->p=p_822;
        info->sline=sline_803;
    }
    else {
        define_variable_821=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_808) {
        p_828=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value805=parse_struct_attribute(info)));
            (__right_value805 = come_decrement_ref_count2(__right_value805, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value806=parse_word(info)));
                (__right_value806 = come_decrement_ref_count2(__right_value806, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_829=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj111=word_829;
                        word_829=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_829,"extends")) {
                            define_variable_821=(_Bool)0;
                        }
                    }
                    (word_829 = come_decrement_ref_count2(word_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_821=(_Bool)0;
        }
        else if(        define_variable_821) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_821=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_821=(_Bool)0;
            }
        }
        info->p=p_828;
        info->sline=sline_803;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_830=(char*)come_increment_ref_count(parse_word(info));
        if(        *info->p==60) {
            info->p++;
            skip_spaces_and_lf(info);
            list$1char$ph$p_reset(info->method_generics_type_names);
            while((_Bool)1) {
                if(                *info->p==62) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else if(                *info->p==44) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(                *info->p==0) {
                    multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value810=err_msg(info,"unexpected source end")));
                    come_exception_var_c17_833=multiple_assign_var21->v1;
                    Err_834=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_834)?(puts(Err_834),exit(0)):(0));
                    come_call_finalizer3(__right_value810,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_834 = come_decrement_ref_count2(Err_834, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_835=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_835)));
                    (word_835 = come_decrement_ref_count2(word_835, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_836=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__349 = come_increment_ref_count(node_836);
            ((node_836) ? node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_830 = come_decrement_ref_count2(word_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__349) ? __result_obj__349 = come_decrement_ref_count2(__result_obj__349, ((struct sNode*)__result_obj__349)->finalize, ((struct sNode*)__result_obj__349)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__349;
            ((node_836) ? node_836 = come_decrement_ref_count2(node_836, ((struct sNode*)node_836)->finalize, ((struct sNode*)node_836)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_830 = come_decrement_ref_count2(word_830, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_804) {
    }
    else if(    define_variable_between_brace_809) {
        info->p=head;
        info->sline=sline_803;
        __result_obj__350 = come_increment_ref_count(((struct sNode*)(__right_value814=parse_global_variable(info))));
        ((__right_value814) ? __right_value814 = come_decrement_ref_count2(__right_value814, ((struct sNode*)__right_value814)->finalize, ((struct sNode*)__right_value814)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__350) ? __result_obj__350 = come_decrement_ref_count2(__result_obj__350, ((struct sNode*)__result_obj__350)->finalize, ((struct sNode*)__result_obj__350)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__350;
    }
    else if(    define_function_pointer_result_function_808) {
        header_head_837=info->p;
        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value815=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_838=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_839=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_840=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value815,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_841=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2015, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            param_names_842=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2016, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value820=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_843=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_844=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_845=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value820,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_845) {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value821=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_846=multiple_assign_var24->v1;
                        Err_847=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_847)?(puts(Err_847),exit(0)):(0));
                        come_call_finalizer3(__right_value821,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_847 = come_decrement_ref_count2(Err_847, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph$p_push_back(param_types_841,(struct sType*)come_increment_ref_count(param_type_843));
                    static int num_function_pointer_result_var_name_a_848=0;
                    list$1char$ph$p_push_back(param_names_842,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_848)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value823=parse_word(info)));
                        (__right_value823 = come_decrement_ref_count2(__right_value823, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_844 = come_decrement_ref_count2(param_name_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value824=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_849=multiple_assign_var25->v1;
                        Err_850=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_850)?(puts(Err_850),exit(0)):(0));
                        come_call_finalizer3(__right_value824,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_850 = come_decrement_ref_count2(Err_850, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_843,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_844 = come_decrement_ref_count2(param_name_844, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_851=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2062, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                param_names2_852=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2063, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value829=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_853=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_854=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_855=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value829,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        !err_855) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value830=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_856=multiple_assign_var27->v1;
                            Err_857=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_857)?(puts(Err_857),exit(0)):(0));
                            come_call_finalizer3(__right_value830,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_857 = come_decrement_ref_count2(Err_857, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph$p_push_back(param_types2_851,(struct sType*)come_increment_ref_count(param_type_853));
                        static int num_function_pointer_result_var_name_b_858=0;
                        list$1char$ph$p_push_back(param_names2_852,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_858)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value832=parse_word(info)));
                            (__right_value832 = come_decrement_ref_count2(__right_value832, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_854 = come_decrement_ref_count2(param_name_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value833=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_859=multiple_assign_var28->v1;
                            Err_860=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_860)?(puts(Err_860),exit(0)):(0));
                            come_call_finalizer3(__right_value833,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_860 = come_decrement_ref_count2(Err_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_853,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_854 = come_decrement_ref_count2(param_name_854, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_861=info->p;
                result_type2_862=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2105, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj112=result_type2_862->mResultType;
                result_type2_862->mResultType=(struct sType*)come_increment_ref_count(result_type_838);
                come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj113=result_type2_862->mParamTypes;
                result_type2_862->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_851));
                come_call_finalizer3(__dec_obj113,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj114=result_type2_862->mParamNames;
                result_type2_862->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_852));
                come_call_finalizer3(__dec_obj114,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_862->mVarArgs=(_Bool)0;
                result_type2_862->mStatic=(_Bool)0;
                var_args_863=(_Bool)0;
                param_default_parametors_864=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2115, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_865=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2117, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sType*)come_increment_ref_count(result_type2_862),(struct list$1sType$ph*)come_increment_ref_count(param_types_841),(struct list$1char$ph*)come_increment_ref_count(param_names_842),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_864),(_Bool)1,var_args_863,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_869=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value846=__builtin_string(fun_name_839)))));
                (__right_value846 = come_decrement_ref_count2(__right_value846, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_869==((void*)0)||fun2_869->mExternal) {
                    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_839)),(struct sFun*)come_increment_ref_count(fun_865));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2130, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value850=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2130, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_865),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_870=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value850,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__379 = come_increment_ref_count(result_870);
                come_call_finalizer3(param_types2_851,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_852,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_862,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_864,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_865,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_869,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_870) ? result_870 = come_decrement_ref_count2(result_870, ((struct sNode*)result_870)->finalize, ((struct sNode*)result_870)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(param_types_841,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_842,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_838,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__379) ? __result_obj__379 = come_decrement_ref_count2(__result_obj__379, ((struct sNode*)__result_obj__379)->finalize, ((struct sNode*)__result_obj__379)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__379;
                come_call_finalizer3(param_types2_851,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_852,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_862,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_864,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_865,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_869,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_870) ? result_870 = come_decrement_ref_count2(result_870, ((struct sNode*)result_870)->finalize, ((struct sNode*)result_870)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value900=err_msg(info,"require (")));
                come_exception_var_c22_906=multiple_assign_var29->v1;
                Err_907=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_907)?(puts(Err_907),exit(0)):(0));
                come_call_finalizer3(__right_value900,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_907 = come_decrement_ref_count2(Err_907, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_841,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_842,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_838,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_839 = come_decrement_ref_count2(fun_name_839, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_803;
        node_908=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__380 = come_increment_ref_count(node_908);
        ((node_908) ? node_908 = come_decrement_ref_count2(node_908, ((struct sNode*)node_908)->finalize, ((struct sNode*)node_908)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__380) ? __result_obj__380 = come_decrement_ref_count2(__result_obj__380, ((struct sNode*)__result_obj__380)->finalize, ((struct sNode*)__result_obj__380)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__380;
        ((node_908) ? node_908 = come_decrement_ref_count2(node_908, ((struct sNode*)node_908)->finalize, ((struct sNode*)node_908)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_815) {
        info->p=head;
        info->sline=sline_803;
        node_909=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__381 = come_increment_ref_count(node_909);
        ((node_909) ? node_909 = come_decrement_ref_count2(node_909, ((struct sNode*)node_909)->finalize, ((struct sNode*)node_909)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__381;
        ((node_909) ? node_909 = come_decrement_ref_count2(node_909, ((struct sNode*)node_909)->finalize, ((struct sNode*)node_909)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_821) {
        info->p=head;
        info->sline=sline_803;
        node_910=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_911=info->p;
        header_912=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2164, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append(header_912,source_head_801,source_tail_911-source_head_801);
        __result_obj__382 = come_increment_ref_count(node_910);
        ((node_910) ? node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_912,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count2(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__382;
        ((node_910) ? node_910 = come_decrement_ref_count2(node_910, ((struct sNode*)node_910)->finalize, ((struct sNode*)node_910)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_912,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_803;
    buf2_913=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__383 = come_increment_ref_count(((struct sNode*)(__right_value907=top_level_v98(buf2_913,head,head_sline,info))));
    (buf2_913 = come_decrement_ref_count2(buf2_913, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value907) ? __right_value907 = come_decrement_ref_count2(__right_value907, ((struct sNode*)__right_value907)->finalize, ((struct sNode*)__right_value907)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count2(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__383;
}

static void tuple3$3sType$phchar$phbool$$p_finalize(struct tuple3$3sType$phchar$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1char$ph* list$1char$ph$p_reset(struct list$1char$ph* self){
struct list_item$1char$ph* it_831;
struct list_item$1char$ph* prev_it_832;
struct list$1char$ph* __result_obj__348;
    it_831=self->head;
    while(it_831!=((void*)0)) {
        prev_it_832=it_831;
        it_831=it_831->next;
        come_call_finalizer3(prev_it_832,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__348 = self;
    return __result_obj__348;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_866;
unsigned int hash_867;
unsigned int it_868;
struct sFun* __result_obj__351;
struct sFun* __result_obj__352;
struct sFun* __result_obj__353;
struct sFun* __result_obj__354;
default_value_866 = (void*)0;
    memset(&default_value_866,0,sizeof(struct sFun*));
    hash_867=string_get_hash_key(((char*)key))%self->size;
    it_868=hash_867;
    while((_Bool)1) {
        if(        self->item_existance[it_868]) {
            if(            string_equals(self->keys[it_868],key)) {
                __result_obj__351 = come_increment_ref_count(self->items[it_868]);
                come_call_finalizer3(default_value_866,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__351,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__351;
            }
            it_868++;
            if(            it_868>=self->size) {
                it_868=0;
            }
            else if(            it_868==hash_867) {
                __result_obj__352 = come_increment_ref_count(default_value_866);
                come_call_finalizer3(default_value_866,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__352,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__352;
            }
        }
        else {
            __result_obj__353 = come_increment_ref_count(default_value_866);
            come_call_finalizer3(default_value_866,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__353,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__353;
        }
    }
    __result_obj__354 = come_increment_ref_count(default_value_866);
    come_call_finalizer3(default_value_866,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__354,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__354;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__355;
void* __right_value851 = (void*)0;
struct sFunNode* result_871;
void* __right_value852 = (void*)0;
char* __dec_obj115;
void* __right_value898 = (void*)0;
struct sFun* __dec_obj138;
struct sFunNode* __result_obj__378;
    if(    self==(void*)0) {
        __result_obj__355 = (void*)0;
        return __result_obj__355;
    }
    result_871=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_871->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj115=result_871->sname;
        result_871->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_871->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj138=result_871->mFun;
        result_871->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj138,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__378 = result_871;
    come_call_finalizer3(result_871,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__378;
}

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__356;
void* __right_value853 = (void*)0;
struct sFun* result_872;
void* __right_value854 = (void*)0;
char* __dec_obj116;
void* __right_value855 = (void*)0;
struct sType* __dec_obj117;
void* __right_value856 = (void*)0;
struct list$1sType$ph* __dec_obj118;
void* __right_value857 = (void*)0;
struct list$1char$ph* __dec_obj119;
void* __right_value858 = (void*)0;
struct list$1char$ph* __dec_obj120;
void* __right_value859 = (void*)0;
struct sType* __dec_obj121;
void* __right_value891 = (void*)0;
struct sBlock* __dec_obj131;
void* __right_value892 = (void*)0;
struct buffer* __dec_obj132;
void* __right_value893 = (void*)0;
struct buffer* __dec_obj133;
void* __right_value894 = (void*)0;
struct buffer* __dec_obj134;
void* __right_value895 = (void*)0;
struct buffer* __dec_obj135;
void* __right_value896 = (void*)0;
char* __dec_obj136;
void* __right_value897 = (void*)0;
char* __dec_obj137;
struct sFun* __result_obj__377;
    if(    self==(void*)0) {
        __result_obj__356 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__356,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__356;
    }
    result_872=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj116=result_872->mName;
        result_872->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj117=result_872->mResultType;
        result_872->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj117,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj118=result_872->mParamTypes;
        result_872->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj118,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj119=result_872->mParamNames;
        result_872->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj119,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj120=result_872->mParamDefaultParametors;
        result_872->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj120,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj121=result_872->mLambdaType;
        result_872->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj121,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj131=result_872->mBlock;
        result_872->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj131,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj132=result_872->mSource;
        result_872->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj132,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj133=result_872->mSourceHead;
        result_872->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj133,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj134=result_872->mSourceHead2;
        result_872->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj134,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj135=result_872->mSourceDefer;
        result_872->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj135,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_872->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_872->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_872->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_872->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_872->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_872->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_872->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj136=result_872->mAttribute;
        result_872->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj137=result_872->mFunAttribute;
        result_872->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__377 = come_increment_ref_count(result_872);
    come_call_finalizer3(result_872,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__377,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__377;
}

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__357;
void* __right_value860 = (void*)0;
struct sBlock* result_873;
void* __right_value861 = (void*)0;
struct list$1sNode$ph* __dec_obj122;
void* __right_value890 = (void*)0;
struct sVarTable* __dec_obj130;
struct sBlock* __result_obj__376;
    if(    self==(void*)0) {
        __result_obj__357 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__357,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__357;
    }
    result_873=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj122=result_873->mNodes;
        result_873->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj122,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj130=result_873->mVarTable;
        result_873->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj130,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_873->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__376 = come_increment_ref_count(result_873);
    come_call_finalizer3(result_873,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__376,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__376;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__358;
void* __right_value862 = (void*)0;
struct sVarTable* result_874;
void* __right_value889 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj129;
struct sVarTable* __result_obj__375;
    if(    self==(void*)0) {
        __result_obj__358 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__358,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__358;
    }
    result_874=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj129=result_874->mVars;
        result_874->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj129,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_874->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_874->mParent=self->mParent;
    }
    __result_obj__375 = come_increment_ref_count(result_874);
    come_call_finalizer3(result_874,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__375,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__375;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__359;
void* __right_value863 = (void*)0;
void* __right_value869 = (void*)0;
struct map$2char$phsVar$ph* result_878;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
struct list$1char$p* __dec_obj124;
char* it_881;
struct sVar* default_value_884;
void* __right_value872 = (void*)0;
struct sVar* it2_887;
void* __right_value878 = (void*)0;
void* __right_value884 = (void*)0;
void* __right_value885 = (void*)0;
void* __right_value886 = (void*)0;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__374;
default_value_884 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__359 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__359,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__359;
    }
    result_878=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2770, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj124=result_878->key_list;
    result_878->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2772, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj124,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_881=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_881=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_884,0,sizeof(struct sVar*));
        it2_887=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_881,(struct sVar*)come_increment_ref_count(default_value_884)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_878,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_881)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_887)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_878,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_881)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_887)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_878,(char*)come_increment_ref_count(it_881),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_887)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_878,(char*)come_increment_ref_count(it_881),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_887)));
        }
        come_call_finalizer3(default_value_884,sVar_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(it2_887,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__374 = come_increment_ref_count(result_878);
    come_call_finalizer3(result_878,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__374,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__374;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_875;
int i_876;
    for(    i_875=0;    i_875<self->size;    i_875++    ){
        if(        self->item_existance[i_875]) {
            if(            1) {
                come_call_finalizer3(self->items[i_875],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_876=0;    i_876<self->size;    i_876++    ){
        if(        self->item_existance[i_876]) {
            if(            1) {
                (self->keys[i_876] = come_decrement_ref_count2(self->keys[i_876], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
void* __right_value866 = (void*)0;
int i_877;
void* __right_value867 = (void*)0;
void* __right_value868 = (void*)0;
struct list$1char$p* __dec_obj123;
struct map$2char$phsVar$ph* __result_obj__360;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value864=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value865=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2700, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value866=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_877=0;    i_877<128;    i_877++    ){
        self->item_existance[i_877]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj123=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj123,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__360 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__360,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__360;
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_879;
char* __result_obj__361;
char* __result_obj__362;
char* result_880;
char* __result_obj__363;
result_879 = (void*)0;
result_880 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_879,0,sizeof(char*));
        __result_obj__361 = result_879;
        return __result_obj__361;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__362 = self->key_list->it->item;
        return __result_obj__362;
    }
    memset(&result_880,0,sizeof(char*));
    __result_obj__363 = result_880;
    return __result_obj__363;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_882;
char* __result_obj__364;
char* __result_obj__365;
char* result_883;
char* __result_obj__366;
result_882 = (void*)0;
result_883 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_882,0,sizeof(char*));
        __result_obj__364 = result_882;
        return __result_obj__364;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__365 = self->key_list->it->item;
        return __result_obj__365;
    }
    memset(&result_883,0,sizeof(char*));
    __result_obj__366 = result_883;
    return __result_obj__366;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_885;
unsigned int it_886;
struct sVar* __result_obj__367;
struct sVar* __result_obj__368;
struct sVar* __result_obj__369;
struct sVar* __result_obj__370;
    hash_885=string_get_hash_key(((char*)key))%self->size;
    it_886=hash_885;
    while((_Bool)1) {
        if(        self->item_existance[it_886]) {
            if(            string_equals(self->keys[it_886],key)) {
                __result_obj__367 = come_increment_ref_count(self->items[it_886]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__367,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__367;
            }
            it_886++;
            if(            it_886>=self->size) {
                it_886=0;
            }
            else if(            it_886==hash_885) {
                __result_obj__368 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__368,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__368;
            }
        }
        else {
            __result_obj__369 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__369,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__369;
        }
    }
    __result_obj__370 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__370,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_899;
int it_900;
_Bool same_key_exist_901;
char* it2_902;
struct map$2char$phsVar$ph* __result_obj__371;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_899=string_get_hash_key(((char*)key))%self->size;
    it_900=hash_899;
    while((_Bool)1) {
        if(        self->item_existance[it_900]) {
            if(            string_equals(self->keys[it_900],key)) {
                if(                1) {
                    (self->keys[it_900] = come_decrement_ref_count2(self->keys[it_900], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_900]);
                    self->keys[it_900]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_900]);
                    self->keys[it_900]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_900],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_900]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_900]=item;
                }
                break;
            }
            it_900++;
            if(            it_900>=self->size) {
                it_900=0;
            }
            else if(            it_900==hash_899) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_900]=(_Bool)1;
            if(            1) {
                self->keys[it_900]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_900]=key;
            }
            if(            1) {
                self->items[it_900]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_900]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_901=(_Bool)0;
    for(    it2_902=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_902=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_902,key)) {
            same_key_exist_901=(_Bool)1;
        }
    }
    if(    !same_key_exist_901) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__371 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__371;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_888;
void* __right_value873 = (void*)0;
char** keys_889;
void* __right_value874 = (void*)0;
struct sVar** items_890;
void* __right_value875 = (void*)0;
_Bool* item_existance_891;
int len_892;
char* it_893;
struct sVar* default_value_894;
void* __right_value876 = (void*)0;
struct sVar* it2_895;
unsigned int hash_896;
int n_897;
struct sVar* default_value_898;
void* __right_value877 = (void*)0;
default_value_894 = (void*)0;
default_value_898 = (void*)0;
    size_888=self->size*10;
    keys_889=(char**)come_increment_ref_count(((char**)(__right_value873=(char**)come_calloc(1, sizeof(char*)*(1*(size_888)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_890=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value874=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_888)), "./comelang.h", 2939, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_891=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value875=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_888)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_892=0;
    for(    it_893=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_893=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_894,0,sizeof(struct sVar*));
        it2_895=((struct sVar*)(__right_value876=map$2char$phsVar$ph$p_at(self,it_893,(struct sVar*)come_increment_ref_count(default_value_894))));
        come_call_finalizer3(__right_value876,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_896=string_get_hash_key(((char*)it_893))%size_888;
        n_897=hash_896;
        while((_Bool)1) {
            if(            item_existance_891[n_897]) {
                n_897++;
                if(                n_897>=size_888) {
                    n_897=0;
                }
                else if(                n_897==hash_896) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_891[n_897]=(_Bool)1;
                keys_889[n_897]=it_893;
                items_890[n_897]=((struct sVar*)(__right_value877=map$2char$phsVar$ph$p_at(self,it_893,(struct sVar*)come_increment_ref_count(default_value_898))));
                come_call_finalizer3(__right_value877,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_892++;
                come_call_finalizer3(default_value_898,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_898,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_894,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_889;
    self->items=items_890;
    self->item_existance=item_existance_891;
    self->size=size_888;
    self->len=len_892;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__372;
void* __right_value879 = (void*)0;
struct sVar* result_903;
void* __right_value880 = (void*)0;
char* __dec_obj125;
void* __right_value881 = (void*)0;
char* __dec_obj126;
void* __right_value882 = (void*)0;
struct sType* __dec_obj127;
void* __right_value883 = (void*)0;
char* __dec_obj128;
struct sVar* __result_obj__373;
    if(    self==(void*)0) {
        __result_obj__372 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__372,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__372;
    }
    result_903=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj125=result_903->mName;
        result_903->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj126=result_903->mCValueName;
        result_903->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj127=result_903->mType;
        result_903->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj127,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_903->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_903->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_903->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj128=result_903->mFunName;
        result_903->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__373 = come_increment_ref_count(result_903);
    come_call_finalizer3(result_903,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__373,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__373;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_904;
int i_905;
    for(    i_904=0;    i_904<self->size;    i_904++    ){
        if(        self->item_existance[i_904]) {
            if(            1) {
                come_call_finalizer3(self->items[i_904],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_905=0;    i_905<self->size;    i_905++    ){
        if(        self->item_existance[i_905]) {
            if(            1) {
                (self->keys[i_905] = come_decrement_ref_count2(self->keys[i_905], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_914;
int caller_line_915;
char* caller_sname_916;
_Bool comma_instead_of_semicolon_917;
char* last_code_918;
char* __dec_obj139;
char* last_code2_919;
char* __dec_obj140;
void* __right_value908 = (void*)0;
char* sname_top_920;
int sline_top_921;
void* __right_value909 = (void*)0;
void* __right_value910 = (void*)0;
struct sFun* funX_922;
void* __right_value913 = (void*)0;
void* __right_value914 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__387;
void* __right_value915 = (void*)0;
struct sType* result_type_925;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct list$1sType$ph* param_types_926;
struct list$1sType$ph* o2_saved_927;
struct sType* it_930;
void* __right_value918 = (void*)0;
void* __right_value919 = (void*)0;
struct sType* param_type_933;
void* __right_value920 = (void*)0;
void* __right_value921 = (void*)0;
struct list$1char$ph* param_names_934;
void* __right_value922 = (void*)0;
struct list$1char$ph* param_default_parametors_935;
char* p_936;
int sline_937;
char* sname_938;
char* head_939;
struct buffer* source_940;
void* __right_value923 = (void*)0;
struct buffer* __dec_obj143;
struct sType* generics_type_saved_941;
void* __right_value924 = (void*)0;
struct sType* __dec_obj144;
struct list$1char$ph* method_generics_type_names_942;
void* __right_value925 = (void*)0;
void* __right_value926 = (void*)0;
struct list$1char$ph* __dec_obj145;
struct list$1char$ph* o2_saved_943;
char* it_944;
void* __right_value927 = (void*)0;
void* __right_value928 = (void*)0;
struct list$1char$ph* __dec_obj146;
char* __dec_obj147;
void* __right_value929 = (void*)0;
struct sBlock* block_945;
struct buffer* __dec_obj148;
char* __dec_obj149;
_Bool var_args_946;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
void* __right_value932 = (void*)0;
void* __right_value933 = (void*)0;
struct sFun* fun_947;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value937 = (void*)0;
struct sNode* node_948;
_Bool in_generics_fun_949;
_Bool Value_950;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
void* __right_value940 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__394;
struct sType* __dec_obj150;
struct list$1char$ph* __dec_obj151;
void* __right_value941 = (void*)0;
char* __dec_obj152;
char* __dec_obj153;
char* __dec_obj154;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
void* __right_value944 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__395;
    caller_fun_914=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_915=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_916=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_917=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_918=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj139=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_919=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj140=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_920=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_921=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_922=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value909=__builtin_string(fun_name)))));
    (__right_value909 = come_decrement_ref_count2(__right_value909, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_922) {
        __result_obj__387 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value914=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2203, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_918 = come_decrement_ref_count2(last_code_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_919 = come_decrement_ref_count2(last_code2_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_920 = come_decrement_ref_count2(sname_top_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_922,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value914,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__387,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__387;
    }
    result_type_925=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_926=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2209, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_927=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_930=list$1sType$ph$p_begin((o2_saved_927));    !list$1sType$ph$p_end((o2_saved_927));    it_930=list$1sType$ph$p_next((o2_saved_927))    ){
        param_type_933=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value918=come_call_cloner(sType_clone, it_930))),generics_type,info));
        come_call_finalizer3(__right_value918,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_add(param_types_926,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_933)));
        come_call_finalizer3(param_type_933,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_927,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_934=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_935=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_936=info->p;
    sline_937=info->sline;
    sname_938=(char*)come_increment_ref_count(info->sname);
    head_939=info->head;
    source_940=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj143=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj143,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_941=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj144=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj144,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_942=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj145=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2237, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj145,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_943=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_944=list$1char$ph$p_begin((o2_saved_943));    !list$1char$ph$p_end((o2_saved_943));    it_944=list$1char$ph$p_next((o2_saved_943))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_944)));
    }
    come_call_finalizer3(o2_saved_943,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj146=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj146,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj147=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_945=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_939;
    __dec_obj148=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_940);
    come_call_finalizer3(__dec_obj148,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_936;
    info->sline=sline_937;
    __dec_obj149=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_938);
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_925->mInline=(_Bool)0;
    result_type_925->mStatic=(_Bool)0;
    result_type_925->mUniq=(_Bool)0;
    var_args_946=generics_fun->mVarArgs;
    fun_947=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2261, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_925),(struct list$1sType$ph*)come_increment_ref_count(param_types_926),(struct list$1char$ph*)come_increment_ref_count(param_names_934),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_935),(_Bool)0,var_args_946,(struct sBlock*)come_increment_ref_count(block_945),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_947));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2268, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value936=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2268, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_947),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_948=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value936,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_949=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_950=node_compile(node_948,info);
    if(    !Value_950) {
        __result_obj__394 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value940=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2273, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_918 = come_decrement_ref_count2(last_code_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_919 = come_decrement_ref_count2(last_code2_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_920 = come_decrement_ref_count2(sname_top_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_922,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_925,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_926,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_934,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_935,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_938 = come_decrement_ref_count2(sname_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_940,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_941,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_942,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_945,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_947,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_948) ? node_948 = come_decrement_ref_count2(node_948, ((struct sNode*)node_948)->finalize, ((struct sNode*)node_948)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value940,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__394,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__394;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_949;
    __dec_obj150=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_941);
    come_call_finalizer3(__dec_obj150,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj151=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_942);
    come_call_finalizer3(__dec_obj151,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj152=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_920));
    __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_921;
    __dec_obj153=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_918);
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj154=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_919);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_914;
    info->caller_line=caller_line_915;
    info->caller_sname=caller_sname_916;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_917;
    __result_obj__395 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value944=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2293, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_918 = come_decrement_ref_count2(last_code_918, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_919 = come_decrement_ref_count2(last_code2_919, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_920 = come_decrement_ref_count2(sname_top_920, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_922,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_925,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_926,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_934,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_935,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_938 = come_decrement_ref_count2(sname_938, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_940,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_941,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_942,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_945,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_947,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_948) ? node_948 = come_decrement_ref_count2(node_948, ((struct sNode*)node_948)->finalize, ((struct sNode*)node_948)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value944,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__395,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__395;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__384;
void* __right_value911 = (void*)0;
struct tuple2$2char$phbool$* result_923;
void* __right_value912 = (void*)0;
char* __dec_obj141;
struct tuple2$2char$phbool$* __result_obj__385;
    if(    self==(void*)0) {
        __result_obj__384 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__384,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__384;
    }
    result_923=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj141=result_923->v1;
        result_923->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_923->v2=self->v2;
    }
    __result_obj__385 = come_increment_ref_count(result_923);
    come_call_finalizer3(result_923,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__385,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__385;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_924;
    result_924=0;
    result_924+=int_get_hash_key(((int)self->v1));
    result_924+=int_get_hash_key(((int)self->v2));
    return result_924;
}

static _Bool tuple2$2char$phbool$_equals(struct tuple2$2char$phbool$* left, struct tuple2$2char$phbool$* right){
    if(    !string_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_initialize(struct tuple2$2char$phbool$* self, char* v1, _Bool v2){
char* __dec_obj142;
struct tuple2$2char$phbool$* __result_obj__386;
    __dec_obj142=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__386 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__386,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__386;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_928;
struct sType* __result_obj__388;
struct sType* __result_obj__389;
struct sType* result_929;
struct sType* __result_obj__390;
result_928 = (void*)0;
result_929 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_928,0,sizeof(struct sType*));
        __result_obj__388 = result_928;
        return __result_obj__388;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__389 = self->it->item;
        return __result_obj__389;
    }
    memset(&result_929,0,sizeof(struct sType*));
    __result_obj__390 = result_929;
    return __result_obj__390;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_931;
struct sType* __result_obj__391;
struct sType* __result_obj__392;
struct sType* result_932;
struct sType* __result_obj__393;
result_931 = (void*)0;
result_932 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_931,0,sizeof(struct sType*));
        __result_obj__391 = result_931;
        return __result_obj__391;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__392 = self->it->item;
        return __result_obj__392;
    }
    memset(&result_932,0,sizeof(struct sType*));
    __result_obj__393 = result_932;
    return __result_obj__393;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_951;
int caller_line_952;
char* caller_sname_953;
_Bool comma_instead_of_semicolon_954;
char* last_code_955;
char* __dec_obj155;
char* last_code2_956;
char* __dec_obj156;
void* __right_value945 = (void*)0;
char* sname_top_957;
int sline_top_958;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct sFun* funX_959;
_Bool __result_obj__396;
void* __right_value948 = (void*)0;
struct sType* result_type_960;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct list$1sType$ph* param_types_961;
struct list$1sType$ph* o2_saved_962;
struct sType* it_963;
void* __right_value951 = (void*)0;
void* __right_value952 = (void*)0;
struct sType* param_type_964;
void* __right_value953 = (void*)0;
void* __right_value954 = (void*)0;
struct list$1char$ph* param_names_965;
void* __right_value955 = (void*)0;
struct list$1char$ph* param_default_parametors_966;
char* p_967;
int sline_968;
char* sname_969;
char* head_970;
struct buffer* source_971;
void* __right_value956 = (void*)0;
struct buffer* __dec_obj157;
struct list$1char$ph* method_generics_type_names_972;
void* __right_value957 = (void*)0;
void* __right_value958 = (void*)0;
struct list$1char$ph* __dec_obj158;
struct list$1char$ph* o2_saved_973;
char* it_974;
void* __right_value959 = (void*)0;
void* __right_value960 = (void*)0;
struct list$1char$ph* __dec_obj159;
char* __dec_obj160;
void* __right_value961 = (void*)0;
struct sBlock* block_975;
struct buffer* __dec_obj161;
char* __dec_obj162;
_Bool generate__976;
_Bool var_args_977;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
void* __right_value964 = (void*)0;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
struct sFun* fun_978;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value970 = (void*)0;
struct sNode* node_979;
_Bool Value_980;
void* __if_result__1_981 = (void*)0;
_Bool __result_obj__397;
struct list$1char$ph* __dec_obj163;
void* __right_value971 = (void*)0;
char* __dec_obj164;
char* __dec_obj165;
char* __dec_obj166;
_Bool __result_obj__398;
    caller_fun_951=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_952=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_953=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_954=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_955=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj155=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_956=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj156=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_957=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_958=info->sline;
    funX_959=((struct sFun*)(__right_value947=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value946=__builtin_string(fun_name))))));
    (__right_value946 = come_decrement_ref_count2(__right_value946, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value947,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_959) {
        __result_obj__396 = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_955 = come_decrement_ref_count2(last_code_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_956 = come_decrement_ref_count2(last_code2_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_957 = come_decrement_ref_count2(sname_top_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__396;
    }
    result_type_960=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_961=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2322, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_962=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_963=list$1sType$ph$p_begin((o2_saved_962));    !list$1sType$ph$p_end((o2_saved_962));    it_963=list$1sType$ph$p_next((o2_saved_962))    ){
        param_type_964=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value951=come_call_cloner(sType_clone, it_963))),info));
        come_call_finalizer3(__right_value951,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_add(param_types_961,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_964)));
        come_call_finalizer3(param_type_964,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_962,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_965=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_966=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_967=info->p;
    sline_968=info->sline;
    sname_969=(char*)come_increment_ref_count(info->sname);
    head_970=info->head;
    source_971=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj157=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj157,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_972=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj158=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2344, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj158,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_973=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_974=list$1char$ph$p_begin((o2_saved_973));    !list$1char$ph$p_end((o2_saved_973));    it_974=list$1char$ph$p_next((o2_saved_973))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_974)));
    }
    come_call_finalizer3(o2_saved_973,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj159=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj159,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj160=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_975=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_970;
    __dec_obj161=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_971);
    come_call_finalizer3(__dec_obj161,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_967;
    info->sline=sline_968;
    __dec_obj162=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_969);
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_960->mInline=(_Bool)0;
    result_type_960->mStatic=(_Bool)0;
    result_type_960->mUniq=(_Bool)0;
    generate__976=(_Bool)0;
    if(    result_type_960->mGenerate) {
        result_type_960->mGenerate=(_Bool)0;
        generate__976=(_Bool)1;
    }
    var_args_977=generics_fun->mVarArgs;
    fun_978=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2374, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_960),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_961)),(struct list$1char$ph*)come_increment_ref_count(param_names_965),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_966),(_Bool)0,var_args_977,(struct sBlock*)come_increment_ref_count(block_975),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__976,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_978));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2381, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value969=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2381, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_978),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_979=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value969,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_980=node_compile(node_979,info);
    if(    !Value_980) {
        __result_obj__397 = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_955 = come_decrement_ref_count2(last_code_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_956 = come_decrement_ref_count2(last_code2_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_957 = come_decrement_ref_count2(sname_top_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_960,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_961,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_965,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_966,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_969 = come_decrement_ref_count2(sname_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_971,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_972,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_975,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_978,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_979) ? node_979 = come_decrement_ref_count2(node_979, ((struct sNode*)node_979)->finalize, ((struct sNode*)node_979)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__397;
    }
    else {
        __if_result__1_981=(void*)(Value_980);
;
    }
    __dec_obj163=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_972);
    come_call_finalizer3(__dec_obj163,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj164=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_957));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_958;
    __dec_obj165=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_955);
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj166=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_956);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_951;
    info->caller_line=caller_line_952;
    info->caller_sname=caller_sname_953;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_954;
    __result_obj__398 = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_955 = come_decrement_ref_count2(last_code_955, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_956 = come_decrement_ref_count2(last_code2_956, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_957 = come_decrement_ref_count2(sname_top_957, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_960,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_961,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_965,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_966,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_969 = come_decrement_ref_count2(sname_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_971,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_972,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_975,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_978,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_979) ? node_979 = come_decrement_ref_count2(node_979, ((struct sNode*)node_979)->finalize, ((struct sNode*)node_979)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__398;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_982;
char* source_head_983;
void* __right_value972 = (void*)0;
char* attribute_984;
struct sType* result_type_985;
char* var_name_986;
_Bool constructor__987;
void* __right_value973 = (void*)0;
void* __right_value974 = (void*)0;
struct sType* __dec_obj167;
void* __right_value975 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* result_type2_988=0;
char* var_name2_989=0;
_Bool err_990=0;
struct sType* __dec_obj168;
char* __dec_obj169;
_Bool method_definition_991;
char* p_992;
int sline_993;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct buffer* buf2_994;
char* fun_name_995;
char* base_fun_name_996;
void* __right_value978 = (void*)0;
char* __dec_obj170;
void* __right_value979 = (void*)0;
char* __dec_obj171;
void* __right_value980 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* obj_type_997=0;
char* name_998=0;
_Bool err_999=0;
void* __right_value981 = (void*)0;
char* __dec_obj172;
void* __right_value982 = (void*)0;
char* __dec_obj173;
void* __right_value983 = (void*)0;
char* __dec_obj174;
void* __right_value984 = (void*)0;
char* __dec_obj175;
void* __right_value985 = (void*)0;
char* __dec_obj176;
void* __right_value986 = (void*)0;
char* __dec_obj177;
void* __right_value987 = (void*)0;
char* __dec_obj178;
void* __right_value988 = (void*)0;
char* __dec_obj179;
void* __right_value989 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var32 = (void*)0;
struct list$1sType$ph* param_types_1000=0;
struct list$1char$ph* param_names_1001=0;
struct list$1char$ph* param_default_parametors_1002=0;
_Bool var_args_1003=0;
char* header_tail_1004;
int version_1005;
int n_1006;
_Bool in_top_level_1007;
void* __right_value990 = (void*)0;
struct sBlock* block_1008;
void* __right_value991 = (void*)0;
char* fun_name_1010;
void* __right_value992 = (void*)0;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
struct sFun* fun_1011;
void* __right_value997 = (void*)0;
void* __right_value998 = (void*)0;
struct sFun* fun2_1012;
void* __right_value999 = (void*)0;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value1004 = (void*)0;
struct sNode* __result_obj__401;
void* __right_value1005 = (void*)0;
char* none_generics_name_1014;
void* __right_value1006 = (void*)0;
char* generics_sname_1015;
int generics_sline_1016;
void* __right_value1007 = (void*)0;
char* block_1017;
void* __right_value1008 = (void*)0;
void* __right_value1009 = (void*)0;
void* __right_value1010 = (void*)0;
void* __right_value1011 = (void*)0;
void* __right_value1012 = (void*)0;
void* __right_value1013 = (void*)0;
struct sGenericsFun* fun_1018;
void* __right_value1014 = (void*)0;
char* fun_name3_1019;
void* __right_value1020 = (void*)0;
struct sNode* __result_obj__413;
void* __right_value1021 = (void*)0;
char* generics_sname_1041;
int generics_sline_1042;
void* __right_value1022 = (void*)0;
char* block_1043;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
void* __right_value1026 = (void*)0;
void* __right_value1027 = (void*)0;
void* __right_value1028 = (void*)0;
struct sGenericsFun* fun_1044;
void* __right_value1029 = (void*)0;
char* fun_name3_1045;
void* __right_value1030 = (void*)0;
void* __right_value1031 = (void*)0;
struct sNode* __result_obj__414;
char* source_tail_1046;
void* __right_value1032 = (void*)0;
void* __right_value1033 = (void*)0;
struct buffer* header_1047;
void* __right_value1034 = (void*)0;
char* name_1048;
void* __right_value1035 = (void*)0;
char* name_1049;
int i_1050;
void* __right_value1036 = (void*)0;
struct sType* param_type_1051;
void* __right_value1037 = (void*)0;
char* param_name_1052;
void* __right_value1038 = (void*)0;
char* default_parametor_1053;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
void* __right_value1041 = (void*)0;
char* impl_name_1054;
void* __right_value1042 = (void*)0;
char* result_type_name_1055;
void* __right_value1043 = (void*)0;
char* impl_name_1056;
void* __right_value1044 = (void*)0;
char* result_type_name_1057;
int i_1058;
void* __right_value1045 = (void*)0;
struct sType* param_type_1059;
void* __right_value1046 = (void*)0;
char* param_name_1060;
void* __right_value1047 = (void*)0;
char* default_parametor_1061;
void* __right_value1048 = (void*)0;
void* __right_value1049 = (void*)0;
void* __right_value1050 = (void*)0;
void* __right_value1051 = (void*)0;
char* new_fun_name_1062;
void* __right_value1052 = (void*)0;
char* id_1063;
void* __right_value1053 = (void*)0;
void* __right_value1054 = (void*)0;
char* id_1064;
void* __right_value1055 = (void*)0;
void* __right_value1056 = (void*)0;
struct sBlock* block_1065;
_Bool static_fun_1066;
_Bool inline_fun_1067;
_Bool uniq_fun_1068;
_Bool generate_fun_1069;
void* __right_value1057 = (void*)0;
void* __right_value1058 = (void*)0;
char* new_fun_name_1070;
void* __right_value1059 = (void*)0;
char* __dec_obj181;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
void* __right_value1064 = (void*)0;
struct sFun* fun_1071;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
void* __right_value1067 = (void*)0;
struct sFun* fun2_1072;
void* __right_value1068 = (void*)0;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1071 = (void*)0;
struct sNode* result_1073;
struct sNode* __result_obj__415;
void* __right_value1072 = (void*)0;
char* new_fun_name_1074;
void* __right_value1073 = (void*)0;
char* __dec_obj182;
char* source_tail_1075;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
struct buffer* header_1076;
_Bool result_type_static_1077;
void* __right_value1076 = (void*)0;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct sFun* fun_1078;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
struct sFun* fun2_1079;
void* __right_value1082 = (void*)0;
void* __right_value1083 = (void*)0;
char* id_1080;
void* __right_value1084 = (void*)0;
void* __right_value1085 = (void*)0;
void* __right_value1086 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1087 = (void*)0;
struct sNode* result_1081;
struct sNode* __result_obj__416;
void* __right_value1088 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_1082=0;
char* fun_attribute_1083=0;
void* __right_value1089 = (void*)0;
char* __dec_obj183;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct buffer* header_1084;
char* source_tail_1085;
_Bool result_type_static_1086;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
void* __right_value1094 = (void*)0;
struct sFun* fun_1087;
void* __right_value1095 = (void*)0;
void* __right_value1096 = (void*)0;
struct sFun* fun2_1088;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
char* id_1089;
void* __right_value1099 = (void*)0;
void* __right_value1100 = (void*)0;
void* __right_value1101 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1102 = (void*)0;
struct sNode* result_1090;
struct sNode* __result_obj__417;
void* __right_value1103 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_1091=0;
char* Err_1092=0;
struct sNode* __result_obj__418;
fun_name_995 = (void*)0;
    header_head_982=info->p;
    source_head_983=info->p;
    attribute_984=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_985=((void*)0);
    var_name_986=((void*)0);
    constructor__987=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value973=parse_word(info)));
        (__right_value973 = come_decrement_ref_count2(__right_value973, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj167=result_type_985;
        result_type_985=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->class_type));
        come_call_finalizer3(__dec_obj167,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_985->mHeap=(_Bool)1;
        constructor__987=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value975=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_988=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_989=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_990=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value975,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj168=result_type_985;
        result_type_985=(struct sType*)come_increment_ref_count(result_type2_988);
        come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj169=var_name_986;
        var_name_986=(char*)come_increment_ref_count(var_name2_989);
        __dec_obj169 = come_decrement_ref_count2(__dec_obj169, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_990) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_988,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_989 = come_decrement_ref_count2(var_name2_989, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_991=(_Bool)0;
    {
        p_992=info->p;
        sline_993=info->sline;
        buf2_994=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2447, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_994,*info->p);
            info->p++;
        }
        skip_spaces_and_lf(info);
        while(*info->p==42) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        while(*info->p==91&&*(info->p+1)==93) {
            info->p+=2;
            skip_spaces_and_lf(info);
        }
        while(*info->p==37) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        if(        buffer_length(buf2_994)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_991=(_Bool)1;
        }
        info->p=p_992;
        info->sline=sline_993;
        come_call_finalizer3(buf2_994,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_996=((void*)0);
    if(    constructor__987) {
        __dec_obj170=base_fun_name_996;
        base_fun_name_996=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj171=fun_name_995;
        fun_name_995=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_996,info,(_Bool)1));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_991) {
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value980=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_997=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_998=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_999=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value980,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        !err_999) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj172=base_fun_name_996;
        base_fun_name_996=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj173=fun_name_995;
        fun_name_995=(char*)come_increment_ref_count(create_method_name(obj_type_997,(_Bool)0,base_fun_name_996,info,(_Bool)1));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_997,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_998 = come_decrement_ref_count2(name_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj174=base_fun_name_996;
        base_fun_name_996=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj175=fun_name_995;
        fun_name_995=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_996,info,(_Bool)1));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    info->class_type) {
        __dec_obj176=base_fun_name_996;
        base_fun_name_996=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj177=fun_name_995;
        fun_name_995=(char*)come_increment_ref_count(create_method_name(info->class_type,(_Bool)0,base_fun_name_996,info,(_Bool)1));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj178=fun_name_995;
        fun_name_995=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj179=base_fun_name_996;
        base_fun_name_996=(char*)come_increment_ref_count(__builtin_string(fun_name_995));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_996,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value989=parse_params(info,constructor__987)));
    param_types_1000=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_1001=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_1002=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_1003=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value989,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    header_tail_1004=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_996,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_1005=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_1006=0;
        while(xisdigit(*info->p)) {
            n_1006=n_1006*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_1005=n_1006;
    }
    in_top_level_1007=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_996,"lambda")) {
        block_1008=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_1009=0;
        lambda_num_1009++;
        fun_name_1010=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_1009));
        result_type_985->mInline=(_Bool)0;
        result_type_985->mStatic=(_Bool)0;
        result_type_985->mUniq=(_Bool)0;
        result_type_985->mGenerate=(_Bool)0;
        fun_1011=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2550, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_1010)),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),(_Bool)0,var_args_1003,(struct sBlock*)come_increment_ref_count(block_1008),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_1012=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value997=__builtin_string(fun_name_1010)))));
        (__right_value997 = come_decrement_ref_count2(__right_value997, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1012==((void*)0)||fun2_1012->mExternal) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1010)),(struct sFun*)come_increment_ref_count(fun_1011));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2560, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value1001=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2560, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_1011,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__401 = come_increment_ref_count(((struct sNode*)(__right_value1004=_inf_value5)));
        come_call_finalizer3(block_1008,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_1010 = come_decrement_ref_count2(fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1011,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1012,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1001,sLambdaNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1004) ? __right_value1004 = come_decrement_ref_count2(__right_value1004, ((struct sNode*)__right_value1004)->finalize, ((struct sNode*)__right_value1004)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__401) ? __result_obj__401 = come_decrement_ref_count2(__result_obj__401, ((struct sNode*)__result_obj__401)->finalize, ((struct sNode*)__result_obj__401)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__401;
        come_call_finalizer3(block_1008,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_1010 = come_decrement_ref_count2(fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1011,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1012,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_1014=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_1015=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_1016=info->sline;
        block_1017=(char*)come_increment_ref_count(skip_block(info));
        fun_1018=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2570, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1009=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value1010=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),var_args_1003,(char*)come_increment_ref_count(block_1017),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_1015)),generics_sline_1016));
        come_call_finalizer3(__right_value1009,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1010,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_1019=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1014,base_fun_name_996));
        map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_1019)),(struct sGenericsFun*)come_increment_ref_count(fun_1018));
        __result_obj__413 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_1014 = come_decrement_ref_count2(none_generics_name_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_1015 = come_decrement_ref_count2(generics_sname_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1017 = come_decrement_ref_count2(block_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1018,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1019 = come_decrement_ref_count2(fun_name3_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__413) ? __result_obj__413 = come_decrement_ref_count2(__result_obj__413, ((struct sNode*)__result_obj__413)->finalize, ((struct sNode*)__result_obj__413)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__413;
        (none_generics_name_1014 = come_decrement_ref_count2(none_generics_name_1014, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_1015 = come_decrement_ref_count2(generics_sname_1015, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1017 = come_decrement_ref_count2(block_1017, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1018,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1019 = come_decrement_ref_count2(fun_name3_1019, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_1041=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_1042=info->sline;
        block_1043=(char*)come_increment_ref_count(skip_block(info));
        fun_1044=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2584, "struct sGenericsFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1024=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value1025=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),var_args_1003,(char*)come_increment_ref_count(block_1043),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_1041)),generics_sline_1042));
        come_call_finalizer3(__right_value1024,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1025,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_1045=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_996));
        if(        method_definition_991) {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sGenericsFun*)come_increment_ref_count(fun_1044));
        }
        else {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_1045)),(struct sGenericsFun*)come_increment_ref_count(fun_1044));
        }
        __result_obj__414 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_1041 = come_decrement_ref_count2(generics_sname_1041, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1043 = come_decrement_ref_count2(block_1043, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1044,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1045 = come_decrement_ref_count2(fun_name3_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__414) ? __result_obj__414 = come_decrement_ref_count2(__result_obj__414, ((struct sNode*)__result_obj__414)->finalize, ((struct sNode*)__result_obj__414)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__414;
        (generics_sname_1041 = come_decrement_ref_count2(generics_sname_1041, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1043 = come_decrement_ref_count2(block_1043, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1044,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1045 = come_decrement_ref_count2(fun_name3_1045, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_1046=info->p-1;
        header_1047=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2600, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        if(        constructor__987) {
            if(            list$1sType$ph$p_length(param_types_1000)==1) {
                name_1048=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->class_type->mClass->mName));
                buffer_append_format(header_1047,"extern %s*%% %s*::initialize(%s*%% self);\n",name_1048,name_1048,name_1048);
                (name_1048 = come_decrement_ref_count2(name_1048, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_1049=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->class_type->mClass->mName));
                buffer_append_format(header_1047,"extern %s*%% %s*::initialize(%s*%% self, ",name_1049,name_1049,name_1049);
                for(                i_1050=1;                i_1050<list$1sType$ph$p_length(param_types_1000);                i_1050++                ){
                    param_type_1051=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types_1000,i_1050));
                    param_name_1052=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_1001,i_1050));
                    default_parametor_1053=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_1002,i_1050));
                    if(                    default_parametor_1053) {
                        buffer_append_format(header_1047,"extern %s %s=%s",((char*)(__right_value1039=make_come_type_name_string_no_solved(param_type_1051,(_Bool)0,info))),param_name_1052,default_parametor_1053);
                        (__right_value1039 = come_decrement_ref_count2(__right_value1039, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_1047,"extern %s %s",((char*)(__right_value1040=make_come_type_name_string_no_solved(param_type_1051,(_Bool)0,info))),param_name_1052);
                        (__right_value1040 = come_decrement_ref_count2(__right_value1040, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_1050!=list$1sType$ph$p_length(param_types_1000)-1) {
                        buffer_append_str(header_1047,",");
                    }
                    come_call_finalizer3(param_type_1051,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_1052 = come_decrement_ref_count2(param_name_1052, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_1053 = come_decrement_ref_count2(default_parametor_1053, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_1047,");\n");
                (name_1049 = come_decrement_ref_count2(name_1049, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->class_type) {
            if(            list$1sType$ph$p_length(param_types_1000)==1) {
                impl_name_1054=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->class_type->mClass->mName));
                result_type_name_1055=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_985,(_Bool)0,info));
                buffer_append_format(header_1047,"extern %s %s*::%s(%s* self);\n",result_type_name_1055,impl_name_1054,base_fun_name_996,impl_name_1054);
                (impl_name_1054 = come_decrement_ref_count2(impl_name_1054, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_1055 = come_decrement_ref_count2(result_type_name_1055, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_1056=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->class_type->mClass->mName));
                result_type_name_1057=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_985,(_Bool)0,info));
                buffer_append_format(header_1047,"extern %s %s*::%s(%s* self, ",result_type_name_1057,impl_name_1056,base_fun_name_996,impl_name_1056);
                for(                i_1058=1;                i_1058<list$1sType$ph$p_length(param_types_1000);                i_1058++                ){
                    param_type_1059=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types_1000,i_1058));
                    param_name_1060=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_1001,i_1058));
                    default_parametor_1061=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_1002,i_1058));
                    if(                    default_parametor_1061) {
                        buffer_append_format(header_1047,"extern %s %s=%s",((char*)(__right_value1048=make_come_type_name_string_no_solved(param_type_1059,(_Bool)0,info))),param_name_1060,default_parametor_1061);
                        (__right_value1048 = come_decrement_ref_count2(__right_value1048, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_1047,"extern %s %s",((char*)(__right_value1049=make_come_type_name_string_no_solved(param_type_1059,(_Bool)0,info))),param_name_1060);
                        (__right_value1049 = come_decrement_ref_count2(__right_value1049, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_1058!=list$1sType$ph$p_length(param_types_1000)-1) {
                        buffer_append_str(header_1047,",");
                    }
                    come_call_finalizer3(param_type_1059,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_1060 = come_decrement_ref_count2(param_name_1060, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_1061 = come_decrement_ref_count2(default_parametor_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_1047,");\n");
                (impl_name_1056 = come_decrement_ref_count2(impl_name_1056, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_1057 = come_decrement_ref_count2(result_type_name_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_1047,source_head_983,source_tail_1046-source_head_983);
            buffer_append_str(header_1047,";\n");
        }
        if(        !result_type_985->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_1005>0) {
                    new_fun_name_1062=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1050=__builtin_string(fun_name_995))),version_1005));
                    (__right_value1050 = come_decrement_ref_count2(__right_value1050, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    id_1063=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1062));
                    add_come_code_at_come_header(info,id_1063,"%s",((char*)(__right_value1053=buffer_to_string(header_1047))));
                    (__right_value1053 = come_decrement_ref_count2(__right_value1053, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_1062 = come_decrement_ref_count2(new_fun_name_1062, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1063 = come_decrement_ref_count2(id_1063, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_1064=(char*)come_increment_ref_count(__builtin_string(fun_name_995));
                    add_come_code_at_come_header(info,id_1064,"%s",((char*)(__right_value1055=buffer_to_string(header_1047))));
                    (__right_value1055 = come_decrement_ref_count2(__right_value1055, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1064 = come_decrement_ref_count2(id_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_1065=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__987,(_Bool)1));
        static_fun_1066=(_Bool)0;
        if(        result_type_985->mStatic) {
            result_type_985->mStatic=(_Bool)0;
            result_type_985->mUniq=(_Bool)0;
            static_fun_1066=(_Bool)1;
        }
        inline_fun_1067=(_Bool)0;
        if(        result_type_985->mInline) {
            result_type_985->mInline=(_Bool)0;
            result_type_985->mUniq=(_Bool)0;
            inline_fun_1067=(_Bool)1;
        }
        uniq_fun_1068=(_Bool)0;
        if(        result_type_985->mUniq) {
            result_type_985->mUniq=(_Bool)0;
            result_type_985->mInline=(_Bool)0;
            result_type_985->mStatic=(_Bool)0;
            uniq_fun_1068=(_Bool)1;
        }
        generate_fun_1069=(_Bool)0;
        if(        result_type_985->mUniq) {
            result_type_985->mUniq=(_Bool)0;
            result_type_985->mInline=(_Bool)0;
            result_type_985->mStatic=(_Bool)0;
            generate_fun_1069=(_Bool)1;
        }
        if(        version_1005>0) {
            new_fun_name_1070=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1057=__builtin_string(fun_name_995))),version_1005));
            (__right_value1057 = come_decrement_ref_count2(__right_value1057, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj181=fun_name_995;
            fun_name_995=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1070));
            __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1070 = come_decrement_ref_count2(new_fun_name_1070, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_1071=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2718, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),(_Bool)0,var_args_1003,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_1065)),static_fun_1066,info,inline_fun_1067,uniq_fun_1068,generate_fun_1069,(char*)come_increment_ref_count(attribute_984),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sFun*)come_increment_ref_count(fun_1071));
        }
        else {
            fun2_1072=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1066=__builtin_string(fun_name_995)))));
            (__right_value1066 = come_decrement_ref_count2(__right_value1066, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1072==((void*)0)||fun2_1072->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sFun*)come_increment_ref_count(fun_1071));
            }
            come_call_finalizer3(fun2_1072,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2736, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1070=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2736, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1071),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        result_1073=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value1070,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__415 = come_increment_ref_count(result_1073);
        come_call_finalizer3(header_1047,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1065,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1071,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1073) ? result_1073 = come_decrement_ref_count2(result_1073, ((struct sNode*)result_1073)->finalize, ((struct sNode*)result_1073)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__415) ? __result_obj__415 = come_decrement_ref_count2(__result_obj__415, ((struct sNode*)__result_obj__415)->finalize, ((struct sNode*)__result_obj__415)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__415;
        come_call_finalizer3(header_1047,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1065,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1071,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1073) ? result_1073 = come_decrement_ref_count2(result_1073, ((struct sNode*)result_1073)->finalize, ((struct sNode*)result_1073)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_1005>0) {
            new_fun_name_1074=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_995,version_1005));
            __dec_obj182=fun_name_995;
            fun_name_995=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1074));
            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1074 = come_decrement_ref_count2(new_fun_name_1074, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_1075=info->p;
            header_1076=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2750, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append(header_1076,source_head_983,source_tail_1075-source_head_983);
            skip_spaces_and_lf(info);
            result_type_static_1077=result_type_985->mStatic;
            result_type_985->mStatic=(_Bool)0;
            result_type_985->mUniq=(_Bool)0;
            result_type_985->mInline=(_Bool)0;
            result_type_985->mGenerate=(_Bool)0;
            fun_1078=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2761, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),(_Bool)1,var_args_1003,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_984),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_1079=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1080=__builtin_string(fun_name_995)))));
            (__right_value1080 = come_decrement_ref_count2(__right_value1080, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1079==((void*)0)||fun2_1079->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sFun*)come_increment_ref_count(fun_1078));
            }
            if(            !result_type_static_1077) {
                if(                !info->no_output_come_code) {
                    id_1080=(char*)come_increment_ref_count(__builtin_string(fun_name_995));
                    add_come_code_at_come_header(info,id_1080,"%s",((char*)(__right_value1084=buffer_to_string(header_1076))));
                    (__right_value1084 = come_decrement_ref_count2(__right_value1084, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1080 = come_decrement_ref_count2(id_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2782, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1086=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2782, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1078),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            result_1081=(struct sNode*)come_increment_ref_count(_inf_value7);
            come_call_finalizer3(__right_value1086,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__416 = come_increment_ref_count(result_1081);
            come_call_finalizer3(header_1076,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1078,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1079,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1081) ? result_1081 = come_decrement_ref_count2(result_1081, ((struct sNode*)result_1081)->finalize, ((struct sNode*)result_1081)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__416) ? __result_obj__416 = come_decrement_ref_count2(__result_obj__416, ((struct sNode*)__result_obj__416)->finalize, ((struct sNode*)__result_obj__416)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__416;
            come_call_finalizer3(header_1076,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1078,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1079,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1081) ? result_1081 = come_decrement_ref_count2(result_1081, ((struct sNode*)result_1081)->finalize, ((struct sNode*)result_1081)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value1088=parse_function_attribute(info)));
            asm_fun_1082=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_1083=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1088,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_1082,"")) {
                __dec_obj183=fun_name_995;
                fun_name_995=(char*)come_increment_ref_count(__builtin_string(asm_fun_1082));
                __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_1084=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2792, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==59) {
                info->p++;
                source_tail_1085=info->p;
                buffer_append(header_1084,source_head_983,source_tail_1085-source_head_983);
                skip_spaces_and_lf(info);
            }
            result_type_static_1086=result_type_985->mStatic;
            result_type_985->mStatic=(_Bool)0;
            result_type_985->mUniq=(_Bool)0;
            result_type_985->mInline=(_Bool)0;
            result_type_985->mGenerate=(_Bool)0;
            fun_1087=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2806, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sType*)come_increment_ref_count(result_type_985),(struct list$1sType$ph*)come_increment_ref_count(param_types_1000),(struct list$1char$ph*)come_increment_ref_count(param_names_1001),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1002),(_Bool)1,var_args_1003,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_984),(char*)come_increment_ref_count(fun_attribute_1083)));
            fun2_1088=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1095=__builtin_string(fun_name_995)))));
            (__right_value1095 = come_decrement_ref_count2(__right_value1095, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1088==((void*)0)||fun2_1088->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_995)),(struct sFun*)come_increment_ref_count(fun_1087));
            }
            if(            !result_type_static_1086) {
                if(                !info->no_output_come_code) {
                    id_1089=(char*)come_increment_ref_count(__builtin_string(fun_name_995));
                    add_come_code_at_come_header(info,id_1089,"%s",((char*)(__right_value1099=buffer_to_string(header_1084))));
                    (__right_value1099 = come_decrement_ref_count2(__right_value1099, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1089 = come_decrement_ref_count2(id_1089, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2827, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1101=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2827, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1087),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            result_1090=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value1101,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__417 = come_increment_ref_count(result_1090);
            (asm_fun_1082 = come_decrement_ref_count2(asm_fun_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1083 = come_decrement_ref_count2(fun_attribute_1083, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1084,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1087,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1088,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1090) ? result_1090 = come_decrement_ref_count2(result_1090, ((struct sNode*)result_1090)->finalize, ((struct sNode*)result_1090)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__417) ? __result_obj__417 = come_decrement_ref_count2(__result_obj__417, ((struct sNode*)__result_obj__417)->finalize, ((struct sNode*)__result_obj__417)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__417;
            (asm_fun_1082 = come_decrement_ref_count2(asm_fun_1082, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1083 = come_decrement_ref_count2(fun_attribute_1083, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1084,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1087,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1088,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1090) ? result_1090 = come_decrement_ref_count2(result_1090, ((struct sNode*)result_1090)->finalize, ((struct sNode*)result_1090)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1103=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_1091=multiple_assign_var34->v1;
        Err_1092=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_1092)?(puts(Err_1092),exit(0)):(0));
        come_call_finalizer3(__right_value1103,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(2);
        (Err_1092 = come_decrement_ref_count2(Err_1092, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_1007;
    __result_obj__418 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_984 = come_decrement_ref_count2(attribute_984, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_985,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_986 = come_decrement_ref_count2(var_name_986, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_995 = come_decrement_ref_count2(fun_name_995, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_996 = come_decrement_ref_count2(base_fun_name_996, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_1000,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_1001,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_1002,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count2(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__418;
}

static void tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize(struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        come_call_finalizer3(self->v1,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v3!=((void*)0)) {
        come_call_finalizer3(self->v3,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sLambdaNode* sLambdaNode_clone(struct sLambdaNode* self){
struct sLambdaNode* __result_obj__399;
void* __right_value1002 = (void*)0;
struct sLambdaNode* result_1013;
void* __right_value1003 = (void*)0;
char* __dec_obj180;
struct sLambdaNode* __result_obj__400;
    if(    self==(void*)0) {
        __result_obj__399 = (void*)0;
        return __result_obj__399;
    }
    result_1013=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1013->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj180=result_1013->sname;
        result_1013->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1013->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_1013->mFun=self->mFun;
    }
    __result_obj__400 = result_1013;
    come_call_finalizer3(result_1013,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__400;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_1037;
unsigned int it_1038;
_Bool same_key_exist_1039;
char* it2_1040;
struct map$2char$phsGenericsFun$ph* __result_obj__412;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph$p_rehash(self);
    }
    hash_1037=string_get_hash_key(((char*)key))%self->size;
    it_1038=hash_1037;
    while((_Bool)1) {
        if(        self->item_existance[it_1038]) {
            if(            string_equals(self->keys[it_1038],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_1038]);
                    (self->keys[it_1038] = come_decrement_ref_count2(self->keys[it_1038], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_1038]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_1038]);
                    self->keys[it_1038]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_1038],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_1038]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_1038]=item;
                }
                break;
            }
            it_1038++;
            if(            it_1038>=self->size) {
                it_1038=0;
            }
            else if(            it_1038==hash_1037) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_1038]=(_Bool)1;
            if(            1) {
                self->keys[it_1038]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_1038]=key;
            }
            if(            1) {
                self->items[it_1038]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_1038]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_1039=(_Bool)0;
    for(    it2_1040=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_1040=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_1040,key)) {
            same_key_exist_1039=(_Bool)1;
        }
    }
    if(    !same_key_exist_1039) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__412 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__412;
}

static void map$2char$phsGenericsFun$ph$p_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_1020;
void* __right_value1015 = (void*)0;
char** keys_1021;
void* __right_value1016 = (void*)0;
struct sGenericsFun** items_1022;
void* __right_value1017 = (void*)0;
_Bool* item_existance_1023;
int len_1024;
char* it_1027;
struct sGenericsFun* default_value_1030;
void* __right_value1018 = (void*)0;
struct sGenericsFun* it2_1031;
unsigned int hash_1034;
int n_1035;
struct sGenericsFun* default_value_1036;
void* __right_value1019 = (void*)0;
default_value_1030 = (void*)0;
default_value_1036 = (void*)0;
    size_1020=self->size*10;
    keys_1021=(char**)come_increment_ref_count(((char**)(__right_value1015=(char**)come_calloc(1, sizeof(char*)*(1*(size_1020)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_1022=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value1016=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_1020)), "./comelang.h", 2939, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_1023=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value1017=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_1020)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_1024=0;
    for(    it_1027=map$2char$phsGenericsFun$ph$p_begin(self);    !map$2char$phsGenericsFun$ph$p_end(self);    it_1027=map$2char$phsGenericsFun$ph$p_next(self)    ){
        memset(&default_value_1030,0,sizeof(struct sGenericsFun*));
        it2_1031=((struct sGenericsFun*)(__right_value1018=map$2char$phsGenericsFun$ph$p_at(self,it_1027,(struct sGenericsFun*)come_increment_ref_count(default_value_1030))));
        come_call_finalizer3(__right_value1018,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_1034=string_get_hash_key(((char*)it_1027))%size_1020;
        n_1035=hash_1034;
        while((_Bool)1) {
            if(            item_existance_1023[n_1035]) {
                n_1035++;
                if(                n_1035>=size_1020) {
                    n_1035=0;
                }
                else if(                n_1035==hash_1034) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_1023[n_1035]=(_Bool)1;
                keys_1021[n_1035]=it_1027;
                items_1022[n_1035]=((struct sGenericsFun*)(__right_value1019=map$2char$phsGenericsFun$ph$p_at(self,it_1027,(struct sGenericsFun*)come_increment_ref_count(default_value_1036))));
                come_call_finalizer3(__right_value1019,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_1024++;
                come_call_finalizer3(default_value_1036,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_1036,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_1030,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_1021;
    self->items=items_1022;
    self->item_existance=item_existance_1023;
    self->size=size_1020;
    self->len=len_1024;
}

static char* map$2char$phsGenericsFun$ph$p_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_1025;
char* __result_obj__402;
char* __result_obj__403;
char* result_1026;
char* __result_obj__404;
result_1025 = (void*)0;
result_1026 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1025,0,sizeof(char*));
        __result_obj__402 = result_1025;
        return __result_obj__402;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__403 = self->key_list->it->item;
        return __result_obj__403;
    }
    memset(&result_1026,0,sizeof(char*));
    __result_obj__404 = result_1026;
    return __result_obj__404;
}

static _Bool map$2char$phsGenericsFun$ph$p_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph$p_next(struct map$2char$phsGenericsFun$ph* self){
char* result_1028;
char* __result_obj__405;
char* __result_obj__406;
char* result_1029;
char* __result_obj__407;
result_1028 = (void*)0;
result_1029 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_1028,0,sizeof(char*));
        __result_obj__405 = result_1028;
        return __result_obj__405;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__406 = self->key_list->it->item;
        return __result_obj__406;
    }
    memset(&result_1029,0,sizeof(char*));
    __result_obj__407 = result_1029;
    return __result_obj__407;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_1032;
unsigned int it_1033;
struct sGenericsFun* __result_obj__408;
struct sGenericsFun* __result_obj__409;
struct sGenericsFun* __result_obj__410;
struct sGenericsFun* __result_obj__411;
    hash_1032=string_get_hash_key(((char*)key))%self->size;
    it_1033=hash_1032;
    while((_Bool)1) {
        if(        self->item_existance[it_1033]) {
            if(            string_equals(self->keys[it_1033],key)) {
                __result_obj__408 = come_increment_ref_count(self->items[it_1033]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__408,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__408;
            }
            it_1033++;
            if(            it_1033>=self->size) {
                it_1033=0;
            }
            else if(            it_1033==hash_1032) {
                __result_obj__409 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__409,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__409;
            }
        }
        else {
            __result_obj__410 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__410,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__410;
        }
    }
    __result_obj__411 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__411,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__411;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1093;
char* __dec_obj184;
char* last_code2_1094;
char* __dec_obj185;
_Bool comma_instead_of_semicolon_1095;
struct sClass* current_stack_frame_struct_1096;
char* real_fun_name_1097;
struct sFun* finalizer_1098;
void* __right_value1104 = (void*)0;
struct sType* type_before_1099;
void* __right_value1105 = (void*)0;
struct sType* type2_1100;
void* __right_value1106 = (void*)0;
char* fun_name2_1101;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
char* none_generics_name_1102;
void* __right_value1109 = (void*)0;
char* generics_fun_name_1103;
void* __right_value1110 = (void*)0;
struct sGenericsFun* generics_fun_1104;
void* __right_value1111 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_1108=0;
_Bool err_1109=0;
void* __right_value1112 = (void*)0;
char* __dec_obj186;
int i_1110;
void* __right_value1113 = (void*)0;
char* new_fun_name_1111;
void* __right_value1114 = (void*)0;
void* __right_value1115 = (void*)0;
char* __dec_obj187;
void* __right_value1116 = (void*)0;
char* __dec_obj188;
void* __right_value1117 = (void*)0;
char* __dec_obj189;
void* __right_value1118 = (void*)0;
char* user_real_fun_name_1112;
void* __right_value1119 = (void*)0;
struct sFun* user_finalizer_1113;
void* __right_value1120 = (void*)0;
struct sType* type2_1114;
struct sClass* klass_1115;
void* __right_value1121 = (void*)0;
void* __right_value1122 = (void*)0;
struct buffer* source_1116;
void* __right_value1123 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1123;
struct tuple2$2char$phsType$ph* it_1126;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1129=0;
struct sType* field_type_1130=0;
char* p_1133;
int sline_1134;
char* sname_1135;
char* head_1136;
struct buffer* source3_1137;
struct buffer* __dec_obj190;
void* __right_value1124 = (void*)0;
char* __dec_obj191;
void* __right_value1125 = (void*)0;
struct sBlock* block_1138;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
void* __right_value1128 = (void*)0;
struct sType* result_type_1139;
void* __right_value1129 = (void*)0;
char* name_1140;
void* __right_value1130 = (void*)0;
struct sType* self_type_1141;
struct sType* __list_values21___1143[1];
void* __right_value1131 = (void*)0;
void* __right_value1132 = (void*)0;
struct list$1sType$ph* param_types_1142;
void* __right_value1133 = (void*)0;
char* __list_values22___1144[1];
void* __right_value1134 = (void*)0;
void* __right_value1135 = (void*)0;
struct list$1char$ph* param_names_1145;
void* __right_value1136 = (void*)0;
void* __right_value1137 = (void*)0;
struct list$1char$ph* param_default_parametors_1146;
void* __right_value1138 = (void*)0;
void* __right_value1139 = (void*)0;
struct sFun* fun2_1147;
void* __right_value1140 = (void*)0;
void* __right_value1141 = (void*)0;
void* __right_value1142 = (void*)0;
void* __right_value1143 = (void*)0;
struct sFun* fun_1148;
void* __right_value1144 = (void*)0;
void* __right_value1145 = (void*)0;
void* __right_value1146 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1147 = (void*)0;
struct sNode* node_1149;
_Bool Value_1150;
struct buffer* __dec_obj192;
char* __dec_obj193;
char* __dec_obj194;
char* __dec_obj195;
void* __right_value1152 = (void*)0;
void* __right_value1153 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__438;
memset(&i_1110, 0, sizeof(int));
    last_code_1093=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj184=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1094=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj185=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj185 = come_decrement_ref_count2(__dec_obj185, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1095=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1096=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1097=((void*)0);
    finalizer_1098=((void*)0);
    type_before_1099=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1100=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1100->mHeap=(_Bool)0;
    fun_name2_1101=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_1098=((struct sFun*)(__right_value1107=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1101)));
        come_call_finalizer3(__right_value1107,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        finalizer_1098==((void*)0)) {
            none_generics_name_1102=(char*)come_increment_ref_count(get_none_generics_name(type2_1100->mClass->mName));
            generics_fun_name_1103=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1102,fun_name));
            generics_fun_1104=((struct sGenericsFun*)(__right_value1110=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1103)));
            come_call_finalizer3(__right_value1110,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            generics_fun_1104) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value1111=create_generics_fun((char*)come_increment_ref_count(fun_name2_1101),generics_fun_1104,type,info)));
                name_1108=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1109=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1111,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1109) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1098=((struct sFun*)(__right_value1112=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1108)));
                come_call_finalizer3(__right_value1112,sFun_finalize, 0, 1, 0, 0, (void*)0);
                (name_1108 = come_decrement_ref_count2(name_1108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1102 = come_decrement_ref_count2(none_generics_name_1102, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1103 = come_decrement_ref_count2(generics_fun_name_1103, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj186=real_fun_name_1097;
        real_fun_name_1097=(char*)come_increment_ref_count(fun_name2_1101);
        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1110=128-1;        i_1110>=1;        i_1110--        ){
            new_fun_name_1111=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1101,i_1110));
            finalizer_1098=((struct sFun*)(__right_value1114=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1111)));
            come_call_finalizer3(__right_value1114,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_1098) {
                __dec_obj187=fun_name2_1101;
                fun_name2_1101=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1111));
                __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1111 = come_decrement_ref_count2(new_fun_name_1111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1111 = come_decrement_ref_count2(new_fun_name_1111, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_1098==((void*)0)) {
            finalizer_1098=((struct sFun*)(__right_value1116=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1101)));
            come_call_finalizer3(__right_value1116,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj188=real_fun_name_1097;
        real_fun_name_1097=(char*)come_increment_ref_count(fun_name2_1101);
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1098==((void*)0)) {
        type=type_before_1099;
        __dec_obj189=real_fun_name_1097;
        real_fun_name_1097=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1112=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1113=((struct sFun*)(__right_value1119=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1112)));
        come_call_finalizer3(__right_value1119,sFun_finalize, 0, 1, 0, 0, (void*)0);
        type2_1114=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1114;
        klass_1115=type->mClass;
        if(        type->mPointerNum>0&&klass_1115->mStruct||type->mAllocaValue) {
            source_1116=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2928, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
            buffer_append_char(source_1116,123);
            if(            user_finalizer_1113) {
                char source2_1117[1024];
                memset(&source2_1117, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1117,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1112);
                buffer_append_str(source_1116,source2_1117);
            }
            klass_1115=((struct sClass*)(__right_value1123=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1115->mName)));
            come_call_finalizer3(__right_value1123,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1123=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1115->mFields)),it_1126=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1123));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1123));            it_1126=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1123))            ){
                multiple_assign_var36=it_1126;
                name_1129=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1130=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1130->mHeap) {
                    char source2_1131[1024];
                    memset(&source2_1131, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1131,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1129,name_1129,name_1129,name_1129);
                    buffer_append_str(source_1116,source2_1131);
                }
                else if(                field_type_1130->mChannel) {
                    char source2_1132[1024];
                    memset(&source2_1132, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1132,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1129,name_1129);
                    buffer_append_str(source_1116,source2_1132);
                    snprintf(source2_1132,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1129,name_1129);
                    buffer_append_str(source_1116,source2_1132);
                }
                (name_1129 = come_decrement_ref_count2(name_1129, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1130,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1123,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1116,125);
            p_1133=info->p;
            sline_1134=info->sline;
            sname_1135=(char*)come_increment_ref_count(info->sname);
            head_1136=info->head;
            source3_1137=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj190=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1116);
            come_call_finalizer3(__dec_obj190,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1116->buf;
            info->head=source_1116->buf;
            __dec_obj191=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1097));
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1138=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1139=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2977, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_1140=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1097));
            self_type_1141=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1141->mHeap=(_Bool)0;
            if(            self_type_1141->mPointerNum==0) {
                self_type_1141->mPointerNum=1;
            }
            if(            self_type_1141->mPointerNum>1) {
                self_type_1141->mPointerNum=1;
            }
            param_types_1142=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___1143[0]=self_type_1141,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2987, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values21___1143)));
            param_names_1145=(struct list$1char$ph*)come_increment_ref_count((__list_values22___1144[0]=((char*)(__right_value1133=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2988, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values22___1144)));
            (__right_value1133 = come_decrement_ref_count2(__right_value1133, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1146=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2989, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1146,((void*)0));
            result_type_1139->mStatic=(_Bool)0;
            result_type_1139->mUniq=(_Bool)0;
            result_type_1139->mInline=(_Bool)0;
            result_type_1139->mGenerate=(_Bool)0;
            fun2_1147=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1138=__builtin_string(name_1140)))));
            (__right_value1138 = come_decrement_ref_count2(__right_value1138, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1147==((void*)0)||fun2_1147->mExternal) {
                fun_1148=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2999, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1140),(struct sType*)come_increment_ref_count(result_type_1139),(struct list$1sType$ph*)come_increment_ref_count(param_types_1142),(struct list$1char$ph*)come_increment_ref_count(param_names_1145),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1146),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1138),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1140)),(struct sFun*)come_increment_ref_count(fun_1148));
                finalizer_1098=fun_1148;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3009, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1146=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3009, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1148),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1149=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1146,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                Value_1150=node_compile(node_1149,info);
                if(                !Value_1150) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1148,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1149) ? node_1149 = come_decrement_ref_count2(node_1149, ((struct sNode*)node_1149)->finalize, ((struct sNode*)node_1149)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_1098=fun2_1147;
            }
            __dec_obj192=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1137);
            come_call_finalizer3(__dec_obj192,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1133;
            info->head=head_1136;
            info->sline=sline_1134;
            __dec_obj193=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1135);
            __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1116,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1135 = come_decrement_ref_count2(sname_1135, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1137,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1138,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1139,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1140 = come_decrement_ref_count2(name_1140, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1141,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1142,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1145,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1146,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1147,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1112 = come_decrement_ref_count2(user_real_fun_name_1112, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1114,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1096;
    __dec_obj194=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1093);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj195=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1094);
    __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1095;
    __result_obj__438 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1153=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3034, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_1098,(char*)come_increment_ref_count(real_fun_name_1097)))));
    (last_code_1093 = come_decrement_ref_count2(last_code_1093, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1094 = come_decrement_ref_count2(last_code2_1094, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1097 = come_decrement_ref_count2(real_fun_name_1097, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_1099,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1100,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1101 = come_decrement_ref_count2(fun_name2_1101, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1153,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__438,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__438;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_1105;
unsigned int hash_1106;
unsigned int it_1107;
struct sGenericsFun* __result_obj__419;
struct sGenericsFun* __result_obj__420;
struct sGenericsFun* __result_obj__421;
struct sGenericsFun* __result_obj__422;
default_value_1105 = (void*)0;
    memset(&default_value_1105,0,sizeof(struct sGenericsFun*));
    hash_1106=string_get_hash_key(((char*)key))%self->size;
    it_1107=hash_1106;
    while((_Bool)1) {
        if(        self->item_existance[it_1107]) {
            if(            string_equals(self->keys[it_1107],key)) {
                __result_obj__419 = come_increment_ref_count(self->items[it_1107]);
                come_call_finalizer3(default_value_1105,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__419,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__419;
            }
            it_1107++;
            if(            it_1107>=self->size) {
                it_1107=0;
            }
            else if(            it_1107==hash_1106) {
                __result_obj__420 = come_increment_ref_count(default_value_1105);
                come_call_finalizer3(default_value_1105,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__420,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__420;
            }
        }
        else {
            __result_obj__421 = come_increment_ref_count(default_value_1105);
            come_call_finalizer3(default_value_1105,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__421,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__421;
        }
    }
    __result_obj__422 = come_increment_ref_count(default_value_1105);
    come_call_finalizer3(default_value_1105,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__422,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__422;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_1118;
unsigned int hash_1119;
unsigned int it_1120;
struct sClass* __result_obj__423;
struct sClass* __result_obj__424;
struct sClass* __result_obj__425;
struct sClass* __result_obj__426;
default_value_1118 = (void*)0;
    memset(&default_value_1118,0,sizeof(struct sClass*));
    hash_1119=string_get_hash_key(((char*)key))%self->size;
    it_1120=hash_1119;
    while((_Bool)1) {
        if(        self->item_existance[it_1120]) {
            if(            string_equals(self->keys[it_1120],key)) {
                __result_obj__423 = come_increment_ref_count(self->items[it_1120]);
                come_call_finalizer3(default_value_1118,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__423,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__423;
            }
            it_1120++;
            if(            it_1120>=self->size) {
                it_1120=0;
            }
            else if(            it_1120==hash_1119) {
                __result_obj__424 = come_increment_ref_count(default_value_1118);
                come_call_finalizer3(default_value_1118,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__424,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__424;
            }
        }
        else {
            __result_obj__425 = come_increment_ref_count(default_value_1118);
            come_call_finalizer3(default_value_1118,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__425,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__425;
        }
    }
    __result_obj__426 = come_increment_ref_count(default_value_1118);
    come_call_finalizer3(default_value_1118,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__426,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__426;
}

static void sClass_finalize(struct sClass* self){
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        (self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mFields!=((void*)0)) {
        come_call_finalizer3(self->mFields,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParentClassName!=((void*)0)) {
        (self->mParentClassName = come_decrement_ref_count2(self->mParentClassName, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        (self->mAttribute = come_decrement_ref_count2(self->mAttribute, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static void list$1tuple2$2char$phsType$ph$ph$p_finalize(struct list$1tuple2$2char$phsType$ph$ph* self){
struct list_item$1tuple2$2char$phsType$ph$ph* it_1121;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_1122;
    it_1121=self->head;
    while(it_1121!=((void*)0)) {
        prev_it_1122=it_1121;
        it_1121=it_1121->next;
        come_call_finalizer3(prev_it_1122,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1tuple2$2char$phsType$ph$ph$p_finalize(struct list_item$1tuple2$2char$phsType$ph$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,tuple2$2char$phsType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void tuple2$2char$phsType$ph$p_finalize(struct tuple2$2char$phsType$ph* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        come_call_finalizer3(self->v2,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_begin(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1124;
struct tuple2$2char$phsType$ph* __result_obj__427;
struct tuple2$2char$phsType$ph* __result_obj__428;
struct tuple2$2char$phsType$ph* result_1125;
struct tuple2$2char$phsType$ph* __result_obj__429;
result_1124 = (void*)0;
result_1125 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1124,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__427 = result_1124;
        return __result_obj__427;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__428 = self->it->item;
        return __result_obj__428;
    }
    memset(&result_1125,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__429 = result_1125;
    return __result_obj__429;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1127;
struct tuple2$2char$phsType$ph* __result_obj__430;
struct tuple2$2char$phsType$ph* __result_obj__431;
struct tuple2$2char$phsType$ph* result_1128;
struct tuple2$2char$phsType$ph* __result_obj__432;
result_1127 = (void*)0;
result_1128 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_1127,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__430 = result_1127;
        return __result_obj__430;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__431 = self->it->item;
        return __result_obj__431;
    }
    memset(&result_1128,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__432 = result_1128;
    return __result_obj__432;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__433;
void* __right_value1148 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1151;
void* __right_value1149 = (void*)0;
char* __dec_obj196;
struct tuple2$2sFun$pchar$ph* __result_obj__434;
    if(    self==(void*)0) {
        __result_obj__433 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__433,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__433;
    }
    result_1151=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1151->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj196=result_1151->v2;
        result_1151->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__434 = come_increment_ref_count(result_1151);
    come_call_finalizer3(result_1151,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__434,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__434;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1152;
    result_1152=0;
    result_1152+=int_get_hash_key(((int)self->v1));
    result_1152+=int_get_hash_key(((int)self->v2));
    return result_1152;
}

static _Bool tuple2$2sFun$pchar$ph_equals(struct tuple2$2sFun$pchar$ph* left, struct tuple2$2sFun$pchar$ph* right){
    if(    !sFun_equals(left->v1,right->v1)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->v2,right->v2)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sFun_equals(struct sFun* left, struct sFun* right){
    if(    !string_equals(left->mName,right->mName)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mResultType,right->mResultType)) {
        return (_Bool)0;
    }
    if(    !list$1sType$ph$p_equals(left->mParamTypes,right->mParamTypes)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamNames,right->mParamNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mParamDefaultParametors,right->mParamDefaultParametors)) {
        return (_Bool)0;
    }
    if(    !sType_equals(left->mLambdaType,right->mLambdaType)) {
        return (_Bool)0;
    }
    if(    !sBlock_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSource,right->mSource)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead,right->mSourceHead)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceHead2,right->mSourceHead2)) {
        return (_Bool)0;
    }
    if(    !buffer_equals(left->mSourceDefer,right->mSourceDefer)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mStatic,right->mStatic)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mInline,right->mInline)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mUniq,right->mUniq)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mExternal,right->mExternal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mNoResultType,right->mNoResultType)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mAttribute,right->mAttribute)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mFunAttribute,right->mFunAttribute)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right){
    if(    !list$1sNode$ph$p_equals(left->mNodes,right->mNodes)) {
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

static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right){
    if(    !map$2char$phsVar$ph$p_equals(left->mVars,right->mVars)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !sVarTable_equals(left->mParent,right->mParent)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right){
int n_1153;
_Bool result_1154;
char* it_1155;
char* default_value_1156;
char* it2_1157;
struct sVar* default_value2_1160;
void* __right_value1150 = (void*)0;
struct sVar* item_1161;
void* __right_value1151 = (void*)0;
struct sVar* item2_1162;
default_value_1156 = (void*)0;
default_value2_1160 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_1153=0;
    result_1154=(_Bool)1;
    for(    it_1155=list$1char$p$p_begin(left->key_list);    !list$1char$p$p_end(left->key_list);    it_1155=list$1char$p$p_next(left->key_list)    ){
        memset(&default_value_1156,0,sizeof(char*));
        it2_1157=list$1char$p$p_item(right->key_list,n_1153,default_value_1156);
        if(        string_equals(it_1155,it2_1157)) {
            memset(&default_value2_1160,0,sizeof(struct sVar*));
            item_1161=((struct sVar*)(__right_value1150=map$2char$phsVar$ph$p_at(left,it_1155,(struct sVar*)come_increment_ref_count(default_value2_1160))));
            come_call_finalizer3(__right_value1150,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_1162=((struct sVar*)(__right_value1151=map$2char$phsVar$ph$p_at(right,it2_1157,(struct sVar*)come_increment_ref_count(default_value2_1160))));
            come_call_finalizer3(__right_value1151,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_1161,item2_1162)) {
                result_1154=(_Bool)0;
            }
            come_call_finalizer3(default_value2_1160,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_1154=(_Bool)0;
        }
        n_1153++;
        (default_value_1156 = come_decrement_ref_count2(default_value_1156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_1154;
}

static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value){
struct list_item$1char$p* it_1158;
int i_1159;
char* __result_obj__435;
char* __result_obj__436;
    if(    position<0) {
        position+=self->len;
    }
    it_1158=self->head;
    i_1159=0;
    while(it_1158!=((void*)0)) {
        if(        position==i_1159) {
            __result_obj__435 = it_1158->item;
            return __result_obj__435;
        }
        it_1158=it_1158->next;
        i_1159++;
    }
    __result_obj__436 = default_value;
    return __result_obj__436;
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
    if(    !bool_equals(left->mGlobal,right->mGlobal)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mAllocaValue,right->mAllocaValue)) {
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

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj197;
struct tuple2$2sFun$pchar$ph* __result_obj__437;
    self->v1=v1;
    __dec_obj197=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__437 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__437,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__437;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1163;
char* __dec_obj198;
char* last_code2_1164;
char* __dec_obj199;
_Bool comma_instead_of_semicolon_1165;
struct sClass* current_stack_frame_struct_1166;
struct sFun* equaler_1167;
void* __right_value1154 = (void*)0;
char* real_fun_name_1168;
void* __right_value1155 = (void*)0;
struct sType* type2_1169;
struct sClass* klass_1170;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
struct buffer* source_1171;
char* name_1172;
void* __right_value1158 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1174;
struct tuple2$2char$phsType$ph* it_1175;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1176=0;
struct sType* field_type_1177=0;
char* p_1179;
int sline_1180;
char* sname_1181;
char* head_1182;
struct buffer* source3_1183;
struct buffer* __dec_obj200;
void* __right_value1159 = (void*)0;
char* __dec_obj201;
void* __right_value1160 = (void*)0;
struct sBlock* block_1184;
void* __right_value1161 = (void*)0;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct sType* result_type_1185;
void* __right_value1164 = (void*)0;
char* name_1186;
void* __right_value1165 = (void*)0;
struct sType* left_type_1187;
void* __right_value1166 = (void*)0;
struct sType* right_type_1188;
struct sType* __list_values23___1190[2];
void* __right_value1167 = (void*)0;
void* __right_value1168 = (void*)0;
struct list$1sType$ph* param_types_1189;
void* __right_value1169 = (void*)0;
void* __right_value1170 = (void*)0;
char* __list_values24___1191[2];
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
struct list$1char$ph* param_names_1192;
void* __right_value1173 = (void*)0;
void* __right_value1174 = (void*)0;
struct list$1char$ph* param_default_parametors_1193;
void* __right_value1175 = (void*)0;
void* __right_value1176 = (void*)0;
struct sFun* fun2_1194;
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
struct sFun* fun_1195;
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
void* __right_value1183 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1184 = (void*)0;
struct sNode* node_1196;
_Bool Value_1197;
void* __right_value1185 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1198=0;
char* Err_1199=0;
struct buffer* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
char* __dec_obj205;
void* __right_value1186 = (void*)0;
void* __right_value1187 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__439;
    last_code_1163=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj198=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1164=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj199=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1165=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1166=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1167=((void*)0);
    real_fun_name_1168=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1169=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1169;
    klass_1170=type->mClass;
    if(    type->mPointerNum>0&&!klass_1170->mNumber) {
        source_1171=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3060, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1171,123);
        if(        klass_1170->mProtocol) {
            name_1172="_protocol_obj";
            char source2_1173[1024];
            memset(&source2_1173, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1173,1024,"return left.%s.equals(right.%s);\n",name_1172,name_1172);
            buffer_append_str(source_1171,source2_1173);
        }
        else {
            klass_1170=((struct sClass*)(__right_value1158=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1170->mName)));
            come_call_finalizer3(__right_value1158,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1174=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1170->mFields)),it_1175=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1174));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1174));            it_1175=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1174))            ){
                multiple_assign_var37=it_1175;
                name_1176=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1177=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1178[1024];
                memset(&source2_1178, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1178,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1176,name_1176,name_1176);
                buffer_append_str(source_1171,source2_1178);
                (name_1176 = come_decrement_ref_count2(name_1176, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1177,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1174,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1171,"return true;");
        buffer_append_char(source_1171,125);
        p_1179=info->p;
        sline_1180=info->sline;
        sname_1181=(char*)come_increment_ref_count(info->sname);
        head_1182=info->head;
        source3_1183=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj200=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1171);
        come_call_finalizer3(__dec_obj200,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1171->buf;
        info->head=source_1171->buf;
        __dec_obj201=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1168));
        __dec_obj201 = come_decrement_ref_count2(__dec_obj201, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1184=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1185=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3100, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1186=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1168));
        left_type_1187=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1187->mHeap=(_Bool)0;
        right_type_1188=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1188->mHeap=(_Bool)0;
        param_types_1189=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___1190[0]=left_type_1187,
__list_values23___1190[1]=right_type_1188,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3106, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values23___1190)));
        param_names_1192=(struct list$1char$ph*)come_increment_ref_count((__list_values24___1191[0]=((char*)(__right_value1169=__builtin_string("left"))),
__list_values24___1191[1]=((char*)(__right_value1170=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3107, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values24___1191)));
        (__right_value1169 = come_decrement_ref_count2(__right_value1169, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1170 = come_decrement_ref_count2(__right_value1170, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1193=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3108, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1193,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1193,((void*)0));
        result_type_1185->mStatic=(_Bool)0;
        result_type_1185->mUniq=(_Bool)0;
        result_type_1185->mInline=(_Bool)0;
        result_type_1185->mGenerate=(_Bool)0;
        fun2_1194=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1175=__builtin_string(name_1186)))));
        (__right_value1175 = come_decrement_ref_count2(__right_value1175, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1194==((void*)0)||fun2_1194->mExternal) {
            fun_1195=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3119, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1186),(struct sType*)come_increment_ref_count(result_type_1185),(struct list$1sType$ph*)come_increment_ref_count(param_types_1189),(struct list$1char$ph*)come_increment_ref_count(param_names_1192),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1193),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1184),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1186)),(struct sFun*)come_increment_ref_count(fun_1195));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3127, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1183=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3127, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1195),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1196=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1183,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1197=node_compile(node_1196,info);
            if(            !Value_1197) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1185=err_msg(info,"compiling error")));
                come_exception_var_c24_1198=multiple_assign_var38->v1;
                Err_1199=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1199)?(puts(Err_1199),exit(0)):(0));
                come_call_finalizer3(__right_value1185,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1199 = come_decrement_ref_count2(Err_1199, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1167=fun_1195;
            come_call_finalizer3(fun_1195,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1196) ? node_1196 = come_decrement_ref_count2(node_1196, ((struct sNode*)node_1196)->finalize, ((struct sNode*)node_1196)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1167=fun2_1194;
        }
        __dec_obj202=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1183);
        come_call_finalizer3(__dec_obj202,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1179;
        info->head=head_1182;
        info->sline=sline_1180;
        __dec_obj203=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1181);
        __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1171,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1181 = come_decrement_ref_count2(sname_1181, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1183,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1184,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1185,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1186 = come_decrement_ref_count2(name_1186, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1187,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1188,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1189,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1192,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1193,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1194,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1166;
    __dec_obj204=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1163);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj205=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1164);
    __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1165;
    __result_obj__439 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1187=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3153, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1167,(char*)come_increment_ref_count(real_fun_name_1168)))));
    (last_code_1163 = come_decrement_ref_count2(last_code_1163, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1164 = come_decrement_ref_count2(last_code2_1164, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1168 = come_decrement_ref_count2(real_fun_name_1168, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1169,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1187,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__439,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__439;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1200;
char* __dec_obj206;
char* last_code2_1201;
char* __dec_obj207;
_Bool comma_instead_of_semicolon_1202;
struct sClass* current_stack_frame_struct_1203;
struct sFun* equaler_1204;
void* __right_value1188 = (void*)0;
char* real_fun_name_1205;
void* __right_value1189 = (void*)0;
struct sType* type2_1206;
struct sClass* klass_1207;
void* __right_value1190 = (void*)0;
void* __right_value1191 = (void*)0;
struct buffer* source_1208;
char* name_1209;
int i_1212;
void* __right_value1192 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1213;
struct tuple2$2char$phsType$ph* it_1214;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1215=0;
struct sType* field_type_1216=0;
char* p_1220;
int sline_1221;
char* sname_1222;
char* head_1223;
struct buffer* source3_1224;
struct buffer* __dec_obj208;
void* __right_value1193 = (void*)0;
char* __dec_obj209;
void* __right_value1194 = (void*)0;
struct sBlock* block_1225;
void* __right_value1195 = (void*)0;
void* __right_value1196 = (void*)0;
void* __right_value1197 = (void*)0;
struct sType* result_type_1226;
void* __right_value1198 = (void*)0;
char* name_1227;
void* __right_value1199 = (void*)0;
struct sType* left_type_1228;
void* __right_value1200 = (void*)0;
struct sType* right_type_1229;
struct sType* __list_values25___1231[2];
void* __right_value1201 = (void*)0;
void* __right_value1202 = (void*)0;
struct list$1sType$ph* param_types_1230;
void* __right_value1203 = (void*)0;
void* __right_value1204 = (void*)0;
char* __list_values26___1232[2];
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
struct list$1char$ph* param_names_1233;
void* __right_value1207 = (void*)0;
void* __right_value1208 = (void*)0;
struct list$1char$ph* param_default_parametors_1234;
void* __right_value1209 = (void*)0;
void* __right_value1210 = (void*)0;
struct sFun* fun2_1235;
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
struct sFun* fun_1236;
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
void* __right_value1217 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1218 = (void*)0;
struct sNode* node_1237;
_Bool Value_1238;
void* __right_value1219 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1239=0;
char* Err_1240=0;
struct buffer* __dec_obj210;
char* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
void* __right_value1220 = (void*)0;
void* __right_value1221 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__440;
    last_code_1200=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj206=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1201=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj207=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1202=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1203=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1204=((void*)0);
    real_fun_name_1205=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1206=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1206;
    klass_1207=type->mClass;
    if(    type->mPointerNum>0&&!klass_1207->mNumber) {
        source_1208=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3178, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1208,123);
        if(        klass_1207->mProtocol) {
            name_1209="_protocol_obj";
            char source2_1210[1024];
            memset(&source2_1210, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1210,1024,"return left.%s !== right.%s;\n",name_1209,name_1209);
            buffer_append_str(source_1208,source2_1210);
        }
        else {
            char source2_1211[1024];
            memset(&source2_1211, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1211,1024,"return !(");
            buffer_append_str(source_1208,source2_1211);
            snprintf(source2_1211,1024,"( ");
            buffer_append_str(source_1208,source2_1211);
            i_1212=0;
            klass_1207=((struct sClass*)(__right_value1192=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1207->mName)));
            come_call_finalizer3(__right_value1192,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1213=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1207->mFields)),it_1214=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1213));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1213));            it_1214=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1213))            ){
                multiple_assign_var39=it_1214;
                name_1215=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1216=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1217[1024];
                memset(&source2_1217, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1217,1024,"(left.%s === right.%s)",name_1215,name_1215,name_1215);
                buffer_append_str(source_1208,source2_1217);
                if(                i_1212==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1207->mFields)-1) {
                    char source2_1218[1024];
                    memset(&source2_1218, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1218,1024,"));");
                    buffer_append_str(source_1208,source2_1218);
                }
                else {
                    char source2_1219[1024];
                    memset(&source2_1219, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1219,1024," && ");
                    buffer_append_str(source_1208,source2_1219);
                }
                i_1212++;
                (name_1215 = come_decrement_ref_count2(name_1215, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1216,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1213,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1208,125);
        p_1220=info->p;
        sline_1221=info->sline;
        sname_1222=(char*)come_increment_ref_count(info->sname);
        head_1223=info->head;
        source3_1224=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj208=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1208);
        come_call_finalizer3(__dec_obj208,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1208->buf;
        info->head=source_1208->buf;
        __dec_obj209=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1205));
        __dec_obj209 = come_decrement_ref_count2(__dec_obj209, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1225=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1226=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3238, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1227=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1205));
        left_type_1228=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1228->mHeap=(_Bool)0;
        right_type_1229=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1229->mHeap=(_Bool)0;
        param_types_1230=(struct list$1sType$ph*)come_increment_ref_count((__list_values25___1231[0]=left_type_1228,
__list_values25___1231[1]=right_type_1229,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3244, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values25___1231)));
        param_names_1233=(struct list$1char$ph*)come_increment_ref_count((__list_values26___1232[0]=((char*)(__right_value1203=__builtin_string("left"))),
__list_values26___1232[1]=((char*)(__right_value1204=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3245, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values26___1232)));
        (__right_value1203 = come_decrement_ref_count2(__right_value1203, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1204 = come_decrement_ref_count2(__right_value1204, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1234=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3246, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1234,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1234,((void*)0));
        result_type_1226->mStatic=(_Bool)0;
        result_type_1226->mUniq=(_Bool)0;
        result_type_1226->mInline=(_Bool)0;
        result_type_1226->mGenerate=(_Bool)0;
        fun2_1235=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1209=__builtin_string(name_1227)))));
        (__right_value1209 = come_decrement_ref_count2(__right_value1209, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1235==((void*)0)||fun2_1235->mExternal) {
            fun_1236=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3257, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1227),(struct sType*)come_increment_ref_count(result_type_1226),(struct list$1sType$ph*)come_increment_ref_count(param_types_1230),(struct list$1char$ph*)come_increment_ref_count(param_names_1233),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1234),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1225),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1227)),(struct sFun*)come_increment_ref_count(fun_1236));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3265, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1217=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3265, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1236),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1237=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1217,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1238=node_compile(node_1237,info);
            if(            !Value_1238) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1219=err_msg(info,"compiling error")));
                come_exception_var_c25_1239=multiple_assign_var40->v1;
                Err_1240=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1240)?(puts(Err_1240),exit(0)):(0));
                come_call_finalizer3(__right_value1219,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1240 = come_decrement_ref_count2(Err_1240, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1204=fun_1236;
            come_call_finalizer3(fun_1236,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1237) ? node_1237 = come_decrement_ref_count2(node_1237, ((struct sNode*)node_1237)->finalize, ((struct sNode*)node_1237)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1204=fun2_1235;
        }
        __dec_obj210=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1224);
        come_call_finalizer3(__dec_obj210,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1220;
        info->head=head_1223;
        info->sline=sline_1221;
        __dec_obj211=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1222);
        __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1208,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1222 = come_decrement_ref_count2(sname_1222, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1224,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1225,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1226,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1227 = come_decrement_ref_count2(name_1227, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1228,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1229,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1230,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1233,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1234,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1235,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1203;
    __dec_obj212=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1200);
    __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj213=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1201);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1202;
    __result_obj__440 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1221=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3291, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1204,(char*)come_increment_ref_count(real_fun_name_1205)))));
    (last_code_1200 = come_decrement_ref_count2(last_code_1200, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1201 = come_decrement_ref_count2(last_code2_1201, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1205 = come_decrement_ref_count2(real_fun_name_1205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1206,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1221,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__440,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__440;
}

static int list$1tuple2$2char$phsType$ph$ph$p_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1241;
char* __dec_obj214;
char* last_code2_1242;
char* __dec_obj215;
_Bool comma_instead_of_semicolon_1243;
struct sClass* current_stack_frame_struct_1244;
struct sFun* equaler_1245;
void* __right_value1222 = (void*)0;
char* real_fun_name_1246;
void* __right_value1223 = (void*)0;
struct sType* type2_1247;
struct sClass* klass_1248;
void* __right_value1224 = (void*)0;
void* __right_value1225 = (void*)0;
struct buffer* source_1249;
char* name_1250;
int i_1253;
void* __right_value1226 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1254;
struct tuple2$2char$phsType$ph* it_1255;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1256=0;
struct sType* field_type_1257=0;
char* p_1261;
int sline_1262;
char* sname_1263;
char* head_1264;
struct buffer* source3_1265;
struct buffer* __dec_obj216;
void* __right_value1227 = (void*)0;
char* __dec_obj217;
void* __right_value1228 = (void*)0;
struct sBlock* block_1266;
void* __right_value1229 = (void*)0;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct sType* result_type_1267;
void* __right_value1232 = (void*)0;
char* name_1268;
void* __right_value1233 = (void*)0;
struct sType* left_type_1269;
void* __right_value1234 = (void*)0;
struct sType* right_type_1270;
struct sType* __list_values27___1272[2];
void* __right_value1235 = (void*)0;
void* __right_value1236 = (void*)0;
struct list$1sType$ph* param_types_1271;
void* __right_value1237 = (void*)0;
void* __right_value1238 = (void*)0;
char* __list_values28___1273[2];
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
struct list$1char$ph* param_names_1274;
void* __right_value1241 = (void*)0;
void* __right_value1242 = (void*)0;
struct list$1char$ph* param_default_parametors_1275;
void* __right_value1243 = (void*)0;
void* __right_value1244 = (void*)0;
struct sFun* fun2_1276;
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
struct sFun* fun_1277;
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
void* __right_value1251 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1252 = (void*)0;
struct sNode* node_1278;
_Bool Value_1279;
void* __right_value1253 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1280=0;
char* Err_1281=0;
struct buffer* __dec_obj218;
char* __dec_obj219;
char* __dec_obj220;
char* __dec_obj221;
void* __right_value1254 = (void*)0;
void* __right_value1255 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__441;
    last_code_1241=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj214=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1242=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj215=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1243=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1244=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1245=((void*)0);
    real_fun_name_1246=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1247=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1247;
    klass_1248=type->mClass;
    if(    type->mPointerNum>0&&!klass_1248->mNumber) {
        source_1249=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3316, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1249,123);
        if(        klass_1248->mProtocol) {
            name_1250="_protocol_obj";
            char source2_1251[1024];
            memset(&source2_1251, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1251,1024,"return !left.%s.equals(right.%s);\n",name_1250,name_1250);
            buffer_append_str(source_1249,source2_1251);
        }
        else {
            char source2_1252[1024];
            memset(&source2_1252, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1252,1024,"return !(");
            buffer_append_str(source_1249,source2_1252);
            i_1253=0;
            klass_1248=((struct sClass*)(__right_value1226=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1248->mName)));
            come_call_finalizer3(__right_value1226,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1254=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1248->mFields)),it_1255=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1254));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1254));            it_1255=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1254))            ){
                multiple_assign_var41=it_1255;
                name_1256=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1257=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1258[1024];
                memset(&source2_1258, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1258,1024,"left.%s.equals(right.%s)",name_1256,name_1256);
                buffer_append_str(source_1249,source2_1258);
                if(                i_1253==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1248->mFields)-1) {
                    char source2_1259[1024];
                    memset(&source2_1259, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1259,1024,");");
                    buffer_append_str(source_1249,source2_1259);
                }
                else {
                    char source2_1260[1024];
                    memset(&source2_1260, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1260,1024," && ");
                    buffer_append_str(source_1249,source2_1260);
                }
                i_1253++;
                (name_1256 = come_decrement_ref_count2(name_1256, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1257,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1254,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1249,125);
        p_1261=info->p;
        sline_1262=info->sline;
        sname_1263=(char*)come_increment_ref_count(info->sname);
        head_1264=info->head;
        source3_1265=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj216=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1249);
        come_call_finalizer3(__dec_obj216,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1249->buf;
        info->head=source_1249->buf;
        __dec_obj217=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1246));
        __dec_obj217 = come_decrement_ref_count2(__dec_obj217, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1266=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1267=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3373, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1268=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1246));
        left_type_1269=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1269->mHeap=(_Bool)0;
        right_type_1270=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1270->mHeap=(_Bool)0;
        param_types_1271=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___1272[0]=left_type_1269,
__list_values27___1272[1]=right_type_1270,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3379, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values27___1272)));
        param_names_1274=(struct list$1char$ph*)come_increment_ref_count((__list_values28___1273[0]=((char*)(__right_value1237=__builtin_string("left"))),
__list_values28___1273[1]=((char*)(__right_value1238=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3380, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values28___1273)));
        (__right_value1237 = come_decrement_ref_count2(__right_value1237, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1238 = come_decrement_ref_count2(__right_value1238, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1275=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3381, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1275,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1275,((void*)0));
        result_type_1267->mStatic=(_Bool)0;
        result_type_1267->mUniq=(_Bool)0;
        result_type_1267->mInline=(_Bool)0;
        result_type_1267->mGenerate=(_Bool)0;
        fun2_1276=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1243=__builtin_string(name_1268)))));
        (__right_value1243 = come_decrement_ref_count2(__right_value1243, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1276==((void*)0)||fun2_1276->mExternal) {
            fun_1277=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3392, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1268),(struct sType*)come_increment_ref_count(result_type_1267),(struct list$1sType$ph*)come_increment_ref_count(param_types_1271),(struct list$1char$ph*)come_increment_ref_count(param_names_1274),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1275),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1266),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1268)),(struct sFun*)come_increment_ref_count(fun_1277));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3400, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1251=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3400, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1277),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1278=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1251,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1279=node_compile(node_1278,info);
            if(            !Value_1279) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value1253=err_msg(info,"compiling error")));
                come_exception_var_c26_1280=multiple_assign_var42->v1;
                Err_1281=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1281)?(puts(Err_1281),exit(0)):(0));
                come_call_finalizer3(__right_value1253,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1281 = come_decrement_ref_count2(Err_1281, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1245=fun_1277;
            come_call_finalizer3(fun_1277,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1278) ? node_1278 = come_decrement_ref_count2(node_1278, ((struct sNode*)node_1278)->finalize, ((struct sNode*)node_1278)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1245=fun2_1276;
        }
        __dec_obj218=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1265);
        come_call_finalizer3(__dec_obj218,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1261;
        info->head=head_1264;
        info->sline=sline_1262;
        __dec_obj219=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1263);
        __dec_obj219 = come_decrement_ref_count2(__dec_obj219, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1249,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1263 = come_decrement_ref_count2(sname_1263, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1265,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1266,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1267,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1268 = come_decrement_ref_count2(name_1268, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1269,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1270,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1271,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1274,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1275,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1276,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1244;
    __dec_obj220=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1241);
    __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj221=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1242);
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1243;
    __result_obj__441 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1255=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3426, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1245,(char*)come_increment_ref_count(real_fun_name_1246)))));
    (last_code_1241 = come_decrement_ref_count2(last_code_1241, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1242 = come_decrement_ref_count2(last_code2_1242, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1246 = come_decrement_ref_count2(real_fun_name_1246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1247,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1255,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__441,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__441;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1282;
char* __dec_obj222;
char* last_code2_1283;
char* __dec_obj223;
_Bool comma_instead_of_semicolon_1284;
struct sClass* current_stack_frame_struct_1285;
struct sFun* equaler_1286;
void* __right_value1256 = (void*)0;
char* real_fun_name_1287;
void* __right_value1257 = (void*)0;
struct sType* type2_1288;
struct sClass* klass_1289;
void* __right_value1258 = (void*)0;
void* __right_value1259 = (void*)0;
struct buffer* source_1290;
char* name_1291;
void* __right_value1260 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1294;
struct tuple2$2char$phsType$ph* it_1295;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1296=0;
struct sType* field_type_1297=0;
char* p_1299;
int sline_1300;
char* sname_1301;
char* head_1302;
struct buffer* source3_1303;
struct buffer* __dec_obj224;
void* __right_value1261 = (void*)0;
char* __dec_obj225;
void* __right_value1262 = (void*)0;
struct sBlock* block_1304;
void* __right_value1263 = (void*)0;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct sType* result_type_1305;
void* __right_value1266 = (void*)0;
char* name_1306;
void* __right_value1267 = (void*)0;
struct sType* left_type_1307;
void* __right_value1268 = (void*)0;
struct sType* right_type_1308;
struct sType* __list_values29___1310[2];
void* __right_value1269 = (void*)0;
void* __right_value1270 = (void*)0;
struct list$1sType$ph* param_types_1309;
void* __right_value1271 = (void*)0;
void* __right_value1272 = (void*)0;
char* __list_values30___1311[2];
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
struct list$1char$ph* param_names_1312;
void* __right_value1275 = (void*)0;
void* __right_value1276 = (void*)0;
struct list$1char$ph* param_default_parametors_1313;
void* __right_value1277 = (void*)0;
void* __right_value1278 = (void*)0;
struct sFun* fun2_1314;
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
struct sFun* fun_1315;
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
void* __right_value1285 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1286 = (void*)0;
struct sNode* node_1316;
_Bool Value_1317;
void* __right_value1287 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1318=0;
char* Err_1319=0;
struct buffer* __dec_obj226;
char* __dec_obj227;
char* __dec_obj228;
char* __dec_obj229;
void* __right_value1288 = (void*)0;
void* __right_value1289 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__442;
    last_code_1282=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj222=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1283=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj223=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1284=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1285=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1286=((void*)0);
    real_fun_name_1287=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1288=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1288;
    klass_1289=type->mClass;
    if(    type->mPointerNum>0&&!klass_1289->mNumber) {
        source_1290=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3451, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_char(source_1290,123);
        if(        klass_1289->mProtocol) {
            name_1291="_protocol_obj";
            char source2_1292[1024];
            memset(&source2_1292, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1292,1024,"return left.%s === right.%s;\n",name_1291,name_1291);
            buffer_append_str(source_1290,source2_1292);
        }
        else {
            char source2_1293[1024];
            memset(&source2_1293, 0, sizeof(char)            *(1024)            );
            klass_1289=((struct sClass*)(__right_value1260=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1289->mName)));
            come_call_finalizer3(__right_value1260,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1294=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1289->mFields)),it_1295=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1294));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1294));            it_1295=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1294))            ){
                multiple_assign_var43=it_1295;
                name_1296=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1297=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1298[1024];
                memset(&source2_1298, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1298,1024,"if(left.%s !== right.%s) { return false; }\n",name_1296,name_1296,name_1296);
                buffer_append_str(source_1290,source2_1298);
                (name_1296 = come_decrement_ref_count2(name_1296, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1297,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1294,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1290,"return true;\n");
        buffer_append_char(source_1290,125);
        p_1299=info->p;
        sline_1300=info->sline;
        sname_1301=(char*)come_increment_ref_count(info->sname);
        head_1302=info->head;
        source3_1303=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj224=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1290);
        come_call_finalizer3(__dec_obj224,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1290->buf;
        info->head=source_1290->buf;
        __dec_obj225=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1287));
        __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1304=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1305=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3493, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1306=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1287));
        left_type_1307=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1307->mHeap=(_Bool)0;
        right_type_1308=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1308->mHeap=(_Bool)0;
        param_types_1309=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1310[0]=left_type_1307,
__list_values29___1310[1]=right_type_1308,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3499, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values29___1310)));
        param_names_1312=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1311[0]=((char*)(__right_value1271=__builtin_string("left"))),
__list_values30___1311[1]=((char*)(__right_value1272=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3500, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values30___1311)));
        (__right_value1271 = come_decrement_ref_count2(__right_value1271, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1272 = come_decrement_ref_count2(__right_value1272, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1313=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3501, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1313,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1313,((void*)0));
        result_type_1305->mStatic=(_Bool)0;
        result_type_1305->mUniq=(_Bool)0;
        result_type_1305->mInline=(_Bool)0;
        result_type_1305->mGenerate=(_Bool)0;
        fun2_1314=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1277=__builtin_string(name_1306)))));
        (__right_value1277 = come_decrement_ref_count2(__right_value1277, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1314==((void*)0)||fun2_1314->mExternal) {
            fun_1315=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3512, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1306),(struct sType*)come_increment_ref_count(result_type_1305),(struct list$1sType$ph*)come_increment_ref_count(param_types_1309),(struct list$1char$ph*)come_increment_ref_count(param_names_1312),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1313),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1304),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1306)),(struct sFun*)come_increment_ref_count(fun_1315));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3520, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1285=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3520, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1315),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1316=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1285,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1317=node_compile(node_1316,info);
            if(            !Value_1317) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value1287=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1318=multiple_assign_var44->v1;
                Err_1319=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1319)?(puts(Err_1319),exit(0)):(0));
                come_call_finalizer3(__right_value1287,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1319 = come_decrement_ref_count2(Err_1319, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1286=fun_1315;
            come_call_finalizer3(fun_1315,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1316) ? node_1316 = come_decrement_ref_count2(node_1316, ((struct sNode*)node_1316)->finalize, ((struct sNode*)node_1316)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1286=fun2_1314;
        }
        __dec_obj226=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1303);
        come_call_finalizer3(__dec_obj226,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1299;
        info->head=head_1302;
        info->sline=sline_1300;
        __dec_obj227=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1301);
        __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1290,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1301 = come_decrement_ref_count2(sname_1301, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1303,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1304,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1305,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1306 = come_decrement_ref_count2(name_1306, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1307,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1308,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1309,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1312,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1313,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1314,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1285;
    __dec_obj228=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1282);
    __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj229=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1283);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1284;
    __result_obj__442 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1289=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3546, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1286,(char*)come_increment_ref_count(real_fun_name_1287)))));
    (last_code_1282 = come_decrement_ref_count2(last_code_1282, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1283 = come_decrement_ref_count2(last_code2_1283, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1287 = come_decrement_ref_count2(real_fun_name_1287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1288,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1289,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__442,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__442;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__443;
char* last_code_1320;
char* __dec_obj230;
char* last_code2_1321;
char* __dec_obj231;
_Bool comma_instead_of_semicolon_1322;
struct sClass* current_stack_frame_struct_1323;
struct sFun* cloner_1324;
void* __right_value1292 = (void*)0;
char* real_fun_name_1325;
void* __right_value1293 = (void*)0;
struct sType* type2_1326;
struct sClass* klass_1327;
char* fun_name2_1328;
void* __right_value1294 = (void*)0;
char* none_generics_name_1329;
void* __right_value1295 = (void*)0;
struct sType* obj_type_1330;
void* __right_value1296 = (void*)0;
char* __dec_obj232;
void* __right_value1297 = (void*)0;
char* fun_name3_1331;
void* __right_value1298 = (void*)0;
struct sGenericsFun* generics_fun_1332;
void* __right_value1299 = (void*)0;
void* __right_value1300 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1333=0;
_Bool err_1334=0;
void* __right_value1301 = (void*)0;
void* __right_value1302 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__444;
void* __right_value1303 = (void*)0;
void* __right_value1304 = (void*)0;
char* __dec_obj233;
void* __right_value1305 = (void*)0;
char* __dec_obj234;
int i_1335;
void* __right_value1306 = (void*)0;
char* new_fun_name_1336;
void* __right_value1307 = (void*)0;
void* __right_value1308 = (void*)0;
char* __dec_obj235;
void* __right_value1309 = (void*)0;
char* __dec_obj236;
void* __right_value1310 = (void*)0;
void* __right_value1311 = (void*)0;
struct buffer* source_1337;
void* __right_value1312 = (void*)0;
char* name_1338;
void* __right_value1313 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1340;
struct tuple2$2char$phsType$ph* it_1341;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1342=0;
struct sType* field_type_1343=0;
void* __right_value1314 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1346;
struct tuple2$2char$phsType$ph* it_1347;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1348=0;
struct sType* field_type_1349=0;
void* __right_value1315 = (void*)0;
char* user_real_fun_name_1353;
void* __right_value1316 = (void*)0;
struct sFun* user_cloner_1354;
char* p_1356;
int sline_1357;
char* sname_1358;
struct buffer* source3_1359;
char* head_1360;
struct buffer* __dec_obj237;
void* __right_value1317 = (void*)0;
char* __dec_obj238;
void* __right_value1318 = (void*)0;
struct sBlock* block_1361;
void* __right_value1319 = (void*)0;
struct sType* result_type_1362;
void* __right_value1320 = (void*)0;
char* name_1363;
void* __right_value1321 = (void*)0;
struct sType* self_type_1364;
struct sType* __list_values31___1366[1];
void* __right_value1322 = (void*)0;
void* __right_value1323 = (void*)0;
struct list$1sType$ph* param_types_1365;
void* __right_value1324 = (void*)0;
char* __list_values32___1367[1];
void* __right_value1325 = (void*)0;
void* __right_value1326 = (void*)0;
struct list$1char$ph* param_names_1368;
void* __right_value1327 = (void*)0;
void* __right_value1328 = (void*)0;
struct list$1char$ph* param_default_parametors_1369;
void* __right_value1329 = (void*)0;
void* __right_value1330 = (void*)0;
struct sFun* fun2_1370;
void* __right_value1331 = (void*)0;
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
void* __right_value1334 = (void*)0;
struct sFun* fun_1371;
void* __right_value1335 = (void*)0;
void* __right_value1336 = (void*)0;
void* __right_value1337 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1338 = (void*)0;
struct sNode* node_1372;
_Bool Value_1373;
void* __right_value1339 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1374=0;
char* Err_1375=0;
char* __dec_obj239;
struct buffer* __dec_obj240;
char* __dec_obj241;
char* __dec_obj242;
void* __right_value1340 = (void*)0;
void* __right_value1341 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__445;
fun_name2_1328 = (void*)0;
memset(&i_1335, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__443 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1291=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3552, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value1291,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__443,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__443;
    }
    last_code_1320=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj230=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1321=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj231=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1322=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1323=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1324=((void*)0);
    real_fun_name_1325=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1326=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1326;
    klass_1327=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1329=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1330=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj232=fun_name2_1328;
        fun_name2_1328=(char*)come_increment_ref_count(create_method_name(obj_type_1330,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1331=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1329,fun_name));
        generics_fun_1332=((struct sGenericsFun*)(__right_value1298=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_1331,((void*)0))));
        come_call_finalizer3(__right_value1298,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_1332) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value1300=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1328)),generics_fun_1332,obj_type_1330,info)));
            name_1333=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1334=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1300,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_1334) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__444 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1302=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3592, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1333 = come_decrement_ref_count2(name_1333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1329 = come_decrement_ref_count2(none_generics_name_1329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1330,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1331 = come_decrement_ref_count2(fun_name3_1331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1320 = come_decrement_ref_count2(last_code_1320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1321 = come_decrement_ref_count2(last_code2_1321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1325 = come_decrement_ref_count2(real_fun_name_1325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1326,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1328 = come_decrement_ref_count2(fun_name2_1328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1302,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__444,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__444;
                }
            }
            cloner_1324=((struct sFun*)(__right_value1303=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1333)));
            come_call_finalizer3(__right_value1303,sFun_finalize, 0, 1, 0, 0, (void*)0);
            (name_1333 = come_decrement_ref_count2(name_1333, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1324=((struct sFun*)(__right_value1304=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1328)));
            come_call_finalizer3(__right_value1304,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj233=real_fun_name_1325;
        real_fun_name_1325=(char*)come_increment_ref_count(fun_name2_1328);
        __dec_obj233 = come_decrement_ref_count2(__dec_obj233, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1329 = come_decrement_ref_count2(none_generics_name_1329, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1330,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1331 = come_decrement_ref_count2(fun_name3_1331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj234=fun_name2_1328;
        fun_name2_1328=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1335=128-1;        i_1335>=1;        i_1335--        ){
            new_fun_name_1336=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1328,i_1335));
            cloner_1324=((struct sFun*)(__right_value1307=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1336)));
            come_call_finalizer3(__right_value1307,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_1324) {
                __dec_obj235=fun_name2_1328;
                fun_name2_1328=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1336));
                __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1336 = come_decrement_ref_count2(new_fun_name_1336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1336 = come_decrement_ref_count2(new_fun_name_1336, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1324==((void*)0)) {
            cloner_1324=((struct sFun*)(__right_value1309=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1328)));
            come_call_finalizer3(__right_value1309,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj236=real_fun_name_1325;
        real_fun_name_1325=(char*)come_increment_ref_count(fun_name2_1328);
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1324==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1337=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3627, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1337,"{\n");
        buffer_append_str(source_1337,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1337,"var result = new %s;\n",((char*)(__right_value1312=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1312 = come_decrement_ref_count2(__right_value1312, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1327->mProtocol) {
            name_1338="_protocol_obj";
            char source2_1339[1024];
            memset(&source2_1339, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1339,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1337,source2_1339);
            klass_1327=((struct sClass*)(__right_value1313=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1327->mName)));
            come_call_finalizer3(__right_value1313,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1340=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1327->mFields)),it_1341=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1340));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1340));            it_1341=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1340))            ){
                multiple_assign_var46=it_1341;
                name_1342=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1343=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1342,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1343->mArrayNum)>0) {
                    char source2_1344[1024];
                    memset(&source2_1344, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1344,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1342,name_1342,name_1342);
                    buffer_append_str(source_1337,source2_1344);
                }
                else {
                    char source2_1345[1024];
                    memset(&source2_1345, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1345,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1342,name_1342);
                    buffer_append_str(source_1337,source2_1345);
                }
                (name_1342 = come_decrement_ref_count2(name_1342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1343,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1340,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1327=((struct sClass*)(__right_value1314=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1327->mName)));
            come_call_finalizer3(__right_value1314,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1346=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1327->mFields)),it_1347=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1346));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1346));            it_1347=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1346))            ){
                multiple_assign_var47=it_1347;
                name_1348=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1349=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1349->mHeap) {
                    char source2_1350[1024];
                    memset(&source2_1350, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1350,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1348,name_1348,name_1348);
                    buffer_append_str(source_1337,source2_1350);
                }
                else if(                list$1sNode$ph$p_length(field_type_1349->mArrayNum)>0) {
                    char source2_1351[1024];
                    memset(&source2_1351, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1351,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1348,name_1348,name_1348);
                    buffer_append_str(source_1337,source2_1351);
                }
                else {
                    char source2_1352[1024];
                    memset(&source2_1352, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1352,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1348,name_1348);
                    buffer_append_str(source_1337,source2_1352);
                }
                (name_1348 = come_decrement_ref_count2(name_1348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1349,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1346,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_1353=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1354=((struct sFun*)(__right_value1316=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1353)));
        come_call_finalizer3(__right_value1316,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        user_cloner_1354) {
            char source2_1355[1024];
            memset(&source2_1355, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1355,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1353);
            buffer_append_str(source_1337,source2_1355);
        }
        buffer_append_format(source_1337,"return result;");
        buffer_append_char(source_1337,125);
        p_1356=info->p;
        sline_1357=info->sline;
        sname_1358=(char*)come_increment_ref_count(info->sname);
        source3_1359=(struct buffer*)come_increment_ref_count(info->source);
        head_1360=info->head;
        __dec_obj237=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1337);
        come_call_finalizer3(__dec_obj237,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj238=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1325));
        __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1361=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1362=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1363=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1325));
        self_type_1364=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1364->mHeap=(_Bool)0;
        param_types_1365=(struct list$1sType$ph*)come_increment_ref_count((__list_values31___1366[0]=self_type_1364,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3718, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values31___1366)));
        param_names_1368=(struct list$1char$ph*)come_increment_ref_count((__list_values32___1367[0]=((char*)(__right_value1324=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3719, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values32___1367)));
        (__right_value1324 = come_decrement_ref_count2(__right_value1324, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1369=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3720, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1369,((void*)0));
        result_type_1362->mStatic=(_Bool)0;
        result_type_1362->mUniq=(_Bool)0;
        result_type_1362->mInline=(_Bool)0;
        result_type_1362->mGenerate=(_Bool)0;
        fun2_1370=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1329=__builtin_string(name_1363)))));
        (__right_value1329 = come_decrement_ref_count2(__right_value1329, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1370==((void*)0)||fun2_1370->mExternal) {
            fun_1371=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3731, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1363),(struct sType*)come_increment_ref_count(result_type_1362),(struct list$1sType$ph*)come_increment_ref_count(param_types_1365),(struct list$1char$ph*)come_increment_ref_count(param_names_1368),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1369),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1361),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1363)),(struct sFun*)come_increment_ref_count(fun_1371));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3739, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1337=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3739, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1371),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1372=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1337,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1373=node_compile(node_1372,info);
            if(            !Value_1373) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value1339=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1374=multiple_assign_var48->v1;
                Err_1375=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1375)?(puts(Err_1375),exit(0)):(0));
                come_call_finalizer3(__right_value1339,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1375 = come_decrement_ref_count2(Err_1375, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1324=fun_1371;
            come_call_finalizer3(fun_1371,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1372) ? node_1372 = come_decrement_ref_count2(node_1372, ((struct sNode*)node_1372)->finalize, ((struct sNode*)node_1372)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1324=fun2_1370;
        }
        __dec_obj239=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1358);
        __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1357;
        __dec_obj240=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1359);
        come_call_finalizer3(__dec_obj240,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1356;
        info->head=head_1360;
        info->sline=sline_1357;
        come_call_finalizer3(source_1337,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (user_real_fun_name_1353 = come_decrement_ref_count2(user_real_fun_name_1353, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1358 = come_decrement_ref_count2(sname_1358, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1359,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1361,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1362,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1363 = come_decrement_ref_count2(name_1363, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1364,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1365,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1368,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1369,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1370,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1323;
    __dec_obj241=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1320);
    __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj242=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1321);
    __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1322;
    __result_obj__445 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1341=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3767, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1324,(char*)come_increment_ref_count(real_fun_name_1325)))));
    (last_code_1320 = come_decrement_ref_count2(last_code_1320, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1321 = come_decrement_ref_count2(last_code2_1321, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1325 = come_decrement_ref_count2(real_fun_name_1325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1326,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1328 = come_decrement_ref_count2(fun_name2_1328, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1341,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__445,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__445;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1376;
char* __dec_obj243;
char* last_code2_1377;
char* __dec_obj244;
_Bool comma_instead_of_semicolon_1378;
struct sClass* current_stack_frame_struct_1379;
struct sFun* cloner_1380;
void* __right_value1342 = (void*)0;
char* real_fun_name_1381;
void* __right_value1343 = (void*)0;
struct sType* type2_1382;
struct sClass* klass_1383;
void* __right_value1344 = (void*)0;
void* __right_value1345 = (void*)0;
struct buffer* source_1384;
int i_1385;
void* __right_value1346 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1386;
struct tuple2$2char$phsType$ph* it_1387;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1388=0;
struct sType* field_type_1389=0;
char* p_1392;
int sline_1393;
char* sname_1394;
struct buffer* source3_1395;
char* head_1396;
struct buffer* __dec_obj245;
void* __right_value1347 = (void*)0;
char* __dec_obj246;
void* __right_value1348 = (void*)0;
struct sBlock* block_1397;
void* __right_value1349 = (void*)0;
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
struct sType* result_type_1398;
void* __right_value1352 = (void*)0;
char* name_1399;
void* __right_value1353 = (void*)0;
struct sType* self_type_1400;
struct sType* __list_values33___1402[1];
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
struct list$1sType$ph* param_types_1401;
void* __right_value1356 = (void*)0;
char* __list_values34___1403[1];
void* __right_value1357 = (void*)0;
void* __right_value1358 = (void*)0;
struct list$1char$ph* param_names_1404;
void* __right_value1359 = (void*)0;
void* __right_value1360 = (void*)0;
struct list$1char$ph* param_default_parametors_1405;
void* __right_value1361 = (void*)0;
void* __right_value1362 = (void*)0;
struct sFun* fun2_1406;
void* __right_value1363 = (void*)0;
void* __right_value1364 = (void*)0;
void* __right_value1365 = (void*)0;
void* __right_value1366 = (void*)0;
struct sFun* fun_1407;
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
void* __right_value1369 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1370 = (void*)0;
struct sNode* node_1408;
_Bool Value_1409;
void* __right_value1371 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1410=0;
char* Err_1411=0;
char* __dec_obj247;
struct buffer* __dec_obj248;
char* __dec_obj249;
char* __dec_obj250;
void* __right_value1372 = (void*)0;
void* __right_value1373 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__446;
    last_code_1376=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj243=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1377=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj244=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1378=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1379=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1380=((void*)0);
    real_fun_name_1381=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1382=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1382;
    klass_1383=type->mClass;
    if(    type->mPointerNum>0&&!klass_1383->mNumber) {
        source_1384=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3792, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1384,"{\n");
        buffer_append_str(source_1384,"var result = new buffer();\n");
        buffer_append_format(source_1384,"result.append_str(\"%s {\");\n",klass_1383->mName);
        i_1385=0;
        klass_1383=((struct sClass*)(__right_value1346=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1383->mName)));
        come_call_finalizer3(__right_value1346,sClass_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_1386=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1383->mFields)),it_1387=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1386));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1386));        it_1387=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1386))        ){
            multiple_assign_var49=it_1387;
            name_1388=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1389=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1385==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1383->mFields)-1) {
                char source2_1390[1024];
                memset(&source2_1390, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1390,1024,"result.append_str(\"%s:\");\n",name_1388);
                buffer_append_str(source_1384,source2_1390);
                snprintf(source2_1390,1024,"result.append_str(self.%s.to_string());\n",name_1388);
                buffer_append_str(source_1384,source2_1390);
            }
            else {
                char source2_1391[1024];
                memset(&source2_1391, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1391,1024,"result.append_str(\"%s:\");\n",name_1388);
                buffer_append_str(source_1384,source2_1391);
                snprintf(source2_1391,1024,"result.append_str(self.%s.to_string());\n",name_1388);
                buffer_append_str(source_1384,source2_1391);
                snprintf(source2_1391,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1384,source2_1391);
            }
            i_1385++;
            (name_1388 = come_decrement_ref_count2(name_1388, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1389,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1386,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1384,"result.append_str(\"}\");\n");
        buffer_append_format(source_1384,"return result.to_string();\n");
        buffer_append_char(source_1384,125);
        p_1392=info->p;
        sline_1393=info->sline;
        sname_1394=(char*)come_increment_ref_count(info->sname);
        source3_1395=(struct buffer*)come_increment_ref_count(info->source);
        head_1396=info->head;
        __dec_obj245=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1384);
        come_call_finalizer3(__dec_obj245,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj246=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1381));
        __dec_obj246 = come_decrement_ref_count2(__dec_obj246, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1397=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1398=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3853, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1398->mHeap=(_Bool)1;
        name_1399=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1381));
        self_type_1400=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1400->mHeap=(_Bool)0;
        param_types_1401=(struct list$1sType$ph*)come_increment_ref_count((__list_values33___1402[0]=self_type_1400,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3858, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values33___1402)));
        param_names_1404=(struct list$1char$ph*)come_increment_ref_count((__list_values34___1403[0]=((char*)(__right_value1356=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3859, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values34___1403)));
        (__right_value1356 = come_decrement_ref_count2(__right_value1356, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1405=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3860, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1405,((void*)0));
        result_type_1398->mStatic=(_Bool)0;
        result_type_1398->mUniq=(_Bool)0;
        result_type_1398->mInline=(_Bool)0;
        result_type_1398->mGenerate=(_Bool)0;
        fun2_1406=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1361=__builtin_string(name_1399)))));
        (__right_value1361 = come_decrement_ref_count2(__right_value1361, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1406==((void*)0)||fun2_1406->mExternal) {
            fun_1407=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3870, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1399),(struct sType*)come_increment_ref_count(result_type_1398),(struct list$1sType$ph*)come_increment_ref_count(param_types_1401),(struct list$1char$ph*)come_increment_ref_count(param_names_1404),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1405),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1397),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1399)),(struct sFun*)come_increment_ref_count(fun_1407));
            cloner_1380=fun_1407;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3880, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1369=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3880, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1407),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1408=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1369,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1409=node_compile(node_1408,info);
            if(            !Value_1409) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1371=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1410=multiple_assign_var50->v1;
                Err_1411=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1411)?(puts(Err_1411),exit(0)):(0));
                come_call_finalizer3(__right_value1371,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1411 = come_decrement_ref_count2(Err_1411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1407,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1408) ? node_1408 = come_decrement_ref_count2(node_1408, ((struct sNode*)node_1408)->finalize, ((struct sNode*)node_1408)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1380=fun2_1406;
        }
        __dec_obj247=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1394);
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1393;
        __dec_obj248=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1395);
        come_call_finalizer3(__dec_obj248,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1392;
        info->head=head_1396;
        info->sline=sline_1393;
        come_call_finalizer3(source_1384,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1394 = come_decrement_ref_count2(sname_1394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1395,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1397,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1398,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1399 = come_decrement_ref_count2(name_1399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1400,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1401,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1404,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1405,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1406,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1379;
    __dec_obj249=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1376);
    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj250=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1377);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1378;
    __result_obj__446 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1373=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3906, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1380,(char*)come_increment_ref_count(real_fun_name_1381)))));
    (last_code_1376 = come_decrement_ref_count2(last_code_1376, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1377 = come_decrement_ref_count2(last_code2_1377, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1381 = come_decrement_ref_count2(real_fun_name_1381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1382,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1373,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__446,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__446;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1457;
char* __dec_obj261;
char* last_code2_1458;
char* __dec_obj262;
_Bool comma_instead_of_semicolon_1459;
struct sClass* current_stack_frame_struct_1460;
struct sFun* get_hash_key_fun_1461;
void* __right_value1418 = (void*)0;
char* real_fun_name_1462;
void* __right_value1419 = (void*)0;
struct sType* type2_1463;
struct sClass* klass_1464;
void* __right_value1420 = (void*)0;
void* __right_value1421 = (void*)0;
char* none_generics_name_1465;
void* __right_value1422 = (void*)0;
char* generics_fun_name_1466;
void* __right_value1423 = (void*)0;
struct sGenericsFun* generics_fun_1467;
void* __right_value1424 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1468=0;
_Bool err_1469=0;
void* __right_value1425 = (void*)0;
int i_1470;
void* __right_value1426 = (void*)0;
char* new_fun_name_1471;
void* __right_value1427 = (void*)0;
void* __right_value1428 = (void*)0;
char* __dec_obj263;
void* __right_value1429 = (void*)0;
void* __right_value1430 = (void*)0;
void* __right_value1431 = (void*)0;
struct buffer* source_1472;
int i_1473;
void* __right_value1432 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1474;
struct tuple2$2char$phsType$ph* it_1475;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1476=0;
struct sType* field_type_1477=0;
char* p_1479;
int sline_1480;
char* sname_1481;
struct buffer* source3_1482;
char* head_1483;
struct buffer* __dec_obj264;
void* __right_value1433 = (void*)0;
char* __dec_obj265;
void* __right_value1434 = (void*)0;
struct sBlock* block_1484;
void* __right_value1435 = (void*)0;
void* __right_value1436 = (void*)0;
void* __right_value1437 = (void*)0;
struct sType* result_type_1485;
void* __right_value1438 = (void*)0;
char* name_1486;
void* __right_value1439 = (void*)0;
struct sType* self_type_1487;
struct sType* __list_values37___1489[1];
void* __right_value1440 = (void*)0;
void* __right_value1441 = (void*)0;
struct list$1sType$ph* param_types_1488;
void* __right_value1442 = (void*)0;
char* __list_values38___1490[1];
void* __right_value1443 = (void*)0;
void* __right_value1444 = (void*)0;
struct list$1char$ph* param_names_1491;
void* __right_value1445 = (void*)0;
void* __right_value1446 = (void*)0;
struct list$1char$ph* param_default_parametors_1492;
void* __right_value1447 = (void*)0;
void* __right_value1448 = (void*)0;
struct sFun* fun2_1493;
void* __right_value1449 = (void*)0;
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
void* __right_value1452 = (void*)0;
struct sFun* fun_1494;
void* __right_value1453 = (void*)0;
void* __right_value1454 = (void*)0;
void* __right_value1455 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1456 = (void*)0;
struct sNode* node_1495;
_Bool Value_1496;
void* __right_value1457 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1497=0;
char* Err_1498=0;
char* __dec_obj266;
struct buffer* __dec_obj267;
char* __dec_obj268;
char* __dec_obj269;
void* __right_value1458 = (void*)0;
void* __right_value1459 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__448;
memset(&i_1470, 0, sizeof(int));
    last_code_1457=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj261=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj261 = come_decrement_ref_count2(__dec_obj261, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1458=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj262=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj262 = come_decrement_ref_count2(__dec_obj262, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1459=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1460=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1461=((void*)0);
    real_fun_name_1462=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1463=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1463;
    klass_1464=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1461=((struct sFun*)(__right_value1420=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1462)));
        come_call_finalizer3(__right_value1420,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        get_hash_key_fun_1461==((void*)0)) {
            none_generics_name_1465=(char*)come_increment_ref_count(get_none_generics_name(type2_1463->mClass->mName));
            generics_fun_name_1466=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1465,fun_name));
            generics_fun_1467=((struct sGenericsFun*)(__right_value1423=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1466)));
            come_call_finalizer3(__right_value1423,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            generics_fun_1467) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1424=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1462),generics_fun_1467,type,info)));
                name_1468=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1469=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1424,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1469) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1461=((struct sFun*)(__right_value1425=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1468)));
                come_call_finalizer3(__right_value1425,sFun_finalize, 0, 1, 0, 0, (void*)0);
                (name_1468 = come_decrement_ref_count2(name_1468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1465 = come_decrement_ref_count2(none_generics_name_1465, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1466 = come_decrement_ref_count2(generics_fun_name_1466, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1470=128-1;        i_1470>=1;        i_1470--        ){
            new_fun_name_1471=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1462,i_1470));
            get_hash_key_fun_1461=((struct sFun*)(__right_value1427=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1471)));
            come_call_finalizer3(__right_value1427,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            get_hash_key_fun_1461) {
                __dec_obj263=real_fun_name_1462;
                real_fun_name_1462=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1471));
                __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1471 = come_decrement_ref_count2(new_fun_name_1471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1471 = come_decrement_ref_count2(new_fun_name_1471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1461==((void*)0)) {
            get_hash_key_fun_1461=((struct sFun*)(__right_value1429=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1462)));
            come_call_finalizer3(__right_value1429,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    get_hash_key_fun_1461==((void*)0)&&type->mPointerNum>0&&!klass_1464->mNumber&&!klass_1464->mProtocol) {
        source_1472=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4169, "struct buffer*", (void*)0, (void*)0, (void*)0, (void*)0))));
        buffer_append_str(source_1472,"{\n");
        buffer_append_str(source_1472,"unsigned int result = 0;\n");
        i_1473=0;
        klass_1464=((struct sClass*)(__right_value1432=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1464->mName)));
        come_call_finalizer3(__right_value1432,sClass_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_1474=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1464->mFields)),it_1475=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1474));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1474));        it_1475=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1474))        ){
            multiple_assign_var55=it_1475;
            name_1476=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1477=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1478[1024];
            memset(&source2_1478, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1478,1024,"result += ((int)self.%s).get_hash_key();\n",name_1476);
            buffer_append_str(source_1472,source2_1478);
            i_1473++;
            (name_1476 = come_decrement_ref_count2(name_1476, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1477,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1474,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1472,"return result;\n");
        buffer_append_char(source_1472,125);
        p_1479=info->p;
        sline_1480=info->sline;
        sname_1481=(char*)come_increment_ref_count(info->sname);
        source3_1482=(struct buffer*)come_increment_ref_count(info->source);
        head_1483=info->head;
        __dec_obj264=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1472);
        come_call_finalizer3(__dec_obj264,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj265=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1462));
        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1484=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1485=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4206, "struct sType*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1485->mUnsigned=(_Bool)1;
        name_1486=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1462));
        self_type_1487=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1487->mHeap=(_Bool)0;
        param_types_1488=(struct list$1sType$ph*)come_increment_ref_count((__list_values37___1489[0]=self_type_1487,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4211, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values37___1489)));
        param_names_1491=(struct list$1char$ph*)come_increment_ref_count((__list_values38___1490[0]=((char*)(__right_value1442=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4212, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values38___1490)));
        (__right_value1442 = come_decrement_ref_count2(__right_value1442, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1492=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4213, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1492,((void*)0));
        result_type_1485->mStatic=(_Bool)0;
        result_type_1485->mUniq=(_Bool)0;
        result_type_1485->mInline=(_Bool)0;
        result_type_1485->mGenerate=(_Bool)0;
        fun2_1493=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1447=__builtin_string(name_1486)))));
        (__right_value1447 = come_decrement_ref_count2(__right_value1447, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1493==((void*)0)||fun2_1493->mExternal) {
            fun_1494=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4223, "struct sFun*", (void*)0, (void*)0, (void*)0, (void*)0)),(char*)come_increment_ref_count(name_1486),(struct sType*)come_increment_ref_count(result_type_1485),(struct list$1sType$ph*)come_increment_ref_count(param_types_1488),(struct list$1char$ph*)come_increment_ref_count(param_names_1491),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1492),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1484),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1486)),(struct sFun*)come_increment_ref_count(fun_1494));
            get_hash_key_fun_1461=fun_1494;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4233, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1455=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4233, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1494),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1495=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1455,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1496=node_compile(node_1495,info);
            if(            !Value_1496) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1457=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1497=multiple_assign_var56->v1;
                Err_1498=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1498)?(puts(Err_1498),exit(0)):(0));
                come_call_finalizer3(__right_value1457,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1498 = come_decrement_ref_count2(Err_1498, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1494,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1495) ? node_1495 = come_decrement_ref_count2(node_1495, ((struct sNode*)node_1495)->finalize, ((struct sNode*)node_1495)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1461=fun2_1493;
        }
        __dec_obj266=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1481);
        __dec_obj266 = come_decrement_ref_count2(__dec_obj266, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1480;
        __dec_obj267=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1482);
        come_call_finalizer3(__dec_obj267,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1479;
        info->head=head_1483;
        info->sline=sline_1480;
        come_call_finalizer3(source_1472,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1481 = come_decrement_ref_count2(sname_1481, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1482,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1484,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1485,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1486 = come_decrement_ref_count2(name_1486, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1487,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1488,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1491,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1492,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1493,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1460;
    __dec_obj268=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1457);
    __dec_obj268 = come_decrement_ref_count2(__dec_obj268, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj269=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1458);
    __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1459;
    __result_obj__448 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1459=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4259, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1461,(char*)come_increment_ref_count(real_fun_name_1462)))));
    (last_code_1457 = come_decrement_ref_count2(last_code_1457, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1458 = come_decrement_ref_count2(last_code2_1458, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1462 = come_decrement_ref_count2(real_fun_name_1462, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1463,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1459,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__448,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__448;
}

