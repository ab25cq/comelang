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
static unsigned int buffer_get_hash_key(struct buffer* self);
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
static unsigned int sType_get_hash_key(struct sType* self);
static _Bool sType_equals(struct sType* left, struct sType* right);
static _Bool sClass_equals(struct sClass* left, struct sClass* right);
static _Bool list$1tuple2$2char$phsType$ph$ph$p_equals(struct list$1tuple2$2char$phsType$ph$ph* left, struct list$1tuple2$2char$phsType$ph$ph* right);
static _Bool tuple2$2char$phsType$ph$p_equals(struct tuple2$2char$phsType$ph* self, struct tuple2$2char$phsType$ph* right);
static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right);
static _Bool sNode_equals(struct sNode* left, struct sNode* right);
static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right);
static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right);
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
static struct sVarTable* sVarTable_clone(struct sVarTable* self);
static unsigned int sVarTable_get_hash_key(struct sVarTable* self);
static _Bool sVarTable_equals(struct sVarTable* left, struct sVarTable* right);
static _Bool map$2char$phsVar$ph$p_equals(struct map$2char$phsVar$ph* left, struct map$2char$phsVar$ph* right);
static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value);
static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value);
static void sVar_finalize(struct sVar* self);
static _Bool sVar_equals(struct sVar* left, struct sVar* right);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self);
static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self);
static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self);
static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self);
static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item);
static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self);
static struct sVar* sVar_clone(struct sVar* self);
static unsigned int sVar_get_hash_key(struct sVar* self);
static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self);
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
static struct sFun* sFun_clone(struct sFun* self);
static unsigned int sFun_get_hash_key(struct sFun* self);
static _Bool sFun_equals(struct sFun* left, struct sFun* right);
static _Bool sBlock_equals(struct sBlock* left, struct sBlock* right);
static struct sBlock* sBlock_clone(struct sBlock* self);
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
static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self);
static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self);
static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right);
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
static unsigned int buffer_get_hash_key(struct buffer* self){
unsigned int result_1;
    result_1=0;
    result_1+=int_get_hash_key(((int)self->buf));
    result_1+=int_get_hash_key(((int)self->len));
    result_1+=int_get_hash_key(((int)self->size));
    return result_1;
}

static void va_list_finalize(va_list self){
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
struct sType* result_366;
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
    result_366=(struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals));
    if(    self!=((void*)0)) {
        result_366->mClass=self->mClass;
    }
    if(    self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0)) {
        __dec_obj24=result_366->mOriginalLoadVarType;
        result_366->mOriginalLoadVarType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mOriginalLoadVarType));
        come_call_finalizer3(__dec_obj24,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mChannelType!=((void*)0)) {
        __dec_obj25=result_366->mChannelType;
        result_366->mChannelType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mChannelType));
        come_call_finalizer3(__dec_obj25,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypes!=((void*)0)) {
        __dec_obj29=result_366->mGenericsTypes;
        result_366->mGenericsTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mGenericsTypes));
        come_call_finalizer3(__dec_obj29,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0)) {
        __dec_obj30=result_366->mNoSolvedGenericsType;
        result_366->mNoSolvedGenericsType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mNoSolvedGenericsType));
        come_call_finalizer3(__dec_obj30,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mAnyClass=self->mAnyClass;
    }
    if(    self!=((void*)0)&&self->mAnyOriginalType!=((void*)0)) {
        __dec_obj31=result_366->mAnyOriginalType;
        result_366->mAnyOriginalType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mAnyOriginalType));
        come_call_finalizer3(__dec_obj31,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSizeNum!=((void*)0)) {
        __dec_obj32=result_366->mSizeNum;
        result_366->mSizeNum=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mSizeNum));
        if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mAlignas!=((void*)0)) {
        __dec_obj33=result_366->mAlignas;
        result_366->mAlignas=(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, self->mAlignas));
        if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, ((struct sNode*)__dec_obj33)->finalize, ((struct sNode*)__dec_obj33)->_protocol_obj, 0,0,0, (void*)0); };
    }
    if(    self!=((void*)0)&&self->mTupleName!=((void*)0)) {
        __dec_obj34=result_366->mTupleName;
        result_366->mTupleName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mTupleName));
        __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj35=result_366->mAttribute;
        result_366->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_366->mUnsigned=self->mUnsigned;
    }
    if(    self!=((void*)0)) {
        result_366->mShort=self->mShort;
    }
    if(    self!=((void*)0)) {
        result_366->mLong=self->mLong;
    }
    if(    self!=((void*)0)) {
        result_366->mLongLong=self->mLongLong;
    }
    if(    self!=((void*)0)) {
        result_366->mConstant=self->mConstant;
    }
    if(    self!=((void*)0)) {
        result_366->mAtomic=self->mAtomic;
    }
    if(    self!=((void*)0)) {
        result_366->mRegister=self->mRegister;
    }
    if(    self!=((void*)0)) {
        result_366->mVolatile=self->mVolatile;
    }
    if(    self!=((void*)0)) {
        result_366->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_366->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_366->mRecord=self->mRecord;
    }
    if(    self!=((void*)0)) {
        result_366->mExtern=self->mExtern;
    }
    if(    self!=((void*)0)) {
        result_366->mRestrict=self->mRestrict;
    }
    if(    self!=((void*)0)) {
        result_366->mImmutable=self->mImmutable;
    }
    if(    self!=((void*)0)) {
        result_366->mHeap=self->mHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mChannel=self->mChannel;
    }
    if(    self!=((void*)0)) {
        result_366->mNoHeap=self->mNoHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mNoCallingDestructor=self->mNoCallingDestructor;
    }
    if(    self!=((void*)0)) {
        result_366->mException=self->mException;
    }
    if(    self!=((void*)0)) {
        result_366->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_366->mCreateVTable=self->mCreateVTable;
    }
    if(    self!=((void*)0)) {
        result_366->mDynamic=self->mDynamic;
    }
    if(    self!=((void*)0)) {
        result_366->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_366->mNullValue=self->mNullValue;
    }
    if(    self!=((void*)0)) {
        result_366->mGuardValue=self->mGuardValue;
    }
    if(    self!=((void*)0)&&self->mAsmName!=((void*)0)) {
        __dec_obj36=result_366->mAsmName;
        result_366->mAsmName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAsmName));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mTypedef=self->mTypedef;
    }
    if(    self!=((void*)0)) {
        result_366->mMultipleTypes=self->mMultipleTypes;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginIsArray=self->mOriginIsArray;
    }
    if(    self!=((void*)0)&&self->mArrayNum!=((void*)0)) {
        __dec_obj40=result_366->mArrayNum;
        result_366->mArrayNum=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mArrayNum));
        come_call_finalizer3(__dec_obj40,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mPointerNum=self->mPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalTypeNameHeap=self->mOriginalTypeNameHeap;
    }
    if(    self!=((void*)0)) {
        result_366->mTypedefOriginalPointerNum=self->mTypedefOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mFunctionPointerNum=self->mFunctionPointerNum;
    }
    if(    self!=((void*)0)&&self->mOriginalTypeName!=((void*)0)) {
        __dec_obj41=result_366->mOriginalTypeName;
        result_366->mOriginalTypeName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mOriginalTypeName));
        __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mOriginalPointerNum=self->mOriginalPointerNum;
    }
    if(    self!=((void*)0)) {
        result_366->mArrayPointerType=self->mArrayPointerType;
    }
    if(    self!=((void*)0)) {
        result_366->mLambdaArray=self->mLambdaArray;
    }
    if(    self!=((void*)0)) {
        result_366->mLambdaArrayNum=self->mLambdaArrayNum;
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj42=result_366->mParamTypes;
        result_366->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj42,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj46=result_366->mParamNames;
        result_366->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj46,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj47=result_366->mResultType;
        result_366->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj47,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_366->mVarArgs=self->mVarArgs;
    }
    __result_obj__255 = come_increment_ref_count(result_366);
    come_call_finalizer3(result_366,sType_finalize, 0, 0, 1, 0, (void*)0);
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

static unsigned int sType_get_hash_key(struct sType* self){
unsigned int result_357;
    result_357=0;
    result_357+=int_get_hash_key(((int)self->mClass));
    result_357+=int_get_hash_key(((int)self->mOriginalLoadVarType));
    result_357+=int_get_hash_key(((int)self->mChannelType));
    result_357+=int_get_hash_key(((int)self->mGenericsTypes));
    result_357+=int_get_hash_key(((int)self->mNoSolvedGenericsType));
    result_357+=int_get_hash_key(((int)self->mAnyClass));
    result_357+=int_get_hash_key(((int)self->mAnyOriginalType));
    result_357+=int_get_hash_key(((int)self->mSizeNum));
    result_357+=int_get_hash_key(((int)self->mAlignas));
    result_357+=int_get_hash_key(((int)self->mTupleName));
    result_357+=int_get_hash_key(((int)self->mAttribute));
    result_357+=int_get_hash_key(((int)self->mAllocaValue));
    result_357+=int_get_hash_key(((int)self->mUnsigned));
    result_357+=int_get_hash_key(((int)self->mShort));
    result_357+=int_get_hash_key(((int)self->mLong));
    result_357+=int_get_hash_key(((int)self->mLongLong));
    result_357+=int_get_hash_key(((int)self->mConstant));
    result_357+=int_get_hash_key(((int)self->mAtomic));
    result_357+=int_get_hash_key(((int)self->mRegister));
    result_357+=int_get_hash_key(((int)self->mVolatile));
    result_357+=int_get_hash_key(((int)self->mStatic));
    result_357+=int_get_hash_key(((int)self->mUniq));
    result_357+=int_get_hash_key(((int)self->mRecord));
    result_357+=int_get_hash_key(((int)self->mExtern));
    result_357+=int_get_hash_key(((int)self->mRestrict));
    result_357+=int_get_hash_key(((int)self->mImmutable));
    result_357+=int_get_hash_key(((int)self->mHeap));
    result_357+=int_get_hash_key(((int)self->mChannel));
    result_357+=int_get_hash_key(((int)self->mNoHeap));
    result_357+=int_get_hash_key(((int)self->mNoCallingDestructor));
    result_357+=int_get_hash_key(((int)self->mException));
    result_357+=int_get_hash_key(((int)self->mGenerate));
    result_357+=int_get_hash_key(((int)self->mCreateVTable));
    result_357+=int_get_hash_key(((int)self->mDynamic));
    result_357+=int_get_hash_key(((int)self->mInline));
    result_357+=int_get_hash_key(((int)self->mNullValue));
    result_357+=int_get_hash_key(((int)self->mGuardValue));
    result_357+=int_get_hash_key(((int)self->mAsmName));
    result_357+=int_get_hash_key(((int)self->mTypedef));
    result_357+=int_get_hash_key(((int)self->mMultipleTypes));
    result_357+=int_get_hash_key(((int)self->mOriginIsArray));
    result_357+=int_get_hash_key(((int)self->mArrayNum));
    result_357+=int_get_hash_key(((int)self->mPointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeNamePointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeNameHeap));
    result_357+=int_get_hash_key(((int)self->mTypedefOriginalPointerNum));
    result_357+=int_get_hash_key(((int)self->mFunctionPointerNum));
    result_357+=int_get_hash_key(((int)self->mOriginalTypeName));
    result_357+=int_get_hash_key(((int)self->mOriginalPointerNum));
    result_357+=int_get_hash_key(((int)self->mArrayPointerType));
    result_357+=int_get_hash_key(((int)self->mLambdaArray));
    result_357+=int_get_hash_key(((int)self->mLambdaArrayNum));
    result_357+=int_get_hash_key(((int)self->mParamTypes));
    result_357+=int_get_hash_key(((int)self->mParamNames));
    result_357+=int_get_hash_key(((int)self->mResultType));
    result_357+=int_get_hash_key(((int)self->mVarArgs));
    return result_357;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_358;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_359;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_358=left->head;
    it2_359=right->head;
    while(it_358!=((void*)0)) {
        if(        !tuple2$2char$phsType$ph$p_equals(it_358->item,it2_359->item)) {
            return (_Bool)0;
        }
        it_358=it_358->next;
        it2_359=it2_359->next;
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

static _Bool list$1sType$ph$p_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_360;
struct list_item$1sType$ph* it2_361;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_360=left->head;
    it2_361=right->head;
    while(it_360!=((void*)0)) {
        if(        !sType_equals(it_360->item,it2_361->item)) {
            return (_Bool)0;
        }
        it_360=it_360->next;
        it2_361=it2_361->next;
    }
    return (_Bool)1;
}

static _Bool sNode_equals(struct sNode* left, struct sNode* right){
    return voidp_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph$p_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_362;
struct list_item$1sNode$ph* it2_363;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_362=left->head;
    it2_363=right->head;
    while(it_362!=((void*)0)) {
        if(        !sNode_equals(it_362->item,it2_363->item)) {
            return (_Bool)0;
        }
        it_362=it_362->next;
        it2_363=it2_363->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph$p_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_364;
struct list_item$1char$ph* it2_365;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_364=left->head;
    it2_365=right->head;
    while(it_364!=((void*)0)) {
        if(        !string_equals(it_364->item,it2_365->item)) {
            return (_Bool)0;
        }
        it_364=it_364->next;
        it2_365=it2_365->next;
    }
    return (_Bool)1;
}

static struct list$1sType$ph* list$1sType$ph$p_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__242;
void* __right_value269 = (void*)0;
void* __right_value270 = (void*)0;
struct list$1sType$ph* result_367;
struct list_item$1sType$ph* it_368;
void* __right_value274 = (void*)0;
void* __right_value275 = (void*)0;
struct list$1sType$ph* __result_obj__245;
    if(    self==((void*)0)) {
        __result_obj__242 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__242,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__242;
    }
    result_367=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "./comelang.h", 1404, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_368=self->head;
    while(it_368!=((void*)0)) {
        if(        1) {
            list$1sType$ph$p_add(result_367,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_368->item)));
        }
        else {
            list$1sType$ph$p_add(result_367,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, it_368->item)));
        }
        it_368=it_368->next;
    }
    __result_obj__245 = come_increment_ref_count(result_367);
    come_call_finalizer3(result_367,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sType$ph* litem_369;
struct sType* __dec_obj26;
void* __right_value272 = (void*)0;
struct list_item$1sType$ph* litem_370;
struct sType* __dec_obj27;
void* __right_value273 = (void*)0;
struct list_item$1sType$ph* litem_371;
struct sType* __dec_obj28;
struct list$1sType$ph* __result_obj__244;
    if(    self->len==0) {
        litem_369=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value271=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1423, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_369->prev=((void*)0);
        litem_369->next=((void*)0);
        __dec_obj26=litem_369->item;
        litem_369->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj26,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_369;
        self->head=litem_369;
    }
    else if(    self->len==1) {
        litem_370=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value272=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1433, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_370->prev=self->head;
        litem_370->next=((void*)0);
        __dec_obj27=litem_370->item;
        litem_370->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj27,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_370;
        self->head->next=litem_370;
    }
    else {
        litem_371=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value273=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1443, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_371->prev=self->tail;
        litem_371->next=((void*)0);
        __dec_obj28=litem_371->item;
        litem_371->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj28,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_371;
        self->tail=litem_371;
    }
    self->len++;
    __result_obj__244 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__244;
}

static void list$1sType$ph_finalize(struct list$1sType$ph* self){
struct list_item$1sType$ph* it_372;
struct list_item$1sType$ph* prev_it_373;
    it_372=self->head;
    while(it_372!=((void*)0)) {
        prev_it_373=it_372;
        it_372=it_372->next;
        come_call_finalizer3(prev_it_373,list_item$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct sNode* sNode_clone(struct sNode* self){
struct sNode* __result_obj__246;
void* __right_value279 = (void*)0;
struct sNode* result_374;
struct sNode* __result_obj__247;
    if(    self==(void*)0) {
        __result_obj__246 = come_increment_ref_count((void*)0);
        ((__result_obj__246) ? __result_obj__246 = come_decrement_ref_count2(__result_obj__246, ((struct sNode*)__result_obj__246)->finalize, ((struct sNode*)__result_obj__246)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__246;
    }
    result_374=(struct sNode*)come_increment_ref_count((struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->clone!=((void*)0)) {
        result_374->_protocol_obj=self->clone(self->_protocol_obj);
    }
    if(    self!=((void*)0)) {
        result_374->finalize=self->finalize;
    }
    if(    self!=((void*)0)) {
        result_374->clone=self->clone;
    }
    if(    self!=((void*)0)) {
        result_374->compile=self->compile;
    }
    if(    self!=((void*)0)) {
        result_374->sline=self->sline;
    }
    if(    self!=((void*)0)) {
        result_374->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_374->sname=self->sname;
    }
    if(    self!=((void*)0)) {
        result_374->terminated=self->terminated;
    }
    if(    self!=((void*)0)) {
        result_374->kind=self->kind;
    }
    __result_obj__247 = come_increment_ref_count(result_374);
    ((result_374) ? result_374 = come_decrement_ref_count2(result_374, ((struct sNode*)result_374)->finalize, ((struct sNode*)result_374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__247) ? __result_obj__247 = come_decrement_ref_count2(__result_obj__247, ((struct sNode*)__result_obj__247)->finalize, ((struct sNode*)__result_obj__247)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__247;
}

static struct list$1sNode$ph* list$1sNode$ph$p_clone(struct list$1sNode$ph* self){
struct list$1sNode$ph* __result_obj__248;
void* __right_value285 = (void*)0;
void* __right_value286 = (void*)0;
struct list$1sNode$ph* result_375;
struct list_item$1sNode$ph* it_376;
void* __right_value290 = (void*)0;
void* __right_value291 = (void*)0;
struct list$1sNode$ph* __result_obj__251;
    if(    self==((void*)0)) {
        __result_obj__248 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__248,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__248;
    }
    result_375=(struct list$1sNode$ph*)come_increment_ref_count(list$1sNode$ph$p_initialize((struct list$1sNode$ph*)come_increment_ref_count((struct list$1sNode$ph*)come_calloc(1, sizeof(struct list$1sNode$ph)*(1), "./comelang.h", 1404, "struct list$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_376=self->head;
    while(it_376!=((void*)0)) {
        if(        1) {
            list$1sNode$ph$p_add(result_375,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_376->item)));
        }
        else {
            list$1sNode$ph$p_add(result_375,(struct sNode*)come_increment_ref_count(come_call_cloner(sNode_clone, it_376->item)));
        }
        it_376=it_376->next;
    }
    __result_obj__251 = come_increment_ref_count(result_375);
    come_call_finalizer3(result_375,list$1sNode$ph$p_finalize, 0, 0, 1, 0, (void*)0);
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
struct list_item$1sNode$ph* litem_377;
struct sNode* __dec_obj37;
void* __right_value288 = (void*)0;
struct list_item$1sNode$ph* litem_378;
struct sNode* __dec_obj38;
void* __right_value289 = (void*)0;
struct list_item$1sNode$ph* litem_379;
struct sNode* __dec_obj39;
struct list$1sNode$ph* __result_obj__250;
    if(    self->len==0) {
        litem_377=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value287=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1423, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_377->prev=((void*)0);
        litem_377->next=((void*)0);
        __dec_obj37=litem_377->item;
        litem_377->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count2(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_377;
        self->head=litem_377;
    }
    else if(    self->len==1) {
        litem_378=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value288=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1433, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_378->prev=self->head;
        litem_378->next=((void*)0);
        __dec_obj38=litem_378->item;
        litem_378->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_378;
        self->head->next=litem_378;
    }
    else {
        litem_379=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value289=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1443, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_379->prev=self->tail;
        litem_379->next=((void*)0);
        __dec_obj39=litem_379->item;
        litem_379->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_379;
        self->tail=litem_379;
    }
    self->len++;
    __result_obj__250 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__250;
}

static void list$1sNode$ph_finalize(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_380;
struct list_item$1sNode$ph* prev_it_381;
    it_380=self->head;
    while(it_380!=((void*)0)) {
        prev_it_381=it_380;
        it_380=it_380->next;
        come_call_finalizer3(prev_it_381,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1char$ph* list$1char$ph$p_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__252;
void* __right_value295 = (void*)0;
void* __right_value296 = (void*)0;
struct list$1char$ph* result_382;
struct list_item$1char$ph* it_383;
void* __right_value300 = (void*)0;
void* __right_value301 = (void*)0;
struct list$1char$ph* __result_obj__254;
    if(    self==((void*)0)) {
        __result_obj__252 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__252,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__252;
    }
    result_382=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "./comelang.h", 1404, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    it_383=self->head;
    while(it_383!=((void*)0)) {
        if(        1) {
            list$1char$ph$p_add(result_382,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_383->item)));
        }
        else {
            list$1char$ph$p_add(result_382,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_383->item)));
        }
        it_383=it_383->next;
    }
    __result_obj__254 = come_increment_ref_count(result_382);
    come_call_finalizer3(result_382,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__254,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__254;
}

static struct list$1char$ph* list$1char$ph$p_add(struct list$1char$ph* self, char* item){
void* __right_value297 = (void*)0;
struct list_item$1char$ph* litem_384;
char* __dec_obj43;
void* __right_value298 = (void*)0;
struct list_item$1char$ph* litem_385;
char* __dec_obj44;
void* __right_value299 = (void*)0;
struct list_item$1char$ph* litem_386;
char* __dec_obj45;
struct list$1char$ph* __result_obj__253;
    if(    self->len==0) {
        litem_384=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value297=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1423, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_384->prev=((void*)0);
        litem_384->next=((void*)0);
        __dec_obj43=litem_384->item;
        litem_384->item=(char*)come_increment_ref_count(item);
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_384;
        self->head=litem_384;
    }
    else if(    self->len==1) {
        litem_385=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value298=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1433, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_385->prev=self->head;
        litem_385->next=((void*)0);
        __dec_obj44=litem_385->item;
        litem_385->item=(char*)come_increment_ref_count(item);
        __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail=litem_385;
        self->head->next=litem_385;
    }
    else {
        litem_386=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value299=(struct list_item$1char$ph*)come_calloc(1, sizeof(struct list_item$1char$ph)*(1), "./comelang.h", 1443, "struct list_item$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_386->prev=self->tail;
        litem_386->next=((void*)0);
        __dec_obj45=litem_386->item;
        litem_386->item=(char*)come_increment_ref_count(item);
        __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
        self->tail->next=litem_386;
        self->tail=litem_386;
    }
    self->len++;
    __result_obj__253 = self;
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__253;
}

static void list$1char$ph_finalize(struct list$1char$ph* self){
struct list_item$1char$ph* it_387;
struct list_item$1char$ph* prev_it_388;
    it_387=self->head;
    while(it_387!=((void*)0)) {
        prev_it_388=it_387;
        it_387=it_387->next;
        come_call_finalizer3(prev_it_388,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static struct list$1CVALUE$ph* list$1CVALUE$ph$p_push_back(struct list$1CVALUE$ph* self, struct CVALUE* item){
void* __right_value305 = (void*)0;
struct list_item$1CVALUE$ph* litem_389;
struct CVALUE* __dec_obj49;
void* __right_value306 = (void*)0;
struct list_item$1CVALUE$ph* litem_390;
struct CVALUE* __dec_obj50;
void* __right_value307 = (void*)0;
struct list_item$1CVALUE$ph* litem_391;
struct CVALUE* __dec_obj51;
struct list$1CVALUE$ph* __result_obj__256;
    if(    self->len==0) {
        litem_389=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value305=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1493, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_389->prev=((void*)0);
        litem_389->next=((void*)0);
        __dec_obj49=litem_389->item;
        litem_389->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj49,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_389;
        self->head=litem_389;
    }
    else if(    self->len==1) {
        litem_390=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value306=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1503, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_390->prev=self->head;
        litem_390->next=((void*)0);
        __dec_obj50=litem_390->item;
        litem_390->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj50,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_390;
        self->head->next=litem_390;
    }
    else {
        litem_391=(struct list_item$1CVALUE$ph*)come_increment_ref_count(((struct list_item$1CVALUE$ph*)(__right_value307=(struct list_item$1CVALUE$ph*)come_calloc(1, sizeof(struct list_item$1CVALUE$ph)*(1), "./comelang.h", 1513, "struct list_item$1CVALUE$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_391->prev=self->tail;
        litem_391->next=((void*)0);
        __dec_obj51=litem_391->item;
        litem_391->item=(struct CVALUE*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj51,CVALUE_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_391;
        self->tail=litem_391;
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
struct sFun* come_fun_392;
int block_level_393;
void* __right_value310 = (void*)0;
    come_fun_392=info->come_fun;
    info->come_fun=self->mFun;
    if(    self->mFun->mBlock) {
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")) {
            add_come_code(info,"    come_heap_init(%d, %d, %d);\n",gComeMalloc,gComeDebug,gComeGC);
        }
        block_level_393=info->block_level;
        info->block_level=0;
        transpile_block(self->mFun->mBlock,self->mFun->mParamTypes,self->mFun->mParamNames,info,(_Bool)0,(_Bool)0,(_Bool)0,(_Bool)0);
        info->block_level=block_level_393;
        if(        !gComeC&&string_operator_equals(info->come_fun->mName,"main")&&!info->inhibits_output_code2) {
            free_objects(info->gv_table,((void*)0),info);
            add_come_code(info,((char*)(__right_value310=xsprintf("come_heap_final();\n"))));
            (__right_value310 = come_decrement_ref_count2(__right_value310, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->come_fun=come_fun_392;
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
struct sType* __dec_obj54;
void* __right_value314 = (void*)0;
struct list$1char$ph* __dec_obj55;
void* __right_value315 = (void*)0;
struct list$1char$ph* __dec_obj56;
char* __dec_obj57;
struct sType* __dec_obj58;
struct list$1sType$ph* __dec_obj59;
struct list$1char$ph* __dec_obj60;
struct list$1char$ph* __dec_obj61;
char* __dec_obj62;
void* __right_value316 = (void*)0;
char* __dec_obj63;
struct sGenericsFun* __result_obj__261;
    __dec_obj54=self->mImplType;
    self->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, impl_type));
    come_call_finalizer3(__dec_obj54,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj55=self->mGenericsTypeNames;
    self->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_type_names));
    come_call_finalizer3(__dec_obj55,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj56=self->mMethodGenericsTypeNames;
    self->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, method_generics_type_names));
    come_call_finalizer3(__dec_obj56,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj57=self->mName;
    self->mName=(char*)come_increment_ref_count(name);
    __dec_obj57 = come_decrement_ref_count2(__dec_obj57, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj58=self->mResultType;
    self->mResultType=(struct sType*)come_increment_ref_count(result_type);
    come_call_finalizer3(__dec_obj58,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj59=self->mParamTypes;
    self->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(param_types);
    come_call_finalizer3(__dec_obj59,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj60=self->mParamNames;
    self->mParamNames=(struct list$1char$ph*)come_increment_ref_count(param_names);
    come_call_finalizer3(__dec_obj60,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj61=self->mParamDefaultParametors;
    self->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(param_default_parametors);
    come_call_finalizer3(__dec_obj61,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->mVarArgs=var_args;
    __dec_obj62=self->mBlock;
    self->mBlock=(char*)come_increment_ref_count(block);
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->mSLine=info->sline;
    __dec_obj63=self->mGenericsSName;
    self->mGenericsSName=(char*)come_increment_ref_count(__builtin_string(generics_sname));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
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
void* __right_value317 = (void*)0;
void* __right_value318 = (void*)0;
struct sBlock* result_394;
int sline_top_395;
int block_level_396;
char* p_saved_397;
int sline_saved_398;
char* sname_saved_399;
void* __right_value319 = (void*)0;
char* __dec_obj64;
char* __dec_obj65;
struct map$2char$phchar$ph* __dec_obj66;
char* p_402;
int sline_403;
void* __right_value320 = (void*)0;
char* sname_404;
void* __right_value321 = (void*)0;
void* __right_value322 = (void*)0;
char* module_name_405;
void* __right_value323 = (void*)0;
void* __right_value324 = (void*)0;
struct list$1char$ph* params_406;
void* __right_value325 = (void*)0;
char* word_407;
void* __right_value326 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var1 = (void*)0;
int come_exception_var_c1_408=0;
char* Err_409=0;
void* __right_value327 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var2 = (void*)0;
int come_exception_var_c2_410=0;
char* Err_411=0;
void* __right_value328 = (void*)0;
char* __dec_obj67;
void* __right_value329 = (void*)0;
char* __dec_obj68;
void* __right_value330 = (void*)0;
void* __right_value331 = (void*)0;
_Bool _if_conditional1;
void* __right_value332 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var3 = (void*)0;
int come_exception_var_c3_415=0;
char* Err_416=0;
struct sBlock* __result_obj__266;
void* __right_value333 = (void*)0;
void* __right_value334 = (void*)0;
struct sClassModule* module_417;
void* __right_value335 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var4 = (void*)0;
int come_exception_var_c4_418=0;
char* Err_419=0;
void* __right_value336 = (void*)0;
void* __right_value342 = (void*)0;
struct map$2char$phchar$ph* __dec_obj70;
int i_425;
struct list$1char$ph* o2_saved_426;
char* it_429;
void* __right_value343 = (void*)0;
void* __right_value349 = (void*)0;
void* __right_value350 = (void*)0;
void* __right_value351 = (void*)0;
char* __dec_obj71;
void* __right_value352 = (void*)0;
struct sNode* node_476;
void* __right_value353 = (void*)0;
char* __dec_obj72;
void* __right_value354 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var5 = (void*)0;
int come_exception_var_c5_477=0;
char* Err_478=0;
_Bool omit_semicolon_482;
void* __right_value358 = (void*)0;
char* __dec_obj76;
char* head_497;
void* __right_value359 = (void*)0;
struct sNode* value_498;
char* tail_499;
void* __right_value360 = (void*)0;
struct sNode* __dec_obj77;
void* __right_value361 = (void*)0;
void* __right_value362 = (void*)0;
struct sNode* node_501;
void* __right_value363 = (void*)0;
char* __dec_obj78;
struct sNode* node_502;
void* __right_value364 = (void*)0;
void* __right_value365 = (void*)0;
struct sNode* _inf_value1;
struct sSemicolonNode* _inf_obj_value1;
void* __right_value368 = (void*)0;
struct sNode* __dec_obj80;
void* __right_value369 = (void*)0;
struct sNode* __dec_obj81;
void* __right_value370 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var6 = (void*)0;
int come_exception_var_c6_504=0;
char* Err_505=0;
_Bool omit_semicolon_506;
char* p_507;
char* head_508;
void* __right_value371 = (void*)0;
char* source_509;
void* __right_value372 = (void*)0;
struct sNode* node_510;
void* __right_value373 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var7 = (void*)0;
int come_exception_var_c7_511=0;
char* Err_512=0;
struct sBlock* __result_obj__304;
node_502 = (void*)0;
    result_394=(struct sBlock*)come_increment_ref_count(sBlock_initialize((struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "05function.c", 155, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0)),info));
    sline_top_395=info->sline_top;
    info->sline_top=info->sline;
    block_level_396=info->block_level;
    if(    !no_block_level) {
        info->block_level++;
    }
    if(    *info->p==123) {
        p_saved_397=((void*)0);
        sline_saved_398=0;
        sname_saved_399=((void*)0);
        info->p++;
        skip_spaces_and_lf(info);
        while((_Bool)1) {
            if(            p_saved_397) {
                if(                *info->p==0) {
                    info->p=p_saved_397;
                    info->sline=sline_saved_398;
                    __dec_obj64=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_399));
                    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
                    p_saved_397=((void*)0);
                    sline_saved_398=0;
                    __dec_obj65=sname_saved_399;
                    sname_saved_399=((void*)0);
                    __dec_obj65 = come_decrement_ref_count2(__dec_obj65, (void*)0, (void*)0, 0,0,0, (void*)0);
                    __dec_obj66=info->module_params;
                    info->module_params=((void*)0);
                    come_call_finalizer3(__dec_obj66,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
            p_402=info->p;
            sline_403=info->sline;
            sname_404=(char*)come_increment_ref_count(__builtin_string(info->sname));
            if(            *info->p==123) {
                info->sline_top=sline_403;
            }
            if(            strncmp(info->p,"include ",strlen("include "))==0) {
                ((char*)(__right_value321=parse_word(info)));
                (__right_value321 = come_decrement_ref_count2(__right_value321, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                module_name_405=(char*)come_increment_ref_count(parse_word(info));
                params_406=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 211, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==60) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    while((_Bool)1) {
                        word_407=(char*)come_increment_ref_count(parse_word(info));
                        list$1char$ph$p_add(params_406,(char*)come_increment_ref_count(word_407));
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==0) {
                            multiple_assign_var1=((struct tuple2$2int$char$ph*)(__right_value326=err_msg(info,"invalid source end")));
                            come_exception_var_c1_408=multiple_assign_var1->v1;
                            Err_409=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                            ((Err_409)?(puts(Err_409),exit(0)):(0));
                            come_call_finalizer3(__right_value326,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_409 = come_decrement_ref_count2(Err_409, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        else if(                        *info->p==62) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            (word_407 = come_decrement_ref_count2(word_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var2=((struct tuple2$2int$char$ph*)(__right_value327=err_msg(info,"invalid charactor(%c)",*info->p)));
                            come_exception_var_c2_410=multiple_assign_var2->v1;
                            Err_411=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                            ((Err_411)?(puts(Err_411),exit(0)):(0));
                            come_call_finalizer3(__right_value327,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_411 = come_decrement_ref_count2(Err_411, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        (word_407 = come_decrement_ref_count2(word_407, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                if(                *info->p==59) {
                    info->p++;
                }
                skip_spaces_and_lf(info);
                p_saved_397=info->p;
                sline_saved_398=info->sline;
                __dec_obj67=sname_saved_399;
                sname_saved_399=(char*)come_increment_ref_count(__builtin_string(info->sname));
                __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj68=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_name_405));
                __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
                info->sline=0;
                if(                (_if_conditional1=(((struct sClassModule*)(__right_value331=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value330=__builtin_string(module_name_405))))))==((void*)0))),                (__right_value330 = come_decrement_ref_count2(__right_value330, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0)),
                come_call_finalizer3(__right_value331,sClassModule_finalize, 0, 1, 0, 0, (void*)0),
                _if_conditional1) {
                    multiple_assign_var3=((struct tuple2$2int$char$ph*)(__right_value332=err_msg(info,"module not found")));
                    come_exception_var_c3_415=multiple_assign_var3->v1;
                    Err_416=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    ((Err_416)?(puts(Err_416),exit(0)):(0));
                    come_call_finalizer3(__right_value332,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    __result_obj__266 = come_increment_ref_count(((void*)0));
                    (Err_416 = come_decrement_ref_count2(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (module_name_405 = come_decrement_ref_count2(module_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(params_406,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                    (sname_404 = come_decrement_ref_count2(sname_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (sname_saved_399 = come_decrement_ref_count2(sname_saved_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(result_394,sBlock_finalize, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__266,sBlock_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__266;
                    (Err_416 = come_decrement_ref_count2(Err_416, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                module_417=((struct sClassModule*)(__right_value334=map$2char$phsClassModule$ph$p_operator_load_element(info->modules,((char*)(__right_value333=__builtin_string(module_name_405))))));
                (__right_value333 = come_decrement_ref_count2(__right_value333, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(__right_value334,sClassModule_finalize, 0, 1, 0, 0, (void*)0);
                if(                list$1char$ph$p_length(module_417->mParams)!=list$1char$ph$p_length(params_406)) {
                    multiple_assign_var4=((struct tuple2$2int$char$ph*)(__right_value335=err_msg(info,"invalid parametor number")));
                    come_exception_var_c4_418=multiple_assign_var4->v1;
                    Err_419=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    ((Err_419)?(puts(Err_419),exit(0)):(0));
                    come_call_finalizer3(__right_value335,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(1);
                    (Err_419 = come_decrement_ref_count2(Err_419, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                __dec_obj70=info->module_params;
                info->module_params=(struct map$2char$phchar$ph*)come_increment_ref_count(map$2char$phchar$ph$p_initialize((struct map$2char$phchar$ph*)come_increment_ref_count((struct map$2char$phchar$ph*)come_calloc(1, sizeof(struct map$2char$phchar$ph)*(1), "05function.c", 265, "struct map$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                come_call_finalizer3(__dec_obj70,map$2char$phchar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                i_425=0;
                for(                o2_saved_426=(struct list$1char$ph*)come_increment_ref_count((module_417->mParams)),it_429=list$1char$ph$p_begin((o2_saved_426));                !list$1char$ph$p_end((o2_saved_426));                it_429=list$1char$ph$p_next((o2_saved_426))                ){
                    map$2char$phchar$ph$p_operator_store_element(info->module_params,(char*)come_increment_ref_count(__builtin_string(it_429)),(char*)come_increment_ref_count(__builtin_string(((char*)(__right_value349=list$1char$ph$p_operator_load_element(params_406,i_425))))));
                    (__right_value349 = come_decrement_ref_count2(__right_value349, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    i_425++;
                }
                come_call_finalizer3(o2_saved_426,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                info->p=module_417->mText;
                info->sline=module_417->mSLine;
                __dec_obj71=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(module_417->mSName));
                __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
                (module_name_405 = come_decrement_ref_count2(module_name_405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(params_406,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            }
            node_476=(struct sNode*)come_increment_ref_count(statment(info));
            __dec_obj72=info->sname;
            info->sname=(char*)come_increment_ref_count(node_476->sname(node_476->_protocol_obj));
            __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=node_476->sline(node_476->_protocol_obj);
            if(            node_476==((void*)0)) {
                multiple_assign_var5=((struct tuple2$2int$char$ph*)(__right_value354=err_msg(info,"Invalid expression")));
                come_exception_var_c5_477=multiple_assign_var5->v1;
                Err_478=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                ((Err_478)?(puts(Err_478),exit(0)):(0));
                come_call_finalizer3(__right_value354,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_478 = come_decrement_ref_count2(Err_478, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            list$1sNode$ph$p_push_back(result_394->mNodes,(struct sNode*)come_increment_ref_count(node_476));
            parse_sharp_v5(info);
            if(            node_476->terminated(node_476->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_482=(_Bool)1;
            if(            node_476->terminated(node_476->_protocol_obj)) {
                omit_semicolon_482=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_482=(_Bool)0;
            }
            parse_sharp_v5(info);
            if(            *info->p==125) {
                result_394->mOmitSemicolon=omit_semicolon_482;
                if(                omit_semicolon_482&&in_function) {
                    list$1sNode$ph$p_delete(result_394->mNodes,-1,-1);
                    dec_stack_ptr(1,info);
                    info->p=p_402;
                    info->sline=sline_403;
                    __dec_obj76=info->sname;
                    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_404));
                    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
                    head_497=info->p;
                    value_498=(struct sNode*)come_increment_ref_count(expression_v13(info));
                    tail_499=info->p;
                    __dec_obj77=value_498;
                    value_498=(struct sNode*)come_increment_ref_count(post_position_operator_v99((struct sNode*)come_increment_ref_count(value_498),info));
                    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); };
                    char buf_500[tail_499-head_497+1];
                    memset(&buf_500, 0, sizeof(char)                    *(tail_499-head_497+1)                    );
                    memcpy(buf_500,head_497,tail_499-head_497);
                    buf_500[tail_499-head_497]=0;
                    info->p++;
                    skip_spaces_and_lf(info);
                    node_501=(struct sNode*)come_increment_ref_count(create_return_node((struct sNode*)come_increment_ref_count(value_498),(char*)come_increment_ref_count(__builtin_string(buf_500)),info));
                    list$1sNode$ph$p_push_back(result_394->mNodes,(struct sNode*)come_increment_ref_count(node_501));
                    ((value_498) ? value_498 = come_decrement_ref_count2(value_498, ((struct sNode*)value_498)->finalize, ((struct sNode*)value_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_501) ? node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    (sname_404 = come_decrement_ref_count2(sname_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_476) ? node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                    ((value_498) ? value_498 = come_decrement_ref_count2(value_498, ((struct sNode*)value_498)->finalize, ((struct sNode*)value_498)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    ((node_501) ? node_501 = come_decrement_ref_count2(node_501, ((struct sNode*)node_501)->finalize, ((struct sNode*)node_501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                }
                else {
                    info->p++;
                    skip_spaces_and_lf(info);
                    (sname_404 = come_decrement_ref_count2(sname_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    ((node_476) ? node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                    break;
                }
            }
            (sname_404 = come_decrement_ref_count2(sname_404, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_476) ? node_476 = come_decrement_ref_count2(node_476, ((struct sNode*)node_476)->finalize, ((struct sNode*)node_476)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        if(        p_saved_397) {
            if(            info->p==0) {
                info->p=p_saved_397;
                info->sline=sline_saved_398;
                __dec_obj78=info->sname;
                info->sname=(char*)come_increment_ref_count(__builtin_string(sname_saved_399));
                __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
                p_saved_397=((void*)0);
                sline_saved_398=0;
            }
        }
        (sname_saved_399 = come_decrement_ref_count2(sname_saved_399, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        info->sline_block=info->sline;
        parse_sharp_v5(info);
        if(        *info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 369, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value1=(struct sSemicolonNode*)come_increment_ref_count(((struct sSemicolonNode*)(__right_value365=sSemicolonNode_initialize((struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "05function.c", 369, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0)),info))));
            _inf_value1->_protocol_obj=_inf_obj_value1;
            _inf_value1->finalize=(void*)sSemicolonNode_finalize;
            _inf_value1->clone=(void*)sSemicolonNode_clone;
            _inf_value1->compile=(void*)sSemicolonNode_compile;
            _inf_value1->sline=(void*)sNodeBase_sline;
            _inf_value1->sline_real=(void*)sNodeBase_sline_real;
            _inf_value1->sname=(void*)sNodeBase_sname;
            _inf_value1->terminated=(void*)sNodeBase_terminated;
            _inf_value1->kind=(void*)sSemicolonNode_kind;
            __dec_obj80=node_502;
            node_502=(struct sNode*)come_increment_ref_count(_inf_value1);
            if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); };
            come_call_finalizer3(__right_value365,sSemicolonNode_finalize, 0, 1, 0, 0, (void*)0);
            list$1sNode$ph$p_push_back(result_394->mNodes,(struct sNode*)come_increment_ref_count(node_502));
        }
        else {
            __dec_obj81=node_502;
            node_502=(struct sNode*)come_increment_ref_count(expression_v13(info));
            if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); };
            parse_sharp_v5(info);
            if(            node_502==((void*)0)) {
                multiple_assign_var6=((struct tuple2$2int$char$ph*)(__right_value370=err_msg(info,"Invalid expression")));
                come_exception_var_c6_504=multiple_assign_var6->v1;
                Err_505=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                ((Err_505)?(puts(Err_505),exit(0)):(0));
                come_call_finalizer3(__right_value370,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(1);
                (Err_505 = come_decrement_ref_count2(Err_505, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            parse_sharp_v5(info);
            if(            node_502->terminated(node_502->_protocol_obj)) {
                skip_spaces_and_lf(info);
            }
            omit_semicolon_506=(_Bool)1;
            if(            node_502->terminated(node_502->_protocol_obj)) {
                omit_semicolon_506=(_Bool)0;
            }
            while(*info->p==59) {
                info->p++;
                skip_spaces_and_lf(info);
                omit_semicolon_506=(_Bool)0;
            }
            parse_sharp_v5(info);
            result_394->mOmitSemicolon=omit_semicolon_506;
            list$1sNode$ph$p_push_back(result_394->mNodes,(struct sNode*)come_increment_ref_count(node_502));
        }
        ((node_502) ? node_502 = come_decrement_ref_count2(node_502, ((struct sNode*)node_502)->finalize, ((struct sNode*)node_502)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    if(    return_self_at_last) {
        p_507=info->p;
        head_508=info->head;
        source_509=(char*)come_increment_ref_count(__builtin_string("return self;"));
        info->p=source_509;
        info->head=source_509;
        node_510=(struct sNode*)come_increment_ref_count(expression_v13(info));
        if(        node_510==((void*)0)) {
            multiple_assign_var7=((struct tuple2$2int$char$ph*)(__right_value373=err_msg(info,"Invalid expression")));
            come_exception_var_c7_511=multiple_assign_var7->v1;
            Err_512=(char*)come_increment_ref_count(multiple_assign_var7->v2);
            ((Err_512)?(puts(Err_512),exit(0)):(0));
            come_call_finalizer3(__right_value373,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_512 = come_decrement_ref_count2(Err_512, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        list$1sNode$ph$p_push_back(result_394->mNodes,(struct sNode*)come_increment_ref_count(node_510));
        info->p=p_507;
        info->head=head_508;
        (source_509 = come_decrement_ref_count2(source_509, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_510) ? node_510 = come_decrement_ref_count2(node_510, ((struct sNode*)node_510)->finalize, ((struct sNode*)node_510)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    info->block_level=block_level_396;
    __result_obj__304 = come_increment_ref_count(result_394);
    come_call_finalizer3(result_394,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__304,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__304;
}

static void map$2char$phchar$ph_finalize(struct map$2char$phchar$ph* self){
int i_400;
int i_401;
    for(    i_400=0;    i_400<self->size;    i_400++    ){
        if(        self->item_existance[i_400]) {
            if(            1) {
                (self->items[i_400] = come_decrement_ref_count2(self->items[i_400], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_401=0;    i_401<self->size;    i_401++    ){
        if(        self->item_existance[i_401]) {
            if(            1) {
                (self->keys[i_401] = come_decrement_ref_count2(self->keys[i_401], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
struct sClassModule* default_value_412;
unsigned int hash_413;
unsigned int it_414;
struct sClassModule* __result_obj__262;
struct sClassModule* __result_obj__263;
struct sClassModule* __result_obj__264;
struct sClassModule* __result_obj__265;
default_value_412 = (void*)0;
    memset(&default_value_412,0,sizeof(struct sClassModule*));
    hash_413=string_get_hash_key(((char*)key))%self->size;
    it_414=hash_413;
    while((_Bool)1) {
        if(        self->item_existance[it_414]) {
            if(            string_equals(self->keys[it_414],key)) {
                __result_obj__262 = come_increment_ref_count(self->items[it_414]);
                come_call_finalizer3(default_value_412,sClassModule_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__262,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__262;
            }
            it_414++;
            if(            it_414>=self->size) {
                it_414=0;
            }
            else if(            it_414==hash_413) {
                __result_obj__263 = come_increment_ref_count(default_value_412);
                come_call_finalizer3(default_value_412,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__263,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__263;
            }
        }
        else {
            __result_obj__264 = come_increment_ref_count(default_value_412);
            come_call_finalizer3(default_value_412,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__264,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__264;
        }
    }
    __result_obj__265 = come_increment_ref_count(default_value_412);
    come_call_finalizer3(default_value_412,sClassModule_finalize, 0, 0, 1, 0, (void*)0);
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
void* __right_value337 = (void*)0;
void* __right_value338 = (void*)0;
void* __right_value339 = (void*)0;
int i_420;
void* __right_value340 = (void*)0;
void* __right_value341 = (void*)0;
struct list$1char$p* __dec_obj69;
struct map$2char$phchar$ph* __result_obj__268;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value337=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(char**)come_increment_ref_count(((char**)(__right_value338=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2700, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value339=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_420=0;    i_420<128;    i_420++    ){
        self->item_existance[i_420]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj69=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj69,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
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
struct list_item$1char$p* it_421;
struct list_item$1char$p* prev_it_422;
    it_421=self->head;
    while(it_421!=((void*)0)) {
        prev_it_422=it_421;
        it_421=it_421->next;
        come_call_finalizer3(prev_it_422,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void map$2char$phchar$ph$p_finalize(struct map$2char$phchar$ph* self){
int i_423;
int i_424;
    for(    i_423=0;    i_423<self->size;    i_423++    ){
        if(        self->item_existance[i_423]) {
            if(            1) {
                (self->items[i_423] = come_decrement_ref_count2(self->items[i_423], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->items);
    for(    i_424=0;    i_424<self->size;    i_424++    ){
        if(        self->item_existance[i_424]) {
            if(            1) {
                (self->keys[i_424] = come_decrement_ref_count2(self->keys[i_424], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static char* list$1char$ph$p_begin(struct list$1char$ph* self){
char* result_427;
char* __result_obj__269;
char* __result_obj__270;
char* result_428;
char* __result_obj__271;
result_427 = (void*)0;
result_428 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_427,0,sizeof(char*));
        __result_obj__269 = result_427;
        return __result_obj__269;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__270 = self->it->item;
        return __result_obj__270;
    }
    memset(&result_428,0,sizeof(char*));
    __result_obj__271 = result_428;
    return __result_obj__271;
}

static _Bool list$1char$ph$p_end(struct list$1char$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$ph$p_next(struct list$1char$ph* self){
char* result_430;
char* __result_obj__272;
char* __result_obj__273;
char* result_431;
char* __result_obj__274;
result_430 = (void*)0;
result_431 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_430,0,sizeof(char*));
        __result_obj__272 = result_430;
        return __result_obj__272;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__273 = self->it->item;
        return __result_obj__273;
    }
    memset(&result_431,0,sizeof(char*));
    __result_obj__274 = result_431;
    return __result_obj__274;
}

static void map$2char$phchar$ph$p_operator_store_element(struct map$2char$phchar$ph* self, char* key, char* item){
    map$2char$phchar$ph$p_insert(self,(char*)come_increment_ref_count(key),(char*)come_increment_ref_count(item));
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phchar$ph* map$2char$phchar$ph$p_insert(struct map$2char$phchar$ph* self, char* key, char* item){
unsigned int hash_449;
unsigned int it_450;
_Bool same_key_exist_467;
char* it2_470;
struct map$2char$phchar$ph* __result_obj__295;
    if(    self->len*10>=self->size) {
        map$2char$phchar$ph$p_rehash(self);
    }
    hash_449=string_get_hash_key(((char*)key))%self->size;
    it_450=hash_449;
    while((_Bool)1) {
        if(        self->item_existance[it_450]) {
            if(            string_equals(self->keys[it_450],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_450]);
                    (self->keys[it_450] = come_decrement_ref_count2(self->keys[it_450], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_450]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_450]);
                    self->keys[it_450]=key;
                }
                if(                1) {
                    (self->items[it_450] = come_decrement_ref_count2(self->items[it_450], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->items[it_450]=(char*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_450]=item;
                }
                break;
            }
            it_450++;
            if(            it_450>=self->size) {
                it_450=0;
            }
            else if(            it_450==hash_449) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_450]=(_Bool)1;
            if(            1) {
                self->keys[it_450]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_450]=key;
            }
            if(            1) {
                self->items[it_450]=(char*)come_increment_ref_count(item);
            }
            else {
                self->items[it_450]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_467=(_Bool)0;
    for(    it2_470=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_470=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_470,key)) {
            same_key_exist_467=(_Bool)1;
        }
    }
    if(    !same_key_exist_467) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__295 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__295;
}

static void map$2char$phchar$ph$p_rehash(struct map$2char$phchar$ph* self){
int size_432;
void* __right_value344 = (void*)0;
char** keys_433;
void* __right_value345 = (void*)0;
char** items_434;
void* __right_value346 = (void*)0;
_Bool* item_existance_435;
int len_436;
char* it_439;
char* default_value_442;
void* __right_value347 = (void*)0;
char* it2_443;
unsigned int hash_446;
int n_447;
char* default_value_448;
void* __right_value348 = (void*)0;
default_value_442 = (void*)0;
default_value_448 = (void*)0;
    size_432=self->size*10;
    keys_433=(char**)come_increment_ref_count(((char**)(__right_value344=(char**)come_calloc(1, sizeof(char*)*(1*(size_432)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_434=(char**)come_increment_ref_count(((char**)(__right_value345=(char**)come_calloc(1, sizeof(char*)*(1*(size_432)), "./comelang.h", 2939, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_435=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value346=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_432)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_436=0;
    for(    it_439=map$2char$phchar$ph$p_begin(self);    !map$2char$phchar$ph$p_end(self);    it_439=map$2char$phchar$ph$p_next(self)    ){
        memset(&default_value_442,0,sizeof(char*));
        it2_443=((char*)(__right_value347=map$2char$phchar$ph$p_at(self,it_439,(char*)come_increment_ref_count(default_value_442))));
        (__right_value347 = come_decrement_ref_count2(__right_value347, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        hash_446=string_get_hash_key(((char*)it_439))%size_432;
        n_447=hash_446;
        while((_Bool)1) {
            if(            item_existance_435[n_447]) {
                n_447++;
                if(                n_447>=size_432) {
                    n_447=0;
                }
                else if(                n_447==hash_446) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_435[n_447]=(_Bool)1;
                keys_433[n_447]=it_439;
                items_434[n_447]=((char*)(__right_value348=map$2char$phchar$ph$p_at(self,it_439,(char*)come_increment_ref_count(default_value_448))));
                (__right_value348 = come_decrement_ref_count2(__right_value348, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                len_436++;
                (default_value_448 = come_decrement_ref_count2(default_value_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
                (default_value_448 = come_decrement_ref_count2(default_value_448, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        (default_value_442 = come_decrement_ref_count2(default_value_442, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_433;
    self->items=items_434;
    self->item_existance=item_existance_435;
    self->size=size_432;
    self->len=len_436;
}

static char* map$2char$phchar$ph$p_begin(struct map$2char$phchar$ph* self){
char* result_437;
char* __result_obj__275;
char* __result_obj__276;
char* result_438;
char* __result_obj__277;
result_437 = (void*)0;
result_438 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_437,0,sizeof(char*));
        __result_obj__275 = result_437;
        return __result_obj__275;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__276 = self->key_list->it->item;
        return __result_obj__276;
    }
    memset(&result_438,0,sizeof(char*));
    __result_obj__277 = result_438;
    return __result_obj__277;
}

static _Bool map$2char$phchar$ph$p_end(struct map$2char$phchar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phchar$ph$p_next(struct map$2char$phchar$ph* self){
char* result_440;
char* __result_obj__278;
char* __result_obj__279;
char* result_441;
char* __result_obj__280;
result_440 = (void*)0;
result_441 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_440,0,sizeof(char*));
        __result_obj__278 = result_440;
        return __result_obj__278;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__279 = self->key_list->it->item;
        return __result_obj__279;
    }
    memset(&result_441,0,sizeof(char*));
    __result_obj__280 = result_441;
    return __result_obj__280;
}

static char* map$2char$phchar$ph$p_at(struct map$2char$phchar$ph* self, char* key, char* default_value){
unsigned int hash_444;
unsigned int it_445;
char* __result_obj__281;
char* __result_obj__282;
char* __result_obj__283;
char* __result_obj__284;
    hash_444=string_get_hash_key(((char*)key))%self->size;
    it_445=hash_444;
    while((_Bool)1) {
        if(        self->item_existance[it_445]) {
            if(            string_equals(self->keys[it_445],key)) {
                __result_obj__281 = come_increment_ref_count(self->items[it_445]);
                (default_value = come_decrement_ref_count2(default_value, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (__result_obj__281 = come_decrement_ref_count2(__result_obj__281, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
                return __result_obj__281;
            }
            it_445++;
            if(            it_445>=self->size) {
                it_445=0;
            }
            else if(            it_445==hash_444) {
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
int it2_451;
struct list_item$1char$p* it_452;
struct list$1char$p* __result_obj__288;
    it2_451=0;
    it_452=self->head;
    while(it_452!=((void*)0)) {
        if(        charp_equals(it_452->item,item)) {
            list$1char$p$p_delete(self,it2_451,it2_451+1);
            break;
        }
        it2_451++;
        it_452=it_452->next;
    }
    __result_obj__288 = self;
    return __result_obj__288;
}

static struct list$1char$p* list$1char$p$p_delete(struct list$1char$p* self, int head, int tail){
int tmp_453;
struct list$1char$p* __result_obj__285;
struct list_item$1char$p* it_456;
int i_457;
struct list_item$1char$p* prev_it_458;
struct list_item$1char$p* it_459;
int i_460;
struct list_item$1char$p* prev_it_461;
struct list_item$1char$p* it_462;
struct list_item$1char$p* head_prev_it_463;
struct list_item$1char$p* tail_it_464;
int i_465;
struct list_item$1char$p* prev_it_466;
struct list$1char$p* __result_obj__287;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_453=tail;
        tail=head;
        head=tmp_453;
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
        it_456=self->head;
        i_457=0;
        while(it_456!=((void*)0)) {
            if(            i_457<tail) {
                prev_it_458=it_456;
                it_456=it_456->next;
                i_457++;
                come_call_finalizer3(prev_it_458,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_457==tail) {
                self->head=it_456;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_456=it_456->next;
                i_457++;
            }
        }
    }
    else if(    tail==self->len) {
        it_459=self->head;
        i_460=0;
        while(it_459!=((void*)0)) {
            if(            i_460==head) {
                self->tail=it_459->prev;
                self->tail->next=((void*)0);
            }
            if(            i_460>=head) {
                prev_it_461=it_459;
                it_459=it_459->next;
                i_460++;
                come_call_finalizer3(prev_it_461,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_459=it_459->next;
                i_460++;
            }
        }
    }
    else {
        it_462=self->head;
        head_prev_it_463=((void*)0);
        tail_it_464=((void*)0);
        i_465=0;
        while(it_462!=((void*)0)) {
            if(            i_465==head) {
                head_prev_it_463=it_462->prev;
            }
            if(            i_465==tail) {
                tail_it_464=it_462;
            }
            if(            i_465>=head&&i_465<tail) {
                prev_it_466=it_462;
                it_462=it_462->next;
                i_465++;
                come_call_finalizer3(prev_it_466,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_462=it_462->next;
                i_465++;
            }
        }
        if(        head_prev_it_463!=((void*)0)) {
            head_prev_it_463->next=tail_it_464;
        }
        if(        tail_it_464!=((void*)0)) {
            tail_it_464->prev=head_prev_it_463;
        }
    }
    __result_obj__287 = self;
    return __result_obj__287;
}

static struct list$1char$p* list$1char$p$p_reset(struct list$1char$p* self){
struct list_item$1char$p* it_454;
struct list_item$1char$p* prev_it_455;
struct list$1char$p* __result_obj__286;
    it_454=self->head;
    while(it_454!=((void*)0)) {
        prev_it_455=it_454;
        it_454=it_454->next;
        come_call_finalizer3(prev_it_455,list_item$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__286 = self;
    return __result_obj__286;
}

static char* list$1char$p$p_begin(struct list$1char$p* self){
char* result_468;
char* __result_obj__289;
char* __result_obj__290;
char* result_469;
char* __result_obj__291;
result_468 = (void*)0;
result_469 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_468,0,sizeof(char*));
        __result_obj__289 = result_468;
        return __result_obj__289;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__290 = self->it->item;
        return __result_obj__290;
    }
    memset(&result_469,0,sizeof(char*));
    __result_obj__291 = result_469;
    return __result_obj__291;
}

static _Bool list$1char$p$p_end(struct list$1char$p* self){
    return self==((void*)0)||self->it==((void*)0);
}

static char* list$1char$p$p_next(struct list$1char$p* self){
char* result_471;
char* __result_obj__292;
char* __result_obj__293;
char* result_472;
char* __result_obj__294;
result_471 = (void*)0;
result_472 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_471,0,sizeof(char*));
        __result_obj__292 = result_471;
        return __result_obj__292;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__293 = self->it->item;
        return __result_obj__293;
    }
    memset(&result_472,0,sizeof(char*));
    __result_obj__294 = result_472;
    return __result_obj__294;
}

static char* list$1char$ph$p_operator_load_element(struct list$1char$ph* self, int position){
struct list_item$1char$ph* it_473;
int i_474;
char* __result_obj__296;
char* default_value_475;
char* __result_obj__297;
default_value_475 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_473=self->head;
    i_474=0;
    while(it_473!=((void*)0)) {
        if(        position==i_474) {
            __result_obj__296 = come_increment_ref_count(it_473->item);
            (__result_obj__296 = come_decrement_ref_count2(__result_obj__296, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
            return __result_obj__296;
        }
        it_473=it_473->next;
        i_474++;
    }
    memset(&default_value_475,0,sizeof(char*));
    __result_obj__297 = come_increment_ref_count(default_value_475);
    (default_value_475 = come_decrement_ref_count2(default_value_475, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__297 = come_decrement_ref_count2(__result_obj__297, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__297;
}

static struct list$1sNode$ph* list$1sNode$ph$p_push_back(struct list$1sNode$ph* self, struct sNode* item){
void* __right_value355 = (void*)0;
struct list_item$1sNode$ph* litem_479;
struct sNode* __dec_obj73;
void* __right_value356 = (void*)0;
struct list_item$1sNode$ph* litem_480;
struct sNode* __dec_obj74;
void* __right_value357 = (void*)0;
struct list_item$1sNode$ph* litem_481;
struct sNode* __dec_obj75;
struct list$1sNode$ph* __result_obj__298;
    if(    self->len==0) {
        litem_479=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value355=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1493, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_479->prev=((void*)0);
        litem_479->next=((void*)0);
        __dec_obj73=litem_479->item;
        litem_479->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_479;
        self->head=litem_479;
    }
    else if(    self->len==1) {
        litem_480=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value356=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1503, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_480->prev=self->head;
        litem_480->next=((void*)0);
        __dec_obj74=litem_480->item;
        litem_480->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail=litem_480;
        self->head->next=litem_480;
    }
    else {
        litem_481=(struct list_item$1sNode$ph*)come_increment_ref_count(((struct list_item$1sNode$ph*)(__right_value357=(struct list_item$1sNode$ph*)come_calloc(1, sizeof(struct list_item$1sNode$ph)*(1), "./comelang.h", 1513, "struct list_item$1sNode$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_481->prev=self->tail;
        litem_481->next=((void*)0);
        __dec_obj75=litem_481->item;
        litem_481->item=(struct sNode*)come_increment_ref_count(item);
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); };
        self->tail->next=litem_481;
        self->tail=litem_481;
    }
    self->len++;
    __result_obj__298 = self;
    ((item) ? item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__298;
}

static struct list$1sNode$ph* list$1sNode$ph$p_delete(struct list$1sNode$ph* self, int head, int tail){
int tmp_483;
struct list$1sNode$ph* __result_obj__299;
struct list_item$1sNode$ph* it_486;
int i_487;
struct list_item$1sNode$ph* prev_it_488;
struct list_item$1sNode$ph* it_489;
int i_490;
struct list_item$1sNode$ph* prev_it_491;
struct list_item$1sNode$ph* it_492;
struct list_item$1sNode$ph* head_prev_it_493;
struct list_item$1sNode$ph* tail_it_494;
int i_495;
struct list_item$1sNode$ph* prev_it_496;
struct list$1sNode$ph* __result_obj__301;
    if(    head<0) {
        head+=self->len;
    }
    if(    tail<0) {
        tail+=self->len+1;
    }
    if(    head>tail) {
        tmp_483=tail;
        tail=head;
        head=tmp_483;
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
        it_486=self->head;
        i_487=0;
        while(it_486!=((void*)0)) {
            if(            i_487<tail) {
                prev_it_488=it_486;
                it_486=it_486->next;
                i_487++;
                come_call_finalizer3(prev_it_488,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else if(            i_487==tail) {
                self->head=it_486;
                self->head->prev=((void*)0);
                break;
            }
            else {
                it_486=it_486->next;
                i_487++;
            }
        }
    }
    else if(    tail==self->len) {
        it_489=self->head;
        i_490=0;
        while(it_489!=((void*)0)) {
            if(            i_490==head) {
                self->tail=it_489->prev;
                self->tail->next=((void*)0);
            }
            if(            i_490>=head) {
                prev_it_491=it_489;
                it_489=it_489->next;
                i_490++;
                come_call_finalizer3(prev_it_491,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_489=it_489->next;
                i_490++;
            }
        }
    }
    else {
        it_492=self->head;
        head_prev_it_493=((void*)0);
        tail_it_494=((void*)0);
        i_495=0;
        while(it_492!=((void*)0)) {
            if(            i_495==head) {
                head_prev_it_493=it_492->prev;
            }
            if(            i_495==tail) {
                tail_it_494=it_492;
            }
            if(            i_495>=head&&i_495<tail) {
                prev_it_496=it_492;
                it_492=it_492->next;
                i_495++;
                come_call_finalizer3(prev_it_496,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                self->len--;
            }
            else {
                it_492=it_492->next;
                i_495++;
            }
        }
        if(        head_prev_it_493!=((void*)0)) {
            head_prev_it_493->next=tail_it_494;
        }
        if(        tail_it_494!=((void*)0)) {
            tail_it_494->prev=head_prev_it_493;
        }
    }
    __result_obj__301 = self;
    return __result_obj__301;
}

static struct list$1sNode$ph* list$1sNode$ph$p_reset(struct list$1sNode$ph* self){
struct list_item$1sNode$ph* it_484;
struct list_item$1sNode$ph* prev_it_485;
struct list$1sNode$ph* __result_obj__300;
    it_484=self->head;
    while(it_484!=((void*)0)) {
        prev_it_485=it_484;
        it_484=it_484->next;
        come_call_finalizer3(prev_it_485,list_item$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__300 = self;
    return __result_obj__300;
}

static struct sSemicolonNode* sSemicolonNode_clone(struct sSemicolonNode* self){
struct sSemicolonNode* __result_obj__302;
void* __right_value366 = (void*)0;
struct sSemicolonNode* result_503;
void* __right_value367 = (void*)0;
char* __dec_obj79;
struct sSemicolonNode* __result_obj__303;
    if(    self==(void*)0) {
        __result_obj__302 = (void*)0;
        return __result_obj__302;
    }
    result_503=(struct sSemicolonNode*)come_increment_ref_count((struct sSemicolonNode*)come_calloc(1, sizeof(struct sSemicolonNode)*(1), "sSemicolonNode_clone", 3, "struct sSemicolonNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_503->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj79=result_503->sname;
        result_503->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_503->sline_real=self->sline_real;
    }
    __result_obj__303 = result_503;
    come_call_finalizer3(result_503,sSemicolonNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__303;
}

int transpile_block(struct sBlock* block, struct list$1sType$ph* param_types, struct list$1char$ph* param_names, struct sInfo* info, _Bool no_var_table, _Bool loop_block, _Bool comma, _Bool if_result){
_Bool inhibits_output_code_513;
struct sVarTable* old_table_514;
void* __right_value404 = (void*)0;
void* __right_value405 = (void*)0;
struct sVarTable* __dec_obj89;
struct sVarTable* current_loop_vtable_559;
int i_560;
struct list$1char$ph* o2_saved_561;
char* name_562;
void* __right_value406 = (void*)0;
struct sType* type_563;
void* __right_value407 = (void*)0;
int block_level_567;
int i_568;
struct list$1sNode$ph* o2_saved_569;
struct sNode* node_572;
struct list$1sRightValueObject$ph* right_value_objects_575;
void* __right_value408 = (void*)0;
void* __right_value409 = (void*)0;
struct list$1sRightValueObject$ph* __dec_obj90;
char* __dec_obj91;
char* __dec_obj92;
int stack_num_before_580;
int sline_581;
void* __right_value410 = (void*)0;
char* sname_582;
void* __right_value411 = (void*)0;
char* __dec_obj93;
_Bool Value_583;
void* __right_value412 = (void*)0;
struct CVALUE* come_value_584;
void* __right_value418 = (void*)0;
struct CVALUE* come_value2_585;
void* __right_value419 = (void*)0;
char* __dec_obj98;
void* __right_value420 = (void*)0;
struct CVALUE* come_value2_587;
struct sVar* var__588;
void* __right_value421 = (void*)0;
struct CVALUE* come_value3_589;
void* __right_value422 = (void*)0;
void* __right_value423 = (void*)0;
struct tuple2$2bool$char$ph* multiple_assign_var8 = (void*)0;
_Bool come_exception_var_1_606=0;
char* Err_607=0;
_Bool _if_conditional2;
int __result_obj__336;
void* __right_value424 = (void*)0;
struct sType* __dec_obj99;
void* __right_value425 = (void*)0;
char* c_value_608;
void* __right_value426 = (void*)0;
char* __dec_obj100;
void* __right_value427 = (void*)0;
char* __dec_obj101;
void* __right_value428 = (void*)0;
char* __dec_obj102;
_Bool Value_609;
void* __right_value429 = (void*)0;
char* __dec_obj103;
struct list$1sRightValueObject$ph* __dec_obj104;
void* __if_result__0_612 = (void*)0;
struct list$1sVar$ph* o2_saved_613;
struct sVar* it_616;
void* __right_value430 = (void*)0;
struct list$1sVar$ph* __dec_obj105;
memset(&i_560, 0, sizeof(int));
memset(&i_568, 0, sizeof(int));
    if(    info->output_header_file) {
        return 0;
    }
    inhibits_output_code_513=info->inhibits_output_code;
    info->inhibits_output_code=(_Bool)0;
    old_table_514=info->lv_table;
    if(    !no_var_table) {
        __dec_obj89=block->mVarTable;
        block->mVarTable=(struct sVarTable*)come_increment_ref_count(sVarTable_initialize((struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "05function.c", 443, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals)),(_Bool)0,old_table_514));
        come_call_finalizer3(__dec_obj89,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->lv_table=block->mVarTable;
    }
    current_loop_vtable_559=info->current_loop_vtable;
    if(    loop_block) {
        info->current_loop_vtable=block->mVarTable;
    }
    if(    param_types&&param_names) {
        for(        o2_saved_561=(param_names),name_562=list$1char$ph$p_begin((o2_saved_561));        !list$1char$ph$p_end((o2_saved_561));        name_562=list$1char$ph$p_next((o2_saved_561))        ){
            type_563=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types,i_560));
            type_563->mAllocaValue=(_Bool)0;
            add_variable_to_table(name_562,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type_563)),info,(_Bool)1);
            i_560++;
            come_call_finalizer3(type_563,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
    }
    block_level_567=info->block_level;
    if(    !no_var_table) {
        info->block_level++;
    }
    if(    list$1sNode$ph$p_length(block->mNodes)==0) {
    }
    else {
        for(        o2_saved_569=(struct list$1sNode$ph*)come_increment_ref_count((block->mNodes)),node_572=list$1sNode$ph$p_begin((o2_saved_569));        !list$1sNode$ph$p_end((o2_saved_569));        node_572=list$1sNode$ph$p_next((o2_saved_569))        ){
            right_value_objects_575=(struct list$1sRightValueObject$ph*)come_increment_ref_count(info->right_value_objects);
            __dec_obj90=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(list$1sRightValueObject$ph$p_initialize((struct list$1sRightValueObject$ph*)come_increment_ref_count((struct list$1sRightValueObject$ph*)come_calloc(1, sizeof(struct list$1sRightValueObject$ph)*(1), "05function.c", 481, "struct list$1sRightValueObject$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            come_call_finalizer3(__dec_obj90,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            __dec_obj91=info->module->mLastCode;
            info->module->mLastCode=((void*)0);
            __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
            __dec_obj92=info->module->mLastCode2;
            info->module->mLastCode2=((void*)0);
            __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
            stack_num_before_580=list$1CVALUE$ph$p_length(info->stack);
            sline_581=info->sline;
            sname_582=(char*)come_increment_ref_count(__builtin_string(info->sname));
            info->last_statment_is_return=(_Bool)0;
            info->sline=node_572->sline(node_572->_protocol_obj);
            __dec_obj93=info->sname;
            info->sname=(char*)come_increment_ref_count(node_572->sname(node_572->_protocol_obj));
            __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            i_568==list$1sNode$ph$p_length(block->mNodes)-1&&if_result&&block->mOmitSemicolon) {
                Value_583=node_compile(node_572,info);
                if(                !Value_583) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                if(                list$1CVALUE$ph$p_length(info->stack)==stack_num_before_580+1) {
                    come_value_584=(struct CVALUE*)come_increment_ref_count(get_value_from_stack(-1,info));
                    dec_stack_ptr(1,info);
                    if(                    string_operator_equals(come_value_584->type->mClass->mName,"void")&&come_value_584->type->mPointerNum==0) {
                        come_value2_585=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_584));
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_585));
                        __dec_obj98=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_585->c_value));
                        __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_585,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    else {
                        come_value2_587=(struct CVALUE*)come_increment_ref_count(come_call_cloner(CVALUE_clone, come_value_584));
                        var__588=get_variable_from_table(info->lv_table,info->if_result_var_name);
                        if(                        var__588) {
                            come_value3_589=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "05function.c", 517, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
                            if(                            var__588->mType->mClass=="void"&&var__588->mType->mPointerNum==1) {
                                multiple_assign_var8=((struct tuple2$2bool$char$ph*)(__right_value423=check_assign_type("invalid if result value",var__588->mType,((struct sType*)(__right_value422=come_call_cloner(sType_clone, come_value_584->type))),come_value3_589,info,(_Bool)1,(_Bool)1,info)));
                                come_exception_var_1_606=multiple_assign_var8->v1;
                                Err_607=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                if(                                (_if_conditional2=(Err_607)),                                come_call_finalizer3(__right_value422,sType_finalize, 0, 1, 0, 0, (void*)0),
                                come_call_finalizer3(__right_value423,tuple2$2bool$char$ph$p_finalize, 0, 1, 0, 0, (void*)0),
                                _if_conditional2) {
                                    __result_obj__336 = (_Bool)1;
                                    (Err_607 = come_decrement_ref_count2(Err_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(come_value3_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value2_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(come_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                                    come_call_finalizer3(right_value_objects_575,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    (sname_582 = come_decrement_ref_count2(sname_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                                    come_call_finalizer3(o2_saved_569,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                                    return __result_obj__336;
                                }
                                else {
                                }
                                (Err_607 = come_decrement_ref_count2(Err_607, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            __dec_obj99=var__588->mType;
                            var__588->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, come_value_584->type));
                            come_call_finalizer3(__dec_obj99,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                            if(                            come_value_584->type->mHeap) {
                                c_value_608=(char*)come_increment_ref_count(increment_ref_count_object(come_value_584->type,come_value_584->c_value,info));
                                __dec_obj100=come_value2_587->c_value;
                                come_value2_587->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__588->mCValueName,c_value_608));
                                __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
                                (c_value_608 = come_decrement_ref_count2(c_value_608, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            }
                            else {
                                __dec_obj101=come_value2_587->c_value;
                                come_value2_587->c_value=(char*)come_increment_ref_count(xsprintf("%s=(void*)(%s)",var__588->mCValueName,come_value_584->c_value));
                                __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
                            }
                            come_call_finalizer3(come_value3_589,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                        }
                        list$1CVALUE$ph$p_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_587));
                        __dec_obj102=info->module->mLastCode;
                        info->module->mLastCode=(char*)come_increment_ref_count(xsprintf("%s;\n",come_value2_587->c_value));
                        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                        come_call_finalizer3(come_value2_587,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                    }
                    come_call_finalizer3(come_value_584,CVALUE_finalize, 0, 0, 0, 0, (void*)0);
                }
            }
            else {
                Value_609=node_compile(node_572,info);
                if(                !Value_609) {
                    printf("%s %d: compiling is failed(5)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
            }
            info->sline=sline_581;
            __dec_obj103=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(sname_582));
            __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
            if(            comma) {
                add_last_code_to_source_with_comma(info);
            }
            else {
                add_last_code_to_source(info);
            }
            arrange_stack(info,stack_num_before_580);
            free_right_value_objects(info,(_Bool)0);
            if(            info->right_value_objects) {
                list$1sRightValueObject$ph$p_reset(info->right_value_objects);
            }
            __dec_obj104=info->right_value_objects;
            info->right_value_objects=(struct list$1sRightValueObject$ph*)come_increment_ref_count(right_value_objects_575);
            come_call_finalizer3(__dec_obj104,list$1sRightValueObject$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            i_568++;
            come_call_finalizer3(right_value_objects_575,list$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            (sname_582 = come_decrement_ref_count2(sname_582, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        come_call_finalizer3(o2_saved_569,list$1sNode$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    if(    !no_var_table&&!info->inhibits_output_code) {
        free_objects(info->lv_table,((void*)0),info);
        if(        info->match_it_var&&block_level_567==0) {
            for(            o2_saved_613=(struct list$1sVar$ph*)come_increment_ref_count((info->match_it_var)),it_616=list$1sVar$ph$p_begin((o2_saved_613));            !list$1sVar$ph$p_end((o2_saved_613));            it_616=list$1sVar$ph$p_next((o2_saved_613))            ){
                free_object(((struct sType*)(__right_value430=come_call_cloner(sType_clone, it_616->mType))),it_616->mCValueName,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
                come_call_finalizer3(__right_value430,sType_finalize, 0, 1, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_613,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            __dec_obj105=info->match_it_var;
            __if_result__0_612=(void*)((struct list$1sVar$ph*)come_increment_ref_count(info->match_it_var=((void*)0)));
;
            come_call_finalizer3(__dec_obj105,list$1sVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        }
        come_call_finalizer3(__if_result__0_612,list$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->lv_table=old_table_514;
    info->block_level=block_level_567;
    if(    string_operator_equals(info->come_fun->mName,"main")) {
        info->inhibits_output_code2=info->inhibits_output_code;
    }
    info->current_loop_vtable=current_loop_vtable_559;
    info->inhibits_output_code=inhibits_output_code_513;
    return 0;
}

static struct sVarTable* sVarTable_clone(struct sVarTable* self){
struct sVarTable* __result_obj__305;
void* __right_value376 = (void*)0;
struct sVarTable* result_528;
void* __right_value403 = (void*)0;
struct map$2char$phsVar$ph* __dec_obj88;
struct sVarTable* __result_obj__324;
    if(    self==(void*)0) {
        __result_obj__305 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__305,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__305;
    }
    result_528=(struct sVarTable*)come_increment_ref_count((struct sVarTable*)come_calloc(1, sizeof(struct sVarTable)*(1), "sVarTable_clone", 3, "struct sVarTable", sVarTable_finalize, sVarTable_clone, sVarTable_get_hash_key, sVarTable_equals));
    if(    self!=((void*)0)&&self->mVars!=((void*)0)) {
        __dec_obj88=result_528->mVars;
        result_528->mVars=(struct map$2char$phsVar$ph*)come_increment_ref_count(come_call_cloner(map$2char$phsVar$ph$p_clone, self->mVars));
        come_call_finalizer3(__dec_obj88,map$2char$phsVar$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_528->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_528->mParent=self->mParent;
    }
    __result_obj__324 = come_increment_ref_count(result_528);
    come_call_finalizer3(result_528,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__324,sVarTable_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__324;
}

static unsigned int sVarTable_get_hash_key(struct sVarTable* self){
unsigned int result_515;
    result_515=0;
    result_515+=int_get_hash_key(((int)self->mVars));
    result_515+=int_get_hash_key(((int)self->mGlobal));
    result_515+=int_get_hash_key(((int)self->mParent));
    return result_515;
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
int n_516;
_Bool result_517;
char* it_518;
char* default_value_519;
char* it2_520;
struct sVar* default_value2_523;
void* __right_value374 = (void*)0;
struct sVar* item_524;
void* __right_value375 = (void*)0;
struct sVar* item2_527;
default_value_519 = (void*)0;
default_value2_523 = (void*)0;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    n_516=0;
    result_517=(_Bool)1;
    for(    it_518=list$1char$p$p_begin(left->key_list);    !list$1char$p$p_end(left->key_list);    it_518=list$1char$p$p_next(left->key_list)    ){
        memset(&default_value_519,0,sizeof(char*));
        it2_520=list$1char$p$p_item(right->key_list,n_516,default_value_519);
        if(        string_equals(it_518,it2_520)) {
            memset(&default_value2_523,0,sizeof(struct sVar*));
            item_524=((struct sVar*)(__right_value374=map$2char$phsVar$ph$p_at(left,it_518,(struct sVar*)come_increment_ref_count(default_value2_523))));
            come_call_finalizer3(__right_value374,sVar_finalize, 0, 1, 0, 0, (void*)0);
            item2_527=((struct sVar*)(__right_value375=map$2char$phsVar$ph$p_at(right,it2_520,(struct sVar*)come_increment_ref_count(default_value2_523))));
            come_call_finalizer3(__right_value375,sVar_finalize, 0, 1, 0, 0, (void*)0);
            if(            !sVar_equals(item_524,item2_527)) {
                result_517=(_Bool)0;
            }
            come_call_finalizer3(default_value2_523,sVar_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            result_517=(_Bool)0;
        }
        n_516++;
        (default_value_519 = come_decrement_ref_count2(default_value_519, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    return result_517;
}

static char* list$1char$p$p_item(struct list$1char$p* self, int position, char* default_value){
struct list_item$1char$p* it_521;
int i_522;
char* __result_obj__306;
char* __result_obj__307;
    if(    position<0) {
        position+=self->len;
    }
    it_521=self->head;
    i_522=0;
    while(it_521!=((void*)0)) {
        if(        position==i_522) {
            __result_obj__306 = it_521->item;
            return __result_obj__306;
        }
        it_521=it_521->next;
        i_522++;
    }
    __result_obj__307 = default_value;
    return __result_obj__307;
}

static struct sVar* map$2char$phsVar$ph$p_at(struct map$2char$phsVar$ph* self, char* key, struct sVar* default_value){
unsigned int hash_525;
unsigned int it_526;
struct sVar* __result_obj__308;
struct sVar* __result_obj__309;
struct sVar* __result_obj__310;
struct sVar* __result_obj__311;
    hash_525=string_get_hash_key(((char*)key))%self->size;
    it_526=hash_525;
    while((_Bool)1) {
        if(        self->item_existance[it_526]) {
            if(            string_equals(self->keys[it_526],key)) {
                __result_obj__308 = come_increment_ref_count(self->items[it_526]);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__308,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__308;
            }
            it_526++;
            if(            it_526>=self->size) {
                it_526=0;
            }
            else if(            it_526==hash_525) {
                __result_obj__309 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__309,sVar_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__309;
            }
        }
        else {
            __result_obj__310 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__310,sVar_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__310;
        }
    }
    __result_obj__311 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__311,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__311;
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

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_clone(struct map$2char$phsVar$ph* self){
struct map$2char$phsVar$ph* __result_obj__312;
void* __right_value377 = (void*)0;
void* __right_value383 = (void*)0;
struct map$2char$phsVar$ph* result_532;
void* __right_value384 = (void*)0;
void* __right_value385 = (void*)0;
struct list$1char$p* __dec_obj83;
char* it_535;
struct sVar* default_value_538;
void* __right_value386 = (void*)0;
struct sVar* it2_539;
void* __right_value392 = (void*)0;
void* __right_value398 = (void*)0;
void* __right_value399 = (void*)0;
void* __right_value400 = (void*)0;
void* __right_value401 = (void*)0;
void* __right_value402 = (void*)0;
struct map$2char$phsVar$ph* __result_obj__323;
default_value_538 = (void*)0;
    if(    self==((void*)0)) {
        __result_obj__312 = come_increment_ref_count(((void*)0));
        come_call_finalizer3(__result_obj__312,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__312;
    }
    result_532=(struct map$2char$phsVar$ph*)come_increment_ref_count(map$2char$phsVar$ph$p_initialize((struct map$2char$phsVar$ph*)come_increment_ref_count((struct map$2char$phsVar$ph*)come_calloc(1, sizeof(struct map$2char$phsVar$ph)*(1), "./comelang.h", 2770, "struct map$2char$phsVar$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    __dec_obj83=result_532->key_list;
    result_532->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2772, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj83,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    it_535=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_535=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_538,0,sizeof(struct sVar*));
        it2_539=(struct sVar*)come_increment_ref_count(map$2char$phsVar$ph$p_at(self,it_535,(struct sVar*)come_increment_ref_count(default_value_538)));
        if(        1&&1) {
            map$2char$phsVar$ph$p_put(result_532,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_535)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_539)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_532,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_535)),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_539)));
        }
        else if(        1) {
            map$2char$phsVar$ph$p_put(result_532,(char*)come_increment_ref_count(it_535),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_539)));
        }
        else {
            map$2char$phsVar$ph$p_put(result_532,(char*)come_increment_ref_count(it_535),(struct sVar*)come_increment_ref_count(come_call_cloner(sVar_clone, it2_539)));
        }
        come_call_finalizer3(default_value_538,sVar_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(it2_539,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    __result_obj__323 = come_increment_ref_count(result_532);
    come_call_finalizer3(result_532,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__323,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__323;
}

static void map$2char$phsVar$ph$p_finalize(struct map$2char$phsVar$ph* self){
int i_529;
int i_530;
    for(    i_529=0;    i_529<self->size;    i_529++    ){
        if(        self->item_existance[i_529]) {
            if(            1) {
                come_call_finalizer3(self->items[i_529],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_530=0;    i_530<self->size;    i_530++    ){
        if(        self->item_existance[i_530]) {
            if(            1) {
                (self->keys[i_530] = come_decrement_ref_count2(self->keys[i_530], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_initialize(struct map$2char$phsVar$ph* self){
void* __right_value378 = (void*)0;
void* __right_value379 = (void*)0;
void* __right_value380 = (void*)0;
int i_531;
void* __right_value381 = (void*)0;
void* __right_value382 = (void*)0;
struct list$1char$p* __dec_obj82;
struct map$2char$phsVar$ph* __result_obj__313;
    self->keys=(char**)come_increment_ref_count(((char**)(__right_value378=(char**)come_calloc(1, sizeof(char*)*(1*(128)), "./comelang.h", 2699, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->items=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value379=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(128)), "./comelang.h", 2700, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    self->item_existance=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value380=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(128)), "./comelang.h", 2701, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    i_531=0;    i_531<128;    i_531++    ){
        self->item_existance[i_531]=(_Bool)0;
    }
    self->size=128;
    self->len=0;
    __dec_obj82=self->key_list;
    self->key_list=(struct list$1char$p*)come_increment_ref_count(list$1char$p$p_initialize((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc(1, sizeof(struct list$1char$p)*(1), "./comelang.h", 2711, "struct list$1char$p*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj82,list$1char$p_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    self->it=0;
    __result_obj__313 = come_increment_ref_count(self);
    come_call_finalizer3(self,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__313,map$2char$phsVar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__313;
}

static char* map$2char$phsVar$ph$p_begin(struct map$2char$phsVar$ph* self){
char* result_533;
char* __result_obj__314;
char* __result_obj__315;
char* result_534;
char* __result_obj__316;
result_533 = (void*)0;
result_534 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_533,0,sizeof(char*));
        __result_obj__314 = result_533;
        return __result_obj__314;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__315 = self->key_list->it->item;
        return __result_obj__315;
    }
    memset(&result_534,0,sizeof(char*));
    __result_obj__316 = result_534;
    return __result_obj__316;
}

static _Bool map$2char$phsVar$ph$p_end(struct map$2char$phsVar$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsVar$ph$p_next(struct map$2char$phsVar$ph* self){
char* result_536;
char* __result_obj__317;
char* __result_obj__318;
char* result_537;
char* __result_obj__319;
result_536 = (void*)0;
result_537 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_536,0,sizeof(char*));
        __result_obj__317 = result_536;
        return __result_obj__317;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__318 = self->key_list->it->item;
        return __result_obj__318;
    }
    memset(&result_537,0,sizeof(char*));
    __result_obj__319 = result_537;
    return __result_obj__319;
}

static struct map$2char$phsVar$ph* map$2char$phsVar$ph$p_put(struct map$2char$phsVar$ph* self, char* key, struct sVar* item){
unsigned int hash_551;
int it_552;
_Bool same_key_exist_553;
char* it2_554;
struct map$2char$phsVar$ph* __result_obj__320;
    if(    self->len*2>=self->size) {
        map$2char$phsVar$ph$p_rehash(self);
    }
    hash_551=string_get_hash_key(((char*)key))%self->size;
    it_552=hash_551;
    while((_Bool)1) {
        if(        self->item_existance[it_552]) {
            if(            string_equals(self->keys[it_552],key)) {
                if(                1) {
                    (self->keys[it_552] = come_decrement_ref_count2(self->keys[it_552], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    list$1char$p$p_remove(self->key_list,self->keys[it_552]);
                    self->keys[it_552]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_552]);
                    self->keys[it_552]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_552],sVar_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_552]=(struct sVar*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_552]=item;
                }
                break;
            }
            it_552++;
            if(            it_552>=self->size) {
                it_552=0;
            }
            else if(            it_552==hash_551) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_552]=(_Bool)1;
            if(            1) {
                self->keys[it_552]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_552]=key;
            }
            if(            1) {
                self->items[it_552]=(struct sVar*)come_increment_ref_count(item);
            }
            else {
                self->items[it_552]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_553=(_Bool)0;
    for(    it2_554=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_554=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_554,key)) {
            same_key_exist_553=(_Bool)1;
        }
    }
    if(    !same_key_exist_553) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__320 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__320;
}

static void map$2char$phsVar$ph$p_rehash(struct map$2char$phsVar$ph* self){
int size_540;
void* __right_value387 = (void*)0;
char** keys_541;
void* __right_value388 = (void*)0;
struct sVar** items_542;
void* __right_value389 = (void*)0;
_Bool* item_existance_543;
int len_544;
char* it_545;
struct sVar* default_value_546;
void* __right_value390 = (void*)0;
struct sVar* it2_547;
unsigned int hash_548;
int n_549;
struct sVar* default_value_550;
void* __right_value391 = (void*)0;
default_value_546 = (void*)0;
default_value_550 = (void*)0;
    size_540=self->size*10;
    keys_541=(char**)come_increment_ref_count(((char**)(__right_value387=(char**)come_calloc(1, sizeof(char*)*(1*(size_540)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_542=(struct sVar**)come_increment_ref_count(((struct sVar**)(__right_value388=(struct sVar**)come_calloc(1, sizeof(struct sVar*)*(1*(size_540)), "./comelang.h", 2939, "struct sVar**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_543=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value389=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_540)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_544=0;
    for(    it_545=map$2char$phsVar$ph$p_begin(self);    !map$2char$phsVar$ph$p_end(self);    it_545=map$2char$phsVar$ph$p_next(self)    ){
        memset(&default_value_546,0,sizeof(struct sVar*));
        it2_547=((struct sVar*)(__right_value390=map$2char$phsVar$ph$p_at(self,it_545,(struct sVar*)come_increment_ref_count(default_value_546))));
        come_call_finalizer3(__right_value390,sVar_finalize, 0, 1, 0, 0, (void*)0);
        hash_548=string_get_hash_key(((char*)it_545))%size_540;
        n_549=hash_548;
        while((_Bool)1) {
            if(            item_existance_543[n_549]) {
                n_549++;
                if(                n_549>=size_540) {
                    n_549=0;
                }
                else if(                n_549==hash_548) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_543[n_549]=(_Bool)1;
                keys_541[n_549]=it_545;
                items_542[n_549]=((struct sVar*)(__right_value391=map$2char$phsVar$ph$p_at(self,it_545,(struct sVar*)come_increment_ref_count(default_value_550))));
                come_call_finalizer3(__right_value391,sVar_finalize, 0, 1, 0, 0, (void*)0);
                len_544++;
                come_call_finalizer3(default_value_550,sVar_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_550,sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_546,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_541;
    self->items=items_542;
    self->item_existance=item_existance_543;
    self->size=size_540;
    self->len=len_544;
}

static struct sVar* sVar_clone(struct sVar* self){
struct sVar* __result_obj__321;
void* __right_value393 = (void*)0;
struct sVar* result_556;
void* __right_value394 = (void*)0;
char* __dec_obj84;
void* __right_value395 = (void*)0;
char* __dec_obj85;
void* __right_value396 = (void*)0;
struct sType* __dec_obj86;
void* __right_value397 = (void*)0;
char* __dec_obj87;
struct sVar* __result_obj__322;
    if(    self==(void*)0) {
        __result_obj__321 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__321,sVar_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__321;
    }
    result_556=(struct sVar*)come_increment_ref_count((struct sVar*)come_calloc(1, sizeof(struct sVar)*(1), "sVar_clone", 3, "struct sVar", sVar_finalize, sVar_clone, sVar_get_hash_key, sVar_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj84=result_556->mName;
        result_556->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mCValueName!=((void*)0)) {
        __dec_obj85=result_556->mCValueName;
        result_556->mCValueName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mCValueName));
        __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mType!=((void*)0)) {
        __dec_obj86=result_556->mType;
        result_556->mType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mType));
        come_call_finalizer3(__dec_obj86,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_556->mGlobal=self->mGlobal;
    }
    if(    self!=((void*)0)) {
        result_556->mAllocaValue=self->mAllocaValue;
    }
    if(    self!=((void*)0)) {
        result_556->mNoFree=self->mNoFree;
    }
    if(    self!=((void*)0)&&self->mFunName!=((void*)0)) {
        __dec_obj87=result_556->mFunName;
        result_556->mFunName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunName));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__322 = come_increment_ref_count(result_556);
    come_call_finalizer3(result_556,sVar_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__322,sVar_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__322;
}

static unsigned int sVar_get_hash_key(struct sVar* self){
unsigned int result_555;
    result_555=0;
    result_555+=int_get_hash_key(((int)self->mName));
    result_555+=int_get_hash_key(((int)self->mCValueName));
    result_555+=int_get_hash_key(((int)self->mType));
    result_555+=int_get_hash_key(((int)self->mGlobal));
    result_555+=int_get_hash_key(((int)self->mAllocaValue));
    result_555+=int_get_hash_key(((int)self->mNoFree));
    result_555+=int_get_hash_key(((int)self->mFunName));
    return result_555;
}

static void map$2char$phsVar$ph_finalize(struct map$2char$phsVar$ph* self){
int i_557;
int i_558;
    for(    i_557=0;    i_557<self->size;    i_557++    ){
        if(        self->item_existance[i_557]) {
            if(            1) {
                come_call_finalizer3(self->items[i_557],sVar_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
    }
    come_free((char*)self->items);
    for(    i_558=0;    i_558<self->size;    i_558++    ){
        if(        self->item_existance[i_558]) {
            if(            1) {
                (self->keys[i_558] = come_decrement_ref_count2(self->keys[i_558], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
    }
    come_free((char*)self->keys);
    come_call_finalizer3(self->key_list,list$1char$p$p_finalize, 0, 0, 0, 0, (void*)0);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
}

static struct sType* list$1sType$ph$p_operator_load_element(struct list$1sType$ph* self, int position){
struct list_item$1sType$ph* it_564;
int i_565;
struct sType* __result_obj__325;
struct sType* default_value_566;
struct sType* __result_obj__326;
default_value_566 = (void*)0;
    if(    position<0) {
        position+=self->len;
    }
    it_564=self->head;
    i_565=0;
    while(it_564!=((void*)0)) {
        if(        position==i_565) {
            __result_obj__325 = come_increment_ref_count(it_564->item);
            come_call_finalizer3(__result_obj__325,sType_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__325;
        }
        it_564=it_564->next;
        i_565++;
    }
    memset(&default_value_566,0,sizeof(struct sType*));
    __result_obj__326 = come_increment_ref_count(default_value_566);
    come_call_finalizer3(default_value_566,sType_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__326,sType_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__326;
}

static int list$1sNode$ph$p_length(struct list$1sNode$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct sNode* list$1sNode$ph$p_begin(struct list$1sNode$ph* self){
struct sNode* result_570;
struct sNode* __result_obj__327;
struct sNode* __result_obj__328;
struct sNode* result_571;
struct sNode* __result_obj__329;
result_570 = (void*)0;
result_571 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_570,0,sizeof(struct sNode*));
        __result_obj__327 = result_570;
        return __result_obj__327;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__328 = self->it->item;
        return __result_obj__328;
    }
    memset(&result_571,0,sizeof(struct sNode*));
    __result_obj__329 = result_571;
    return __result_obj__329;
}

static _Bool list$1sNode$ph$p_end(struct list$1sNode$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sNode* list$1sNode$ph$p_next(struct list$1sNode$ph* self){
struct sNode* result_573;
struct sNode* __result_obj__330;
struct sNode* __result_obj__331;
struct sNode* result_574;
struct sNode* __result_obj__332;
result_573 = (void*)0;
result_574 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_573,0,sizeof(struct sNode*));
        __result_obj__330 = result_573;
        return __result_obj__330;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__331 = self->it->item;
        return __result_obj__331;
    }
    memset(&result_574,0,sizeof(struct sNode*));
    __result_obj__332 = result_574;
    return __result_obj__332;
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_initialize(struct list$1sRightValueObject$ph* self){
struct list$1sRightValueObject$ph* __result_obj__333;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__333 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__333,list$1sRightValueObject$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__333;
}

static void list$1sRightValueObject$ph$p_finalize(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_576;
struct list_item$1sRightValueObject$ph* prev_it_577;
    it_576=self->head;
    while(it_576!=((void*)0)) {
        prev_it_577=it_576;
        it_576=it_576->next;
        come_call_finalizer3(prev_it_577,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct list_item$1sRightValueObject$ph* it_578;
struct list_item$1sRightValueObject$ph* prev_it_579;
    it_578=self->head;
    while(it_578!=((void*)0)) {
        prev_it_579=it_578;
        it_578=it_578->next;
        come_call_finalizer3(prev_it_579,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static int list$1CVALUE$ph$p_length(struct list$1CVALUE$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
struct CVALUE* __result_obj__334;
void* __right_value413 = (void*)0;
struct CVALUE* result_586;
void* __right_value414 = (void*)0;
char* __dec_obj94;
void* __right_value415 = (void*)0;
struct sType* __dec_obj95;
void* __right_value416 = (void*)0;
char* __dec_obj96;
void* __right_value417 = (void*)0;
char* __dec_obj97;
struct CVALUE* __result_obj__335;
    if(    self==(void*)0) {
        __result_obj__334 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__334,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__334;
    }
    result_586=(struct CVALUE*)come_increment_ref_count((struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->c_value!=((void*)0)) {
        __dec_obj94=result_586->c_value;
        result_586->c_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value));
        __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->type!=((void*)0)) {
        __dec_obj95=result_586->type;
        result_586->type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->type));
        come_call_finalizer3(__dec_obj95,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_586->var=self->var;
    }
    if(    self!=((void*)0)) {
        result_586->right_value_objects=self->right_value_objects;
    }
    if(    self!=((void*)0)&&self->c_value_without_right_value_objects!=((void*)0)) {
        __dec_obj96=result_586->c_value_without_right_value_objects;
        result_586->c_value_without_right_value_objects=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_right_value_objects));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->c_value_without_cast_object_value!=((void*)0)) {
        __dec_obj97=result_586->c_value_without_cast_object_value;
        result_586->c_value_without_cast_object_value=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->c_value_without_cast_object_value));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__335 = come_increment_ref_count(result_586);
    come_call_finalizer3(result_586,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__335,CVALUE_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__335;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_590;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_591;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_590=left->head;
    it2_591=right->head;
    while(it_590!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_590->item,it2_591->item))) {
            return (_Bool)0;
        }
        it_590=it_590->next;
        it2_591=it2_591->next;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_592;
struct list_item$1tuple2$2char$phsType$ph$ph* it2_593;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_592=left->head;
    it2_593=right->head;
    while(it_592!=((void*)0)) {
        if(        !(tuple2$2char$phsType$ph_operator_equals(it_592->item,it2_593->item))) {
            return (_Bool)0;
        }
        it_592=it_592->next;
        it2_593=it2_593->next;
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
struct list_item$1sType$ph* it_594;
struct list_item$1sType$ph* it2_595;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_594=left->head;
    it2_595=right->head;
    while(it_594!=((void*)0)) {
        if(        !(sType_operator_equals(it_594->item,it2_595->item))) {
            return (_Bool)0;
        }
        it_594=it_594->next;
        it2_595=it2_595->next;
    }
    return (_Bool)1;
}

static _Bool sNode_operator_equals(struct sNode* left, struct sNode* right){
    return voidp_operator_equals(left->_protocol_obj,right->_protocol_obj);
    return (_Bool)1;
}

static _Bool list$1sNode$ph_operator_equals(struct list$1sNode$ph* left, struct list$1sNode$ph* right){
struct list_item$1sNode$ph* it_596;
struct list_item$1sNode$ph* it2_597;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_596=left->head;
    it2_597=right->head;
    while(it_596!=((void*)0)) {
        if(        !(sNode_operator_equals(it_596->item,it2_597->item))) {
            return (_Bool)0;
        }
        it_596=it_596->next;
        it2_597=it2_597->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_598;
struct list_item$1char$ph* it2_599;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_598=left->head;
    it2_599=right->head;
    while(it_598!=((void*)0)) {
        if(        !(string_operator_equals(it_598->item,it2_599->item))) {
            return (_Bool)0;
        }
        it_598=it_598->next;
        it2_599=it2_599->next;
    }
    return (_Bool)1;
}

static _Bool list$1sType$ph_operator_not_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
    return !list$1sType$ph$p_operator_equals(left,right);
}

static _Bool list$1sType$ph$p_operator_equals(struct list$1sType$ph* left, struct list$1sType$ph* right){
struct list_item$1sType$ph* it_600;
struct list_item$1sType$ph* it2_601;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_600=left->head;
    it2_601=right->head;
    while(it_600!=((void*)0)) {
        if(        !(sType_operator_equals(it_600->item,it2_601->item))) {
            return (_Bool)0;
        }
        it_600=it_600->next;
        it2_601=it2_601->next;
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
struct list_item$1sNode$ph* it_602;
struct list_item$1sNode$ph* it2_603;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_602=left->head;
    it2_603=right->head;
    while(it_602!=((void*)0)) {
        if(        !(sNode_operator_equals(it_602->item,it2_603->item))) {
            return (_Bool)0;
        }
        it_602=it_602->next;
        it2_603=it2_603->next;
    }
    return (_Bool)1;
}

static _Bool list$1char$ph_operator_not_equals(struct list$1char$ph* left, struct list$1char$ph* right){
    return !list$1char$ph$p_operator_equals(left,right);
}

static _Bool list$1char$ph$p_operator_equals(struct list$1char$ph* left, struct list$1char$ph* right){
struct list_item$1char$ph* it_604;
struct list_item$1char$ph* it2_605;
    if(    left->len!=right->len) {
        return (_Bool)0;
    }
    it_604=left->head;
    it2_605=right->head;
    while(it_604!=((void*)0)) {
        if(        !(string_operator_equals(it_604->item,it2_605->item))) {
            return (_Bool)0;
        }
        it_604=it_604->next;
        it2_605=it2_605->next;
    }
    return (_Bool)1;
}

static void tuple2$2bool$char$ph$p_finalize(struct tuple2$2bool$char$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct list$1sRightValueObject$ph* list$1sRightValueObject$ph$p_reset(struct list$1sRightValueObject$ph* self){
struct list_item$1sRightValueObject$ph* it_610;
struct list_item$1sRightValueObject$ph* prev_it_611;
struct list$1sRightValueObject$ph* __result_obj__337;
    it_610=self->head;
    while(it_610!=((void*)0)) {
        prev_it_611=it_610;
        it_610=it_610->next;
        come_call_finalizer3(prev_it_611,list_item$1sRightValueObject$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__337 = self;
    return __result_obj__337;
}

static struct sVar* list$1sVar$ph$p_begin(struct list$1sVar$ph* self){
struct sVar* result_614;
struct sVar* __result_obj__338;
struct sVar* __result_obj__339;
struct sVar* result_615;
struct sVar* __result_obj__340;
result_614 = (void*)0;
result_615 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_614,0,sizeof(struct sVar*));
        __result_obj__338 = result_614;
        return __result_obj__338;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__339 = self->it->item;
        return __result_obj__339;
    }
    memset(&result_615,0,sizeof(struct sVar*));
    __result_obj__340 = result_615;
    return __result_obj__340;
}

static _Bool list$1sVar$ph$p_end(struct list$1sVar$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sVar* list$1sVar$ph$p_next(struct list$1sVar$ph* self){
struct sVar* result_617;
struct sVar* __result_obj__341;
struct sVar* __result_obj__342;
struct sVar* result_618;
struct sVar* __result_obj__343;
result_617 = (void*)0;
result_618 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_617,0,sizeof(struct sVar*));
        __result_obj__341 = result_617;
        return __result_obj__341;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__342 = self->it->item;
        return __result_obj__342;
    }
    memset(&result_618,0,sizeof(struct sVar*));
    __result_obj__343 = result_618;
    return __result_obj__343;
}

static void list$1sVar$ph$p_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_619;
struct list_item$1sVar$ph* prev_it_620;
    it_619=self->head;
    while(it_619!=((void*)0)) {
        prev_it_620=it_619;
        it_619=it_619->next;
        come_call_finalizer3(prev_it_620,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list_item$1sVar$ph$p_finalize(struct list_item$1sVar$ph* self){
    if(    self!=((void*)0)&&self->item!=((void*)0)) {
        come_call_finalizer3(self->item,sVar_finalize, 0, 0, 0, 0, (void*)0);
    }
}

static void list$1sVar$ph_finalize(struct list$1sVar$ph* self){
struct list_item$1sVar$ph* it_621;
struct list_item$1sVar$ph* prev_it_622;
    it_621=self->head;
    while(it_621!=((void*)0)) {
        prev_it_622=it_621;
        it_621=it_621->next;
        come_call_finalizer3(prev_it_622,list_item$1sVar$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
void* __right_value431 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var9 = (void*)0;
int come_exception_var_c8_623=0;
char* Err_624=0;
    parse_sharp_v5(info);
    if(    *info->p!=c) {
        if(        !info->no_output_err) {
            multiple_assign_var9=((struct tuple2$2int$char$ph*)(__right_value431=err_msg(info,"expected next charaster is %c, but %c, caller %s %d\n",c,*info->p,info->caller_sname,info->caller_line)));
            come_exception_var_c8_623=multiple_assign_var9->v1;
            Err_624=(char*)come_increment_ref_count(multiple_assign_var9->v2);
            ((Err_624)?(puts(Err_624),exit(0)):(0));
            come_call_finalizer3(__right_value431,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            exit(1);
            (Err_624 = come_decrement_ref_count2(Err_624, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    info->p++;
    skip_spaces_and_lf(info);
    return 0;
}

char* skip_block(struct sInfo* info){
char* head_625;
_Bool dquort_626;
_Bool squort_627;
int sline_628;
int nest_629;
void* __right_value432 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var10 = (void*)0;
int come_exception_var_c9_630=0;
char* Err_631=0;
void* __right_value433 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var11 = (void*)0;
int come_exception_var_c10_632=0;
char* Err_633=0;
void* __right_value434 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var12 = (void*)0;
int come_exception_var_c11_634=0;
char* Err_635=0;
void* __right_value435 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var13 = (void*)0;
int come_exception_var_c12_636=0;
char* Err_637=0;
void* __right_value436 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var14 = (void*)0;
int come_exception_var_c13_638=0;
char* Err_639=0;
void* __right_value437 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var15 = (void*)0;
int come_exception_var_c14_640=0;
char* Err_641=0;
void* __right_value438 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var16 = (void*)0;
int come_exception_var_c15_642=0;
char* Err_643=0;
void* __right_value439 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var17 = (void*)0;
int come_exception_var_c16_644=0;
char* Err_645=0;
char* tail_646;
void* __right_value440 = (void*)0;
char* buf_647;
void* __right_value441 = (void*)0;
char* __result_obj__344;
    head_625=info->p;
    if(    *info->p==123) {
        info->p++;
        dquort_626=(_Bool)0;
        squort_627=(_Bool)0;
        sline_628=0;
        nest_629=0;
        while(1) {
            if(            dquort_626) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var10=((struct tuple2$2int$char$ph*)(__right_value432=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_628)));
                        come_exception_var_c9_630=multiple_assign_var10->v1;
                        Err_631=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                        ((Err_631)?(puts(Err_631),exit(0)):(0));
                        come_call_finalizer3(__right_value432,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_631 = come_decrement_ref_count2(Err_631, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->p++;
                    }
                    info->p++;
                }
                else if(                *info->p==34) {
                    info->p++;
                    dquort_626=!dquort_626;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var11=((struct tuple2$2int$char$ph*)(__right_value433=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_628)));
                        come_exception_var_c10_632=multiple_assign_var11->v1;
                        Err_633=(char*)come_increment_ref_count(multiple_assign_var11->v2);
                        ((Err_633)?(puts(Err_633),exit(0)):(0));
                        come_call_finalizer3(__right_value433,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_633 = come_decrement_ref_count2(Err_633, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var12=((struct tuple2$2int$char$ph*)(__right_value434=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_628)));
                        come_exception_var_c11_634=multiple_assign_var12->v1;
                        Err_635=(char*)come_increment_ref_count(multiple_assign_var12->v2);
                        ((Err_635)?(puts(Err_635),exit(0)):(0));
                        come_call_finalizer3(__right_value434,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_635 = come_decrement_ref_count2(Err_635, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            squort_627) {
                if(                *info->p==92) {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var13=((struct tuple2$2int$char$ph*)(__right_value435=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_628)));
                        come_exception_var_c12_636=multiple_assign_var13->v1;
                        Err_637=(char*)come_increment_ref_count(multiple_assign_var13->v2);
                        ((Err_637)?(puts(Err_637),exit(0)):(0));
                        come_call_finalizer3(__right_value435,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_637 = come_decrement_ref_count2(Err_637, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==10) {
                        info->sline++;
                    }
                    info->p++;
                }
                else if(                *info->p==39) {
                    info->p++;
                    squort_627=!squort_627;
                }
                else if(                *info->p==10) {
                    info->p++;
                    info->sline++;
                    if(                    *info->p==0) {
                        multiple_assign_var14=((struct tuple2$2int$char$ph*)(__right_value436=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_628)));
                        come_exception_var_c13_638=multiple_assign_var14->v1;
                        Err_639=(char*)come_increment_ref_count(multiple_assign_var14->v2);
                        ((Err_639)?(puts(Err_639),exit(0)):(0));
                        come_call_finalizer3(__right_value436,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_639 = come_decrement_ref_count2(Err_639, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else {
                    info->p++;
                    if(                    *info->p==0) {
                        multiple_assign_var15=((struct tuple2$2int$char$ph*)(__right_value437=err_msg(info,"%s %d: unexpected the source end. close single quote or double quote.",info->sname,sline_628)));
                        come_exception_var_c14_640=multiple_assign_var15->v1;
                        Err_641=(char*)come_increment_ref_count(multiple_assign_var15->v2);
                        ((Err_641)?(puts(Err_641),exit(0)):(0));
                        come_call_finalizer3(__right_value437,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_641 = come_decrement_ref_count2(Err_641, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            else if(            *info->p==39) {
                sline_628=info->sline;
                info->p++;
                squort_627=!squort_627;
            }
            else if(            *info->p==34) {
                sline_628=info->sline;
                info->p++;
                dquort_626=!dquort_626;
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
                nest_629++;
            }
            else if(            *info->p==125) {
                info->p++;
                if(                nest_629==0) {
                    break;
                }
                nest_629--;
            }
            else if(            *info->p==0) {
                multiple_assign_var16=((struct tuple2$2int$char$ph*)(__right_value438=err_msg(info,"The block requires } character for closing block")));
                come_exception_var_c15_642=multiple_assign_var16->v1;
                Err_643=(char*)come_increment_ref_count(multiple_assign_var16->v2);
                ((Err_643)?(puts(Err_643),exit(0)):(0));
                come_call_finalizer3(__right_value438,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_643 = come_decrement_ref_count2(Err_643, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
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
        multiple_assign_var17=((struct tuple2$2int$char$ph*)(__right_value439=err_msg(info,"Require block. This is %c",*info->p)));
        come_exception_var_c16_644=multiple_assign_var17->v1;
        Err_645=(char*)come_increment_ref_count(multiple_assign_var17->v2);
        ((Err_645)?(puts(Err_645),exit(0)):(0));
        come_call_finalizer3(__right_value439,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        (Err_645 = come_decrement_ref_count2(Err_645, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    tail_646=info->p;
    buf_647=(char*)come_increment_ref_count((char*)come_calloc(1, sizeof(char)*(1*(tail_646-head_625+1)), "05function.c", 752, "char*", (void*)0, (void*)0, (void*)0, (void*)0));
    memcpy(buf_647,head_625,tail_646-head_625);
    buf_647[tail_646-head_625]=0;
    skip_spaces_and_lf(info);
    __result_obj__344 = come_increment_ref_count(((char*)(__right_value441=__builtin_string(buf_647))));
    (buf_647 = come_decrement_ref_count2(buf_647, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__right_value441 = come_decrement_ref_count2(__right_value441, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (__result_obj__344 = come_decrement_ref_count2(__result_obj__344, (void*)0, (void*)0, 0/* no_decrement*/, 1/* no_free*/, 0/* force_delete_*/, (void*)0));
    return __result_obj__344;
}

_Bool strmemcmp(char* p, char* p2){
_Bool terminated_648;
char* p3_649;
int i_650;
    terminated_648=(_Bool)0;
    p3_649=p;
    for(    i_650=0;    i_650<strlen(p2);    i_650++    ){
        if(        *p3_649==0) {
            terminated_648=(_Bool)1;
            break;
        }
        p3_649++;
    }
    return !terminated_648&&memcmp(p,p2,strlen(p2))==0;
}

struct tuple2$2char$phchar$ph* parse_function_attribute(struct sInfo* info){
void* __right_value442 = (void*)0;
void* __right_value443 = (void*)0;
struct buffer* asm_fun_name_651;
void* __right_value444 = (void*)0;
void* __right_value445 = (void*)0;
struct buffer* result_652;
char* head_653;
int brace_num_654;
char* tail_655;
char* head_656;
int brace_num_657;
char* tail_658;
char* head_659;
char* tail_660;
char* head_661;
char* tail_662;
int len_663;
_Bool in_dquort_664;
int brace_num_665;
char* head_666;
char* tail_667;
char* head_668;
char* tail_669;
char* head_670;
char* tail_671;
char* head_672;
int nest_673;
char* tail_674;
char* head_675;
int nest_676;
char* tail_677;
char* head_678;
int nest_679;
char* tail_680;
char* head_681;
int nest_682;
char* tail_683;
char* head_684;
int nest_685;
char* tail_686;
char* head_687;
char* tail_688;
char* head_689;
char* tail_690;
char* head_691;
char* tail_692;
char* head_693;
char* tail_694;
char* head_695;
char* tail_696;
char* head_697;
int brace_num_698;
char* tail_699;
void* __right_value446 = (void*)0;
void* __right_value447 = (void*)0;
void* __right_value451 = (void*)0;
void* __right_value452 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__348;
    asm_fun_name_651=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 777, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    result_652=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 778, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    while((_Bool)1) {
        if(        strmemcmp(info->p,"__attribute__")) {
            head_653=info->p;
            info->p+=strlen("__attribute__");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_654=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_654++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_654--;
                        if(                        brace_num_654==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_655=info->p;
            buffer_append(result_652,head_653,tail_655-head_653);
        }
        else if(        strmemcmp(info->p,"__declspec")) {
            head_656=info->p;
            info->p+=strlen("__declspec");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_657=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_657++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_657--;
                        if(                        brace_num_657==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_658=info->p;
            buffer_append(result_652,head_656,tail_658-head_656);
        }
        else if(        strmemcmp(info->p,"_Noreturn")) {
            head_659=info->p;
            info->p+=strlen("_Noreturn");
            skip_spaces_and_lf(info);
            tail_660=info->p;
            buffer_append(result_652,head_659,tail_660-head_659);
        }
        else if(        strmemcmp(info->p,"__noreturn")) {
            head_661=info->p;
            info->p+=strlen("__noreturn");
            skip_spaces_and_lf(info);
            tail_662=info->p;
            buffer_append(result_652,head_661,tail_662-head_661);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_663=0;
            if(            *info->p==40) {
                in_dquort_664=(_Bool)0;
                brace_num_665=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_664=!in_dquort_664;
                    }
                    else if(                    in_dquort_664) {
                        buffer_append_char(asm_fun_name_651,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_665++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_665--;
                        if(                        brace_num_665==0) {
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
            head_666=info->p;
            info->p+=strlen("__attribute_pure__");
            skip_spaces_and_lf(info);
            tail_667=info->p;
            buffer_append(result_652,head_666,tail_667-head_666);
        }
        else if(        strmemcmp(info->p,"__malloc_like")) {
            head_668=info->p;
            info->p+=strlen("__malloc_like");
            skip_spaces_and_lf(info);
            tail_669=info->p;
            buffer_append(result_652,head_668,tail_669-head_668);
        }
        else if(        strmemcmp(info->p,"__result_use_check")) {
            head_670=info->p;
            info->p+=strlen("__result_use_check");
            skip_spaces_and_lf(info);
            tail_671=info->p;
            buffer_append(result_652,head_670,tail_671-head_670);
        }
        else if(        strmemcmp(info->p,"__alloc_size2")) {
            head_672=info->p;
            info->p+=strlen("__alloc_size2");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_673=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_673++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_673--;
                        if(                        nest_673==0) {
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
            tail_674=info->p;
            buffer_append(result_652,head_672,tail_674-head_672);
        }
        else if(        strmemcmp(info->p,"__alloc_size")) {
            head_675=info->p;
            info->p+=strlen("__alloc_size");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_676=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_676++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_676--;
                        if(                        nest_676==0) {
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
            tail_677=info->p;
            buffer_append(result_652,head_675,tail_677-head_675);
        }
        else if(        strmemcmp(info->p,"__nonnull")) {
            head_678=info->p;
            info->p+=strlen("__nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_679=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_679++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_679--;
                        if(                        nest_679==0) {
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
            tail_680=info->p;
            buffer_append(result_652,head_678,tail_680-head_678);
        }
        else if(        strmemcmp(info->p,"_Nonnull")) {
            head_681=info->p;
            info->p+=strlen("_Nonnull");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_682=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_682++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_682--;
                        if(                        nest_682==0) {
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
            tail_683=info->p;
            buffer_append(result_652,head_681,tail_683-head_681);
        }
        else if(        strmemcmp(info->p,"__alloc_align")) {
            head_684=info->p;
            info->p+=strlen("__alloc_align");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                nest_685=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_685++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_685--;
                        if(                        nest_685==0) {
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
            tail_686=info->p;
            buffer_append(result_652,head_684,tail_686-head_684);
        }
        else if(        strmemcmp(info->p,"__attribute_malloc__")) {
            head_687=info->p;
            info->p+=strlen("__attribute_malloc__");
            skip_spaces_and_lf(info);
            tail_688=info->p;
            buffer_append(result_652,head_687,tail_688-head_687);
        }
        else if(        strmemcmp(info->p,"__attr_dealloc_fclose")) {
            head_689=info->p;
            info->p+=strlen("__attr_dealloc_fclose");
            skip_spaces_and_lf(info);
            tail_690=info->p;
            buffer_append(result_652,head_689,tail_690-head_689);
        }
        else if(        strmemcmp(info->p,"__wur")) {
            head_691=info->p;
            info->p+=strlen("__wur");
            skip_spaces_and_lf(info);
            tail_692=info->p;
            buffer_append(result_652,head_691,tail_692-head_691);
        }
        else if(        strmemcmp(info->p,"__pure2")) {
            head_693=info->p;
            info->p+=strlen("__pure2");
            skip_spaces_and_lf(info);
            tail_694=info->p;
            buffer_append(result_652,head_693,tail_694-head_693);
        }
        else if(        strmemcmp(info->p,"__pure")) {
            head_695=info->p;
            info->p+=strlen("__pure");
            skip_spaces_and_lf(info);
            tail_696=info->p;
            buffer_append(result_652,head_695,tail_696-head_695);
        }
        else if(        strmemcmp(info->p,"__asm")) {
            head_697=info->p;
            info->p+=strlen("__asm");
            skip_spaces_and_lf(info);
            if(            *info->p==40) {
                brace_num_698=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_698++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_698--;
                        if(                        brace_num_698==0) {
                            break;
                        }
                    }
                    else {
                        info->p++;
                    }
                }
            }
            skip_spaces_and_lf(info);
            tail_699=info->p;
            buffer_append(result_652,head_697,tail_699-head_697);
        }
        else {
            break;
        }
    }
    __result_obj__348 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value452=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1192, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_651)),(char*)come_increment_ref_count(buffer_to_string(result_652))))));
    come_call_finalizer3(asm_fun_name_651,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_652,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value452,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__348,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__348;
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
struct tuple2$2char$phchar$ph* __result_obj__345;
void* __right_value448 = (void*)0;
struct tuple2$2char$phchar$ph* result_700;
void* __right_value449 = (void*)0;
char* __dec_obj106;
void* __right_value450 = (void*)0;
char* __dec_obj107;
struct tuple2$2char$phchar$ph* __result_obj__346;
    if(    self==(void*)0) {
        __result_obj__345 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__345,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__345;
    }
    result_700=(struct tuple2$2char$phchar$ph*)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "tuple2$2char$phchar$ph_clone", 3, "struct tuple2$2char$phchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj106=result_700->v1;
        result_700->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj107=result_700->v2;
        result_700->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__346 = come_increment_ref_count(result_700);
    come_call_finalizer3(result_700,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__346,tuple2$2char$phchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__346;
}

static unsigned int tuple2$2char$phchar$ph_get_hash_key(struct tuple2$2char$phchar$ph* self){
unsigned int result_701;
    result_701=0;
    result_701+=int_get_hash_key(((int)self->v1));
    result_701+=int_get_hash_key(((int)self->v2));
    return result_701;
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
char* __dec_obj108;
char* __dec_obj109;
struct tuple2$2char$phchar$ph* __result_obj__347;
    __dec_obj108=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj109=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__347 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__347,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__347;
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
void* __right_value453 = (void*)0;
void* __right_value454 = (void*)0;
struct buffer* asm_fun_name_702;
void* __right_value455 = (void*)0;
char* attribute_703;
int nest_704;
int nest_705;
int nest_706;
int nest_707;
int nest_708;
void* __right_value456 = (void*)0;
char* __dec_obj110;
int len_709;
_Bool in_dquort_710;
int brace_num_711;
int brace_num_712;
void* __right_value457 = (void*)0;
void* __right_value458 = (void*)0;
void* __right_value459 = (void*)0;
struct tuple2$2char$phchar$ph* __result_obj__349;
    asm_fun_name_702=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 1197, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
    attribute_703=(char*)come_increment_ref_count(xsprintf(""));
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
                nest_704=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_704++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_704--;
                        if(                        nest_704==0) {
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
                nest_705=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_705++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_705--;
                        if(                        nest_705==0) {
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
                nest_706=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_706++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_706--;
                        if(                        nest_706==0) {
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
                nest_707=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_707++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_707--;
                        if(                        nest_707==0) {
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
                nest_708=0;
                while(1) {
                    if(                    *info->p==40) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_708++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        nest_708--;
                        if(                        nest_708==0) {
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
            __dec_obj110=attribute_703;
            attribute_703=(char*)come_increment_ref_count(parse_struct_attribute(info));
            __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
        }
        else if(        strmemcmp(info->p,"__asm__")) {
            info->p+=strlen("__asm__");
            skip_spaces_and_lf(info);
            if(            memcmp(info->p,"__ASMNAME",strlen("__ASMNAME"))==0) {
                info->p+=strlen("__ASMNAME");
                skip_spaces_and_lf(info);
            }
            len_709=0;
            if(            *info->p==40) {
                in_dquort_710=(_Bool)0;
                brace_num_711=0;
                while(*info->p) {
                    if(                    *info->p==34) {
                        info->p++;
                        in_dquort_710=!in_dquort_710;
                    }
                    else if(                    in_dquort_710) {
                        buffer_append_char(asm_fun_name_702,*info->p);
                        info->p++;
                    }
                    else if(                    *info->p==40) {
                        info->p++;
                        brace_num_711++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_711--;
                        if(                        brace_num_711==0) {
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
                brace_num_712=0;
                while(*info->p) {
                    if(                    *info->p==40) {
                        info->p++;
                        brace_num_712++;
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        brace_num_712--;
                        if(                        brace_num_712==0) {
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
    __result_obj__349 = come_increment_ref_count(((struct tuple2$2char$phchar$ph*)(__right_value459=tuple2$2char$phchar$ph_initialize((struct tuple2$2char$phchar$ph**)come_increment_ref_count((struct tuple2$2char$phchar$ph*)come_calloc(1, sizeof(struct tuple2$2char$phchar$ph)*(1), "05function.c", 1466, "struct tuple2$2char$phchar$ph", tuple2$2char$phchar$ph_finalize, tuple2$2char$phchar$ph_clone, tuple2$2char$phchar$ph_get_hash_key, tuple2$2char$phchar$ph_equals)),(char*)come_increment_ref_count(buffer_to_string(asm_fun_name_702)),(char*)come_increment_ref_count(attribute_703)))));
    come_call_finalizer3(asm_fun_name_702,buffer_finalize, 0, 0, 0, 0, (void*)0);
    (attribute_703 = come_decrement_ref_count2(attribute_703, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value459,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__349,tuple2$2char$phchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__349;
}

void transpile_toplevel(_Bool block, struct sInfo* info){
void* __right_value460 = (void*)0;
char* __dec_obj111;
char* head_713;
int head_sline_714;
void* __right_value461 = (void*)0;
char* buf_715;
void* __right_value462 = (void*)0;
struct sNode* node_716;
_Bool Value_717;
    while(*info->p) {
        __dec_obj111=info->sname_at_head;
        info->sname_at_head=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->sname));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        parse_sharp_v5(info);
        head_713=info->p;
        head_sline_714=info->sline;
        buf_715=(char*)come_increment_ref_count(parse_word(info));
        parse_sharp_v5(info);
        if(        block&&*info->p==125) {
            info->p++;
            skip_spaces_and_lf(info);
            (buf_715 = come_decrement_ref_count2(buf_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            break;
        }
        node_716=(struct sNode*)come_increment_ref_count(top_level_v99(buf_715,head_713,head_sline_714,info));
        parse_sharp_v5(info);
        while(*info->p==59) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        parse_sharp_v5(info);
        if(        node_716!=((void*)0)) {
            Value_717=node_compile(node_716,info);
            if(            !Value_717) {
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
            (buf_715 = come_decrement_ref_count2(buf_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((node_716) ? node_716 = come_decrement_ref_count2(node_716, ((struct sNode*)node_716)->finalize, ((struct sNode*)node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            break;
        }
        (buf_715 = come_decrement_ref_count2(buf_715, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        ((node_716) ? node_716 = come_decrement_ref_count2(node_716, ((struct sNode*)node_716)->finalize, ((struct sNode*)node_716)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
}

int transpile_v5(struct sInfo* info){
void* __right_value463 = (void*)0;
char* name_718;
void* __right_value464 = (void*)0;
void* __right_value465 = (void*)0;
void* __right_value466 = (void*)0;
struct sType* result_type_719;
void* __right_value467 = (void*)0;
void* __right_value468 = (void*)0;
void* __right_value469 = (void*)0;
void* __right_value470 = (void*)0;
void* __right_value471 = (void*)0;
void* __right_value472 = (void*)0;
void* __right_value473 = (void*)0;
void* __right_value474 = (void*)0;
void* __right_value475 = (void*)0;
void* __right_value476 = (void*)0;
void* __right_value477 = (void*)0;
void* __right_value478 = (void*)0;
void* __right_value479 = (void*)0;
void* __right_value480 = (void*)0;
void* __right_value481 = (void*)0;
void* __right_value482 = (void*)0;
void* __right_value483 = (void*)0;
void* __right_value484 = (void*)0;
void* __right_value485 = (void*)0;
void* __right_value486 = (void*)0;
void* __right_value487 = (void*)0;
void* __right_value488 = (void*)0;
void* __right_value489 = (void*)0;
void* __right_value490 = (void*)0;
void* __right_value491 = (void*)0;
void* __right_value492 = (void*)0;
void* __right_value493 = (void*)0;
struct sType* __list_values1___720[9];
void* __right_value498 = (void*)0;
void* __right_value499 = (void*)0;
struct list$1sType$ph* param_types_727;
void* __right_value500 = (void*)0;
void* __right_value501 = (void*)0;
void* __right_value502 = (void*)0;
void* __right_value503 = (void*)0;
void* __right_value504 = (void*)0;
void* __right_value505 = (void*)0;
void* __right_value506 = (void*)0;
void* __right_value507 = (void*)0;
void* __right_value508 = (void*)0;
char* __list_values2___728[9];
void* __right_value510 = (void*)0;
void* __right_value511 = (void*)0;
struct list$1char$ph* param_names_732;
void* __right_value512 = (void*)0;
void* __right_value513 = (void*)0;
struct list$1char$ph* param_default_parametors_733;
void* __right_value514 = (void*)0;
void* __right_value515 = (void*)0;
void* __right_value516 = (void*)0;
void* __right_value534 = (void*)0;
void* __right_value535 = (void*)0;
void* __right_value536 = (void*)0;
void* __right_value537 = (void*)0;
struct sFun* main_fun_737;
void* __right_value543 = (void*)0;
void* __right_value544 = (void*)0;
char* name_759;
void* __right_value545 = (void*)0;
void* __right_value546 = (void*)0;
void* __right_value547 = (void*)0;
struct sType* result_type_760;
void* __right_value548 = (void*)0;
void* __right_value549 = (void*)0;
void* __right_value550 = (void*)0;
struct sType* __list_values3___761[1];
void* __right_value551 = (void*)0;
void* __right_value552 = (void*)0;
struct list$1sType$ph* param_types_762;
void* __right_value553 = (void*)0;
char* __list_values4___763[1];
void* __right_value554 = (void*)0;
void* __right_value555 = (void*)0;
struct list$1char$ph* param_names_764;
void* __right_value556 = (void*)0;
void* __right_value557 = (void*)0;
struct list$1char$ph* param_default_parametors_765;
void* __right_value558 = (void*)0;
void* __right_value559 = (void*)0;
void* __right_value560 = (void*)0;
void* __right_value561 = (void*)0;
struct sFun* main_fun_766;
void* __right_value562 = (void*)0;
void* __right_value563 = (void*)0;
char* name_767;
void* __right_value564 = (void*)0;
void* __right_value565 = (void*)0;
void* __right_value566 = (void*)0;
struct sType* result_type_768;
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
void* __right_value577 = (void*)0;
void* __right_value578 = (void*)0;
void* __right_value579 = (void*)0;
void* __right_value580 = (void*)0;
void* __right_value581 = (void*)0;
void* __right_value582 = (void*)0;
void* __right_value583 = (void*)0;
void* __right_value584 = (void*)0;
void* __right_value585 = (void*)0;
void* __right_value586 = (void*)0;
void* __right_value587 = (void*)0;
struct sType* __list_values5___769[7];
void* __right_value588 = (void*)0;
void* __right_value589 = (void*)0;
struct list$1sType$ph* param_types_770;
void* __right_value590 = (void*)0;
void* __right_value591 = (void*)0;
void* __right_value592 = (void*)0;
void* __right_value593 = (void*)0;
void* __right_value594 = (void*)0;
void* __right_value595 = (void*)0;
void* __right_value596 = (void*)0;
char* __list_values6___771[7];
void* __right_value597 = (void*)0;
void* __right_value598 = (void*)0;
struct list$1char$ph* param_names_772;
void* __right_value599 = (void*)0;
void* __right_value600 = (void*)0;
struct list$1char$ph* param_default_parametors_773;
void* __right_value601 = (void*)0;
void* __right_value602 = (void*)0;
void* __right_value603 = (void*)0;
void* __right_value604 = (void*)0;
struct sFun* main_fun_774;
void* __right_value605 = (void*)0;
void* __right_value606 = (void*)0;
char* name_775;
void* __right_value607 = (void*)0;
void* __right_value608 = (void*)0;
void* __right_value609 = (void*)0;
struct sType* result_type_776;
void* __right_value610 = (void*)0;
void* __right_value611 = (void*)0;
void* __right_value612 = (void*)0;
void* __right_value613 = (void*)0;
void* __right_value614 = (void*)0;
void* __right_value615 = (void*)0;
void* __right_value616 = (void*)0;
void* __right_value617 = (void*)0;
void* __right_value618 = (void*)0;
void* __right_value619 = (void*)0;
void* __right_value620 = (void*)0;
void* __right_value621 = (void*)0;
void* __right_value622 = (void*)0;
void* __right_value623 = (void*)0;
void* __right_value624 = (void*)0;
struct sType* __list_values7___777[5];
void* __right_value625 = (void*)0;
void* __right_value626 = (void*)0;
struct list$1sType$ph* param_types_778;
void* __right_value627 = (void*)0;
void* __right_value628 = (void*)0;
void* __right_value629 = (void*)0;
void* __right_value630 = (void*)0;
void* __right_value631 = (void*)0;
char* __list_values8___779[5];
void* __right_value632 = (void*)0;
void* __right_value633 = (void*)0;
struct list$1char$ph* param_names_780;
void* __right_value634 = (void*)0;
void* __right_value635 = (void*)0;
struct list$1char$ph* param_default_parametors_781;
void* __right_value636 = (void*)0;
void* __right_value637 = (void*)0;
void* __right_value638 = (void*)0;
void* __right_value639 = (void*)0;
struct sFun* main_fun_782;
void* __right_value640 = (void*)0;
void* __right_value641 = (void*)0;
char* name_783;
void* __right_value642 = (void*)0;
void* __right_value643 = (void*)0;
void* __right_value644 = (void*)0;
struct sType* result_type_784;
void* __right_value645 = (void*)0;
void* __right_value646 = (void*)0;
void* __right_value647 = (void*)0;
struct sType* __list_values9___785[1];
void* __right_value648 = (void*)0;
void* __right_value649 = (void*)0;
struct list$1sType$ph* param_types_786;
void* __right_value650 = (void*)0;
char* __list_values10___787[1];
void* __right_value651 = (void*)0;
void* __right_value652 = (void*)0;
struct list$1char$ph* param_names_788;
void* __right_value653 = (void*)0;
void* __right_value654 = (void*)0;
struct list$1char$ph* param_default_parametors_789;
void* __right_value655 = (void*)0;
void* __right_value656 = (void*)0;
void* __right_value657 = (void*)0;
void* __right_value658 = (void*)0;
struct sFun* main_fun_790;
void* __right_value659 = (void*)0;
void* __right_value660 = (void*)0;
char* name_791;
void* __right_value661 = (void*)0;
void* __right_value662 = (void*)0;
void* __right_value663 = (void*)0;
struct sType* result_type_792;
void* __right_value664 = (void*)0;
void* __right_value665 = (void*)0;
void* __right_value666 = (void*)0;
void* __right_value667 = (void*)0;
void* __right_value668 = (void*)0;
void* __right_value669 = (void*)0;
void* __right_value670 = (void*)0;
void* __right_value671 = (void*)0;
void* __right_value672 = (void*)0;
void* __right_value673 = (void*)0;
void* __right_value674 = (void*)0;
void* __right_value675 = (void*)0;
struct sType* __list_values11___793[4];
void* __right_value676 = (void*)0;
void* __right_value677 = (void*)0;
struct list$1sType$ph* param_types_794;
void* __right_value678 = (void*)0;
void* __right_value679 = (void*)0;
void* __right_value680 = (void*)0;
void* __right_value681 = (void*)0;
char* __list_values12___795[4];
void* __right_value682 = (void*)0;
void* __right_value683 = (void*)0;
struct list$1char$ph* param_names_796;
void* __right_value684 = (void*)0;
void* __right_value685 = (void*)0;
struct list$1char$ph* param_default_parametors_797;
void* __right_value686 = (void*)0;
void* __right_value687 = (void*)0;
void* __right_value688 = (void*)0;
void* __right_value689 = (void*)0;
void* __right_value690 = (void*)0;
void* __right_value691 = (void*)0;
void* __right_value692 = (void*)0;
struct sFun* main_fun_798;
void* __right_value693 = (void*)0;
void* __right_value694 = (void*)0;
char* name_799;
void* __right_value695 = (void*)0;
void* __right_value696 = (void*)0;
void* __right_value697 = (void*)0;
struct sType* result_type_800;
void* __right_value698 = (void*)0;
void* __right_value699 = (void*)0;
void* __right_value700 = (void*)0;
void* __right_value701 = (void*)0;
void* __right_value702 = (void*)0;
void* __right_value703 = (void*)0;
void* __right_value704 = (void*)0;
void* __right_value705 = (void*)0;
void* __right_value706 = (void*)0;
struct sType* __list_values13___801[3];
void* __right_value707 = (void*)0;
void* __right_value708 = (void*)0;
struct list$1sType$ph* param_types_802;
void* __right_value709 = (void*)0;
void* __right_value710 = (void*)0;
void* __right_value711 = (void*)0;
char* __list_values14___803[3];
void* __right_value712 = (void*)0;
void* __right_value713 = (void*)0;
struct list$1char$ph* param_names_804;
void* __right_value714 = (void*)0;
void* __right_value715 = (void*)0;
struct list$1char$ph* param_default_parametors_805;
void* __right_value716 = (void*)0;
void* __right_value717 = (void*)0;
void* __right_value718 = (void*)0;
void* __right_value719 = (void*)0;
struct sFun* main_fun_806;
void* __right_value720 = (void*)0;
void* __right_value721 = (void*)0;
char* name_807;
void* __right_value722 = (void*)0;
void* __right_value723 = (void*)0;
void* __right_value724 = (void*)0;
struct sType* result_type_808;
void* __right_value725 = (void*)0;
void* __right_value726 = (void*)0;
void* __right_value727 = (void*)0;
struct sType* __list_values15___809[1];
void* __right_value728 = (void*)0;
void* __right_value729 = (void*)0;
struct list$1sType$ph* param_types_810;
void* __right_value730 = (void*)0;
char* __list_values16___811[1];
void* __right_value731 = (void*)0;
void* __right_value732 = (void*)0;
struct list$1char$ph* param_names_812;
void* __right_value733 = (void*)0;
void* __right_value734 = (void*)0;
struct list$1char$ph* param_default_parametors_813;
void* __right_value735 = (void*)0;
void* __right_value736 = (void*)0;
void* __right_value737 = (void*)0;
void* __right_value738 = (void*)0;
struct sFun* main_fun_814;
void* __right_value739 = (void*)0;
void* __right_value740 = (void*)0;
char* name_815;
void* __right_value741 = (void*)0;
void* __right_value742 = (void*)0;
void* __right_value743 = (void*)0;
struct sType* result_type_816;
void* __right_value744 = (void*)0;
void* __right_value745 = (void*)0;
void* __right_value746 = (void*)0;
void* __right_value747 = (void*)0;
void* __right_value748 = (void*)0;
void* __right_value749 = (void*)0;
void* __right_value750 = (void*)0;
void* __right_value751 = (void*)0;
void* __right_value752 = (void*)0;
struct sType* __list_values17___817[3];
void* __right_value753 = (void*)0;
void* __right_value754 = (void*)0;
struct list$1sType$ph* param_types_818;
void* __right_value755 = (void*)0;
void* __right_value756 = (void*)0;
void* __right_value757 = (void*)0;
char* __list_values18___819[3];
void* __right_value758 = (void*)0;
void* __right_value759 = (void*)0;
struct list$1char$ph* param_names_820;
void* __right_value760 = (void*)0;
void* __right_value761 = (void*)0;
struct list$1char$ph* param_default_parametors_821;
void* __right_value762 = (void*)0;
void* __right_value763 = (void*)0;
void* __right_value764 = (void*)0;
void* __right_value765 = (void*)0;
struct sFun* main_fun_822;
void* __right_value766 = (void*)0;
void* __right_value767 = (void*)0;
char* name_823;
void* __right_value768 = (void*)0;
void* __right_value769 = (void*)0;
void* __right_value770 = (void*)0;
struct sType* result_type_824;
void* __right_value771 = (void*)0;
void* __right_value772 = (void*)0;
struct list$1sType$ph* param_types_825;
void* __right_value773 = (void*)0;
void* __right_value774 = (void*)0;
struct list$1char$ph* param_names_826;
void* __right_value775 = (void*)0;
void* __right_value776 = (void*)0;
struct list$1char$ph* param_default_parametors_827;
void* __right_value777 = (void*)0;
void* __right_value778 = (void*)0;
void* __right_value779 = (void*)0;
void* __right_value780 = (void*)0;
struct sFun* main_fun_828;
void* __right_value781 = (void*)0;
void* __right_value782 = (void*)0;
char* name_829;
void* __right_value783 = (void*)0;
void* __right_value784 = (void*)0;
void* __right_value785 = (void*)0;
struct sType* result_type_830;
void* __right_value786 = (void*)0;
void* __right_value787 = (void*)0;
void* __right_value788 = (void*)0;
void* __right_value789 = (void*)0;
void* __right_value790 = (void*)0;
void* __right_value791 = (void*)0;
void* __right_value792 = (void*)0;
void* __right_value793 = (void*)0;
void* __right_value794 = (void*)0;
void* __right_value795 = (void*)0;
void* __right_value796 = (void*)0;
void* __right_value797 = (void*)0;
struct sType* __list_values19___831[4];
void* __right_value798 = (void*)0;
void* __right_value799 = (void*)0;
struct list$1sType$ph* param_types_832;
void* __right_value800 = (void*)0;
void* __right_value801 = (void*)0;
void* __right_value802 = (void*)0;
void* __right_value803 = (void*)0;
char* __list_values20___833[4];
void* __right_value804 = (void*)0;
void* __right_value805 = (void*)0;
struct list$1char$ph* param_names_834;
void* __right_value806 = (void*)0;
void* __right_value807 = (void*)0;
struct list$1char$ph* param_default_parametors_835;
void* __right_value808 = (void*)0;
void* __right_value809 = (void*)0;
void* __right_value810 = (void*)0;
void* __right_value811 = (void*)0;
struct sFun* main_fun_836;
void* __right_value812 = (void*)0;
void* __right_value813 = (void*)0;
char* name_837;
void* __right_value814 = (void*)0;
void* __right_value815 = (void*)0;
void* __right_value816 = (void*)0;
struct sType* result_type_838;
void* __right_value817 = (void*)0;
void* __right_value818 = (void*)0;
struct list$1sType$ph* param_types_839;
void* __right_value819 = (void*)0;
void* __right_value820 = (void*)0;
struct list$1char$ph* param_names_840;
void* __right_value821 = (void*)0;
void* __right_value822 = (void*)0;
struct list$1char$ph* param_default_parametors_841;
void* __right_value823 = (void*)0;
void* __right_value824 = (void*)0;
void* __right_value825 = (void*)0;
void* __right_value826 = (void*)0;
struct sFun* fun_842;
void* __right_value827 = (void*)0;
void* __right_value828 = (void*)0;
char* name_843;
void* __right_value829 = (void*)0;
void* __right_value830 = (void*)0;
void* __right_value831 = (void*)0;
struct sType* result_type_844;
void* __right_value832 = (void*)0;
void* __right_value833 = (void*)0;
struct list$1sType$ph* param_types_845;
void* __right_value834 = (void*)0;
void* __right_value835 = (void*)0;
struct list$1char$ph* param_names_846;
void* __right_value836 = (void*)0;
void* __right_value837 = (void*)0;
struct list$1char$ph* param_default_parametors_847;
void* __right_value838 = (void*)0;
void* __right_value839 = (void*)0;
void* __right_value840 = (void*)0;
void* __right_value841 = (void*)0;
struct sFun* fun_848;
void* __right_value842 = (void*)0;
    skip_spaces_and_lf(info);
    parse_sharp_v5(info);
    {
        name_718=(char*)come_increment_ref_count(__builtin_string("come_calloc"));
        result_type_719=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1522, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_727=(struct list$1sType$ph*)come_increment_ref_count((__list_values1___720[0]=((struct sType*)(__right_value469=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___720[1]=((struct sType*)(__right_value472=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___720[2]=((struct sType*)(__right_value475=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___720[3]=((struct sType*)(__right_value478=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values1___720[4]=((struct sType*)(__right_value481=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values1___720[5]=((struct sType*)(__right_value484=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___720[6]=((struct sType*)(__right_value487=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___720[7]=((struct sType*)(__right_value490=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values1___720[8]=((struct sType*)(__right_value493=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1523, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1523, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),9,__list_values1___720)));
        come_call_finalizer3(__right_value469,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value472,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value475,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value478,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value481,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value484,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value487,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value490,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value493,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_732=(struct list$1char$ph*)come_increment_ref_count((__list_values2___728[0]=((char*)(__right_value500=__builtin_string("count"))),
__list_values2___728[1]=((char*)(__right_value501=__builtin_string("size"))),
__list_values2___728[2]=((char*)(__right_value502=__builtin_string("sname"))),
__list_values2___728[3]=((char*)(__right_value503=__builtin_string("sline"))),
__list_values2___728[4]=((char*)(__right_value504=__builtin_string("class_name"))),
__list_values2___728[5]=((char*)(__right_value505=__builtin_string("finalizer_fun"))),
__list_values2___728[6]=((char*)(__right_value506=__builtin_string("cloner_fun"))),
__list_values2___728[7]=((char*)(__right_value507=__builtin_string("get_hash_key_fun"))),
__list_values2___728[8]=((char*)(__right_value508=__builtin_string("equaler_fun"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1524, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),9,__list_values2___728)));
        (__right_value500 = come_decrement_ref_count2(__right_value500, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value501 = come_decrement_ref_count2(__right_value501, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value502 = come_decrement_ref_count2(__right_value502, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value503 = come_decrement_ref_count2(__right_value503, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value504 = come_decrement_ref_count2(__right_value504, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value505 = come_decrement_ref_count2(__right_value505, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value506 = come_decrement_ref_count2(__right_value506, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value507 = come_decrement_ref_count2(__right_value507, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value508 = come_decrement_ref_count2(__right_value508, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_733=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1525, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_733,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_733,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_733,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_733,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_733,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_737=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1531, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_718),(struct sType*)come_increment_ref_count(result_type_719),(struct list$1sType$ph*)come_increment_ref_count(param_types_727),(struct list$1char$ph*)come_increment_ref_count(param_names_732),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_733),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_718)),(struct sFun*)come_increment_ref_count(main_fun_737));
        (name_718 = come_decrement_ref_count2(name_718, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_719,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_727,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_732,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_733,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_737,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_759=(char*)come_increment_ref_count(__builtin_string("come_increment_ref_count"));
        result_type_760=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1540, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_762=(struct list$1sType$ph*)come_increment_ref_count((__list_values3___761[0]=((struct sType*)(__right_value550=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1541, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1541, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values3___761)));
        come_call_finalizer3(__right_value550,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_764=(struct list$1char$ph*)come_increment_ref_count((__list_values4___763[0]=((char*)(__right_value553=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1542, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values4___763)));
        (__right_value553 = come_decrement_ref_count2(__right_value553, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_765=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1543, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_766=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1544, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_759),(struct sType*)come_increment_ref_count(result_type_760),(struct list$1sType$ph*)come_increment_ref_count(param_types_762),(struct list$1char$ph*)come_increment_ref_count(param_names_764),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_765),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_759)),(struct sFun*)come_increment_ref_count(main_fun_766));
        (name_759 = come_decrement_ref_count2(name_759, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_760,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_762,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_764,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_765,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_766,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_767=(char*)come_increment_ref_count(__builtin_string("come_call_finalizer"));
        result_type_768=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1553, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_770=(struct list$1sType$ph*)come_increment_ref_count((__list_values5___769[0]=((struct sType*)(__right_value569=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___769[1]=((struct sType*)(__right_value572=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___769[2]=((struct sType*)(__right_value575=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___769[3]=((struct sType*)(__right_value578=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values5___769[4]=((struct sType*)(__right_value581=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values5___769[5]=((struct sType*)(__right_value584=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values5___769[6]=((struct sType*)(__right_value587=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1554, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1554, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),7,__list_values5___769)));
        come_call_finalizer3(__right_value569,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value572,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value575,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value578,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value581,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value584,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value587,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_772=(struct list$1char$ph*)come_increment_ref_count((__list_values6___771[0]=((char*)(__right_value590=__builtin_string("fun"))),
__list_values6___771[1]=((char*)(__right_value591=__builtin_string("mem"))),
__list_values6___771[2]=((char*)(__right_value592=__builtin_string("protocol_fun"))),
__list_values6___771[3]=((char*)(__right_value593=__builtin_string("protocol_obj"))),
__list_values6___771[4]=((char*)(__right_value594=__builtin_string("call_finalizer_only"))),
__list_values6___771[5]=((char*)(__right_value595=__builtin_string("no_decrement"))),
__list_values6___771[6]=((char*)(__right_value596=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1555, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),7,__list_values6___771)));
        (__right_value590 = come_decrement_ref_count2(__right_value590, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value591 = come_decrement_ref_count2(__right_value591, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value592 = come_decrement_ref_count2(__right_value592, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value593 = come_decrement_ref_count2(__right_value593, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value594 = come_decrement_ref_count2(__right_value594, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value595 = come_decrement_ref_count2(__right_value595, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value596 = come_decrement_ref_count2(__right_value596, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_773=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1556, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_774=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1557, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_767),(struct sType*)come_increment_ref_count(result_type_768),(struct list$1sType$ph*)come_increment_ref_count(param_types_770),(struct list$1char$ph*)come_increment_ref_count(param_names_772),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_773),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_767)),(struct sFun*)come_increment_ref_count(main_fun_774));
        (name_767 = come_decrement_ref_count2(name_767, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_768,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_770,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_772,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_773,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_774,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_775=(char*)come_increment_ref_count(__builtin_string("come_decrement_ref_count"));
        result_type_776=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1566, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_778=(struct list$1sType$ph*)come_increment_ref_count((__list_values7___777[0]=((struct sType*)(__right_value612=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___777[1]=((struct sType*)(__right_value615=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___777[2]=((struct sType*)(__right_value618=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values7___777[3]=((struct sType*)(__right_value621=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info))),
__list_values7___777[4]=((struct sType*)(__right_value624=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1567, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1567, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),5,__list_values7___777)));
        come_call_finalizer3(__right_value612,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value615,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value618,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value621,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value624,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_780=(struct list$1char$ph*)come_increment_ref_count((__list_values8___779[0]=((char*)(__right_value627=__builtin_string("mem"))),
__list_values8___779[1]=((char*)(__right_value628=__builtin_string("protocol_fun"))),
__list_values8___779[2]=((char*)(__right_value629=__builtin_string("protocol_obj"))),
__list_values8___779[3]=((char*)(__right_value630=__builtin_string("no_decrement"))),
__list_values8___779[4]=((char*)(__right_value631=__builtin_string("no_free"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1568, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),5,__list_values8___779)));
        (__right_value627 = come_decrement_ref_count2(__right_value627, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value628 = come_decrement_ref_count2(__right_value628, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value629 = come_decrement_ref_count2(__right_value629, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value630 = come_decrement_ref_count2(__right_value630, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value631 = come_decrement_ref_count2(__right_value631, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_781=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1569, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_782=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1570, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_775),(struct sType*)come_increment_ref_count(result_type_776),(struct list$1sType$ph*)come_increment_ref_count(param_types_778),(struct list$1char$ph*)come_increment_ref_count(param_names_780),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_781),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_775)),(struct sFun*)come_increment_ref_count(main_fun_782));
        (name_775 = come_decrement_ref_count2(name_775, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_776,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_778,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_780,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_781,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_782,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_783=(char*)come_increment_ref_count(__builtin_string("come_free_object"));
        result_type_784=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1579, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_786=(struct list$1sType$ph*)come_increment_ref_count((__list_values9___785[0]=((struct sType*)(__right_value647=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1580, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1580, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values9___785)));
        come_call_finalizer3(__right_value647,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_788=(struct list$1char$ph*)come_increment_ref_count((__list_values10___787[0]=((char*)(__right_value650=__builtin_string("mem"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1581, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values10___787)));
        (__right_value650 = come_decrement_ref_count2(__right_value650, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_789=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1582, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_790=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1583, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_783),(struct sType*)come_increment_ref_count(result_type_784),(struct list$1sType$ph*)come_increment_ref_count(param_types_786),(struct list$1char$ph*)come_increment_ref_count(param_names_788),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_789),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_783)),(struct sFun*)come_increment_ref_count(main_fun_790));
        (name_783 = come_decrement_ref_count2(name_783, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_784,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_786,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_788,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_789,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_790,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_791=(char*)come_increment_ref_count(__builtin_string("come_memdup"));
        result_type_792=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1592, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_794=(struct list$1sType$ph*)come_increment_ref_count((__list_values11___793[0]=((struct sType*)(__right_value666=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values11___793[1]=((struct sType*)(__right_value669=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values11___793[2]=((struct sType*)(__right_value672=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values11___793[3]=((struct sType*)(__right_value675=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1593, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1593, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values11___793)));
        come_call_finalizer3(__right_value666,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value669,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value672,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value675,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_796=(struct list$1char$ph*)come_increment_ref_count((__list_values12___795[0]=((char*)(__right_value678=__builtin_string("block"))),
__list_values12___795[1]=((char*)(__right_value679=__builtin_string("sname"))),
__list_values12___795[2]=((char*)(__right_value680=__builtin_string("sline"))),
__list_values12___795[3]=((char*)(__right_value681=__builtin_string("class_name"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1594, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values12___795)));
        (__right_value678 = come_decrement_ref_count2(__right_value678, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value679 = come_decrement_ref_count2(__right_value679, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value680 = come_decrement_ref_count2(__right_value680, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value681 = come_decrement_ref_count2(__right_value681, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_797=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1595, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_797,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_797,(char*)come_increment_ref_count(__builtin_string("null")));
        list$1char$ph$p_push_back(param_default_parametors_797,(char*)come_increment_ref_count(__builtin_string("0")));
        list$1char$ph$p_push_back(param_default_parametors_797,(char*)come_increment_ref_count(__builtin_string("null")));
        main_fun_798=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1600, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_791),(struct sType*)come_increment_ref_count(result_type_792),(struct list$1sType$ph*)come_increment_ref_count(param_types_794),(struct list$1char$ph*)come_increment_ref_count(param_names_796),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_797),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_791)),(struct sFun*)come_increment_ref_count(main_fun_798));
        (name_791 = come_decrement_ref_count2(name_791, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_792,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_794,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_796,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_797,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_798,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_799=(char*)come_increment_ref_count(__builtin_string("memset"));
        result_type_800=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1609, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_802=(struct list$1sType$ph*)come_increment_ref_count((__list_values13___801[0]=((struct sType*)(__right_value700=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values13___801[1]=((struct sType*)(__right_value703=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values13___801[2]=((struct sType*)(__right_value706=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1610, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("long")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1610, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values13___801)));
        come_call_finalizer3(__right_value700,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value703,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value706,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_804=(struct list$1char$ph*)come_increment_ref_count((__list_values14___803[0]=((char*)(__right_value709=__builtin_string("b"))),
__list_values14___803[1]=((char*)(__right_value710=__builtin_string("c"))),
__list_values14___803[2]=((char*)(__right_value711=__builtin_string("len"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1611, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values14___803)));
        (__right_value709 = come_decrement_ref_count2(__right_value709, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value710 = come_decrement_ref_count2(__right_value710, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value711 = come_decrement_ref_count2(__right_value711, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_805=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1612, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_806=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1613, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_799),(struct sType*)come_increment_ref_count(result_type_800),(struct list$1sType$ph*)come_increment_ref_count(param_types_802),(struct list$1char$ph*)come_increment_ref_count(param_names_804),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_805),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_799)),(struct sFun*)come_increment_ref_count(main_fun_806));
        (name_799 = come_decrement_ref_count2(name_799, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_800,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_802,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_804,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_805,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_806,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_807=(char*)come_increment_ref_count(__builtin_string("__builtin_string"));
        result_type_808=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1622, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        param_types_810=(struct list$1sType$ph*)come_increment_ref_count((__list_values15___809[0]=((struct sType*)(__right_value727=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1623, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1623, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values15___809)));
        come_call_finalizer3(__right_value727,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_812=(struct list$1char$ph*)come_increment_ref_count((__list_values16___811[0]=((char*)(__right_value730=__builtin_string("str"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1624, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values16___811)));
        (__right_value730 = come_decrement_ref_count2(__right_value730, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_813=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1625, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_814=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1626, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_807),(struct sType*)come_increment_ref_count(result_type_808),(struct list$1sType$ph*)come_increment_ref_count(param_types_810),(struct list$1char$ph*)come_increment_ref_count(param_names_812),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_813),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_807)),(struct sFun*)come_increment_ref_count(main_fun_814));
        (name_807 = come_decrement_ref_count2(name_807, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_808,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_810,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_812,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_813,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_814,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_815=(char*)come_increment_ref_count(__builtin_string("come_heap_init"));
        result_type_816=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1635, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_818=(struct list$1sType$ph*)come_increment_ref_count((__list_values17___817[0]=((struct sType*)(__right_value746=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values17___817[1]=((struct sType*)(__right_value749=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values17___817[2]=((struct sType*)(__right_value752=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1636, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1636, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),3,__list_values17___817)));
        come_call_finalizer3(__right_value746,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value749,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value752,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_820=(struct list$1char$ph*)come_increment_ref_count((__list_values18___819[0]=((char*)(__right_value755=xsprintf("come_malloc"))),
__list_values18___819[1]=((char*)(__right_value756=xsprintf("come_debug"))),
__list_values18___819[2]=((char*)(__right_value757=xsprintf("come_gc"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1637, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),3,__list_values18___819)));
        (__right_value755 = come_decrement_ref_count2(__right_value755, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value756 = come_decrement_ref_count2(__right_value756, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value757 = come_decrement_ref_count2(__right_value757, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_821=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1638, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_821,((void*)0));
        main_fun_822=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1640, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_815),(struct sType*)come_increment_ref_count(result_type_816),(struct list$1sType$ph*)come_increment_ref_count(param_types_818),(struct list$1char$ph*)come_increment_ref_count(param_names_820),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_821),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_815)),(struct sFun*)come_increment_ref_count(main_fun_822));
        (name_815 = come_decrement_ref_count2(name_815, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_816,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_818,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_820,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_821,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_822,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_823=(char*)come_increment_ref_count(__builtin_string("come_heap_final"));
        result_type_824=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1649, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_825=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1650, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_826=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1651, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_827=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1652, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_828=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1653, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_823),(struct sType*)come_increment_ref_count(result_type_824),(struct list$1sType$ph*)come_increment_ref_count(param_types_825),(struct list$1char$ph*)come_increment_ref_count(param_names_826),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_827),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_823)),(struct sFun*)come_increment_ref_count(main_fun_828));
        (name_823 = come_decrement_ref_count2(name_823, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_824,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_825,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_826,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_827,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_828,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_829=(char*)come_increment_ref_count(__builtin_string("come_null_check"));
        result_type_830=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1662, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info));
        param_types_832=(struct list$1sType$ph*)come_increment_ref_count((__list_values19___831[0]=((struct sType*)(__right_value788=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void*")),(_Bool)0,info))),
__list_values19___831[1]=((struct sType*)(__right_value791=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info))),
__list_values19___831[2]=((struct sType*)(__right_value794=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
__list_values19___831[3]=((struct sType*)(__right_value797=sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1663, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info))),
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1663, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),4,__list_values19___831)));
        come_call_finalizer3(__right_value788,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value791,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value794,sType_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value797,sType_finalize, 0, 1, 0, 0, (void*)0);
        param_names_834=(struct list$1char$ph*)come_increment_ref_count((__list_values20___833[0]=((char*)(__right_value800=__builtin_string("mem"))),
__list_values20___833[1]=((char*)(__right_value801=__builtin_string("sname"))),
__list_values20___833[2]=((char*)(__right_value802=__builtin_string("sline"))),
__list_values20___833[3]=((char*)(__right_value803=__builtin_string("id"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1664, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),4,__list_values20___833)));
        (__right_value800 = come_decrement_ref_count2(__right_value800, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value801 = come_decrement_ref_count2(__right_value801, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value802 = come_decrement_ref_count2(__right_value802, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value803 = come_decrement_ref_count2(__right_value803, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_835=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1665, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        main_fun_836=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1666, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_829),(struct sType*)come_increment_ref_count(result_type_830),(struct list$1sType$ph*)come_increment_ref_count(param_types_832),(struct list$1char$ph*)come_increment_ref_count(param_names_834),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_835),(_Bool)1,(_Bool)0,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_829)),(struct sFun*)come_increment_ref_count(main_fun_836));
        (name_829 = come_decrement_ref_count2(name_829, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_830,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_832,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_834,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_835,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(main_fun_836,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_837=(char*)come_increment_ref_count(__builtin_string("__builtin_va_start"));
        result_type_838=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1675, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_839=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1676, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_840=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1677, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_841=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1678, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_842=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1679, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_837),(struct sType*)come_increment_ref_count(result_type_838),(struct list$1sType$ph*)come_increment_ref_count(param_types_839),(struct list$1char$ph*)come_increment_ref_count(param_names_840),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_841),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_837)),(struct sFun*)come_increment_ref_count(fun_842));
        (name_837 = come_decrement_ref_count2(name_837, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_838,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_839,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_840,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_841,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_842,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    {
        name_843=(char*)come_increment_ref_count(__builtin_string("__builtin_va_end"));
        result_type_844=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 1688, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
        param_types_845=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 1689, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_names_846=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1690, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        param_default_parametors_847=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 1691, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        fun_848=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 1692, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_843),(struct sType*)come_increment_ref_count(result_type_844),(struct list$1sType$ph*)come_increment_ref_count(param_types_845),(struct list$1char$ph*)come_increment_ref_count(param_names_846),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_847),(_Bool)1,(_Bool)1,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_843)),(struct sFun*)come_increment_ref_count(fun_848));
        (name_843 = come_decrement_ref_count2(name_843, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_844,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_845,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_846,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_847,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_848,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    transpile_toplevel((_Bool)0,info);
    return 0;
}

static struct list$1sType$ph* list$1sType$ph_initialize_with_values(struct list$1sType$ph* self, int num_value, struct sType** values){
int i_721;
struct list$1sType$ph* __result_obj__351;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_721=0;    i_721<num_value;    i_721++    ){
        list$1sType$ph$p_push_back(self,(struct sType*)come_increment_ref_count(values[i_721]));
    }
    __result_obj__351 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__351,list$1sType$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__351;
}

static struct list$1sType$ph* list$1sType$ph$p_push_back(struct list$1sType$ph* self, struct sType* item){
void* __right_value494 = (void*)0;
struct list_item$1sType$ph* litem_722;
struct sType* __dec_obj112;
void* __right_value495 = (void*)0;
struct list_item$1sType$ph* litem_723;
struct sType* __dec_obj113;
void* __right_value496 = (void*)0;
struct list_item$1sType$ph* litem_724;
struct sType* __dec_obj114;
struct list$1sType$ph* __result_obj__350;
    if(    self->len==0) {
        litem_722=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value494=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1493, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_722->prev=((void*)0);
        litem_722->next=((void*)0);
        __dec_obj112=litem_722->item;
        litem_722->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj112,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_722;
        self->head=litem_722;
    }
    else if(    self->len==1) {
        litem_723=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value495=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1503, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_723->prev=self->head;
        litem_723->next=((void*)0);
        __dec_obj113=litem_723->item;
        litem_723->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj113,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail=litem_723;
        self->head->next=litem_723;
    }
    else {
        litem_724=(struct list_item$1sType$ph*)come_increment_ref_count(((struct list_item$1sType$ph*)(__right_value496=(struct list_item$1sType$ph*)come_calloc(1, sizeof(struct list_item$1sType$ph)*(1), "./comelang.h", 1513, "struct list_item$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        litem_724->prev=self->tail;
        litem_724->next=((void*)0);
        __dec_obj114=litem_724->item;
        litem_724->item=(struct sType*)come_increment_ref_count(item);
        come_call_finalizer3(__dec_obj114,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        self->tail->next=litem_724;
        self->tail=litem_724;
    }
    self->len++;
    __result_obj__350 = self;
    come_call_finalizer3(item,sType_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__350;
}

static struct list$1sType$ph* list$1sType$ph_clone(struct list$1sType$ph* self){
struct list$1sType$ph* __result_obj__352;
void* __right_value497 = (void*)0;
struct list$1sType$ph* result_725;
struct list$1sType$ph* __result_obj__353;
    if(    self==(void*)0) {
        __result_obj__352 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__352,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__352;
    }
    result_725=(struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "list$1sType$ph_clone", 3, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_725->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_725->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_725->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_725->it=self->it;
    }
    __result_obj__353 = come_increment_ref_count(result_725);
    come_call_finalizer3(result_725,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__353,list$1sType$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__353;
}

static unsigned int list$1sType$ph_get_hash_key(struct list$1sType$ph* self){
unsigned int result_726;
    result_726=0;
    result_726+=int_get_hash_key(((int)self->head));
    result_726+=int_get_hash_key(((int)self->tail));
    result_726+=int_get_hash_key(((int)self->len));
    result_726+=int_get_hash_key(((int)self->it));
    return result_726;
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
int i_729;
struct list$1char$ph* __result_obj__354;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(    i_729=0;    i_729<num_value;    i_729++    ){
        list$1char$ph$p_push_back(self,(char*)come_increment_ref_count(values[i_729]));
    }
    __result_obj__354 = come_increment_ref_count(self);
    come_call_finalizer3(self,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__354,list$1char$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__354;
}

static struct list$1char$ph* list$1char$ph_clone(struct list$1char$ph* self){
struct list$1char$ph* __result_obj__355;
void* __right_value509 = (void*)0;
struct list$1char$ph* result_730;
struct list$1char$ph* __result_obj__356;
    if(    self==(void*)0) {
        __result_obj__355 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__355,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__355;
    }
    result_730=(struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "list$1char$ph_clone", 3, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_730->head=self->head;
    }
    if(    self!=((void*)0)) {
        result_730->tail=self->tail;
    }
    if(    self!=((void*)0)) {
        result_730->len=self->len;
    }
    if(    self!=((void*)0)) {
        result_730->it=self->it;
    }
    __result_obj__356 = come_increment_ref_count(result_730);
    come_call_finalizer3(result_730,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__356,list$1char$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__356;
}

static unsigned int list$1char$ph_get_hash_key(struct list$1char$ph* self){
unsigned int result_731;
    result_731=0;
    result_731+=int_get_hash_key(((int)self->head));
    result_731+=int_get_hash_key(((int)self->tail));
    result_731+=int_get_hash_key(((int)self->len));
    result_731+=int_get_hash_key(((int)self->it));
    return result_731;
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

static struct sFun* sFun_clone(struct sFun* self){
struct sFun* __result_obj__357;
void* __right_value517 = (void*)0;
struct sFun* result_735;
void* __right_value518 = (void*)0;
char* __dec_obj115;
void* __right_value519 = (void*)0;
struct sType* __dec_obj116;
void* __right_value520 = (void*)0;
struct list$1sType$ph* __dec_obj117;
void* __right_value521 = (void*)0;
struct list$1char$ph* __dec_obj118;
void* __right_value522 = (void*)0;
struct list$1char$ph* __dec_obj119;
void* __right_value523 = (void*)0;
struct sType* __dec_obj120;
void* __right_value527 = (void*)0;
struct sBlock* __dec_obj123;
void* __right_value528 = (void*)0;
struct buffer* __dec_obj124;
void* __right_value529 = (void*)0;
struct buffer* __dec_obj125;
void* __right_value530 = (void*)0;
struct buffer* __dec_obj126;
void* __right_value531 = (void*)0;
struct buffer* __dec_obj127;
void* __right_value532 = (void*)0;
char* __dec_obj128;
void* __right_value533 = (void*)0;
char* __dec_obj129;
struct sFun* __result_obj__360;
    if(    self==(void*)0) {
        __result_obj__357 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__357,sFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__357;
    }
    result_735=(struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "sFun_clone", 3, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals));
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj115=result_735->mName;
        result_735->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj116=result_735->mResultType;
        result_735->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj116,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj117=result_735->mParamTypes;
        result_735->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj117,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj118=result_735->mParamNames;
        result_735->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj118,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj119=result_735->mParamDefaultParametors;
        result_735->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj119,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mLambdaType!=((void*)0)) {
        __dec_obj120=result_735->mLambdaType;
        result_735->mLambdaType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mLambdaType));
        come_call_finalizer3(__dec_obj120,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj123=result_735->mBlock;
        result_735->mBlock=(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, self->mBlock));
        come_call_finalizer3(__dec_obj123,sBlock_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSource!=((void*)0)) {
        __dec_obj124=result_735->mSource;
        result_735->mSource=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSource));
        come_call_finalizer3(__dec_obj124,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead!=((void*)0)) {
        __dec_obj125=result_735->mSourceHead;
        result_735->mSourceHead=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead));
        come_call_finalizer3(__dec_obj125,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceHead2!=((void*)0)) {
        __dec_obj126=result_735->mSourceHead2;
        result_735->mSourceHead2=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceHead2));
        come_call_finalizer3(__dec_obj126,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mSourceDefer!=((void*)0)) {
        __dec_obj127=result_735->mSourceDefer;
        result_735->mSourceDefer=(struct buffer*)come_increment_ref_count(come_call_cloner(buffer_clone, self->mSourceDefer));
        come_call_finalizer3(__dec_obj127,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_735->mStatic=self->mStatic;
    }
    if(    self!=((void*)0)) {
        result_735->mInline=self->mInline;
    }
    if(    self!=((void*)0)) {
        result_735->mUniq=self->mUniq;
    }
    if(    self!=((void*)0)) {
        result_735->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)) {
        result_735->mExternal=self->mExternal;
    }
    if(    self!=((void*)0)) {
        result_735->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_735->mNoResultType=self->mNoResultType;
    }
    if(    self!=((void*)0)&&self->mAttribute!=((void*)0)) {
        __dec_obj128=result_735->mAttribute;
        result_735->mAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mAttribute));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mFunAttribute!=((void*)0)) {
        __dec_obj129=result_735->mFunAttribute;
        result_735->mFunAttribute=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mFunAttribute));
        __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__360 = come_increment_ref_count(result_735);
    come_call_finalizer3(result_735,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__360,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__360;
}

static unsigned int sFun_get_hash_key(struct sFun* self){
unsigned int result_734;
    result_734=0;
    result_734+=int_get_hash_key(((int)self->mName));
    result_734+=int_get_hash_key(((int)self->mResultType));
    result_734+=int_get_hash_key(((int)self->mParamTypes));
    result_734+=int_get_hash_key(((int)self->mParamNames));
    result_734+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_734+=int_get_hash_key(((int)self->mLambdaType));
    result_734+=int_get_hash_key(((int)self->mBlock));
    result_734+=int_get_hash_key(((int)self->mSource));
    result_734+=int_get_hash_key(((int)self->mSourceHead));
    result_734+=int_get_hash_key(((int)self->mSourceHead2));
    result_734+=int_get_hash_key(((int)self->mSourceDefer));
    result_734+=int_get_hash_key(((int)self->mStatic));
    result_734+=int_get_hash_key(((int)self->mInline));
    result_734+=int_get_hash_key(((int)self->mUniq));
    result_734+=int_get_hash_key(((int)self->mGenerate));
    result_734+=int_get_hash_key(((int)self->mExternal));
    result_734+=int_get_hash_key(((int)self->mVarArgs));
    result_734+=int_get_hash_key(((int)self->mNoResultType));
    result_734+=int_get_hash_key(((int)self->mAttribute));
    result_734+=int_get_hash_key(((int)self->mFunAttribute));
    return result_734;
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

static struct sBlock* sBlock_clone(struct sBlock* self){
struct sBlock* __result_obj__358;
void* __right_value524 = (void*)0;
struct sBlock* result_736;
void* __right_value525 = (void*)0;
struct list$1sNode$ph* __dec_obj121;
void* __right_value526 = (void*)0;
struct sVarTable* __dec_obj122;
struct sBlock* __result_obj__359;
    if(    self==(void*)0) {
        __result_obj__358 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__358,sBlock_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__358;
    }
    result_736=(struct sBlock*)come_increment_ref_count((struct sBlock*)come_calloc(1, sizeof(struct sBlock)*(1), "sBlock_clone", 3, "struct sBlock*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->mNodes!=((void*)0)) {
        __dec_obj121=result_736->mNodes;
        result_736->mNodes=(struct list$1sNode$ph*)come_increment_ref_count(come_call_cloner(list$1sNode$ph$p_clone, self->mNodes));
        come_call_finalizer3(__dec_obj121,list$1sNode$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mVarTable!=((void*)0)) {
        __dec_obj122=result_736->mVarTable;
        result_736->mVarTable=(struct sVarTable*)come_increment_ref_count(come_call_cloner(sVarTable_clone, self->mVarTable));
        come_call_finalizer3(__dec_obj122,sVarTable_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_736->mOmitSemicolon=self->mOmitSemicolon;
    }
    __result_obj__359 = come_increment_ref_count(result_736);
    come_call_finalizer3(result_736,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__359,sBlock_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__359;
}

static struct map$2char$phsFun$ph* map$2char$phsFun$ph$p_insert(struct map$2char$phsFun$ph* self, char* key, struct sFun* item){
unsigned int hash_755;
unsigned int it_756;
_Bool same_key_exist_757;
char* it2_758;
struct map$2char$phsFun$ph* __result_obj__371;
    if(    self->len*10>=self->size) {
        map$2char$phsFun$ph$p_rehash(self);
    }
    hash_755=string_get_hash_key(((char*)key))%self->size;
    it_756=hash_755;
    while((_Bool)1) {
        if(        self->item_existance[it_756]) {
            if(            string_equals(self->keys[it_756],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_756]);
                    (self->keys[it_756] = come_decrement_ref_count2(self->keys[it_756], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_756]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_756]);
                    self->keys[it_756]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_756],sFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_756]=(struct sFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_756]=item;
                }
                break;
            }
            it_756++;
            if(            it_756>=self->size) {
                it_756=0;
            }
            else if(            it_756==hash_755) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_756]=(_Bool)1;
            if(            1) {
                self->keys[it_756]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_756]=key;
            }
            if(            1) {
                self->items[it_756]=(struct sFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_756]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_757=(_Bool)0;
    for(    it2_758=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_758=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_758,key)) {
            same_key_exist_757=(_Bool)1;
        }
    }
    if(    !same_key_exist_757) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__371 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__371;
}

static void map$2char$phsFun$ph$p_rehash(struct map$2char$phsFun$ph* self){
int size_738;
void* __right_value538 = (void*)0;
char** keys_739;
void* __right_value539 = (void*)0;
struct sFun** items_740;
void* __right_value540 = (void*)0;
_Bool* item_existance_741;
int len_742;
char* it_745;
struct sFun* default_value_748;
void* __right_value541 = (void*)0;
struct sFun* it2_749;
unsigned int hash_752;
int n_753;
struct sFun* default_value_754;
void* __right_value542 = (void*)0;
default_value_748 = (void*)0;
default_value_754 = (void*)0;
    size_738=self->size*10;
    keys_739=(char**)come_increment_ref_count(((char**)(__right_value538=(char**)come_calloc(1, sizeof(char*)*(1*(size_738)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_740=(struct sFun**)come_increment_ref_count(((struct sFun**)(__right_value539=(struct sFun**)come_calloc(1, sizeof(struct sFun*)*(1*(size_738)), "./comelang.h", 2939, "struct sFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_741=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value540=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_738)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_742=0;
    for(    it_745=map$2char$phsFun$ph$p_begin(self);    !map$2char$phsFun$ph$p_end(self);    it_745=map$2char$phsFun$ph$p_next(self)    ){
        memset(&default_value_748,0,sizeof(struct sFun*));
        it2_749=((struct sFun*)(__right_value541=map$2char$phsFun$ph$p_at(self,it_745,(struct sFun*)come_increment_ref_count(default_value_748))));
        come_call_finalizer3(__right_value541,sFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_752=string_get_hash_key(((char*)it_745))%size_738;
        n_753=hash_752;
        while((_Bool)1) {
            if(            item_existance_741[n_753]) {
                n_753++;
                if(                n_753>=size_738) {
                    n_753=0;
                }
                else if(                n_753==hash_752) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_741[n_753]=(_Bool)1;
                keys_739[n_753]=it_745;
                items_740[n_753]=((struct sFun*)(__right_value542=map$2char$phsFun$ph$p_at(self,it_745,(struct sFun*)come_increment_ref_count(default_value_754))));
                come_call_finalizer3(__right_value542,sFun_finalize, 0, 1, 0, 0, (void*)0);
                len_742++;
                come_call_finalizer3(default_value_754,sFun_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_754,sFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_748,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_739;
    self->items=items_740;
    self->item_existance=item_existance_741;
    self->size=size_738;
    self->len=len_742;
}

static char* map$2char$phsFun$ph$p_begin(struct map$2char$phsFun$ph* self){
char* result_743;
char* __result_obj__361;
char* __result_obj__362;
char* result_744;
char* __result_obj__363;
result_743 = (void*)0;
result_744 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_743,0,sizeof(char*));
        __result_obj__361 = result_743;
        return __result_obj__361;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__362 = self->key_list->it->item;
        return __result_obj__362;
    }
    memset(&result_744,0,sizeof(char*));
    __result_obj__363 = result_744;
    return __result_obj__363;
}

static _Bool map$2char$phsFun$ph$p_end(struct map$2char$phsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsFun$ph$p_next(struct map$2char$phsFun$ph* self){
char* result_746;
char* __result_obj__364;
char* __result_obj__365;
char* result_747;
char* __result_obj__366;
result_746 = (void*)0;
result_747 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_746,0,sizeof(char*));
        __result_obj__364 = result_746;
        return __result_obj__364;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__365 = self->key_list->it->item;
        return __result_obj__365;
    }
    memset(&result_747,0,sizeof(char*));
    __result_obj__366 = result_747;
    return __result_obj__366;
}

static struct sFun* map$2char$phsFun$ph$p_at(struct map$2char$phsFun$ph* self, char* key, struct sFun* default_value){
unsigned int hash_750;
unsigned int it_751;
struct sFun* __result_obj__367;
struct sFun* __result_obj__368;
struct sFun* __result_obj__369;
struct sFun* __result_obj__370;
    hash_750=string_get_hash_key(((char*)key))%self->size;
    it_751=hash_750;
    while((_Bool)1) {
        if(        self->item_existance[it_751]) {
            if(            string_equals(self->keys[it_751],key)) {
                __result_obj__367 = come_increment_ref_count(self->items[it_751]);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__367,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__367;
            }
            it_751++;
            if(            it_751>=self->size) {
                it_751=0;
            }
            else if(            it_751==hash_750) {
                __result_obj__368 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__368,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__368;
            }
        }
        else {
            __result_obj__369 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__369,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__369;
        }
    }
    __result_obj__370 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__370,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__370;
}

struct sNode* top_level_v99(char* buf, char* head, int head_sline, struct sInfo* info){
char* source_head_849;
_Bool is_type_name_flag_850;
int sline_851;
_Bool define_struct_nobody_852;
char* p_853;
int sline_854;
void* __right_value843 = (void*)0;
char* word_855;
_Bool define_function_pointer_result_function_856;
_Bool define_variable_between_brace_857;
char* p_858;
void* __right_value844 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var18 = (void*)0;
struct sType* result_type_859=0;
char* fun_name_860=0;
_Bool err_861=0;
void* __right_value845 = (void*)0;
char* word_862;
_Bool define_function_flag_863;
char* p_864;
void* __right_value846 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var19 = (void*)0;
struct sType* result_type_865=0;
char* fun_name_866=0;
_Bool err_867=0;
char* word_868;
void* __right_value847 = (void*)0;
char* __dec_obj130;
void* __right_value848 = (void*)0;
char* __dec_obj131;
char* __dec_obj132;
void* __right_value849 = (void*)0;
char* __dec_obj133;
_Bool define_variable_869;
char* p_870;
void* __right_value850 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var20 = (void*)0;
struct sType* result_type_871=0;
char* fun_name_872=0;
_Bool err_873=0;
void* __right_value851 = (void*)0;
char* word_874;
void* __right_value852 = (void*)0;
char* word_875;
char* p_876;
void* __right_value853 = (void*)0;
void* __right_value854 = (void*)0;
void* __right_value855 = (void*)0;
char* word_877;
void* __right_value856 = (void*)0;
char* __dec_obj134;
void* __right_value857 = (void*)0;
char* word_878;
void* __right_value858 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var21 = (void*)0;
int come_exception_var_c17_881=0;
char* Err_882=0;
void* __right_value859 = (void*)0;
char* word_883;
void* __right_value860 = (void*)0;
void* __right_value861 = (void*)0;
struct sNode* node_884;
struct sNode* __result_obj__373;
void* __right_value862 = (void*)0;
struct sNode* __result_obj__374;
char* header_head_885;
void* __right_value863 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var22 = (void*)0;
struct sType* result_type_886=0;
char* fun_name_887=0;
_Bool err_888=0;
void* __right_value864 = (void*)0;
void* __right_value865 = (void*)0;
struct list$1sType$ph* param_types_889;
void* __right_value866 = (void*)0;
void* __right_value867 = (void*)0;
struct list$1char$ph* param_names_890;
void* __right_value868 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var23 = (void*)0;
struct sType* param_type_891=0;
char* param_name_892=0;
_Bool err_893=0;
void* __right_value869 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var24 = (void*)0;
int come_exception_var_c18_894=0;
char* Err_895=0;
void* __right_value870 = (void*)0;
void* __right_value871 = (void*)0;
void* __right_value872 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var25 = (void*)0;
int come_exception_var_c19_897=0;
char* Err_898=0;
void* __right_value873 = (void*)0;
void* __right_value874 = (void*)0;
struct list$1sType$ph* param_types2_899;
void* __right_value875 = (void*)0;
void* __right_value876 = (void*)0;
struct list$1char$ph* param_names2_900;
void* __right_value877 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var26 = (void*)0;
struct sType* param_type_901=0;
char* param_name_902=0;
_Bool err_903=0;
void* __right_value878 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var27 = (void*)0;
int come_exception_var_c20_904=0;
char* Err_905=0;
void* __right_value879 = (void*)0;
void* __right_value880 = (void*)0;
void* __right_value881 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var28 = (void*)0;
int come_exception_var_c21_907=0;
char* Err_908=0;
char* header_tail_909;
void* __right_value882 = (void*)0;
void* __right_value883 = (void*)0;
void* __right_value884 = (void*)0;
struct sType* result_type2_910;
struct sType* __dec_obj135;
void* __right_value885 = (void*)0;
struct list$1sType$ph* __dec_obj136;
void* __right_value886 = (void*)0;
struct list$1char$ph* __dec_obj137;
_Bool var_args_911;
void* __right_value887 = (void*)0;
void* __right_value888 = (void*)0;
struct list$1char$ph* param_default_parametors_912;
void* __right_value889 = (void*)0;
void* __right_value890 = (void*)0;
void* __right_value891 = (void*)0;
void* __right_value892 = (void*)0;
void* __right_value893 = (void*)0;
struct sFun* fun_913;
void* __right_value894 = (void*)0;
void* __right_value895 = (void*)0;
struct sFun* fun2_917;
void* __right_value896 = (void*)0;
void* __right_value897 = (void*)0;
void* __right_value898 = (void*)0;
struct sNode* _inf_value2;
struct sFunNode* _inf_obj_value2;
void* __right_value902 = (void*)0;
struct sNode* result_918;
struct sNode* __result_obj__381;
void* __right_value903 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var29 = (void*)0;
int come_exception_var_c22_920=0;
char* Err_921=0;
void* __right_value904 = (void*)0;
struct sNode* node_922;
struct sNode* __result_obj__382;
void* __right_value905 = (void*)0;
struct sNode* node_923;
struct sNode* __result_obj__383;
void* __right_value906 = (void*)0;
struct sNode* node_924;
char* source_tail_925;
void* __right_value907 = (void*)0;
void* __right_value908 = (void*)0;
struct buffer* header_926;
struct sNode* __result_obj__384;
void* __right_value909 = (void*)0;
char* buf2_927;
void* __right_value910 = (void*)0;
struct sNode* __result_obj__385;
    info->in_top_level=(_Bool)1;
    source_head_849=info->p;
    is_type_name_flag_850=is_type_name(buf,info);
    sline_851=info->sline;
    define_struct_nobody_852=(_Bool)0;
    {
        p_853=info->p;
        sline_854=info->sline;
        if(        charp_operator_equals(buf,"struct")) {
            if(            xisalpha(*info->p)||*info->p==95) {
                word_855=(char*)come_increment_ref_count(parse_word(info));
                if(                *info->p==59) {
                    define_struct_nobody_852=(_Bool)1;
                }
                (word_855 = come_decrement_ref_count2(word_855, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        info->p=head;
        info->sline=sline_854;
    }
    define_function_pointer_result_function_856=(_Bool)0;
    define_variable_between_brace_857=(_Bool)0;
    if(    is_type_name_flag_850) {
        p_858=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var18=((struct tuple3$3sType$phchar$phbool$*)(__right_value844=backtrace_parse_type((_Bool)0,info)));
            result_type_859=(struct sType*)come_increment_ref_count(multiple_assign_var18->v1);
            fun_name_860=(char*)come_increment_ref_count(multiple_assign_var18->v2);
            err_861=multiple_assign_var18->v3;
            come_call_finalizer3(__right_value844,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p!=42) {
                    define_function_pointer_result_function_856=(_Bool)1;
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_862=(char*)come_increment_ref_count(parse_word(info));
                        if(                        !is_type_name(word_862,info)&&*info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                            }
                            else {
                                define_variable_between_brace_857=(_Bool)1;
                            }
                        }
                        (word_862 = come_decrement_ref_count2(word_862, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
            }
            come_call_finalizer3(result_type_859,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_860 = come_decrement_ref_count2(fun_name_860, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=head;
        info->sline=sline_851;
    }
    define_function_flag_863=(_Bool)0;
    if(    is_type_name_flag_850&&!define_function_pointer_result_function_856&&charp_operator_not_equals(buf,"__typeof__")) {
        p_864=info->p;
        info->p=head;
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var19=((struct tuple3$3sType$phchar$phbool$*)(__right_value846=backtrace_parse_type((_Bool)0,info)));
            result_type_865=(struct sType*)come_increment_ref_count(multiple_assign_var19->v1);
            fun_name_866=(char*)come_increment_ref_count(multiple_assign_var19->v2);
            err_867=multiple_assign_var19->v3;
            come_call_finalizer3(__right_value846,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            come_call_finalizer3(result_type_865,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_866 = come_decrement_ref_count2(fun_name_866, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        !info->define_struct) {
            info->define_struct=(_Bool)0;
            word_868=((void*)0);
            if(            xisalnum(*info->p)||*info->p==95) {
                __dec_obj130=word_868;
                word_868=(char*)come_increment_ref_count(parse_word(info));
                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                if(                string_operator_equals(word_868,"extern")) {
                    __dec_obj131=word_868;
                    word_868=(char*)come_increment_ref_count(parse_word(info));
                    __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
                }
            }
            else {
                __dec_obj132=word_868;
                word_868=((void*)0);
                __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            info->no_output_err=(_Bool)0;
            if(            word_868) {
                if(                is_type_name(word_868,info)) {
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
                        __dec_obj133=word_868;
                        word_868=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
                    }
                }
                if(                strlen(word_868)>0&&(*info->p==40||(*info->p==58&&*(info->p+1)==58))) {
                    if(                    is_type_name_flag_850) {
                        define_function_flag_863=(_Bool)1;
                    }
                }
            }
            (word_868 = come_decrement_ref_count2(word_868, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        info->p=p_864;
        info->sline=sline_851;
    }
    define_variable_869=(_Bool)1;
    if(    is_type_name_flag_850&&!define_function_pointer_result_function_856) {
        p_870=info->p;
        info->p=head;
        if(        !is_type_name_flag_850) {
            define_variable_869=(_Bool)0;
        }
        if(        xisalpha(*info->p)||*info->p==95) {
            multiple_assign_var20=((struct tuple3$3sType$phchar$phbool$*)(__right_value850=backtrace_parse_type((_Bool)0,info)));
            result_type_871=(struct sType*)come_increment_ref_count(multiple_assign_var20->v1);
            fun_name_872=(char*)come_increment_ref_count(multiple_assign_var20->v2);
            err_873=multiple_assign_var20->v3;
            come_call_finalizer3(__right_value850,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                if(                *info->p==42) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        word_874=(char*)come_increment_ref_count(parse_word(info));
                        if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            if(                            *info->p==40) {
                                define_variable_869=(_Bool)1;
                            }
                        }
                        (word_874 = come_decrement_ref_count2(word_874, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                else if(                xisalpha(*info->p)||*info->p==95) {
                    word_875=(char*)come_increment_ref_count(parse_word(info));
                    if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        if(                        !is_type_name(word_875,info)&&*info->p!=40) {
                            define_variable_869=(_Bool)1;
                        }
                    }
                    (word_875 = come_decrement_ref_count2(word_875, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            come_call_finalizer3(result_type_871,sType_finalize, 0, 0, 0, 0, (void*)0);
            (fun_name_872 = come_decrement_ref_count2(fun_name_872, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_869=(_Bool)0;
        }
        else if(        define_variable_869) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_869=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_869=(_Bool)0;
            }
        }
        info->p=p_870;
        info->sline=sline_851;
    }
    else {
        define_variable_869=(_Bool)0;
    }
    if(    !define_function_pointer_result_function_856) {
        p_876=info->p;
        info->p=head;
        if(        charp_operator_equals(buf,"struct")) {
            ((char*)(__right_value853=parse_struct_attribute(info)));
            (__right_value853 = come_decrement_ref_count2(__right_value853, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            xisalpha(*info->p)||*info->p==95) {
                ((char*)(__right_value854=parse_word(info)));
                (__right_value854 = come_decrement_ref_count2(__right_value854, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                xisalpha(*info->p)||*info->p==95) {
                    word_877=(char*)come_increment_ref_count(parse_word(info));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        __dec_obj134=word_877;
                        word_877=(char*)come_increment_ref_count(parse_word(info));
                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                        if(                        string_operator_equals(word_877,"extends")) {
                            define_variable_869=(_Bool)0;
                        }
                    }
                    (word_877 = come_decrement_ref_count2(word_877, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        if(        info->define_struct) {
            info->define_struct=(_Bool)0;
            define_variable_869=(_Bool)0;
        }
        else if(        define_variable_869) {
        }
        else {
            if(            !(xisalpha(*info->p)||*info->p==95)) {
                define_variable_869=(_Bool)0;
            }
            while(xisalpha(*info->p)||*info->p==95) {
                info->p++;
            }
            skip_spaces_and_lf(info);
            if(            *info->p==40||*info->p==58) {
                define_variable_869=(_Bool)0;
            }
        }
        info->p=p_876;
        info->sline=sline_851;
    }
    if(    charp_operator_equals(buf,"template")) {
        word_878=(char*)come_increment_ref_count(parse_word(info));
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
                    multiple_assign_var21=((struct tuple2$2int$char$ph*)(__right_value858=err_msg(info,"unexpected source end")));
                    come_exception_var_c17_881=multiple_assign_var21->v1;
                    Err_882=(char*)come_increment_ref_count(multiple_assign_var21->v2);
                    ((Err_882)?(puts(Err_882),exit(0)):(0));
                    come_call_finalizer3(__right_value858,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    exit(2);
                    (Err_882 = come_decrement_ref_count2(Err_882, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    word_883=(char*)come_increment_ref_count(parse_word(info));
                    list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, word_883)));
                    (word_883 = come_decrement_ref_count2(word_883, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            node_884=(struct sNode*)come_increment_ref_count(parse_function(info));
            list$1char$ph$p_reset(info->method_generics_type_names);
            __result_obj__373 = come_increment_ref_count(node_884);
            ((node_884) ? node_884 = come_decrement_ref_count2(node_884, ((struct sNode*)node_884)->finalize, ((struct sNode*)node_884)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (word_878 = come_decrement_ref_count2(word_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            ((__result_obj__373) ? __result_obj__373 = come_decrement_ref_count2(__result_obj__373, ((struct sNode*)__result_obj__373)->finalize, ((struct sNode*)__result_obj__373)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__373;
            ((node_884) ? node_884 = come_decrement_ref_count2(node_884, ((struct sNode*)node_884)->finalize, ((struct sNode*)node_884)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        (word_878 = come_decrement_ref_count2(word_878, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"enum")&&*info->p==123) {
    }
    else if(    define_struct_nobody_852) {
    }
    else if(    define_variable_between_brace_857) {
        info->p=head;
        info->sline=sline_851;
        __result_obj__374 = come_increment_ref_count(((struct sNode*)(__right_value862=parse_global_variable(info))));
        ((__right_value862) ? __right_value862 = come_decrement_ref_count2(__right_value862, ((struct sNode*)__right_value862)->finalize, ((struct sNode*)__right_value862)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__374) ? __result_obj__374 = come_decrement_ref_count2(__result_obj__374, ((struct sNode*)__result_obj__374)->finalize, ((struct sNode*)__result_obj__374)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__374;
    }
    else if(    define_function_pointer_result_function_856) {
        header_head_885=info->p;
        multiple_assign_var22=((struct tuple3$3sType$phchar$phbool$*)(__right_value863=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type_886=(struct sType*)come_increment_ref_count(multiple_assign_var22->v1);
        fun_name_887=(char*)come_increment_ref_count(multiple_assign_var22->v2);
        err_888=multiple_assign_var22->v3;
        come_call_finalizer3(__right_value863,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        *info->p==40) {
            info->p++;
            skip_spaces_and_lf(info);
            param_types_889=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2016, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            param_names_890=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2017, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            if(            *info->p==41) {
                info->p++;
                skip_spaces_and_lf(info);
            }
            else {
                while((_Bool)1) {
                    multiple_assign_var23=((struct tuple3$3sType$phchar$phbool$*)(__right_value868=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                    param_type_891=(struct sType*)come_increment_ref_count(multiple_assign_var23->v1);
                    param_name_892=(char*)come_increment_ref_count(multiple_assign_var23->v2);
                    err_893=multiple_assign_var23->v3;
                    come_call_finalizer3(__right_value868,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                    if(                    !err_893) {
                        multiple_assign_var24=((struct tuple2$2int$char$ph*)(__right_value869=err_msg(info,"parse_type is failed")));
                        come_exception_var_c18_894=multiple_assign_var24->v1;
                        Err_895=(char*)come_increment_ref_count(multiple_assign_var24->v2);
                        ((Err_895)?(puts(Err_895),exit(0)):(0));
                        come_call_finalizer3(__right_value869,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_895 = come_decrement_ref_count2(Err_895, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    list$1sType$ph$p_push_back(param_types_889,(struct sType*)come_increment_ref_count(param_type_891));
                    static int num_function_pointer_result_var_name_a_896=0;
                    list$1char$ph$p_push_back(param_names_890,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_a%d",++num_function_pointer_result_var_name_a_896)));
                    if(                    xisalpha(*info->p)||*info->p==95) {
                        (void)((char*)(__right_value871=parse_word(info)));
                        (__right_value871 = come_decrement_ref_count2(__right_value871, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    *info->p==44) {
                        info->p++;
                        skip_spaces_and_lf(info);
                    }
                    else if(                    *info->p==41) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        come_call_finalizer3(param_type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_892 = come_decrement_ref_count2(param_name_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        break;
                    }
                    else {
                        multiple_assign_var25=((struct tuple2$2int$char$ph*)(__right_value872=err_msg(info,"require , or ) (1) it is %c",*info->p)));
                        come_exception_var_c19_897=multiple_assign_var25->v1;
                        Err_898=(char*)come_increment_ref_count(multiple_assign_var25->v2);
                        ((Err_898)?(puts(Err_898),exit(0)):(0));
                        come_call_finalizer3(__right_value872,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                        exit(2);
                        (Err_898 = come_decrement_ref_count2(Err_898, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    come_call_finalizer3(param_type_891,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_892 = come_decrement_ref_count2(param_name_892, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            expected_next_character(41,info);
            if(            *info->p==40) {
                info->p++;
                skip_spaces_and_lf(info);
                param_types2_899=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2063, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                param_names2_900=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2064, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                if(                *info->p==41) {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else {
                    while((_Bool)1) {
                        multiple_assign_var26=((struct tuple3$3sType$phchar$phbool$*)(__right_value877=parse_type(info,(_Bool)0,(_Bool)0,(_Bool)0)));
                        param_type_901=(struct sType*)come_increment_ref_count(multiple_assign_var26->v1);
                        param_name_902=(char*)come_increment_ref_count(multiple_assign_var26->v2);
                        err_903=multiple_assign_var26->v3;
                        come_call_finalizer3(__right_value877,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                        if(                        !err_903) {
                            multiple_assign_var27=((struct tuple2$2int$char$ph*)(__right_value878=err_msg(info,"parse_type is failed")));
                            come_exception_var_c20_904=multiple_assign_var27->v1;
                            Err_905=(char*)come_increment_ref_count(multiple_assign_var27->v2);
                            ((Err_905)?(puts(Err_905),exit(0)):(0));
                            come_call_finalizer3(__right_value878,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_905 = come_decrement_ref_count2(Err_905, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        list$1sType$ph$p_push_back(param_types2_899,(struct sType*)come_increment_ref_count(param_type_901));
                        static int num_function_pointer_result_var_name_b_906=0;
                        list$1char$ph$p_push_back(param_names2_900,(char*)come_increment_ref_count(xsprintf("_function_pointer_result_var_name_b%d",++num_function_pointer_result_var_name_b_906)));
                        if(                        xisalpha(*info->p)||*info->p==95) {
                            (void)((char*)(__right_value880=parse_word(info)));
                            (__right_value880 = come_decrement_ref_count2(__right_value880, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        if(                        *info->p==44) {
                            info->p++;
                            skip_spaces_and_lf(info);
                        }
                        else if(                        *info->p==41) {
                            info->p++;
                            skip_spaces_and_lf(info);
                            come_call_finalizer3(param_type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
                            (param_name_902 = come_decrement_ref_count2(param_name_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                            break;
                        }
                        else {
                            multiple_assign_var28=((struct tuple2$2int$char$ph*)(__right_value881=err_msg(info,"require , or ) (2)")));
                            come_exception_var_c21_907=multiple_assign_var28->v1;
                            Err_908=(char*)come_increment_ref_count(multiple_assign_var28->v2);
                            ((Err_908)?(puts(Err_908),exit(0)):(0));
                            come_call_finalizer3(__right_value881,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                            exit(2);
                            (Err_908 = come_decrement_ref_count2(Err_908, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                        }
                        come_call_finalizer3(param_type_901,sType_finalize, 0, 0, 0, 0, (void*)0);
                        (param_name_902 = come_decrement_ref_count2(param_name_902, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                }
                header_tail_909=info->p;
                result_type2_910=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2106, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("lambda")),(_Bool)0,info));
                __dec_obj135=result_type2_910->mResultType;
                result_type2_910->mResultType=(struct sType*)come_increment_ref_count(result_type_886);
                come_call_finalizer3(__dec_obj135,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj136=result_type2_910->mParamTypes;
                result_type2_910->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types2_899));
                come_call_finalizer3(__dec_obj136,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                __dec_obj137=result_type2_910->mParamNames;
                result_type2_910->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, param_names2_900));
                come_call_finalizer3(__dec_obj137,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
                result_type2_910->mVarArgs=(_Bool)0;
                result_type2_910->mStatic=(_Bool)0;
                var_args_911=(_Bool)0;
                param_default_parametors_912=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2116, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
                fun_913=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2118, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_887)),(struct sType*)come_increment_ref_count(result_type2_910),(struct list$1sType$ph*)come_increment_ref_count(param_types_889),(struct list$1char$ph*)come_increment_ref_count(param_names_890),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_912),(_Bool)1,var_args_911,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                fun2_917=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value894=__builtin_string(fun_name_887)))));
                (__right_value894 = come_decrement_ref_count2(__right_value894, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                if(                fun2_917==((void*)0)||fun2_917->mExternal) {
                    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_887)),(struct sFun*)come_increment_ref_count(fun_913));
                }
                _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2131, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value2=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value898=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2131, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_913),info))));
                _inf_value2->_protocol_obj=_inf_obj_value2;
                _inf_value2->finalize=(void*)sFunNode_finalize;
                _inf_value2->clone=(void*)sFunNode_clone;
                _inf_value2->compile=(void*)sFunNode_compile;
                _inf_value2->sline=(void*)sNodeBase_sline;
                _inf_value2->sline_real=(void*)sNodeBase_sline_real;
                _inf_value2->sname=(void*)sNodeBase_sname;
                _inf_value2->terminated=(void*)sNodeBase_terminated;
                _inf_value2->kind=(void*)sFunNode_kind;
                result_918=(struct sNode*)come_increment_ref_count(_inf_value2);
                come_call_finalizer3(__right_value898,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                __result_obj__381 = come_increment_ref_count(result_918);
                come_call_finalizer3(param_types2_899,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_900,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_910,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_912,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_913,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_917,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_918) ? result_918 = come_decrement_ref_count2(result_918, ((struct sNode*)result_918)->finalize, ((struct sNode*)result_918)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                come_call_finalizer3(param_types_889,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names_890,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type_886,sType_finalize, 0, 0, 0, 0, (void*)0);
                (fun_name_887 = come_decrement_ref_count2(fun_name_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                ((__result_obj__381) ? __result_obj__381 = come_decrement_ref_count2(__result_obj__381, ((struct sNode*)__result_obj__381)->finalize, ((struct sNode*)__result_obj__381)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
                return __result_obj__381;
                come_call_finalizer3(param_types2_899,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_names2_900,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(result_type2_910,sType_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(param_default_parametors_912,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun_913,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(fun2_917,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((result_918) ? result_918 = come_decrement_ref_count2(result_918, ((struct sNode*)result_918)->finalize, ((struct sNode*)result_918)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                multiple_assign_var29=((struct tuple2$2int$char$ph*)(__right_value903=err_msg(info,"require (")));
                come_exception_var_c22_920=multiple_assign_var29->v1;
                Err_921=(char*)come_increment_ref_count(multiple_assign_var29->v2);
                ((Err_921)?(puts(Err_921),exit(0)):(0));
                come_call_finalizer3(__right_value903,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_921 = come_decrement_ref_count2(Err_921, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            come_call_finalizer3(param_types_889,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_890,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(result_type_886,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_887 = come_decrement_ref_count2(fun_name_887, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    charp_operator_equals(buf,"__attribute__")) {
        info->p=head;
        info->sline=sline_851;
        node_922=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__382 = come_increment_ref_count(node_922);
        ((node_922) ? node_922 = come_decrement_ref_count2(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__382) ? __result_obj__382 = come_decrement_ref_count2(__result_obj__382, ((struct sNode*)__result_obj__382)->finalize, ((struct sNode*)__result_obj__382)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__382;
        ((node_922) ? node_922 = come_decrement_ref_count2(node_922, ((struct sNode*)node_922)->finalize, ((struct sNode*)node_922)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_function_flag_863) {
        info->p=head;
        info->sline=sline_851;
        node_923=(struct sNode*)come_increment_ref_count(parse_function(info));
        __result_obj__383 = come_increment_ref_count(node_923);
        ((node_923) ? node_923 = come_decrement_ref_count2(node_923, ((struct sNode*)node_923)->finalize, ((struct sNode*)node_923)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__383) ? __result_obj__383 = come_decrement_ref_count2(__result_obj__383, ((struct sNode*)__result_obj__383)->finalize, ((struct sNode*)__result_obj__383)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__383;
        ((node_923) ? node_923 = come_decrement_ref_count2(node_923, ((struct sNode*)node_923)->finalize, ((struct sNode*)node_923)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    define_variable_869) {
        info->p=head;
        info->sline=sline_851;
        node_924=(struct sNode*)come_increment_ref_count(parse_global_variable(info));
        source_tail_925=info->p;
        header_926=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2165, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append(header_926,source_head_849,source_tail_925-source_head_849);
        __result_obj__384 = come_increment_ref_count(node_924);
        ((node_924) ? node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_926,buffer_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__384) ? __result_obj__384 = come_decrement_ref_count2(__result_obj__384, ((struct sNode*)__result_obj__384)->finalize, ((struct sNode*)__result_obj__384)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__384;
        ((node_924) ? node_924 = come_decrement_ref_count2(node_924, ((struct sNode*)node_924)->finalize, ((struct sNode*)node_924)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(header_926,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->p=head;
    info->sline=sline_851;
    buf2_927=(char*)come_increment_ref_count(parse_word(info));
    __result_obj__385 = come_increment_ref_count(((struct sNode*)(__right_value910=top_level_v98(buf2_927,head,head_sline,info))));
    (buf2_927 = come_decrement_ref_count2(buf2_927, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    ((__right_value910) ? __right_value910 = come_decrement_ref_count2(__right_value910, ((struct sNode*)__right_value910)->finalize, ((struct sNode*)__right_value910)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    ((__result_obj__385) ? __result_obj__385 = come_decrement_ref_count2(__result_obj__385, ((struct sNode*)__result_obj__385)->finalize, ((struct sNode*)__result_obj__385)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__385;
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
struct list_item$1char$ph* it_879;
struct list_item$1char$ph* prev_it_880;
struct list$1char$ph* __result_obj__372;
    it_879=self->head;
    while(it_879!=((void*)0)) {
        prev_it_880=it_879;
        it_879=it_879->next;
        come_call_finalizer3(prev_it_880,list_item$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    }
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    __result_obj__372 = self;
    return __result_obj__372;
}

static struct sFun* map$2char$phsFun$ph$p_operator_load_element(struct map$2char$phsFun$ph* self, char* key){
struct sFun* default_value_914;
unsigned int hash_915;
unsigned int it_916;
struct sFun* __result_obj__375;
struct sFun* __result_obj__376;
struct sFun* __result_obj__377;
struct sFun* __result_obj__378;
default_value_914 = (void*)0;
    memset(&default_value_914,0,sizeof(struct sFun*));
    hash_915=string_get_hash_key(((char*)key))%self->size;
    it_916=hash_915;
    while((_Bool)1) {
        if(        self->item_existance[it_916]) {
            if(            string_equals(self->keys[it_916],key)) {
                __result_obj__375 = come_increment_ref_count(self->items[it_916]);
                come_call_finalizer3(default_value_914,sFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__375,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__375;
            }
            it_916++;
            if(            it_916>=self->size) {
                it_916=0;
            }
            else if(            it_916==hash_915) {
                __result_obj__376 = come_increment_ref_count(default_value_914);
                come_call_finalizer3(default_value_914,sFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__376,sFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__376;
            }
        }
        else {
            __result_obj__377 = come_increment_ref_count(default_value_914);
            come_call_finalizer3(default_value_914,sFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__377,sFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__377;
        }
    }
    __result_obj__378 = come_increment_ref_count(default_value_914);
    come_call_finalizer3(default_value_914,sFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__378,sFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__378;
}

static struct sFunNode* sFunNode_clone(struct sFunNode* self){
struct sFunNode* __result_obj__379;
void* __right_value899 = (void*)0;
struct sFunNode* result_919;
void* __right_value900 = (void*)0;
char* __dec_obj138;
void* __right_value901 = (void*)0;
struct sFun* __dec_obj139;
struct sFunNode* __result_obj__380;
    if(    self==(void*)0) {
        __result_obj__379 = (void*)0;
        return __result_obj__379;
    }
    result_919=(struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "sFunNode_clone", 3, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_919->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj138=result_919->sname;
        result_919->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_919->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)&&self->mFun!=((void*)0)) {
        __dec_obj139=result_919->mFun;
        result_919->mFun=(struct sFun*)come_increment_ref_count(come_call_cloner(sFun_clone, self->mFun));
        come_call_finalizer3(__dec_obj139,sFun_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    __result_obj__380 = result_919;
    come_call_finalizer3(result_919,sFunNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__380;
}

struct tuple2$2char$phbool$* create_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sType* generics_type, struct sInfo* info){
struct sFun* caller_fun_928;
int caller_line_929;
char* caller_sname_930;
_Bool comma_instead_of_semicolon_931;
char* last_code_932;
char* __dec_obj140;
char* last_code2_933;
char* __dec_obj141;
void* __right_value911 = (void*)0;
char* sname_top_934;
int sline_top_935;
void* __right_value912 = (void*)0;
void* __right_value913 = (void*)0;
struct sFun* funX_936;
void* __right_value916 = (void*)0;
void* __right_value917 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__389;
void* __right_value918 = (void*)0;
struct sType* result_type_939;
void* __right_value919 = (void*)0;
void* __right_value920 = (void*)0;
struct list$1sType$ph* param_types_940;
struct list$1sType$ph* o2_saved_941;
struct sType* it_944;
void* __right_value921 = (void*)0;
void* __right_value922 = (void*)0;
struct sType* param_type_947;
void* __right_value923 = (void*)0;
void* __right_value924 = (void*)0;
struct list$1char$ph* param_names_948;
void* __right_value925 = (void*)0;
struct list$1char$ph* param_default_parametors_949;
char* p_950;
int sline_951;
char* sname_952;
char* head_953;
struct buffer* source_954;
void* __right_value926 = (void*)0;
struct buffer* __dec_obj144;
struct sType* generics_type_saved_955;
void* __right_value927 = (void*)0;
struct sType* __dec_obj145;
struct list$1char$ph* method_generics_type_names_956;
void* __right_value928 = (void*)0;
void* __right_value929 = (void*)0;
struct list$1char$ph* __dec_obj146;
struct list$1char$ph* o2_saved_957;
char* it_958;
void* __right_value930 = (void*)0;
void* __right_value931 = (void*)0;
struct list$1char$ph* __dec_obj147;
char* __dec_obj148;
void* __right_value932 = (void*)0;
struct sBlock* block_959;
struct buffer* __dec_obj149;
char* __dec_obj150;
_Bool var_args_960;
void* __right_value933 = (void*)0;
void* __right_value934 = (void*)0;
void* __right_value935 = (void*)0;
void* __right_value936 = (void*)0;
struct sFun* fun_961;
void* __right_value937 = (void*)0;
void* __right_value938 = (void*)0;
void* __right_value939 = (void*)0;
struct sNode* _inf_value3;
struct sFunNode* _inf_obj_value3;
void* __right_value940 = (void*)0;
struct sNode* node_962;
_Bool in_generics_fun_963;
_Bool Value_964;
void* __right_value941 = (void*)0;
void* __right_value942 = (void*)0;
void* __right_value943 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__396;
struct sType* __dec_obj151;
struct list$1char$ph* __dec_obj152;
void* __right_value944 = (void*)0;
char* __dec_obj153;
char* __dec_obj154;
char* __dec_obj155;
void* __right_value945 = (void*)0;
void* __right_value946 = (void*)0;
void* __right_value947 = (void*)0;
struct tuple2$2char$phbool$* __result_obj__397;
    caller_fun_928=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_929=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_930=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_931=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_932=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj140=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_933=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj141=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_934=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_935=info->sline;
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    funX_936=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value912=__builtin_string(fun_name)))));
    (__right_value912 = come_decrement_ref_count2(__right_value912, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    if(    funX_936) {
        __result_obj__389 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value917=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2204, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(fun_name),(_Bool)1))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_932 = come_decrement_ref_count2(last_code_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_933 = come_decrement_ref_count2(last_code2_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_934 = come_decrement_ref_count2(sname_top_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_936,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value917,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__389,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__389;
    }
    result_type_939=(struct sType*)come_increment_ref_count(solve_generics(generics_fun->mResultType,generics_type,info));
    param_types_940=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2210, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_941=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_944=list$1sType$ph$p_begin((o2_saved_941));    !list$1sType$ph$p_end((o2_saved_941));    it_944=list$1sType$ph$p_next((o2_saved_941))    ){
        param_type_947=(struct sType*)come_increment_ref_count(solve_generics(((struct sType*)(__right_value921=come_call_cloner(sType_clone, it_944))),generics_type,info));
        come_call_finalizer3(__right_value921,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_add(param_types_940,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_947)));
        come_call_finalizer3(param_type_947,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_941,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_948=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_949=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_950=info->p;
    sline_951=info->sline;
    sname_952=(char*)come_increment_ref_count(info->sname);
    head_953=info->head;
    source_954=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj144=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj144,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    generics_type_saved_955=(struct sType*)come_increment_ref_count(info->generics_type);
    if(    generics_type->mNoSolvedGenericsType) {
        generics_type=generics_type->mNoSolvedGenericsType;
    }
    __dec_obj145=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, generics_type));
    come_call_finalizer3(__dec_obj145,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    method_generics_type_names_956=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj146=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2238, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj146,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_957=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_958=list$1char$ph$p_begin((o2_saved_957));    !list$1char$ph$p_end((o2_saved_957));    it_958=list$1char$ph$p_next((o2_saved_957))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_958)));
    }
    come_call_finalizer3(o2_saved_957,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj147=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj147,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj148=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_959=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_953;
    __dec_obj149=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_954);
    come_call_finalizer3(__dec_obj149,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_950;
    info->sline=sline_951;
    __dec_obj150=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_952);
    __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_939->mInline=(_Bool)0;
    result_type_939->mStatic=(_Bool)0;
    result_type_939->mUniq=(_Bool)0;
    var_args_960=generics_fun->mVarArgs;
    fun_961=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2262, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_939),(struct list$1sType$ph*)come_increment_ref_count(param_types_940),(struct list$1char$ph*)come_increment_ref_count(param_names_948),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_949),(_Bool)0,var_args_960,(struct sBlock*)come_increment_ref_count(block_959),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_961));
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2269, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value3=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value939=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2269, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_961),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFunNode_finalize;
    _inf_value3->clone=(void*)sFunNode_clone;
    _inf_value3->compile=(void*)sFunNode_compile;
    _inf_value3->sline=(void*)sNodeBase_sline;
    _inf_value3->sline_real=(void*)sNodeBase_sline_real;
    _inf_value3->sname=(void*)sNodeBase_sname;
    _inf_value3->terminated=(void*)sNodeBase_terminated;
    _inf_value3->kind=(void*)sFunNode_kind;
    node_962=(struct sNode*)come_increment_ref_count(_inf_value3);
    come_call_finalizer3(__right_value939,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    in_generics_fun_963=info->in_generics_fun;
    info->in_generics_fun=(_Bool)1;
    Value_964=node_compile(node_962,info);
    if(    !Value_964) {
        __result_obj__396 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value943=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2274, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(xsprintf("")),(_Bool)0))));
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_932 = come_decrement_ref_count2(last_code_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_933 = come_decrement_ref_count2(last_code2_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_934 = come_decrement_ref_count2(sname_top_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(funX_936,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_939,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_940,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_952 = come_decrement_ref_count2(sname_952, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_954,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(generics_type_saved_955,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_959,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_961,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_962) ? node_962 = come_decrement_ref_count2(node_962, ((struct sNode*)node_962)->finalize, ((struct sNode*)node_962)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        come_call_finalizer3(__right_value943,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__396,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__396;
    }
    else {
    }
    info->in_generics_fun=in_generics_fun_963;
    __dec_obj151=info->generics_type;
    info->generics_type=(struct sType*)come_increment_ref_count(generics_type_saved_955);
    come_call_finalizer3(__dec_obj151,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    __dec_obj152=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_956);
    come_call_finalizer3(__dec_obj152,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj153=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_934));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_935;
    __dec_obj154=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_932);
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj155=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_933);
    __dec_obj155 = come_decrement_ref_count2(__dec_obj155, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_928;
    info->caller_line=caller_line_929;
    info->caller_sname=caller_sname_930;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_931;
    __result_obj__397 = come_increment_ref_count(((struct tuple2$2char$phbool$*)(__right_value947=tuple2$2char$phbool$_initialize((struct tuple2$2char$phbool$**)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "05function.c", 2294, "struct tuple2$2char$phbool$", tuple2$2char$phbool$_finalize, tuple2$2char$phbool$_clone, tuple2$2char$phbool$_get_hash_key, tuple2$2char$phbool$_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name)),(_Bool)1))));
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_932 = come_decrement_ref_count2(last_code_932, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_933 = come_decrement_ref_count2(last_code2_933, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_934 = come_decrement_ref_count2(sname_top_934, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(funX_936,sFun_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(result_type_939,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_940,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_948,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_949,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_952 = come_decrement_ref_count2(sname_952, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_954,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(generics_type_saved_955,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_956,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_959,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_961,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_962) ? node_962 = come_decrement_ref_count2(node_962, ((struct sNode*)node_962)->finalize, ((struct sNode*)node_962)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    come_call_finalizer3(__right_value947,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__397,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__397;
}

static void tuple2$2char$phbool$_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2char$phbool$* tuple2$2char$phbool$_clone(struct tuple2$2char$phbool$* self){
struct tuple2$2char$phbool$* __result_obj__386;
void* __right_value914 = (void*)0;
struct tuple2$2char$phbool$* result_937;
void* __right_value915 = (void*)0;
char* __dec_obj142;
struct tuple2$2char$phbool$* __result_obj__387;
    if(    self==(void*)0) {
        __result_obj__386 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__386,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__386;
    }
    result_937=(struct tuple2$2char$phbool$*)come_increment_ref_count((struct tuple2$2char$phbool$*)come_calloc(1, sizeof(struct tuple2$2char$phbool$)*(1), "tuple2$2char$phbool$_clone", 3, "struct tuple2$2char$phbool$*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        __dec_obj142=result_937->v1;
        result_937->v1=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v1));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_937->v2=self->v2;
    }
    __result_obj__387 = come_increment_ref_count(result_937);
    come_call_finalizer3(result_937,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__387,tuple2$2char$phbool$_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__387;
}

static unsigned int tuple2$2char$phbool$_get_hash_key(struct tuple2$2char$phbool$* self){
unsigned int result_938;
    result_938=0;
    result_938+=int_get_hash_key(((int)self->v1));
    result_938+=int_get_hash_key(((int)self->v2));
    return result_938;
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
char* __dec_obj143;
struct tuple2$2char$phbool$* __result_obj__388;
    __dec_obj143=self->v1;
    self->v1=(char*)come_increment_ref_count(v1);
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    self->v2=v2;
    __result_obj__388 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    (v1 = come_decrement_ref_count2(v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__388,tuple2$2char$phbool$$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__388;
}

static void tuple2$2char$phbool$$p_finalize(struct tuple2$2char$phbool$* self){
    if(    self!=((void*)0)&&self->v1!=((void*)0)) {
        (self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct sType* list$1sType$ph$p_begin(struct list$1sType$ph* self){
struct sType* result_942;
struct sType* __result_obj__390;
struct sType* __result_obj__391;
struct sType* result_943;
struct sType* __result_obj__392;
result_942 = (void*)0;
result_943 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_942,0,sizeof(struct sType*));
        __result_obj__390 = result_942;
        return __result_obj__390;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__391 = self->it->item;
        return __result_obj__391;
    }
    memset(&result_943,0,sizeof(struct sType*));
    __result_obj__392 = result_943;
    return __result_obj__392;
}

static _Bool list$1sType$ph$p_end(struct list$1sType$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct sType* list$1sType$ph$p_next(struct list$1sType$ph* self){
struct sType* result_945;
struct sType* __result_obj__393;
struct sType* __result_obj__394;
struct sType* result_946;
struct sType* __result_obj__395;
result_945 = (void*)0;
result_946 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_945,0,sizeof(struct sType*));
        __result_obj__393 = result_945;
        return __result_obj__393;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__394 = self->it->item;
        return __result_obj__394;
    }
    memset(&result_946,0,sizeof(struct sType*));
    __result_obj__395 = result_946;
    return __result_obj__395;
}

_Bool create_method_generics_fun(char* fun_name, struct sGenericsFun* generics_fun, struct sInfo* info){
struct sFun* caller_fun_965;
int caller_line_966;
char* caller_sname_967;
_Bool comma_instead_of_semicolon_968;
char* last_code_969;
char* __dec_obj156;
char* last_code2_970;
char* __dec_obj157;
void* __right_value948 = (void*)0;
char* sname_top_971;
int sline_top_972;
void* __right_value949 = (void*)0;
void* __right_value950 = (void*)0;
struct sFun* funX_973;
_Bool __result_obj__398;
void* __right_value951 = (void*)0;
struct sType* result_type_974;
void* __right_value952 = (void*)0;
void* __right_value953 = (void*)0;
struct list$1sType$ph* param_types_975;
struct list$1sType$ph* o2_saved_976;
struct sType* it_977;
void* __right_value954 = (void*)0;
void* __right_value955 = (void*)0;
struct sType* param_type_978;
void* __right_value956 = (void*)0;
void* __right_value957 = (void*)0;
struct list$1char$ph* param_names_979;
void* __right_value958 = (void*)0;
struct list$1char$ph* param_default_parametors_980;
char* p_981;
int sline_982;
char* sname_983;
char* head_984;
struct buffer* source_985;
void* __right_value959 = (void*)0;
struct buffer* __dec_obj158;
struct list$1char$ph* method_generics_type_names_986;
void* __right_value960 = (void*)0;
void* __right_value961 = (void*)0;
struct list$1char$ph* __dec_obj159;
struct list$1char$ph* o2_saved_987;
char* it_988;
void* __right_value962 = (void*)0;
void* __right_value963 = (void*)0;
struct list$1char$ph* __dec_obj160;
char* __dec_obj161;
void* __right_value964 = (void*)0;
struct sBlock* block_989;
struct buffer* __dec_obj162;
char* __dec_obj163;
_Bool generate__990;
_Bool var_args_991;
void* __right_value965 = (void*)0;
void* __right_value966 = (void*)0;
void* __right_value967 = (void*)0;
void* __right_value968 = (void*)0;
void* __right_value969 = (void*)0;
struct sFun* fun_992;
void* __right_value970 = (void*)0;
void* __right_value971 = (void*)0;
void* __right_value972 = (void*)0;
struct sNode* _inf_value4;
struct sFunNode* _inf_obj_value4;
void* __right_value973 = (void*)0;
struct sNode* node_993;
_Bool Value_994;
void* __if_result__1_995 = (void*)0;
_Bool __result_obj__399;
struct list$1char$ph* __dec_obj164;
void* __right_value974 = (void*)0;
char* __dec_obj165;
char* __dec_obj166;
char* __dec_obj167;
_Bool __result_obj__400;
    caller_fun_965=info->caller_fun;
    info->caller_fun=info->come_fun;
    caller_line_966=info->caller_line;
    info->caller_line=info->sline;
    caller_sname_967=info->caller_sname;
    info->caller_sname=info->sname;
    comma_instead_of_semicolon_968=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    last_code_969=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj156=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_970=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj157=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
    sname_top_971=(char*)come_increment_ref_count(__builtin_string(info->sname));
    sline_top_972=info->sline;
    funX_973=((struct sFun*)(__right_value950=map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value949=__builtin_string(fun_name))))));
    (__right_value949 = come_decrement_ref_count2(__right_value949, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value950,sFun_finalize, 0, 1, 0, 0, (void*)0);
    if(    funX_973) {
        __result_obj__398 = (_Bool)1;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_969 = come_decrement_ref_count2(last_code_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_970 = come_decrement_ref_count2(last_code2_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_971 = come_decrement_ref_count2(sname_top_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        return __result_obj__398;
    }
    result_type_974=(struct sType*)come_increment_ref_count(solve_method_generics(generics_fun->mResultType,info));
    param_types_975=(struct list$1sType$ph*)come_increment_ref_count(list$1sType$ph$p_initialize((struct list$1sType$ph*)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2323, "struct list$1sType$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    for(    o2_saved_976=(struct list$1sType$ph*)come_increment_ref_count((generics_fun->mParamTypes)),it_977=list$1sType$ph$p_begin((o2_saved_976));    !list$1sType$ph$p_end((o2_saved_976));    it_977=list$1sType$ph$p_next((o2_saved_976))    ){
        param_type_978=(struct sType*)come_increment_ref_count(solve_method_generics(((struct sType*)(__right_value954=come_call_cloner(sType_clone, it_977))),info));
        come_call_finalizer3(__right_value954,sType_finalize, 0, 1, 0, 0, (void*)0);
        list$1sType$ph$p_add(param_types_975,(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, param_type_978)));
        come_call_finalizer3(param_type_978,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer3(o2_saved_976,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    param_names_979=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamNames));
    param_default_parametors_980=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mParamDefaultParametors));
    p_981=info->p;
    sline_982=info->sline;
    sname_983=(char*)come_increment_ref_count(info->sname);
    head_984=info->head;
    source_985=(struct buffer*)come_increment_ref_count(info->source);
    __dec_obj158=info->source;
    info->source=(struct buffer*)come_increment_ref_count(charp_to_buffer(generics_fun->mBlock));
    come_call_finalizer3(__dec_obj158,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=info->source->buf;
    info->head=info->source->buf;
    method_generics_type_names_986=(struct list$1char$ph*)come_increment_ref_count(info->method_generics_type_names);
    __dec_obj159=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2345, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
    come_call_finalizer3(__dec_obj159,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    for(    o2_saved_987=(struct list$1char$ph*)come_increment_ref_count((generics_fun->mMethodGenericsTypeNames)),it_988=list$1char$ph$p_begin((o2_saved_987));    !list$1char$ph$p_end((o2_saved_987));    it_988=list$1char$ph$p_next((o2_saved_987))    ){
        list$1char$ph$p_push_back(info->method_generics_type_names,(char*)come_increment_ref_count(come_call_cloner(string_clone, it_988)));
    }
    come_call_finalizer3(o2_saved_987,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj160=info->generics_type_names;
    info->generics_type_names=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, generics_fun->mGenericsTypeNames));
    come_call_finalizer3(__dec_obj160,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->sline=generics_fun->mGenericsSLine;
    __dec_obj161=info->sname;
    info->sname=(char*)come_increment_ref_count(generics_fun->mGenericsSName);
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    block_989=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
    info->head=head_984;
    __dec_obj162=info->source;
    info->source=(struct buffer*)come_increment_ref_count(source_985);
    come_call_finalizer3(__dec_obj162,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    info->p=p_981;
    info->sline=sline_982;
    __dec_obj163=info->sname;
    info->sname=(char*)come_increment_ref_count(sname_983);
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    result_type_974->mInline=(_Bool)0;
    result_type_974->mStatic=(_Bool)0;
    result_type_974->mUniq=(_Bool)0;
    generate__990=(_Bool)0;
    if(    result_type_974->mGenerate) {
        result_type_974->mGenerate=(_Bool)0;
        generate__990=(_Bool)1;
    }
    var_args_991=generics_fun->mVarArgs;
    fun_992=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2375, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(fun_name),(struct sType*)come_increment_ref_count(result_type_974),(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, param_types_975)),(struct list$1char$ph*)come_increment_ref_count(param_names_979),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_980),(_Bool)0,var_args_991,(struct sBlock*)come_increment_ref_count(block_989),(_Bool)1,info,(_Bool)0,(_Bool)0,generate__990,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
    map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name)),(struct sFun*)come_increment_ref_count(fun_992));
    _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2382, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
    _inf_obj_value4=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value972=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2382, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_992),info))));
    _inf_value4->_protocol_obj=_inf_obj_value4;
    _inf_value4->finalize=(void*)sFunNode_finalize;
    _inf_value4->clone=(void*)sFunNode_clone;
    _inf_value4->compile=(void*)sFunNode_compile;
    _inf_value4->sline=(void*)sNodeBase_sline;
    _inf_value4->sline_real=(void*)sNodeBase_sline_real;
    _inf_value4->sname=(void*)sNodeBase_sname;
    _inf_value4->terminated=(void*)sNodeBase_terminated;
    _inf_value4->kind=(void*)sFunNode_kind;
    node_993=(struct sNode*)come_increment_ref_count(_inf_value4);
    come_call_finalizer3(__right_value972,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
    Value_994=node_compile(node_993,info);
    if(    !Value_994) {
        __result_obj__399 = (_Bool)0;
        (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code_969 = come_decrement_ref_count2(last_code_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (last_code2_970 = come_decrement_ref_count2(last_code2_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_top_971 = come_decrement_ref_count2(sname_top_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_974,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_975,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_979,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_980,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        (sname_983 = come_decrement_ref_count2(sname_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source_985,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(method_generics_type_names_986,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_989,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_992,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((node_993) ? node_993 = come_decrement_ref_count2(node_993, ((struct sNode*)node_993)->finalize, ((struct sNode*)node_993)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__399;
    }
    else {
        __if_result__1_995=(void*)(Value_994);
;
    }
    __dec_obj164=info->method_generics_type_names;
    info->method_generics_type_names=(struct list$1char$ph*)come_increment_ref_count(method_generics_type_names_986);
    come_call_finalizer3(__dec_obj164,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    list$1char$ph$p_reset(info->generics_type_names);
    __dec_obj165=info->sname;
    info->sname=(char*)come_increment_ref_count(__builtin_string(sname_top_971));
    __dec_obj165 = come_decrement_ref_count2(__dec_obj165, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->sline=sline_top_972;
    __dec_obj166=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_969);
    __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj167=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_970);
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->caller_fun=caller_fun_965;
    info->caller_line=caller_line_966;
    info->caller_sname=caller_sname_967;
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_968;
    __result_obj__400 = (_Bool)1;
    (fun_name = come_decrement_ref_count2(fun_name, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code_969 = come_decrement_ref_count2(last_code_969, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_970 = come_decrement_ref_count2(last_code2_970, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (sname_top_971 = come_decrement_ref_count2(sname_top_971, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_974,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_types_975,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_979,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_980,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    (sname_983 = come_decrement_ref_count2(sname_983, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(source_985,buffer_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(method_generics_type_names_986,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(block_989,sBlock_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(fun_992,sFun_finalize, 0, 0, 0, 0, (void*)0);
    ((node_993) ? node_993 = come_decrement_ref_count2(node_993, ((struct sNode*)node_993)->finalize, ((struct sNode*)node_993)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__400;
}

struct sNode* parse_function(struct sInfo* info){
char* header_head_996;
char* source_head_997;
void* __right_value975 = (void*)0;
char* attribute_998;
struct sType* result_type_999;
char* var_name_1000;
_Bool constructor__1001;
void* __right_value976 = (void*)0;
void* __right_value977 = (void*)0;
struct sType* __dec_obj168;
void* __right_value978 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var30 = (void*)0;
struct sType* result_type2_1002=0;
char* var_name2_1003=0;
_Bool err_1004=0;
struct sType* __dec_obj169;
char* __dec_obj170;
_Bool method_definition_1005;
char* p_1006;
int sline_1007;
void* __right_value979 = (void*)0;
void* __right_value980 = (void*)0;
struct buffer* buf2_1008;
char* fun_name_1009;
char* base_fun_name_1010;
void* __right_value981 = (void*)0;
char* __dec_obj171;
void* __right_value982 = (void*)0;
char* __dec_obj172;
void* __right_value983 = (void*)0;
struct tuple3$3sType$phchar$phbool$* multiple_assign_var31 = (void*)0;
struct sType* obj_type_1011=0;
char* name_1012=0;
_Bool err_1013=0;
void* __right_value984 = (void*)0;
char* __dec_obj173;
void* __right_value985 = (void*)0;
char* __dec_obj174;
void* __right_value986 = (void*)0;
char* __dec_obj175;
void* __right_value987 = (void*)0;
char* __dec_obj176;
void* __right_value988 = (void*)0;
char* __dec_obj177;
void* __right_value989 = (void*)0;
char* __dec_obj178;
void* __right_value990 = (void*)0;
struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$* multiple_assign_var32 = (void*)0;
struct list$1sType$ph* param_types_1014=0;
struct list$1char$ph* param_names_1015=0;
struct list$1char$ph* param_default_parametors_1016=0;
_Bool var_args_1017=0;
char* header_tail_1018;
int version_1019;
int n_1020;
_Bool in_top_level_1021;
void* __right_value991 = (void*)0;
struct sBlock* block_1022;
void* __right_value992 = (void*)0;
char* fun_name_1024;
void* __right_value993 = (void*)0;
void* __right_value994 = (void*)0;
void* __right_value995 = (void*)0;
void* __right_value996 = (void*)0;
void* __right_value997 = (void*)0;
struct sFun* fun_1025;
void* __right_value998 = (void*)0;
void* __right_value999 = (void*)0;
struct sFun* fun2_1026;
void* __right_value1000 = (void*)0;
void* __right_value1001 = (void*)0;
void* __right_value1002 = (void*)0;
struct sNode* _inf_value5;
struct sLambdaNode* _inf_obj_value5;
void* __right_value1005 = (void*)0;
struct sNode* __result_obj__403;
void* __right_value1006 = (void*)0;
char* none_generics_name_1028;
void* __right_value1007 = (void*)0;
char* generics_sname_1029;
int generics_sline_1030;
void* __right_value1008 = (void*)0;
char* block_1031;
void* __right_value1020 = (void*)0;
void* __right_value1021 = (void*)0;
void* __right_value1022 = (void*)0;
void* __right_value1023 = (void*)0;
void* __right_value1024 = (void*)0;
void* __right_value1025 = (void*)0;
struct sGenericsFun* fun_1034;
void* __right_value1026 = (void*)0;
char* fun_name3_1035;
void* __right_value1032 = (void*)0;
struct sNode* __result_obj__417;
void* __right_value1033 = (void*)0;
char* generics_sname_1057;
int generics_sline_1058;
void* __right_value1034 = (void*)0;
char* block_1059;
void* __right_value1035 = (void*)0;
void* __right_value1036 = (void*)0;
void* __right_value1037 = (void*)0;
void* __right_value1038 = (void*)0;
void* __right_value1039 = (void*)0;
void* __right_value1040 = (void*)0;
struct sGenericsFun* fun_1060;
void* __right_value1041 = (void*)0;
char* fun_name3_1061;
void* __right_value1042 = (void*)0;
void* __right_value1043 = (void*)0;
struct sNode* __result_obj__418;
char* source_tail_1062;
void* __right_value1044 = (void*)0;
void* __right_value1045 = (void*)0;
struct buffer* header_1063;
void* __right_value1046 = (void*)0;
char* name_1064;
void* __right_value1047 = (void*)0;
char* name_1065;
int i_1066;
void* __right_value1048 = (void*)0;
struct sType* param_type_1067;
void* __right_value1049 = (void*)0;
char* param_name_1068;
void* __right_value1050 = (void*)0;
char* default_parametor_1069;
void* __right_value1051 = (void*)0;
void* __right_value1052 = (void*)0;
void* __right_value1053 = (void*)0;
char* impl_name_1070;
void* __right_value1054 = (void*)0;
char* result_type_name_1071;
void* __right_value1055 = (void*)0;
char* impl_name_1072;
void* __right_value1056 = (void*)0;
char* result_type_name_1073;
int i_1074;
void* __right_value1057 = (void*)0;
struct sType* param_type_1075;
void* __right_value1058 = (void*)0;
char* param_name_1076;
void* __right_value1059 = (void*)0;
char* default_parametor_1077;
void* __right_value1060 = (void*)0;
void* __right_value1061 = (void*)0;
void* __right_value1062 = (void*)0;
void* __right_value1063 = (void*)0;
char* new_fun_name_1078;
void* __right_value1064 = (void*)0;
char* id_1079;
void* __right_value1065 = (void*)0;
void* __right_value1066 = (void*)0;
char* id_1080;
void* __right_value1067 = (void*)0;
void* __right_value1068 = (void*)0;
struct sBlock* block_1081;
_Bool static_fun_1082;
_Bool inline_fun_1083;
_Bool uniq_fun_1084;
_Bool generate_fun_1085;
void* __right_value1069 = (void*)0;
void* __right_value1070 = (void*)0;
char* new_fun_name_1086;
void* __right_value1071 = (void*)0;
char* __dec_obj190;
void* __right_value1072 = (void*)0;
void* __right_value1073 = (void*)0;
void* __right_value1074 = (void*)0;
void* __right_value1075 = (void*)0;
void* __right_value1076 = (void*)0;
struct sFun* fun_1087;
void* __right_value1077 = (void*)0;
void* __right_value1078 = (void*)0;
void* __right_value1079 = (void*)0;
struct sFun* fun2_1088;
void* __right_value1080 = (void*)0;
void* __right_value1081 = (void*)0;
void* __right_value1082 = (void*)0;
struct sNode* _inf_value6;
struct sFunNode* _inf_obj_value6;
void* __right_value1083 = (void*)0;
struct sNode* result_1089;
struct sNode* __result_obj__419;
void* __right_value1084 = (void*)0;
char* new_fun_name_1090;
void* __right_value1085 = (void*)0;
char* __dec_obj191;
char* source_tail_1091;
void* __right_value1086 = (void*)0;
void* __right_value1087 = (void*)0;
struct buffer* header_1092;
_Bool result_type_static_1093;
void* __right_value1088 = (void*)0;
void* __right_value1089 = (void*)0;
void* __right_value1090 = (void*)0;
void* __right_value1091 = (void*)0;
struct sFun* fun_1094;
void* __right_value1092 = (void*)0;
void* __right_value1093 = (void*)0;
struct sFun* fun2_1095;
void* __right_value1094 = (void*)0;
void* __right_value1095 = (void*)0;
char* id_1096;
void* __right_value1096 = (void*)0;
void* __right_value1097 = (void*)0;
void* __right_value1098 = (void*)0;
struct sNode* _inf_value7;
struct sFunNode* _inf_obj_value7;
void* __right_value1099 = (void*)0;
struct sNode* result_1097;
struct sNode* __result_obj__420;
void* __right_value1100 = (void*)0;
struct tuple2$2char$phchar$ph* multiple_assign_var33 = (void*)0;
char* asm_fun_1098=0;
char* fun_attribute_1099=0;
void* __right_value1101 = (void*)0;
char* __dec_obj192;
void* __right_value1102 = (void*)0;
void* __right_value1103 = (void*)0;
struct buffer* header_1100;
char* source_tail_1101;
_Bool result_type_static_1102;
void* __right_value1104 = (void*)0;
void* __right_value1105 = (void*)0;
void* __right_value1106 = (void*)0;
struct sFun* fun_1103;
void* __right_value1107 = (void*)0;
void* __right_value1108 = (void*)0;
struct sFun* fun2_1104;
void* __right_value1109 = (void*)0;
void* __right_value1110 = (void*)0;
char* id_1105;
void* __right_value1111 = (void*)0;
void* __right_value1112 = (void*)0;
void* __right_value1113 = (void*)0;
struct sNode* _inf_value8;
struct sFunNode* _inf_obj_value8;
void* __right_value1114 = (void*)0;
struct sNode* result_1106;
struct sNode* __result_obj__421;
void* __right_value1115 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var34 = (void*)0;
int come_exception_var_c23_1107=0;
char* Err_1108=0;
struct sNode* __result_obj__422;
fun_name_1009 = (void*)0;
    header_head_996=info->p;
    source_head_997=info->p;
    attribute_998=(char*)come_increment_ref_count(parse_struct_attribute(info));
    result_type_999=((void*)0);
    var_name_1000=((void*)0);
    constructor__1001=(_Bool)0;
    if(    info->in_class&&memcmp(info->p,"new(",4)==0) {
        ((char*)(__right_value976=parse_word(info)));
        (__right_value976 = come_decrement_ref_count2(__right_value976, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        __dec_obj168=result_type_999;
        result_type_999=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, info->impl_type));
        come_call_finalizer3(__dec_obj168,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        result_type_999->mHeap=(_Bool)1;
        constructor__1001=(_Bool)1;
        info->constructor_=(_Bool)1;
    }
    else {
        multiple_assign_var30=((struct tuple3$3sType$phchar$phbool$*)(__right_value978=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        result_type2_1002=(struct sType*)come_increment_ref_count(multiple_assign_var30->v1);
        var_name2_1003=(char*)come_increment_ref_count(multiple_assign_var30->v2);
        err_1004=multiple_assign_var30->v3;
        come_call_finalizer3(__right_value978,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        __dec_obj169=result_type_999;
        result_type_999=(struct sType*)come_increment_ref_count(result_type2_1002);
        come_call_finalizer3(__dec_obj169,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        __dec_obj170=var_name_1000;
        var_name_1000=(char*)come_increment_ref_count(var_name2_1003);
        __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
        if(        info->in_class) {
        }
        if(        !err_1004) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        come_call_finalizer3(result_type2_1002,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name2_1003 = come_decrement_ref_count2(var_name2_1003, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    method_definition_1005=(_Bool)0;
    {
        p_1006=info->p;
        sline_1007=info->sline;
        buf2_1008=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2448, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        while(xisalnum(*info->p)||*info->p==95) {
            buffer_append_char(buf2_1008,*info->p);
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
        if(        buffer_length(buf2_1008)>0&&*info->p==58&&*(info->p+1)==58) {
            method_definition_1005=(_Bool)1;
        }
        info->p=p_1006;
        info->sline=sline_1007;
        come_call_finalizer3(buf2_1008,buffer_finalize, 0, 0, 0, 0, (void*)0);
    }
    base_fun_name_1010=((void*)0);
    if(    constructor__1001) {
        __dec_obj171=base_fun_name_1010;
        base_fun_name_1010=(char*)come_increment_ref_count(__builtin_string("initialize"));
        __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj172=fun_name_1009;
        fun_name_1009=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_1010,info,(_Bool)1));
        __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else if(    method_definition_1005) {
        multiple_assign_var31=((struct tuple3$3sType$phchar$phbool$*)(__right_value983=parse_type(info,(_Bool)0,(_Bool)1,(_Bool)0)));
        obj_type_1011=(struct sType*)come_increment_ref_count(multiple_assign_var31->v1);
        name_1012=(char*)come_increment_ref_count(multiple_assign_var31->v2);
        err_1013=multiple_assign_var31->v3;
        come_call_finalizer3(__right_value983,tuple3$3sType$phchar$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
        if(        !err_1013) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        expected_next_character(58,info);
        expected_next_character(58,info);
        __dec_obj173=base_fun_name_1010;
        base_fun_name_1010=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj174=fun_name_1009;
        fun_name_1009=(char*)come_increment_ref_count(create_method_name(obj_type_1011,(_Bool)0,base_fun_name_1010,info,(_Bool)1));
        __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(obj_type_1011,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1012 = come_decrement_ref_count2(name_1012, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    info->impl_type) {
        __dec_obj175=base_fun_name_1010;
        base_fun_name_1010=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj175 = come_decrement_ref_count2(__dec_obj175, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj176=fun_name_1009;
        fun_name_1009=(char*)come_increment_ref_count(create_method_name(info->impl_type,(_Bool)0,base_fun_name_1010,info,(_Bool)1));
        __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        __dec_obj177=fun_name_1009;
        fun_name_1009=(char*)come_increment_ref_count(parse_word(info));
        __dec_obj177 = come_decrement_ref_count2(__dec_obj177, (void*)0, (void*)0, 0,0,0, (void*)0);
        __dec_obj178=base_fun_name_1010;
        base_fun_name_1010=(char*)come_increment_ref_count(__builtin_string(fun_name_1009));
        __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    info->in_class&&charp_operator_equals(base_fun_name_1010,"initialize")) {
        info->in_class=(_Bool)0;
    }
    multiple_assign_var32=((struct tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$*)(__right_value990=parse_params(info,constructor__1001)));
    param_types_1014=(struct list$1sType$ph*)come_increment_ref_count(multiple_assign_var32->v1);
    param_names_1015=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v2);
    param_default_parametors_1016=(struct list$1char$ph*)come_increment_ref_count(multiple_assign_var32->v3);
    var_args_1017=multiple_assign_var32->v4;
    come_call_finalizer3(__right_value990,tuple4$4list$1sType$ph$phlist$1char$ph$phlist$1char$ph$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
    header_tail_1018=info->p;
    if(    info->in_class&&charp_operator_equals(base_fun_name_1010,"initialize")) {
        info->in_class=(_Bool)1;
    }
    version_1019=0;
    if(    parsecmp("version",info)) {
        info->p+=strlen("version");
        skip_spaces_and_lf(info);
        n_1020=0;
        while(xisdigit(*info->p)) {
            n_1020=n_1020*10+(*info->p-48);
            info->p++;
        }
        skip_spaces_and_lf(info);
        version_1019=n_1020;
    }
    in_top_level_1021=info->in_top_level;
    info->in_top_level=(_Bool)0;
    if(    charp_operator_equals(base_fun_name_1010,"lambda")) {
        block_1022=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)1));
        static int lambda_num_1023=0;
        lambda_num_1023++;
        fun_name_1024=(char*)come_increment_ref_count(xsprintf("lambda%d",lambda_num_1023));
        result_type_999->mInline=(_Bool)0;
        result_type_999->mStatic=(_Bool)0;
        result_type_999->mUniq=(_Bool)0;
        result_type_999->mGenerate=(_Bool)0;
        fun_1025=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2546, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_1024)),(struct sType*)come_increment_ref_count(result_type_999),(struct list$1sType$ph*)come_increment_ref_count(param_types_1014),(struct list$1char$ph*)come_increment_ref_count(param_names_1015),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1016),(_Bool)0,var_args_1017,(struct sBlock*)come_increment_ref_count(block_1022),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
        fun2_1026=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value998=__builtin_string(fun_name_1024)))));
        (__right_value998 = come_decrement_ref_count2(__right_value998, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1026==((void*)0)||fun2_1026->mExternal) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1024)),(struct sFun*)come_increment_ref_count(fun_1025));
        }
        _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2556, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value5=(struct sLambdaNode*)come_increment_ref_count(((struct sLambdaNode*)(__right_value1002=sLambdaNode_initialize((struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "05function.c", 2556, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0)),fun_1025,info))));
        _inf_value5->_protocol_obj=_inf_obj_value5;
        _inf_value5->finalize=(void*)sLambdaNode_finalize;
        _inf_value5->clone=(void*)sLambdaNode_clone;
        _inf_value5->compile=(void*)sLambdaNode_compile;
        _inf_value5->sline=(void*)sNodeBase_sline;
        _inf_value5->sline_real=(void*)sNodeBase_sline_real;
        _inf_value5->sname=(void*)sNodeBase_sname;
        _inf_value5->terminated=(void*)sNodeBase_terminated;
        _inf_value5->kind=(void*)sLambdaNode_kind;
        __result_obj__403 = come_increment_ref_count(((struct sNode*)(__right_value1005=_inf_value5)));
        come_call_finalizer3(block_1022,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_1024 = come_decrement_ref_count2(fun_name_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1025,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1026,sFun_finalize, 0, 0, 0, 0, (void*)0);
        (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1002,sLambdaNode_finalize, 0, 1, 0, 0, (void*)0);
        ((__right_value1005) ? __right_value1005 = come_decrement_ref_count2(__right_value1005, ((struct sNode*)__right_value1005)->finalize, ((struct sNode*)__right_value1005)->_protocol_obj, 1/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        ((__result_obj__403) ? __result_obj__403 = come_decrement_ref_count2(__result_obj__403, ((struct sNode*)__result_obj__403)->finalize, ((struct sNode*)__result_obj__403)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__403;
        come_call_finalizer3(block_1022,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name_1024 = come_decrement_ref_count2(fun_name_1024, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1025,sFun_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1026,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    else if(    info->impl_type&&list$1char$ph$p_length(info->generics_type_names)>0) {
        none_generics_name_1028=(char*)come_increment_ref_count(get_none_generics_name(info->impl_type->mClass->mName));
        generics_sname_1029=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_1030=info->sline;
        block_1031=(char*)come_increment_ref_count(skip_block(info));
        fun_1034=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2566, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1021=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value1022=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sType*)come_increment_ref_count(result_type_999),(struct list$1sType$ph*)come_increment_ref_count(param_types_1014),(struct list$1char$ph*)come_increment_ref_count(param_names_1015),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1016),var_args_1017,(char*)come_increment_ref_count(block_1031),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_1029)),generics_sline_1030));
        come_call_finalizer3(__right_value1021,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1022,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_1035=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1028,base_fun_name_1010));
        map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_1035)),(struct sGenericsFun*)come_increment_ref_count(fun_1034));
        __result_obj__417 = come_increment_ref_count((struct sNode*)((void*)0));
        (none_generics_name_1028 = come_decrement_ref_count2(none_generics_name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_1029 = come_decrement_ref_count2(generics_sname_1029, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1031 = come_decrement_ref_count2(block_1031, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1034,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1035 = come_decrement_ref_count2(fun_name3_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__417) ? __result_obj__417 = come_decrement_ref_count2(__result_obj__417, ((struct sNode*)__result_obj__417)->finalize, ((struct sNode*)__result_obj__417)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__417;
        (none_generics_name_1028 = come_decrement_ref_count2(none_generics_name_1028, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (generics_sname_1029 = come_decrement_ref_count2(generics_sname_1029, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1031 = come_decrement_ref_count2(block_1031, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1034,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1035 = come_decrement_ref_count2(fun_name3_1035, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    list$1char$ph$p_length(info->method_generics_type_names)>0) {
        generics_sname_1057=(char*)come_increment_ref_count(__builtin_string(info->sname));
        generics_sline_1058=info->sline;
        block_1059=(char*)come_increment_ref_count(skip_block(info));
        fun_1060=(struct sGenericsFun*)come_increment_ref_count(sGenericsFun_initialize((struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "05function.c", 2580, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals)),(struct sType*)come_increment_ref_count(info->impl_type),((struct list$1char$ph*)(__right_value1036=come_call_cloner(list$1char$ph$p_clone, info->generics_type_names))),((struct list$1char$ph*)(__right_value1037=come_call_cloner(list$1char$ph$p_clone, info->method_generics_type_names))),(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sType*)come_increment_ref_count(result_type_999),(struct list$1sType$ph*)come_increment_ref_count(param_types_1014),(struct list$1char$ph*)come_increment_ref_count(param_names_1015),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1016),var_args_1017,(char*)come_increment_ref_count(block_1059),info,(char*)come_increment_ref_count(__builtin_string(generics_sname_1057)),generics_sline_1058));
        come_call_finalizer3(__right_value1036,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__right_value1037,list$1char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        fun_name3_1061=(char*)come_increment_ref_count(come_call_cloner(charp_clone, base_fun_name_1010));
        if(        method_definition_1005) {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sGenericsFun*)come_increment_ref_count(fun_1060));
        }
        else {
            map$2char$phsGenericsFun$ph$p_insert(info->generics_funcs,(char*)come_increment_ref_count(__builtin_string(fun_name3_1061)),(struct sGenericsFun*)come_increment_ref_count(fun_1060));
        }
        __result_obj__418 = come_increment_ref_count((struct sNode*)((void*)0));
        (generics_sname_1057 = come_decrement_ref_count2(generics_sname_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1059 = come_decrement_ref_count2(block_1059, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1060,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1061 = come_decrement_ref_count2(fun_name3_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__418) ? __result_obj__418 = come_decrement_ref_count2(__result_obj__418, ((struct sNode*)__result_obj__418)->finalize, ((struct sNode*)__result_obj__418)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__418;
        (generics_sname_1057 = come_decrement_ref_count2(generics_sname_1057, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (block_1059 = come_decrement_ref_count2(block_1059, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(fun_1060,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1061 = come_decrement_ref_count2(fun_name3_1061, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else if(    *info->p==123) {
        source_tail_1062=info->p-1;
        header_1063=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2596, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        if(        constructor__1001) {
            if(            list$1sType$ph$p_length(param_types_1014)==1) {
                name_1064=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_1063,"extern %s*%% %s*::initialize(%s*%% self);\n",name_1064,name_1064,name_1064);
                (name_1064 = come_decrement_ref_count2(name_1064, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                name_1065=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                buffer_append_format(header_1063,"extern %s*%% %s*::initialize(%s*%% self, ",name_1065,name_1065,name_1065);
                for(                i_1066=1;                i_1066<list$1sType$ph$p_length(param_types_1014);                i_1066++                ){
                    param_type_1067=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types_1014,i_1066));
                    param_name_1068=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_1015,i_1066));
                    default_parametor_1069=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_1016,i_1066));
                    if(                    default_parametor_1069) {
                        buffer_append_format(header_1063,"extern %s %s=%s",((char*)(__right_value1051=make_come_type_name_string_no_solved(param_type_1067,(_Bool)0,info))),param_name_1068,default_parametor_1069);
                        (__right_value1051 = come_decrement_ref_count2(__right_value1051, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_1063,"extern %s %s",((char*)(__right_value1052=make_come_type_name_string_no_solved(param_type_1067,(_Bool)0,info))),param_name_1068);
                        (__right_value1052 = come_decrement_ref_count2(__right_value1052, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_1066!=list$1sType$ph$p_length(param_types_1014)-1) {
                        buffer_append_str(header_1063,",");
                    }
                    come_call_finalizer3(param_type_1067,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_1068 = come_decrement_ref_count2(param_name_1068, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_1069 = come_decrement_ref_count2(default_parametor_1069, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_1063,");\n");
                (name_1065 = come_decrement_ref_count2(name_1065, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else if(        info->in_class&&info->impl_type) {
            if(            list$1sType$ph$p_length(param_types_1014)==1) {
                impl_name_1070=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_1071=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_999,(_Bool)0,info));
                buffer_append_format(header_1063,"extern %s %s*::%s(%s* self);\n",result_type_name_1071,impl_name_1070,base_fun_name_1010,impl_name_1070);
                (impl_name_1070 = come_decrement_ref_count2(impl_name_1070, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_1071 = come_decrement_ref_count2(result_type_name_1071, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
                impl_name_1072=(char*)come_increment_ref_count(come_call_cloner(string_clone, info->impl_type->mClass->mName));
                result_type_name_1073=(char*)come_increment_ref_count(make_come_type_name_string_no_solved(result_type_999,(_Bool)0,info));
                buffer_append_format(header_1063,"extern %s %s*::%s(%s* self, ",result_type_name_1073,impl_name_1072,base_fun_name_1010,impl_name_1072);
                for(                i_1074=1;                i_1074<list$1sType$ph$p_length(param_types_1014);                i_1074++                ){
                    param_type_1075=(struct sType*)come_increment_ref_count(list$1sType$ph$p_operator_load_element(param_types_1014,i_1074));
                    param_name_1076=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_names_1015,i_1074));
                    default_parametor_1077=(char*)come_increment_ref_count(list$1char$ph$p_operator_load_element(param_default_parametors_1016,i_1074));
                    if(                    default_parametor_1077) {
                        buffer_append_format(header_1063,"extern %s %s=%s",((char*)(__right_value1060=make_come_type_name_string_no_solved(param_type_1075,(_Bool)0,info))),param_name_1076,default_parametor_1077);
                        (__right_value1060 = come_decrement_ref_count2(__right_value1060, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    else {
                        buffer_append_format(header_1063,"extern %s %s",((char*)(__right_value1061=make_come_type_name_string_no_solved(param_type_1075,(_Bool)0,info))),param_name_1076);
                        (__right_value1061 = come_decrement_ref_count2(__right_value1061, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    }
                    if(                    i_1074!=list$1sType$ph$p_length(param_types_1014)-1) {
                        buffer_append_str(header_1063,",");
                    }
                    come_call_finalizer3(param_type_1075,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (param_name_1076 = come_decrement_ref_count2(param_name_1076, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (default_parametor_1077 = come_decrement_ref_count2(default_parametor_1077, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                buffer_append_str(header_1063,");\n");
                (impl_name_1072 = come_decrement_ref_count2(impl_name_1072, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                (result_type_name_1073 = come_decrement_ref_count2(result_type_name_1073, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
        }
        else {
            buffer_append(header_1063,source_head_997,source_tail_1062-source_head_997);
            buffer_append_str(header_1063,";\n");
        }
        if(        !result_type_999->mStatic) {
            if(            !info->no_output_come_code) {
                if(                version_1019>0) {
                    new_fun_name_1078=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1062=__builtin_string(fun_name_1009))),version_1019));
                    (__right_value1062 = come_decrement_ref_count2(__right_value1062, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    id_1079=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1078));
                    add_come_code_at_come_header(info,id_1079,"%s",((char*)(__right_value1065=buffer_to_string(header_1063))));
                    (__right_value1065 = come_decrement_ref_count2(__right_value1065, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (new_fun_name_1078 = come_decrement_ref_count2(new_fun_name_1078, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1079 = come_decrement_ref_count2(id_1079, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
                else {
                    id_1080=(char*)come_increment_ref_count(__builtin_string(fun_name_1009));
                    add_come_code_at_come_header(info,id_1080,"%s",((char*)(__right_value1067=buffer_to_string(header_1063))));
                    (__right_value1067 = come_decrement_ref_count2(__right_value1067, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1080 = come_decrement_ref_count2(id_1080, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
        }
        block_1081=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,constructor__1001,(_Bool)1));
        static_fun_1082=(_Bool)0;
        if(        result_type_999->mStatic) {
            result_type_999->mStatic=(_Bool)0;
            result_type_999->mUniq=(_Bool)0;
            static_fun_1082=(_Bool)1;
        }
        inline_fun_1083=(_Bool)0;
        if(        result_type_999->mInline) {
            result_type_999->mInline=(_Bool)0;
            result_type_999->mUniq=(_Bool)0;
            inline_fun_1083=(_Bool)1;
        }
        uniq_fun_1084=(_Bool)0;
        if(        result_type_999->mUniq) {
            result_type_999->mUniq=(_Bool)0;
            result_type_999->mInline=(_Bool)0;
            result_type_999->mStatic=(_Bool)0;
            uniq_fun_1084=(_Bool)1;
        }
        generate_fun_1085=(_Bool)0;
        if(        result_type_999->mUniq) {
            result_type_999->mUniq=(_Bool)0;
            result_type_999->mInline=(_Bool)0;
            result_type_999->mStatic=(_Bool)0;
            generate_fun_1085=(_Bool)1;
        }
        if(        version_1019>0) {
            new_fun_name_1086=(char*)come_increment_ref_count(xsprintf("%s_v%d",((char*)(__right_value1069=__builtin_string(fun_name_1009))),version_1019));
            (__right_value1069 = come_decrement_ref_count2(__right_value1069, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            __dec_obj190=fun_name_1009;
            fun_name_1009=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1086));
            __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1086 = come_decrement_ref_count2(new_fun_name_1086, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        fun_1087=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2714, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sType*)come_increment_ref_count(result_type_999),(struct list$1sType$ph*)come_increment_ref_count(param_types_1014),(struct list$1char$ph*)come_increment_ref_count(param_names_1015),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1016),(_Bool)0,var_args_1017,(struct sBlock*)come_increment_ref_count(come_call_cloner(sBlock_clone, block_1081)),static_fun_1082,info,inline_fun_1083,uniq_fun_1084,generate_fun_1085,(char*)come_increment_ref_count(attribute_998),(char*)come_increment_ref_count(xsprintf(""))));
        if(        info->in_class) {
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sFun*)come_increment_ref_count(fun_1087));
        }
        else {
            fun2_1088=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1078=__builtin_string(fun_name_1009)))));
            (__right_value1078 = come_decrement_ref_count2(__right_value1078, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1088==((void*)0)||fun2_1088->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sFun*)come_increment_ref_count(fun_1087));
            }
            come_call_finalizer3(fun2_1088,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2732, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
        _inf_obj_value6=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1082=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2732, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1087),info))));
        _inf_value6->_protocol_obj=_inf_obj_value6;
        _inf_value6->finalize=(void*)sFunNode_finalize;
        _inf_value6->clone=(void*)sFunNode_clone;
        _inf_value6->compile=(void*)sFunNode_compile;
        _inf_value6->sline=(void*)sNodeBase_sline;
        _inf_value6->sline_real=(void*)sNodeBase_sline_real;
        _inf_value6->sname=(void*)sNodeBase_sname;
        _inf_value6->terminated=(void*)sNodeBase_terminated;
        _inf_value6->kind=(void*)sFunNode_kind;
        result_1089=(struct sNode*)come_increment_ref_count(_inf_value6);
        come_call_finalizer3(__right_value1082,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
        __result_obj__419 = come_increment_ref_count(result_1089);
        come_call_finalizer3(header_1063,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1081,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1087,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1089) ? result_1089 = come_decrement_ref_count2(result_1089, ((struct sNode*)result_1089)->finalize, ((struct sNode*)result_1089)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
        (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        ((__result_obj__419) ? __result_obj__419 = come_decrement_ref_count2(__result_obj__419, ((struct sNode*)__result_obj__419)->finalize, ((struct sNode*)__result_obj__419)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        return __result_obj__419;
        come_call_finalizer3(header_1063,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1081,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun_1087,sFun_finalize, 0, 0, 0, 0, (void*)0);
        ((result_1089) ? result_1089 = come_decrement_ref_count2(result_1089, ((struct sNode*)result_1089)->finalize, ((struct sNode*)result_1089)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    }
    else if(    xisalpha(*info->p)||*info->p==95||*info->p==59) {
        if(        version_1019>0) {
            new_fun_name_1090=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name_1009,version_1019));
            __dec_obj191=fun_name_1009;
            fun_name_1009=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1090));
            __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
            (new_fun_name_1090 = come_decrement_ref_count2(new_fun_name_1090, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        *info->p==59) {
            info->p++;
            source_tail_1091=info->p;
            header_1092=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2746, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append(header_1092,source_head_997,source_tail_1091-source_head_997);
            skip_spaces_and_lf(info);
            result_type_static_1093=result_type_999->mStatic;
            result_type_999->mStatic=(_Bool)0;
            result_type_999->mUniq=(_Bool)0;
            result_type_999->mInline=(_Bool)0;
            result_type_999->mGenerate=(_Bool)0;
            fun_1094=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2757, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sType*)come_increment_ref_count(result_type_999),(struct list$1sType$ph*)come_increment_ref_count(param_types_1014),(struct list$1char$ph*)come_increment_ref_count(param_names_1015),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1016),(_Bool)1,var_args_1017,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_998),(char*)come_increment_ref_count(xsprintf(""))));
            fun2_1095=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1092=__builtin_string(fun_name_1009)))));
            (__right_value1092 = come_decrement_ref_count2(__right_value1092, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1095==((void*)0)||fun2_1095->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sFun*)come_increment_ref_count(fun_1094));
            }
            if(            !result_type_static_1093) {
                if(                !info->no_output_come_code) {
                    id_1096=(char*)come_increment_ref_count(__builtin_string(fun_name_1009));
                    add_come_code_at_come_header(info,id_1096,"%s",((char*)(__right_value1096=buffer_to_string(header_1092))));
                    (__right_value1096 = come_decrement_ref_count2(__right_value1096, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1096 = come_decrement_ref_count2(id_1096, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2778, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value7=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1098=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2778, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1094),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sFunNode_finalize;
            _inf_value7->clone=(void*)sFunNode_clone;
            _inf_value7->compile=(void*)sFunNode_compile;
            _inf_value7->sline=(void*)sNodeBase_sline;
            _inf_value7->sline_real=(void*)sNodeBase_sline_real;
            _inf_value7->sname=(void*)sNodeBase_sname;
            _inf_value7->terminated=(void*)sNodeBase_terminated;
            _inf_value7->kind=(void*)sFunNode_kind;
            result_1097=(struct sNode*)come_increment_ref_count(_inf_value7);
            come_call_finalizer3(__right_value1098,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__420 = come_increment_ref_count(result_1097);
            come_call_finalizer3(header_1092,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1094,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1095,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1097) ? result_1097 = come_decrement_ref_count2(result_1097, ((struct sNode*)result_1097)->finalize, ((struct sNode*)result_1097)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__420) ? __result_obj__420 = come_decrement_ref_count2(__result_obj__420, ((struct sNode*)__result_obj__420)->finalize, ((struct sNode*)__result_obj__420)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__420;
            come_call_finalizer3(header_1092,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1094,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1095,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1097) ? result_1097 = come_decrement_ref_count2(result_1097, ((struct sNode*)result_1097)->finalize, ((struct sNode*)result_1097)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            multiple_assign_var33=((struct tuple2$2char$phchar$ph*)(__right_value1100=parse_function_attribute(info)));
            asm_fun_1098=(char*)come_increment_ref_count(multiple_assign_var33->v1);
            fun_attribute_1099=(char*)come_increment_ref_count(multiple_assign_var33->v2);
            come_call_finalizer3(__right_value1100,tuple2$2char$phchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            string_operator_not_equals(asm_fun_1098,"")) {
                __dec_obj192=fun_name_1009;
                fun_name_1009=(char*)come_increment_ref_count(__builtin_string(asm_fun_1098));
                __dec_obj192 = come_decrement_ref_count2(__dec_obj192, (void*)0, (void*)0, 0,0,0, (void*)0);
            }
            header_1100=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2788, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            if(            *info->p==59) {
                info->p++;
                source_tail_1101=info->p;
                buffer_append(header_1100,source_head_997,source_tail_1101-source_head_997);
                skip_spaces_and_lf(info);
            }
            result_type_static_1102=result_type_999->mStatic;
            result_type_999->mStatic=(_Bool)0;
            result_type_999->mUniq=(_Bool)0;
            result_type_999->mInline=(_Bool)0;
            result_type_999->mGenerate=(_Bool)0;
            fun_1103=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2802, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sType*)come_increment_ref_count(result_type_999),(struct list$1sType$ph*)come_increment_ref_count(param_types_1014),(struct list$1char$ph*)come_increment_ref_count(param_names_1015),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1016),(_Bool)1,var_args_1017,((void*)0),(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(attribute_998),(char*)come_increment_ref_count(fun_attribute_1099)));
            fun2_1104=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1107=__builtin_string(fun_name_1009)))));
            (__right_value1107 = come_decrement_ref_count2(__right_value1107, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1104==((void*)0)||fun2_1104->mExternal) {
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(fun_name_1009)),(struct sFun*)come_increment_ref_count(fun_1103));
            }
            if(            !result_type_static_1102) {
                if(                !info->no_output_come_code) {
                    id_1105=(char*)come_increment_ref_count(__builtin_string(fun_name_1009));
                    add_come_code_at_come_header(info,id_1105,"%s",((char*)(__right_value1111=buffer_to_string(header_1100))));
                    (__right_value1111 = come_decrement_ref_count2(__right_value1111, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (id_1105 = come_decrement_ref_count2(id_1105, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                }
            }
            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 2823, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value8=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1113=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 2823, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1103),info))));
            _inf_value8->_protocol_obj=_inf_obj_value8;
            _inf_value8->finalize=(void*)sFunNode_finalize;
            _inf_value8->clone=(void*)sFunNode_clone;
            _inf_value8->compile=(void*)sFunNode_compile;
            _inf_value8->sline=(void*)sNodeBase_sline;
            _inf_value8->sline_real=(void*)sNodeBase_sline_real;
            _inf_value8->sname=(void*)sNodeBase_sname;
            _inf_value8->terminated=(void*)sNodeBase_terminated;
            _inf_value8->kind=(void*)sFunNode_kind;
            result_1106=(struct sNode*)come_increment_ref_count(_inf_value8);
            come_call_finalizer3(__right_value1113,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            __result_obj__421 = come_increment_ref_count(result_1106);
            (asm_fun_1098 = come_decrement_ref_count2(asm_fun_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1099 = come_decrement_ref_count2(fun_attribute_1099, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1100,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1103,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1104,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1106) ? result_1106 = come_decrement_ref_count2(result_1106, ((struct sNode*)result_1106)->finalize, ((struct sNode*)result_1106)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
            (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            ((__result_obj__421) ? __result_obj__421 = come_decrement_ref_count2(__result_obj__421, ((struct sNode*)__result_obj__421)->finalize, ((struct sNode*)__result_obj__421)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            return __result_obj__421;
            (asm_fun_1098 = come_decrement_ref_count2(asm_fun_1098, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (fun_attribute_1099 = come_decrement_ref_count2(fun_attribute_1099, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(header_1100,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun_1103,sFun_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1104,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((result_1106) ? result_1106 = come_decrement_ref_count2(result_1106, ((struct sNode*)result_1106)->finalize, ((struct sNode*)result_1106)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
    }
    else {
        multiple_assign_var34=((struct tuple2$2int$char$ph*)(__right_value1115=err_msg(info,"invalid character(2)(%c)\n",*info->p)));
        come_exception_var_c23_1107=multiple_assign_var34->v1;
        Err_1108=(char*)come_increment_ref_count(multiple_assign_var34->v2);
        ((Err_1108)?(puts(Err_1108),exit(0)):(0));
        come_call_finalizer3(__right_value1115,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        exit(2);
        (Err_1108 = come_decrement_ref_count2(Err_1108, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    info->constructor_=(_Bool)0;
    info->in_top_level=in_top_level_1021;
    __result_obj__422 = come_increment_ref_count((struct sNode*)((void*)0));
    (attribute_998 = come_decrement_ref_count2(attribute_998, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(result_type_999,sType_finalize, 0, 0, 0, 0, (void*)0);
    (var_name_1000 = come_decrement_ref_count2(var_name_1000, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (fun_name_1009 = come_decrement_ref_count2(fun_name_1009, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (base_fun_name_1010 = come_decrement_ref_count2(base_fun_name_1010, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(param_types_1014,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_names_1015,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(param_default_parametors_1016,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
    ((__result_obj__422) ? __result_obj__422 = come_decrement_ref_count2(__result_obj__422, ((struct sNode*)__result_obj__422)->finalize, ((struct sNode*)__result_obj__422)->_protocol_obj, 0/* no_decrement */, 1/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
    return __result_obj__422;
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
struct sLambdaNode* __result_obj__401;
void* __right_value1003 = (void*)0;
struct sLambdaNode* result_1027;
void* __right_value1004 = (void*)0;
char* __dec_obj179;
struct sLambdaNode* __result_obj__402;
    if(    self==(void*)0) {
        __result_obj__401 = (void*)0;
        return __result_obj__401;
    }
    result_1027=(struct sLambdaNode*)come_increment_ref_count((struct sLambdaNode*)come_calloc(1, sizeof(struct sLambdaNode)*(1), "sLambdaNode_clone", 3, "struct sLambdaNode*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1027->sline=self->sline;
    }
    if(    self!=((void*)0)&&self->sname!=((void*)0)) {
        __dec_obj179=result_1027->sname;
        result_1027->sname=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->sname));
        __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1027->sline_real=self->sline_real;
    }
    if(    self!=((void*)0)) {
        result_1027->mFun=self->mFun;
    }
    __result_obj__402 = result_1027;
    come_call_finalizer3(result_1027,sLambdaNode_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__402;
}

static struct sGenericsFun* sGenericsFun_clone(struct sGenericsFun* self){
struct sGenericsFun* __result_obj__404;
void* __right_value1009 = (void*)0;
struct sGenericsFun* result_1033;
void* __right_value1010 = (void*)0;
struct sType* __dec_obj180;
void* __right_value1011 = (void*)0;
struct list$1char$ph* __dec_obj181;
void* __right_value1012 = (void*)0;
struct list$1char$ph* __dec_obj182;
void* __right_value1013 = (void*)0;
char* __dec_obj183;
void* __right_value1014 = (void*)0;
struct sType* __dec_obj184;
void* __right_value1015 = (void*)0;
struct list$1sType$ph* __dec_obj185;
void* __right_value1016 = (void*)0;
struct list$1char$ph* __dec_obj186;
void* __right_value1017 = (void*)0;
struct list$1char$ph* __dec_obj187;
void* __right_value1018 = (void*)0;
char* __dec_obj188;
void* __right_value1019 = (void*)0;
char* __dec_obj189;
struct sGenericsFun* __result_obj__405;
    if(    self==(void*)0) {
        __result_obj__404 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__404,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__404;
    }
    result_1033=(struct sGenericsFun*)come_increment_ref_count((struct sGenericsFun*)come_calloc(1, sizeof(struct sGenericsFun)*(1), "sGenericsFun_clone", 3, "struct sGenericsFun", sGenericsFun_finalize, sGenericsFun_clone, sGenericsFun_get_hash_key, sGenericsFun_equals));
    if(    self!=((void*)0)&&self->mImplType!=((void*)0)) {
        __dec_obj180=result_1033->mImplType;
        result_1033->mImplType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mImplType));
        come_call_finalizer3(__dec_obj180,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0)) {
        __dec_obj181=result_1033->mGenericsTypeNames;
        result_1033->mGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mGenericsTypeNames));
        come_call_finalizer3(__dec_obj181,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0)) {
        __dec_obj182=result_1033->mMethodGenericsTypeNames;
        result_1033->mMethodGenericsTypeNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mMethodGenericsTypeNames));
        come_call_finalizer3(__dec_obj182,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mName!=((void*)0)) {
        __dec_obj183=result_1033->mName;
        result_1033->mName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mName));
        __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)&&self->mResultType!=((void*)0)) {
        __dec_obj184=result_1033->mResultType;
        result_1033->mResultType=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, self->mResultType));
        come_call_finalizer3(__dec_obj184,sType_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamTypes!=((void*)0)) {
        __dec_obj185=result_1033->mParamTypes;
        result_1033->mParamTypes=(struct list$1sType$ph*)come_increment_ref_count(come_call_cloner(list$1sType$ph$p_clone, self->mParamTypes));
        come_call_finalizer3(__dec_obj185,list$1sType$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamNames!=((void*)0)) {
        __dec_obj186=result_1033->mParamNames;
        result_1033->mParamNames=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamNames));
        come_call_finalizer3(__dec_obj186,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0)) {
        __dec_obj187=result_1033->mParamDefaultParametors;
        result_1033->mParamDefaultParametors=(struct list$1char$ph*)come_increment_ref_count(come_call_cloner(list$1char$ph$p_clone, self->mParamDefaultParametors));
        come_call_finalizer3(__dec_obj187,list$1char$ph_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
    }
    if(    self!=((void*)0)&&self->mBlock!=((void*)0)) {
        __dec_obj188=result_1033->mBlock;
        result_1033->mBlock=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mBlock));
        __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1033->mSLine=self->mSLine;
    }
    if(    self!=((void*)0)) {
        result_1033->mVarArgs=self->mVarArgs;
    }
    if(    self!=((void*)0)) {
        result_1033->mGenerate=self->mGenerate;
    }
    if(    self!=((void*)0)&&self->mGenericsSName!=((void*)0)) {
        __dec_obj189=result_1033->mGenericsSName;
        result_1033->mGenericsSName=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->mGenericsSName));
        __dec_obj189 = come_decrement_ref_count2(__dec_obj189, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    self!=((void*)0)) {
        result_1033->mGenericsSLine=self->mGenericsSLine;
    }
    __result_obj__405 = come_increment_ref_count(result_1033);
    come_call_finalizer3(result_1033,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__405,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__405;
}

static unsigned int sGenericsFun_get_hash_key(struct sGenericsFun* self){
unsigned int result_1032;
    result_1032=0;
    result_1032+=int_get_hash_key(((int)self->mImplType));
    result_1032+=int_get_hash_key(((int)self->mGenericsTypeNames));
    result_1032+=int_get_hash_key(((int)self->mMethodGenericsTypeNames));
    result_1032+=int_get_hash_key(((int)self->mName));
    result_1032+=int_get_hash_key(((int)self->mResultType));
    result_1032+=int_get_hash_key(((int)self->mParamTypes));
    result_1032+=int_get_hash_key(((int)self->mParamNames));
    result_1032+=int_get_hash_key(((int)self->mParamDefaultParametors));
    result_1032+=int_get_hash_key(((int)self->mBlock));
    result_1032+=int_get_hash_key(((int)self->mSLine));
    result_1032+=int_get_hash_key(((int)self->mVarArgs));
    result_1032+=int_get_hash_key(((int)self->mGenerate));
    result_1032+=int_get_hash_key(((int)self->mGenericsSName));
    result_1032+=int_get_hash_key(((int)self->mGenericsSLine));
    return result_1032;
}

static _Bool sGenericsFun_equals(struct sGenericsFun* left, struct sGenericsFun* right){
    if(    !sType_equals(left->mImplType,right->mImplType)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mGenericsTypeNames,right->mGenericsTypeNames)) {
        return (_Bool)0;
    }
    if(    !list$1char$ph$p_equals(left->mMethodGenericsTypeNames,right->mMethodGenericsTypeNames)) {
        return (_Bool)0;
    }
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
    if(    !string_equals(left->mBlock,right->mBlock)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mSLine,right->mSLine)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mVarArgs,right->mVarArgs)) {
        return (_Bool)0;
    }
    if(    !bool_equals(left->mGenerate,right->mGenerate)) {
        return (_Bool)0;
    }
    if(    !string_equals(left->mGenericsSName,right->mGenericsSName)) {
        return (_Bool)0;
    }
    if(    !int_equals(left->mGenericsSLine,right->mGenericsSLine)) {
        return (_Bool)0;
    }
    return (_Bool)1;
}

static struct map$2char$phsGenericsFun$ph* map$2char$phsGenericsFun$ph$p_insert(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* item){
unsigned int hash_1053;
unsigned int it_1054;
_Bool same_key_exist_1055;
char* it2_1056;
struct map$2char$phsGenericsFun$ph* __result_obj__416;
    if(    self->len*10>=self->size) {
        map$2char$phsGenericsFun$ph$p_rehash(self);
    }
    hash_1053=string_get_hash_key(((char*)key))%self->size;
    it_1054=hash_1053;
    while((_Bool)1) {
        if(        self->item_existance[it_1054]) {
            if(            string_equals(self->keys[it_1054],key)) {
                if(                1) {
                    list$1char$p$p_remove(self->key_list,self->keys[it_1054]);
                    (self->keys[it_1054] = come_decrement_ref_count2(self->keys[it_1054], (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    self->keys[it_1054]=(char*)come_increment_ref_count(key);
                }
                else {
                    list$1char$p$p_remove(self->key_list,self->keys[it_1054]);
                    self->keys[it_1054]=key;
                }
                if(                1) {
                    come_call_finalizer3(self->items[it_1054],sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                    self->items[it_1054]=(struct sGenericsFun*)come_increment_ref_count(item);
                }
                else {
                    self->items[it_1054]=item;
                }
                break;
            }
            it_1054++;
            if(            it_1054>=self->size) {
                it_1054=0;
            }
            else if(            it_1054==hash_1053) {
                printf("unexpected error in map.insert\n");
                stackframe();
                exit(2);
            }
        }
        else {
            self->item_existance[it_1054]=(_Bool)1;
            if(            1) {
                self->keys[it_1054]=(char*)come_increment_ref_count(key);
            }
            else {
                self->keys[it_1054]=key;
            }
            if(            1) {
                self->items[it_1054]=(struct sGenericsFun*)come_increment_ref_count(item);
            }
            else {
                self->items[it_1054]=item;
            }
            self->len++;
            break;
        }
    }
    same_key_exist_1055=(_Bool)0;
    for(    it2_1056=list$1char$p$p_begin(self->key_list);    !list$1char$p$p_end(self->key_list);    it2_1056=list$1char$p$p_next(self->key_list)    ){
        if(        string_equals(it2_1056,key)) {
            same_key_exist_1055=(_Bool)1;
        }
    }
    if(    !same_key_exist_1055) {
        list$1char$p$p_push_back(self->key_list,key);
    }
    __result_obj__416 = self;
    (key = come_decrement_ref_count2(key, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(item,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    return __result_obj__416;
}

static void map$2char$phsGenericsFun$ph$p_rehash(struct map$2char$phsGenericsFun$ph* self){
int size_1036;
void* __right_value1027 = (void*)0;
char** keys_1037;
void* __right_value1028 = (void*)0;
struct sGenericsFun** items_1038;
void* __right_value1029 = (void*)0;
_Bool* item_existance_1039;
int len_1040;
char* it_1043;
struct sGenericsFun* default_value_1046;
void* __right_value1030 = (void*)0;
struct sGenericsFun* it2_1047;
unsigned int hash_1050;
int n_1051;
struct sGenericsFun* default_value_1052;
void* __right_value1031 = (void*)0;
default_value_1046 = (void*)0;
default_value_1052 = (void*)0;
    size_1036=self->size*10;
    keys_1037=(char**)come_increment_ref_count(((char**)(__right_value1027=(char**)come_calloc(1, sizeof(char*)*(1*(size_1036)), "./comelang.h", 2938, "char**", (void*)0, (void*)0, (void*)0, (void*)0))));
    items_1038=(struct sGenericsFun**)come_increment_ref_count(((struct sGenericsFun**)(__right_value1028=(struct sGenericsFun**)come_calloc(1, sizeof(struct sGenericsFun*)*(1*(size_1036)), "./comelang.h", 2939, "struct sGenericsFun**", (void*)0, (void*)0, (void*)0, (void*)0))));
    item_existance_1039=(_Bool*)come_increment_ref_count(((_Bool*)(__right_value1029=(_Bool*)come_calloc(1, sizeof(_Bool)*(1*(size_1036)), "./comelang.h", 2940, "_Bool*", (void*)0, (void*)0, (void*)0, (void*)0))));
    len_1040=0;
    for(    it_1043=map$2char$phsGenericsFun$ph$p_begin(self);    !map$2char$phsGenericsFun$ph$p_end(self);    it_1043=map$2char$phsGenericsFun$ph$p_next(self)    ){
        memset(&default_value_1046,0,sizeof(struct sGenericsFun*));
        it2_1047=((struct sGenericsFun*)(__right_value1030=map$2char$phsGenericsFun$ph$p_at(self,it_1043,(struct sGenericsFun*)come_increment_ref_count(default_value_1046))));
        come_call_finalizer3(__right_value1030,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        hash_1050=string_get_hash_key(((char*)it_1043))%size_1036;
        n_1051=hash_1050;
        while((_Bool)1) {
            if(            item_existance_1039[n_1051]) {
                n_1051++;
                if(                n_1051>=size_1036) {
                    n_1051=0;
                }
                else if(                n_1051==hash_1050) {
                    printf("unexpected error in map.rehash(1)\n");
                    stackframe();
                    exit(2);
                }
            }
            else {
                item_existance_1039[n_1051]=(_Bool)1;
                keys_1037[n_1051]=it_1043;
                items_1038[n_1051]=((struct sGenericsFun*)(__right_value1031=map$2char$phsGenericsFun$ph$p_at(self,it_1043,(struct sGenericsFun*)come_increment_ref_count(default_value_1052))));
                come_call_finalizer3(__right_value1031,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
                len_1040++;
                come_call_finalizer3(default_value_1052,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                break;
                come_call_finalizer3(default_value_1052,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
            }
        }
        come_call_finalizer3(default_value_1046,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    come_free((char*)self->items);
    (self->item_existance = come_decrement_ref_count2(self->item_existance, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_free((char*)self->keys);
    self->keys=keys_1037;
    self->items=items_1038;
    self->item_existance=item_existance_1039;
    self->size=size_1036;
    self->len=len_1040;
}

static char* map$2char$phsGenericsFun$ph$p_begin(struct map$2char$phsGenericsFun$ph* self){
char* result_1041;
char* __result_obj__406;
char* __result_obj__407;
char* result_1042;
char* __result_obj__408;
result_1041 = (void*)0;
result_1042 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1041,0,sizeof(char*));
        __result_obj__406 = result_1041;
        return __result_obj__406;
    }
    self->key_list->it=self->key_list->head;
    if(    self->key_list->it) {
        __result_obj__407 = self->key_list->it->item;
        return __result_obj__407;
    }
    memset(&result_1042,0,sizeof(char*));
    __result_obj__408 = result_1042;
    return __result_obj__408;
}

static _Bool map$2char$phsGenericsFun$ph$p_end(struct map$2char$phsGenericsFun$ph* self){
    return self==((void*)0)||self->key_list==((void*)0)||self->key_list->it==((void*)0);
}

static char* map$2char$phsGenericsFun$ph$p_next(struct map$2char$phsGenericsFun$ph* self){
char* result_1044;
char* __result_obj__409;
char* __result_obj__410;
char* result_1045;
char* __result_obj__411;
result_1044 = (void*)0;
result_1045 = (void*)0;
    if(    self==((void*)0)||self->key_list->it==((void*)0)) {
        memset(&result_1044,0,sizeof(char*));
        __result_obj__409 = result_1044;
        return __result_obj__409;
    }
    self->key_list->it=self->key_list->it->next;
    if(    self->key_list->it) {
        __result_obj__410 = self->key_list->it->item;
        return __result_obj__410;
    }
    memset(&result_1045,0,sizeof(char*));
    __result_obj__411 = result_1045;
    return __result_obj__411;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_at(struct map$2char$phsGenericsFun$ph* self, char* key, struct sGenericsFun* default_value){
unsigned int hash_1048;
unsigned int it_1049;
struct sGenericsFun* __result_obj__412;
struct sGenericsFun* __result_obj__413;
struct sGenericsFun* __result_obj__414;
struct sGenericsFun* __result_obj__415;
    hash_1048=string_get_hash_key(((char*)key))%self->size;
    it_1049=hash_1048;
    while((_Bool)1) {
        if(        self->item_existance[it_1049]) {
            if(            string_equals(self->keys[it_1049],key)) {
                __result_obj__412 = come_increment_ref_count(self->items[it_1049]);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__412,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__412;
            }
            it_1049++;
            if(            it_1049>=self->size) {
                it_1049=0;
            }
            else if(            it_1049==hash_1048) {
                __result_obj__413 = come_increment_ref_count(default_value);
                come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__413,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__413;
            }
        }
        else {
            __result_obj__414 = come_increment_ref_count(default_value);
            come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__414,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__414;
        }
    }
    __result_obj__415 = come_increment_ref_count(default_value);
    come_call_finalizer3(default_value,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__415,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__415;
}

static int list$1sType$ph$p_length(struct list$1sType$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_finalizer_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1109;
char* __dec_obj193;
char* last_code2_1110;
char* __dec_obj194;
_Bool comma_instead_of_semicolon_1111;
struct sClass* current_stack_frame_struct_1112;
char* real_fun_name_1113;
struct sFun* finalizer_1114;
void* __right_value1116 = (void*)0;
struct sType* type_before_1115;
void* __right_value1117 = (void*)0;
struct sType* type2_1116;
void* __right_value1118 = (void*)0;
char* fun_name2_1117;
void* __right_value1119 = (void*)0;
void* __right_value1120 = (void*)0;
char* none_generics_name_1118;
void* __right_value1121 = (void*)0;
char* generics_fun_name_1119;
void* __right_value1122 = (void*)0;
struct sGenericsFun* generics_fun_1120;
void* __right_value1123 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var35 = (void*)0;
char* name_1124=0;
_Bool err_1125=0;
void* __right_value1124 = (void*)0;
char* __dec_obj195;
int i_1126;
void* __right_value1125 = (void*)0;
char* new_fun_name_1127;
void* __right_value1126 = (void*)0;
void* __right_value1127 = (void*)0;
char* __dec_obj196;
void* __right_value1128 = (void*)0;
char* __dec_obj197;
void* __right_value1129 = (void*)0;
char* __dec_obj198;
void* __right_value1130 = (void*)0;
char* user_real_fun_name_1128;
void* __right_value1131 = (void*)0;
struct sFun* user_finalizer_1129;
void* __right_value1132 = (void*)0;
struct sType* type2_1130;
struct sClass* klass_1131;
void* __right_value1133 = (void*)0;
void* __right_value1134 = (void*)0;
struct buffer* source_1132;
void* __right_value1135 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1139;
struct tuple2$2char$phsType$ph* it_1142;
struct tuple2$2char$phsType$ph* multiple_assign_var36 = (void*)0;
char* name_1145=0;
struct sType* field_type_1146=0;
char* p_1149;
int sline_1150;
char* sname_1151;
char* head_1152;
struct buffer* source3_1153;
struct buffer* __dec_obj199;
void* __right_value1136 = (void*)0;
char* __dec_obj200;
void* __right_value1137 = (void*)0;
struct sBlock* block_1154;
void* __right_value1138 = (void*)0;
void* __right_value1139 = (void*)0;
void* __right_value1140 = (void*)0;
struct sType* result_type_1155;
void* __right_value1141 = (void*)0;
char* name_1156;
void* __right_value1142 = (void*)0;
struct sType* self_type_1157;
struct sType* __list_values21___1159[1];
void* __right_value1143 = (void*)0;
void* __right_value1144 = (void*)0;
struct list$1sType$ph* param_types_1158;
void* __right_value1145 = (void*)0;
char* __list_values22___1160[1];
void* __right_value1146 = (void*)0;
void* __right_value1147 = (void*)0;
struct list$1char$ph* param_names_1161;
void* __right_value1148 = (void*)0;
void* __right_value1149 = (void*)0;
struct list$1char$ph* param_default_parametors_1162;
void* __right_value1150 = (void*)0;
void* __right_value1151 = (void*)0;
struct sFun* fun2_1163;
void* __right_value1152 = (void*)0;
void* __right_value1153 = (void*)0;
void* __right_value1154 = (void*)0;
void* __right_value1155 = (void*)0;
struct sFun* fun_1164;
void* __right_value1156 = (void*)0;
void* __right_value1157 = (void*)0;
void* __right_value1158 = (void*)0;
struct sNode* _inf_value9;
struct sFunNode* _inf_obj_value9;
void* __right_value1159 = (void*)0;
struct sNode* node_1165;
_Bool Value_1166;
struct buffer* __dec_obj201;
char* __dec_obj202;
char* __dec_obj203;
char* __dec_obj204;
void* __right_value1162 = (void*)0;
void* __right_value1163 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__440;
memset(&i_1126, 0, sizeof(int));
    last_code_1109=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj193=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj193 = come_decrement_ref_count2(__dec_obj193, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1110=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj194=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1111=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1112=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    real_fun_name_1113=((void*)0);
    finalizer_1114=((void*)0);
    type_before_1115=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1116=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
    type2_1116->mHeap=(_Bool)0;
    fun_name2_1117=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    if(    type->mNoSolvedGenericsType) {
        type=type->mNoSolvedGenericsType;
    }
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        finalizer_1114=((struct sFun*)(__right_value1119=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1117)));
        come_call_finalizer3(__right_value1119,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        finalizer_1114==((void*)0)) {
            none_generics_name_1118=(char*)come_increment_ref_count(get_none_generics_name(type2_1116->mClass->mName));
            generics_fun_name_1119=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1118,fun_name));
            generics_fun_1120=((struct sGenericsFun*)(__right_value1122=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1119)));
            come_call_finalizer3(__right_value1122,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            generics_fun_1120) {
                multiple_assign_var35=((struct tuple2$2char$phbool$*)(__right_value1123=create_generics_fun((char*)come_increment_ref_count(fun_name2_1117),generics_fun_1120,type,info)));
                name_1124=(char*)come_increment_ref_count(multiple_assign_var35->v1);
                err_1125=multiple_assign_var35->v2;
                come_call_finalizer3(__right_value1123,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1125) {
                    printf("%s %d: can't create generics finalizer\n",info->sname,info->sline);
                    exit(2);
                }
                finalizer_1114=((struct sFun*)(__right_value1124=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1124)));
                come_call_finalizer3(__right_value1124,sFun_finalize, 0, 1, 0, 0, (void*)0);
                (name_1124 = come_decrement_ref_count2(name_1124, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1118 = come_decrement_ref_count2(none_generics_name_1118, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1119 = come_decrement_ref_count2(generics_fun_name_1119, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        __dec_obj195=real_fun_name_1113;
        real_fun_name_1113=(char*)come_increment_ref_count(fun_name2_1117);
        __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    else {
        for(        i_1126=128-1;        i_1126>=1;        i_1126--        ){
            new_fun_name_1127=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1117,i_1126));
            finalizer_1114=((struct sFun*)(__right_value1126=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1127)));
            come_call_finalizer3(__right_value1126,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            finalizer_1114) {
                __dec_obj196=fun_name2_1117;
                fun_name2_1117=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1127));
                __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1127 = come_decrement_ref_count2(new_fun_name_1127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1127 = come_decrement_ref_count2(new_fun_name_1127, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        finalizer_1114==((void*)0)) {
            finalizer_1114=((struct sFun*)(__right_value1128=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1117)));
            come_call_finalizer3(__right_value1128,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj197=real_fun_name_1113;
        real_fun_name_1113=(char*)come_increment_ref_count(fun_name2_1117);
        __dec_obj197 = come_decrement_ref_count2(__dec_obj197, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    finalizer_1114==((void*)0)) {
        type=type_before_1115;
        __dec_obj198=real_fun_name_1113;
        real_fun_name_1113=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
        user_real_fun_name_1128=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_finalize",info,(_Bool)1));
        user_finalizer_1129=((struct sFun*)(__right_value1131=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1128)));
        come_call_finalizer3(__right_value1131,sFun_finalize, 0, 1, 0, 0, (void*)0);
        type2_1130=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
        type=type2_1130;
        klass_1131=type->mClass;
        if(        type->mPointerNum>0&&klass_1131->mStruct||type->mAllocaValue) {
            source_1132=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 2924, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
            buffer_append_char(source_1132,123);
            if(            user_finalizer_1129) {
                char source2_1133[1024];
                memset(&source2_1133, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1133,1024,"if(self != ((void*)0)) { %s(self); }\n",user_real_fun_name_1128);
                buffer_append_str(source_1132,source2_1133);
            }
            klass_1131=((struct sClass*)(__right_value1135=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1131->mName)));
            come_call_finalizer3(__right_value1135,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1139=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1131->mFields)),it_1142=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1139));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1139));            it_1142=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1139))            ){
                multiple_assign_var36=it_1142;
                name_1145=(char*)come_increment_ref_count(multiple_assign_var36->v1);
                field_type_1146=(struct sType*)come_increment_ref_count(multiple_assign_var36->v2);
                if(                field_type_1146->mHeap) {
                    char source2_1147[1024];
                    memset(&source2_1147, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1147,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { delete borrow self.%s; }\n",name_1145,name_1145,name_1145,name_1145);
                    buffer_append_str(source_1132,source2_1147);
                }
                else if(                field_type_1146->mChannel) {
                    char source2_1148[1024];
                    memset(&source2_1148, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1148,1024,"if(self != ((void*)0) && self.%s[0] != ((void*)0)) { close(self.%s[0]); }",name_1145,name_1145);
                    buffer_append_str(source_1132,source2_1148);
                    snprintf(source2_1148,1024,"if(self != ((void*)0) && self.%s[1] != ((void*)0)) { close(self.%s[1]); }",name_1145,name_1145);
                    buffer_append_str(source_1132,source2_1148);
                }
                (name_1145 = come_decrement_ref_count2(name_1145, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1146,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1139,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            buffer_append_char(source_1132,125);
            p_1149=info->p;
            sline_1150=info->sline;
            sname_1151=(char*)come_increment_ref_count(info->sname);
            head_1152=info->head;
            source3_1153=(struct buffer*)come_increment_ref_count(info->source);
            __dec_obj199=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source_1132);
            come_call_finalizer3(__dec_obj199,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=source_1132->buf;
            info->head=source_1132->buf;
            __dec_obj200=info->sname;
            info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1113));
            __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0);
            info->sline=0;
            block_1154=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
            result_type_1155=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 2973, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("void")),(_Bool)0,info));
            name_1156=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1113));
            self_type_1157=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
            self_type_1157->mHeap=(_Bool)0;
            if(            self_type_1157->mPointerNum==0) {
                self_type_1157->mPointerNum=1;
            }
            if(            self_type_1157->mPointerNum>1) {
                self_type_1157->mPointerNum=1;
            }
            param_types_1158=(struct list$1sType$ph*)come_increment_ref_count((__list_values21___1159[0]=self_type_1157,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 2983, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values21___1159)));
            param_names_1161=(struct list$1char$ph*)come_increment_ref_count((__list_values22___1160[0]=((char*)(__right_value1145=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2984, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values22___1160)));
            (__right_value1145 = come_decrement_ref_count2(__right_value1145, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            param_default_parametors_1162=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 2985, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
            list$1char$ph$p_push_back(param_default_parametors_1162,((void*)0));
            result_type_1155->mStatic=(_Bool)0;
            result_type_1155->mUniq=(_Bool)0;
            result_type_1155->mInline=(_Bool)0;
            result_type_1155->mGenerate=(_Bool)0;
            fun2_1163=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1150=__builtin_string(name_1156)))));
            (__right_value1150 = come_decrement_ref_count2(__right_value1150, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            if(            fun2_1163==((void*)0)||fun2_1163->mExternal) {
                fun_1164=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 2995, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1156),(struct sType*)come_increment_ref_count(result_type_1155),(struct list$1sType$ph*)come_increment_ref_count(param_types_1158),(struct list$1char$ph*)come_increment_ref_count(param_names_1161),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1162),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1154),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
                map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1156)),(struct sFun*)come_increment_ref_count(fun_1164));
                finalizer_1114=fun_1164;
                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3005, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
                _inf_obj_value9=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1158=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3005, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1164),info))));
                _inf_value9->_protocol_obj=_inf_obj_value9;
                _inf_value9->finalize=(void*)sFunNode_finalize;
                _inf_value9->clone=(void*)sFunNode_clone;
                _inf_value9->compile=(void*)sFunNode_compile;
                _inf_value9->sline=(void*)sNodeBase_sline;
                _inf_value9->sline_real=(void*)sNodeBase_sline_real;
                _inf_value9->sname=(void*)sNodeBase_sname;
                _inf_value9->terminated=(void*)sNodeBase_terminated;
                _inf_value9->kind=(void*)sFunNode_kind;
                node_1165=(struct sNode*)come_increment_ref_count(_inf_value9);
                come_call_finalizer3(__right_value1158,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
                Value_1166=node_compile(node_1165,info);
                if(                !Value_1166) {
                    printf("%s %d: compiling is failed(X)\n",info->sname,info->sline);
                    exit(2);
                }
                else {
                }
                come_call_finalizer3(fun_1164,sFun_finalize, 0, 0, 0, 0, (void*)0);
                ((node_1165) ? node_1165 = come_decrement_ref_count2(node_1165, ((struct sNode*)node_1165)->finalize, ((struct sNode*)node_1165)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
            }
            else {
                finalizer_1114=fun2_1163;
            }
            __dec_obj201=info->source;
            info->source=(struct buffer*)come_increment_ref_count(source3_1153);
            come_call_finalizer3(__dec_obj201,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
            info->p=p_1149;
            info->head=head_1152;
            info->sline=sline_1150;
            __dec_obj202=info->sname;
            info->sname=(char*)come_increment_ref_count(sname_1151);
            __dec_obj202 = come_decrement_ref_count2(__dec_obj202, (void*)0, (void*)0, 0,0,0, (void*)0);
            come_call_finalizer3(source_1132,buffer_finalize, 0, 0, 0, 0, (void*)0);
            (sname_1151 = come_decrement_ref_count2(sname_1151, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(source3_1153,buffer_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(block_1154,sBlock_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(result_type_1155,sType_finalize, 0, 0, 0, 0, (void*)0);
            (name_1156 = come_decrement_ref_count2(name_1156, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(self_type_1157,sType_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_types_1158,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_names_1161,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(param_default_parametors_1162,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
            come_call_finalizer3(fun2_1163,sFun_finalize, 0, 0, 0, 0, (void*)0);
        }
        (user_real_fun_name_1128 = come_decrement_ref_count2(user_real_fun_name_1128, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(type2_1130,sType_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1112;
    __dec_obj203=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1109);
    __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj204=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1110);
    __dec_obj204 = come_decrement_ref_count2(__dec_obj204, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1111;
    __result_obj__440 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1163=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3030, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),finalizer_1114,(char*)come_increment_ref_count(real_fun_name_1113)))));
    (last_code_1109 = come_decrement_ref_count2(last_code_1109, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1110 = come_decrement_ref_count2(last_code2_1110, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1113 = come_decrement_ref_count2(real_fun_name_1113, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type_before_1115,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(type2_1116,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1117 = come_decrement_ref_count2(fun_name2_1117, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1163,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__440,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__440;
}

static struct sGenericsFun* map$2char$phsGenericsFun$ph$p_operator_load_element(struct map$2char$phsGenericsFun$ph* self, char* key){
struct sGenericsFun* default_value_1121;
unsigned int hash_1122;
unsigned int it_1123;
struct sGenericsFun* __result_obj__423;
struct sGenericsFun* __result_obj__424;
struct sGenericsFun* __result_obj__425;
struct sGenericsFun* __result_obj__426;
default_value_1121 = (void*)0;
    memset(&default_value_1121,0,sizeof(struct sGenericsFun*));
    hash_1122=string_get_hash_key(((char*)key))%self->size;
    it_1123=hash_1122;
    while((_Bool)1) {
        if(        self->item_existance[it_1123]) {
            if(            string_equals(self->keys[it_1123],key)) {
                __result_obj__423 = come_increment_ref_count(self->items[it_1123]);
                come_call_finalizer3(default_value_1121,sGenericsFun_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__423,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__423;
            }
            it_1123++;
            if(            it_1123>=self->size) {
                it_1123=0;
            }
            else if(            it_1123==hash_1122) {
                __result_obj__424 = come_increment_ref_count(default_value_1121);
                come_call_finalizer3(default_value_1121,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__424,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__424;
            }
        }
        else {
            __result_obj__425 = come_increment_ref_count(default_value_1121);
            come_call_finalizer3(default_value_1121,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__425,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__425;
        }
    }
    __result_obj__426 = come_increment_ref_count(default_value_1121);
    come_call_finalizer3(default_value_1121,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__426,sGenericsFun_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__426;
}

static struct sClass* map$2char$phsClass$ph$p_operator_load_element(struct map$2char$phsClass$ph* self, char* key){
struct sClass* default_value_1134;
unsigned int hash_1135;
unsigned int it_1136;
struct sClass* __result_obj__427;
struct sClass* __result_obj__428;
struct sClass* __result_obj__429;
struct sClass* __result_obj__430;
default_value_1134 = (void*)0;
    memset(&default_value_1134,0,sizeof(struct sClass*));
    hash_1135=string_get_hash_key(((char*)key))%self->size;
    it_1136=hash_1135;
    while((_Bool)1) {
        if(        self->item_existance[it_1136]) {
            if(            string_equals(self->keys[it_1136],key)) {
                __result_obj__427 = come_increment_ref_count(self->items[it_1136]);
                come_call_finalizer3(default_value_1134,sClass_finalize, 0, 0, 0, 0, (void*)0);
                come_call_finalizer3(__result_obj__427,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__427;
            }
            it_1136++;
            if(            it_1136>=self->size) {
                it_1136=0;
            }
            else if(            it_1136==hash_1135) {
                __result_obj__428 = come_increment_ref_count(default_value_1134);
                come_call_finalizer3(default_value_1134,sClass_finalize, 0, 0, 1, 0, (void*)0);
                come_call_finalizer3(__result_obj__428,sClass_finalize, 0, 0, 1, 0, (void*)0);
                return __result_obj__428;
            }
        }
        else {
            __result_obj__429 = come_increment_ref_count(default_value_1134);
            come_call_finalizer3(default_value_1134,sClass_finalize, 0, 0, 1, 0, (void*)0);
            come_call_finalizer3(__result_obj__429,sClass_finalize, 0, 0, 1, 0, (void*)0);
            return __result_obj__429;
        }
    }
    __result_obj__430 = come_increment_ref_count(default_value_1134);
    come_call_finalizer3(default_value_1134,sClass_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__430,sClass_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__430;
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
struct list_item$1tuple2$2char$phsType$ph$ph* it_1137;
struct list_item$1tuple2$2char$phsType$ph$ph* prev_it_1138;
    it_1137=self->head;
    while(it_1137!=((void*)0)) {
        prev_it_1138=it_1137;
        it_1137=it_1137->next;
        come_call_finalizer3(prev_it_1138,list_item$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
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
struct tuple2$2char$phsType$ph* result_1140;
struct tuple2$2char$phsType$ph* __result_obj__431;
struct tuple2$2char$phsType$ph* __result_obj__432;
struct tuple2$2char$phsType$ph* result_1141;
struct tuple2$2char$phsType$ph* __result_obj__433;
result_1140 = (void*)0;
result_1141 = (void*)0;
    if(    self==((void*)0)) {
        memset(&result_1140,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__431 = result_1140;
        return __result_obj__431;
    }
    self->it=self->head;
    if(    self->it) {
        __result_obj__432 = self->it->item;
        return __result_obj__432;
    }
    memset(&result_1141,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__433 = result_1141;
    return __result_obj__433;
}

static _Bool list$1tuple2$2char$phsType$ph$ph$p_end(struct list$1tuple2$2char$phsType$ph$ph* self){
    return self==((void*)0)||self->it==((void*)0);
}

static struct tuple2$2char$phsType$ph* list$1tuple2$2char$phsType$ph$ph$p_next(struct list$1tuple2$2char$phsType$ph$ph* self){
struct tuple2$2char$phsType$ph* result_1143;
struct tuple2$2char$phsType$ph* __result_obj__434;
struct tuple2$2char$phsType$ph* __result_obj__435;
struct tuple2$2char$phsType$ph* result_1144;
struct tuple2$2char$phsType$ph* __result_obj__436;
result_1143 = (void*)0;
result_1144 = (void*)0;
    if(    self==((void*)0)||self->it==((void*)0)) {
        memset(&result_1143,0,sizeof(struct tuple2$2char$phsType$ph*));
        __result_obj__434 = result_1143;
        return __result_obj__434;
    }
    self->it=self->it->next;
    if(    self->it) {
        __result_obj__435 = self->it->item;
        return __result_obj__435;
    }
    memset(&result_1144,0,sizeof(struct tuple2$2char$phsType$ph*));
    __result_obj__436 = result_1144;
    return __result_obj__436;
}

static void tuple2$2sFun$pchar$ph_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_clone(struct tuple2$2sFun$pchar$ph* self){
struct tuple2$2sFun$pchar$ph* __result_obj__437;
void* __right_value1160 = (void*)0;
struct tuple2$2sFun$pchar$ph* result_1167;
void* __right_value1161 = (void*)0;
char* __dec_obj205;
struct tuple2$2sFun$pchar$ph* __result_obj__438;
    if(    self==(void*)0) {
        __result_obj__437 = come_increment_ref_count((void*)0);
        come_call_finalizer3(__result_obj__437,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__437;
    }
    result_1167=(struct tuple2$2sFun$pchar$ph*)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "tuple2$2sFun$pchar$ph_clone", 3, "struct tuple2$2sFun$pchar$ph*", (void*)0, (void*)0, (void*)0, (void*)0));
    if(    self!=((void*)0)) {
        result_1167->v1=self->v1;
    }
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        __dec_obj205=result_1167->v2;
        result_1167->v2=(char*)come_increment_ref_count(come_call_cloner(string_clone, self->v2));
        __dec_obj205 = come_decrement_ref_count2(__dec_obj205, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    __result_obj__438 = come_increment_ref_count(result_1167);
    come_call_finalizer3(result_1167,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    come_call_finalizer3(__result_obj__438,tuple2$2sFun$pchar$ph_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__438;
}

static unsigned int tuple2$2sFun$pchar$ph_get_hash_key(struct tuple2$2sFun$pchar$ph* self){
unsigned int result_1168;
    result_1168=0;
    result_1168+=int_get_hash_key(((int)self->v1));
    result_1168+=int_get_hash_key(((int)self->v2));
    return result_1168;
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

static struct tuple2$2sFun$pchar$ph* tuple2$2sFun$pchar$ph_initialize(struct tuple2$2sFun$pchar$ph* self, struct sFun* v1, char* v2){
char* __dec_obj206;
struct tuple2$2sFun$pchar$ph* __result_obj__439;
    self->v1=v1;
    __dec_obj206=self->v2;
    self->v2=(char*)come_increment_ref_count(v2);
    __dec_obj206 = come_decrement_ref_count2(__dec_obj206, (void*)0, (void*)0, 0,0,0, (void*)0);
    __result_obj__439 = come_increment_ref_count(self);
    come_call_finalizer3(self,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    (v2 = come_decrement_ref_count2(v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__result_obj__439,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__439;
}

static void tuple2$2sFun$pchar$ph$p_finalize(struct tuple2$2sFun$pchar$ph* self){
    if(    self!=((void*)0)&&self->v2!=((void*)0)) {
        (self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
}

struct tuple2$2sFun$pchar$ph* create_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1169;
char* __dec_obj207;
char* last_code2_1170;
char* __dec_obj208;
_Bool comma_instead_of_semicolon_1171;
struct sClass* current_stack_frame_struct_1172;
struct sFun* equaler_1173;
void* __right_value1164 = (void*)0;
char* real_fun_name_1174;
void* __right_value1165 = (void*)0;
struct sType* type2_1175;
struct sClass* klass_1176;
void* __right_value1166 = (void*)0;
void* __right_value1167 = (void*)0;
struct buffer* source_1177;
char* name_1178;
void* __right_value1168 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1180;
struct tuple2$2char$phsType$ph* it_1181;
struct tuple2$2char$phsType$ph* multiple_assign_var37 = (void*)0;
char* name_1182=0;
struct sType* field_type_1183=0;
char* p_1185;
int sline_1186;
char* sname_1187;
char* head_1188;
struct buffer* source3_1189;
struct buffer* __dec_obj209;
void* __right_value1169 = (void*)0;
char* __dec_obj210;
void* __right_value1170 = (void*)0;
struct sBlock* block_1190;
void* __right_value1171 = (void*)0;
void* __right_value1172 = (void*)0;
void* __right_value1173 = (void*)0;
struct sType* result_type_1191;
void* __right_value1174 = (void*)0;
char* name_1192;
void* __right_value1175 = (void*)0;
struct sType* left_type_1193;
void* __right_value1176 = (void*)0;
struct sType* right_type_1194;
struct sType* __list_values23___1196[2];
void* __right_value1177 = (void*)0;
void* __right_value1178 = (void*)0;
struct list$1sType$ph* param_types_1195;
void* __right_value1179 = (void*)0;
void* __right_value1180 = (void*)0;
char* __list_values24___1197[2];
void* __right_value1181 = (void*)0;
void* __right_value1182 = (void*)0;
struct list$1char$ph* param_names_1198;
void* __right_value1183 = (void*)0;
void* __right_value1184 = (void*)0;
struct list$1char$ph* param_default_parametors_1199;
void* __right_value1185 = (void*)0;
void* __right_value1186 = (void*)0;
struct sFun* fun2_1200;
void* __right_value1187 = (void*)0;
void* __right_value1188 = (void*)0;
void* __right_value1189 = (void*)0;
void* __right_value1190 = (void*)0;
struct sFun* fun_1201;
void* __right_value1191 = (void*)0;
void* __right_value1192 = (void*)0;
void* __right_value1193 = (void*)0;
struct sNode* _inf_value10;
struct sFunNode* _inf_obj_value10;
void* __right_value1194 = (void*)0;
struct sNode* node_1202;
_Bool Value_1203;
void* __right_value1195 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var38 = (void*)0;
int come_exception_var_c24_1204=0;
char* Err_1205=0;
struct buffer* __dec_obj211;
char* __dec_obj212;
char* __dec_obj213;
char* __dec_obj214;
void* __right_value1196 = (void*)0;
void* __right_value1197 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__441;
    last_code_1169=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj207=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1170=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj208=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1171=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1172=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1173=((void*)0);
    real_fun_name_1174=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1175=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1175;
    klass_1176=type->mClass;
    if(    type->mPointerNum>0&&!klass_1176->mNumber) {
        source_1177=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3056, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1177,123);
        if(        klass_1176->mProtocol) {
            name_1178="_protocol_obj";
            char source2_1179[1024];
            memset(&source2_1179, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1179,1024,"return left.%s.equals(right.%s);\n",name_1178,name_1178);
            buffer_append_str(source_1177,source2_1179);
        }
        else {
            klass_1176=((struct sClass*)(__right_value1168=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1176->mName)));
            come_call_finalizer3(__right_value1168,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1180=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1176->mFields)),it_1181=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1180));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1180));            it_1181=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1180))            ){
                multiple_assign_var37=it_1181;
                name_1182=(char*)come_increment_ref_count(multiple_assign_var37->v1);
                field_type_1183=(struct sType*)come_increment_ref_count(multiple_assign_var37->v2);
                char source2_1184[1024];
                memset(&source2_1184, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1184,1024,"if(!left.%s.equals(right.%s)) { return false; }\n",name_1182,name_1182,name_1182);
                buffer_append_str(source_1177,source2_1184);
                (name_1182 = come_decrement_ref_count2(name_1182, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1183,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1180,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1177,"return true;");
        buffer_append_char(source_1177,125);
        p_1185=info->p;
        sline_1186=info->sline;
        sname_1187=(char*)come_increment_ref_count(info->sname);
        head_1188=info->head;
        source3_1189=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj209=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1177);
        come_call_finalizer3(__dec_obj209,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1177->buf;
        info->head=source_1177->buf;
        __dec_obj210=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1174));
        __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1190=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1191=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3096, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1192=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1174));
        left_type_1193=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1193->mHeap=(_Bool)0;
        right_type_1194=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1194->mHeap=(_Bool)0;
        param_types_1195=(struct list$1sType$ph*)come_increment_ref_count((__list_values23___1196[0]=left_type_1193,
__list_values23___1196[1]=right_type_1194,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3102, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values23___1196)));
        param_names_1198=(struct list$1char$ph*)come_increment_ref_count((__list_values24___1197[0]=((char*)(__right_value1179=__builtin_string("left"))),
__list_values24___1197[1]=((char*)(__right_value1180=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3103, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values24___1197)));
        (__right_value1179 = come_decrement_ref_count2(__right_value1179, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1180 = come_decrement_ref_count2(__right_value1180, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1199=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3104, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1199,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1199,((void*)0));
        result_type_1191->mStatic=(_Bool)0;
        result_type_1191->mUniq=(_Bool)0;
        result_type_1191->mInline=(_Bool)0;
        result_type_1191->mGenerate=(_Bool)0;
        fun2_1200=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1185=__builtin_string(name_1192)))));
        (__right_value1185 = come_decrement_ref_count2(__right_value1185, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1200==((void*)0)||fun2_1200->mExternal) {
            fun_1201=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3115, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1192),(struct sType*)come_increment_ref_count(result_type_1191),(struct list$1sType$ph*)come_increment_ref_count(param_types_1195),(struct list$1char$ph*)come_increment_ref_count(param_names_1198),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1199),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1190),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1192)),(struct sFun*)come_increment_ref_count(fun_1201));
            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3123, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value10=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1193=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3123, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1201),info))));
            _inf_value10->_protocol_obj=_inf_obj_value10;
            _inf_value10->finalize=(void*)sFunNode_finalize;
            _inf_value10->clone=(void*)sFunNode_clone;
            _inf_value10->compile=(void*)sFunNode_compile;
            _inf_value10->sline=(void*)sNodeBase_sline;
            _inf_value10->sline_real=(void*)sNodeBase_sline_real;
            _inf_value10->sname=(void*)sNodeBase_sname;
            _inf_value10->terminated=(void*)sNodeBase_terminated;
            _inf_value10->kind=(void*)sFunNode_kind;
            node_1202=(struct sNode*)come_increment_ref_count(_inf_value10);
            come_call_finalizer3(__right_value1193,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1203=node_compile(node_1202,info);
            if(            !Value_1203) {
                multiple_assign_var38=((struct tuple2$2int$char$ph*)(__right_value1195=err_msg(info,"compiling error")));
                come_exception_var_c24_1204=multiple_assign_var38->v1;
                Err_1205=(char*)come_increment_ref_count(multiple_assign_var38->v2);
                ((Err_1205)?(puts(Err_1205),exit(0)):(0));
                come_call_finalizer3(__right_value1195,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1205 = come_decrement_ref_count2(Err_1205, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1173=fun_1201;
            come_call_finalizer3(fun_1201,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1202) ? node_1202 = come_decrement_ref_count2(node_1202, ((struct sNode*)node_1202)->finalize, ((struct sNode*)node_1202)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1173=fun2_1200;
        }
        __dec_obj211=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1189);
        come_call_finalizer3(__dec_obj211,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1185;
        info->head=head_1188;
        info->sline=sline_1186;
        __dec_obj212=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1187);
        __dec_obj212 = come_decrement_ref_count2(__dec_obj212, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1177,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1187 = come_decrement_ref_count2(sname_1187, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1189,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1190,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1191,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1192 = come_decrement_ref_count2(name_1192, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1193,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1194,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1195,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1198,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1199,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1200,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1172;
    __dec_obj213=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1169);
    __dec_obj213 = come_decrement_ref_count2(__dec_obj213, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj214=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1170);
    __dec_obj214 = come_decrement_ref_count2(__dec_obj214, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1171;
    __result_obj__441 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1197=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3149, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1173,(char*)come_increment_ref_count(real_fun_name_1174)))));
    (last_code_1169 = come_decrement_ref_count2(last_code_1169, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1170 = come_decrement_ref_count2(last_code2_1170, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1174 = come_decrement_ref_count2(real_fun_name_1174, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1175,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1197,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__441,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__441;
}

struct tuple2$2sFun$pchar$ph* create_operator_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1206;
char* __dec_obj215;
char* last_code2_1207;
char* __dec_obj216;
_Bool comma_instead_of_semicolon_1208;
struct sClass* current_stack_frame_struct_1209;
struct sFun* equaler_1210;
void* __right_value1198 = (void*)0;
char* real_fun_name_1211;
void* __right_value1199 = (void*)0;
struct sType* type2_1212;
struct sClass* klass_1213;
void* __right_value1200 = (void*)0;
void* __right_value1201 = (void*)0;
struct buffer* source_1214;
char* name_1215;
int i_1218;
void* __right_value1202 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1219;
struct tuple2$2char$phsType$ph* it_1220;
struct tuple2$2char$phsType$ph* multiple_assign_var39 = (void*)0;
char* name_1221=0;
struct sType* field_type_1222=0;
char* p_1226;
int sline_1227;
char* sname_1228;
char* head_1229;
struct buffer* source3_1230;
struct buffer* __dec_obj217;
void* __right_value1203 = (void*)0;
char* __dec_obj218;
void* __right_value1204 = (void*)0;
struct sBlock* block_1231;
void* __right_value1205 = (void*)0;
void* __right_value1206 = (void*)0;
void* __right_value1207 = (void*)0;
struct sType* result_type_1232;
void* __right_value1208 = (void*)0;
char* name_1233;
void* __right_value1209 = (void*)0;
struct sType* left_type_1234;
void* __right_value1210 = (void*)0;
struct sType* right_type_1235;
struct sType* __list_values25___1237[2];
void* __right_value1211 = (void*)0;
void* __right_value1212 = (void*)0;
struct list$1sType$ph* param_types_1236;
void* __right_value1213 = (void*)0;
void* __right_value1214 = (void*)0;
char* __list_values26___1238[2];
void* __right_value1215 = (void*)0;
void* __right_value1216 = (void*)0;
struct list$1char$ph* param_names_1239;
void* __right_value1217 = (void*)0;
void* __right_value1218 = (void*)0;
struct list$1char$ph* param_default_parametors_1240;
void* __right_value1219 = (void*)0;
void* __right_value1220 = (void*)0;
struct sFun* fun2_1241;
void* __right_value1221 = (void*)0;
void* __right_value1222 = (void*)0;
void* __right_value1223 = (void*)0;
void* __right_value1224 = (void*)0;
struct sFun* fun_1242;
void* __right_value1225 = (void*)0;
void* __right_value1226 = (void*)0;
void* __right_value1227 = (void*)0;
struct sNode* _inf_value11;
struct sFunNode* _inf_obj_value11;
void* __right_value1228 = (void*)0;
struct sNode* node_1243;
_Bool Value_1244;
void* __right_value1229 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var40 = (void*)0;
int come_exception_var_c25_1245=0;
char* Err_1246=0;
struct buffer* __dec_obj219;
char* __dec_obj220;
char* __dec_obj221;
char* __dec_obj222;
void* __right_value1230 = (void*)0;
void* __right_value1231 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__442;
    last_code_1206=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj215=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj215 = come_decrement_ref_count2(__dec_obj215, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1207=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj216=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj216 = come_decrement_ref_count2(__dec_obj216, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1208=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1209=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1210=((void*)0);
    real_fun_name_1211=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1212=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1212;
    klass_1213=type->mClass;
    if(    type->mPointerNum>0&&!klass_1213->mNumber) {
        source_1214=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3174, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1214,123);
        if(        klass_1213->mProtocol) {
            name_1215="_protocol_obj";
            char source2_1216[1024];
            memset(&source2_1216, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1216,1024,"return left.%s !== right.%s;\n",name_1215,name_1215);
            buffer_append_str(source_1214,source2_1216);
        }
        else {
            char source2_1217[1024];
            memset(&source2_1217, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1217,1024,"return !(");
            buffer_append_str(source_1214,source2_1217);
            snprintf(source2_1217,1024,"( ");
            buffer_append_str(source_1214,source2_1217);
            i_1218=0;
            klass_1213=((struct sClass*)(__right_value1202=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1213->mName)));
            come_call_finalizer3(__right_value1202,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1219=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1213->mFields)),it_1220=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1219));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1219));            it_1220=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1219))            ){
                multiple_assign_var39=it_1220;
                name_1221=(char*)come_increment_ref_count(multiple_assign_var39->v1);
                field_type_1222=(struct sType*)come_increment_ref_count(multiple_assign_var39->v2);
                char source2_1223[1024];
                memset(&source2_1223, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1223,1024,"(left.%s === right.%s)",name_1221,name_1221,name_1221);
                buffer_append_str(source_1214,source2_1223);
                if(                i_1218==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1213->mFields)-1) {
                    char source2_1224[1024];
                    memset(&source2_1224, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1224,1024,"));");
                    buffer_append_str(source_1214,source2_1224);
                }
                else {
                    char source2_1225[1024];
                    memset(&source2_1225, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1225,1024," && ");
                    buffer_append_str(source_1214,source2_1225);
                }
                i_1218++;
                (name_1221 = come_decrement_ref_count2(name_1221, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1222,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1219,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1214,125);
        p_1226=info->p;
        sline_1227=info->sline;
        sname_1228=(char*)come_increment_ref_count(info->sname);
        head_1229=info->head;
        source3_1230=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj217=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1214);
        come_call_finalizer3(__dec_obj217,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1214->buf;
        info->head=source_1214->buf;
        __dec_obj218=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1211));
        __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1231=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1232=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3234, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1233=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1211));
        left_type_1234=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1234->mHeap=(_Bool)0;
        right_type_1235=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1235->mHeap=(_Bool)0;
        param_types_1236=(struct list$1sType$ph*)come_increment_ref_count((__list_values25___1237[0]=left_type_1234,
__list_values25___1237[1]=right_type_1235,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3240, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values25___1237)));
        param_names_1239=(struct list$1char$ph*)come_increment_ref_count((__list_values26___1238[0]=((char*)(__right_value1213=__builtin_string("left"))),
__list_values26___1238[1]=((char*)(__right_value1214=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3241, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values26___1238)));
        (__right_value1213 = come_decrement_ref_count2(__right_value1213, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1214 = come_decrement_ref_count2(__right_value1214, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1240=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3242, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1240,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1240,((void*)0));
        result_type_1232->mStatic=(_Bool)0;
        result_type_1232->mUniq=(_Bool)0;
        result_type_1232->mInline=(_Bool)0;
        result_type_1232->mGenerate=(_Bool)0;
        fun2_1241=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1219=__builtin_string(name_1233)))));
        (__right_value1219 = come_decrement_ref_count2(__right_value1219, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1241==((void*)0)||fun2_1241->mExternal) {
            fun_1242=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3253, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1233),(struct sType*)come_increment_ref_count(result_type_1232),(struct list$1sType$ph*)come_increment_ref_count(param_types_1236),(struct list$1char$ph*)come_increment_ref_count(param_names_1239),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1240),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1231),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1233)),(struct sFun*)come_increment_ref_count(fun_1242));
            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3261, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value11=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1227=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3261, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1242),info))));
            _inf_value11->_protocol_obj=_inf_obj_value11;
            _inf_value11->finalize=(void*)sFunNode_finalize;
            _inf_value11->clone=(void*)sFunNode_clone;
            _inf_value11->compile=(void*)sFunNode_compile;
            _inf_value11->sline=(void*)sNodeBase_sline;
            _inf_value11->sline_real=(void*)sNodeBase_sline_real;
            _inf_value11->sname=(void*)sNodeBase_sname;
            _inf_value11->terminated=(void*)sNodeBase_terminated;
            _inf_value11->kind=(void*)sFunNode_kind;
            node_1243=(struct sNode*)come_increment_ref_count(_inf_value11);
            come_call_finalizer3(__right_value1227,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1244=node_compile(node_1243,info);
            if(            !Value_1244) {
                multiple_assign_var40=((struct tuple2$2int$char$ph*)(__right_value1229=err_msg(info,"compiling error")));
                come_exception_var_c25_1245=multiple_assign_var40->v1;
                Err_1246=(char*)come_increment_ref_count(multiple_assign_var40->v2);
                ((Err_1246)?(puts(Err_1246),exit(0)):(0));
                come_call_finalizer3(__right_value1229,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1246 = come_decrement_ref_count2(Err_1246, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1210=fun_1242;
            come_call_finalizer3(fun_1242,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1243) ? node_1243 = come_decrement_ref_count2(node_1243, ((struct sNode*)node_1243)->finalize, ((struct sNode*)node_1243)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1210=fun2_1241;
        }
        __dec_obj219=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1230);
        come_call_finalizer3(__dec_obj219,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1226;
        info->head=head_1229;
        info->sline=sline_1227;
        __dec_obj220=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1228);
        __dec_obj220 = come_decrement_ref_count2(__dec_obj220, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1214,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1228 = come_decrement_ref_count2(sname_1228, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1230,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1231,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1232,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1233 = come_decrement_ref_count2(name_1233, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1234,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1235,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1236,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1239,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1240,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1241,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1209;
    __dec_obj221=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1206);
    __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj222=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1207);
    __dec_obj222 = come_decrement_ref_count2(__dec_obj222, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1208;
    __result_obj__442 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1231=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3287, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1210,(char*)come_increment_ref_count(real_fun_name_1211)))));
    (last_code_1206 = come_decrement_ref_count2(last_code_1206, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1207 = come_decrement_ref_count2(last_code2_1207, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1211 = come_decrement_ref_count2(real_fun_name_1211, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1212,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1231,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__442,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__442;
}

static int list$1tuple2$2char$phsType$ph$ph$p_length(struct list$1tuple2$2char$phsType$ph$ph* self){
    if(    self==((void*)0)) {
        return 0;
    }
    return self->len;
}

struct tuple2$2sFun$pchar$ph* create_not_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1247;
char* __dec_obj223;
char* last_code2_1248;
char* __dec_obj224;
_Bool comma_instead_of_semicolon_1249;
struct sClass* current_stack_frame_struct_1250;
struct sFun* equaler_1251;
void* __right_value1232 = (void*)0;
char* real_fun_name_1252;
void* __right_value1233 = (void*)0;
struct sType* type2_1253;
struct sClass* klass_1254;
void* __right_value1234 = (void*)0;
void* __right_value1235 = (void*)0;
struct buffer* source_1255;
char* name_1256;
int i_1259;
void* __right_value1236 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1260;
struct tuple2$2char$phsType$ph* it_1261;
struct tuple2$2char$phsType$ph* multiple_assign_var41 = (void*)0;
char* name_1262=0;
struct sType* field_type_1263=0;
char* p_1267;
int sline_1268;
char* sname_1269;
char* head_1270;
struct buffer* source3_1271;
struct buffer* __dec_obj225;
void* __right_value1237 = (void*)0;
char* __dec_obj226;
void* __right_value1238 = (void*)0;
struct sBlock* block_1272;
void* __right_value1239 = (void*)0;
void* __right_value1240 = (void*)0;
void* __right_value1241 = (void*)0;
struct sType* result_type_1273;
void* __right_value1242 = (void*)0;
char* name_1274;
void* __right_value1243 = (void*)0;
struct sType* left_type_1275;
void* __right_value1244 = (void*)0;
struct sType* right_type_1276;
struct sType* __list_values27___1278[2];
void* __right_value1245 = (void*)0;
void* __right_value1246 = (void*)0;
struct list$1sType$ph* param_types_1277;
void* __right_value1247 = (void*)0;
void* __right_value1248 = (void*)0;
char* __list_values28___1279[2];
void* __right_value1249 = (void*)0;
void* __right_value1250 = (void*)0;
struct list$1char$ph* param_names_1280;
void* __right_value1251 = (void*)0;
void* __right_value1252 = (void*)0;
struct list$1char$ph* param_default_parametors_1281;
void* __right_value1253 = (void*)0;
void* __right_value1254 = (void*)0;
struct sFun* fun2_1282;
void* __right_value1255 = (void*)0;
void* __right_value1256 = (void*)0;
void* __right_value1257 = (void*)0;
void* __right_value1258 = (void*)0;
struct sFun* fun_1283;
void* __right_value1259 = (void*)0;
void* __right_value1260 = (void*)0;
void* __right_value1261 = (void*)0;
struct sNode* _inf_value12;
struct sFunNode* _inf_obj_value12;
void* __right_value1262 = (void*)0;
struct sNode* node_1284;
_Bool Value_1285;
void* __right_value1263 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var42 = (void*)0;
int come_exception_var_c26_1286=0;
char* Err_1287=0;
struct buffer* __dec_obj227;
char* __dec_obj228;
char* __dec_obj229;
char* __dec_obj230;
void* __right_value1264 = (void*)0;
void* __right_value1265 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__443;
    last_code_1247=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj223=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj223 = come_decrement_ref_count2(__dec_obj223, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1248=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj224=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1249=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1250=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1251=((void*)0);
    real_fun_name_1252=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1253=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1253;
    klass_1254=type->mClass;
    if(    type->mPointerNum>0&&!klass_1254->mNumber) {
        source_1255=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3312, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1255,123);
        if(        klass_1254->mProtocol) {
            name_1256="_protocol_obj";
            char source2_1257[1024];
            memset(&source2_1257, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1257,1024,"return !left.%s.equals(right.%s);\n",name_1256,name_1256);
            buffer_append_str(source_1255,source2_1257);
        }
        else {
            char source2_1258[1024];
            memset(&source2_1258, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1258,1024,"return !(");
            buffer_append_str(source_1255,source2_1258);
            i_1259=0;
            klass_1254=((struct sClass*)(__right_value1236=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1254->mName)));
            come_call_finalizer3(__right_value1236,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1260=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1254->mFields)),it_1261=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1260));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1260));            it_1261=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1260))            ){
                multiple_assign_var41=it_1261;
                name_1262=(char*)come_increment_ref_count(multiple_assign_var41->v1);
                field_type_1263=(struct sType*)come_increment_ref_count(multiple_assign_var41->v2);
                char source2_1264[1024];
                memset(&source2_1264, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1264,1024,"left.%s.equals(right.%s)",name_1262,name_1262);
                buffer_append_str(source_1255,source2_1264);
                if(                i_1259==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1254->mFields)-1) {
                    char source2_1265[1024];
                    memset(&source2_1265, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1265,1024,");");
                    buffer_append_str(source_1255,source2_1265);
                }
                else {
                    char source2_1266[1024];
                    memset(&source2_1266, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1266,1024," && ");
                    buffer_append_str(source_1255,source2_1266);
                }
                i_1259++;
                (name_1262 = come_decrement_ref_count2(name_1262, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1263,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1260,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_char(source_1255,125);
        p_1267=info->p;
        sline_1268=info->sline;
        sname_1269=(char*)come_increment_ref_count(info->sname);
        head_1270=info->head;
        source3_1271=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj225=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1255);
        come_call_finalizer3(__dec_obj225,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1255->buf;
        info->head=source_1255->buf;
        __dec_obj226=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1252));
        __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1272=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1273=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3369, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1274=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1252));
        left_type_1275=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1275->mHeap=(_Bool)0;
        right_type_1276=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1276->mHeap=(_Bool)0;
        param_types_1277=(struct list$1sType$ph*)come_increment_ref_count((__list_values27___1278[0]=left_type_1275,
__list_values27___1278[1]=right_type_1276,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3375, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values27___1278)));
        param_names_1280=(struct list$1char$ph*)come_increment_ref_count((__list_values28___1279[0]=((char*)(__right_value1247=__builtin_string("left"))),
__list_values28___1279[1]=((char*)(__right_value1248=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3376, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values28___1279)));
        (__right_value1247 = come_decrement_ref_count2(__right_value1247, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1248 = come_decrement_ref_count2(__right_value1248, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1281=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3377, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1281,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1281,((void*)0));
        result_type_1273->mStatic=(_Bool)0;
        result_type_1273->mUniq=(_Bool)0;
        result_type_1273->mInline=(_Bool)0;
        result_type_1273->mGenerate=(_Bool)0;
        fun2_1282=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1253=__builtin_string(name_1274)))));
        (__right_value1253 = come_decrement_ref_count2(__right_value1253, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1282==((void*)0)||fun2_1282->mExternal) {
            fun_1283=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3388, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1274),(struct sType*)come_increment_ref_count(result_type_1273),(struct list$1sType$ph*)come_increment_ref_count(param_types_1277),(struct list$1char$ph*)come_increment_ref_count(param_names_1280),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1281),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1272),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1274)),(struct sFun*)come_increment_ref_count(fun_1283));
            _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3396, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value12=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1261=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3396, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1283),info))));
            _inf_value12->_protocol_obj=_inf_obj_value12;
            _inf_value12->finalize=(void*)sFunNode_finalize;
            _inf_value12->clone=(void*)sFunNode_clone;
            _inf_value12->compile=(void*)sFunNode_compile;
            _inf_value12->sline=(void*)sNodeBase_sline;
            _inf_value12->sline_real=(void*)sNodeBase_sline_real;
            _inf_value12->sname=(void*)sNodeBase_sname;
            _inf_value12->terminated=(void*)sNodeBase_terminated;
            _inf_value12->kind=(void*)sFunNode_kind;
            node_1284=(struct sNode*)come_increment_ref_count(_inf_value12);
            come_call_finalizer3(__right_value1261,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1285=node_compile(node_1284,info);
            if(            !Value_1285) {
                multiple_assign_var42=((struct tuple2$2int$char$ph*)(__right_value1263=err_msg(info,"compiling error")));
                come_exception_var_c26_1286=multiple_assign_var42->v1;
                Err_1287=(char*)come_increment_ref_count(multiple_assign_var42->v2);
                ((Err_1287)?(puts(Err_1287),exit(0)):(0));
                come_call_finalizer3(__right_value1263,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1287 = come_decrement_ref_count2(Err_1287, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1251=fun_1283;
            come_call_finalizer3(fun_1283,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1284) ? node_1284 = come_decrement_ref_count2(node_1284, ((struct sNode*)node_1284)->finalize, ((struct sNode*)node_1284)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1251=fun2_1282;
        }
        __dec_obj227=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1271);
        come_call_finalizer3(__dec_obj227,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1267;
        info->head=head_1270;
        info->sline=sline_1268;
        __dec_obj228=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1269);
        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1255,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1269 = come_decrement_ref_count2(sname_1269, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1271,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1272,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1273,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1274 = come_decrement_ref_count2(name_1274, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1275,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1276,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1277,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1280,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1281,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1282,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1250;
    __dec_obj229=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1247);
    __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj230=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1248);
    __dec_obj230 = come_decrement_ref_count2(__dec_obj230, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1249;
    __result_obj__443 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1265=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3422, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1251,(char*)come_increment_ref_count(real_fun_name_1252)))));
    (last_code_1247 = come_decrement_ref_count2(last_code_1247, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1248 = come_decrement_ref_count2(last_code2_1248, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1252 = come_decrement_ref_count2(real_fun_name_1252, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1253,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1265,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__443,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__443;
}

struct tuple2$2sFun$pchar$ph* create_operator_equals_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1288;
char* __dec_obj231;
char* last_code2_1289;
char* __dec_obj232;
_Bool comma_instead_of_semicolon_1290;
struct sClass* current_stack_frame_struct_1291;
struct sFun* equaler_1292;
void* __right_value1266 = (void*)0;
char* real_fun_name_1293;
void* __right_value1267 = (void*)0;
struct sType* type2_1294;
struct sClass* klass_1295;
void* __right_value1268 = (void*)0;
void* __right_value1269 = (void*)0;
struct buffer* source_1296;
char* name_1297;
void* __right_value1270 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1300;
struct tuple2$2char$phsType$ph* it_1301;
struct tuple2$2char$phsType$ph* multiple_assign_var43 = (void*)0;
char* name_1302=0;
struct sType* field_type_1303=0;
char* p_1305;
int sline_1306;
char* sname_1307;
char* head_1308;
struct buffer* source3_1309;
struct buffer* __dec_obj233;
void* __right_value1271 = (void*)0;
char* __dec_obj234;
void* __right_value1272 = (void*)0;
struct sBlock* block_1310;
void* __right_value1273 = (void*)0;
void* __right_value1274 = (void*)0;
void* __right_value1275 = (void*)0;
struct sType* result_type_1311;
void* __right_value1276 = (void*)0;
char* name_1312;
void* __right_value1277 = (void*)0;
struct sType* left_type_1313;
void* __right_value1278 = (void*)0;
struct sType* right_type_1314;
struct sType* __list_values29___1316[2];
void* __right_value1279 = (void*)0;
void* __right_value1280 = (void*)0;
struct list$1sType$ph* param_types_1315;
void* __right_value1281 = (void*)0;
void* __right_value1282 = (void*)0;
char* __list_values30___1317[2];
void* __right_value1283 = (void*)0;
void* __right_value1284 = (void*)0;
struct list$1char$ph* param_names_1318;
void* __right_value1285 = (void*)0;
void* __right_value1286 = (void*)0;
struct list$1char$ph* param_default_parametors_1319;
void* __right_value1287 = (void*)0;
void* __right_value1288 = (void*)0;
struct sFun* fun2_1320;
void* __right_value1289 = (void*)0;
void* __right_value1290 = (void*)0;
void* __right_value1291 = (void*)0;
void* __right_value1292 = (void*)0;
struct sFun* fun_1321;
void* __right_value1293 = (void*)0;
void* __right_value1294 = (void*)0;
void* __right_value1295 = (void*)0;
struct sNode* _inf_value13;
struct sFunNode* _inf_obj_value13;
void* __right_value1296 = (void*)0;
struct sNode* node_1322;
_Bool Value_1323;
void* __right_value1297 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var44 = (void*)0;
int come_exception_var_c27_1324=0;
char* Err_1325=0;
struct buffer* __dec_obj235;
char* __dec_obj236;
char* __dec_obj237;
char* __dec_obj238;
void* __right_value1298 = (void*)0;
void* __right_value1299 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__444;
    last_code_1288=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj231=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1289=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj232=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1290=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1291=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    equaler_1292=((void*)0);
    real_fun_name_1293=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1294=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1294;
    klass_1295=type->mClass;
    if(    type->mPointerNum>0&&!klass_1295->mNumber) {
        source_1296=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3447, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_char(source_1296,123);
        if(        klass_1295->mProtocol) {
            name_1297="_protocol_obj";
            char source2_1298[1024];
            memset(&source2_1298, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1298,1024,"return left.%s === right.%s;\n",name_1297,name_1297);
            buffer_append_str(source_1296,source2_1298);
        }
        else {
            char source2_1299[1024];
            memset(&source2_1299, 0, sizeof(char)            *(1024)            );
            klass_1295=((struct sClass*)(__right_value1270=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1295->mName)));
            come_call_finalizer3(__right_value1270,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1300=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1295->mFields)),it_1301=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1300));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1300));            it_1301=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1300))            ){
                multiple_assign_var43=it_1301;
                name_1302=(char*)come_increment_ref_count(multiple_assign_var43->v1);
                field_type_1303=(struct sType*)come_increment_ref_count(multiple_assign_var43->v2);
                char source2_1304[1024];
                memset(&source2_1304, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1304,1024,"if(left.%s !== right.%s) { return false; }\n",name_1302,name_1302,name_1302);
                buffer_append_str(source_1296,source2_1304);
                (name_1302 = come_decrement_ref_count2(name_1302, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1303,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1300,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        buffer_append_str(source_1296,"return true;\n");
        buffer_append_char(source_1296,125);
        p_1305=info->p;
        sline_1306=info->sline;
        sname_1307=(char*)come_increment_ref_count(info->sname);
        head_1308=info->head;
        source3_1309=(struct buffer*)come_increment_ref_count(info->source);
        __dec_obj233=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1296);
        come_call_finalizer3(__dec_obj233,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=source_1296->buf;
        info->head=source_1296->buf;
        __dec_obj234=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1293));
        __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=0;
        block_1310=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1311=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3489, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("bool")),(_Bool)0,info));
        name_1312=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1293));
        left_type_1313=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        left_type_1313->mHeap=(_Bool)0;
        right_type_1314=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        right_type_1314->mHeap=(_Bool)0;
        param_types_1315=(struct list$1sType$ph*)come_increment_ref_count((__list_values29___1316[0]=left_type_1313,
__list_values29___1316[1]=right_type_1314,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3495, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),2,__list_values29___1316)));
        param_names_1318=(struct list$1char$ph*)come_increment_ref_count((__list_values30___1317[0]=((char*)(__right_value1281=__builtin_string("left"))),
__list_values30___1317[1]=((char*)(__right_value1282=__builtin_string("right"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3496, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),2,__list_values30___1317)));
        (__right_value1281 = come_decrement_ref_count2(__right_value1281, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (__right_value1282 = come_decrement_ref_count2(__right_value1282, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1319=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3497, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1319,((void*)0));
        list$1char$ph$p_push_back(param_default_parametors_1319,((void*)0));
        result_type_1311->mStatic=(_Bool)0;
        result_type_1311->mUniq=(_Bool)0;
        result_type_1311->mInline=(_Bool)0;
        result_type_1311->mGenerate=(_Bool)0;
        fun2_1320=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1287=__builtin_string(name_1312)))));
        (__right_value1287 = come_decrement_ref_count2(__right_value1287, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1320==((void*)0)||fun2_1320->mExternal) {
            fun_1321=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3508, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1312),(struct sType*)come_increment_ref_count(result_type_1311),(struct list$1sType$ph*)come_increment_ref_count(param_types_1315),(struct list$1char$ph*)come_increment_ref_count(param_names_1318),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1319),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1310),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1312)),(struct sFun*)come_increment_ref_count(fun_1321));
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3516, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value13=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1295=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3516, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1321),info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sFunNode_finalize;
            _inf_value13->clone=(void*)sFunNode_clone;
            _inf_value13->compile=(void*)sFunNode_compile;
            _inf_value13->sline=(void*)sNodeBase_sline;
            _inf_value13->sline_real=(void*)sNodeBase_sline_real;
            _inf_value13->sname=(void*)sNodeBase_sname;
            _inf_value13->terminated=(void*)sNodeBase_terminated;
            _inf_value13->kind=(void*)sFunNode_kind;
            node_1322=(struct sNode*)come_increment_ref_count(_inf_value13);
            come_call_finalizer3(__right_value1295,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1323=node_compile(node_1322,info);
            if(            !Value_1323) {
                multiple_assign_var44=((struct tuple2$2int$char$ph*)(__right_value1297=err_msg(info,"compiling error(X)")));
                come_exception_var_c27_1324=multiple_assign_var44->v1;
                Err_1325=(char*)come_increment_ref_count(multiple_assign_var44->v2);
                ((Err_1325)?(puts(Err_1325),exit(0)):(0));
                come_call_finalizer3(__right_value1297,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1325 = come_decrement_ref_count2(Err_1325, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            equaler_1292=fun_1321;
            come_call_finalizer3(fun_1321,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1322) ? node_1322 = come_decrement_ref_count2(node_1322, ((struct sNode*)node_1322)->finalize, ((struct sNode*)node_1322)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            equaler_1292=fun2_1320;
        }
        __dec_obj235=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1309);
        come_call_finalizer3(__dec_obj235,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1305;
        info->head=head_1308;
        info->sline=sline_1306;
        __dec_obj236=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1307);
        __dec_obj236 = come_decrement_ref_count2(__dec_obj236, (void*)0, (void*)0, 0,0,0, (void*)0);
        come_call_finalizer3(source_1296,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1307 = come_decrement_ref_count2(sname_1307, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1309,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1310,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1311,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1312 = come_decrement_ref_count2(name_1312, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(left_type_1313,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(right_type_1314,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1315,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1318,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1319,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1320,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1291;
    __dec_obj237=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1288);
    __dec_obj237 = come_decrement_ref_count2(__dec_obj237, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj238=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1289);
    __dec_obj238 = come_decrement_ref_count2(__dec_obj238, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1290;
    __result_obj__444 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1299=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3542, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),equaler_1292,(char*)come_increment_ref_count(real_fun_name_1293)))));
    (last_code_1288 = come_decrement_ref_count2(last_code_1288, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1289 = come_decrement_ref_count2(last_code2_1289, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1293 = come_decrement_ref_count2(real_fun_name_1293, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1294,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1299,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__444,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__444;
}

struct tuple2$2sFun$pchar$ph* create_cloner_automatically(struct sType* type, char* fun_name, struct sInfo* info){
void* __right_value1300 = (void*)0;
void* __right_value1301 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__445;
char* last_code_1326;
char* __dec_obj239;
char* last_code2_1327;
char* __dec_obj240;
_Bool comma_instead_of_semicolon_1328;
struct sClass* current_stack_frame_struct_1329;
struct sFun* cloner_1330;
void* __right_value1302 = (void*)0;
char* real_fun_name_1331;
void* __right_value1303 = (void*)0;
struct sType* type2_1332;
struct sClass* klass_1333;
char* fun_name2_1334;
void* __right_value1304 = (void*)0;
char* none_generics_name_1335;
void* __right_value1305 = (void*)0;
struct sType* obj_type_1336;
void* __right_value1306 = (void*)0;
char* __dec_obj241;
void* __right_value1307 = (void*)0;
char* fun_name3_1337;
void* __right_value1308 = (void*)0;
struct sGenericsFun* generics_fun_1338;
void* __right_value1309 = (void*)0;
void* __right_value1310 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var45 = (void*)0;
char* name_1339=0;
_Bool err_1340=0;
void* __right_value1311 = (void*)0;
void* __right_value1312 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__446;
void* __right_value1313 = (void*)0;
void* __right_value1314 = (void*)0;
char* __dec_obj242;
void* __right_value1315 = (void*)0;
char* __dec_obj243;
int i_1341;
void* __right_value1316 = (void*)0;
char* new_fun_name_1342;
void* __right_value1317 = (void*)0;
void* __right_value1318 = (void*)0;
char* __dec_obj244;
void* __right_value1319 = (void*)0;
char* __dec_obj245;
void* __right_value1320 = (void*)0;
void* __right_value1321 = (void*)0;
struct buffer* source_1343;
void* __right_value1322 = (void*)0;
char* name_1344;
void* __right_value1323 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1346;
struct tuple2$2char$phsType$ph* it_1347;
struct tuple2$2char$phsType$ph* multiple_assign_var46 = (void*)0;
char* name_1348=0;
struct sType* field_type_1349=0;
void* __right_value1324 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1352;
struct tuple2$2char$phsType$ph* it_1353;
struct tuple2$2char$phsType$ph* multiple_assign_var47 = (void*)0;
char* name_1354=0;
struct sType* field_type_1355=0;
void* __right_value1325 = (void*)0;
char* user_real_fun_name_1359;
void* __right_value1326 = (void*)0;
struct sFun* user_cloner_1360;
char* p_1362;
int sline_1363;
char* sname_1364;
struct buffer* source3_1365;
char* head_1366;
struct buffer* __dec_obj246;
void* __right_value1327 = (void*)0;
char* __dec_obj247;
void* __right_value1328 = (void*)0;
struct sBlock* block_1367;
void* __right_value1329 = (void*)0;
struct sType* result_type_1368;
void* __right_value1330 = (void*)0;
char* name_1369;
void* __right_value1331 = (void*)0;
struct sType* self_type_1370;
struct sType* __list_values31___1372[1];
void* __right_value1332 = (void*)0;
void* __right_value1333 = (void*)0;
struct list$1sType$ph* param_types_1371;
void* __right_value1334 = (void*)0;
char* __list_values32___1373[1];
void* __right_value1335 = (void*)0;
void* __right_value1336 = (void*)0;
struct list$1char$ph* param_names_1374;
void* __right_value1337 = (void*)0;
void* __right_value1338 = (void*)0;
struct list$1char$ph* param_default_parametors_1375;
void* __right_value1339 = (void*)0;
void* __right_value1340 = (void*)0;
struct sFun* fun2_1376;
void* __right_value1341 = (void*)0;
void* __right_value1342 = (void*)0;
void* __right_value1343 = (void*)0;
void* __right_value1344 = (void*)0;
struct sFun* fun_1377;
void* __right_value1345 = (void*)0;
void* __right_value1346 = (void*)0;
void* __right_value1347 = (void*)0;
struct sNode* _inf_value14;
struct sFunNode* _inf_obj_value14;
void* __right_value1348 = (void*)0;
struct sNode* node_1378;
_Bool Value_1379;
void* __right_value1349 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var48 = (void*)0;
int come_exception_var_c28_1380=0;
char* Err_1381=0;
char* __dec_obj248;
struct buffer* __dec_obj249;
char* __dec_obj250;
char* __dec_obj251;
void* __right_value1350 = (void*)0;
void* __right_value1351 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__447;
fun_name2_1334 = (void*)0;
memset(&i_1341, 0, sizeof(int));
    if(    string_operator_equals(type->mClass->mName,"void")) {
        __result_obj__445 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1301=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3548, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
        come_call_finalizer3(__right_value1301,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
        come_call_finalizer3(__result_obj__445,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
        return __result_obj__445;
    }
    last_code_1326=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj239=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj239 = come_decrement_ref_count2(__dec_obj239, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1327=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj240=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj240 = come_decrement_ref_count2(__dec_obj240, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1328=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1329=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1330=((void*)0);
    real_fun_name_1331=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1332=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1332;
    klass_1333=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        none_generics_name_1335=(char*)come_increment_ref_count(get_none_generics_name(type->mClass->mName));
        obj_type_1336=(struct sType*)come_increment_ref_count(solve_generics(type,info->generics_type,info));
        __dec_obj241=fun_name2_1334;
        fun_name2_1334=(char*)come_increment_ref_count(create_method_name(obj_type_1336,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj241 = come_decrement_ref_count2(__dec_obj241, (void*)0, (void*)0, 0,0,0, (void*)0);
        fun_name3_1337=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1335,fun_name));
        generics_fun_1338=((struct sGenericsFun*)(__right_value1308=map$2char$phsGenericsFun$ph$p_at(info->generics_funcs,fun_name3_1337,((void*)0))));
        come_call_finalizer3(__right_value1308,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        generics_fun_1338) {
            multiple_assign_var45=((struct tuple2$2char$phbool$*)(__right_value1310=create_generics_fun((char*)come_increment_ref_count(__builtin_string(fun_name2_1334)),generics_fun_1338,obj_type_1336,info)));
            name_1339=(char*)come_increment_ref_count(multiple_assign_var45->v1);
            err_1340=multiple_assign_var45->v2;
            come_call_finalizer3(__right_value1310,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
            if(            !err_1340) {
                if(                string_operator_equals(type->mClass->mName,"void")) {
                    __result_obj__446 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1312=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3588, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),(struct sFun*)((void*)0),(char*)come_increment_ref_count((char*)((void*)0))))));
                    (name_1339 = come_decrement_ref_count2(name_1339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (none_generics_name_1335 = come_decrement_ref_count2(none_generics_name_1335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(obj_type_1336,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name3_1337 = come_decrement_ref_count2(fun_name3_1337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code_1326 = come_decrement_ref_count2(last_code_1326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (last_code2_1327 = come_decrement_ref_count2(last_code2_1327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    (real_fun_name_1331 = come_decrement_ref_count2(real_fun_name_1331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(type2_1332,sType_finalize, 0, 0, 0, 0, (void*)0);
                    (fun_name2_1334 = come_decrement_ref_count2(fun_name2_1334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                    come_call_finalizer3(__right_value1312,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                    come_call_finalizer3(__result_obj__446,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
                    return __result_obj__446;
                }
            }
            cloner_1330=((struct sFun*)(__right_value1313=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1339)));
            come_call_finalizer3(__right_value1313,sFun_finalize, 0, 1, 0, 0, (void*)0);
            (name_1339 = come_decrement_ref_count2(name_1339, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        else {
            cloner_1330=((struct sFun*)(__right_value1314=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1334)));
            come_call_finalizer3(__right_value1314,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj242=real_fun_name_1331;
        real_fun_name_1331=(char*)come_increment_ref_count(fun_name2_1334);
        __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0);
        (none_generics_name_1335 = come_decrement_ref_count2(none_generics_name_1335, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(obj_type_1336,sType_finalize, 0, 0, 0, 0, (void*)0);
        (fun_name3_1337 = come_decrement_ref_count2(fun_name3_1337, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    }
    else {
        __dec_obj243=fun_name2_1334;
        fun_name2_1334=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
        __dec_obj243 = come_decrement_ref_count2(__dec_obj243, (void*)0, (void*)0, 0,0,0, (void*)0);
        for(        i_1341=128-1;        i_1341>=1;        i_1341--        ){
            new_fun_name_1342=(char*)come_increment_ref_count(xsprintf("%s_v%d",fun_name2_1334,i_1341));
            cloner_1330=((struct sFun*)(__right_value1317=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1342)));
            come_call_finalizer3(__right_value1317,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            cloner_1330) {
                __dec_obj244=fun_name2_1334;
                fun_name2_1334=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1342));
                __dec_obj244 = come_decrement_ref_count2(__dec_obj244, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1342 = come_decrement_ref_count2(new_fun_name_1342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1342 = come_decrement_ref_count2(new_fun_name_1342, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        cloner_1330==((void*)0)) {
            cloner_1330=((struct sFun*)(__right_value1319=map$2char$phsFun$ph$p_operator_load_element(info->funcs,fun_name2_1334)));
            come_call_finalizer3(__right_value1319,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
        __dec_obj245=real_fun_name_1331;
        real_fun_name_1331=(char*)come_increment_ref_count(fun_name2_1334);
        __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0);
    }
    if(    cloner_1330==((void*)0)&&!type->mClass->mNumber&&type->mPointerNum>0) {
        source_1343=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3623, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1343,"{\n");
        buffer_append_str(source_1343,"if(self == (void*)0) { return (void*)0; }\n");
        buffer_append_format(source_1343,"var result = new %s;\n",((char*)(__right_value1322=make_type_name_string(type,(_Bool)0,(_Bool)0,(_Bool)1,info,(_Bool)0))));
        (__right_value1322 = come_decrement_ref_count2(__right_value1322, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        klass_1333->mProtocol) {
            name_1344="_protocol_obj";
            char source2_1345[1024];
            memset(&source2_1345, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1345,1024,"if(self != ((void*)0) && self->clone != ((void*)0)) { result._protocol_obj = self->clone(); }\n");
            buffer_append_str(source_1343,source2_1345);
            klass_1333=((struct sClass*)(__right_value1323=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1333->mName)));
            come_call_finalizer3(__right_value1323,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1346=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1333->mFields)),it_1347=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1346));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1346));            it_1347=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1346))            ){
                multiple_assign_var46=it_1347;
                name_1348=(char*)come_increment_ref_count(multiple_assign_var46->v1);
                field_type_1349=(struct sType*)come_increment_ref_count(multiple_assign_var46->v2);
                if(                string_operator_equals(name_1348,"_protocol_obj")) {
                }
                else if(                list$1sNode$ph$p_length(field_type_1349->mArrayNum)>0) {
                    char source2_1350[1024];
                    memset(&source2_1350, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1350,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1348,name_1348,name_1348);
                    buffer_append_str(source_1343,source2_1350);
                }
                else {
                    char source2_1351[1024];
                    memset(&source2_1351, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1351,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1348,name_1348);
                    buffer_append_str(source_1343,source2_1351);
                }
                (name_1348 = come_decrement_ref_count2(name_1348, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1349,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1346,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        else {
            klass_1333=((struct sClass*)(__right_value1324=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1333->mName)));
            come_call_finalizer3(__right_value1324,sClass_finalize, 0, 1, 0, 0, (void*)0);
            for(            o2_saved_1352=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1333->mFields)),it_1353=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1352));            !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1352));            it_1353=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1352))            ){
                multiple_assign_var47=it_1353;
                name_1354=(char*)come_increment_ref_count(multiple_assign_var47->v1);
                field_type_1355=(struct sType*)come_increment_ref_count(multiple_assign_var47->v2);
                if(                field_type_1355->mHeap) {
                    char source2_1356[1024];
                    memset(&source2_1356, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1356,1024,"if(self != ((void*)0) && self.%s != ((void*)0)) { result.%s = clone self.%s; }\n",name_1354,name_1354,name_1354);
                    buffer_append_str(source_1343,source2_1356);
                }
                else if(                list$1sNode$ph$p_length(field_type_1355->mArrayNum)>0) {
                    char source2_1357[1024];
                    memset(&source2_1357, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1357,1024,"if(self != ((void*)0)) { memcpy(result.%s, self.%s, sizeof(result.%s)); }\n",name_1354,name_1354,name_1354);
                    buffer_append_str(source_1343,source2_1357);
                }
                else {
                    char source2_1358[1024];
                    memset(&source2_1358, 0, sizeof(char)                    *(1024)                    );
                    snprintf(source2_1358,1024,"if(self != ((void*)0)) { result.%s = self.%s; }\n",name_1354,name_1354);
                    buffer_append_str(source_1343,source2_1358);
                }
                (name_1354 = come_decrement_ref_count2(name_1354, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                come_call_finalizer3(field_type_1355,sType_finalize, 0, 0, 0, 0, (void*)0);
            }
            come_call_finalizer3(o2_saved_1352,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        }
        user_real_fun_name_1359=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,"user_clone",info,(_Bool)1));
        user_cloner_1360=((struct sFun*)(__right_value1326=map$2char$phsFun$ph$p_operator_load_element(info->funcs,user_real_fun_name_1359)));
        come_call_finalizer3(__right_value1326,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        user_cloner_1360) {
            char source2_1361[1024];
            memset(&source2_1361, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1361,1024,"if(self != ((void*)0)) { %s(result, self); }\n",user_real_fun_name_1359);
            buffer_append_str(source_1343,source2_1361);
        }
        buffer_append_format(source_1343,"return result;");
        buffer_append_char(source_1343,125);
        p_1362=info->p;
        sline_1363=info->sline;
        sname_1364=(char*)come_increment_ref_count(info->sname);
        source3_1365=(struct buffer*)come_increment_ref_count(info->source);
        head_1366=info->head;
        __dec_obj246=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1343);
        come_call_finalizer3(__dec_obj246,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj247=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1331));
        __dec_obj247 = come_decrement_ref_count2(__dec_obj247, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1367=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1368=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        name_1369=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1331));
        self_type_1370=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1370->mHeap=(_Bool)0;
        param_types_1371=(struct list$1sType$ph*)come_increment_ref_count((__list_values31___1372[0]=self_type_1370,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3714, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values31___1372)));
        param_names_1374=(struct list$1char$ph*)come_increment_ref_count((__list_values32___1373[0]=((char*)(__right_value1334=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3715, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values32___1373)));
        (__right_value1334 = come_decrement_ref_count2(__right_value1334, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1375=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3716, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1375,((void*)0));
        result_type_1368->mStatic=(_Bool)0;
        result_type_1368->mUniq=(_Bool)0;
        result_type_1368->mInline=(_Bool)0;
        result_type_1368->mGenerate=(_Bool)0;
        fun2_1376=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1339=__builtin_string(name_1369)))));
        (__right_value1339 = come_decrement_ref_count2(__right_value1339, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1376==((void*)0)||fun2_1376->mExternal) {
            fun_1377=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3727, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1369),(struct sType*)come_increment_ref_count(result_type_1368),(struct list$1sType$ph*)come_increment_ref_count(param_types_1371),(struct list$1char$ph*)come_increment_ref_count(param_names_1374),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1375),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1367),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)0,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1369)),(struct sFun*)come_increment_ref_count(fun_1377));
            _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3735, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value14=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1347=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3735, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1377),info))));
            _inf_value14->_protocol_obj=_inf_obj_value14;
            _inf_value14->finalize=(void*)sFunNode_finalize;
            _inf_value14->clone=(void*)sFunNode_clone;
            _inf_value14->compile=(void*)sFunNode_compile;
            _inf_value14->sline=(void*)sNodeBase_sline;
            _inf_value14->sline_real=(void*)sNodeBase_sline_real;
            _inf_value14->sname=(void*)sNodeBase_sname;
            _inf_value14->terminated=(void*)sNodeBase_terminated;
            _inf_value14->kind=(void*)sFunNode_kind;
            node_1378=(struct sNode*)come_increment_ref_count(_inf_value14);
            come_call_finalizer3(__right_value1347,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1379=node_compile(node_1378,info);
            if(            !Value_1379) {
                multiple_assign_var48=((struct tuple2$2int$char$ph*)(__right_value1349=err_msg(info,"compiling error(Y)")));
                come_exception_var_c28_1380=multiple_assign_var48->v1;
                Err_1381=(char*)come_increment_ref_count(multiple_assign_var48->v2);
                ((Err_1381)?(puts(Err_1381),exit(0)):(0));
                come_call_finalizer3(__right_value1349,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1381 = come_decrement_ref_count2(Err_1381, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            cloner_1330=fun_1377;
            come_call_finalizer3(fun_1377,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1378) ? node_1378 = come_decrement_ref_count2(node_1378, ((struct sNode*)node_1378)->finalize, ((struct sNode*)node_1378)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1330=fun2_1376;
        }
        __dec_obj248=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1364);
        __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1363;
        __dec_obj249=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1365);
        come_call_finalizer3(__dec_obj249,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1362;
        info->head=head_1366;
        info->sline=sline_1363;
        come_call_finalizer3(source_1343,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (user_real_fun_name_1359 = come_decrement_ref_count2(user_real_fun_name_1359, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        (sname_1364 = come_decrement_ref_count2(sname_1364, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1365,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1367,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1368,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1369 = come_decrement_ref_count2(name_1369, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1370,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1371,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1374,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1375,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1376,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1329;
    __dec_obj250=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1326);
    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj251=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1327);
    __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1328;
    __result_obj__447 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1351=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3763, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1330,(char*)come_increment_ref_count(real_fun_name_1331)))));
    (last_code_1326 = come_decrement_ref_count2(last_code_1326, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1327 = come_decrement_ref_count2(last_code2_1327, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1331 = come_decrement_ref_count2(real_fun_name_1331, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1332,sType_finalize, 0, 0, 0, 0, (void*)0);
    (fun_name2_1334 = come_decrement_ref_count2(fun_name2_1334, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(__right_value1351,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__447,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__447;
}

struct tuple2$2sFun$pchar$ph* create_to_string_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1382;
char* __dec_obj252;
char* last_code2_1383;
char* __dec_obj253;
_Bool comma_instead_of_semicolon_1384;
struct sClass* current_stack_frame_struct_1385;
struct sFun* cloner_1386;
void* __right_value1352 = (void*)0;
char* real_fun_name_1387;
void* __right_value1353 = (void*)0;
struct sType* type2_1388;
struct sClass* klass_1389;
void* __right_value1354 = (void*)0;
void* __right_value1355 = (void*)0;
struct buffer* source_1390;
int i_1391;
void* __right_value1356 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1392;
struct tuple2$2char$phsType$ph* it_1393;
struct tuple2$2char$phsType$ph* multiple_assign_var49 = (void*)0;
char* name_1394=0;
struct sType* field_type_1395=0;
char* p_1398;
int sline_1399;
char* sname_1400;
struct buffer* source3_1401;
char* head_1402;
struct buffer* __dec_obj254;
void* __right_value1357 = (void*)0;
char* __dec_obj255;
void* __right_value1358 = (void*)0;
struct sBlock* block_1403;
void* __right_value1359 = (void*)0;
void* __right_value1360 = (void*)0;
void* __right_value1361 = (void*)0;
struct sType* result_type_1404;
void* __right_value1362 = (void*)0;
char* name_1405;
void* __right_value1363 = (void*)0;
struct sType* self_type_1406;
struct sType* __list_values33___1408[1];
void* __right_value1364 = (void*)0;
void* __right_value1365 = (void*)0;
struct list$1sType$ph* param_types_1407;
void* __right_value1366 = (void*)0;
char* __list_values34___1409[1];
void* __right_value1367 = (void*)0;
void* __right_value1368 = (void*)0;
struct list$1char$ph* param_names_1410;
void* __right_value1369 = (void*)0;
void* __right_value1370 = (void*)0;
struct list$1char$ph* param_default_parametors_1411;
void* __right_value1371 = (void*)0;
void* __right_value1372 = (void*)0;
struct sFun* fun2_1412;
void* __right_value1373 = (void*)0;
void* __right_value1374 = (void*)0;
void* __right_value1375 = (void*)0;
void* __right_value1376 = (void*)0;
struct sFun* fun_1413;
void* __right_value1377 = (void*)0;
void* __right_value1378 = (void*)0;
void* __right_value1379 = (void*)0;
struct sNode* _inf_value15;
struct sFunNode* _inf_obj_value15;
void* __right_value1380 = (void*)0;
struct sNode* node_1414;
_Bool Value_1415;
void* __right_value1381 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var50 = (void*)0;
int come_exception_var_c29_1416=0;
char* Err_1417=0;
char* __dec_obj256;
struct buffer* __dec_obj257;
char* __dec_obj258;
char* __dec_obj259;
void* __right_value1382 = (void*)0;
void* __right_value1383 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__448;
    last_code_1382=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj252=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1383=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj253=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1384=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1385=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    cloner_1386=((void*)0);
    real_fun_name_1387=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1388=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1388;
    klass_1389=type->mClass;
    if(    type->mPointerNum>0&&!klass_1389->mNumber) {
        source_1390=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 3788, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1390,"{\n");
        buffer_append_str(source_1390,"var result = new buffer();\n");
        buffer_append_format(source_1390,"result.append_str(\"%s {\");\n",klass_1389->mName);
        i_1391=0;
        klass_1389=((struct sClass*)(__right_value1356=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1389->mName)));
        come_call_finalizer3(__right_value1356,sClass_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_1392=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1389->mFields)),it_1393=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1392));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1392));        it_1393=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1392))        ){
            multiple_assign_var49=it_1393;
            name_1394=(char*)come_increment_ref_count(multiple_assign_var49->v1);
            field_type_1395=(struct sType*)come_increment_ref_count(multiple_assign_var49->v2);
            if(            i_1391==list$1tuple2$2char$phsType$ph$ph$p_length(klass_1389->mFields)-1) {
                char source2_1396[1024];
                memset(&source2_1396, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1396,1024,"result.append_str(\"%s:\");\n",name_1394);
                buffer_append_str(source_1390,source2_1396);
                snprintf(source2_1396,1024,"result.append_str(self.%s.to_string());\n",name_1394);
                buffer_append_str(source_1390,source2_1396);
            }
            else {
                char source2_1397[1024];
                memset(&source2_1397, 0, sizeof(char)                *(1024)                );
                snprintf(source2_1397,1024,"result.append_str(\"%s:\");\n",name_1394);
                buffer_append_str(source_1390,source2_1397);
                snprintf(source2_1397,1024,"result.append_str(self.%s.to_string());\n",name_1394);
                buffer_append_str(source_1390,source2_1397);
                snprintf(source2_1397,1024,"result.append_str(\",\");\n");
                buffer_append_str(source_1390,source2_1397);
            }
            i_1391++;
            (name_1394 = come_decrement_ref_count2(name_1394, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1395,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1392,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_str(source_1390,"result.append_str(\"}\");\n");
        buffer_append_format(source_1390,"return result.to_string();\n");
        buffer_append_char(source_1390,125);
        p_1398=info->p;
        sline_1399=info->sline;
        sname_1400=(char*)come_increment_ref_count(info->sname);
        source3_1401=(struct buffer*)come_increment_ref_count(info->source);
        head_1402=info->head;
        __dec_obj254=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1390);
        come_call_finalizer3(__dec_obj254,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj255=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1387));
        __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1403=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1404=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 3849, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("char*")),(_Bool)0,info));
        result_type_1404->mHeap=(_Bool)1;
        name_1405=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1387));
        self_type_1406=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1406->mHeap=(_Bool)0;
        param_types_1407=(struct list$1sType$ph*)come_increment_ref_count((__list_values33___1408[0]=self_type_1406,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 3854, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values33___1408)));
        param_names_1410=(struct list$1char$ph*)come_increment_ref_count((__list_values34___1409[0]=((char*)(__right_value1366=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3855, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values34___1409)));
        (__right_value1366 = come_decrement_ref_count2(__right_value1366, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1411=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 3856, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1411,((void*)0));
        result_type_1404->mStatic=(_Bool)0;
        result_type_1404->mUniq=(_Bool)0;
        result_type_1404->mInline=(_Bool)0;
        result_type_1404->mGenerate=(_Bool)0;
        fun2_1412=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1371=__builtin_string(name_1405)))));
        (__right_value1371 = come_decrement_ref_count2(__right_value1371, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1412==((void*)0)||fun2_1412->mExternal) {
            fun_1413=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 3866, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1405),(struct sType*)come_increment_ref_count(result_type_1404),(struct list$1sType$ph*)come_increment_ref_count(param_types_1407),(struct list$1char$ph*)come_increment_ref_count(param_names_1410),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1411),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1403),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1405)),(struct sFun*)come_increment_ref_count(fun_1413));
            cloner_1386=fun_1413;
            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 3876, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value15=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1379=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 3876, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1413),info))));
            _inf_value15->_protocol_obj=_inf_obj_value15;
            _inf_value15->finalize=(void*)sFunNode_finalize;
            _inf_value15->clone=(void*)sFunNode_clone;
            _inf_value15->compile=(void*)sFunNode_compile;
            _inf_value15->sline=(void*)sNodeBase_sline;
            _inf_value15->sline_real=(void*)sNodeBase_sline_real;
            _inf_value15->sname=(void*)sNodeBase_sname;
            _inf_value15->terminated=(void*)sNodeBase_terminated;
            _inf_value15->kind=(void*)sFunNode_kind;
            node_1414=(struct sNode*)come_increment_ref_count(_inf_value15);
            come_call_finalizer3(__right_value1379,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1415=node_compile(node_1414,info);
            if(            !Value_1415) {
                multiple_assign_var50=((struct tuple2$2int$char$ph*)(__right_value1381=err_msg(info,"compiling error(Y)")));
                come_exception_var_c29_1416=multiple_assign_var50->v1;
                Err_1417=(char*)come_increment_ref_count(multiple_assign_var50->v2);
                ((Err_1417)?(puts(Err_1417),exit(0)):(0));
                come_call_finalizer3(__right_value1381,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1417 = come_decrement_ref_count2(Err_1417, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1413,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1414) ? node_1414 = come_decrement_ref_count2(node_1414, ((struct sNode*)node_1414)->finalize, ((struct sNode*)node_1414)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            cloner_1386=fun2_1412;
        }
        __dec_obj256=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1400);
        __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1399;
        __dec_obj257=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1401);
        come_call_finalizer3(__dec_obj257,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1398;
        info->head=head_1402;
        info->sline=sline_1399;
        come_call_finalizer3(source_1390,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1400 = come_decrement_ref_count2(sname_1400, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1401,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1403,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1404,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1405 = come_decrement_ref_count2(name_1405, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1406,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1407,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1410,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1411,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1412,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1385;
    __dec_obj258=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1382);
    __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj259=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1383);
    __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1384;
    __result_obj__448 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1383=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 3902, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),cloner_1386,(char*)come_increment_ref_count(real_fun_name_1387)))));
    (last_code_1382 = come_decrement_ref_count2(last_code_1382, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1383 = come_decrement_ref_count2(last_code2_1383, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1387 = come_decrement_ref_count2(real_fun_name_1387, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1388,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1383,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__448,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__448;
}

struct tuple2$2sFun$pchar$ph* create_get_hash_key_automatically(struct sType* type, char* fun_name, struct sInfo* info){
char* last_code_1463;
char* __dec_obj270;
char* last_code2_1464;
char* __dec_obj271;
_Bool comma_instead_of_semicolon_1465;
struct sClass* current_stack_frame_struct_1466;
struct sFun* get_hash_key_fun_1467;
void* __right_value1428 = (void*)0;
char* real_fun_name_1468;
void* __right_value1429 = (void*)0;
struct sType* type2_1469;
struct sClass* klass_1470;
void* __right_value1430 = (void*)0;
void* __right_value1431 = (void*)0;
char* none_generics_name_1471;
void* __right_value1432 = (void*)0;
char* generics_fun_name_1472;
void* __right_value1433 = (void*)0;
struct sGenericsFun* generics_fun_1473;
void* __right_value1434 = (void*)0;
struct tuple2$2char$phbool$* multiple_assign_var54 = (void*)0;
char* name_1474=0;
_Bool err_1475=0;
void* __right_value1435 = (void*)0;
int i_1476;
void* __right_value1436 = (void*)0;
char* new_fun_name_1477;
void* __right_value1437 = (void*)0;
void* __right_value1438 = (void*)0;
char* __dec_obj272;
void* __right_value1439 = (void*)0;
void* __right_value1440 = (void*)0;
void* __right_value1441 = (void*)0;
struct buffer* source_1478;
int i_1479;
void* __right_value1442 = (void*)0;
struct list$1tuple2$2char$phsType$ph$ph* o2_saved_1480;
struct tuple2$2char$phsType$ph* it_1481;
struct tuple2$2char$phsType$ph* multiple_assign_var55 = (void*)0;
char* name_1482=0;
struct sType* field_type_1483=0;
char* p_1485;
int sline_1486;
char* sname_1487;
struct buffer* source3_1488;
char* head_1489;
struct buffer* __dec_obj273;
void* __right_value1443 = (void*)0;
char* __dec_obj274;
void* __right_value1444 = (void*)0;
struct sBlock* block_1490;
void* __right_value1445 = (void*)0;
void* __right_value1446 = (void*)0;
void* __right_value1447 = (void*)0;
struct sType* result_type_1491;
void* __right_value1448 = (void*)0;
char* name_1492;
void* __right_value1449 = (void*)0;
struct sType* self_type_1493;
struct sType* __list_values37___1495[1];
void* __right_value1450 = (void*)0;
void* __right_value1451 = (void*)0;
struct list$1sType$ph* param_types_1494;
void* __right_value1452 = (void*)0;
char* __list_values38___1496[1];
void* __right_value1453 = (void*)0;
void* __right_value1454 = (void*)0;
struct list$1char$ph* param_names_1497;
void* __right_value1455 = (void*)0;
void* __right_value1456 = (void*)0;
struct list$1char$ph* param_default_parametors_1498;
void* __right_value1457 = (void*)0;
void* __right_value1458 = (void*)0;
struct sFun* fun2_1499;
void* __right_value1459 = (void*)0;
void* __right_value1460 = (void*)0;
void* __right_value1461 = (void*)0;
void* __right_value1462 = (void*)0;
struct sFun* fun_1500;
void* __right_value1463 = (void*)0;
void* __right_value1464 = (void*)0;
void* __right_value1465 = (void*)0;
struct sNode* _inf_value17;
struct sFunNode* _inf_obj_value17;
void* __right_value1466 = (void*)0;
struct sNode* node_1501;
_Bool Value_1502;
void* __right_value1467 = (void*)0;
struct tuple2$2int$char$ph* multiple_assign_var56 = (void*)0;
int come_exception_var_c31_1503=0;
char* Err_1504=0;
char* __dec_obj275;
struct buffer* __dec_obj276;
char* __dec_obj277;
char* __dec_obj278;
void* __right_value1468 = (void*)0;
void* __right_value1469 = (void*)0;
struct tuple2$2sFun$pchar$ph* __result_obj__450;
memset(&i_1476, 0, sizeof(int));
    last_code_1463=(char*)come_increment_ref_count(info->module->mLastCode);
    __dec_obj270=info->module->mLastCode;
    info->module->mLastCode=((void*)0);
    __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
    last_code2_1464=(char*)come_increment_ref_count(info->module->mLastCode2);
    __dec_obj271=info->module->mLastCode2;
    info->module->mLastCode2=((void*)0);
    __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
    comma_instead_of_semicolon_1465=info->comma_instead_of_semicolon;
    info->comma_instead_of_semicolon=(_Bool)0;
    current_stack_frame_struct_1466=info->current_stack_frame_struct;
    info->current_stack_frame_struct=((void*)0);
    get_hash_key_fun_1467=((void*)0);
    real_fun_name_1468=(char*)come_increment_ref_count(create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1));
    type2_1469=(struct sType*)come_increment_ref_count(solve_generics(type,type,info));
    type=type2_1469;
    klass_1470=type->mClass;
    if(    list$1sType$ph$p_length(type->mGenericsTypes)>0) {
        get_hash_key_fun_1467=((struct sFun*)(__right_value1430=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1468)));
        come_call_finalizer3(__right_value1430,sFun_finalize, 0, 1, 0, 0, (void*)0);
        if(        get_hash_key_fun_1467==((void*)0)) {
            none_generics_name_1471=(char*)come_increment_ref_count(get_none_generics_name(type2_1469->mClass->mName));
            generics_fun_name_1472=(char*)come_increment_ref_count(xsprintf("%s_%s",none_generics_name_1471,fun_name));
            generics_fun_1473=((struct sGenericsFun*)(__right_value1433=map$2char$phsGenericsFun$ph$p_operator_load_element(info->generics_funcs,generics_fun_name_1472)));
            come_call_finalizer3(__right_value1433,sGenericsFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            generics_fun_1473) {
                multiple_assign_var54=((struct tuple2$2char$phbool$*)(__right_value1434=create_generics_fun((char*)come_increment_ref_count(real_fun_name_1468),generics_fun_1473,type,info)));
                name_1474=(char*)come_increment_ref_count(multiple_assign_var54->v1);
                err_1475=multiple_assign_var54->v2;
                come_call_finalizer3(__right_value1434,tuple2$2char$phbool$$p_finalize, 0, 1, 0, 0, (void*)0);
                if(                !err_1475) {
                    printf("%s %d: can't create generics get_hash_key_fun\n",info->sname,info->sline);
                    exit(2);
                }
                get_hash_key_fun_1467=((struct sFun*)(__right_value1435=map$2char$phsFun$ph$p_operator_load_element(info->funcs,name_1474)));
                come_call_finalizer3(__right_value1435,sFun_finalize, 0, 1, 0, 0, (void*)0);
                (name_1474 = come_decrement_ref_count2(name_1474, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            (none_generics_name_1471 = come_decrement_ref_count2(none_generics_name_1471, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            (generics_fun_name_1472 = come_decrement_ref_count2(generics_fun_name_1472, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
    }
    else {
        for(        i_1476=128-1;        i_1476>=1;        i_1476--        ){
            new_fun_name_1477=(char*)come_increment_ref_count(xsprintf("%s_v%d",real_fun_name_1468,i_1476));
            get_hash_key_fun_1467=((struct sFun*)(__right_value1437=map$2char$phsFun$ph$p_operator_load_element(info->funcs,new_fun_name_1477)));
            come_call_finalizer3(__right_value1437,sFun_finalize, 0, 1, 0, 0, (void*)0);
            if(            get_hash_key_fun_1467) {
                __dec_obj272=real_fun_name_1468;
                real_fun_name_1468=(char*)come_increment_ref_count(__builtin_string(new_fun_name_1477));
                __dec_obj272 = come_decrement_ref_count2(__dec_obj272, (void*)0, (void*)0, 0,0,0, (void*)0);
                (new_fun_name_1477 = come_decrement_ref_count2(new_fun_name_1477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
                break;
            }
            (new_fun_name_1477 = come_decrement_ref_count2(new_fun_name_1477, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        }
        if(        get_hash_key_fun_1467==((void*)0)) {
            get_hash_key_fun_1467=((struct sFun*)(__right_value1439=map$2char$phsFun$ph$p_operator_load_element(info->funcs,real_fun_name_1468)));
            come_call_finalizer3(__right_value1439,sFun_finalize, 0, 1, 0, 0, (void*)0);
        }
    }
    if(    get_hash_key_fun_1467==((void*)0)&&type->mPointerNum>0&&!klass_1470->mNumber&&!klass_1470->mProtocol) {
        source_1478=(struct buffer*)come_increment_ref_count(buffer_initialize((struct buffer*)come_increment_ref_count((struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "05function.c", 4165, "struct buffer", buffer_finalize, buffer_clone, buffer_get_hash_key, buffer_equals))));
        buffer_append_str(source_1478,"{\n");
        buffer_append_str(source_1478,"unsigned int result = 0;\n");
        i_1479=0;
        klass_1470=((struct sClass*)(__right_value1442=map$2char$phsClass$ph$p_operator_load_element(info->classes,klass_1470->mName)));
        come_call_finalizer3(__right_value1442,sClass_finalize, 0, 1, 0, 0, (void*)0);
        for(        o2_saved_1480=(struct list$1tuple2$2char$phsType$ph$ph*)come_increment_ref_count((klass_1470->mFields)),it_1481=list$1tuple2$2char$phsType$ph$ph$p_begin((o2_saved_1480));        !list$1tuple2$2char$phsType$ph$ph$p_end((o2_saved_1480));        it_1481=list$1tuple2$2char$phsType$ph$ph$p_next((o2_saved_1480))        ){
            multiple_assign_var55=it_1481;
            name_1482=(char*)come_increment_ref_count(multiple_assign_var55->v1);
            field_type_1483=(struct sType*)come_increment_ref_count(multiple_assign_var55->v2);
            char source2_1484[1024];
            memset(&source2_1484, 0, sizeof(char)            *(1024)            );
            snprintf(source2_1484,1024,"result += ((int)self.%s).get_hash_key();\n",name_1482);
            buffer_append_str(source_1478,source2_1484);
            i_1479++;
            (name_1482 = come_decrement_ref_count2(name_1482, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            come_call_finalizer3(field_type_1483,sType_finalize, 0, 0, 0, 0, (void*)0);
        }
        come_call_finalizer3(o2_saved_1480,list$1tuple2$2char$phsType$ph$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        buffer_append_format(source_1478,"return result;\n");
        buffer_append_char(source_1478,125);
        p_1485=info->p;
        sline_1486=info->sline;
        sname_1487=(char*)come_increment_ref_count(info->sname);
        source3_1488=(struct buffer*)come_increment_ref_count(info->source);
        head_1489=info->head;
        __dec_obj273=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source_1478);
        come_call_finalizer3(__dec_obj273,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=info->source->buf;
        info->head=info->source->buf;
        __dec_obj274=info->sname;
        info->sname=(char*)come_increment_ref_count(__builtin_string(real_fun_name_1468));
        __dec_obj274 = come_decrement_ref_count2(__dec_obj274, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=1;
        block_1490=(struct sBlock*)come_increment_ref_count(parse_block(info,(_Bool)0,(_Bool)0,(_Bool)0));
        result_type_1491=(struct sType*)come_increment_ref_count(sType_initialize((struct sType*)come_increment_ref_count((struct sType*)come_calloc(1, sizeof(struct sType)*(1), "05function.c", 4202, "struct sType", sType_finalize, sType_clone, sType_get_hash_key, sType_equals)),(char*)come_increment_ref_count(xsprintf("int")),(_Bool)0,info));
        result_type_1491->mUnsigned=(_Bool)1;
        name_1492=(char*)come_increment_ref_count(come_call_cloner(string_clone, real_fun_name_1468));
        self_type_1493=(struct sType*)come_increment_ref_count(come_call_cloner(sType_clone, type));
        self_type_1493->mHeap=(_Bool)0;
        param_types_1494=(struct list$1sType$ph*)come_increment_ref_count((__list_values37___1495[0]=self_type_1493,
list$1sType$ph_initialize_with_values((struct list$1sType$ph**)come_increment_ref_count((struct list$1sType$ph*)come_calloc(1, sizeof(struct list$1sType$ph)*(1), "05function.c", 4207, "struct list$1sType$ph", list$1sType$ph_finalize, list$1sType$ph_clone, list$1sType$ph_get_hash_key, list$1sType$ph_equals)),1,__list_values37___1495)));
        param_names_1497=(struct list$1char$ph*)come_increment_ref_count((__list_values38___1496[0]=((char*)(__right_value1452=__builtin_string("self"))),
list$1char$ph_initialize_with_values((struct list$1char$ph**)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4208, "struct list$1char$ph", list$1char$ph_finalize, list$1char$ph_clone, list$1char$ph_get_hash_key, list$1char$ph_equals)),1,__list_values38___1496)));
        (__right_value1452 = come_decrement_ref_count2(__right_value1452, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        param_default_parametors_1498=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph$p_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc(1, sizeof(struct list$1char$ph)*(1), "05function.c", 4209, "struct list$1char$ph*", (void*)0, (void*)0, (void*)0, (void*)0))));
        list$1char$ph$p_push_back(param_default_parametors_1498,((void*)0));
        result_type_1491->mStatic=(_Bool)0;
        result_type_1491->mUniq=(_Bool)0;
        result_type_1491->mInline=(_Bool)0;
        result_type_1491->mGenerate=(_Bool)0;
        fun2_1499=(struct sFun*)come_increment_ref_count(map$2char$phsFun$ph$p_operator_load_element(info->funcs,((char*)(__right_value1457=__builtin_string(name_1492)))));
        (__right_value1457 = come_decrement_ref_count2(__right_value1457, (void*)0, (void*)0, 1/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        if(        fun2_1499==((void*)0)||fun2_1499->mExternal) {
            fun_1500=(struct sFun*)come_increment_ref_count(sFun_initialize((struct sFun*)come_increment_ref_count((struct sFun*)come_calloc(1, sizeof(struct sFun)*(1), "05function.c", 4219, "struct sFun", sFun_finalize, sFun_clone, sFun_get_hash_key, sFun_equals)),(char*)come_increment_ref_count(name_1492),(struct sType*)come_increment_ref_count(result_type_1491),(struct list$1sType$ph*)come_increment_ref_count(param_types_1494),(struct list$1char$ph*)come_increment_ref_count(param_names_1497),(struct list$1char$ph*)come_increment_ref_count(param_default_parametors_1498),(_Bool)0,(_Bool)0,(struct sBlock*)come_increment_ref_count(block_1490),(_Bool)1,info,(_Bool)0,(_Bool)0,(_Bool)1,(char*)come_increment_ref_count(xsprintf("")),(char*)come_increment_ref_count(xsprintf(""))));
            map$2char$phsFun$ph$p_insert(info->funcs,(char*)come_increment_ref_count(__builtin_string(name_1492)),(struct sFun*)come_increment_ref_count(fun_1500));
            get_hash_key_fun_1467=fun_1500;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "05function.c", 4229, "struct sNode", (void*)0, (void*)0, (void*)0, (void*)0);
            _inf_obj_value17=(struct sFunNode*)come_increment_ref_count(((struct sFunNode*)(__right_value1465=sFunNode_initialize((struct sFunNode*)come_increment_ref_count((struct sFunNode*)come_calloc(1, sizeof(struct sFunNode)*(1), "05function.c", 4229, "struct sFunNode*", (void*)0, (void*)0, (void*)0, (void*)0)),(struct sFun*)come_increment_ref_count(fun_1500),info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sFunNode_finalize;
            _inf_value17->clone=(void*)sFunNode_clone;
            _inf_value17->compile=(void*)sFunNode_compile;
            _inf_value17->sline=(void*)sNodeBase_sline;
            _inf_value17->sline_real=(void*)sNodeBase_sline_real;
            _inf_value17->sname=(void*)sNodeBase_sname;
            _inf_value17->terminated=(void*)sNodeBase_terminated;
            _inf_value17->kind=(void*)sFunNode_kind;
            node_1501=(struct sNode*)come_increment_ref_count(_inf_value17);
            come_call_finalizer3(__right_value1465,sFunNode_finalize, 0, 1, 0, 0, (void*)0);
            Value_1502=node_compile(node_1501,info);
            if(            !Value_1502) {
                multiple_assign_var56=((struct tuple2$2int$char$ph*)(__right_value1467=err_msg(info,"compiling error(Y)")));
                come_exception_var_c31_1503=multiple_assign_var56->v1;
                Err_1504=(char*)come_increment_ref_count(multiple_assign_var56->v2);
                ((Err_1504)?(puts(Err_1504),exit(0)):(0));
                come_call_finalizer3(__right_value1467,tuple2$2int$char$ph$p_finalize, 0, 1, 0, 0, (void*)0);
                exit(2);
                (Err_1504 = come_decrement_ref_count2(Err_1504, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
            }
            else {
            }
            come_call_finalizer3(fun_1500,sFun_finalize, 0, 0, 0, 0, (void*)0);
            ((node_1501) ? node_1501 = come_decrement_ref_count2(node_1501, ((struct sNode*)node_1501)->finalize, ((struct sNode*)node_1501)->_protocol_obj, 0/* no_decrement */, 0/*no_free*/,0/*force_delete*/, (void*)0):(void*)0);
        }
        else {
            get_hash_key_fun_1467=fun2_1499;
        }
        __dec_obj275=info->sname;
        info->sname=(char*)come_increment_ref_count(sname_1487);
        __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0);
        info->sline=sline_1486;
        __dec_obj276=info->source;
        info->source=(struct buffer*)come_increment_ref_count(source3_1488);
        come_call_finalizer3(__dec_obj276,buffer_finalize, 0/* alloca value */, 0/* no decrement */, 0/* no_free */, 0/* force_delete_ */, (void*)0);
        info->p=p_1485;
        info->head=head_1489;
        info->sline=sline_1486;
        come_call_finalizer3(source_1478,buffer_finalize, 0, 0, 0, 0, (void*)0);
        (sname_1487 = come_decrement_ref_count2(sname_1487, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(source3_1488,buffer_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(block_1490,sBlock_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(result_type_1491,sType_finalize, 0, 0, 0, 0, (void*)0);
        (name_1492 = come_decrement_ref_count2(name_1492, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
        come_call_finalizer3(self_type_1493,sType_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_types_1494,list$1sType$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_names_1497,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(param_default_parametors_1498,list$1char$ph$p_finalize, 0, 0, 0, 0, (void*)0);
        come_call_finalizer3(fun2_1499,sFun_finalize, 0, 0, 0, 0, (void*)0);
    }
    info->current_stack_frame_struct=current_stack_frame_struct_1466;
    __dec_obj277=info->module->mLastCode;
    info->module->mLastCode=(char*)come_increment_ref_count(last_code_1463);
    __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
    __dec_obj278=info->module->mLastCode2;
    info->module->mLastCode2=(char*)come_increment_ref_count(last_code2_1464);
    __dec_obj278 = come_decrement_ref_count2(__dec_obj278, (void*)0, (void*)0, 0,0,0, (void*)0);
    info->comma_instead_of_semicolon=comma_instead_of_semicolon_1465;
    __result_obj__450 = come_increment_ref_count(((struct tuple2$2sFun$pchar$ph*)(__right_value1469=tuple2$2sFun$pchar$ph_initialize((struct tuple2$2sFun$pchar$ph**)come_increment_ref_count((struct tuple2$2sFun$pchar$ph*)come_calloc(1, sizeof(struct tuple2$2sFun$pchar$ph)*(1), "05function.c", 4255, "struct tuple2$2sFun$pchar$ph", tuple2$2sFun$pchar$ph_finalize, tuple2$2sFun$pchar$ph_clone, tuple2$2sFun$pchar$ph_get_hash_key, tuple2$2sFun$pchar$ph_equals)),get_hash_key_fun_1467,(char*)come_increment_ref_count(real_fun_name_1468)))));
    (last_code_1463 = come_decrement_ref_count2(last_code_1463, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (last_code2_1464 = come_decrement_ref_count2(last_code2_1464, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    (real_fun_name_1468 = come_decrement_ref_count2(real_fun_name_1468, (void*)0, (void*)0, 0/* no_decrement*/, 0/* no_free*/, 0/* force_delete_*/, (void*)0));
    come_call_finalizer3(type2_1469,sType_finalize, 0, 0, 0, 0, (void*)0);
    come_call_finalizer3(__right_value1469,tuple2$2sFun$pchar$ph$p_finalize, 0, 1, 0, 0, (void*)0);
    come_call_finalizer3(__result_obj__450,tuple2$2sFun$pchar$ph$p_finalize, 0, 0, 1, 0, (void*)0);
    return __result_obj__450;
}

